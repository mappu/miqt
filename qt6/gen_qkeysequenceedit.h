#ifndef GEN_QKEYSEQUENCEEDIT_H
#define GEN_QKEYSEQUENCEEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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

QKeySequenceEdit* QKeySequenceEdit_new(QWidget* parent);
QKeySequenceEdit* QKeySequenceEdit_new2();
QKeySequenceEdit* QKeySequenceEdit_new3(QKeySequence* keySequence);
QKeySequenceEdit* QKeySequenceEdit_new4(QKeySequence* keySequence, QWidget* parent);
QMetaObject* QKeySequenceEdit_MetaObject(const QKeySequenceEdit* self);
void* QKeySequenceEdit_Metacast(QKeySequenceEdit* self, const char* param1);
struct miqt_string QKeySequenceEdit_Tr(const char* s);
QKeySequence* QKeySequenceEdit_KeySequence(const QKeySequenceEdit* self);
void QKeySequenceEdit_SetClearButtonEnabled(QKeySequenceEdit* self, bool enable);
bool QKeySequenceEdit_IsClearButtonEnabled(const QKeySequenceEdit* self);
void QKeySequenceEdit_SetKeySequence(QKeySequenceEdit* self, QKeySequence* keySequence);
void QKeySequenceEdit_Clear(QKeySequenceEdit* self);
void QKeySequenceEdit_EditingFinished(QKeySequenceEdit* self);
void QKeySequenceEdit_connect_EditingFinished(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_KeySequenceChanged(QKeySequenceEdit* self, QKeySequence* keySequence);
void QKeySequenceEdit_connect_KeySequenceChanged(QKeySequenceEdit* self, intptr_t slot);
struct miqt_string QKeySequenceEdit_Tr2(const char* s, const char* c);
struct miqt_string QKeySequenceEdit_Tr3(const char* s, const char* c, int n);
void QKeySequenceEdit_Delete(QKeySequenceEdit* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
