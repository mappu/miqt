#ifndef GEN_QSCROLLBAR_H
#define GEN_QSCROLLBAR_H

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

QScrollBar* QScrollBar_new();
QScrollBar* QScrollBar_new2(QWidget* parent);
QMetaObject* QScrollBar_MetaObject(QScrollBar* self);
void QScrollBar_Tr(char* s, char** _out, int* _out_Strlen);
void QScrollBar_TrUtf8(char* s, char** _out, int* _out_Strlen);
QSize* QScrollBar_SizeHint(QScrollBar* self);
bool QScrollBar_Event(QScrollBar* self, QEvent* event);
void QScrollBar_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QScrollBar_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QScrollBar_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QScrollBar_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QScrollBar_Delete(QScrollBar* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
