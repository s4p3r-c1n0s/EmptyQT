
#include <QMainWindow>
#include <QTableWidget>

class QPushButton;
class StackedDialog;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void show(QWidget *threshold);

protected slots:
    void showThumbnilView();

private:
    void init();
    QPushButton*   m_pBtnLibImg;
    QPushButton*   cancel_button;
    QTableWidget* m_pThumbNilDlg;
    StackedDialog* m_pStackedDlg;
    QWidget* m_thresholdComboBox;
};

