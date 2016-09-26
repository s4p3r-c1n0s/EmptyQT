#include "stackeddialog.h"
#include "thumbnildialog.h"
#include "fullviewdlg.h"

#include <QDebug>

StackedDialog::StackedDialog(QWidget *parent, ThumbNilDialog *pThumbNilDlg) :
    QStackedWidget(parent),
    m_pThumbNilDlg( NULL ),
    m_pFullViewDlg( NULL )
{
    m_pThumbNilDlg = pThumbNilDlg;
    init();

}

StackedDialog::~StackedDialog()
{
   if (m_pThumbNilDlg)
       delete m_pThumbNilDlg;

   if (m_pFullViewDlg)
       delete m_pFullViewDlg;

}

void StackedDialog::init()
{
    if( !m_pThumbNilDlg )
    {
        m_pThumbNilDlg = new ThumbNilDialog;
        addWidget(m_pThumbNilDlg);
    }
    if( !m_pFullViewDlg )
    {
        m_pFullViewDlg = new FullViewDlg;
        addWidget(m_pFullViewDlg);
    }

    connect( m_pThumbNilDlg, SIGNAL( signalShowImage( QString ) ), this, SLOT( showFullView( QString ) ) );
}

void StackedDialog::showFullView(QString filename)
{
    qDebug()<<"Show full view in StackedDialog::showFullView  "<<filename;

     m_pFullViewDlg->str = filename;

    if( m_pFullViewDlg /*&& m_pFullViewDlg->getViewer() */)
    {
        setCurrentWidget( m_pFullViewDlg );
        //m_pFullViewDlg->sethh( filename );
        QPixmap bkgnd(filename);
        bkgnd = bkgnd.scaled(m_pFullViewDlg/*->getViewer()*/->size(), Qt::IgnoreAspectRatio);
        QPalette palette;
        //m_pFullViewDlg/*->getViewer()*/->setPalette(palette);
        //setCurrentWidget( m_pFullViewDlg );
        this->setPalette(palette);
    }
}

