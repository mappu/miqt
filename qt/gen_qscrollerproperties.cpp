#include "gen_qscrollerproperties.h"
#include "qscrollerproperties.h"

#include <QScrollerProperties>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QScrollerProperties* QScrollerProperties_new() {
	return new QScrollerProperties();
}

QScrollerProperties* QScrollerProperties_new2(QScrollerProperties* sp) {
	return new QScrollerProperties(*sp);
}

void QScrollerProperties_OperatorAssign(QScrollerProperties* self, QScrollerProperties* sp) {
	self->operator=(*sp);
}

bool QScrollerProperties_OperatorEqual(QScrollerProperties* self, QScrollerProperties* sp) {
	return self->operator==(*sp);
}

bool QScrollerProperties_OperatorNotEqual(QScrollerProperties* self, QScrollerProperties* sp) {
	return self->operator!=(*sp);
}

void QScrollerProperties_SetDefaultScrollerProperties(QScrollerProperties* sp) {
	QScrollerProperties::setDefaultScrollerProperties(*sp);
}

void QScrollerProperties_UnsetDefaultScrollerProperties() {
	QScrollerProperties::unsetDefaultScrollerProperties();
}

void QScrollerProperties_Delete(QScrollerProperties* self) {
	delete self;
}

