#ifndef GEN_QFRAME_H
#define GEN_QFRAME_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QMetaObject* QFrame_MetaObject(QFrame* self);
void QFrame_Tr(const char* s, char** _out, int* _out_Strlen);
void QFrame_TrUtf8(const char* s, char** _out, int* _out_Strlen);
int QFrame_FrameStyle(QFrame* self);
void QFrame_SetFrameStyle(QFrame* self, int frameStyle);
int QFrame_FrameWidth(QFrame* self);
QSize* QFrame_SizeHint(QFrame* self);
uintptr_t QFrame_FrameShape(QFrame* self);
void QFrame_SetFrameShape(QFrame* self, uintptr_t frameShape);
uintptr_t QFrame_FrameShadow(QFrame* self);
void QFrame_SetFrameShadow(QFrame* self, uintptr_t frameShadow);
int QFrame_LineWidth(QFrame* self);
void QFrame_SetLineWidth(QFrame* self, int lineWidth);
int QFrame_MidLineWidth(QFrame* self);
void QFrame_SetMidLineWidth(QFrame* self, int midLineWidth);
QRect* QFrame_FrameRect(QFrame* self);
void QFrame_SetFrameRect(QFrame* self, QRect* frameRect);
void QFrame_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QFrame_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QFrame_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QFrame_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QFrame_Delete(QFrame* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
