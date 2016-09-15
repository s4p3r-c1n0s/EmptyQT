#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
 QApplication app (argc, argv);

 QWidget window;
 window.setFixedSize(100, 50);
 QPushButton button ("Hello world !", &window);
 button.setText("My text");
 button.setToolTip("A tooltip");
 QFont font ("Courier", -1, -1, false);
 button.setFont(font);
 QPushButton *but = &button;
 but->setGeometry(10,20,80,30);
 //QIcon icon ("/home/umangjeet/Pictures/");
 button.setIcon(QIcon::fromTheme("face-smile"));
 QPushButton button2 ("other", &button);
 window.show();

 return app.exec();
}
