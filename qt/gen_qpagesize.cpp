#include <QPageSize>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qpagesize.h"
#include "gen_qpagesize.h"
#include "_cgo_export.h"

QPageSize* QPageSize_new() {
	return new QPageSize();
}

QPageSize* QPageSize_new2(uintptr_t pageSizeId) {
	return new QPageSize(static_cast<QPageSize::PageSizeId>(pageSizeId));
}

QPageSize* QPageSize_new3(QSize* pointSize) {
	return new QPageSize(*pointSize);
}

QPageSize* QPageSize_new4(QSizeF* size, uintptr_t units) {
	return new QPageSize(*size, static_cast<QPageSize::Unit>(units));
}

QPageSize* QPageSize_new5(QPageSize* other) {
	return new QPageSize(*other);
}

QPageSize* QPageSize_new6(QSize* pointSize, struct miqt_string* name) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	return new QPageSize(*pointSize, name_QString);
}

QPageSize* QPageSize_new7(QSize* pointSize, struct miqt_string* name, uintptr_t matchPolicy) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	return new QPageSize(*pointSize, name_QString, static_cast<QPageSize::SizeMatchPolicy>(matchPolicy));
}

QPageSize* QPageSize_new8(QSizeF* size, uintptr_t units, struct miqt_string* name) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	return new QPageSize(*size, static_cast<QPageSize::Unit>(units), name_QString);
}

QPageSize* QPageSize_new9(QSizeF* size, uintptr_t units, struct miqt_string* name, uintptr_t matchPolicy) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	return new QPageSize(*size, static_cast<QPageSize::Unit>(units), name_QString, static_cast<QPageSize::SizeMatchPolicy>(matchPolicy));
}

void QPageSize_OperatorAssign(QPageSize* self, QPageSize* other) {
	self->operator=(*other);
}

void QPageSize_Swap(QPageSize* self, QPageSize* other) {
	self->swap(*other);
}

bool QPageSize_IsEquivalentTo(const QPageSize* self, QPageSize* other) {
	return self->isEquivalentTo(*other);
}

bool QPageSize_IsValid(const QPageSize* self) {
	return self->isValid();
}

struct miqt_string* QPageSize_Key(const QPageSize* self) {
	QString _ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPageSize_Name(const QPageSize* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

uintptr_t QPageSize_Id(const QPageSize* self) {
	QPageSize::PageSizeId _ret = self->id();
	return static_cast<uintptr_t>(_ret);
}

int QPageSize_WindowsId(const QPageSize* self) {
	return self->windowsId();
}

QSizeF* QPageSize_DefinitionSize(const QPageSize* self) {
	QSizeF _ret = self->definitionSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(_ret));
}

uintptr_t QPageSize_DefinitionUnits(const QPageSize* self) {
	QPageSize::Unit _ret = self->definitionUnits();
	return static_cast<uintptr_t>(_ret);
}

QSizeF* QPageSize_Size(const QPageSize* self, uintptr_t units) {
	QSizeF _ret = self->size(static_cast<QPageSize::Unit>(units));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(_ret));
}

QSize* QPageSize_SizePoints(const QPageSize* self) {
	QSize _ret = self->sizePoints();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

QSize* QPageSize_SizePixels(const QPageSize* self, int resolution) {
	QSize _ret = self->sizePixels(static_cast<int>(resolution));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

QRectF* QPageSize_Rect(const QPageSize* self, uintptr_t units) {
	QRectF _ret = self->rect(static_cast<QPageSize::Unit>(units));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRect* QPageSize_RectPoints(const QPageSize* self) {
	QRect _ret = self->rectPoints();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QRect* QPageSize_RectPixels(const QPageSize* self, int resolution) {
	QRect _ret = self->rectPixels(static_cast<int>(resolution));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

struct miqt_string* QPageSize_KeyWithPageSizeId(uintptr_t pageSizeId) {
	QString _ret = QPageSize::key(static_cast<QPageSize::PageSizeId>(pageSizeId));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPageSize_NameWithPageSizeId(uintptr_t pageSizeId) {
	QString _ret = QPageSize::name(static_cast<QPageSize::PageSizeId>(pageSizeId));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

uintptr_t QPageSize_IdWithPointSize(QSize* pointSize) {
	QPageSize::PageSizeId _ret = QPageSize::id(*pointSize);
	return static_cast<uintptr_t>(_ret);
}

uintptr_t QPageSize_Id2(QSizeF* size, uintptr_t units) {
	QPageSize::PageSizeId _ret = QPageSize::id(*size, static_cast<QPageSize::Unit>(units));
	return static_cast<uintptr_t>(_ret);
}

uintptr_t QPageSize_IdWithWindowsId(int windowsId) {
	QPageSize::PageSizeId _ret = QPageSize::id(static_cast<int>(windowsId));
	return static_cast<uintptr_t>(_ret);
}

int QPageSize_WindowsIdWithPageSizeId(uintptr_t pageSizeId) {
	return QPageSize::windowsId(static_cast<QPageSize::PageSizeId>(pageSizeId));
}

QSizeF* QPageSize_DefinitionSizeWithPageSizeId(uintptr_t pageSizeId) {
	QSizeF _ret = QPageSize::definitionSize(static_cast<QPageSize::PageSizeId>(pageSizeId));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(_ret));
}

uintptr_t QPageSize_DefinitionUnitsWithPageSizeId(uintptr_t pageSizeId) {
	QPageSize::Unit _ret = QPageSize::definitionUnits(static_cast<QPageSize::PageSizeId>(pageSizeId));
	return static_cast<uintptr_t>(_ret);
}

QSizeF* QPageSize_Size2(uintptr_t pageSizeId, uintptr_t units) {
	QSizeF _ret = QPageSize::size(static_cast<QPageSize::PageSizeId>(pageSizeId), static_cast<QPageSize::Unit>(units));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(_ret));
}

QSize* QPageSize_SizePointsWithPageSizeId(uintptr_t pageSizeId) {
	QSize _ret = QPageSize::sizePoints(static_cast<QPageSize::PageSizeId>(pageSizeId));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

QSize* QPageSize_SizePixels2(uintptr_t pageSizeId, int resolution) {
	QSize _ret = QPageSize::sizePixels(static_cast<QPageSize::PageSizeId>(pageSizeId), static_cast<int>(resolution));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

uintptr_t QPageSize_Id22(QSize* pointSize, uintptr_t matchPolicy) {
	QPageSize::PageSizeId _ret = QPageSize::id(*pointSize, static_cast<QPageSize::SizeMatchPolicy>(matchPolicy));
	return static_cast<uintptr_t>(_ret);
}

uintptr_t QPageSize_Id3(QSizeF* size, uintptr_t units, uintptr_t matchPolicy) {
	QPageSize::PageSizeId _ret = QPageSize::id(*size, static_cast<QPageSize::Unit>(units), static_cast<QPageSize::SizeMatchPolicy>(matchPolicy));
	return static_cast<uintptr_t>(_ret);
}

void QPageSize_Delete(QPageSize* self) {
	delete self;
}

