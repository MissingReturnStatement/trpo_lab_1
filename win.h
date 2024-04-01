
#ifndef WIN_H
#define WIN_H
#include <QtGui>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QBoxLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
class Counter:public QLineEdit
{
    Q_OBJECT
public:
    Counter(const QString & contents, QWidget *parent=0):
        QLineEdit(contents,parent){
        setReadOnly(true);
    }
signals:
    void tick_signal();
public slots:
    void add_one()
    {
        QString str=text();
        int r=str.toInt();
        r++;
        if (r!=0 && r%5 ==0) emit tick_signal();
        str.setNum(r);
        setText(str);
    }
};
class Win: public QWidget
{
    Q_OBJECT
protected:
    QTextCodec *codec;
    QLabel *label1,*label2;
    Counter *edit1,*edit2;
    QPushButton *calcbutton;
    QPushButton *exitbutton;
public:
    Win(QWidget *parent = 0);
};
#endif // WIN_H
