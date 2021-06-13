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

    QGraphicsTextItem *tekst2 = new QGraphicsTextItem("1200");
    tekst2->setDefaultTextColor(Qt::white);
    tekst2->setPos(-20,-70);
    tekst2->setFont(*tekstFont);
    scena->addItem(tekst2);

    QGraphicsTextItem *tekst3 = new QGraphicsTextItem("2400");
    tekst3->setDefaultTextColor(Qt::white);
    tekst3->setPos(-20,-120);
    tekst3->setFont(*tekstFont);
    scena->addItem(tekst3);

    QGraphicsTextItem *tekst4 = new QGraphicsTextItem("3600");
    tekst4->setDefaultTextColor(Qt::white);
    tekst4->setPos(-20,-170);
    tekst4->setFont(*tekstFont);
    scena->addItem(tekst4);

    QGraphicsTextItem *tekst5 = new QGraphicsTextItem("4800");
    tekst5->setDefaultTextColor(Qt::white);
    tekst5->setPos(-20,-220);
    tekst5->setFont(*tekstFont);
    scena->addItem(tekst5);

    QGraphicsTextItem *tekst6 = new QGraphicsTextItem("6000");
    tekst6->setDefaultTextColor(Qt::white);
    tekst6->setPos(-20,-270);
    tekst6->setFont(*tekstFont);
    scena->addItem(tekst6);

    QGraphicsTextItem *tekst7 = new QGraphicsTextItem("7200");
    tekst7->setDefaultTextColor(Qt::white);
    tekst7->setPos(-20,-320);
    tekst7->setFont(*tekstFont);
    scena->addItem(tekst7);

    QGraphicsTextItem *tekst8 = new QGraphicsTextItem("8400");
    tekst8->setDefaultTextColor(Qt::white);
    tekst8->setPos(-22,-370);
    tekst8->setFont(*tekstFont);
    scena->addItem(tekst8);

    QGraphicsTextItem *tekst9 = new QGraphicsTextItem("9600");
    tekst9->setDefaultTextColor(Qt::white);
    tekst9->setPos(-22,-420);
    tekst9->setFont(*tekstFont);
    scena->addItem(tekst9);

    QGraphicsTextItem *tekst10 = new QGraphicsTextItem("10800");
    tekst10->setDefaultTextColor(Qt::white);
    tekst10->setPos(-22,-470);
    tekst10->setFont(*tekstFont);
    scena->addItem(tekst10);

    QGraphicsTextItem *tekst0 = new QGraphicsTextItem("12000");
    tekst0->setDefaultTextColor(Qt::white);
    tekst0->setPos(-22,-520);
    tekst0->setFont(*tekstFont);
    scena->addItem(tekst0);

    QFont *ff = new QFont;
    ff->setFamily("Times New Roman");
    ff->setBold(true);
    ff->setPointSize(12);
    //Godine i mjeseci
    QGraphicsTextItem *slucajevi= new QGraphicsTextItem("Slučajevi");
    slucajevi->setFont(*ff);
    slucajevi->setDefaultTextColor(Qt::blue);
    slucajevi->setPos(20,-520);
    scena->addItem(slucajevi);

    QGraphicsTextItem *mjesec= new QGraphicsTextItem("Mjesec");
    mjesec->setFont(*ff);
    mjesec->setDefaultTextColor(Qt::blue);
    mjesec->setPos(305,-25);
    scena->addItem(mjesec);

    QFont *fontMjeseci = new QFont;
    fontMjeseci->setPointSize(10);
    fontMjeseci->setFamily("Arial");


    QGraphicsTextItem *juni2020=new QGraphicsTextItem("Juni");
    juni2020->setFont(*fontMjeseci);
    juni2020->setDefaultTextColor(Qt::blue);
    juni2020->setPos(-350,0);
    scena->addItem(juni2020);

    QGraphicsTextItem *juli2020= new QGraphicsTextItem("Juli");
    juli2020->setFont(*fontMjeseci);
    juli2020->setDefaultTextColor(Qt::blue);
    juli2020->setPos(-300,0);
    scena->addItem(juli2020);

    QGraphicsTextItem *august2020= new QGraphicsTextItem("Aug");
    august2020->setFont(*fontMjeseci);
    august2020->setDefaultTextColor(Qt::blue);
    august2020->setPos(-250,0);
    scena->addItem(august2020);

    QGraphicsTextItem *septembar2020= new QGraphicsTextItem("Sep");
    septembar2020->setFont(*fontMjeseci);
    septembar2020->setDefaultTextColor(Qt::blue);
    septembar2020->setPos(-200,0);
    scena->addItem(septembar2020);

    QGraphicsTextItem *oktobar2020= new QGraphicsTextItem("Okt");
    oktobar2020->setFont(*fontMjeseci);
    oktobar2020->setDefaultTextColor(Qt::blue);
    oktobar2020->setPos(-150,0);
    scena->addItem(oktobar2020);

    QGraphicsTextItem *novembar2020= new QGraphicsTextItem("Nov");
    novembar2020->setFont(*fontMjeseci);
    novembar2020->setDefaultTextColor(Qt::blue);
    novembar2020->setPos(-100,0);
    scena->addItem(novembar2020);

    QGraphicsTextItem *decembar2020= new QGraphicsTextItem("Dec");
    decembar2020->setFont(*fontMjeseci);
    decembar2020->setDefaultTextColor(Qt::blue);
    decembar2020->setPos(-50,0);
    scena->addItem(decembar2020);

    QGraphicsTextItem *januar2021= new QGraphicsTextItem("Jan");
    januar2021->setFont(*fontMjeseci);
    januar2021->setDefaultTextColor(Qt::blue);
    januar2021->setPos(30,0);
    scena->addItem(januar2021);

    QGraphicsTextItem *februar2021= new QGraphicsTextItem("Feb");
    februar2021->setFont(*fontMjeseci);
    februar2021->setDefaultTextColor(Qt::blue);
    februar2021->setPos(90,0);
    scena->addItem(februar2021);

    QGraphicsTextItem *mart2021= new QGraphicsTextItem("Mart");
    mart2021->setFont(*fontMjeseci);
    mart2021->setDefaultTextColor(Qt::blue);
    mart2021->setPos(150,0);
    scena->addItem(mart2021);

    QGraphicsTextItem *april2021= new QGraphicsTextItem("April");
    april2021->setFont(*fontMjeseci);
    april2021->setDefaultTextColor(Qt::blue);
    april2021->setPos(210,0);
    scena->addItem(april2021);

    QGraphicsTextItem *maj2021= new QGraphicsTextItem("Maj");
    maj2021->setFont(*fontMjeseci);
    maj2021->setDefaultTextColor(Qt::blue);
    maj2021->setPos(270,0);
    scena->addItem(maj2021);

    QGraphicsTextItem *godina2020 = new QGraphicsTextItem("2020");
    QGraphicsTextItem *godina2021 = new QGraphicsTextItem("2021");
    godina2020->setFont(*fontMjeseci);
    godina2020->setDefaultTextColor(Qt::blue);
    godina2020->setPos(-230,15);
    godina2021->setFont(*fontMjeseci);
    godina2021->setDefaultTextColor(Qt::blue);
    godina2021->setPos(160,15);
    scena->addItem(godina2020);
    scena->addItem(godina2021);



    //visina linije se raucna na nacin da broj na skali podijelimo
    //sa 50px i dobijemo 24
    //onda broj zarazenih podijelimo sa 24 i toliko px ce biti linija visine
    QPen plava_olovka (Qt::blue);
    juni_l=scena->addLine(-335,-5.40,-335,0,plava_olovka);
    juli_l=scena->addLine(-285,-6.5,-285,0,plava_olovka);
    august_l=scena->addLine(-235,-20.8,-235,0,plava_olovka);
    septembar_l=scena->addLine(-185,-59.3,-185,0,plava_olovka);
    oktobar_l=scena->addLine(-135,-142.6,-135,0,plava_olovka);
    novembar_l=scena->addLine(-85,-219.79,-85,0,plava_olovka);
    decembar_l=scena->addLine(-35,-247.16,-35,0,plava_olovka);
    januar_l=scena->addLine(45,-259.9,45,0,plava_olovka);
    februar_l=scena->addLine(105,-252.62,105,0,plava_olovka);
    mart_l=scena->addLine(165,-313.79,165,0,plava_olovka);
    april_l=scena->addLine(225,-430.125,225,0,plava_olovka);
    maj_l=scena->addLine(285,-494.375,285,0,plava_olovka);

    //elipse
    QBrush cetka1(Qt::white);
    juni_e=scena->addEllipse(-338,-13,5,5,bijela_olovka,cetka1);
    juli_e=scena->addEllipse(-288,-14,5,5,bijela_olovka,cetka1);
    august_e=scena->addEllipse(-238,-27,5,5,bijela_olovka,cetka1);
    septembar_e=scena->addEllipse(-188,-67,5,5,bijela_olovka,cetka1);
    oktobar_e=scena->addEllipse(-138,-149,5,5,bijela_olovka,cetka1);
    novembar_e=scena->addEllipse(-88,-227,5,5,bijela_olovka,cetka1);
    decembar_e=scena->addEllipse(-38,-255,5,5,bijela_olovka,cetka1);
    januar_e=scena->addEllipse(42,-267,5,5,bijela_olovka,cetka1);
    februar_e=scena->addEllipse(103,-259,5,5,bijela_olovka,cetka1);
    mart_e=scena->addEllipse(162,-320,5,5,bijela_olovka,cetka1);
    april_e=scena->addEllipse(222,-438,5,5,bijela_olovka,cetka1);
    maj_e=scena->addEllipse(282,-500,5,5,bijela_olovka,cetka1);

    //broj slucajeva
    QFont *sFont=new QFont;
    sFont->setPointSize(10);
    sFont->setFamily("Arial");

    QGraphicsTextItem *juniSlucaj=new QGraphicsTextItem("130");
    juniSlucaj->setFont(*sFont);
    juniSlucaj->setDefaultTextColor(Qt::white);
    juniSlucaj->setPos(-350,-35);
    scena->addItem(juniSlucaj);

    QGraphicsTextItem *juliSlucaj=new QGraphicsTextItem("156");
    juliSlucaj->setFont(*sFont);
    juliSlucaj->setDefaultTextColor(Qt::white);
    juliSlucaj->setPos(-300,-37);
    scena->addItem(juliSlucaj);

    QGraphicsTextItem *augustSlucaj=new QGraphicsTextItem("501");
    augustSlucaj->setFont(*sFont);
    augustSlucaj->setDefaultTextColor(Qt::white);
    augustSlucaj->setPos(-250,-50);
    scena->addItem(augustSlucaj);

    QGraphicsTextItem *septembarSlucaj=new QGraphicsTextItem("1424");
    septembarSlucaj->setFont(*sFont);
    septembarSlucaj->setDefaultTextColor(Qt::white);
    septembarSlucaj->setPos(-205,-90);
    scena->addItem(septembarSlucaj);

    QGraphicsTextItem *oktobarSlucaj=new QGraphicsTextItem("3424");
    oktobarSlucaj->setFont(*sFont);
    oktobarSlucaj->setDefaultTextColor(Qt::white);
    oktobarSlucaj->setPos(-155,-170);
    scena->addItem(oktobarSlucaj);

    QGraphicsTextItem *novembarSlucaj=new QGraphicsTextItem("5275");
    novembarSlucaj->setFont(*sFont);
    novembarSlucaj->setDefaultTextColor(Qt::white);
    novembarSlucaj->setPos(-105,-250);
    scena->addItem(novembarSlucaj);

    QGraphicsTextItem *decembarSlucaj=new QGraphicsTextItem("5932");
    decembarSlucaj->setFont(*sFont);
    decembarSlucaj->setDefaultTextColor(Qt::white);
    decembarSlucaj->setPos(-55,-275);
    scena->addItem(decembarSlucaj);

    QGraphicsTextItem *januarSlucaj=new QGraphicsTextItem("6228");
    januarSlucaj->setFont(*sFont);
    januarSlucaj->setDefaultTextColor(Qt::white);
    januarSlucaj->setPos(25,-290);
    scena->addItem(januarSlucaj);

    QGraphicsTextItem *februarSlucaj=new QGraphicsTextItem("6063");
    februarSlucaj->setFont(*sFont);
    februarSlucaj->setDefaultTextColor(Qt::white);
    februarSlucaj->setPos(90,-280);
    scena->addItem(februarSlucaj);

    QGraphicsTextItem *martSlucaj=new QGraphicsTextItem("7531");
    martSlucaj->setFont(*sFont);
    martSlucaj->setDefaultTextColor(Qt::white);
    martSlucaj->setPos(150,-340);
    scena->addItem(martSlucaj);

    QGraphicsTextItem *aprilSlucaj=new QGraphicsTextItem("10323");
    aprilSlucaj->setFont(*sFont);
    aprilSlucaj->setDefaultTextColor(Qt::white);
    aprilSlucaj->setPos(200,-460);
    scena->addItem(aprilSlucaj);

    QGraphicsTextItem *majSlucaj=new QGraphicsTextItem("11865");
    majSlucaj->setFont(*sFont);
    majSlucaj->setDefaultTextColor(Qt::white);
    majSlucaj->setPos(260,-520);
    scena->addItem(majSlucaj);





}

Widget::~Widget()
{
    delete ui;
}
