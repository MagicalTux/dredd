#include "ui_opendialog.h"
#include <QDialog>

class OpenDialog: public QDialog {
	Q_OBJECT;
public:
	OpenDialog();

public slots:
	void openFile();
	void browseIsoFile();
	void browseProjectDir();
	void accept();

private:
	Ui_OpenDialog ui;
};

