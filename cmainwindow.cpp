#include "cmainwindow.h"
#include "stackeddialog.h"

#include <QPushButton>
#include <QDebug>

CMainWindow::CMainWindow(QWidget *parent)
    : QMainWindow(parent),
      m_pBtnLibImg( NULL ),
      m_pStackedDlg( NULL )
{
    init();
    this->setWindowFlags(Qt::Window|Qt::FramelessWindowHint);
   // setWindowTitle("ISRS DEMO");
    setGeometry(1250,300,128,128);
}

CMainWindow::~CMainWindow()
{
    if( m_pBtnLibImg )
    {
        delete m_pBtnLibImg;
    }
}

void CMainWindow::init()
{
    if(!m_pBtnLibImg)
    {
       m_pBtnLibImg = new QPushButton(this);
       QPixmap open_library_button("/home/umangjeet/Pictures/image_library.png");
       QIcon library_button_icon(open_library_button);
       m_pBtnLibImg->setIcon(library_button_icon);
       m_pBtnLibImg->setStyleSheet("background-color: rgba(79,141,176,100);");
        m_pBtnLibImg-> setFixedSize(QSize(128,128));
        m_pBtnLibImg->setIconSize(QSize(128,128));
       layout()->addWidget(m_pBtnLibImg);
       setLayoutDirection(Qt::LayoutDirectionAuto);
    }

    m_pStackedDlg = new StackedDialog;
      m_pStackedDlg->setWindowModality(Qt::ApplicationModal);

    connect(m_pBtnLibImg, SIGNAL(clicked()), this, SLOT(showThumbnilView()));
}

void CMainWindow::showThumbnilView()
{
    qDebug()<<"I am in showThumbnilView()";
    if( m_pStackedDlg != NULL )
    {
        m_pStackedDlg->setGeometry(1050,428,200,200);
        m_pStackedDlg->show();
       // m_pStackedDlg->setWindowFlags(Qt::Window|Qt::FramelessWindowHint);

    }
}
