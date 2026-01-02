#include <QAbstractExtensionFactory>
#include <QAbstractExtensionManager>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <extension.h>
#include "gen_extension.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QObject* QAbstractExtensionFactory_extension(const QAbstractExtensionFactory* self, QObject* object, struct miqt_string iid) {
	QString iid_QString = QString::fromUtf8(iid.data, iid.len);
	return self->extension(object, iid_QString);
}

void QAbstractExtensionFactory_operatorAssign(QAbstractExtensionFactory* self, QAbstractExtensionFactory* param1) {
	self->operator=(*param1);
}

void QAbstractExtensionFactory_delete(QAbstractExtensionFactory* self) {
	delete self;
}

void QAbstractExtensionManager_registerExtensions(QAbstractExtensionManager* self, QAbstractExtensionFactory* factory, struct miqt_string iid) {
	QString iid_QString = QString::fromUtf8(iid.data, iid.len);
	self->registerExtensions(factory, iid_QString);
}

void QAbstractExtensionManager_unregisterExtensions(QAbstractExtensionManager* self, QAbstractExtensionFactory* factory, struct miqt_string iid) {
	QString iid_QString = QString::fromUtf8(iid.data, iid.len);
	self->unregisterExtensions(factory, iid_QString);
}

QObject* QAbstractExtensionManager_extension(const QAbstractExtensionManager* self, QObject* object, struct miqt_string iid) {
	QString iid_QString = QString::fromUtf8(iid.data, iid.len);
	return self->extension(object, iid_QString);
}

void QAbstractExtensionManager_operatorAssign(QAbstractExtensionManager* self, QAbstractExtensionManager* param1) {
	self->operator=(*param1);
}

void QAbstractExtensionManager_delete(QAbstractExtensionManager* self) {
	delete self;
}

