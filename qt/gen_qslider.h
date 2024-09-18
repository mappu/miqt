#ifndef GEN_QSLIDER_H
#define GEN_QSLIDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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
QSlider* QSlider_new2(int orientation);
QSlider* QSlider_new3(QWidget* parent);
QSlider* QSlider_new4(int orientation, QWidget* parent);
QMetaObject* QSlider_MetaObject(const QSlider* self);
struct miqt_string* QSlider_Tr(const char* s);
struct miqt_string* QSlider_TrUtf8(const char* s);
QSize* QSlider_SizeHint(const QSlider* self);
QSize* QSlider_MinimumSizeHint(const QSlider* self);
void QSlider_SetTickPosition(QSlider* self, int position);
int QSlider_TickPosition(const QSlider* self);
void QSlider_SetTickInterval(QSlider* self, int ti);
int QSlider_TickInterval(const QSlider* self);
bool QSlider_Event(QSlider* self, QEvent* event);
struct miqt_string* QSlider_Tr2(const char* s, const char* c);
struct miqt_string* QSlider_Tr3(const char* s, const char* c, int n);
struct miqt_string* QSlider_TrUtf82(const char* s, const char* c);
struct miqt_string* QSlider_TrUtf83(const char* s, const char* c, int n);
void QSlider_Delete(QSlider* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
