#include <QPushButton>

// This is basically nothing more than a right clickable button

class SuperButton: public QPushButton {
	Q_OBJECT;
public:
	SuperButton(QWidget *parent = 0);

signals:
	void rightClicked();

public slots:
	void mouseReleaseEvent(QMouseEvent *event);
};

