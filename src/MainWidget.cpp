#include "MainWidget.h"

#include <QLayout>
#include <QGraphicsItem>

#include "MainGraphicsView.h"
#include "ChesspieceView.h"
#include "consts.h"

#include <QDebug>

MainWidget::MainWidget(QWidget *parent) : QWidget(parent),
    m_unitLength(UNITLENGTH)
{
    initChesspieceSet();

    setFixedSize(WIDTH, HEIGHT);

    QHBoxLayout *pMainLayout = new QHBoxLayout();
    setLayout(pMainLayout);

    MainGraphicsView *pGraphicsView = new MainGraphicsView();
    pMainLayout->addWidget(pGraphicsView);

    QVBoxLayout *pRightLayout = new QVBoxLayout();
    pMainLayout->addLayout(pRightLayout);

    m_pStartButton = new QPushButton("start");
    pRightLayout->addWidget(m_pStartButton);
    connect(m_pStartButton, &QPushButton::clicked, this, onStartClicked);





    m_pGraphicsScene = new QGraphicsScene();
    pGraphicsView->setScene(m_pGraphicsScene);

    drawChessboard();


///////////////////////////////////////////////////////////////////
    connect(pMainLayout, &QObject::destroyed, this, [](){
        qDebug() << "mainLayout destoryed";
    });

    connect(pRightLayout, &QObject::destroyed, this, [](){
        qDebug() << "rightLayout destoryed";
    });

    connect(pGraphicsView, &QObject::destroyed, this, [](){
        qDebug() << "pGraphicsView destoryed";
    });

    connect(m_pGraphicsScene, &QObject::destroyed, this, [](){
        qDebug() << "m_pGraphicsScene destoryed";
    });

    connect(m_pStartButton, &QObject::destroyed, this, [](){
        qDebug() << "m_pStartButton destoryed";
    });

}

MainWidget::~MainWidget()
{
    foreach (QGraphicsPixmapItem* pItem, m_ChesspieceSet) {
        m_pGraphicsScene->removeItem(pItem);
        delete pItem;
    }

    delete m_pGraphicsScene;
}

void MainWidget::drawChessPieces()
{
    ;;;;;
}

void MainWidget::onStartClicked()
{
    foreach (QGraphicsPixmapItem* pItem, m_ChesspieceSet) {
        m_pGraphicsScene->addItem(pItem);
    }
}

void MainWidget::addLine(int x1, int y1, int x2, int y2)
{
    QGraphicsLineItem *pLine = new QGraphicsLineItem(x1, y1, x2, y2);
    m_pGraphicsScene->addItem(pLine);
}

void MainWidget::addLineInChessboard(int x1, int y1, int x2, int y2)
{
    if (xInChessboard(x1) && xInChessboard(x2) && yInChessboard(y1) && yInChessboard(y2)) {
        addLine(x1, y1, x2, y2);
    }
}

void MainWidget::addSpecialStarToPoint(int x, int y)
{
    int n = m_unitLength / 20;

    int xx = m_unitLength * x;
    int yy = m_unitLength * y;

    addLineInChessboard(xx - n, yy - n, xx - n, yy - 4 * n);
    addLineInChessboard(xx - n, yy - n, xx - 4 * n, yy - n);

    addLineInChessboard(xx + n, yy + n, xx + n, yy + 4 * n);
    addLineInChessboard(xx + n, yy + n, xx + 4 * n, yy + n);

    addLineInChessboard(xx - n, yy + n, xx - n, yy + 4 * n);
    addLineInChessboard(xx - n, yy + n, xx - 4 * n, yy + n);

    addLineInChessboard(xx + n, yy - n, xx + n, yy - 4 * n);
    addLineInChessboard(xx + n, yy - n, xx + 4 * n, yy - n);
}

void MainWidget::drawChessboard()
{
    // draw the vertical lines
    addLine(0, 0, 0, m_unitLength * 9);
    for (int i = 1; i < 8; ++i) {
        addLine(m_unitLength * i, 0, m_unitLength * i, m_unitLength * 4);
        addLine(m_unitLength * i, m_unitLength * 5, m_unitLength * i, m_unitLength * 9);
    }
    addLine(m_unitLength * 8, 0, m_unitLength * 8, m_unitLength * 9);

    // draw the horizontal lines
    for (int i = 0; i < 10; ++i) {
        addLine(0, m_unitLength * i, m_unitLength * 8, m_unitLength * i);
    }

    // draw the palace
    addLine(m_unitLength * 3, 0, m_unitLength * 5, m_unitLength * 2);
    addLine(m_unitLength * 5, 0, m_unitLength * 3, m_unitLength * 2);
    addLine(m_unitLength * 3, m_unitLength * 7, m_unitLength * 5, m_unitLength * 9);
    addLine(m_unitLength * 5, m_unitLength * 7, m_unitLength * 3, m_unitLength * 9);

    // draw the special star
    addSpecialStarToPoint(1, 2);
    addSpecialStarToPoint(7, 2);

    addSpecialStarToPoint(1, 7);
    addSpecialStarToPoint(7, 7);

    for (int i = 0; i < 5; ++i) {
        addSpecialStarToPoint(i * 2, 3);
        addSpecialStarToPoint(i * 2, 6);
    }
}

bool MainWidget::xInChessboard(int x)
{
    return x >= 0 && x <= m_unitLength * 8;
}

bool MainWidget::yInChessboard(int y)
{
    return y >= 0 && y <= m_unitLength * 9;
}

void MainWidget::initChesspieceSet()
{
    QSet<ChesspieceModel *> set = m_ChessboardModel.getAllChesspieces();
    foreach (ChesspieceModel *pChesspieceModel, set) {
        pChesspieceModel->reSet();
        addToChesspieseSet(pChesspieceModel);
    }
}

void MainWidget::addToChesspieseSet(ChesspieceModel *pChesspieceModel)
{
    int gap = 2;

    ChesspieceView oChesspieceView =
            ChesspieceViewFactory::getPieceView(pChesspieceModel->name(), pChesspieceModel->color());

    QPixmap pixmap =
            oChesspieceView.pixMap().scaled(QSize(m_unitLength - gap * 2, m_unitLength - gap * 2), Qt::KeepAspectRatio);

    QGraphicsPixmapItem *pItem = new QGraphicsPixmapItem(pixmap);
    pItem->setPos(QPoint(-m_unitLength / 2 + (pChesspieceModel->x() - 1) * m_unitLength + gap,
                         -m_unitLength / 2 + (pChesspieceModel->y() - 1) * m_unitLength + gap));

    int x = -m_unitLength / 2 + (pChesspieceModel->x() - 1) * m_unitLength;
    int y = -m_unitLength / 2 + (pChesspieceModel->y() - 1) * m_unitLength;

    qDebug() << pChesspieceModel->name() << "---" << x << "---" << y;
    qDebug() << pChesspieceModel->name() << "---" << pItem->pos().x() << "---" << pItem->pos().y();
    m_ChesspieceSet.insert(pItem);
}
