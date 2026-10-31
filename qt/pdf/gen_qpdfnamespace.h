#pragma once
#ifndef MIQT_QT_PDF_GEN_QPDFNAMESPACE_H
#define MIQT_QT_PDF_GEN_QPDFNAMESPACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
#else
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* miqt_QPdf_QtGetEnumMetaObjectWithQPdfRotation(int param1);
const char* miqt_QPdf_QtGetEnumNameWithQPdfRotation(int param1);
QMetaObject* miqt_QPdf_QtGetEnumMetaObjectWithQPdfRenderFlag(int param1);
const char* miqt_QPdf_QtGetEnumNameWithQPdfRenderFlag(int param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
