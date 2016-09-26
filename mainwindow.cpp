#include "mainwindow.h"
#include "stackeddialog.h"
#include "thumbnildialog.h"

#include <QPushButton>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      m_pBtnLibImg( NULL ),
      m_pStackedDlg( NULL ),
      m_pThumbNilDlg( NULL )
{
    init();
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Window);
    this->setParent(0); // Create TopLevel-Widget
    this->setAttribute(Qt::WA_NoSystemBackground, true);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
//    this->setWindowFlags(Qt::Window|Qt::FramelessWindowHint);
    this->setWindowTitle("ISRS DEMO");
    this->setGeometry(1250,300,128,128);
}

MainWindow::~MainWindow()
{
    if( m_pBtnLibImg )
    {
        delete m_pBtnLibImg;
    }
}

void MainWindow::init()
{
    if(!m_pBtnLibImg)
    {
        m_pThumbNilDlg = new ThumbNilDialog;
       m_pBtnLibImg = new QPushButton(this);
       QPixmap open_library_button("/home/varun/Pictures/image_library.png");
       QIcon library_button_icon(open_library_button);
       m_pBtnLibImg->setIcon(library_button_icon);
       m_pBtnLibImg->setStyleSheet("background-color: rgba(79,141,176,100);");
        m_pBtnLibImg-> setFixedSize(QSize(128,128));
        m_pBtnLibImg->setIconSize(QSize(128,128));
       layout()->addWidget(m_pBtnLibImg);
       setLayoutDirection(Qt::LayoutDirectionAuto);
    }

    connect(m_pBtnLibImg, SIGNAL(clicked()), m_pThumbNilDlg, SLOT(loadImages()));
    connect(m_pBtnLibImg, SIGNAL(clicked()), this, SLOT(showThumbnilView()));
}

void MainWindow::show(QWidget* threshold)
{
    m_thresholdComboBox = threshold;
    QMainWindow::show();
    connect(m_pBtnLibImg,SIGNAL(clicked()), m_thresholdComboBox,SLOT(hide()));
}

void MainWindow::showThumbnilView()
{
    m_pStackedDlg = new StackedDialog(m_pThumbNilDlg);
      m_pStackedDlg->setWindowModality(Qt::ApplicationModal);
    qDebug()<<"I am in showThumbnilView()";
    if( m_pStackedDlg != NULL )
    {
        //m_pStackedDlg->setGeometry(1050,428,200,200);
        m_pStackedDlg->setWindowFlags(Qt::Window| Qt::WindowStaysOnTopHint);
        m_pStackedDlg->showFullScreen();
	m_pStackedDlg->activateWindow();
	m_pStackedDlg->raise();

    }
}
