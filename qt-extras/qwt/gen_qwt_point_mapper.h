#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_POINT_MAPPER_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_POINT_MAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QRectF;
class QwtPointMapper;
#else
typedef struct QRectF QRectF;
typedef struct QwtPointMapper QwtPointMapper;
#endif

QwtPointMapper* QwtPointMapper_new();
void QwtPointMapper_setFlags(QwtPointMapper* self, int flags);
int QwtPointMapper_flags(const QwtPointMapper* self);
void QwtPointMapper_setFlag(QwtPointMapper* self, int param1);
bool QwtPointMapper_testFlag(const QwtPointMapper* self, int param1);
void QwtPointMapper_setBoundingRect(QwtPointMapper* self, QRectF* boundingRect);
QRectF* QwtPointMapper_boundingRect(const QwtPointMapper* self);
void QwtPointMapper_setFlag2(QwtPointMapper* self, int param1, bool on);

void QwtPointMapper_delete(QwtPointMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
