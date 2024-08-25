#include "gen_qpagesize.h"
#include "qpagesize.h"

#include <QPageSize>
#include <QRect>
#include <QSize>
#include <QSizeF>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QPageSize* QPageSize_new() {
	return new QPageSize();
}

QPageSize* QPageSize_new2(QPageSize* other) {
	return new QPageSize(*other);
}

void QPageSize_OperatorAssign(QPageSize* self, QPageSize* other) {
	self->operator=(*other);
}

void QPageSize_Swap(QPageSize* self, QPageSize* other) {
	self->swap(*other);
}

bool QPageSize_IsEquivalentTo(QPageSize* self, QPageSize* other) {
	return self->isEquivalentTo(*other);
}

bool QPageSize_IsValid(QPageSize* self) {
	return self->isValid();
}

void QPageSize_Key(QPageSize* self, char** _out, int* _out_Strlen) {
	QString ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPageSize_Name(QPageSize* self, char** _out, int* _out_Strlen) {
	QString ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QPageSize_WindowsId(QPageSize* self) {
	return self->windowsId();
}

QSizeF* QPageSize_DefinitionSize(QPageSize* self) {
	QSizeF ret = self->definitionSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QSize* QPageSize_SizePoints(QPageSize* self) {
	QSize ret = self->sizePoints();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QPageSize_SizePixels(QPageSize* self, int resolution) {
	QSize ret = self->sizePixels(static_cast<int>(resolution));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QRect* QPageSize_RectPoints(QPageSize* self) {
	QRect ret = self->rectPoints();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QPageSize_RectPixels(QPageSize* self, int resolution) {
	QRect ret = self->rectPixels(static_cast<int>(resolution));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QPageSize_Delete(QPageSize* self) {
	delete self;
}

