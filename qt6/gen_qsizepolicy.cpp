#include <QSizePolicy>
#include <QVariant>
#include <qsizepolicy.h>
#include "gen_qsizepolicy.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QSizePolicy* QSizePolicy_new() {
	return new QSizePolicy();
}

QSizePolicy* QSizePolicy_new2(int horizontal, int vertical) {
	return new QSizePolicy(static_cast<QSizePolicy::Policy>(horizontal), static_cast<QSizePolicy::Policy>(vertical));
}

QSizePolicy* QSizePolicy_new3(QSizePolicy* param1) {
	return new QSizePolicy(*param1);
}

QSizePolicy* QSizePolicy_new4(int horizontal, int vertical, int type) {
	return new QSizePolicy(static_cast<QSizePolicy::Policy>(horizontal), static_cast<QSizePolicy::Policy>(vertical), static_cast<QSizePolicy::ControlType>(type));
}

int QSizePolicy_horizontalPolicy(const QSizePolicy* self) {
	QSizePolicy::Policy _ret = self->horizontalPolicy();
	return static_cast<int>(_ret);
}

int QSizePolicy_verticalPolicy(const QSizePolicy* self) {
	QSizePolicy::Policy _ret = self->verticalPolicy();
	return static_cast<int>(_ret);
}

int QSizePolicy_controlType(const QSizePolicy* self) {
	QSizePolicy::ControlType _ret = self->controlType();
	return static_cast<int>(_ret);
}

void QSizePolicy_setHorizontalPolicy(QSizePolicy* self, int d) {
	self->setHorizontalPolicy(static_cast<QSizePolicy::Policy>(d));
}

void QSizePolicy_setVerticalPolicy(QSizePolicy* self, int d) {
	self->setVerticalPolicy(static_cast<QSizePolicy::Policy>(d));
}

void QSizePolicy_setControlType(QSizePolicy* self, int type) {
	self->setControlType(static_cast<QSizePolicy::ControlType>(type));
}

int QSizePolicy_expandingDirections(const QSizePolicy* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

void QSizePolicy_setHeightForWidth(QSizePolicy* self, bool b) {
	self->setHeightForWidth(b);
}

bool QSizePolicy_hasHeightForWidth(const QSizePolicy* self) {
	return self->hasHeightForWidth();
}

void QSizePolicy_setWidthForHeight(QSizePolicy* self, bool b) {
	self->setWidthForHeight(b);
}

bool QSizePolicy_hasWidthForHeight(const QSizePolicy* self) {
	return self->hasWidthForHeight();
}

bool QSizePolicy_operatorEqual(const QSizePolicy* self, QSizePolicy* s) {
	return (*self == *s);
}

bool QSizePolicy_operatorNotEqual(const QSizePolicy* self, QSizePolicy* s) {
	return (*self != *s);
}

QVariant* QSizePolicy_ToQVariant(const QSizePolicy* self) {
	return new QVariant(self->operator QVariant());
}

int QSizePolicy_horizontalStretch(const QSizePolicy* self) {
	return self->horizontalStretch();
}

int QSizePolicy_verticalStretch(const QSizePolicy* self) {
	return self->verticalStretch();
}

void QSizePolicy_setHorizontalStretch(QSizePolicy* self, int stretchFactor) {
	self->setHorizontalStretch(static_cast<int>(stretchFactor));
}

void QSizePolicy_setVerticalStretch(QSizePolicy* self, int stretchFactor) {
	self->setVerticalStretch(static_cast<int>(stretchFactor));
}

bool QSizePolicy_retainSizeWhenHidden(const QSizePolicy* self) {
	return self->retainSizeWhenHidden();
}

void QSizePolicy_setRetainSizeWhenHidden(QSizePolicy* self, bool retainSize) {
	self->setRetainSizeWhenHidden(retainSize);
}

void QSizePolicy_transpose(QSizePolicy* self) {
	self->transpose();
}

QSizePolicy* QSizePolicy_transposed(const QSizePolicy* self) {
	return new QSizePolicy(self->transposed());
}

void QSizePolicy_delete(QSizePolicy* self) {
	delete self;
}

