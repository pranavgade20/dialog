#ifndef DIALOG_H
#define DIALOG_H

#include <QWidget>
#include <QSlider>

class QLabel;

class Dialog : public QWidget
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);

private slots:
    void setColor(int);

private:
	QWidget *widget;
    QSlider *horizontalSlider;
};

#endif