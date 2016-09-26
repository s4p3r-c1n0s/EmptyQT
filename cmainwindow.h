#ifndef CMAINWINDOW_H
#define CMAINWINDOW_H

#include <QMainWindow>

class QPushButton;
class StackedDialog;

class CMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    CMainWindow(QWidget *parent = 0);
    ~CMainWindow();

protected slots:
    void showThumbnilView();

private:
    void init();
    QPushButton*   m_pBtnLibImg;
    QPushButton*   cancel_button;

    StackedDialog* m_pStackedDlg;
};

#endif // MAINWINDOW_H
