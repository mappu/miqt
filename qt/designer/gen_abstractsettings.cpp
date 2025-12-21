#include <QDesignerSettingsInterface>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <abstractsettings.h>
#include "gen_abstractsettings.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QDesignerSettingsInterface_beginGroup(QDesignerSettingsInterface* self, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	self->beginGroup(prefix_QString);
}

void QDesignerSettingsInterface_endGroup(QDesignerSettingsInterface* self) {
	self->endGroup();
}

bool QDesignerSettingsInterface_contains(const QDesignerSettingsInterface* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->contains(key_QString);
}

void QDesignerSettingsInterface_setValue(QDesignerSettingsInterface* self, struct miqt_string key, QVariant* value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setValue(key_QString, *value);
}

QVariant* QDesignerSettingsInterface_value(const QDesignerSettingsInterface* self, struct miqt_string key, QVariant* defaultValue) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QVariant(self->value(key_QString, *defaultValue));
}

void QDesignerSettingsInterface_remove(QDesignerSettingsInterface* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->remove(key_QString);
}

void QDesignerSettingsInterface_operatorAssign(QDesignerSettingsInterface* self, QDesignerSettingsInterface* param1) {
	self->operator=(*param1);
}

void QDesignerSettingsInterface_delete(QDesignerSettingsInterface* self) {
	delete self;
}

