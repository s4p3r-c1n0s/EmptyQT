#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProgressBar>
#include <QSlider>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QSpacerItem>
#include <QComboBox>
#include <QRect>
#include <QDesktopWidget>
#include <QStyledItemDelegate>
#include <QScreen>
#include <QPushButton>
#include <QDebug>
#include <QFile>
#include<QTextStream>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QComboBox *local, QWidget *parent = 0);
    QComboBox *combo_local;
    ~MainWindow();
public slots:
    void update_threshhold(int index);
private:
    Ui::MainWindow *ui;
    QPushButton *m_button;

};

#endif // MAINWINDOW_H
