#include "OpenDialog.hpp"
#include <QFileDialog>

OpenDialog::OpenDialog() {
	ui.setupUi(this);
	show();
}

void OpenDialog::openFile() {
	QFileDialog::getExistingDirectory(this, tr("Open project"), QString(), QFileDialog::ShowDirsOnly);
}

