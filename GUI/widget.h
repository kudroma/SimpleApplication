#pragma once

#include <QWidget>
#include <QString>
#include "ui_Widget.h"

#include "SimpleApplication/Triangle.h"
#include "SimpleApplication/Rectangle.h"
#include "SimpleApplication/Circle.h"
#include "SimpleApplication/RoundedRect.h"
#include "SimpleApplication/Ellipse.h"
#include "SimpleApplication/Trapeze.h"
#include "SimpleApplication/BoundingRect.h"

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

	//! Returns text from lineEdit_1.
	QString textLineEdit1() const;

	//! Sets text to lineEdit_2.
	void setTextLineEdit2(const QString& text);

	//! Returns text from lineEdit_2.
	QString textLineEdit2() const;

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

	//! Renders QPainterPath.
	void render(const QPainterPath& path);

public slots:

	//! Sets color of the figure.
	void setFigureColor();

	//! Hides and shows the lineEdit_1
	void setVisiblelineEdit_1(bool visible);

	//! Hides and shows the lineEdit_2
	void setVisiblelineEdit_2(bool visible);

	//! Hides and shows the lineEdit_3
	void setVisiblelineEdit_3(bool visible);

	//! Hides and shows the lineEdit_4
	void setVisiblelineEdit_4(bool visible);

	//! Hides and shows the lineEdit_5
	void setVisiblelineEdit_5(bool visible);

	//! Hides and shows the lineEdit_6
	void setVisiblelineEdit_6(bool visible);


	void showTriangle(const SimpleApplication::Triangle& triangle);
	void showRectangle(const SimpleApplication::Rectangle& rectangle);
	void showTrapeze(const SimpleApplication::Trapeze& trapeze);
	void showCircle(const SimpleApplication::Circle& circle);
	void showEllipse(const SimpleApplication::Ellipse& ellipse);
	void showRoundedRect(const SimpleApplication::RoundedRect& roundedRect);

private:
	QColor m_color;

	Ui::Widget *ui;
};