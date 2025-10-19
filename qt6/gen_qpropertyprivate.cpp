#include <QPropertyProxyBindingData>
#include <QUntypedPropertyData>
#include <qpropertyprivate.h>
#include "gen_qpropertyprivate.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QUntypedPropertyData_delete(QUntypedPropertyData* self) {
	delete self;
}

uintptr_t QPropertyProxyBindingData_dPtr(const QPropertyProxyBindingData* self) {
	quintptr d_ptr_ret = self->d_ptr;
	return static_cast<uintptr_t>(d_ptr_ret);
}

void QPropertyProxyBindingData_setDPtr(QPropertyProxyBindingData* self, uintptr_t d_ptr) {
	self->d_ptr = static_cast<quintptr>(d_ptr);
}

QUntypedPropertyData* QPropertyProxyBindingData_propertyData(const QPropertyProxyBindingData* self) {
	return self->propertyData;
}

void QPropertyProxyBindingData_setPropertyData(QPropertyProxyBindingData* self, QUntypedPropertyData* propertyData) {
	self->propertyData = propertyData;
}

void QPropertyProxyBindingData_delete(QPropertyProxyBindingData* self) {
	delete self;
}

