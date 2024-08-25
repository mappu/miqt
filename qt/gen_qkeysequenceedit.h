#ifndef GEN_QKEYSEQUENCEEDIT_H
#define GEN_QKEYSEQUENCEEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QKeySequence;
class QKeySequenceEdit;
class QMetaObject;
class QWidget;
#else
typedef struct QKeySequence QKeySequence;
typedef struct QKeySequenceEdit QKeySequenceEdit;
typedef struct QMetaObject QMetaObject;
typedef struct QWidget QWidget;
#endif

QKeySequenceEdit* QKeySequenceEdit_new();
QKeySequenceEdit* QKeySequenceEdit_new2(QKeySequence* keySequence);
QKeySequenceEdit* QKeySequenceEdit_new3(QWidget* parent);
QKeySequenceEdit* QKeySequenceEdit_new4(QKeySequence* keySequence, QWidget* parent);
QMetaObject* QKeySequenceEdit_MetaObject(QKeySequenceEdit* self);
void QKeySequenceEdit_Tr(char* s, char** _out, int* _out_Strlen);
void QKeySequenceEdit_TrUtf8(char* s, char** _out, int* _out_Strlen);
QKeySequence* QKeySequenceEdit_KeySequence(QKeySequenceEdit* self);
void QKeySequenceEdit_SetKeySequence(QKeySequenceEdit* self, QKeySequence* keySequence);
void QKeySequenceEdit_Clear(QKeySequenceEdit* self);
void QKeySequenceEdit_EditingFinished(QKeySequenceEdit* self);
void QKeySequenceEdit_connect_EditingFinished(QKeySequenceEdit* self, void* slot);
void QKeySequenceEdit_KeySequenceChanged(QKeySequenceEdit* self, QKeySequence* keySequence);
void QKeySequenceEdit_connect_KeySequenceChanged(QKeySequenceEdit* self, void* slot);
void QKeySequenceEdit_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QKeySequenceEdit_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QKeySequenceEdit_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QKeySequenceEdit_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QKeySequenceEdit_Delete(QKeySequenceEdit* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif