#pragma once
#ifndef MIQT_QT6_PDF_GEN_QPDFLINK_H
#define MIQT_QT6_PDF_GEN_QPDFLINK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPdfLink;
class QPointF;
class QRectF;
class QUrl;
#else
typedef struct QPdfLink QPdfLink;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QUrl QUrl;
#endif

QPdfLink* QPdfLink_new();
QPdfLink* QPdfLink_new2(QPdfLink* other);
void QPdfLink_operatorAssign(QPdfLink* self, QPdfLink* other);
void QPdfLink_swap(QPdfLink* self, QPdfLink* other);
bool QPdfLink_isValid(const QPdfLink* self);
int QPdfLink_page(const QPdfLink* self);
QPointF* QPdfLink_location(const QPdfLink* self);
double QPdfLink_zoom(const QPdfLink* self);
QUrl* QPdfLink_url(const QPdfLink* self);
struct miqt_string QPdfLink_contextBefore(const QPdfLink* self);
struct miqt_string QPdfLink_contextAfter(const QPdfLink* self);
struct miqt_array /* of QRectF* */  QPdfLink_rectangles(const QPdfLink* self);
struct miqt_string QPdfLink_toString(const QPdfLink* self);
void QPdfLink_copyToClipboard(const QPdfLink* self);
void QPdfLink_copyToClipboardWithMode(const QPdfLink* self, int mode);

void QPdfLink_delete(QPdfLink* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
