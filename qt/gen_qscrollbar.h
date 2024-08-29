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
QScrollBar* QScrollBar_new2(uintptr_t param1);
QScrollBar* QScrollBar_new3(QWidget* parent);
QScrollBar* QScrollBar_new4(uintptr_t param1, QWidget* parent);
QMetaObject* QScrollBar_MetaObject(QScrollBar* self);
void QScrollBar_Tr(const char* s, char** _out, int* _out_Strlen);
void QScrollBar_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QSize* QScrollBar_SizeHint(QScrollBar* self);
bool QScrollBar_Event(QScrollBar* self, QEvent* event);
void QScrollBar_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QScrollBar_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QScrollBar_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QScrollBar_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QScrollBar_Delete(QScrollBar* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
