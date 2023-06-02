
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStackedWidget>

MainWindow::MainWindow(Referee *parent)
    : parentPtr(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    Scene* scene = qobject_cast<Scene*>(parentPtr->getCurrentWidget());
    qDebug()<<scene->name;
    QPainter painter(this);
    painter.drawPixmap(0,0,this->width(),this->height(),scene->getSceneImage());

}
