#include <QApplication>
#include <QProgressBar>
#include <QSlider>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    // Create a container window
    QWidget window;
    window.setFixedSize(100 , 400);

    // Create a progress bar
    // with the range between 0 and 100, and a starting value of 0
    QProgressBar *progressBar = new QProgressBar(&window);
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextDirection(QProgressBar::TopToBottom);
    progressBar->setOrientation(Qt::Vertical);
    progressBar->setGeometry(10, 10, 30, 300);
    progressBar->setFormat("%p%");
    progressBar->setInvertedAppearance(true);

    // Create a horizontal slider
    // with the range between 0 and 100, and a starting value of 0
    QSlider *slider = new QSlider(&window);
    slider->setOrientation(Qt::Vertical);
    slider->setRange(0, 100);
    slider->setValue(0);
    slider->setGeometry(40, 10, 30, 300);

    window.show();

    // Connection
    // This connection set the value of the progress bar
    // while the slider's value changes
    QObject::connect(slider, SIGNAL (valueChanged(int)), progressBar, SLOT (setValue(int)));

    return app.exec();
}
