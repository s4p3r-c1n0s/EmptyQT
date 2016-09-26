#ifndef STACKEDDIALOG_H
#define STACKEDDIALOG_H

#include <QStackedWidget>
#include <QPushButton>
#include <QLayout>
#include <QString>
#include "thumbnildialog.h"

class ThumbNilDialog;
class FullViewDlg;

class StackedDialog : public QStackedWidget
{
    Q_OBJECT
public:
    explicit StackedDialog(QWidget *parent = 0, ThumbNilDialog* pThumbNilDlg = 0);
    ~StackedDialog();

signals:

public slots:
    void showFullView(QString);

private:
    void init();
    ThumbNilDialog* m_pThumbNilDlg;
    FullViewDlg*    m_pFullViewDlg;
    QPushButton*    m_pBtnPrint;
    QPushButton*    m_pBtnCancel;
};

#endif // STACKEDDIALOG_H
