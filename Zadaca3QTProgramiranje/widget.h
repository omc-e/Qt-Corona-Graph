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
    //ose
    QGraphicsLineItem *xosa;
    QGraphicsLineItem *xosa2;
    QGraphicsLineItem *yosa;
    QGraphicsLineItem *yosa2;
    //strelice na osama
    QGraphicsLineItem *strelica;
    QGraphicsLineItem *strelica2;
    QGraphicsLineItem *strelica3;
    QGraphicsLineItem *strelica4;
    //podioci na Y osi
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

    //Brojevi na Y osi
    QGraphicsTextItem *tekst1;
       QGraphicsTextItem *tekst2;
       QGraphicsTextItem *tekst3;
       QGraphicsTextItem *tekst4;
       QGraphicsTextItem *tekst5;
       QGraphicsTextItem *tekst6;
       QGraphicsTextItem *tekst7;
       QGraphicsTextItem *tekst8;
       QGraphicsTextItem *tekst9;
       QGraphicsTextItem *tekst10;
       QGraphicsTextItem *tekst0;

       QGraphicsTextItem *slucajevi;

       QGraphicsTextItem *mjesec;

       QGraphicsTextItem *juli2020;
       QGraphicsTextItem *august2020;
       QGraphicsTextItem *septembar2020;
       QGraphicsTextItem *oktobar2020;
       QGraphicsTextItem *novembar2020;
       QGraphicsTextItem *decembar2020;
       QGraphicsTextItem *januar2021;
       QGraphicsTextItem *februar2021;
       QGraphicsTextItem *mart2021;
       QGraphicsTextItem *april2021;
       QGraphicsTextItem *maj2021;

       //linije
       QGraphicsLineItem *juni_l;
       QGraphicsLineItem *juli_l;
       QGraphicsLineItem *august_l;
       QGraphicsLineItem *septembar_l;
       QGraphicsLineItem *oktobar_l;
       QGraphicsLineItem *novembar_l;
       QGraphicsLineItem *decembar_l;
       QGraphicsLineItem *januar_l;
       QGraphicsLineItem *februar_l;
       QGraphicsLineItem *mart_l;
       QGraphicsLineItem *april_l;
       QGraphicsLineItem *maj_l;

       //elipse item za tacke kod mjeseci
       QGraphicsEllipseItem *juni_e;
       QGraphicsEllipseItem *juli_e;
       QGraphicsEllipseItem *august_e;
       QGraphicsEllipseItem *septembar_e;
       QGraphicsEllipseItem *oktobar_e;
       QGraphicsEllipseItem *novembar_e;
       QGraphicsEllipseItem *decembar_e;
       QGraphicsEllipseItem *januar_e;
       QGraphicsEllipseItem *februar_e;
       QGraphicsEllipseItem *mart_e;
       QGraphicsEllipseItem *april_e;
       QGraphicsEllipseItem *maj_e;

       //brojevi slucajeva iznad elipsi
       QGraphicsTextItem *juliSlucaj;
       QGraphicsTextItem *augustSlucaj;
       QGraphicsTextItem *septembarSlucaj;
       QGraphicsTextItem *oktobarSlucaj;
       QGraphicsTextItem *novembarSlucaj;
       QGraphicsTextItem *decembarSlucaj;
       QGraphicsTextItem *januarSlucaj;
       QGraphicsTextItem *februarSlucaj;
       QGraphicsTextItem *martSlucaj;
       QGraphicsTextItem *aprilSlucaj;
       QGraphicsTextItem *majSlucaj;

       QGraphicsTextItem *ime;

};

#endif // WIDGET_H
