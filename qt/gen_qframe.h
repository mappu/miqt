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
#else
typedef struct QFrame QFrame;
typedef struct QMetaObject QMetaObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
#endif

QMetaObject* QFrame_MetaObject(QFrame* self);
void QFrame_Tr(char* s, char** _out, int* _out_Strlen);
void QFrame_TrUtf8(char* s, char** _out, int* _out_Strlen);
int QFrame_FrameStyle(QFrame* self);
void QFrame_SetFrameStyle(QFrame* self, int frameStyle);
int QFrame_FrameWidth(QFrame* self);
QSize* QFrame_SizeHint(QFrame* self);
int QFrame_LineWidth(QFrame* self);
void QFrame_SetLineWidth(QFrame* self, int lineWidth);
int QFrame_MidLineWidth(QFrame* self);
void QFrame_SetMidLineWidth(QFrame* self, int midLineWidth);
QRect* QFrame_FrameRect(QFrame* self);
void QFrame_SetFrameRect(QFrame* self, QRect* frameRect);
void QFrame_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QFrame_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QFrame_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QFrame_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QFrame_Delete(QFrame* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
