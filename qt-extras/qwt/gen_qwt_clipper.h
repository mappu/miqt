#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_CLIPPER_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_CLIPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPointF;
class QRectF;
class QwtClipper;
class QwtInterval;
#else
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QwtClipper QwtClipper;
typedef struct QwtInterval QwtInterval;
#endif

struct miqt_array /* of QwtInterval* */  QwtClipper_clipCircle(QRectF* param1, QPointF* param2, double radius);

void QwtClipper_delete(QwtClipper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
