#include <QObject>
#include <QFile>

class IsoFile: public QObject {
	Q_OBJECT;
public:
	IsoFile(const QString&filename);
	~IsoFile();

private:
	QFile file;
};

