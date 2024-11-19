#include <QBindingStatus>
#include <QBindingStorage>
#include <QUntypedPropertyData>
#include <qbindingstorage.h>
#include "gen_qbindingstorage.h"
#include "_cgo_export.h"

void QBindingStatus_Delete(QBindingStatus* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QBindingStatus*>( self );
	} else {
		delete self;
	}
}

void QBindingStorage_new(QBindingStorage** outptr_QBindingStorage) {
	QBindingStorage* ret = new QBindingStorage();
	*outptr_QBindingStorage = ret;
}

bool QBindingStorage_IsEmpty(QBindingStorage* self) {
	return self->isEmpty();
}

bool QBindingStorage_IsValid(const QBindingStorage* self) {
	return self->isValid();
}

void QBindingStorage_RegisterDependency(const QBindingStorage* self, QUntypedPropertyData* data) {
	self->registerDependency(data);
}

void QBindingStorage_Delete(QBindingStorage* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QBindingStorage*>( self );
	} else {
		delete self;
	}
}

