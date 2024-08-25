#ifndef GEN_QSCROLLER_H
#define GEN_QSCROLLER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QPointF;
class QRectF;
class QScroller;
class QScrollerProperties;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QScroller QScroller;
typedef struct QScrollerProperties QScrollerProperties;
#endif

QMetaObject* QScroller_MetaObject(QScroller* self);
void QScroller_Tr(char* s, char** _out, int* _out_Strlen);
void QScroller_TrUtf8(char* s, char** _out, int* _out_Strlen);
bool QScroller_HasScroller(QObject* target);
QScroller* QScroller_Scroller(QObject* target);
QScroller* QScroller_ScrollerWithTarget(QObject* target);
void QScroller_UngrabGesture(QObject* target);
void QScroller_ActiveScrollers(QScroller*** _out, size_t* _out_len);
QObject* QScroller_Target(QScroller* self);
void QScroller_Stop(QScroller* self);
QPointF* QScroller_Velocity(QScroller* self);
QPointF* QScroller_FinalPosition(QScroller* self);
QPointF* QScroller_PixelPerMeter(QScroller* self);
QScrollerProperties* QScroller_ScrollerProperties(QScroller* self);
void QScroller_SetSnapPositionsX(QScroller* self, double* positions, size_t positions_len);
void QScroller_SetSnapPositionsX2(QScroller* self, double first, double interval);
void QScroller_SetSnapPositionsY(QScroller* self, double* positions, size_t positions_len);
void QScroller_SetSnapPositionsY2(QScroller* self, double first, double interval);
void QScroller_SetScrollerProperties(QScroller* self, QScrollerProperties* prop);
void QScroller_ScrollTo(QScroller* self, QPointF* pos);
void QScroller_ScrollTo2(QScroller* self, QPointF* pos, int scrollTime);
void QScroller_EnsureVisible(QScroller* self, QRectF* rect, double xmargin, double ymargin);
void QScroller_EnsureVisible2(QScroller* self, QRectF* rect, double xmargin, double ymargin, int scrollTime);
void QScroller_ResendPrepareEvent(QScroller* self);
void QScroller_ScrollerPropertiesChanged(QScroller* self, QScrollerProperties* param1);
void QScroller_connect_ScrollerPropertiesChanged(QScroller* self, void* slot);
void QScroller_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QScroller_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QScroller_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QScroller_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
