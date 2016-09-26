
#include <QObject>

class Window : public QObject
{
 Q_OBJECT
 public:
  explicit Window(QObject *parent = 0)
  { m_value = 1; }
  int value() const { return m_value; }
  void setValue(int value);
 signals:
  	 void valueChanged(int newValue);
 private:
 	 int m_value;
};


