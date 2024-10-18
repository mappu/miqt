#include <QGraphicsAnchor>
#include <QGraphicsAnchorLayout>
#include <QGraphicsLayoutItem>
#include <QMetaObject>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qgraphicsanchorlayout.h>
#include "gen_qgraphicsanchorlayout.h"
#include "_cgo_export.h"

QMetaObject* QGraphicsAnchor_MetaObject(const QGraphicsAnchor* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsAnchor_Metacast(QGraphicsAnchor* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsAnchor_Tr(const char* s) {
	QString _ret = QGraphicsAnchor::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsAnchor_TrUtf8(const char* s) {
	QString _ret = QGraphicsAnchor::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsAnchor_SetSpacing(QGraphicsAnchor* self, double spacing) {
	self->setSpacing(static_cast<qreal>(spacing));
}

void QGraphicsAnchor_UnsetSpacing(QGraphicsAnchor* self) {
	self->unsetSpacing();
}

double QGraphicsAnchor_Spacing(const QGraphicsAnchor* self) {
	qreal _ret = self->spacing();
	return static_cast<double>(_ret);
}

void QGraphicsAnchor_SetSizePolicy(QGraphicsAnchor* self, int policy) {
	self->setSizePolicy(static_cast<QSizePolicy::Policy>(policy));
}

int QGraphicsAnchor_SizePolicy(const QGraphicsAnchor* self) {
	QSizePolicy::Policy _ret = self->sizePolicy();
	return static_cast<int>(_ret);
}

struct miqt_string QGraphicsAnchor_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsAnchor::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsAnchor_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsAnchor::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsAnchor_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsAnchor::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsAnchor_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsAnchor::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsAnchor_Delete(QGraphicsAnchor* self) {
	delete self;
}

QGraphicsAnchorLayout* QGraphicsAnchorLayout_new() {
	return new QGraphicsAnchorLayout();
}

QGraphicsAnchorLayout* QGraphicsAnchorLayout_new2(QGraphicsLayoutItem* parent) {
	return new QGraphicsAnchorLayout(parent);
}

QGraphicsAnchor* QGraphicsAnchorLayout_AddAnchor(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstEdge, QGraphicsLayoutItem* secondItem, int secondEdge) {
	return self->addAnchor(firstItem, static_cast<Qt::AnchorPoint>(firstEdge), secondItem, static_cast<Qt::AnchorPoint>(secondEdge));
}

QGraphicsAnchor* QGraphicsAnchorLayout_Anchor(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstEdge, QGraphicsLayoutItem* secondItem, int secondEdge) {
	return self->anchor(firstItem, static_cast<Qt::AnchorPoint>(firstEdge), secondItem, static_cast<Qt::AnchorPoint>(secondEdge));
}

void QGraphicsAnchorLayout_AddCornerAnchors(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstCorner, QGraphicsLayoutItem* secondItem, int secondCorner) {
	self->addCornerAnchors(firstItem, static_cast<Qt::Corner>(firstCorner), secondItem, static_cast<Qt::Corner>(secondCorner));
}

void QGraphicsAnchorLayout_AddAnchors(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, QGraphicsLayoutItem* secondItem) {
	self->addAnchors(firstItem, secondItem);
}

void QGraphicsAnchorLayout_SetHorizontalSpacing(QGraphicsAnchorLayout* self, double spacing) {
	self->setHorizontalSpacing(static_cast<qreal>(spacing));
}

void QGraphicsAnchorLayout_SetVerticalSpacing(QGraphicsAnchorLayout* self, double spacing) {
	self->setVerticalSpacing(static_cast<qreal>(spacing));
}

void QGraphicsAnchorLayout_SetSpacing(QGraphicsAnchorLayout* self, double spacing) {
	self->setSpacing(static_cast<qreal>(spacing));
}

double QGraphicsAnchorLayout_HorizontalSpacing(const QGraphicsAnchorLayout* self) {
	qreal _ret = self->horizontalSpacing();
	return static_cast<double>(_ret);
}

double QGraphicsAnchorLayout_VerticalSpacing(const QGraphicsAnchorLayout* self) {
	qreal _ret = self->verticalSpacing();
	return static_cast<double>(_ret);
}

void QGraphicsAnchorLayout_RemoveAt(QGraphicsAnchorLayout* self, int index) {
	self->removeAt(static_cast<int>(index));
}

void QGraphicsAnchorLayout_SetGeometry(QGraphicsAnchorLayout* self, QRectF* rect) {
	self->setGeometry(*rect);
}

int QGraphicsAnchorLayout_Count(const QGraphicsAnchorLayout* self) {
	return self->count();
}

QGraphicsLayoutItem* QGraphicsAnchorLayout_ItemAt(const QGraphicsAnchorLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

void QGraphicsAnchorLayout_Invalidate(QGraphicsAnchorLayout* self) {
	self->invalidate();
}

void QGraphicsAnchorLayout_AddAnchors3(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, QGraphicsLayoutItem* secondItem, int orientations) {
	self->addAnchors(firstItem, secondItem, static_cast<Qt::Orientations>(orientations));
}

void QGraphicsAnchorLayout_Delete(QGraphicsAnchorLayout* self) {
	delete self;
}

