#include "IsoFile.hpp"

IsoFile::IsoFile(const QString &filename) {
	file.setFileName(filename);
}

IsoFile::~IsoFile() {
	file.close();
}

