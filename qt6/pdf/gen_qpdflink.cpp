#include <QList>
#include <QPdfLink>
#include <QPointF>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qpdflink.h>
#include "gen_qpdflink.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QPdfLink* QPdfLink_new() {
	return new QPdfLink();
}

QPdfLink* QPdfLink_new2(QPdfLink* other) {
	return new QPdfLink(*other);
}

void QPdfLink_operatorAssign(QPdfLink* self, QPdfLink* other) {
	self->operator=(*other);
}

void QPdfLink_swap(QPdfLink* self, QPdfLink* other) {
	self->swap(*other);
}

bool QPdfLink_isValid(const QPdfLink* self) {
	return self->isValid();
}

int QPdfLink_page(const QPdfLink* self) {
	return self->page();
}

QPointF* QPdfLink_location(const QPdfLink* self) {
	return new QPointF(self->location());
}

double QPdfLink_zoom(const QPdfLink* self) {
	qreal _ret = self->zoom();
	return static_cast<double>(_ret);
}

QUrl* QPdfLink_url(const QPdfLink* self) {
	return new QUrl(self->url());
}

struct miqt_string QPdfLink_contextBefore(const QPdfLink* self) {
	QString _ret = self->contextBefore();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfLink_contextAfter(const QPdfLink* self) {
	QString _ret = self->contextAfter();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QRectF* */  QPdfLink_rectangles(const QPdfLink* self) {
	QList<QRectF> _ret = self->rectangles();
	// Convert QList<> from C++ memory to manually-managed C memory
	QRectF** _arr = static_cast<QRectF**>(malloc(sizeof(QRectF*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QRectF(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QPdfLink_toString(const QPdfLink* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPdfLink_copyToClipboard(const QPdfLink* self) {
	self->copyToClipboard();
}

void QPdfLink_copyToClipboardWithMode(const QPdfLink* self, int mode) {
	self->copyToClipboard(static_cast<QClipboard::Mode>(mode));
}

void QPdfLink_delete(QPdfLink* self) {
	delete self;
}

