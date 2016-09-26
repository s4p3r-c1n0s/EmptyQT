#include "fullviewdlg.h"
#include <QPushButton>

#include <QDebug>

FullViewDlg::FullViewDlg(QWidget *parent) :
    QWidget(parent),
    m_pFullView( NULL ),
    m_pPrintBtn( NULL ),
    m_pCancelBtn( NULL )
{
   init();
}

void FullViewDlg::init()
{
    m_pFullView = new QWidget(this);
    m_pPrintBtn = new QPushButton("Print", this);
    connect( m_pPrintBtn, SIGNAL( clicked() ), this, SLOT( printImage() ) );
}

void FullViewDlg::printImage()
{
    qDebug()<<" print button pressed ";

      //  int nResponse = QMessageBox::question(this,"Print Confirmation","Do you really want to print",QMessageBox::Ok,QMessageBox::Cancel);

        //if( nResponse == QMessageBox::Ok )
        {
            qDebug()<<"Printing Image";
            QPixmap fileToSave = QPixmap::grabWidget(this,rect());
            QFile file (str);
            qDebug()<<file.fileName();
            file.open(QIODevice::WriteOnly);
            //pixmap.save(&file, "JPG");
            fileToSave.save(&file, "JPG");
            file.close();
            QString text =
                        "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do\n"
                        "eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut\n"
                        "enim ad minim veniam, quis nostrud exercitation ullamco laboris\n"
                        "nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor\n"
                        "in reprehenderit in voluptate velit esse cillum dolore eu fugiat\n"
                        "nulla pariatur. Excepteur sint occaecat cupidatat non proident,\n"
                        "sunt in culpa qui officia deserunt mollit anim id est laborum.\n";

                QPrinter printer;

                QPrintDialog *dialog = new QPrintDialog(&printer);
                dialog->setWindowTitle("Print Document");

                if (dialog->exec() != QDialog::Accepted)
                    return;

                QPainter painter;
                painter.begin(&printer);

                //painter.drawText(100, 100, 500, 500, Qt::AlignLeft|Qt::AlignTop, text);
                QImage image(file.fileName());

                //QPainter painter(this);
                painter.drawImage(rect(), image, rect());

                painter.end();
        }
}
