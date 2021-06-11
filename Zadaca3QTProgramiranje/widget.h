#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsTextItem>
#include <QFont>
#include <QtCore>
#include <QtGui>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    QGraphicsScene* scena;
    QGraphicsLineItem *xosa;
    QGraphicsLineItem *xosa2;
    QGraphicsLineItem *yosa;
    QGraphicsLineItem *yosa2;
    QGraphicsLineItem *strelica;
    QGraphicsLineItem *strelica2;
    QGraphicsLineItem *strelica3;
    QGraphicsLineItem *strelica4;
};

#endif // WIDGET_H
