#include <QSizePolicy>
#include "qsizepolicy.h"

#include "gen_qsizepolicy.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSizePolicy* QSizePolicy_new() {
	return new QSizePolicy();
}

QSizePolicy* QSizePolicy_new2(uintptr_t horizontal, uintptr_t vertical) {
	return new QSizePolicy(static_cast<QSizePolicy::Policy>(horizontal), static_cast<QSizePolicy::Policy>(vertical));
}

QSizePolicy* QSizePolicy_new3(QSizePolicy* param1) {
	return new QSizePolicy(*param1);
}

QSizePolicy* QSizePolicy_new4(uintptr_t horizontal, uintptr_t vertical, uintptr_t typeVal) {
	return new QSizePolicy(static_cast<QSizePolicy::Policy>(horizontal), static_cast<QSizePolicy::Policy>(vertical), static_cast<QSizePolicy::ControlType>(typeVal));
}

uintptr_t QSizePolicy_HorizontalPolicy(QSizePolicy* self) {
	QSizePolicy::Policy ret = const_cast<const QSizePolicy*>(self)->horizontalPolicy();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QSizePolicy_VerticalPolicy(QSizePolicy* self) {
	QSizePolicy::Policy ret = const_cast<const QSizePolicy*>(self)->verticalPolicy();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QSizePolicy_ControlType(QSizePolicy* self) {
	QSizePolicy::ControlType ret = const_cast<const QSizePolicy*>(self)->controlType();
	return static_cast<uintptr_t>(ret);
}

void QSizePolicy_SetHorizontalPolicy(QSizePolicy* self, uintptr_t d) {
	self->setHorizontalPolicy(static_cast<QSizePolicy::Policy>(d));
}

void QSizePolicy_SetVerticalPolicy(QSizePolicy* self, uintptr_t d) {
	self->setVerticalPolicy(static_cast<QSizePolicy::Policy>(d));
}

void QSizePolicy_SetControlType(QSizePolicy* self, uintptr_t typeVal) {
	self->setControlType(static_cast<QSizePolicy::ControlType>(typeVal));
}

int QSizePolicy_ExpandingDirections(QSizePolicy* self) {
	Qt::Orientations ret = const_cast<const QSizePolicy*>(self)->expandingDirections();
	return static_cast<int>(ret);
}

void QSizePolicy_SetHeightForWidth(QSizePolicy* self, bool b) {
	self->setHeightForWidth(b);
}

bool QSizePolicy_HasHeightForWidth(QSizePolicy* self) {
	return const_cast<const QSizePolicy*>(self)->hasHeightForWidth();
}

void QSizePolicy_SetWidthForHeight(QSizePolicy* self, bool b) {
	self->setWidthForHeight(b);
}

bool QSizePolicy_HasWidthForHeight(QSizePolicy* self) {
	return const_cast<const QSizePolicy*>(self)->hasWidthForHeight();
}

bool QSizePolicy_OperatorEqual(QSizePolicy* self, QSizePolicy* s) {
	return const_cast<const QSizePolicy*>(self)->operator==(*s);
}

bool QSizePolicy_OperatorNotEqual(QSizePolicy* self, QSizePolicy* s) {
	return const_cast<const QSizePolicy*>(self)->operator!=(*s);
}

int QSizePolicy_HorizontalStretch(QSizePolicy* self) {
	return const_cast<const QSizePolicy*>(self)->horizontalStretch();
}

int QSizePolicy_VerticalStretch(QSizePolicy* self) {
	return const_cast<const QSizePolicy*>(self)->verticalStretch();
}

void QSizePolicy_SetHorizontalStretch(QSizePolicy* self, int stretchFactor) {
	self->setHorizontalStretch(static_cast<int>(stretchFactor));
}

void QSizePolicy_SetVerticalStretch(QSizePolicy* self, int stretchFactor) {
	self->setVerticalStretch(static_cast<int>(stretchFactor));
}

bool QSizePolicy_RetainSizeWhenHidden(QSizePolicy* self) {
	return const_cast<const QSizePolicy*>(self)->retainSizeWhenHidden();
}

void QSizePolicy_SetRetainSizeWhenHidden(QSizePolicy* self, bool retainSize) {
	self->setRetainSizeWhenHidden(retainSize);
}

void QSizePolicy_Transpose(QSizePolicy* self) {
	self->transpose();
}

QSizePolicy* QSizePolicy_Transposed(QSizePolicy* self) {
	QSizePolicy ret = const_cast<const QSizePolicy*>(self)->transposed();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizePolicy*>(new QSizePolicy(ret));
}

void QSizePolicy_Delete(QSizePolicy* self) {
	delete self;
}

