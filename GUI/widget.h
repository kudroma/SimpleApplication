#pragma once

#include <QWidget>
#include <QString>
#include "ui_Widget.h"

namespace Ui {
    class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

    //! Sets text to label_1.
    void setTextLabel1(const QString& text);

    //! Sets text to lineEdit_1.
    void setTextLineEdit1(const QString& text);

private:
    Ui::Widget *ui;
};