#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PAINTER_COMMAND_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PAINTER_COMMAND_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QFont;
class QImage;
class QMatrix;
class QPaintEngineState;
class QPainterPath;
class QPen;
class QPixmap;
class QPointF;
class QRectF;
class QRegion;
class QTransform;
class QwtPainterCommand;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QwtPainterCommand__ImageData)
typedef QwtPainterCommand::ImageData QwtPainterCommand__ImageData;
#else
class QwtPainterCommand__ImageData;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QwtPainterCommand__PixmapData)
typedef QwtPainterCommand::PixmapData QwtPainterCommand__PixmapData;
#else
class QwtPainterCommand__PixmapData;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QwtPainterCommand__StateData)
typedef QwtPainterCommand::StateData QwtPainterCommand__StateData;
#else
class QwtPainterCommand__StateData;
#endif
#else
typedef struct QBrush QBrush;
typedef struct QFont QFont;
typedef struct QImage QImage;
typedef struct QMatrix QMatrix;
typedef struct QPaintEngineState QPaintEngineState;
typedef struct QPainterPath QPainterPath;
typedef struct QPen QPen;
typedef struct QPixmap QPixmap;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
typedef struct QTransform QTransform;
typedef struct QwtPainterCommand QwtPainterCommand;
typedef struct QwtPainterCommand__ImageData QwtPainterCommand__ImageData;
typedef struct QwtPainterCommand__PixmapData QwtPainterCommand__PixmapData;
typedef struct QwtPainterCommand__StateData QwtPainterCommand__StateData;
#endif

QwtPainterCommand* QwtPainterCommand_new();
QwtPainterCommand* QwtPainterCommand_new2(QPainterPath* param1);
QwtPainterCommand* QwtPainterCommand_new3(QRectF* rect, QPixmap* param2, QRectF* subRect);
QwtPainterCommand* QwtPainterCommand_new4(QRectF* rect, QImage* param2, QRectF* subRect, int param4);
QwtPainterCommand* QwtPainterCommand_new5(QPaintEngineState* param1);
int QwtPainterCommand_type(const QwtPainterCommand* self);
QPainterPath* QwtPainterCommand_path(QwtPainterCommand* self);
QPainterPath* QwtPainterCommand_path2(const QwtPainterCommand* self);
QwtPainterCommand__PixmapData* QwtPainterCommand_pixmapData(QwtPainterCommand* self);
QwtPainterCommand__PixmapData* QwtPainterCommand_pixmapData2(const QwtPainterCommand* self);
QwtPainterCommand__ImageData* QwtPainterCommand_imageData(QwtPainterCommand* self);
QwtPainterCommand__ImageData* QwtPainterCommand_imageData2(const QwtPainterCommand* self);
QwtPainterCommand__StateData* QwtPainterCommand_stateData(QwtPainterCommand* self);
QwtPainterCommand__StateData* QwtPainterCommand_stateData2(const QwtPainterCommand* self);

void QwtPainterCommand_delete(QwtPainterCommand* self);

QwtPainterCommand__PixmapData* QwtPainterCommand__PixmapData_new(QwtPainterCommand__PixmapData* param1);
QRectF* QwtPainterCommand__PixmapData_rect(const QwtPainterCommand__PixmapData* self);
void QwtPainterCommand__PixmapData_setRect(QwtPainterCommand__PixmapData* self, QRectF* rect);
QPixmap* QwtPainterCommand__PixmapData_pixmap(const QwtPainterCommand__PixmapData* self);
void QwtPainterCommand__PixmapData_setPixmap(QwtPainterCommand__PixmapData* self, QPixmap* pixmap);
QRectF* QwtPainterCommand__PixmapData_subRect(const QwtPainterCommand__PixmapData* self);
void QwtPainterCommand__PixmapData_setSubRect(QwtPainterCommand__PixmapData* self, QRectF* subRect);
void QwtPainterCommand__PixmapData_operatorAssign(QwtPainterCommand__PixmapData* self, QwtPainterCommand__PixmapData* param1);

void QwtPainterCommand__PixmapData_delete(QwtPainterCommand__PixmapData* self);

