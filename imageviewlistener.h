#ifndef IMAGEVIEWLISTENER
#define IMAGEVIEWLISTENER

#include <QGraphicsView>
#include <QMessageBox>
#include <QFile>
#include <QDebug>
#include <QPrinter>
#include <QPrintDialog>
#include <QPainter>
#include <QImage>

class QPushButton;

class ImageViewListner : public QGraphicsView
{
    Q_OBJECT
public:
    explicit FullViewDlg(QWidget *parent = 0);

    QWidget* getViewer() const
    {
        return m_pFullView;
    }
    void sethh(QString);
    QString  str;
signals:
    void signalGoToThumbnilView();

//protected:
  //  void resizeEvent(QResizeEvent * event);

public slots:
    void printImage();


private:
    void init();

    QWidget* m_pFullView;
    QPushButton* m_pPrintBtn;
    QPushButton* m_pCancelBtn;
};

#endif // IMAGEVIEWLISTENER

