#ifndef GEN_QSLIDER_H
#define GEN_QSLIDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEvent;
class QMetaObject;
class QSize;
class QSlider;
class QWidget;
#else
typedef struct QEvent QEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QSlider QSlider;
typedef struct QWidget QWidget;
#endif

QSlider* QSlider_new();
QSlider* QSlider_new2(uintptr_t orientation);
QSlider* QSlider_new3(QWidget* parent);
QSlider* QSlider_new4(uintptr_t orientation, QWidget* parent);
QMetaObject* QSlider_MetaObject(const QSlider* self);
void QSlider_Tr(const char* s, char** _out, int* _out_Strlen);
void QSlider_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QSize* QSlider_SizeHint(const QSlider* self);
QSize* QSlider_MinimumSizeHint(const QSlider* self);
void QSlider_SetTickPosition(QSlider* self, uintptr_t position);
uintptr_t QSlider_TickPosition(const QSlider* self);
void QSlider_SetTickInterval(QSlider* self, int ti);
int QSlider_TickInterval(const QSlider* self);
bool QSlider_Event(QSlider* self, QEvent* event);
void QSlider_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QSlider_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QSlider_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QSlider_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QSlider_Delete(QSlider* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
