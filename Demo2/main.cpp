#include<qapplication.h>
#include<qmainwindow.h>

int main(int argc,char**argv) {
	QApplication app(argc, argv);
	QMainWindow main;
	main.show();
	return app.exec();
}