#pragma once
#ifndef MIQT_QT6_PDF_GEN_QPDFDOCUMENTRENDEROPTIONS_H
#define MIQT_QT6_PDF_GEN_QPDFDOCUMENTRENDEROPTIONS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPdfDocumentRenderOptions;
class QRect;
class QSize;
#else
typedef struct QPdfDocumentRenderOptions QPdfDocumentRenderOptions;
typedef struct QRect QRect;
typedef struct QSize QSize;
#endif

QPdfDocumentRenderOptions* QPdfDocumentRenderOptions_new();
QPdfDocumentRenderOptions* QPdfDocumentRenderOptions_new2(QPdfDocumentRenderOptions* param1);
int QPdfDocumentRenderOptions_rotation(const QPdfDocumentRenderOptions* self);
void QPdfDocumentRenderOptions_setRotation(QPdfDocumentRenderOptions* self, int r);
int QPdfDocumentRenderOptions_renderFlags(const QPdfDocumentRenderOptions* self);
void QPdfDocumentRenderOptions_setRenderFlags(QPdfDocumentRenderOptions* self, int r);
struct miqt_qrect QPdfDocumentRenderOptions_scaledClipRect(const QPdfDocumentRenderOptions* self);
void QPdfDocumentRenderOptions_setScaledClipRect(QPdfDocumentRenderOptions* self, struct miqt_qrect r);
struct miqt_qsize QPdfDocumentRenderOptions_scaledSize(const QPdfDocumentRenderOptions* self);
void QPdfDocumentRenderOptions_setScaledSize(QPdfDocumentRenderOptions* self, struct miqt_qsize s);

void QPdfDocumentRenderOptions_delete(QPdfDocumentRenderOptions* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
