#include <QDataStream>
#include <QIconEngine>
#define WORKAROUND_INNER_CLASS_DEFINITION_QIconEngine__AvailableSizesArgument
#define WORKAROUND_INNER_CLASS_DEFINITION_QIconEngine__ScaledPixmapArgument
#include <QList>
#include <QPainter>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qiconengine.h"

#include "gen_qiconengine.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QIconEngine_Paint(QIconEngine* self, QPainter* painter, QRect* rect, uintptr_t mode, uintptr_t state) {
	self->paint(painter, *rect, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

QSize* QIconEngine_ActualSize(QIconEngine* self, QSize* size, uintptr_t mode, uintptr_t state) {
	QSize ret = self->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QPixmap* QIconEngine_Pixmap(QIconEngine* self, QSize* size, uintptr_t mode, uintptr_t state) {
	QPixmap ret = self->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

void QIconEngine_AddPixmap(QIconEngine* self, QPixmap* pixmap, uintptr_t mode, uintptr_t state) {
	self->addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIconEngine_AddFile(QIconEngine* self, const char* fileName, size_t fileName_Strlen, QSize* size, uintptr_t mode, uintptr_t state) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIconEngine_Key(QIconEngine* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QIconEngine*>(self)->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QIconEngine* QIconEngine_Clone(QIconEngine* self) {
	return const_cast<const QIconEngine*>(self)->clone();
}

bool QIconEngine_Read(QIconEngine* self, QDataStream* in) {
	return self->read(*in);
}

bool QIconEngine_Write(QIconEngine* self, QDataStream* out) {
	return const_cast<const QIconEngine*>(self)->write(*out);
}

void QIconEngine_AvailableSizes(QIconEngine* self, QSize*** _out, size_t* _out_len) {
	QList<QSize> ret = const_cast<const QIconEngine*>(self)->availableSizes();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QSize** __out = static_cast<QSize**>(malloc(sizeof(QSize**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QSize(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QIconEngine_IconName(QIconEngine* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QIconEngine*>(self)->iconName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QIconEngine_IsNull(QIconEngine* self) {
	return const_cast<const QIconEngine*>(self)->isNull();
}

QPixmap* QIconEngine_ScaledPixmap(QIconEngine* self, QSize* size, uintptr_t mode, uintptr_t state, double scale) {
	QPixmap ret = self->scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<qreal>(scale));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

void QIconEngine_AvailableSizes1(QIconEngine* self, uintptr_t mode, QSize*** _out, size_t* _out_len) {
	QList<QSize> ret = const_cast<const QIconEngine*>(self)->availableSizes(static_cast<QIcon::Mode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QSize** __out = static_cast<QSize**>(malloc(sizeof(QSize**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QSize(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QIconEngine_AvailableSizes2(QIconEngine* self, uintptr_t mode, uintptr_t state, QSize*** _out, size_t* _out_len) {
	QList<QSize> ret = const_cast<const QIconEngine*>(self)->availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QSize** __out = static_cast<QSize**>(malloc(sizeof(QSize**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QSize(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QIconEngine_Delete(QIconEngine* self) {
	delete self;
}

QIconEngine__AvailableSizesArgument* QIconEngine__AvailableSizesArgument_new(QIconEngine__AvailableSizesArgument* param1) {
	return new QIconEngine::AvailableSizesArgument(*param1);
}

void QIconEngine__AvailableSizesArgument_Delete(QIconEngine__AvailableSizesArgument* self) {
	delete self;
}

QIconEngine__ScaledPixmapArgument* QIconEngine__ScaledPixmapArgument_new(QIconEngine__ScaledPixmapArgument* param1) {
	return new QIconEngine::ScaledPixmapArgument(*param1);
}

void QIconEngine__ScaledPixmapArgument_Delete(QIconEngine__ScaledPixmapArgument* self) {
	delete self;
}

