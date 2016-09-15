#include <QApplication>
#include <QProgressBar>
#include <QSlider>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QSpacerItem>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

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

    layout->addWidget(progressBar, 0, Qt::AlignBottom);
    //layout->addSpacing(1000);
    layout->addWidget(slider,0, Qt::AlignRight);
    window.setLayout(layout);

    window.setWindowFlags(Qt::Widget | Qt::FramelessWindowHint);
    window.setParent(0); // Create TopLevel-Widget
    window.setAttribute(Qt::WA_NoSystemBackground, true);
    window.setAttribute(Qt::WA_TranslucentBackground, true);
    //window.setAttribute(Qt::WA_PaintOnScreen);

    window.showFullScreen();
    // Connection
    // This connection set the value of the progress bar
    // while the slider's value changes
    QObject::connect(slider, SIGNAL (valueChanged(int)), progressBar, SLOT (setValue(int)));

    return app.exec();
}
