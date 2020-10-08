#include "MainGraphicsView.h"

#include <QMouseEvent>

#include <QDebug>

MainGraphicsView::MainGraphicsView(QWidget *parent):
    QGraphicsView(parent)
{
    setMouseTracking(true);

}

MainGraphicsView::~MainGraphicsView()
{
}

void MainGraphicsView::mouseMoveEvent(QMouseEvent *event)
{
    QPointF point = event->localPos();
    int x = point.x();
    int y = point.y();

    qDebug() << "mouse move " << x << "," << y;
}
