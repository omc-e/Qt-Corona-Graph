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
#include <QStringList>
#include <QString>


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
    QGraphicsLineItem *l1;
    QGraphicsLineItem *l2;
    QGraphicsLineItem *l3;
    QGraphicsLineItem *l4;
    QGraphicsLineItem *l5;
    QGraphicsLineItem *l6;
    QGraphicsLineItem *l7;
    QGraphicsLineItem *l8;
    QGraphicsLineItem *l9;
    QGraphicsLineItem *l0;
    QGraphicsLineItem *l10;
};

#endif // WIDGET_H
