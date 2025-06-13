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
	return new (std::nothrow) QPdfDocumentRenderOptions();
}

QPdfDocumentRenderOptions* QPdfDocumentRenderOptions_new2(QPdfDocumentRenderOptions* param1) {
	return new (std::nothrow) QPdfDocumentRenderOptions(*param1);
}

int QPdfDocumentRenderOptions_rotation(const QPdfDocumentRenderOptions* self) {
	QPdf::Rotation _ret = self->rotation();
	return static_cast<int>(_ret);
}

void QPdfDocumentRenderOptions_setRotation(QPdfDocumentRenderOptions* self, int r) {
	self->setRotation(static_cast<QPdf::Rotation>(r));
}

int QPdfDocumentRenderOptions_renderFlags(const QPdfDocumentRenderOptions* self) {
	QPdf::RenderFlags _ret = self->renderFlags();
	return static_cast<int>(_ret);
}

void QPdfDocumentRenderOptions_setRenderFlags(QPdfDocumentRenderOptions* self, int r) {
	self->setRenderFlags(static_cast<QPdf::RenderFlags>(r));
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

