#include "MyGraphicsView.h"

#include <QMouseEvent>

#include <QDebug>

MyGraphicsView::MyGraphicsView(QWidget *parent):
    QGraphicsView(parent)
{
    setMouseTracking(true);

}

MyGraphicsView::~MyGraphicsView()
{
}

void MyGraphicsView::mouseMoveEvent(QMouseEvent *event)
{
    QPointF point = event->localPos();
    int x = point.x();
    int y = point.y();

    qDebug() << "mouse move " << x << "," << y;
}
