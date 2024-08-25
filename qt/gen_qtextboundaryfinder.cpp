#include "gen_qtextboundaryfinder.h"
#include "qtextboundaryfinder.h"

#include <QString>
#include <QTextBoundaryFinder>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTextBoundaryFinder* QTextBoundaryFinder_new() {
	return new QTextBoundaryFinder();
}

QTextBoundaryFinder* QTextBoundaryFinder_new2(QTextBoundaryFinder* other) {
	return new QTextBoundaryFinder(*other);
}

void QTextBoundaryFinder_OperatorAssign(QTextBoundaryFinder* self, QTextBoundaryFinder* other) {
	self->operator=(*other);
}

bool QTextBoundaryFinder_IsValid(QTextBoundaryFinder* self) {
	return self->isValid();
}

void QTextBoundaryFinder_String(QTextBoundaryFinder* self, char** _out, int* _out_Strlen) {
	QString ret = self->string();
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

bool QTextBoundaryFinder_IsAtBoundary(QTextBoundaryFinder* self) {
	return self->isAtBoundary();
}

void QTextBoundaryFinder_Delete(QTextBoundaryFinder* self) {
	delete self;
}

