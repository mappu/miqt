#pragma once
#ifndef MIQT_QT_PDF_GEN_QPDFSEARCHRESULT_H
#define MIQT_QT_PDF_GEN_QPDFSEARCHRESULT_H

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
class QPdfSearchResult;
class QRectF;
#else
typedef struct QPdfDestination QPdfDestination;
typedef struct QPdfSearchResult QPdfSearchResult;
typedef struct QRectF QRectF;
#endif

QPdfSearchResult* QPdfSearchResult_new();
QPdfSearchResult* QPdfSearchResult_new2(QPdfSearchResult* param1);
void QPdfSearchResult_virtbase(QPdfSearchResult* src, QPdfDestination** outptr_QPdfDestination);
struct miqt_string QPdfSearchResult_contextBefore(const QPdfSearchResult* self);
struct miqt_string QPdfSearchResult_contextAfter(const QPdfSearchResult* self);
struct miqt_array /* of QRectF* */  QPdfSearchResult_rectangles(const QPdfSearchResult* self);
void QPdfSearchResult_operatorAssign(QPdfSearchResult* self, QPdfSearchResult* param1);

void QPdfSearchResult_delete(QPdfSearchResult* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
