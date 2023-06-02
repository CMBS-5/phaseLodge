#pragma once

#ifndef REFEREE_H
#define REFEREE_H


#include <QObject>
#include <QStackedWidget>
#include "mainwindow.h"
#include "scene.h"
class MainWindow;
class Referee : public QObject
{
    Q_OBJECT
private:
    QStackedWidget *stackedWidget;

    MainWindow* mainwindow;

    Scene* frontHall_1;
    Scene* frontHall_2;
    Scene* frontHall_3;
    Scene* frontHall_4;
    Scene* frontHall_5;
    Scene* frontHall_6;
    Scene* frontHall_7;
    Scene* backHall_1;
    Scene* backHall_2;
    Scene* backHall_3;
    Scene* study_1;
    Scene* study_2;
    Scene* boneRoom_1;
    Scene* boneRoom_2;
    Scene* eastBedroom_1;
    Scene* westBedroom_1;

public:
    friend class MainWindow;
    explicit Referee(QObject *parent = nullptr);
    void InitialConnection();
    void InitializeScene();
    void InitializeButton();
    QWidget* getCurrentWidget();
signals:

public slots:
    void do_show_widget(QWidget* widget);
    void showIt();
};

#endif // REFEREE_H
