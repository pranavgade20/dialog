#define _GLIBCXX_USE_CXX11_ABI 0
#include <string>
#include <QtWidgets>
#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QWidget(parent)
{
    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->setContentsMargins(0, 0, 0, 0);

    widget = new QWidget;
    widget->setStyleSheet("background: hsv(0, 200, 200)");
    QHBoxLayout *layout = new QHBoxLayout(widget);

    horizontalSlider = new QSlider(Qt::Horizontal);
    horizontalSlider->setMaximum(255);
    horizontalSlider->setMinimum(0);

    connect(horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(setColor(int)));

    layout->setContentsMargins(0, 0, 0, 0);
    layout->addWidget(horizontalSlider);

    layout->setAlignment(Qt::AlignCenter);
    layout->setContentsMargins(0, 0, 0, 0);
    widget->setLayout(layout);

    mainLayout->addWidget(widget, 0, 0);

    setLayout(mainLayout);
}

void Dialog::setColor(int x)
{
    std::string col = "background: hsv(" + std::to_string(x) + ", 200, 200)";
    widget->setStyleSheet(col.c_str());
}