#pragma once

#include <QWidget>
#include <QString>
#include <QPainterPath>
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

//! The class represents a for drawing shapes and interface.
class Widget : public QWidget
{
    Q_OBJECT

public:

	//! Constructor.
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

	//! Sets text to label_7.
	void setTextLabel7(const QString& text);

	//! Sets text to label_8.
	void setTextLabel8(const QString& text);

	//! Sets text to label_Area.
	void setTextLabelArea(const QString& text);

	//! Sets text to label_Perimeter.
	void setTextLabelPerimeter(const QString& text);

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

	//! Hides and shows the label_7.
	void setVisibleLabel7(bool visible);

	//! Hides and shows the label_8.
	void setVisibleLabel8(bool visible);

	//! Hides and show the labelArea.
	void setVisibleLabelAreaVal(bool visible);

	//! Hides and show the labelPerimeter.
	void setVisibleLabelPerimeterVal(bool visible);

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

	//! Sets text to lineEdit_7.
	void setTextLineEdit7(const QString& text);

	//! Returns text  from lineEdit_7.
	QString textLineEdit7() const;

	//! Sets text to lineEdit_8.
	void setTextLineEdit8(const QString& text);

	//! Returns text  from lineEdit_8.
	QString textLineEdit8() const;

	//! Sets text to lineEdit_Area.
	void setTextLineEditArea(const QString& text);

	//! Returns text from lineEdit_Area.
	QString textLineEditArea() const;

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

	//! Hides and shows the lineEdit_7
	void setVisiblelineEdit_7(bool visible);

	//! Hides and shows the lineEdit_8
	void setVisiblelineEdit_8(bool visible);

	//! Brings the interface elements in line with the properties of the triangle.
	void showTriangle(const SimpleApplication::Triangle& triangle);

	//! Brings the interface elements in line with the properties of the rectangle.
	void showRectangle(const SimpleApplication::Rectangle& rectangle);

	//! Brings the interface elements in line with the properties of the trapeze.
	void showTrapeze(const SimpleApplication::Trapeze& trapeze);

	//! Brings the interface elements in line with the properties of the circle.
	void showCircle(const SimpleApplication::Circle& circle);

	//! Brings the interface elements in line with the properties of the ellipse.
	void showEllipse(const SimpleApplication::Ellipse& ellipse);

	//! Brings the interface elements in line with the properties of the roundedRect.
	void showRoundedRect(const SimpleApplication::RoundedRect& roundedRect);

signals:
	//! Select the shape element.
	void comboBoxItemSelected(const QString& text);

	//! Updates figure.
	void updateFigure();

private:
	//! Color figure.
	QColor m_color;

	//! View color.
	Ui::Widget *ui;

	QPainterPath m_path;
};