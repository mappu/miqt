#ifndef GEN_QFRAME_H
#define GEN_QFRAME_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFrame;
class QMetaObject;
class QRect;
class QSize;
class QWidget;
#else
typedef struct QFrame QFrame;
typedef struct QMetaObject QMetaObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QFrame* QFrame_new();
QFrame* QFrame_new2(QWidget* parent);
QFrame* QFrame_new3(QWidget* parent, int f);
QMetaObject* QFrame_MetaObject(const QFrame* self);
void* QFrame_Metacast(QFrame* self, const char* param1);
struct miqt_string* QFrame_Tr(const char* s);
struct miqt_string* QFrame_TrUtf8(const char* s);
int QFrame_FrameStyle(const QFrame* self);
void QFrame_SetFrameStyle(QFrame* self, int frameStyle);
int QFrame_FrameWidth(const QFrame* self);
QSize* QFrame_SizeHint(const QFrame* self);
int QFrame_FrameShape(const QFrame* self);
void QFrame_SetFrameShape(QFrame* self, int frameShape);
int QFrame_FrameShadow(const QFrame* self);
void QFrame_SetFrameShadow(QFrame* self, int frameShadow);
int QFrame_LineWidth(const QFrame* self);
void QFrame_SetLineWidth(QFrame* self, int lineWidth);
int QFrame_MidLineWidth(const QFrame* self);
void QFrame_SetMidLineWidth(QFrame* self, int midLineWidth);
QRect* QFrame_FrameRect(const QFrame* self);
void QFrame_SetFrameRect(QFrame* self, QRect* frameRect);
struct miqt_string* QFrame_Tr2(const char* s, const char* c);
struct miqt_string* QFrame_Tr3(const char* s, const char* c, int n);
struct miqt_string* QFrame_TrUtf82(const char* s, const char* c);
struct miqt_string* QFrame_TrUtf83(const char* s, const char* c, int n);
void QFrame_Delete(QFrame* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
