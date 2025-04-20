#include <QPdfSelection>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpdfselection.h>
#include "gen_qpdfselection.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QPdfSelection* QPdfSelection_new(QPdfSelection* other) {
	return new QPdfSelection(*other);
}

void QPdfSelection_operatorAssign(QPdfSelection* self, QPdfSelection* other) {
	self->operator=(*other);
}

void QPdfSelection_swap(QPdfSelection* self, QPdfSelection* other) {
	self->swap(*other);
}

bool QPdfSelection_isValid(const QPdfSelection* self) {
	return self->isValid();
}

struct miqt_string QPdfSelection_text(const QPdfSelection* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QRectF* QPdfSelection_boundingRectangle(const QPdfSelection* self) {
	return new QRectF(self->boundingRectangle());
}

int QPdfSelection_startIndex(const QPdfSelection* self) {
	return self->startIndex();
}

int QPdfSelection_endIndex(const QPdfSelection* self) {
	return self->endIndex();
}

void QPdfSelection_copyToClipboard(const QPdfSelection* self) {
	self->copyToClipboard();
}

void QPdfSelection_copyToClipboardWithMode(const QPdfSelection* self, int mode) {
	self->copyToClipboard(static_cast<QClipboard::Mode>(mode));
}

void QPdfSelection_delete(QPdfSelection* self) {
	delete self;
}

