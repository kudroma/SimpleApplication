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

	//! Sets text to label_2.
	void setTextLabel2(const QString& text);

	//! Sets text to label_3.
	void setTextLabel3(const QString& text);

	//! Sets text to label_4.
	void setTextLabel4(const QString& text);

	//! Sets text to label_5.
	void setTextLabel5(const QString& text);

	//! Sets text to label_6.
	void setTextLabel6(const QString& text);

	//! Hides and shows the label_1.
	void setVisibleLabel1(bool visible);

	//! Hides and shows the label_2.
	void setVisibleLabel2(bool visible);

	//! Hides and shows the label_3.
	void setVisibleLabel3(bool visible);

	//! Hides and shows the label_4.
	void setVisibleLabel4(bool visible);

	//! Hides and shows the label_5.
	void setVisibleLabel5(bool visible);

	//! Hides and shows the label_6.
	void setVisibleLabel6(bool visible);

    //! Sets text to lineEdit_1.
    void setTextLineEdit1(const QString& text);

private:
    Ui::Widget *ui;
};