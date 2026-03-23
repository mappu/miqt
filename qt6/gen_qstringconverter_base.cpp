#include <QStringConverter>
#include <qstringconverter_base.h>
#include "gen_qstringconverter_base.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

bool QStringConverter_isValid(const QStringConverter* self) {
	return self->isValid();
}

void QStringConverter_resetState(QStringConverter* self) {
	self->resetState();
}

bool QStringConverter_hasError(const QStringConverter* self) {
	return self->hasError();
}

const char* QStringConverter_name(const QStringConverter* self) {
	return (const char*) self->name();
}

const char* QStringConverter_nameForEncoding(int e) {
	return (const char*) QStringConverter::nameForEncoding(static_cast<QStringConverter::Encoding>(e));
}

