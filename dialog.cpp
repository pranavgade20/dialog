#include <QtWidgets>
#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QWidget(parent)
{
    integerLabel = new QLabel;
    integerLabel->setFrameStyle(QFrame::Panel);
    integerLabel->setText(tr("0"));
    QPushButton *integerButton = new QPushButton(tr("Set Value"));
    // connect(integerButton, &QAbstractButton::clicked, this, &Dialog::setInteger);
    connect(integerButton, SIGNAL(released()), this, SLOT(setInteger()));

   
    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(integerButton, 0, 0);
    mainLayout->addWidget(integerLabel, 0, 1);

    setLayout(mainLayout);

    setWindowTitle(tr("Example app"));
}

void Dialog::setInteger()
{
    bool ok;
    // QInputDialog input = new QInputDialog();
    // input->setStyleSheet("QLineEdit#nameEdit { background-color: yellow }");
    int i = QInputDialog::getInt(this, tr("Set Value"),
                                 tr("Value:"), 0, -10000, 10000, 1, &ok);
    if (ok)
        integerLabel->setText(tr("%1").arg(i));
}