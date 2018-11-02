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

	//! Returns text from lineEdit_1.
	 QString textLineEdit1() const;

    //! Sets text to lineEdit_1.
    void setTextLineEdit1(const QString& text);

	//! Returns text from lineEdit_2.
	 QString textLineEdit2() const;

	//! Sets text to lineEdit_2.
	void setTextLineEdit2(const QString& text);

	//! Returns text  from lineEdit_3.
	 QString textLineEdit3() const;

	//! Sets text to lineEdit_3.
	void setTextLineEdit3(const QString& text);

	//! Returns text from lineEdit_4.
	 QString textLineEdit4() const;

	//! Sets text to lineEdit_4.
	void setTextLineEdit4(const QString& text);

	//! Returns text  from lineEdit_5.
	 QString textLineEdit5() const;

	//! Sets text to lineEdit_5.
	void setTextLineEdit5(const QString& text);

	//! Returns text  from lineEdit_6.
	 QString textLineEdit6() const;

	//! Sets text to lineEdit_6.
	void setTextLineEdit6(const QString& text);

private:
    Ui::Widget *ui;
};