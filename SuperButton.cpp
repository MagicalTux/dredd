#include "SuperButton.hpp"
#include <QMouseEvent>

SuperButton::SuperButton(QWidget *parent): QPushButton(parent) {
}

void SuperButton::mouseReleaseEvent(QMouseEvent *event) {
	if (event->button() == Qt::RightButton) {
		rightClicked();
	}
	QPushButton::mouseReleaseEvent(event);
}

