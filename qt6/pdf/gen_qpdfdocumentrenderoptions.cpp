#include <QPdfDocumentRenderOptions>
#include <QRect>
#include <QSize>
#include <qpdfdocumentrenderoptions.h>
#include "gen_qpdfdocumentrenderoptions.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QPdfDocumentRenderOptions* QPdfDocumentRenderOptions_new() {
	return new QPdfDocumentRenderOptions();
}

QPdfDocumentRenderOptions* QPdfDocumentRenderOptions_new2(QPdfDocumentRenderOptions* param1) {
	return new QPdfDocumentRenderOptions(*param1);
}

int QPdfDocumentRenderOptions_rotation(const QPdfDocumentRenderOptions* self) {
	QPdfDocumentRenderOptions::Rotation _ret = self->rotation();
	return static_cast<int>(_ret);
}

void QPdfDocumentRenderOptions_setRotation(QPdfDocumentRenderOptions* self, int r) {
	self->setRotation(static_cast<QPdfDocumentRenderOptions::Rotation>(r));
}

int QPdfDocumentRenderOptions_renderFlags(const QPdfDocumentRenderOptions* self) {
	QPdfDocumentRenderOptions::RenderFlags _ret = self->renderFlags();
	return static_cast<int>(_ret);
}

void QPdfDocumentRenderOptions_setRenderFlags(QPdfDocumentRenderOptions* self, int r) {
	self->setRenderFlags(static_cast<QPdfDocumentRenderOptions::RenderFlags>(r));
}

QRect* QPdfDocumentRenderOptions_scaledClipRect(const QPdfDocumentRenderOptions* self) {
	return new QRect(self->scaledClipRect());
}

void QPdfDocumentRenderOptions_setScaledClipRect(QPdfDocumentRenderOptions* self, QRect* r) {
	self->setScaledClipRect(*r);
}

QSize* QPdfDocumentRenderOptions_scaledSize(const QPdfDocumentRenderOptions* self) {
	return new QSize(self->scaledSize());
}

void QPdfDocumentRenderOptions_setScaledSize(QPdfDocumentRenderOptions* self, QSize* s) {
	self->setScaledSize(*s);
}

void QPdfDocumentRenderOptions_delete(QPdfDocumentRenderOptions* self) {
	delete self;
}

