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
     QBrush cetka1(Qt::white);
     QBrush cetka2 (Qt::green,Qt::Dense5Pattern);
     //Morao sam da stavim cetku 2 zelenu jer na zastavi imam samo dvije boje
     //Pomijesat ce mi se s ostalim elementima

    QPen crna_olovka(Qt::black);
    crna_olovka.setWidth(3);
    QPainter painter;
    QPen bijela_olovka(Qt::white);

    painter.setPen(crna_olovka);

    QPen plava_olovka (Qt::blue);
     QPolygonF grafikon;
     grafikon << QPointF(-335,0) << QPointF(-335,-13)
              << QPointF(-285,-10) << QPointF(-235,-54)
              << QPointF(-185,-158) << QPointF(-135,-338)
              << QPointF(-85,-332) << QPointF(-35,-99)
              << QPointF(45,-55) << QPointF(105,-51)
              << QPointF(165,-273) << QPointF(225,-495) << QPointF(285,-122)
              << QPointF(285,0);

     scena->addPolygon(grafikon);

     QPainterPath path;
     path.addPolygon(grafikon);

   pit=scena->addPath(path,plava_olovka,cetka2);

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

    QGraphicsTextItem *tekst2 = new QGraphicsTextItem("300");
    tekst2->setDefaultTextColor(Qt::white);
    tekst2->setPos(-20,-70);
    tekst2->setFont(*tekstFont);
    scena->addItem(tekst2);

    QGraphicsTextItem *tekst3 = new QGraphicsTextItem("600");
    tekst3->setDefaultTextColor(Qt::white);
    tekst3->setPos(-20,-120);
    tekst3->setFont(*tekstFont);
    scena->addItem(tekst3);

    QGraphicsTextItem *tekst4 = new QGraphicsTextItem("900");
    tekst4->setDefaultTextColor(Qt::white);
    tekst4->setPos(-20,-170);
    tekst4->setFont(*tekstFont);
    scena->addItem(tekst4);

    QGraphicsTextItem *tekst5 = new QGraphicsTextItem("1200");
    tekst5->setDefaultTextColor(Qt::white);
    tekst5->setPos(-20,-220);
    tekst5->setFont(*tekstFont);
    scena->addItem(tekst5);

    QGraphicsTextItem *tekst6 = new QGraphicsTextItem("1500");
    tekst6->setDefaultTextColor(Qt::white);
    tekst6->setPos(-20,-270);
    tekst6->setFont(*tekstFont);
    scena->addItem(tekst6);

    QGraphicsTextItem *tekst7 = new QGraphicsTextItem("1800");
    tekst7->setDefaultTextColor(Qt::white);
    tekst7->setPos(-20,-320);
    tekst7->setFont(*tekstFont);
    scena->addItem(tekst7);

    QGraphicsTextItem *tekst8 = new QGraphicsTextItem("2100");
    tekst8->setDefaultTextColor(Qt::white);
    tekst8->setPos(-22,-370);
    tekst8->setFont(*tekstFont);
    scena->addItem(tekst8);

    QGraphicsTextItem *tekst9 = new QGraphicsTextItem("2400");
    tekst9->setDefaultTextColor(Qt::white);
    tekst9->setPos(-22,-420);
    tekst9->setFont(*tekstFont);
    scena->addItem(tekst9);

    QGraphicsTextItem *tekst10 = new QGraphicsTextItem("2700");
    tekst10->setDefaultTextColor(Qt::white);
    tekst10->setPos(-22,-470);
    tekst10->setFont(*tekstFont);
    scena->addItem(tekst10);

    QGraphicsTextItem *tekst0 = new QGraphicsTextItem("3000");
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
    //Polygon



    //visina linije se raucna na nacin da broj na skali podijelimo
    //sa 50px i dobijemo 24
    //onda broj zarazenih podijelimo sa 24 i toliko px ce biti linija visine

    juni_l=scena->addLine(-335,-7,-335,0,plava_olovka);
    juli_l=scena->addLine(-285,-4.5,-285,0,plava_olovka);
    august_l=scena->addLine(-235,-49,-235,0,plava_olovka);
    septembar_l=scena->addLine(-185,-154.6,-185,0,plava_olovka);
    oktobar_l=scena->addLine(-135,-334.8,-135,0,plava_olovka);
    novembar_l=scena->addLine(-85,-328,-85,0,plava_olovka);
    decembar_l=scena->addLine(-35,-95.1,-35,0,plava_olovka);
    januar_l=scena->addLine(45,-51.8,45,0,plava_olovka);
    februar_l=scena->addLine(105,-47.5,105,0,plava_olovka);
    mart_l=scena->addLine(165,-269.5,165,0,plava_olovka);
    april_l=scena->addLine(225,-491.5,225,0,plava_olovka);
    maj_l=scena->addLine(285,-117.8,285,0,plava_olovka);

    //elipse

    juni_e=scena->addEllipse(-338,-12,5,5,bijela_olovka,cetka1);
    juli_e=scena->addEllipse(-288,-9,5,5,bijela_olovka,cetka1);
    august_e=scena->addEllipse(-238,-53,5,5,bijela_olovka,cetka1);
    septembar_e=scena->addEllipse(-188,-157,5,5,bijela_olovka,cetka1);
    oktobar_e=scena->addEllipse(-138,-337,5,5,bijela_olovka,cetka1);
    novembar_e=scena->addEllipse(-88,-331,5,5,bijela_olovka,cetka1);
    decembar_e=scena->addEllipse(-38,-98,5,5,bijela_olovka,cetka1);
    januar_e=scena->addEllipse(42,-54,5,5,bijela_olovka,cetka1);
    februar_e=scena->addEllipse(103,-50,5,5,bijela_olovka,cetka1);
    mart_e=scena->addEllipse(162,-272,5,5,bijela_olovka,cetka1);
    april_e=scena->addEllipse(222,-494,5,5,bijela_olovka,cetka1);
    maj_e=scena->addEllipse(282,-120,5,5,bijela_olovka,cetka1);

    //broj slucajeva
    QFont *sFont=new QFont;
    sFont->setPointSize(10);
    sFont->setFamily("Arial");

    QGraphicsTextItem *juniSlucaj=new QGraphicsTextItem("42");
    juniSlucaj->setFont(*sFont);
    juniSlucaj->setDefaultTextColor(Qt::white);
    juniSlucaj->setPos(-350,-35);
    scena->addItem(juniSlucaj);

    QGraphicsTextItem *juliSlucaj=new QGraphicsTextItem("27");
    juliSlucaj->setFont(*sFont);
    juliSlucaj->setDefaultTextColor(Qt::white);
    juliSlucaj->setPos(-300,-30);
    scena->addItem(juliSlucaj);

    QGraphicsTextItem *augustSlucaj=new QGraphicsTextItem("346");
    augustSlucaj->setFont(*sFont);
    augustSlucaj->setDefaultTextColor(Qt::white);
    augustSlucaj->setPos(-250,-75);
    scena->addItem(augustSlucaj);

    QGraphicsTextItem *septembarSlucaj=new QGraphicsTextItem("928");
    septembarSlucaj->setFont(*sFont);
    septembarSlucaj->setDefaultTextColor(Qt::white);
    septembarSlucaj->setPos(-205,-180);
    scena->addItem(septembarSlucaj);

    QGraphicsTextItem *oktobarSlucaj=new QGraphicsTextItem("2009");
    oktobarSlucaj->setFont(*sFont);
    oktobarSlucaj->setDefaultTextColor(Qt::white);
    oktobarSlucaj->setPos(-155,-360);
    scena->addItem(oktobarSlucaj);

    QGraphicsTextItem *novembarSlucaj=new QGraphicsTextItem("1968");
    novembarSlucaj->setFont(*sFont);
    novembarSlucaj->setDefaultTextColor(Qt::white);
    novembarSlucaj->setPos(-105,-350);
    scena->addItem(novembarSlucaj);

    QGraphicsTextItem *decembarSlucaj=new QGraphicsTextItem("571");
    decembarSlucaj->setFont(*sFont);
    decembarSlucaj->setDefaultTextColor(Qt::white);
    decembarSlucaj->setPos(-55,-120);
    scena->addItem(decembarSlucaj);

    QGraphicsTextItem *januarSlucaj=new QGraphicsTextItem("311");
    januarSlucaj->setFont(*sFont);
    januarSlucaj->setDefaultTextColor(Qt::white);
    januarSlucaj->setPos(25,-80);
    scena->addItem(januarSlucaj);

    QGraphicsTextItem *februarSlucaj=new QGraphicsTextItem("285");
    februarSlucaj->setFont(*sFont);
    februarSlucaj->setDefaultTextColor(Qt::white);
    februarSlucaj->setPos(90,-75);
    scena->addItem(februarSlucaj);

    QGraphicsTextItem *martSlucaj=new QGraphicsTextItem("1617");
    martSlucaj->setFont(*sFont);
    martSlucaj->setDefaultTextColor(Qt::white);
    martSlucaj->setPos(145,-295);
    scena->addItem(martSlucaj);

    QGraphicsTextItem *aprilSlucaj=new QGraphicsTextItem("2949");
    aprilSlucaj->setFont(*sFont);
    aprilSlucaj->setDefaultTextColor(Qt::white);
    aprilSlucaj->setPos(205,-515);
    scena->addItem(aprilSlucaj);

    QGraphicsTextItem *majSlucaj=new QGraphicsTextItem("707");
    majSlucaj->setFont(*sFont);
    majSlucaj->setDefaultTextColor(Qt::white);
    majSlucaj->setPos(270,-140);
    scena->addItem(majSlucaj);

    QGraphicsTextItem *ime= new QGraphicsTextItem("Emsar Omic");
    ime->setFont(QFont("Times New Roman",12,QFont::Bold));
    ime->setDefaultTextColor(Qt::white);
    ime->setPos(-340,-378);
    scena->addItem(ime);




}

Widget::~Widget()
{
    delete ui;
}
