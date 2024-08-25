#ifndef GEN_QGRAPHICSEFFECT_H
#define GEN_QGRAPHICSEFFECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

QMetaObject* QGraphicsEffect_MetaObject(QGraphicsEffect* self);
void QGraphicsEffect_Tr(char* s, char** _out, int* _out_Strlen);
void QGraphicsEffect_TrUtf8(char* s, char** _out, int* _out_Strlen);
QRectF* QGraphicsEffect_BoundingRectFor(QGraphicsEffect* self, QRectF* sourceRect);
QRectF* QGraphicsEffect_BoundingRect(QGraphicsEffect* self);
bool QGraphicsEffect_IsEnabled(QGraphicsEffect* self);
void QGraphicsEffect_SetEnabled(QGraphicsEffect* self, bool enable);
void QGraphicsEffect_Update(QGraphicsEffect* self);
void QGraphicsEffect_EnabledChanged(QGraphicsEffect* self, bool enabled);
void QGraphicsEffect_connect_EnabledChanged(QGraphicsEffect* self, void* slot);
void QGraphicsEffect_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QGraphicsEffect_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsEffect_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QGraphicsEffect_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsEffect_Delete(QGraphicsEffect* self);

QGraphicsColorizeEffect* QGraphicsColorizeEffect_new();
QGraphicsColorizeEffect* QGraphicsColorizeEffect_new2(QObject* parent);
QMetaObject* QGraphicsColorizeEffect_MetaObject(QGraphicsColorizeEffect* self);
void QGraphicsColorizeEffect_Tr(char* s, char** _out, int* _out_Strlen);
void QGraphicsColorizeEffect_TrUtf8(char* s, char** _out, int* _out_Strlen);
QColor* QGraphicsColorizeEffect_Color(QGraphicsColorizeEffect* self);
double QGraphicsColorizeEffect_Strength(QGraphicsColorizeEffect* self);
void QGraphicsColorizeEffect_SetColor(QGraphicsColorizeEffect* self, QColor* c);
void QGraphicsColorizeEffect_SetStrength(QGraphicsColorizeEffect* self, double strength);
void QGraphicsColorizeEffect_ColorChanged(QGraphicsColorizeEffect* self, QColor* color);
void QGraphicsColorizeEffect_connect_ColorChanged(QGraphicsColorizeEffect* self, void* slot);
void QGraphicsColorizeEffect_StrengthChanged(QGraphicsColorizeEffect* self, double strength);
void QGraphicsColorizeEffect_connect_StrengthChanged(QGraphicsColorizeEffect* self, void* slot);
void QGraphicsColorizeEffect_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QGraphicsColorizeEffect_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsColorizeEffect_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QGraphicsColorizeEffect_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsColorizeEffect_Delete(QGraphicsColorizeEffect* self);

QGraphicsBlurEffect* QGraphicsBlurEffect_new();
QGraphicsBlurEffect* QGraphicsBlurEffect_new2(QObject* parent);
QMetaObject* QGraphicsBlurEffect_MetaObject(QGraphicsBlurEffect* self);
void QGraphicsBlurEffect_Tr(char* s, char** _out, int* _out_Strlen);
void QGraphicsBlurEffect_TrUtf8(char* s, char** _out, int* _out_Strlen);
QRectF* QGraphicsBlurEffect_BoundingRectFor(QGraphicsBlurEffect* self, QRectF* rect);
double QGraphicsBlurEffect_BlurRadius(QGraphicsBlurEffect* self);
void QGraphicsBlurEffect_SetBlurRadius(QGraphicsBlurEffect* self, double blurRadius);
void QGraphicsBlurEffect_BlurRadiusChanged(QGraphicsBlurEffect* self, double blurRadius);
void QGraphicsBlurEffect_connect_BlurRadiusChanged(QGraphicsBlurEffect* self, void* slot);
void QGraphicsBlurEffect_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QGraphicsBlurEffect_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsBlurEffect_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QGraphicsBlurEffect_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsBlurEffect_Delete(QGraphicsBlurEffect* self);

QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new();
QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new2(QObject* parent);
QMetaObject* QGraphicsDropShadowEffect_MetaObject(QGraphicsDropShadowEffect* self);
void QGraphicsDropShadowEffect_Tr(char* s, char** _out, int* _out_Strlen);
void QGraphicsDropShadowEffect_TrUtf8(char* s, char** _out, int* _out_Strlen);
QRectF* QGraphicsDropShadowEffect_BoundingRectFor(QGraphicsDropShadowEffect* self, QRectF* rect);
QPointF* QGraphicsDropShadowEffect_Offset(QGraphicsDropShadowEffect* self);
double QGraphicsDropShadowEffect_XOffset(QGraphicsDropShadowEffect* self);
double QGraphicsDropShadowEffect_YOffset(QGraphicsDropShadowEffect* self);
double QGraphicsDropShadowEffect_BlurRadius(QGraphicsDropShadowEffect* self);
QColor* QGraphicsDropShadowEffect_Color(QGraphicsDropShadowEffect* self);
void QGraphicsDropShadowEffect_SetOffset(QGraphicsDropShadowEffect* self, QPointF* ofs);
void QGraphicsDropShadowEffect_SetOffset2(QGraphicsDropShadowEffect* self, double dx, double dy);
void QGraphicsDropShadowEffect_SetOffsetWithQreal(QGraphicsDropShadowEffect* self, double d);
void QGraphicsDropShadowEffect_SetXOffset(QGraphicsDropShadowEffect* self, double dx);
void QGraphicsDropShadowEffect_SetYOffset(QGraphicsDropShadowEffect* self, double dy);
void QGraphicsDropShadowEffect_SetBlurRadius(QGraphicsDropShadowEffect* self, double blurRadius);
void QGraphicsDropShadowEffect_SetColor(QGraphicsDropShadowEffect* self, QColor* color);
void QGraphicsDropShadowEffect_OffsetChanged(QGraphicsDropShadowEffect* self, QPointF* offset);
void QGraphicsDropShadowEffect_connect_OffsetChanged(QGraphicsDropShadowEffect* self, void* slot);
void QGraphicsDropShadowEffect_BlurRadiusChanged(QGraphicsDropShadowEffect* self, double blurRadius);
void QGraphicsDropShadowEffect_connect_BlurRadiusChanged(QGraphicsDropShadowEffect* self, void* slot);
void QGraphicsDropShadowEffect_ColorChanged(QGraphicsDropShadowEffect* self, QColor* color);
void QGraphicsDropShadowEffect_connect_ColorChanged(QGraphicsDropShadowEffect* self, void* slot);
void QGraphicsDropShadowEffect_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QGraphicsDropShadowEffect_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsDropShadowEffect_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QGraphicsDropShadowEffect_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsDropShadowEffect_Delete(QGraphicsDropShadowEffect* self);

QGraphicsOpacityEffect* QGraphicsOpacityEffect_new();
QGraphicsOpacityEffect* QGraphicsOpacityEffect_new2(QObject* parent);
QMetaObject* QGraphicsOpacityEffect_MetaObject(QGraphicsOpacityEffect* self);
void QGraphicsOpacityEffect_Tr(char* s, char** _out, int* _out_Strlen);
void QGraphicsOpacityEffect_TrUtf8(char* s, char** _out, int* _out_Strlen);
double QGraphicsOpacityEffect_Opacity(QGraphicsOpacityEffect* self);
QBrush* QGraphicsOpacityEffect_OpacityMask(QGraphicsOpacityEffect* self);
void QGraphicsOpacityEffect_SetOpacity(QGraphicsOpacityEffect* self, double opacity);
void QGraphicsOpacityEffect_SetOpacityMask(QGraphicsOpacityEffect* self, QBrush* mask);
void QGraphicsOpacityEffect_OpacityChanged(QGraphicsOpacityEffect* self, double opacity);
void QGraphicsOpacityEffect_connect_OpacityChanged(QGraphicsOpacityEffect* self, void* slot);
void QGraphicsOpacityEffect_OpacityMaskChanged(QGraphicsOpacityEffect* self, QBrush* mask);
void QGraphicsOpacityEffect_connect_OpacityMaskChanged(QGraphicsOpacityEffect* self, void* slot);
void QGraphicsOpacityEffect_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QGraphicsOpacityEffect_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsOpacityEffect_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QGraphicsOpacityEffect_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsOpacityEffect_Delete(QGraphicsOpacityEffect* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
