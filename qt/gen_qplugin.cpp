#include "gen_qplugin.h"
#include "qplugin.h"

#include <QJsonObject>
#include <QStaticPlugin>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QJsonObject* QStaticPlugin_MetaData(QStaticPlugin* self) {
	QJsonObject ret = self->metaData();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject*>(new QJsonObject(ret));
}

void QStaticPlugin_Delete(QStaticPlugin* self) {
	delete self;
}

