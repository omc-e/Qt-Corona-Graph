#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    scena = new QGraphicsScene(this);
    scena->setSceneRect (-10, -280, 20, 80);
    scena ->setBackgroundBrush(Qt::gray);

     ui->graphicsView->setScene(scena);

    QPen crna_olovka(Qt::black);
    crna_olovka.setWidth(3);

    xosa=scena->addLine(0,0,385,0,crna_olovka);
    xosa2=scena->addLine(0,0,-385,0,crna_olovka);
    yosa=scena->addLine(0,0,0,370,crna_olovka);
    yosa=scena->addLine(0,0,0,-525,crna_olovka);
    strelica=scena->addLine(385,0,350,20,crna_olovka);
    strelica2=scena->addLine(350,-20,385,0,crna_olovka);
    strelica3=scena->addLine(0,-525,20,-490,crna_olovka);
    strelica4=scena->addLine(0,-525,-20,-490,crna_olovka);

}

Widget::~Widget()
{
    delete ui;
}
