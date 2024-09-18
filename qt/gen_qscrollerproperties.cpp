#include <QScrollerProperties>
#include <QVariant>
#include "qscrollerproperties.h"
#include "gen_qscrollerproperties.h"
#include "_cgo_export.h"

QScrollerProperties* QScrollerProperties_new() {
	return new QScrollerProperties();
}

QScrollerProperties* QScrollerProperties_new2(QScrollerProperties* sp) {
	return new QScrollerProperties(*sp);
}

void QScrollerProperties_OperatorAssign(QScrollerProperties* self, QScrollerProperties* sp) {
	self->operator=(*sp);
}

bool QScrollerProperties_OperatorEqual(const QScrollerProperties* self, QScrollerProperties* sp) {
	return self->operator==(*sp);
}

bool QScrollerProperties_OperatorNotEqual(const QScrollerProperties* self, QScrollerProperties* sp) {
	return self->operator!=(*sp);
}

void QScrollerProperties_SetDefaultScrollerProperties(QScrollerProperties* sp) {
	QScrollerProperties::setDefaultScrollerProperties(*sp);
}

void QScrollerProperties_UnsetDefaultScrollerProperties() {
	QScrollerProperties::unsetDefaultScrollerProperties();
}

QVariant* QScrollerProperties_ScrollMetric(const QScrollerProperties* self, int metric) {
	return new QVariant(self->scrollMetric(static_cast<QScrollerProperties::ScrollMetric>(metric)));
}

void QScrollerProperties_SetScrollMetric(QScrollerProperties* self, int metric, QVariant* value) {
	self->setScrollMetric(static_cast<QScrollerProperties::ScrollMetric>(metric), *value);
}

void QScrollerProperties_Delete(QScrollerProperties* self) {
	delete self;
}

