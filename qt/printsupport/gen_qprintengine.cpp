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

void QPrintEngine_SetProperty(QPrintEngine* self, int key, QVariant* value) {
	self->setProperty(static_cast<QPrintEngine::PrintEnginePropertyKey>(key), *value);
}

QVariant* QPrintEngine_Property(const QPrintEngine* self, int key) {
	return new QVariant(self->property(static_cast<QPrintEngine::PrintEnginePropertyKey>(key)));
}

bool QPrintEngine_NewPage(QPrintEngine* self) {
	return self->newPage();
}

bool QPrintEngine_Abort(QPrintEngine* self) {
	return self->abort();
}

int QPrintEngine_Metric(const QPrintEngine* self, int param1) {
	return self->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
}

int QPrintEngine_PrinterState(const QPrintEngine* self) {
	QPrinter::PrinterState _ret = self->printerState();
	return static_cast<int>(_ret);
}

void QPrintEngine_OperatorAssign(QPrintEngine* self, QPrintEngine* param1) {
	self->operator=(*param1);
}

void QPrintEngine_Delete(QPrintEngine* self) {
	delete self;
}

