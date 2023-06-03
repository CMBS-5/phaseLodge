
#include "referee.h"

Referee::Referee(QObject *parent)
    : QObject{parent}
{
    // 创建一个 QStackedWidget 控件
    mainwindow = new MainWindow(this);
    mainwindow->setFixedSize(1600,1000);
    stackedWidget = new QStackedWidget(mainwindow);

    //创建每个子页面
    InitializeScene();

    //创建每个子跳转按钮
    InitializeButton();

    //创建每个子物品

    // 将 QStackedWidget 设置为主窗口的中心部件
    mainwindow->setCentralWidget(stackedWidget);
    mainwindow->show();

    //
    mainwindow->repaint();
}

void Referee::InitialConnection()
{

}

void Referee::InitializeScene()
{
    // frontHall(7个Scene), backHall(3个Scene), study(2个Scene), boneRoom(2个Scene), eastBedroom(1个Scene), westBedroom(1个Scene)的初始化

    //void Referee::InitializeScene_frontHall()
    {
        frontHall_1 = new Scene(mainwindow);
        //    frontHall_1->setStyleSheet("background-image: url(:/image/scene/exp/frontHall/frontHall_1.jpg);");
        QPixmap _image1(":/image/scene/exp/frontHall/frontHall_1.jpg");
        frontHall_1->setSceneImage(_image1);
        frontHall_1->setName("frontHall_1");
        stackedWidget->addWidget(frontHall_1);

        frontHall_2 = new Scene(mainwindow);
        //    frontHall_2->setStyleSheet("background-image: url(:/image/scene/exp/frontHall/frontHall_2.jpg);");
        QPixmap _image2(":/image/scene/exp/frontHall/frontHall_2.jpg");
        frontHall_2->setSceneImage(_image2);
        stackedWidget->addWidget(frontHall_2);

        frontHall_3 = new Scene(mainwindow);
        //    frontHall_3->setStyleSheet("background-image: url(::/image/scene/exp/frontHall/frontHall_3.jpg);");
        QPixmap _image3(":/image/scene/exp/frontHall/frontHall_3.jpg");
        frontHall_3->setSceneImage(_image3);
        stackedWidget->addWidget(frontHall_3);

        frontHall_4 = new Scene(mainwindow);
        //    frontHall_4->setStyleSheet("background-image: url(:/image/scene/exp/frontHall/frontHall_4.jpg);");
        QPixmap _image4(":/image/scene/exp/frontHall/frontHall_4.jpg");
        frontHall_4->setSceneImage(_image4);
        stackedWidget->addWidget(frontHall_4);

        frontHall_5 = new Scene(mainwindow);
        //    frontHall_5->setStyleSheet("background-image: url(:/image/scene/exp/frontHall/frontHall_5.jpg);");
        QPixmap _image5(":/image/scene/exp/frontHall/frontHall_5.jpg");
        frontHall_5->setSceneImage(_image5);
        stackedWidget->addWidget(frontHall_5);

        frontHall_6 = new Scene(mainwindow);
        //    frontHall_6->setStyleSheet("background-image: url(:/image/scene/exp/frontHall/frontHall_6.jpg);");
        QPixmap _image6(":/image/scene/exp/frontHall/frontHall_6.jpg");
        frontHall_6->setSceneImage(_image6);
        stackedWidget->addWidget(frontHall_6);

        frontHall_7 = new Scene(mainwindow);
        //    frontHall_7->setStyleSheet("background-image: url(:/image/scene/exp/frontHall/frontHall_7.jpg);");
        QPixmap _image7(":/image/scene/exp/frontHall/frontHall_7.jpg");
        frontHall_7->setSceneImage(_image7);
        frontHall_7->setName("frontHall_7");
        stackedWidget->addWidget(frontHall_7);
    }

    //void Referee::InitializeScene_backHall()
    {
        backHall_1 = new Scene(mainwindow);
        //    backHall_1->setStyleSheet("background-image: url(:/image/scene/exp/backHall/backHall_1.jpg);");
        QPixmap _image1(":/image/scene/exp/backHall/backHall_1.jpg");
        backHall_1->setSceneImage(_image1);
        stackedWidget->addWidget(backHall_1);

        backHall_2 = new Scene(mainwindow);
        //    backHall_2->setStyleSheet("background-image: url(:/image/scene/exp/backHall/backHall_2.jpg);");
        QPixmap _image2(":/image/scene/exp/backHall/backHall_2.jpg");
        backHall_2->setSceneImage(_image2);
        stackedWidget->addWidget(backHall_2);

        backHall_3 = new Scene(mainwindow);
        //    backHall_3->setStyleSheet("background-image: url(:/image/scene/exp/backHall/backHall_3.jpg);");
        QPixmap _image3(":/image/scene/exp/backHall/backHall_3.jpg");
        backHall_3->setSceneImage(_image3);
        stackedWidget->addWidget(backHall_3);
    }

    //void Referee::InitializeScene_study()
    {
        study_1 = new Scene(mainwindow);
        //    study_1->setStyleSheet("background-image: url(:/image/scene/exp/study/study_1.jpg);");
        QPixmap _image1(":/image/scene/exp/study/study_1.jpg");
        study_1->setSceneImage(_image1);
        stackedWidget->addWidget(study_1);

        study_2 = new Scene(mainwindow);
        //    study_2->setStyleSheet("background-image: url(:/image/scene/exp/study/study_2.jpg);");
        QPixmap _image2(":/image/scene/exp/study/study_2.jpg");
        study_2->setSceneImage(_image2);
        stackedWidget->addWidget(study_2);
    }

    //void Referee::InitializeScene_boneRoom()
    {
        boneRoom_1 = new Scene(mainwindow);
        //    boneRoom_1->setStyleSheet("background-image: url(:/image/scene/exp/boneRoom/boneRoom_1.jpg);");
        QPixmap _image1(":/image/scene/exp/boneRoom/boneRoom_1.jpg");
        boneRoom_1->setSceneImage(_image1);
        stackedWidget->addWidget(boneRoom_1);

        boneRoom_2 = new Scene(mainwindow);
        //    boneRoom_2->setStyleSheet("background-image: url(:/image/scene/exp/boneRoom/boneRoom_2.jpg);");
        QPixmap _image2(":/image/scene/exp/boneRoom/boneRoom_2.jpg");
        boneRoom_2->setSceneImage(_image2);
        stackedWidget->addWidget(boneRoom_2);
    }

    //void Referee::InitializeScene_eastBedroom()
    {
        eastBedroom_1 = new Scene(mainwindow);
        //    eastBedroom_1->setStyleSheet("background-image: url(:/image/scene/exp/eastBedroom/eastBedroom_1.jpg);");
        QPixmap _image1(":/image/scene/exp/eastBedroom/eastBedroom_1.jpg");
        eastBedroom_1->setSceneImage(_image1);
        stackedWidget->addWidget(eastBedroom_1);
    }

    //void Referee::InitializeScene_westBedroom()
    {
        westBedroom_1 = new Scene(mainwindow);
        //    westBedroom_1->setStyleSheet("background-image: url(:/image/scene/exp/westBedroom/westBedroom_1.jpg);");
        QPixmap _image1(":/image/scene/exp/westBedroom/westBedroom_1.jpg");
        westBedroom_1->setSceneImage(_image1);
        stackedWidget->addWidget(westBedroom_1);
    }

}

