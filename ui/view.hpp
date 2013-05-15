#ifndef VIEW_HPP
#define VIEW_HPP

#include <QGraphicsView>

namespace UI {

class View : public QGraphicsView
{
    Q_OBJECT
public:
    explicit View(QWidget *parent = 0);
    
signals:
    
public slots:
    
};

}

#endif // VIEW_HPP
