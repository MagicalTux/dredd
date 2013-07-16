#include <QObject>
#include <QFile>

class IsoFile: public QObject {
	Q_OBJECT;
public:
	IsoFile(QFile);

private:
	QFile *file;
};

