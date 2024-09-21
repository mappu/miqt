#include <QByteArray>
#include <QChar>
#include <QDebug>
#include <QDebugStateSaver>
#include <QIODevice>
#include <QNoDebug>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qdebug.h"
#include "gen_qdebug.h"
#include "_cgo_export.h"

QDebug* QDebug_new(QIODevice* device) {
	return new QDebug(device);
}

QDebug* QDebug_new2(QDebug* o) {
	return new QDebug(*o);
}

void QDebug_OperatorAssign(QDebug* self, QDebug* other) {
	self->operator=(*other);
}

void QDebug_Swap(QDebug* self, QDebug* other) {
	self->swap(*other);
}

QDebug* QDebug_ResetFormat(QDebug* self) {
	QDebug& _ret = self->resetFormat();
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_Space(QDebug* self) {
	QDebug& _ret = self->space();
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_Nospace(QDebug* self) {
	QDebug& _ret = self->nospace();
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_MaybeSpace(QDebug* self) {
	QDebug& _ret = self->maybeSpace();
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_Verbosity(QDebug* self, int verbosityLevel) {
	QDebug& _ret = self->verbosity(static_cast<int>(verbosityLevel));
	// Cast returned reference into pointer
	return &_ret;
}

int QDebug_Verbosity2(const QDebug* self) {
	return self->verbosity();
}

void QDebug_SetVerbosity(QDebug* self, int verbosityLevel) {
	self->setVerbosity(static_cast<int>(verbosityLevel));
}

bool QDebug_AutoInsertSpaces(const QDebug* self) {
	return self->autoInsertSpaces();
}

void QDebug_SetAutoInsertSpaces(QDebug* self, bool b) {
	self->setAutoInsertSpaces(b);
}

QDebug* QDebug_Quote(QDebug* self) {
	QDebug& _ret = self->quote();
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_Noquote(QDebug* self) {
	QDebug& _ret = self->noquote();
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_MaybeQuote(QDebug* self) {
	QDebug& _ret = self->maybeQuote();
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_OperatorShiftLeft(QDebug* self, QChar* t) {
	QDebug& _ret = self->operator<<(*t);
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_OperatorShiftLeftWithBool(QDebug* self, bool t) {
	QDebug& _ret = self->operator<<(t);
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_OperatorShiftLeftWithChar(QDebug* self, char t) {
	QDebug& _ret = self->operator<<(static_cast<char>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_OperatorShiftLeftWithShort(QDebug* self, int16_t t) {
	QDebug& _ret = self->operator<<(static_cast<short>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_OperatorShiftLeftWithUnsignedshort(QDebug* self, uint16_t t) {
	QDebug& _ret = self->operator<<(static_cast<unsigned short>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_OperatorShiftLeftWithInt(QDebug* self, int t) {
	QDebug& _ret = self->operator<<(static_cast<int>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_OperatorShiftLeftWithUnsignedint(QDebug* self, unsigned int t) {
	QDebug& _ret = self->operator<<(static_cast<unsigned int>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_OperatorShiftLeftWithLong(QDebug* self, long t) {
	QDebug& _ret = self->operator<<(static_cast<long>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_OperatorShiftLeftWithUnsignedlong(QDebug* self, unsigned long t) {
	QDebug& _ret = self->operator<<(static_cast<unsigned long>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_OperatorShiftLeftWithQint64(QDebug* self, long long t) {
	QDebug& _ret = self->operator<<(static_cast<qint64>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_OperatorShiftLeftWithQuint64(QDebug* self, unsigned long long t) {
	QDebug& _ret = self->operator<<(static_cast<quint64>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_OperatorShiftLeftWithFloat(QDebug* self, float t) {
	QDebug& _ret = self->operator<<(static_cast<float>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_OperatorShiftLeftWithDouble(QDebug* self, double t) {
	QDebug& _ret = self->operator<<(static_cast<double>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_OperatorShiftLeft2(QDebug* self, const char* t) {
	QDebug& _ret = self->operator<<(t);
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_OperatorShiftLeftWithQString(QDebug* self, struct miqt_string* t) {
	QString t_QString = QString::fromUtf8(&t->data, t->len);
	QDebug& _ret = self->operator<<(t_QString);
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_OperatorShiftLeftWithQByteArray(QDebug* self, QByteArray* t) {
	QDebug& _ret = self->operator<<(*t);
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_OperatorShiftLeftWithVoid(QDebug* self, const void* t) {
	QDebug& _ret = self->operator<<(t);
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_MaybeQuote1(QDebug* self, char c) {
	QDebug& _ret = self->maybeQuote(static_cast<char>(c));
	// Cast returned reference into pointer
	return &_ret;
}

void QDebug_Delete(QDebug* self) {
	delete self;
}

QDebugStateSaver* QDebugStateSaver_new(QDebug* dbg) {
	return new QDebugStateSaver(*dbg);
}

void QDebugStateSaver_Delete(QDebugStateSaver* self) {
	delete self;
}

QNoDebug* QNoDebug_Space(QNoDebug* self) {
	QNoDebug& _ret = self->space();
	// Cast returned reference into pointer
	return &_ret;
}

QNoDebug* QNoDebug_Nospace(QNoDebug* self) {
	QNoDebug& _ret = self->nospace();
	// Cast returned reference into pointer
	return &_ret;
}

QNoDebug* QNoDebug_MaybeSpace(QNoDebug* self) {
	QNoDebug& _ret = self->maybeSpace();
	// Cast returned reference into pointer
	return &_ret;
}

QNoDebug* QNoDebug_Quote(QNoDebug* self) {
	QNoDebug& _ret = self->quote();
	// Cast returned reference into pointer
	return &_ret;
}

QNoDebug* QNoDebug_Noquote(QNoDebug* self) {
	QNoDebug& _ret = self->noquote();
	// Cast returned reference into pointer
	return &_ret;
}

QNoDebug* QNoDebug_MaybeQuote(QNoDebug* self) {
	QNoDebug& _ret = self->maybeQuote();
	// Cast returned reference into pointer
	return &_ret;
}

QNoDebug* QNoDebug_Verbosity(QNoDebug* self, int param1) {
	QNoDebug& _ret = self->verbosity(static_cast<int>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QNoDebug* QNoDebug_MaybeQuote1(QNoDebug* self, const char param1) {
	QNoDebug& _ret = self->maybeQuote(static_cast<const char>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

void QNoDebug_Delete(QNoDebug* self) {
	delete self;
}

