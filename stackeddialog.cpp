#include "stackeddialog.h"
#include "thumbnildialog.h"
#include "fullviewdlg.h"
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QBrush>
#include<QVBoxLayout>

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

    if( m_pFullViewDlg /*&& m_pFullViewDlg->getViewer()*/)
    {
        setCurrentWidget( m_pFullViewDlg );

        qDebug()<<"view exists  "<<filename;

        QGraphicsScene *scene = new QGraphicsScene();
        scene->addPixmap(QPixmap(filename));
        QGraphicsView *view = new QGraphicsView(scene);

        view->setBackgroundBrush(QBrush(Qt::black));
        QVBoxLayout* vlayout = new QVBoxLayout(m_pFullViewDlg);

        vlayout->addWidget(view);
        vlayout->addWidget(new QPushButton("some button here"));

    }
}

