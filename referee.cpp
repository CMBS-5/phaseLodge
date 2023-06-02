
#include "referee.h"

Referee::Referee(QObject *parent)
    : QObject{parent}
{
    // 创建一个 QStackedWidget 控件
    mainwindow = new MainWindow(this);
    mainwindow->setFixedSize(1400,700);
    stackedWidget = new QStackedWidget(mainwindow);

    //创建每个子页面
    InitializeScene();

    //创建每个子按钮
    InitializeButton();

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
    frontHall_1 = new Scene(mainwindow);
    frontHall_1->setStyleSheet("background-image: url(:/image/scene/exp/frontHall/frontHall_1.jpg);");
    QPixmap _image1(":/image/scene/exp/frontHall/frontHall_1.jpg");
    frontHall_1->setSceneImage(_image1);
    frontHall_1->setName("frontHall_1");
    stackedWidget->addWidget(frontHall_1);


    frontHall_2 = new Scene(mainwindow);
    frontHall_2->setStyleSheet("background-image: url(:/image/scene/exp/frontHall/frontHall_2.jpg);");
    QPixmap _image2(":/image/scene/exp/frontHall/frontHall_2.jpg");
    frontHall_2->setSceneImage(_image2);
    stackedWidget->addWidget(frontHall_2);

    frontHall_3 = new Scene(mainwindow);
    frontHall_3->setStyleSheet("background-image: url(::/image/scene/exp/frontHall/frontHall_3.jpg);");
    QPixmap _image3(":/image/scene/exp/frontHall/frontHall_3.jpg");
    frontHall_3->setSceneImage(_image3);
    stackedWidget->addWidget(frontHall_3);

    frontHall_4 = new Scene(mainwindow);
    frontHall_4->setStyleSheet("background-image: url(:/image/scene/exp/frontHall/frontHall_4.jpg);");
    QPixmap _image4(":/image/scene/exp/frontHall/frontHall_4.jpg");
    frontHall_4->setSceneImage(_image4);
    stackedWidget->addWidget(frontHall_4);

    frontHall_5 = new Scene(mainwindow);
    frontHall_5->setStyleSheet("background-image: url(:/image/scene/exp/frontHall/frontHall_5.jpg);");
    QPixmap _image5(":/image/scene/exp/frontHall/frontHall_5.jpg");
    frontHall_5->setSceneImage(_image5);
    stackedWidget->addWidget(frontHall_5);

    frontHall_6 = new Scene(mainwindow);
    frontHall_6->setStyleSheet("background-image: url(:/image/scene/exp/frontHall/frontHall_6.jpg);");
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

void Referee::InitializeButton()
{
    //利用QRect类来设置button的位置和大小
    //并根据按钮个数的不同，合理分配button的位置使得其不互相重叠
    QSize btnsize(350,100);
    QRect rect1(QPoint(100, 200),btnsize);
    QRect rect2(QPoint(500, 200), btnsize);
    QRect rect3(QPoint(900, 200), btnsize);
    QRect rect4(QPoint(100, 400), btnsize);
    QRect rect5(QPoint(500, 400), btnsize);
    QRect rect6(QPoint(900, 400), btnsize);
    QString btnfont = "font: 75 15pt \"微软雅黑\";";
//    QString btnColor = "background-color: rgb(0, 0, 255);";
    QString btnColor = "";
//    QString btnStyle = "border-image: url(:/res/image/button/button.png);";
    QString btnStyle = "";
    //frontHall_1共有6个button，分别去往frontHall_2、frontHall_3、frontHall_4、frontHall_5、frontHall_6、frontHall_7
    //设置button的位置、大小、样式、文字、连接的场景
    QPushButton* button1 = new QPushButton(frontHall_1);
    //利用setStyleSheet函数来设置button的名字、位置、颜色、样式
//    button->setStyleSheet(btnfont + btnColor + btnStyle);
    button1->setStyleSheet(btnfont);
    button1->setText("frontHall_1 to frontHall_2");
    button1->setGeometry(rect1);
    frontHall_1->addButton(button1, 1);
    connect(button1, &QPushButton::clicked, [=]() {stackedWidget->setCurrentWidget(frontHall_2);});

    //重复上述代码，但是要注意button的位置不能重叠
    QPushButton* button2 = new QPushButton(frontHall_1);
    button2->setStyleSheet(btnfont + btnColor + btnStyle);
    button2->setText("frontHall_1 to frontHall_3");
    button2->setGeometry(rect2);
    frontHall_1->addButton(button2, 2);
    connect(button2, &QPushButton::clicked, [=]() {stackedWidget->setCurrentWidget(frontHall_3);});

    QPushButton* button3 = new QPushButton(frontHall_1);
    button3->setStyleSheet(btnfont + btnColor + btnStyle);
    button3->setText("frontHall_1 to frontHall_4");
    button3->setGeometry(rect3);
    frontHall_1->addButton(button3, 3);
    connect(button3, &QPushButton::clicked, [=]() {stackedWidget->setCurrentWidget(frontHall_4);});

    QPushButton* button4 = new QPushButton(frontHall_1);
    button4->setStyleSheet(btnfont + btnColor + btnStyle);
    button4->setText("frontHall_1 to frontHall_5");
    button4->setGeometry(rect4);
    frontHall_1->addButton(button4, 4);
    connect(button4, &QPushButton::clicked, [=]() {stackedWidget->setCurrentWidget(frontHall_5);});

    QPushButton* button5 = new QPushButton(frontHall_1);
    button5->setStyleSheet(btnfont + btnColor + btnStyle);
    button5->setText("frontHall_1 to frontHall_6");
    button5->setGeometry(rect5);
    frontHall_1->addButton(button5, 5);
    connect(button5, &QPushButton::clicked, [=]() {stackedWidget->setCurrentWidget(frontHall_6);qDebug()<<"1->7,raised";});

    QPushButton* button6 = new QPushButton(frontHall_1);
    button6->setStyleSheet(btnfont + btnColor + btnStyle);
    button6->setText("frontHall_1 to frontHall_7");
    button6->setGeometry(rect6);
    frontHall_1->addButton(button6, 6);
//    connect(button6, &QPushButton::clicked, [=]() {stackedWidget->setCurrentWidget(frontHall_7);});
    connect(button6, &QPushButton::clicked,this,&Referee::showIt);

    button1 = new QPushButton(frontHall_7);
    //利用setStyleSheet函数来设置button的名字、位置、颜色、样式
    //    button->setStyleSheet(btnfont + btnColor + btnStyle);
    button1->setStyleSheet(btnfont);
    button1->setText("frontHall_7 to frontHall_1");
    button1->setGeometry(rect1);
    frontHall_7->addButton(button1, 1);
    connect(button1, &QPushButton::clicked, [=]() {stackedWidget->setCurrentWidget(frontHall_1);});
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

