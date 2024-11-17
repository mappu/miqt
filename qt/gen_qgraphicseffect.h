#pragma once
#ifndef MIQT_QT_GEN_QGRAPHICSEFFECT_H
#define MIQT_QT_GEN_QGRAPHICSEFFECT_H

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
class QGraphicsBlurEffect;
class QGraphicsColorizeEffect;
class QGraphicsDropShadowEffect;
class QGraphicsEffect;
class QGraphicsOpacityEffect;
class QMetaObject;
class QObject;
class QPointF;
class QRectF;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QGraphicsBlurEffect QGraphicsBlurEffect;
typedef struct QGraphicsColorizeEffect QGraphicsColorizeEffect;
typedef struct QGraphicsDropShadowEffect QGraphicsDropShadowEffect;
typedef struct QGraphicsEffect QGraphicsEffect;
typedef struct QGraphicsOpacityEffect QGraphicsOpacityEffect;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
#endif

QMetaObject* QGraphicsEffect_MetaObject(const QGraphicsEffect* self);
void* QGraphicsEffect_Metacast(QGraphicsEffect* self, const char* param1);
struct miqt_string QGraphicsEffect_Tr(const char* s);
struct miqt_string QGraphicsEffect_TrUtf8(const char* s);
QRectF* QGraphicsEffect_BoundingRectFor(const QGraphicsEffect* self, QRectF* sourceRect);
QRectF* QGraphicsEffect_BoundingRect(const QGraphicsEffect* self);
bool QGraphicsEffect_IsEnabled(const QGraphicsEffect* self);
void QGraphicsEffect_SetEnabled(QGraphicsEffect* self, bool enable);
void QGraphicsEffect_Update(QGraphicsEffect* self);
void QGraphicsEffect_EnabledChanged(QGraphicsEffect* self, bool enabled);
void QGraphicsEffect_connect_EnabledChanged(QGraphicsEffect* self, intptr_t slot);
struct miqt_string QGraphicsEffect_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsEffect_Tr3(const char* s, const char* c, int n);
struct miqt_string QGraphicsEffect_TrUtf82(const char* s, const char* c);
struct miqt_string QGraphicsEffect_TrUtf83(const char* s, const char* c, int n);
void QGraphicsEffect_Delete(QGraphicsEffect* self);

QGraphicsColorizeEffect* QGraphicsColorizeEffect_new();
QGraphicsColorizeEffect* QGraphicsColorizeEffect_new2(QObject* parent);
QMetaObject* QGraphicsColorizeEffect_MetaObject(const QGraphicsColorizeEffect* self);
void* QGraphicsColorizeEffect_Metacast(QGraphicsColorizeEffect* self, const char* param1);
struct miqt_string QGraphicsColorizeEffect_Tr(const char* s);
struct miqt_string QGraphicsColorizeEffect_TrUtf8(const char* s);
QColor* QGraphicsColorizeEffect_Color(const QGraphicsColorizeEffect* self);
double QGraphicsColorizeEffect_Strength(const QGraphicsColorizeEffect* self);
void QGraphicsColorizeEffect_SetColor(QGraphicsColorizeEffect* self, QColor* c);
void QGraphicsColorizeEffect_SetStrength(QGraphicsColorizeEffect* self, double strength);
void QGraphicsColorizeEffect_ColorChanged(QGraphicsColorizeEffect* self, QColor* color);
void QGraphicsColorizeEffect_connect_ColorChanged(QGraphicsColorizeEffect* self, intptr_t slot);
void QGraphicsColorizeEffect_StrengthChanged(QGraphicsColorizeEffect* self, double strength);
void QGraphicsColorizeEffect_connect_StrengthChanged(QGraphicsColorizeEffect* self, intptr_t slot);
struct miqt_string QGraphicsColorizeEffect_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsColorizeEffect_Tr3(const char* s, const char* c, int n);
struct miqt_string QGraphicsColorizeEffect_TrUtf82(const char* s, const char* c);
struct miqt_string QGraphicsColorizeEffect_TrUtf83(const char* s, const char* c, int n);
void QGraphicsColorizeEffect_Delete(QGraphicsColorizeEffect* self);

QGraphicsBlurEffect* QGraphicsBlurEffect_new();
QGraphicsBlurEffect* QGraphicsBlurEffect_new2(QObject* parent);
QMetaObject* QGraphicsBlurEffect_MetaObject(const QGraphicsBlurEffect* self);
void* QGraphicsBlurEffect_Metacast(QGraphicsBlurEffect* self, const char* param1);
struct miqt_string QGraphicsBlurEffect_Tr(const char* s);
struct miqt_string QGraphicsBlurEffect_TrUtf8(const char* s);
QRectF* QGraphicsBlurEffect_BoundingRectFor(const QGraphicsBlurEffect* self, QRectF* rect);
double QGraphicsBlurEffect_BlurRadius(const QGraphicsBlurEffect* self);
int QGraphicsBlurEffect_BlurHints(const QGraphicsBlurEffect* self);
void QGraphicsBlurEffect_SetBlurRadius(QGraphicsBlurEffect* self, double blurRadius);
void QGraphicsBlurEffect_SetBlurHints(QGraphicsBlurEffect* self, int hints);
void QGraphicsBlurEffect_BlurRadiusChanged(QGraphicsBlurEffect* self, double blurRadius);
void QGraphicsBlurEffect_connect_BlurRadiusChanged(QGraphicsBlurEffect* self, intptr_t slot);
void QGraphicsBlurEffect_BlurHintsChanged(QGraphicsBlurEffect* self, int hints);
void QGraphicsBlurEffect_connect_BlurHintsChanged(QGraphicsBlurEffect* self, intptr_t slot);
struct miqt_string QGraphicsBlurEffect_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsBlurEffect_Tr3(const char* s, const char* c, int n);
struct miqt_string QGraphicsBlurEffect_TrUtf82(const char* s, const char* c);
struct miqt_string QGraphicsBlurEffect_TrUtf83(const char* s, const char* c, int n);
void QGraphicsBlurEffect_Delete(QGraphicsBlurEffect* self);

QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new();
QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new2(QObject* parent);
QMetaObject* QGraphicsDropShadowEffect_MetaObject(const QGraphicsDropShadowEffect* self);
void* QGraphicsDropShadowEffect_Metacast(QGraphicsDropShadowEffect* self, const char* param1);
struct miqt_string QGraphicsDropShadowEffect_Tr(const char* s);
struct miqt_string QGraphicsDropShadowEffect_TrUtf8(const char* s);
QRectF* QGraphicsDropShadowEffect_BoundingRectFor(const QGraphicsDropShadowEffect* self, QRectF* rect);
QPointF* QGraphicsDropShadowEffect_Offset(const QGraphicsDropShadowEffect* self);
double QGraphicsDropShadowEffect_XOffset(const QGraphicsDropShadowEffect* self);
double QGraphicsDropShadowEffect_YOffset(const QGraphicsDropShadowEffect* self);
double QGraphicsDropShadowEffect_BlurRadius(const QGraphicsDropShadowEffect* self);
QColor* QGraphicsDropShadowEffect_Color(const QGraphicsDropShadowEffect* self);
void QGraphicsDropShadowEffect_SetOffset(QGraphicsDropShadowEffect* self, QPointF* ofs);
void QGraphicsDropShadowEffect_SetOffset2(QGraphicsDropShadowEffect* self, double dx, double dy);
void QGraphicsDropShadowEffect_SetOffsetWithQreal(QGraphicsDropShadowEffect* self, double d);
void QGraphicsDropShadowEffect_SetXOffset(QGraphicsDropShadowEffect* self, double dx);
void QGraphicsDropShadowEffect_SetYOffset(QGraphicsDropShadowEffect* self, double dy);
void QGraphicsDropShadowEffect_SetBlurRadius(QGraphicsDropShadowEffect* self, double blurRadius);
void QGraphicsDropShadowEffect_SetColor(QGraphicsDropShadowEffect* self, QColor* color);
void QGraphicsDropShadowEffect_OffsetChanged(QGraphicsDropShadowEffect* self, QPointF* offset);
void QGraphicsDropShadowEffect_connect_OffsetChanged(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_BlurRadiusChanged(QGraphicsDropShadowEffect* self, double blurRadius);
void QGraphicsDropShadowEffect_connect_BlurRadiusChanged(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_ColorChanged(QGraphicsDropShadowEffect* self, QColor* color);
void QGraphicsDropShadowEffect_connect_ColorChanged(QGraphicsDropShadowEffect* self, intptr_t slot);
struct miqt_string QGraphicsDropShadowEffect_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsDropShadowEffect_Tr3(const char* s, const char* c, int n);
struct miqt_string QGraphicsDropShadowEffect_TrUtf82(const char* s, const char* c);
struct miqt_string QGraphicsDropShadowEffect_TrUtf83(const char* s, const char* c, int n);
void QGraphicsDropShadowEffect_Delete(QGraphicsDropShadowEffect* self);

QGraphicsOpacityEffect* QGraphicsOpacityEffect_new();
QGraphicsOpacityEffect* QGraphicsOpacityEffect_new2(QObject* parent);
QMetaObject* QGraphicsOpacityEffect_MetaObject(const QGraphicsOpacityEffect* self);
void* QGraphicsOpacityEffect_Metacast(QGraphicsOpacityEffect* self, const char* param1);
struct miqt_string QGraphicsOpacityEffect_Tr(const char* s);
struct miqt_string QGraphicsOpacityEffect_TrUtf8(const char* s);
double QGraphicsOpacityEffect_Opacity(const QGraphicsOpacityEffect* self);
QBrush* QGraphicsOpacityEffect_OpacityMask(const QGraphicsOpacityEffect* self);
void QGraphicsOpacityEffect_SetOpacity(QGraphicsOpacityEffect* self, double opacity);
void QGraphicsOpacityEffect_SetOpacityMask(QGraphicsOpacityEffect* self, QBrush* mask);
void QGraphicsOpacityEffect_OpacityChanged(QGraphicsOpacityEffect* self, double opacity);
void QGraphicsOpacityEffect_connect_OpacityChanged(QGraphicsOpacityEffect* self, intptr_t slot);
void QGraphicsOpacityEffect_OpacityMaskChanged(QGraphicsOpacityEffect* self, QBrush* mask);
void QGraphicsOpacityEffect_connect_OpacityMaskChanged(QGraphicsOpacityEffect* self, intptr_t slot);
struct miqt_string QGraphicsOpacityEffect_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsOpacityEffect_Tr3(const char* s, const char* c, int n);
struct miqt_string QGraphicsOpacityEffect_TrUtf82(const char* s, const char* c);
struct miqt_string QGraphicsOpacityEffect_TrUtf83(const char* s, const char* c, int n);
void QGraphicsOpacityEffect_Delete(QGraphicsOpacityEffect* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
