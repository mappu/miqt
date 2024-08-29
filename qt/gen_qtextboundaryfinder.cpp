#include <QChar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextBoundaryFinder>
#include "qtextboundaryfinder.h"

#include "gen_qtextboundaryfinder.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTextBoundaryFinder* QTextBoundaryFinder_new() {
	return new QTextBoundaryFinder();
}

QTextBoundaryFinder* QTextBoundaryFinder_new2(QTextBoundaryFinder* other) {
	return new QTextBoundaryFinder(*other);
}

QTextBoundaryFinder* QTextBoundaryFinder_new3(uintptr_t typeVal, const char* stringVal, size_t stringVal_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	return new QTextBoundaryFinder(static_cast<QTextBoundaryFinder::BoundaryType>(typeVal), stringVal_QString);
}

QTextBoundaryFinder* QTextBoundaryFinder_new4(uintptr_t typeVal, QChar* chars, int length) {
	return new QTextBoundaryFinder(static_cast<QTextBoundaryFinder::BoundaryType>(typeVal), chars, static_cast<int>(length));
}

QTextBoundaryFinder* QTextBoundaryFinder_new5(uintptr_t typeVal, QChar* chars, int length, unsigned char* buffer) {
	return new QTextBoundaryFinder(static_cast<QTextBoundaryFinder::BoundaryType>(typeVal), chars, static_cast<int>(length), static_cast<unsigned char*>(buffer));
}

QTextBoundaryFinder* QTextBoundaryFinder_new6(uintptr_t typeVal, QChar* chars, int length, unsigned char* buffer, int bufferSize) {
	return new QTextBoundaryFinder(static_cast<QTextBoundaryFinder::BoundaryType>(typeVal), chars, static_cast<int>(length), static_cast<unsigned char*>(buffer), static_cast<int>(bufferSize));
}

void QTextBoundaryFinder_OperatorAssign(QTextBoundaryFinder* self, QTextBoundaryFinder* other) {
	self->operator=(*other);
}

bool QTextBoundaryFinder_IsValid(QTextBoundaryFinder* self) {
	return const_cast<const QTextBoundaryFinder*>(self)->isValid();
}

uintptr_t QTextBoundaryFinder_Type(QTextBoundaryFinder* self) {
	QTextBoundaryFinder::BoundaryType ret = const_cast<const QTextBoundaryFinder*>(self)->type();
	return static_cast<uintptr_t>(ret);
}

void QTextBoundaryFinder_String(QTextBoundaryFinder* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextBoundaryFinder*>(self)->string();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextBoundaryFinder_ToStart(QTextBoundaryFinder* self) {
	self->toStart();
}

void QTextBoundaryFinder_ToEnd(QTextBoundaryFinder* self) {
	self->toEnd();
}

int QTextBoundaryFinder_Position(QTextBoundaryFinder* self) {
	return const_cast<const QTextBoundaryFinder*>(self)->position();
}

void QTextBoundaryFinder_SetPosition(QTextBoundaryFinder* self, int position) {
	self->setPosition(static_cast<int>(position));
}

int QTextBoundaryFinder_ToNextBoundary(QTextBoundaryFinder* self) {
	return self->toNextBoundary();
}

int QTextBoundaryFinder_ToPreviousBoundary(QTextBoundaryFinder* self) {
	return self->toPreviousBoundary();
}

bool QTextBoundaryFinder_IsAtBoundary(QTextBoundaryFinder* self) {
	return const_cast<const QTextBoundaryFinder*>(self)->isAtBoundary();
}

int QTextBoundaryFinder_BoundaryReasons(QTextBoundaryFinder* self) {
	QTextBoundaryFinder::BoundaryReasons ret = const_cast<const QTextBoundaryFinder*>(self)->boundaryReasons();
	return static_cast<int>(ret);
}

void QTextBoundaryFinder_Delete(QTextBoundaryFinder* self) {
	delete self;
}

