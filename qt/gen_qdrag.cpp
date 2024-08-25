#include "gen_qdrag.h"
#include "qdrag.h"

#include <QDrag>
#include <QMetaObject>
#include <QMimeData>
#include <QObject>
#include <QPixmap>
#include <QPoint>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QDrag* QDrag_new(QObject* dragSource) {
	return new QDrag(dragSource);
}

QMetaObject* QDrag_MetaObject(QDrag* self) {
	return (QMetaObject*) self->metaObject();
}

void QDrag_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QDrag::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDrag_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QDrag::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDrag_SetMimeData(QDrag* self, QMimeData* data) {
	self->setMimeData(data);
}

QMimeData* QDrag_MimeData(QDrag* self) {
	return self->mimeData();
}

void QDrag_SetPixmap(QDrag* self, QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

QPixmap* QDrag_Pixmap(QDrag* self) {
	QPixmap ret = self->pixmap();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

void QDrag_SetHotSpot(QDrag* self, QPoint* hotspot) {
	self->setHotSpot(*hotspot);
}

QPoint* QDrag_HotSpot(QDrag* self) {
	QPoint ret = self->hotSpot();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QObject* QDrag_Source(QDrag* self) {
	return self->source();
}

QObject* QDrag_Target(QDrag* self) {
	return self->target();
}

void QDrag_Cancel() {
	QDrag::cancel();
}

void QDrag_TargetChanged(QDrag* self, QObject* newTarget) {
	self->targetChanged(newTarget);
}

void QDrag_connect_TargetChanged(QDrag* self, void* slot) {
	QDrag::connect(self, static_cast<void (QDrag::*)(QObject*)>(&QDrag::targetChanged), self, [=](QObject* newTarget) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDrag_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QDrag::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDrag_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDrag::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDrag_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QDrag::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDrag_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDrag::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDrag_Delete(QDrag* self) {
	delete self;
}

