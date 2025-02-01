#include <QPageSize>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpagesize.h>
#include "gen_qpagesize.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QPageSize* QPageSize_new() {
	return new QPageSize();
}

QPageSize* QPageSize_new2(int pageSizeId) {
	return new QPageSize(static_cast<QPageSize::PageSizeId>(pageSizeId));
}

QPageSize* QPageSize_new3(QSize* pointSize) {
	return new QPageSize(*pointSize);
}

QPageSize* QPageSize_new4(QSizeF* size, int units) {
	return new QPageSize(*size, static_cast<QPageSize::Unit>(units));
}

QPageSize* QPageSize_new5(QPageSize* other) {
	return new QPageSize(*other);
}

QPageSize* QPageSize_new6(QSize* pointSize, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QPageSize(*pointSize, name_QString);
}

QPageSize* QPageSize_new7(QSize* pointSize, struct miqt_string name, int matchPolicy) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QPageSize(*pointSize, name_QString, static_cast<QPageSize::SizeMatchPolicy>(matchPolicy));
}

QPageSize* QPageSize_new8(QSizeF* size, int units, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QPageSize(*size, static_cast<QPageSize::Unit>(units), name_QString);
}

QPageSize* QPageSize_new9(QSizeF* size, int units, struct miqt_string name, int matchPolicy) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QPageSize(*size, static_cast<QPageSize::Unit>(units), name_QString, static_cast<QPageSize::SizeMatchPolicy>(matchPolicy));
}

void QPageSize_operatorAssign(QPageSize* self, QPageSize* other) {
	self->operator=(*other);
}

void QPageSize_swap(QPageSize* self, QPageSize* other) {
	self->swap(*other);
}

bool QPageSize_isEquivalentTo(const QPageSize* self, QPageSize* other) {
	return self->isEquivalentTo(*other);
}

bool QPageSize_isValid(const QPageSize* self) {
	return self->isValid();
}

struct miqt_string QPageSize_key(const QPageSize* self) {
	QString _ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSize_name(const QPageSize* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPageSize_id(const QPageSize* self) {
	QPageSize::PageSizeId _ret = self->id();
	return static_cast<int>(_ret);
}

int QPageSize_windowsId(const QPageSize* self) {
	return self->windowsId();
}

QSizeF* QPageSize_definitionSize(const QPageSize* self) {
	return new QSizeF(self->definitionSize());
}

int QPageSize_definitionUnits(const QPageSize* self) {
	QPageSize::Unit _ret = self->definitionUnits();
	return static_cast<int>(_ret);
}

QSizeF* QPageSize_size(const QPageSize* self, int units) {
	return new QSizeF(self->size(static_cast<QPageSize::Unit>(units)));
}

QSize* QPageSize_sizePoints(const QPageSize* self) {
	return new QSize(self->sizePoints());
}

QSize* QPageSize_sizePixels(const QPageSize* self, int resolution) {
	return new QSize(self->sizePixels(static_cast<int>(resolution)));
}

QRectF* QPageSize_rect(const QPageSize* self, int units) {
	return new QRectF(self->rect(static_cast<QPageSize::Unit>(units)));
}

QRect* QPageSize_rectPoints(const QPageSize* self) {
	return new QRect(self->rectPoints());
}

QRect* QPageSize_rectPixels(const QPageSize* self, int resolution) {
	return new QRect(self->rectPixels(static_cast<int>(resolution)));
}

struct miqt_string QPageSize_keyWithPageSizeId(int pageSizeId) {
	QString _ret = QPageSize::key(static_cast<QPageSize::PageSizeId>(pageSizeId));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSize_nameWithPageSizeId(int pageSizeId) {
	QString _ret = QPageSize::name(static_cast<QPageSize::PageSizeId>(pageSizeId));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPageSize_idWithPointSize(QSize* pointSize) {
	QPageSize::PageSizeId _ret = QPageSize::id(*pointSize);
	return static_cast<int>(_ret);
}

int QPageSize_id2(QSizeF* size, int units) {
	QPageSize::PageSizeId _ret = QPageSize::id(*size, static_cast<QPageSize::Unit>(units));
	return static_cast<int>(_ret);
}

int QPageSize_idWithWindowsId(int windowsId) {
	QPageSize::PageSizeId _ret = QPageSize::id(static_cast<int>(windowsId));
	return static_cast<int>(_ret);
}

int QPageSize_windowsIdWithPageSizeId(int pageSizeId) {
	return QPageSize::windowsId(static_cast<QPageSize::PageSizeId>(pageSizeId));
}

QSizeF* QPageSize_definitionSizeWithPageSizeId(int pageSizeId) {
	return new QSizeF(QPageSize::definitionSize(static_cast<QPageSize::PageSizeId>(pageSizeId)));
}

int QPageSize_definitionUnitsWithPageSizeId(int pageSizeId) {
	QPageSize::Unit _ret = QPageSize::definitionUnits(static_cast<QPageSize::PageSizeId>(pageSizeId));
	return static_cast<int>(_ret);
}

QSizeF* QPageSize_size2(int pageSizeId, int units) {
	return new QSizeF(QPageSize::size(static_cast<QPageSize::PageSizeId>(pageSizeId), static_cast<QPageSize::Unit>(units)));
}

QSize* QPageSize_sizePointsWithPageSizeId(int pageSizeId) {
	return new QSize(QPageSize::sizePoints(static_cast<QPageSize::PageSizeId>(pageSizeId)));
}

QSize* QPageSize_sizePixels2(int pageSizeId, int resolution) {
	return new QSize(QPageSize::sizePixels(static_cast<QPageSize::PageSizeId>(pageSizeId), static_cast<int>(resolution)));
}

int QPageSize_id22(QSize* pointSize, int matchPolicy) {
	QPageSize::PageSizeId _ret = QPageSize::id(*pointSize, static_cast<QPageSize::SizeMatchPolicy>(matchPolicy));
	return static_cast<int>(_ret);
}

int QPageSize_id3(QSizeF* size, int units, int matchPolicy) {
	QPageSize::PageSizeId _ret = QPageSize::id(*size, static_cast<QPageSize::Unit>(units), static_cast<QPageSize::SizeMatchPolicy>(matchPolicy));
	return static_cast<int>(_ret);
}

void QPageSize_delete(QPageSize* self) {
	delete self;
}

