#include "gen_qsizepolicy.h"
#include "qsizepolicy.h"

#include <QSizePolicy>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSizePolicy* QSizePolicy_new() {
	return new QSizePolicy();
}

QSizePolicy* QSizePolicy_new2(QSizePolicy* param1) {
	return new QSizePolicy(*param1);
}

void QSizePolicy_SetHeightForWidth(QSizePolicy* self, bool b) {
	self->setHeightForWidth(b);
}

bool QSizePolicy_HasHeightForWidth(QSizePolicy* self) {
	return self->hasHeightForWidth();
}

void QSizePolicy_SetWidthForHeight(QSizePolicy* self, bool b) {
	self->setWidthForHeight(b);
}

bool QSizePolicy_HasWidthForHeight(QSizePolicy* self) {
	return self->hasWidthForHeight();
}

bool QSizePolicy_OperatorEqual(QSizePolicy* self, QSizePolicy* s) {
	return self->operator==(*s);
}

bool QSizePolicy_OperatorNotEqual(QSizePolicy* self, QSizePolicy* s) {
	return self->operator!=(*s);
}

int QSizePolicy_HorizontalStretch(QSizePolicy* self) {
	return self->horizontalStretch();
}

int QSizePolicy_VerticalStretch(QSizePolicy* self) {
	return self->verticalStretch();
}

void QSizePolicy_SetHorizontalStretch(QSizePolicy* self, int stretchFactor) {
	self->setHorizontalStretch(static_cast<int>(stretchFactor));
}

void QSizePolicy_SetVerticalStretch(QSizePolicy* self, int stretchFactor) {
	self->setVerticalStretch(static_cast<int>(stretchFactor));
}

bool QSizePolicy_RetainSizeWhenHidden(QSizePolicy* self) {
	return self->retainSizeWhenHidden();
}

void QSizePolicy_SetRetainSizeWhenHidden(QSizePolicy* self, bool retainSize) {
	self->setRetainSizeWhenHidden(retainSize);
}

void QSizePolicy_Transpose(QSizePolicy* self) {
	self->transpose();
}

QSizePolicy* QSizePolicy_Transposed(QSizePolicy* self) {
	QSizePolicy ret = self->transposed();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizePolicy*>(new QSizePolicy(ret));
}

void QSizePolicy_Delete(QSizePolicy* self) {
	delete self;
}

