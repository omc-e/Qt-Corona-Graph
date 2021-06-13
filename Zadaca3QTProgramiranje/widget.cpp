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


    QFont *tekstFont = new QFont;
    tekstFont->setPointSize(10);
    //Brojevi na podiocima
    QGraphicsTextItem *tekst1 = new QGraphicsTextItem("0");
    tekst1->setDefaultTextColor(Qt::white);
    tekst1->setPos(-15,-20);
    tekst1->setFont(*tekstFont);
    scena->addItem(tekst1);

    QGraphicsTextItem *tekst2 = new QGraphicsTextItem("1500");
    tekst2->setDefaultTextColor(Qt::white);
    tekst2->setPos(-20,-70);
    tekst2->setFont(*tekstFont);
    scena->addItem(tekst2);

    QGraphicsTextItem *tekst3 = new QGraphicsTextItem("3000");
    tekst3->setDefaultTextColor(Qt::white);
    tekst3->setPos(-20,-120);
    tekst3->setFont(*tekstFont);
    scena->addItem(tekst3);

    QGraphicsTextItem *tekst4 = new QGraphicsTextItem("4500");
    tekst4->setDefaultTextColor(Qt::white);
    tekst4->setPos(-20,-170);
    tekst4->setFont(*tekstFont);
    scena->addItem(tekst4);

    QGraphicsTextItem *tekst5 = new QGraphicsTextItem("6000");
    tekst5->setDefaultTextColor(Qt::white);
    tekst5->setPos(-20,-220);
    tekst5->setFont(*tekstFont);
    scena->addItem(tekst5);

    QGraphicsTextItem *tekst6 = new QGraphicsTextItem("7500");
    tekst6->setDefaultTextColor(Qt::white);
    tekst6->setPos(-20,-270);
    tekst6->setFont(*tekstFont);
    scena->addItem(tekst6);

    QGraphicsTextItem *tekst7 = new QGraphicsTextItem("9000");
    tekst7->setDefaultTextColor(Qt::white);
    tekst7->setPos(-20,-320);
    tekst7->setFont(*tekstFont);
    scena->addItem(tekst7);

    QGraphicsTextItem *tekst8 = new QGraphicsTextItem("10500");
    tekst8->setDefaultTextColor(Qt::white);
    tekst8->setPos(-22,-370);
    tekst8->setFont(*tekstFont);
    scena->addItem(tekst8);

    QGraphicsTextItem *tekst9 = new QGraphicsTextItem("12000");
    tekst9->setDefaultTextColor(Qt::white);
    tekst9->setPos(-22,-420);
    tekst9->setFont(*tekstFont);
    scena->addItem(tekst9);

    QGraphicsTextItem *tekst10 = new QGraphicsTextItem("13500");
    tekst10->setDefaultTextColor(Qt::white);
    tekst10->setPos(-22,-470);
    tekst10->setFont(*tekstFont);
    scena->addItem(tekst10);

    QGraphicsTextItem *tekst0 = new QGraphicsTextItem("15000");
    tekst0->setDefaultTextColor(Qt::white);
    tekst0->setPos(-22,-520);
    tekst0->setFont(*tekstFont);
    scena->addItem(tekst0);





}

Widget::~Widget()
{
    delete ui;
}
