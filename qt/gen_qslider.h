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
QSlider* QSlider_new2(QWidget* parent);
QMetaObject* QSlider_MetaObject(QSlider* self);
void QSlider_Tr(char* s, char** _out, int* _out_Strlen);
void QSlider_TrUtf8(char* s, char** _out, int* _out_Strlen);
QSize* QSlider_SizeHint(QSlider* self);
QSize* QSlider_MinimumSizeHint(QSlider* self);
void QSlider_SetTickInterval(QSlider* self, int ti);
int QSlider_TickInterval(QSlider* self);
bool QSlider_Event(QSlider* self, QEvent* event);
void QSlider_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QSlider_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSlider_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QSlider_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSlider_Delete(QSlider* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
