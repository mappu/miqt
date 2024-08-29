#include <QGraphicsAnchor>
#include <QGraphicsAnchorLayout>
#include <QGraphicsLayoutItem>
#include <QMetaObject>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qgraphicsanchorlayout.h"

#include "gen_qgraphicsanchorlayout.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QGraphicsAnchor_MetaObject(QGraphicsAnchor* self) {
	return (QMetaObject*) const_cast<const QGraphicsAnchor*>(self)->metaObject();
}

void QGraphicsAnchor_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsAnchor::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsAnchor_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsAnchor::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsAnchor_SetSpacing(QGraphicsAnchor* self, double spacing) {
	self->setSpacing(static_cast<qreal>(spacing));
}

void QGraphicsAnchor_UnsetSpacing(QGraphicsAnchor* self) {
	self->unsetSpacing();
}

double QGraphicsAnchor_Spacing(QGraphicsAnchor* self) {
	return const_cast<const QGraphicsAnchor*>(self)->spacing();
}

void QGraphicsAnchor_SetSizePolicy(QGraphicsAnchor* self, uintptr_t policy) {
	self->setSizePolicy(static_cast<QSizePolicy::Policy>(policy));
}

uintptr_t QGraphicsAnchor_SizePolicy(QGraphicsAnchor* self) {
	QSizePolicy::Policy ret = const_cast<const QGraphicsAnchor*>(self)->sizePolicy();
	return static_cast<uintptr_t>(ret);
}

void QGraphicsAnchor_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsAnchor::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsAnchor_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsAnchor::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsAnchor_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsAnchor::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsAnchor_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsAnchor::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

QGraphicsAnchor* QGraphicsAnchorLayout_AddAnchor(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, uintptr_t firstEdge, QGraphicsLayoutItem* secondItem, uintptr_t secondEdge) {
	return self->addAnchor(firstItem, static_cast<Qt::AnchorPoint>(firstEdge), secondItem, static_cast<Qt::AnchorPoint>(secondEdge));
}

QGraphicsAnchor* QGraphicsAnchorLayout_Anchor(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, uintptr_t firstEdge, QGraphicsLayoutItem* secondItem, uintptr_t secondEdge) {
	return self->anchor(firstItem, static_cast<Qt::AnchorPoint>(firstEdge), secondItem, static_cast<Qt::AnchorPoint>(secondEdge));
}

void QGraphicsAnchorLayout_AddCornerAnchors(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, uintptr_t firstCorner, QGraphicsLayoutItem* secondItem, uintptr_t secondCorner) {
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

double QGraphicsAnchorLayout_HorizontalSpacing(QGraphicsAnchorLayout* self) {
	return const_cast<const QGraphicsAnchorLayout*>(self)->horizontalSpacing();
}

double QGraphicsAnchorLayout_VerticalSpacing(QGraphicsAnchorLayout* self) {
	return const_cast<const QGraphicsAnchorLayout*>(self)->verticalSpacing();
}

void QGraphicsAnchorLayout_RemoveAt(QGraphicsAnchorLayout* self, int index) {
	self->removeAt(static_cast<int>(index));
}

void QGraphicsAnchorLayout_SetGeometry(QGraphicsAnchorLayout* self, QRectF* rect) {
	self->setGeometry(*rect);
}

int QGraphicsAnchorLayout_Count(QGraphicsAnchorLayout* self) {
	return const_cast<const QGraphicsAnchorLayout*>(self)->count();
}

QGraphicsLayoutItem* QGraphicsAnchorLayout_ItemAt(QGraphicsAnchorLayout* self, int index) {
	return const_cast<const QGraphicsAnchorLayout*>(self)->itemAt(static_cast<int>(index));
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

