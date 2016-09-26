#include "thumbnildialog.h"

#include <QDir>
#include <QDateTime>
#include <QTableWidget>
#include <QHeaderView>
#include <QMessageBox>
#include <QToolButton>

#include <QDebug>

const QString globalStrImgPath = "/home/varun/Pictures";

#define ROWCNT 10
#define COLCNT 10
#define IMG_WIDTH 100
#define IMG_HEIGHT 100

ThumbNilDialog::ThumbNilDialog(QWidget *parent) :
    QTableWidget(ROWCNT,COLCNT,parent)
{
    init();
    loadImages();
}

void ThumbNilDialog::init()
{
    verticalHeader()->hide();
    horizontalHeader()->hide();
    setShowGrid(false);
}

void ThumbNilDialog::loadImages()
{
    qDebug()<<"refreshing images";
    m_pMapFileName.clear();
    QDir libDir(globalStrImgPath);
    QFileInfoList fileList;
    int fileCnt = 0;
    if( libDir.exists() )
    {
        qDebug()<<globalStrImgPath<<" exists.";
        fileList = libDir.entryInfoList(QDir::Files);
        fileCnt = fileList.size();
        qDebug()<<fileList.size();
    }
    int imgAdded = 0;
    for(int i = 0; i < ROWCNT; i++ )
    {
        for( int j = 0; j < COLCNT && imgAdded < fileCnt; j++ )
        {
            qDebug()<<"Image added "<<imgAdded;
            QToolButton *pBtn = new QToolButton;
            pBtn->setIconSize(QSize(IMG_WIDTH,IMG_HEIGHT));
            pBtn->setIcon( QPixmap(fileList.at(imgAdded).absoluteFilePath() ) );
            setColumnWidth(j,IMG_WIDTH);
            setRowHeight(i,IMG_HEIGHT);
            setCellWidget(i,j,pBtn);
            connect( pBtn, SIGNAL( clicked() ), this, SLOT( showFullView() ) );
            m_pMapFileName[pBtn] = QString( fileList.at(imgAdded).absoluteFilePath() );
            imgAdded++;
        }
    }
}

void ThumbNilDialog :: showFullView()
{
    qDebug()<<"Show full view"<<sender();
    QToolButton *pBtn = dynamic_cast<QToolButton*>(sender());
    if( m_pMapFileName.keys().contains( pBtn ) )
    {
        qDebug()<<"Got it";
        qDebug()<<m_pMapFileName[pBtn];
        emit signalShowImage( m_pMapFileName[pBtn] );
    }
}
