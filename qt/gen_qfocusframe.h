#ifndef GEN_QFOCUSFRAME_H
#define GEN_QFOCUSFRAME_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFocusFrame;
class QMetaObject;
class QWidget;
#else
typedef struct QFocusFrame QFocusFrame;
typedef struct QMetaObject QMetaObject;
typedef struct QWidget QWidget;
#endif

QFocusFrame* QFocusFrame_new(QWidget* parent);
QFocusFrame* QFocusFrame_new2();
QMetaObject* QFocusFrame_MetaObject(const QFocusFrame* self);
void* QFocusFrame_Metacast(QFocusFrame* self, const char* param1);
struct miqt_string QFocusFrame_Tr(const char* s);
struct miqt_string QFocusFrame_TrUtf8(const char* s);
void QFocusFrame_SetWidget(QFocusFrame* self, QWidget* widget);
QWidget* QFocusFrame_Widget(const QFocusFrame* self);
struct miqt_string QFocusFrame_Tr2(const char* s, const char* c);
struct miqt_string QFocusFrame_Tr3(const char* s, const char* c, int n);
struct miqt_string QFocusFrame_TrUtf82(const char* s, const char* c);
struct miqt_string QFocusFrame_TrUtf83(const char* s, const char* c, int n);
void QFocusFrame_Delete(QFocusFrame* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
