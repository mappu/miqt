#include <QPrintEngine>
#include <QVariant>
#include <qprintengine.h>
#include "gen_qprintengine.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QPrintEngine_setProperty(QPrintEngine* self, int key, QVariant* value) {
	self->setProperty(static_cast<QPrintEngine::PrintEnginePropertyKey>(key), *value);
}

QVariant* QPrintEngine_property(const QPrintEngine* self, int key) {
	return new QVariant(self->property(static_cast<QPrintEngine::PrintEnginePropertyKey>(key)));
}

bool QPrintEngine_newPage(QPrintEngine* self) {
	return self->newPage();
}

bool QPrintEngine_abort(QPrintEngine* self) {
	return self->abort();
}

int QPrintEngine_metric(const QPrintEngine* self, int param1) {
	return self->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
}

int QPrintEngine_printerState(const QPrintEngine* self) {
	QPrinter::PrinterState _ret = self->printerState();
	return static_cast<int>(_ret);
}

void QPrintEngine_operatorAssign(QPrintEngine* self, QPrintEngine* param1) {
	self->operator=(*param1);
}

void QPrintEngine_delete(QPrintEngine* self) {
	delete self;
}

