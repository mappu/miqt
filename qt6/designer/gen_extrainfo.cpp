#include <QDesignerExtraInfoExtension>
#include <QDesignerFormEditorInterface>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <extrainfo.h>
#include "gen_extrainfo.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QDesignerFormEditorInterface* QDesignerExtraInfoExtension_core(const QDesignerExtraInfoExtension* self) {
	return self->core();
}

QWidget* QDesignerExtraInfoExtension_widget(const QDesignerExtraInfoExtension* self) {
	return self->widget();
}

struct miqt_string QDesignerExtraInfoExtension_workingDirectory(const QDesignerExtraInfoExtension* self) {
	QString _ret = self->workingDirectory();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerExtraInfoExtension_setWorkingDirectory(QDesignerExtraInfoExtension* self, struct miqt_string workingDirectory) {
	QString workingDirectory_QString = QString::fromUtf8(workingDirectory.data, workingDirectory.len);
	self->setWorkingDirectory(workingDirectory_QString);
}

void QDesignerExtraInfoExtension_delete(QDesignerExtraInfoExtension* self) {
	delete self;
}

