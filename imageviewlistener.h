#ifndef IMAGEVIEWLISTENER
#define IMAGEVIEWLISTENER

#include <QGraphicsView>
#include <QEvent>
#include <QFile>
#include <QDebug>
#include <QPrinter>
#include <QSwipeGesture>
#include <QMouseEvent>
#include <QImage>

class QPushButton;

class ImageViewListener : public QGraphicsView
{
    Q_OBJECT
public:
    explicit ImageViewListener(QGraphicsScene * scene, QWidget * parent = 0);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    bool event(QEvent *event);
    bool viewportEvent(QEvent *event);
    bool gestureEvent(QGestureEvent *event);
    void swipeTriggered(QSwipeGesture *gesture);

};

#endif // IMAGEVIEWLISTENER

