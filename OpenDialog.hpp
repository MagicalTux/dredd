#include "ui_opendialog.h"
#include <QDialog>

class OpenDialog: public QDialog {
	Q_OBJECT;
public:
	OpenDialog();

public slots:
	void openFile();

private:
	Ui_OpenDialog ui;
};