QwtPainterCommand__ImageData* QwtPainterCommand__ImageData_new(QwtPainterCommand__ImageData* param1);
QRectF* QwtPainterCommand__ImageData_rect(const QwtPainterCommand__ImageData* self);
void QwtPainterCommand__ImageData_setRect(QwtPainterCommand__ImageData* self, QRectF* rect);
QImage* QwtPainterCommand__ImageData_image(const QwtPainterCommand__ImageData* self);
void QwtPainterCommand__ImageData_setImage(QwtPainterCommand__ImageData* self, QImage* image);
QRectF* QwtPainterCommand__ImageData_subRect(const QwtPainterCommand__ImageData* self);
void QwtPainterCommand__ImageData_setSubRect(QwtPainterCommand__ImageData* self, QRectF* subRect);
int QwtPainterCommand__ImageData_flags(const QwtPainterCommand__ImageData* self);
void QwtPainterCommand__ImageData_setFlags(QwtPainterCommand__ImageData* self, int flags);
void QwtPainterCommand__ImageData_operatorAssign(QwtPainterCommand__ImageData* self, QwtPainterCommand__ImageData* param1);

void QwtPainterCommand__ImageData_delete(QwtPainterCommand__ImageData* self);

QwtPainterCommand__StateData* QwtPainterCommand__StateData_new(QwtPainterCommand__StateData* param1);
int QwtPainterCommand__StateData_flags(const QwtPainterCommand__StateData* self);
void QwtPainterCommand__StateData_setFlags(QwtPainterCommand__StateData* self, int flags);
QPen* QwtPainterCommand__StateData_pen(const QwtPainterCommand__StateData* self);
void QwtPainterCommand__StateData_setPen(QwtPainterCommand__StateData* self, QPen* pen);
QBrush* QwtPainterCommand__StateData_brush(const QwtPainterCommand__StateData* self);
void QwtPainterCommand__StateData_setBrush(QwtPainterCommand__StateData* self, QBrush* brush);
QPointF* QwtPainterCommand__StateData_brushOrigin(const QwtPainterCommand__StateData* self);
void QwtPainterCommand__StateData_setBrushOrigin(QwtPainterCommand__StateData* self, QPointF* brushOrigin);
QBrush* QwtPainterCommand__StateData_backgroundBrush(const QwtPainterCommand__StateData* self);
void QwtPainterCommand__StateData_setBackgroundBrush(QwtPainterCommand__StateData* self, QBrush* backgroundBrush);
int QwtPainterCommand__StateData_backgroundMode(const QwtPainterCommand__StateData* self);
void QwtPainterCommand__StateData_setBackgroundMode(QwtPainterCommand__StateData* self, int backgroundMode);
QFont* QwtPainterCommand__StateData_font(const QwtPainterCommand__StateData* self);
void QwtPainterCommand__StateData_setFont(QwtPainterCommand__StateData* self, QFont* font);
QMatrix* QwtPainterCommand__StateData_matrix(const QwtPainterCommand__StateData* self);
void QwtPainterCommand__StateData_setMatrix(QwtPainterCommand__StateData* self, QMatrix* matrix);
QTransform* QwtPainterCommand__StateData_transform(const QwtPainterCommand__StateData* self);
void QwtPainterCommand__StateData_setTransform(QwtPainterCommand__StateData* self, QTransform* transform);
int QwtPainterCommand__StateData_clipOperation(const QwtPainterCommand__StateData* self);
void QwtPainterCommand__StateData_setClipOperation(QwtPainterCommand__StateData* self, int clipOperation);
QRegion* QwtPainterCommand__StateData_clipRegion(const QwtPainterCommand__StateData* self);
void QwtPainterCommand__StateData_setClipRegion(QwtPainterCommand__StateData* self, QRegion* clipRegion);
QPainterPath* QwtPainterCommand__StateData_clipPath(const QwtPainterCommand__StateData* self);
void QwtPainterCommand__StateData_setClipPath(QwtPainterCommand__StateData* self, QPainterPath* clipPath);
bool QwtPainterCommand__StateData_isClipEnabled(const QwtPainterCommand__StateData* self);
void QwtPainterCommand__StateData_setIsClipEnabled(QwtPainterCommand__StateData* self, bool isClipEnabled);
int QwtPainterCommand__StateData_renderHints(const QwtPainterCommand__StateData* self);
void QwtPainterCommand__StateData_setRenderHints(QwtPainterCommand__StateData* self, int renderHints);
int QwtPainterCommand__StateData_compositionMode(const QwtPainterCommand__StateData* self);
void QwtPainterCommand__StateData_setCompositionMode(QwtPainterCommand__StateData* self, int compositionMode);
double QwtPainterCommand__StateData_opacity(const QwtPainterCommand__StateData* self);
void QwtPainterCommand__StateData_setOpacity(QwtPainterCommand__StateData* self, double opacity);
void QwtPainterCommand__StateData_operatorAssign(QwtPainterCommand__StateData* self, QwtPainterCommand__StateData* param1);

void QwtPainterCommand__StateData_delete(QwtPainterCommand__StateData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
