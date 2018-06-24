#ifndef TESTSPINER_H
#define TESTSPINER_H

#include <QtWidgets/QMainWindow>
#include "ui_testspiner.h"
#include "waitingspinnerwidget.h"



class testSpiner : public QMainWindow
{
	Q_OBJECT

public:
	testSpiner(QWidget *parent = 0);
	~testSpiner();

private:
	Ui::testSpinerClass ui;

	WaitingSpinnerWidget *_localPodsSpinnerWidget;

};

#endif // TESTSPINER_H
