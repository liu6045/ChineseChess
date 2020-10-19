#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QPushButton>

#include "ChessboardModel.h"
#include "ChesspieceView.h"

#include <QGraphicsItem>


////////////////////////////////////////////////////////////////////
//#include <QDebug>
//class QGraphicsPixmapItem_checkDelete : public QGraphicsPixmapItem
//{
//public:
//    explicit QGraphicsPixmapItem_checkDelete(
//            const QPixmap &pixmap, QGraphicsItem *parent = Q_NULLPTR):
//        QGraphicsPixmapItem(pixmap, parent)
//    {

//    }

//    ~QGraphicsPixmapItem_checkDelete()
//    {
//        qDebug() << "=========================================";
//    }
//};
////////////////////////////////////////////////////////////////////

class MainWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();

    // controller:
    void drawChessPieces();

public slots:
    void onStartClicked();

private:
    void addLine(int x1, int y1, int x2, int y2);
    void addLineInChessboard(int x1, int y1, int x2, int y2);
    void addSpecialStarToPoint(int x, int y);
    void drawChessboard();
    bool xInChessboard(int x);
    bool yInChessboard(int y);

    void initChesspieceSet();
    void addToChesspieseSet(ChesspieceModel *pChesspieceModel);

private:
    QGraphicsScene *m_pGraphicsScene;
    QPushButton *m_pStartButton;

    int m_unitLength;


    // controller:
    ChessboardModel m_ChessboardModel;
    QSet<QGraphicsPixmapItem*> m_ChesspieceSet;


signals:

public slots:
};

#endif // WIDGET_H
