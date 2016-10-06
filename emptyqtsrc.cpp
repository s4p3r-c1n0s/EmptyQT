#include <QApplication>
#include <QProgressBar>
#include <QSlider>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QSpacerItem>
#include <QComboBox>
#include <QRect>
#include <QTimer>
#include <QDesktopWidget>
#include <QMainWindow>
#include <QStyledItemDelegate>
#include <iostream>
#include "window.h"
#include "mainwindow.h"
#include "emptyqtsrc.h"

Window *exitapp = new Window();

void exit_wid(int value)
{
	exitapp->setValue(value);
}

int mw_ui_intf_getThresholdFlag(char *ThresholdFlag)
{
	// if updated value
	//  then set the ThresholdFlag
	return 1001;
}

int mw_ui_intf_getThresholdValue(unsigned char *SpeedThersholdVal)
{

	// fill the latest threshold value here

	return 1001;
}

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    // Create a container window
    QWidget window;
    //window.setFixedSize(100 , 400);

    QHBoxLayout *layout = new QHBoxLayout;
    // Create a progress bar
    // with the range between 0 and 100, and a starting value of 0
    QProgressBar *progressBar = new QProgressBar();
    progressBar->setRange(0, 100);
    progressBar->setValue(20);
    progressBar->setTextDirection(QProgressBar::TopToBottom);
    progressBar->setOrientation(Qt::Vertical);
    progressBar->setGeometry(10, 10, 30, 300);
    progressBar->setFormat("%p%");
    //progressBar->colorCount();
    progressBar->setInvertedAppearance(true);

    // Create a horizontal slider
    // with the range between 0 and 100, and a starting value of 0
    QSlider *slider = new QSlider();
    slider->setOrientation(Qt::Vertical);
    slider->setRange(0, 100);
    slider->setValue(20);
    //slider->colorCount();
    //slider->setGeometry(40, 10, 30, 300);

    QSpacerItem *spacer =  new QSpacerItem(430, 19, QSizePolicy::Minimum,  QSizePolicy::Minimum);
    QDesktopWidget *w = QApplication::desktop();
    QRect rec = w->availableGeometry();
	std::cout<<rec.width()<<" "<<rec.height()<<std::endl;

    QComboBox *comboBox = new QComboBox;
        comboBox->addItem("5 km per hour");
        comboBox->addItem("10 km per hour");
        comboBox->addItem("20 km per hour");
        comboBox->addItem("30 km per hour");
        comboBox->addItem("40 km per hour");
        comboBox->addItem("45 km per hour");
        comboBox->addItem("50 km per hour");
        comboBox->addItem("55 km per hour");
        comboBox->addItem("60 km per hour");
        comboBox->addItem("70 km per hour");
        comboBox->addItem("80 km per hour");
        comboBox->addItem("90 km per hour");
        comboBox->addItem("100 km per hour");
        comboBox->addItem("110 km per hour");

        QStyledItemDelegate* itemDelegate = new QStyledItemDelegate();
        comboBox->setItemDelegate(itemDelegate);

        //comboBox->
        comboBox->setInsertPolicy(QComboBox::InsertAlphabetically);
        comboBox->setShortcutEnabled(QComboBox::AdjustToMinimumContentsLength);
        comboBox->setStyleSheet("QComboBox {min-height: 30px;background : darkblue; color: yellow;min-width: 20em;alignment: right;text-align: right;}\
                                    QAbstractItemView::item {color: yellow;  background : darkblue;\min-height: 30px;alignment: right;text-align: right;}");

    //layout->addWidget(progressBar, 0, Qt::AlignTop);
    //layout->addSpacing(1000);
    //layout->addWidget(slider);
    layout->addWidget(comboBox,0, Qt::AlignRight | Qt::AlignBottom);
    window.setLayout(layout);
    window.setStyleSheet("background-color:transparent;");
    window.setWindowFlags(window.windowFlags() | Qt::ToolTip |Qt::FramelessWindowHint);
    window.setParent(0); // Create TopLevel-Widget
    window.setAttribute(Qt::WA_NoSystemBackground, true);
    window.setAttribute(Qt::WA_TranslucentBackground, true);
    window.setAttribute(Qt::WA_TransparentForMouseEvents, true);
//	MainWindow w;
//w.setWindowState(w.windowState() ^ Qt::WindowFullScreen);
window.setAttribute(Qt::WA_PaintOnScreen);
    window.show();
    // Connection
    // This connection set the value of the progress bar
    // while the slider's value changes
    QObject::connect(slider, SIGNAL (valueChanged(int)), progressBar, SLOT (setValue(int)));

    QObject::connect(exitapp, SIGNAL(valueChanged(int)),  QApplication::instance(), SLOT(quit()));

    MainWindow galleryImageView;
    galleryImageView.show(&window);

    return app.exec();
}
