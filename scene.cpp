
#include "scene.h"

Scene::Scene(QWidget *parent)
    : QWidget{parent}
{
    //nullptr
    buttons.append(new QPushButton());

}

Scene::~Scene()
{

}

void Scene::setSceneImage(QPixmap _image)
{
    image =_image;
}

QPixmap& Scene::getSceneImage()
{
    return image;
}

void Scene::addButton(QPushButton *button, int index)
{
    Q_UNUSED(index);
    buttons.append(button);
}

void Scene::setName(QString _name)
{
    name = _name;
}


