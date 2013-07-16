#include <QMainWindow>
#include "ui_editor.h"

class Editor: public QMainWindow {
	Q_OBJECT;
public:
	Editor();

private:
	Ui_Editor ui;
}

