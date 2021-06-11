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
}

Widget::~Widget()
{
    delete ui;
}
