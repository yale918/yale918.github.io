#include <QtGui\QApplication>
#include<QLabel>

int main(int argc, char *argv[]){
	QApplication app(argc, argv);

	QLabel *label = new QLabel("Hello QT ..");
	label->setWindowTitle("First QT!");
	label->resize(200, 50);
	label-> show();

	return app.exec();
}
