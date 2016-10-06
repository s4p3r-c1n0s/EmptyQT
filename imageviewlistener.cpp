#include "imageviewlistener.h"
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QMouseEvent>
#include <QDebug>
#include <QSwipeGesture>
#include <QDir>

const QString globalStrImgPath = QDir::homePath() + "/Pictures";

ImageViewListener::ImageViewListener(QGraphicsScene * scene, QWidget * parent) :
    QGraphicsView(scene,parent)
{
    qDebug() << "You didn't click on an item.";
}
void ImageViewListener::mousePressEvent(QMouseEvent *event)
{
    if (QGraphicsItem *item = itemAt(event->pos())) {
    //    qDebug() << "You clicked on item" << event->pos().x()<<event->pos().y() ;
    } else {
      //  qDebug() << "You didn't click on an item.";
    }
}
void ImageViewListener::mouseMoveEvent(QMouseEvent *event)
{
    if (QGraphicsItem *item = itemAt(event->pos())) {
        //qDebug() << "You moved on item" << event->pos().x()<<event->pos().y() ;
    } else {
        //qDebug() << "You didn't move on an item.";
    }
}

void ImageViewListener::mouseReleaseEvent(QMouseEvent *event)
{
    if (QGraphicsItem *item = itemAt(event->pos())) {
        //qDebug() << "You release on item" << event->pos().x()<<event->pos().y() ;
    } else {
        //qDebug() << "You didn't release on an item.";
    }
}


bool ImageViewListener::viewportEvent(QEvent *event)
{

    qDebug() << "viewPortEvent being called:" << event;
    if (event->type() == QEvent::Gesture)
        return gestureEvent(static_cast<QGestureEvent*>(event));
    return QWidget::event(event);
}
bool ImageViewListener::event(QEvent *event)
{

    qDebug() << "event being called:" << event;
    if (event->type() == QEvent::Gesture)
        return gestureEvent(static_cast<QGestureEvent*>(event));
    return QWidget::event(event);
}

bool ImageViewListener::gestureEvent(QGestureEvent *event)
{
    qDebug() << "gestureEvent() received:" << event;
      if (QGesture *swipe = event->gesture(Qt::SwipeGesture))
          swipeTriggered(static_cast<QSwipeGesture *>(swipe));
      return true;
}


void ImageViewListener::swipeTriggered(QSwipeGesture *gesture)
{
    if (gesture->state() == Qt::GestureFinished) {
        if (gesture->horizontalDirection() == QSwipeGesture::Left
            || gesture->verticalDirection() == QSwipeGesture::Up) {
            qDebug() << "swipeTriggered(): swipe to previous";
            //goPrevImage();
        } else {
            qDebug() << "swipeTriggered(): swipe to next";
            //goNextImage();
        }
        update();
    }
}
