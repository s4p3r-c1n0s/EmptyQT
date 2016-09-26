/********************************************************************************
** Form generated from reading UI file 'cmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMAINWINDOW_H
#define UI_CMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CMainWindow
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CMainWindow)
    {
        if (CMainWindow->objectName().isEmpty())
            CMainWindow->setObjectName(QString::fromUtf8("CMainWindow"));
        CMainWindow->resize(400, 300);
        menuBar = new QMenuBar(CMainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        CMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CMainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CMainWindow->addToolBar(mainToolBar);
        centralWidget = new QWidget(CMainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        CMainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CMainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CMainWindow->setStatusBar(statusBar);

        retranslateUi(CMainWindow);

        QMetaObject::connectSlotsByName(CMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CMainWindow)
    {
        CMainWindow->setWindowTitle(QApplication::translate("CMainWindow", "CMainWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CMainWindow: public Ui_CMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMAINWINDOW_H
