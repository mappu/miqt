#pragma once
#ifndef MIQT_QT6_GEN_QPEN_H
#define MIQT_QT6_GEN_QPEN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QColor;
class QPen;
class QVariant;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QPen QPen;
typedef struct QVariant QVariant;
#endif

QPen* QPen_new();
QPen* QPen_new2(int param1);
QPen* QPen_new3(QColor* color);
QPen* QPen_new4(QBrush* brush, double width);
QPen* QPen_new5(QPen* pen);
QPen* QPen_new6(QBrush* brush, double width, int s);
QPen* QPen_new7(QBrush* brush, double width, int s, int c);
QPen* QPen_new8(QBrush* brush, double width, int s, int c, int j);
void QPen_operatorAssign(QPen* self, QPen* pen);
void QPen_swap(QPen* self, QPen* other);
int QPen_style(const QPen* self);
void QPen_setStyle(QPen* self, int style);
struct miqt_array /* of double */  QPen_dashPattern(const QPen* self);
void QPen_setDashPattern(QPen* self, struct miqt_array /* of double */  pattern);
double QPen_dashOffset(const QPen* self);
void QPen_setDashOffset(QPen* self, double doffset);
double QPen_miterLimit(const QPen* self);
void QPen_setMiterLimit(QPen* self, double limit);
double QPen_widthF(const QPen* self);
void QPen_setWidthF(QPen* self, double width);
int QPen_width(const QPen* self);
void QPen_setWidth(QPen* self, int width);
QColor* QPen_color(const QPen* self);
void QPen_setColor(QPen* self, QColor* color);
QBrush* QPen_brush(const QPen* self);
void QPen_setBrush(QPen* self, QBrush* brush);
bool QPen_isSolid(const QPen* self);
int QPen_capStyle(const QPen* self);
void QPen_setCapStyle(QPen* self, int pcs);
int QPen_joinStyle(const QPen* self);
void QPen_setJoinStyle(QPen* self, int pcs);
bool QPen_isCosmetic(const QPen* self);
void QPen_setCosmetic(QPen* self, bool cosmetic);
bool QPen_operatorEqual(const QPen* self, QPen* p);
bool QPen_operatorNotEqual(const QPen* self, QPen* p);
QVariant* QPen_ToQVariant(const QPen* self);
bool QPen_isDetached(QPen* self);

void QPen_delete(QPen* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