void Referee::InitializeButton()
{
    //Initialize button 的基本样式
    QString btnfont = "font: 75 15pt \"微软雅黑\";";
    //    QString btnColor = "background-color: rgb(0, 0, 255);";
    QString btnColor = "";
    //    QString btnStyle = "border-image: url(:/res/image/button/button.png);";
    QString btnStyle = "";
    QSize btnsize(350,100);
    QString setStyleSheetString = btnfont+btnColor+btnStyle;

    //Initialize_frontHall(Scene7个)

    // 1->2,1->3,1->4,1->5,1->6,1->7
    // frontHall_1共有6个button，分别去往frontHall_2、frontHall_3、frontHall_4、frontHall_5、frontHall_6、frontHall_7
    // void Initialize_frontHall_1()
    {

        // 利用QRect类来设置button的位置和大小

        QRect rect1(QPoint(100, 200), btnsize);
        QRect rect2(QPoint(500, 200), btnsize);
        QRect rect3(QPoint(900, 200), btnsize);
        QRect rect4(QPoint(100, 400), btnsize);
        QRect rect5(QPoint(500, 400), btnsize);
        QRect rect6(QPoint(900, 400), btnsize);

        // 设置button的位置、大小、样式、文字、连接的场景
        QPushButton *button1 = new QPushButton(frontHall_1);
        // 利用setStyleSheet函数来设置button的名字、位置、颜色、样式
        button1->setStyleSheet(setStyleSheetString);
        button1->setText("frontHall_1 to frontHall_2");
        button1->setGeometry(rect1);
        frontHall_1->addButton(button1, 1);
        connect(button1, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(frontHall_2); });

        QPushButton *button2 = new QPushButton(frontHall_1);
        button2->setStyleSheet(setStyleSheetString);
        button2->setText("frontHall_1 to frontHall_3");
        button2->setGeometry(rect2);
        frontHall_1->addButton(button2, 2);
        connect(button2, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(frontHall_3); });

        QPushButton *button3 = new QPushButton(frontHall_1);
        button3->setStyleSheet(setStyleSheetString);
        button3->setText("frontHall_1 to frontHall_4");
        button3->setGeometry(rect3);
        frontHall_1->addButton(button3, 3);
        connect(button3, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(frontHall_4); });

        QPushButton *button4 = new QPushButton(frontHall_1);
        button4->setStyleSheet(setStyleSheetString);
        button4->setText("frontHall_1 to frontHall_5");
        button4->setGeometry(rect4);
        frontHall_1->addButton(button4, 4);
        connect(button4, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(frontHall_5); });

        QPushButton *button5 = new QPushButton(frontHall_1);
        button5->setStyleSheet(setStyleSheetString);
        button5->setText("frontHall_1 to frontHall_6");
        button5->setGeometry(rect5);
        frontHall_1->addButton(button5, 5);
        connect(button5, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(frontHall_6); });

        QPushButton *button6 = new QPushButton(frontHall_1);
        button6->setStyleSheet(setStyleSheetString);
        button6->setText("frontHall_1 to frontHall_7");
        button6->setGeometry(rect6);
        frontHall_1->addButton(button6, 6);
        connect(button6, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(frontHall_7); });
    }

    // 2->1
    // frontHall_2共有1个button，分别去往frontHall_1
    // void Initialize_frontHall_2()
    {
        QRect rect1(QPoint(100, 200), btnsize);

        QPushButton *button1 = new QPushButton(frontHall_2);
        button1->setStyleSheet(setStyleSheetString);
        button1->setText("frontHall_2 to frontHall_1");
        button1->setGeometry(rect1);
        frontHall_2->addButton(button1, 1);
        connect(button1, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(frontHall_1); });
    }

    // 3->1
    // frontHall_3共有1个button，分别去往frontHall_1
    // void Initialize_frontHall_3()
    {
        QRect rect1(QPoint(100, 200), btnsize);

        QPushButton *button1 = new QPushButton(frontHall_3);
        button1->setStyleSheet(setStyleSheetString);
        button1->setText("frontHall_3 to frontHall_1");
        button1->setGeometry(rect1);
        frontHall_3->addButton(button1, 1);
        connect(button1, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(frontHall_1); });
    }

    // 4->1,4->6,4->7
    // frontHall_4共有3个button，分别去往frontHall_1、frontHall_6、frontHall_7
    // void Initialize_frontHall_4()
    {
        QRect rect1(QPoint(100, 200), btnsize);
        QRect rect2(QPoint(500, 200), btnsize);
        QRect rect3(QPoint(900, 200), btnsize);

        QPushButton *button1 = new QPushButton(frontHall_4);
        button1->setStyleSheet(setStyleSheetString);
        button1->setText("frontHall_4 to frontHall_1");
        button1->setGeometry(rect1);
        frontHall_4->addButton(button1, 1);
        connect(button1, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(frontHall_1); });

        QPushButton *button2 = new QPushButton(frontHall_4);
        button2->setStyleSheet(setStyleSheetString);
        button2->setText("frontHall_4 to frontHall_6");
        button2->setGeometry(rect2);
        frontHall_4->addButton(button2, 2);
        connect(button2, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(frontHall_6); });

        QPushButton *button3 = new QPushButton(frontHall_4);
        button3->setStyleSheet(setStyleSheetString);
        button3->setText("frontHall_4 to frontHall_7");
        button3->setGeometry(rect3);
        frontHall_4->addButton(button3, 3);
        connect(button3, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(frontHall_7); });
    }

    // 5->1,5->6,5->7
    // frontHall_5共有3个button，分别去往frontHall_1、frontHall_6、frontHall_7
    // void Initialize_frontHall_5()
    {
        QRect rect1(QPoint(100, 200), btnsize);
        QRect rect2(QPoint(500, 200), btnsize);
        QRect rect3(QPoint(900, 200), btnsize);

        QPushButton *button1 = new QPushButton(frontHall_5);
        button1->setStyleSheet(setStyleSheetString);
        button1->setText("frontHall_5 to frontHall_1");
        button1->setGeometry(rect1);
        frontHall_5->addButton(button1, 1);
        connect(button1, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(frontHall_1); });

        QPushButton *button2 = new QPushButton(frontHall_5);
        button2->setStyleSheet(setStyleSheetString);
        button2->setText("frontHall_5 to frontHall_6");
        button2->setGeometry(rect2);
        frontHall_5->addButton(button2, 2);
        connect(button2, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(frontHall_6); });

        QPushButton *button3 = new QPushButton(frontHall_5);
        button3->setStyleSheet(setStyleSheetString);
        button3->setText("frontHall_5 to frontHall_7");
        button3->setGeometry(rect3);
        frontHall_5->addButton(button3, 3);
        connect(button3, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(frontHall_7); });
    }

    // 6->1,6->4,6->5,6->backHall_1
    // frontHall_6共有3个button，分别去往frontHall_1、frontHall_4、frontHall_5、backHall_1
    // void Initialize_frontHall_6()
    {
        QRect rect1(QPoint(100, 200), btnsize);
        QRect rect2(QPoint(500, 200), btnsize);
        QRect rect3(QPoint(900, 200), btnsize);
        QRect rect4(QPoint(100, 400), btnsize);

        QPushButton *button1 = new QPushButton(frontHall_6);
        button1->setStyleSheet(setStyleSheetString);
        button1->setText("frontHall_6 to frontHall_1");
        button1->setGeometry(rect1);
        frontHall_6->addButton(button1, 1);
        connect(button1, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(frontHall_1); });

        QPushButton *button2 = new QPushButton(frontHall_6);
        button2->setStyleSheet(setStyleSheetString);
        button2->setText("frontHall_6 to frontHall_4");
        button2->setGeometry(rect2);
        frontHall_6->addButton(button2, 2);
        connect(button2, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(frontHall_4); });

        QPushButton *button3 = new QPushButton(frontHall_6);
        button3->setStyleSheet(setStyleSheetString);
        button3->setText("frontHall_6 to frontHall_5");
        button3->setGeometry(rect3);
        frontHall_6->addButton(button3, 3);
        connect(button3, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(frontHall_5); });

        QPushButton *button4 = new QPushButton(frontHall_6);
        button4->setStyleSheet(setStyleSheetString);
        button4->setText("frontHall_6 to backHall_1");
        button4->setGeometry(rect4);
        frontHall_6->addButton(button4, 4);
        connect(button4, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(backHall_1); });
    }

    // 7->1,7->4,7->5,7->backHall_3
    // frontHall_7共有3个button，分别去往frontHall_1、frontHall_4、frontHall_5、backHall_3
    // void Initialize_frontHall_7()
    {
        QRect rect1(QPoint(100, 200), btnsize);
        QRect rect2(QPoint(500, 200), btnsize);
        QRect rect3(QPoint(900, 200), btnsize);
        QRect rect4(QPoint(100, 400), btnsize);

        QPushButton *button1 = new QPushButton(frontHall_7);
        button1->setStyleSheet(setStyleSheetString);
        button1->setText("frontHall_7 to frontHall_1");
        button1->setGeometry(rect1);
        frontHall_7->addButton(button1, 1);
        connect(button1, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(frontHall_1); });

        QPushButton *button2 = new QPushButton(frontHall_7);
        button2->setStyleSheet(setStyleSheetString);
        button2->setText("frontHall_7 to frontHall_4");
        button2->setGeometry(rect2);
        frontHall_7->addButton(button2, 2);
        connect(button2, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(frontHall_4); });

        QPushButton *button3 = new QPushButton(frontHall_7);
        button3->setStyleSheet(setStyleSheetString);
        button3->setText("frontHall_7 to frontHall_5");
        button3->setGeometry(rect3);
        frontHall_7->addButton(button3, 3);
        connect(button3, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(frontHall_5); });

        QPushButton *button4 = new QPushButton(frontHall_7);
        button4->setStyleSheet(setStyleSheetString);
        button4->setText("frontHall_7 to backHall_3");
        button4->setGeometry(rect4);
        frontHall_7->addButton(button4, 4);
        connect(button4, &QPushButton::clicked, [=]()
                { stackedWidget->setCurrentWidget(backHall_3); });
    }

}

void Referee::InitializeItem()
{
    //Initialize Items in frontHall

}

QWidget *Referee::getCurrentWidget()
{
    return stackedWidget->currentWidget();
}

void Referee::do_show_widget(QWidget *widget)
{
    stackedWidget->setCurrentWidget(widget);
}

void Referee::showIt()
{
    stackedWidget->setCurrentIndex(6);
    mainwindow->repaint();
}

