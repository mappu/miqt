#include <QChar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextBoundaryFinder>
#include "qtextboundaryfinder.h"
#include "gen_qtextboundaryfinder.h"
#include "_cgo_export.h"

QTextBoundaryFinder* QTextBoundaryFinder_new() {
	return new QTextBoundaryFinder();
}

QTextBoundaryFinder* QTextBoundaryFinder_new2(QTextBoundaryFinder* other) {
	return new QTextBoundaryFinder(*other);
}

QTextBoundaryFinder* QTextBoundaryFinder_new3(int typeVal, struct miqt_string* stringVal) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	return new QTextBoundaryFinder(static_cast<QTextBoundaryFinder::BoundaryType>(typeVal), stringVal_QString);
}

QTextBoundaryFinder* QTextBoundaryFinder_new4(int typeVal, QChar* chars, int length) {
	return new QTextBoundaryFinder(static_cast<QTextBoundaryFinder::BoundaryType>(typeVal), chars, static_cast<int>(length));
}

QTextBoundaryFinder* QTextBoundaryFinder_new5(int typeVal, QChar* chars, int length, unsigned char* buffer) {
	return new QTextBoundaryFinder(static_cast<QTextBoundaryFinder::BoundaryType>(typeVal), chars, static_cast<int>(length), static_cast<unsigned char*>(buffer));
}

QTextBoundaryFinder* QTextBoundaryFinder_new6(int typeVal, QChar* chars, int length, unsigned char* buffer, int bufferSize) {
	return new QTextBoundaryFinder(static_cast<QTextBoundaryFinder::BoundaryType>(typeVal), chars, static_cast<int>(length), static_cast<unsigned char*>(buffer), static_cast<int>(bufferSize));
}

void QTextBoundaryFinder_OperatorAssign(QTextBoundaryFinder* self, QTextBoundaryFinder* other) {
	self->operator=(*other);
}

bool QTextBoundaryFinder_IsValid(const QTextBoundaryFinder* self) {
	return self->isValid();
}

int QTextBoundaryFinder_Type(const QTextBoundaryFinder* self) {
	QTextBoundaryFinder::BoundaryType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string* QTextBoundaryFinder_String(const QTextBoundaryFinder* self) {
	QString _ret = self->string();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTextBoundaryFinder_ToStart(QTextBoundaryFinder* self) {
	self->toStart();
}

void QTextBoundaryFinder_ToEnd(QTextBoundaryFinder* self) {
	self->toEnd();
}

int QTextBoundaryFinder_Position(const QTextBoundaryFinder* self) {
	return self->position();
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

bool QTextBoundaryFinder_IsAtBoundary(const QTextBoundaryFinder* self) {
	return self->isAtBoundary();
}

int QTextBoundaryFinder_BoundaryReasons(const QTextBoundaryFinder* self) {
	QTextBoundaryFinder::BoundaryReasons _ret = self->boundaryReasons();
	return static_cast<int>(_ret);
}

void QTextBoundaryFinder_Delete(QTextBoundaryFinder* self) {
	delete self;
}

