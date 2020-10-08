#ifndef MYGRAPHICSVIEW_H
#define MYGRAPHICSVIEW_H

#include <QGraphicsView>

class MainGraphicsView : public QGraphicsView
{
public:
    MainGraphicsView(QWidget *parent = Q_NULLPTR);
    ~MainGraphicsView();

protected:
    void mouseMoveEvent(QMouseEvent *event) override;
};

#endif // MYGRAPHICSVIEW_H
