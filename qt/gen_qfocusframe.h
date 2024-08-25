#ifndef GEN_QFOCUSFRAME_H
#define GEN_QFOCUSFRAME_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

QFocusFrame* QFocusFrame_new();
QFocusFrame* QFocusFrame_new2(QWidget* parent);
QMetaObject* QFocusFrame_MetaObject(QFocusFrame* self);
void QFocusFrame_Tr(char* s, char** _out, int* _out_Strlen);
void QFocusFrame_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QFocusFrame_SetWidget(QFocusFrame* self, QWidget* widget);
QWidget* QFocusFrame_Widget(QFocusFrame* self);
void QFocusFrame_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QFocusFrame_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QFocusFrame_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QFocusFrame_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QFocusFrame_Delete(QFocusFrame* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
