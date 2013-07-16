#include <stdint.h>
#include <stdbool.h>

// a bunch of common stuff here
#include <QSettings>
#ifdef Q_WS_MAC
	QSettings dredd_settings("magicaltux.net", "Dredd");
#else
	QSettings dredd_settings("MagicalTux", "Dredd");
#endif

