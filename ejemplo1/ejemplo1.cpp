#include "ejemplo1.h"

ejemplo1::ejemplo1(): Ui_Counter()
{
	setupUi(this);
	//timer = new QTimer(this);
 	connect(&timer,SIGNAL(timeout()),this,SLOT(suma())  );
	show();
	connect(button, SIGNAL(clicked()), this, SLOT(doButton()) );
	timer.start(500);
}

ejemplo1::~ejemplo1()
{}

void ejemplo1::doButton()
{
	static bool stopped = false;
	stopped = !stopped;
	if(stopped)
		timer.stop();
	else
		timer.start(500);
	qDebug() << "click on button";
}

void ejemplo1::suma() {
	lcdNumber->display(++cont);
	
}





