#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QPushButton;
class StackedDialog;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected slots:
    void showThumbnilView();

private:
    void init();
    QPushButton*   m_pBtnLibImg;
    QPushButton*   cancel_button;

    StackedDialog* m_pStackedDlg;
};

#endif // MAINWINDOW_H
