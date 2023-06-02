
#ifndef SCENE_H
#define SCENE_H


#include <QWidget>
#include "utils.h"

class Scene : public QWidget
{

    QPixmap image;
    QVector<QPushButton*>buttons;
    Q_OBJECT
public:
    explicit Scene(QWidget *parent = nullptr);
    ~Scene();
    void setSceneImage(QPixmap _image);
    QPixmap& getSceneImage();
    //添加按钮，传入参数为按钮
    void addButton(QPushButton* button,int index);
    QString name;
    void setName(QString _name);
signals:

};

#endif // SCENE_H
