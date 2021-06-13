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
    QPainter painter;
    QPen bijela_olovka(Qt::white);

    painter.setPen(crna_olovka);

    //koordinatni sistem
    xosa=scena->addLine(0,0,385,0,crna_olovka);
    xosa2=scena->addLine(0,0,-385,0,crna_olovka);
    yosa=scena->addLine(0,0,0,370,crna_olovka);
    yosa=scena->addLine(0,0,0,-525,crna_olovka);
    strelica=scena->addLine(385,0,350,20,crna_olovka);
    strelica2=scena->addLine(350,-20,385,0,crna_olovka);
    strelica3=scena->addLine(0,-525,20,-490,crna_olovka);
    strelica4=scena->addLine(0,-525,-20,-490,crna_olovka);

    //podioci za slucajeve
    l1=scena->addLine(-5,-50,5,-50, bijela_olovka);
    l2=scena->addLine(-5,-100,5,-100, bijela_olovka);
    l3=scena->addLine(-5,-150,5,-150,bijela_olovka);
    l4=scena->addLine(-5,-200,5,-200,bijela_olovka);
    l5=scena->addLine(-5,-250,5,-250,bijela_olovka);
    l6=scena->addLine(-5,-300,5,-300,bijela_olovka);
    l7=scena->addLine(-5,-350,5,-350,bijela_olovka);
    l8=scena->addLine(-5,-400,5,-400,bijela_olovka);
    l9=scena->addLine(-5,-450,5,-450,bijela_olovka);
    l0=scena->addLine(-5,-500,5,-500,bijela_olovka);
    l10=scena->addLine(-5,0,-5,0,bijela_olovka);



}

Widget::~Widget()
{
    delete ui;
}
