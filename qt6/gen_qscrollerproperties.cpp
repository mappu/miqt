#include <QScrollerProperties>
#include <QVariant>
#include <qscrollerproperties.h>
#include "gen_qscrollerproperties.h"
#include "_cgo_export.h"

void QScrollerProperties_new(QScrollerProperties** outptr_QScrollerProperties) {
	QScrollerProperties* ret = new QScrollerProperties();
	*outptr_QScrollerProperties = ret;
}

void QScrollerProperties_new2(QScrollerProperties* sp, QScrollerProperties** outptr_QScrollerProperties) {
	QScrollerProperties* ret = new QScrollerProperties(*sp);
	*outptr_QScrollerProperties = ret;
}

void QScrollerProperties_OperatorAssign(QScrollerProperties* self, QScrollerProperties* sp) {
	self->operator=(*sp);
}

bool QScrollerProperties_OperatorEqual(const QScrollerProperties* self, QScrollerProperties* sp) {
	return (*self == *sp);
}

bool QScrollerProperties_OperatorNotEqual(const QScrollerProperties* self, QScrollerProperties* sp) {
	return (*self != *sp);
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

void QScrollerProperties_Delete(QScrollerProperties* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QScrollerProperties*>( self );
	} else {
		delete self;
	}
}

