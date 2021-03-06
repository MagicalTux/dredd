#include <QApplication>
#include "common.h"
#include "OpenDialog.hpp"

int main(int argc, char *argv[]) {
	QApplication app(argc, argv);

	QString auto_open = dredd_settings.value("auto_open", QString()).toString();
	if (auto_open.isEmpty()) {
		qDebug("no file to open");
		new OpenDialog();
	}

	return app.exec();
}

