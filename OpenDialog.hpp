#include "ui_opendialog.h"
#include <QDialog>

class OpenDialog: public QDialog {
	Q_OBJECT;
public:
	OpenDialog();

private:
	Ui_OpenDialog ui;
};

