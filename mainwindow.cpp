#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QComboBox *local,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   combo_local = local;
    // Create and position the button
    m_button = new QPushButton("Hello World", this);
    m_button->setGeometry(10, 10, 80, 30);
    // NEW : Do the connection
    connect(m_button, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::update_threshhold(int index)
{
    int threshhold;
    int fd;
  threshhold = combo_local->itemData(index).toInt();
   qDebug() << "Threshhold Speed= " << threshhold;
  mkfifo("MYPIPE",0666);
  fd = open("MYPIPE",O_WRONLY);
  write(fd,&threshhold,sizeof(int));

}

