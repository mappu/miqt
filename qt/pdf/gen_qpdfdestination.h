#pragma once
#ifndef MIQT_QT_PDF_GEN_QPDFDESTINATION_H
#define MIQT_QT_PDF_GEN_QPDFDESTINATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPdfDestination;
class QPointF;
#else
typedef struct QPdfDestination QPdfDestination;
typedef struct QPointF QPointF;
#endif

QPdfDestination* QPdfDestination_new(QPdfDestination* other);
void QPdfDestination_operatorAssign(QPdfDestination* self, QPdfDestination* other);
void QPdfDestination_swap(QPdfDestination* self, QPdfDestination* other);
bool QPdfDestination_isValid(const QPdfDestination* self);
int QPdfDestination_page(const QPdfDestination* self);
QPointF* QPdfDestination_location(const QPdfDestination* self);
double QPdfDestination_zoom(const QPdfDestination* self);
void QPdfDestination_delete(QPdfDestination* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
