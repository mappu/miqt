#include <QJsonObject>
#include <QStaticPlugin>
#include "qplugin.h"
#include "gen_qplugin.h"
#include "_cgo_export.h"

QJsonObject* QStaticPlugin_MetaData(const QStaticPlugin* self) {
	QJsonObject _ret = self->metaData();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject*>(new QJsonObject(_ret));
}

void QStaticPlugin_Delete(QStaticPlugin* self) {
	delete self;
}

