#include "gen_qdesktopservices.h"
#include "qdesktopservices.h"

#include <QDesktopServices>
#include <QObject>
#include <QString>
#include <QUrl>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

bool QDesktopServices_OpenUrl(QUrl* url) {
	return QDesktopServices::openUrl(*url);
}

void QDesktopServices_SetUrlHandler(const char* scheme, size_t scheme_Strlen, QObject* receiver, char* method) {
	QString scheme_QString = QString::fromUtf8(scheme, scheme_Strlen);
	QDesktopServices::setUrlHandler(scheme_QString, receiver, method);
}

void QDesktopServices_UnsetUrlHandler(const char* scheme, size_t scheme_Strlen) {
	QString scheme_QString = QString::fromUtf8(scheme, scheme_Strlen);
	QDesktopServices::unsetUrlHandler(scheme_QString);
}

void QDesktopServices_Delete(QDesktopServices* self) {
	delete self;
}

