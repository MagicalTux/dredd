#include "OpenDialog.hpp"
#include <QFileDialog>
#include <QDesktopServices>

OpenDialog::OpenDialog() {
	ui.setupUi(this);
	show();
}

void OpenDialog::accept() {
	qDebug("heh");
}

void OpenDialog::openFile() {
	QFileDialog::getExistingDirectory(this, tr("Open project"), QString(), QFileDialog::ShowDirsOnly);
}

void OpenDialog::browseIsoFile() {
	QString isofile = QFileDialog::getOpenFileName(this, tr("Open a ISO file"), QString(), tr("ISO Files (*.iso)"), NULL, QFileDialog::ReadOnly | QFileDialog::HideNameFilterDetails);
	if (isofile.isNull()) return;
	ui.isoFile->setText(isofile);
	if (ui.projectDir->text().isEmpty()) {
		QFileInfo fl(isofile);
		QString nicedir = QDesktopServices::storageLocation(QDesktopServices::DocumentsLocation) + "/" + fl.baseName();
		ui.projectDir->setText(nicedir);
	}
}

void OpenDialog::browseProjectDir() {
	QString dir = QFileDialog::getExistingDirectory(this, tr("Choose an empty directory"), QString(), QFileDialog::ShowDirsOnly);
	if (dir.isNull()) return;
	ui.projectDir->setText(dir);
}

