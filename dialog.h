#ifndef DIALOG_H
#define DIALOG_H

#include <QWidget>

class QLabel;

class Dialog : public QWidget
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);

private slots:
    void setInteger();

private:
    QLabel *integerLabel;
};

#endif