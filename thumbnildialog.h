#ifndef THUMBNILDIALOG_H
#define THUMBNILDIALOG_H

#include <QTableWidget>

class QToolButton;

class ThumbNilDialog : public QTableWidget
{
    Q_OBJECT
public:
    explicit ThumbNilDialog(QWidget *parent = 0);

signals:
    void signalShowImage( QString );

public slots:
    void showFullView();
    void loadImages();

private:
    void init();

    QMap<QToolButton*, QString> m_pMapFileName;
};

#endif // THUMBNILDIALOG_H
