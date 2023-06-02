
#ifndef UTILS_H
#define UTILS_H

#include<bits/stdc++.h>
#include<Qstring>
#include<QDebug>
#include<QImage>
#include<QPixmap>
#include<QPainter>
#include<QWidget>
#include <QObject>
#include <QPoint>
#include <QStack>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QPushbutton>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QTimer>
#include <QTime>
#include <QKeyEvent>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

using namespace std;
//游戏状态
enum GameState { kStart, kSetting, kRunning, kEnd,kWin };

//场景模式：前厅，后厅，书房，骨房，东卧室，西卧室
enum SceneMode { kFrontHall, kBackHall, kStudy, kBoneRoom, kEastBedroom, kWestBedroom };

//场景界面窗口大小
const int SCENE_WINDOW_WIDTH = 800;
const int SCENE_WINDOW_HEIGHT = 600;

//设置界面窗口大小
const int SETTING_WINDOW_WIDTH = 600;
const int SETTING_WINDOW_HEIGHT = 400;

#endif // UTILS_H
