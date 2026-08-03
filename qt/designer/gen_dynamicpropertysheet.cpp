#include <QDesignerDynamicPropertySheetExtension>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <dynamicpropertysheet.h>
#include "gen_dynamicpropertysheet.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

bool QDesignerDynamicPropertySheetExtension_dynamicPropertiesAllowed(const QDesignerDynamicPropertySheetExtension* self) {
	return self->dynamicPropertiesAllowed();
}

int QDesignerDynamicPropertySheetExtension_addDynamicProperty(QDesignerDynamicPropertySheetExtension* self, struct miqt_string propertyName, QVariant* value) {
	QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
	return self->addDynamicProperty(propertyName_QString, *value);
}

bool QDesignerDynamicPropertySheetExtension_removeDynamicProperty(QDesignerDynamicPropertySheetExtension* self, int index) {
	return self->removeDynamicProperty(static_cast<int>(index));
}

bool QDesignerDynamicPropertySheetExtension_isDynamicProperty(const QDesignerDynamicPropertySheetExtension* self, int index) {
	return self->isDynamicProperty(static_cast<int>(index));
}

bool QDesignerDynamicPropertySheetExtension_canAddDynamicProperty(const QDesignerDynamicPropertySheetExtension* self, struct miqt_string propertyName) {
	QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
	return self->canAddDynamicProperty(propertyName_QString);
}

void QDesignerDynamicPropertySheetExtension_operatorAssign(QDesignerDynamicPropertySheetExtension* self, QDesignerDynamicPropertySheetExtension* param1) {
	self->operator=(*param1);
}

void QDesignerDynamicPropertySheetExtension_delete(QDesignerDynamicPropertySheetExtension* self) {
	delete self;
}

