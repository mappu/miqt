#include <QJsonObject>
#include <QStaticPlugin>
#include <qplugin.h>
#include "gen_qplugin.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QJsonObject* QStaticPlugin_metaData(const QStaticPlugin* self) {
	return new QJsonObject(self->metaData());
}

void QStaticPlugin_delete(QStaticPlugin* self) {
	delete self;
}

unsigned char miqt_QPluginArchRequirements2() {

	return qPluginArchRequirements();
}

void miqt_QRegisterStaticPluginFunctionWithStaticPlugin(QStaticPlugin* staticPlugin) {

	qRegisterStaticPluginFunction(*staticPlugin);
}

