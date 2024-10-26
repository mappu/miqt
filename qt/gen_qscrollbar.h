#ifndef GEN_QSCROLLBAR_H
#define GEN_QSCROLLBAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEvent;
class QMetaObject;
class QScrollBar;
class QSize;
class QWidget;
#else
typedef struct QEvent QEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QScrollBar QScrollBar;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QScrollBar* QScrollBar_new(QWidget* parent);
QScrollBar* QScrollBar_new2();
QScrollBar* QScrollBar_new3(int param1);
QScrollBar* QScrollBar_new4(int param1, QWidget* parent);
QMetaObject* QScrollBar_MetaObject(const QScrollBar* self);
void* QScrollBar_Metacast(QScrollBar* self, const char* param1);
struct miqt_string QScrollBar_Tr(const char* s);
struct miqt_string QScrollBar_TrUtf8(const char* s);
QSize* QScrollBar_SizeHint(const QScrollBar* self);
bool QScrollBar_Event(QScrollBar* self, QEvent* event);
struct miqt_string QScrollBar_Tr2(const char* s, const char* c);
struct miqt_string QScrollBar_Tr3(const char* s, const char* c, int n);
struct miqt_string QScrollBar_TrUtf82(const char* s, const char* c);
struct miqt_string QScrollBar_TrUtf83(const char* s, const char* c, int n);
void QScrollBar_Delete(QScrollBar* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
