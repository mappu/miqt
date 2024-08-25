#include "gen_qgraphicsanchorlayout.h"
#include "qgraphicsanchorlayout.h"

#include <QGraphicsAnchor>
#include <QGraphicsAnchorLayout>
#include <QGraphicsLayoutItem>
#include <QMetaObject>
#include <QRectF>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QGraphicsAnchor_MetaObject(QGraphicsAnchor* self) {
	return (QMetaObject*) self->metaObject();
}

void QGraphicsAnchor_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsAnchor::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsAnchor_TrUtf8(char* s, char** _out, int* _out_Strlen) {
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
	return self->spacing();
}

void QGraphicsAnchor_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsAnchor::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsAnchor_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsAnchor::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsAnchor_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsAnchor::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsAnchor_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
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
	return self->horizontalSpacing();
}

double QGraphicsAnchorLayout_VerticalSpacing(QGraphicsAnchorLayout* self) {
	return self->verticalSpacing();
}

void QGraphicsAnchorLayout_RemoveAt(QGraphicsAnchorLayout* self, int index) {
	self->removeAt(static_cast<int>(index));
}

void QGraphicsAnchorLayout_SetGeometry(QGraphicsAnchorLayout* self, QRectF* rect) {
	self->setGeometry(*rect);
}

int QGraphicsAnchorLayout_Count(QGraphicsAnchorLayout* self) {
	return self->count();
}

QGraphicsLayoutItem* QGraphicsAnchorLayout_ItemAt(QGraphicsAnchorLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

void QGraphicsAnchorLayout_Invalidate(QGraphicsAnchorLayout* self) {
	self->invalidate();
}

void QGraphicsAnchorLayout_Delete(QGraphicsAnchorLayout* self) {
	delete self;
}

