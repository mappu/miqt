#include "gen_qkeysequence.h"
#include "qkeysequence.h"

#include <QKeySequence>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QKeySequence* QKeySequence_new() {
	return new QKeySequence();
}

QKeySequence* QKeySequence_new2(int k1) {
	return new QKeySequence(static_cast<int>(k1));
}

QKeySequence* QKeySequence_new3(QKeySequence* ks) {
	return new QKeySequence(*ks);
}

QKeySequence* QKeySequence_new4(int k1, int k2) {
	return new QKeySequence(static_cast<int>(k1), static_cast<int>(k2));
}

QKeySequence* QKeySequence_new5(int k1, int k2, int k3) {
	return new QKeySequence(static_cast<int>(k1), static_cast<int>(k2), static_cast<int>(k3));
}

QKeySequence* QKeySequence_new6(int k1, int k2, int k3, int k4) {
	return new QKeySequence(static_cast<int>(k1), static_cast<int>(k2), static_cast<int>(k3), static_cast<int>(k4));
}

int QKeySequence_Count(QKeySequence* self) {
	return self->count();
}

bool QKeySequence_IsEmpty(QKeySequence* self) {
	return self->isEmpty();
}

QKeySequence* QKeySequence_Mnemonic(const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QKeySequence ret = QKeySequence::mnemonic(text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QKeySequence*>(new QKeySequence(ret));
}

int QKeySequence_OperatorSubscript(QKeySequence* self, unsigned int i) {
	return self->operator[](static_cast<uint>(i));
}

void QKeySequence_OperatorAssign(QKeySequence* self, QKeySequence* other) {
	self->operator=(*other);
}

void QKeySequence_Swap(QKeySequence* self, QKeySequence* other) {
	self->swap(*other);
}

bool QKeySequence_OperatorEqual(QKeySequence* self, QKeySequence* other) {
	return self->operator==(*other);
}

bool QKeySequence_OperatorNotEqual(QKeySequence* self, QKeySequence* other) {
	return self->operator!=(*other);
}

bool QKeySequence_OperatorLesser(QKeySequence* self, QKeySequence* ks) {
	return self->operator<(*ks);
}

bool QKeySequence_OperatorGreater(QKeySequence* self, QKeySequence* other) {
	return self->operator>(*other);
}

bool QKeySequence_OperatorLesserOrEqual(QKeySequence* self, QKeySequence* other) {
	return self->operator<=(*other);
}

bool QKeySequence_OperatorGreaterOrEqual(QKeySequence* self, QKeySequence* other) {
	return self->operator>=(*other);
}

bool QKeySequence_IsDetached(QKeySequence* self) {
	return self->isDetached();
}

void QKeySequence_Delete(QKeySequence* self) {
	delete self;
}

