#include "testspiner.h"

testSpiner::testSpiner(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);


	_localPodsSpinnerWidget = new WaitingSpinnerWidget(centralWidget());


	_localPodsSpinnerWidget->start();


}

testSpiner::~testSpiner()
{

}
