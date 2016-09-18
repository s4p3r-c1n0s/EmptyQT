#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Create a container window
    QComboBox *comboBox = new QComboBox;
    //QWidget window(comboBox);
    QWidget window;
    window.setFixedSize(1280,720);
    MainWindow *new_window = new MainWindow(comboBox);
  //  new_window->combo_local = comboBox;
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

        comboBox->addItem("5 km per hour",QVariant(5));
        comboBox->addItem("10 km per hour",QVariant(10));
        comboBox->addItem("20 km per hour",QVariant(20));
        comboBox->addItem("30 km per hour",QVariant(30));
        comboBox->addItem("40 km per hour",QVariant(40));
        comboBox->addItem("45 km per hour",QVariant(45));
        comboBox->addItem("50 km per hour",QVariant(50));
        comboBox->addItem("55 km per hour",QVariant(55));
        comboBox->addItem("60 km per hour",QVariant(60));
        comboBox->addItem("70 km per hour",QVariant(70));
        comboBox->addItem("80 km per hour",QVariant(80));
        comboBox->addItem("90 km per hour",QVariant(90));
        comboBox->addItem("100 km per hour",QVariant(100));
        comboBox->addItem("110 km per hour",QVariant(110));

        QStyledItemDelegate* itemDelegate = new QStyledItemDelegate();
        comboBox->setItemDelegate(itemDelegate);

        //comboBox->
        comboBox->setInsertPolicy(QComboBox::InsertAlphabetically);
        comboBox->setShortcutEnabled(QComboBox::AdjustToMinimumContentsLength);
        comboBox->setStyleSheet("QComboBox {min-height: 30px;background : darkblue; color: yellow;min-width: 20em;alignment: right;text-align: right;}\
                                    QAbstractItemView::item {color: yellow;  background : darkblue;\min-height: 30px;alignment: right;text-align: right;}");


    layout->addWidget(progressBar, 0, Qt::AlignTop);
    //layout->addSpacing(1000);
    layout->addWidget(slider);
    layout->addWidget(comboBox,0, Qt::AlignRight | Qt::AlignBottom);
    window.setLayout(layout);
    window.setStyleSheet("background-color:rgba(0,0,0,0%);");
   // window.setWindowFlags(Qt::FramelessWindowHint | Qt::ToolTip);
   // window.setParent(0); // Create TopLevel-Widget
   /// window.setAttribute(Qt::WA_NoSystemBackground, true);
   // window.setAttribute(Qt::WA_TranslucentBackground, true);
    //window.setAttribute(Qt::WA_PaintOnScreen);
    window.show();
    // Connection
    // This connection set the value of the progress bar
    // while the slider's value changes
    QObject::connect(slider, SIGNAL (valueChanged(int)), progressBar, SLOT (setValue(int)));
    QObject::connect(comboBox,SIGNAL(activated(int)),new_window,SLOT(update_threshhold(int)));


    return a.exec();
}
