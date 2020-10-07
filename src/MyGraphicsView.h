#ifndef MYGRAPHICSVIEW_H
#define MYGRAPHICSVIEW_H

#include <QGraphicsView>

class MyGraphicsView : public QGraphicsView
{
public:
    MyGraphicsView(QWidget *parent = Q_NULLPTR);
    ~MyGraphicsView();

protected:
    void mouseMoveEvent(QMouseEvent *event) override;
};

#endif // MYGRAPHICSVIEW_H
