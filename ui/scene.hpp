#ifndef SCENE_HPP
#define SCENE_HPP

#include <QGraphicsScene>

namespace UI {

class Scene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit Scene(QObject *parent = 0);

private:
    void drawLines();
    
signals:
    
public slots:
    
};

}

#endif // SCENE_HPP
