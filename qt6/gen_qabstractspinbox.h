#pragma once
#ifndef MIQT_QT6_GEN_QABSTRACTSPINBOX_H
#define MIQT_QT6_GEN_QABSTRACTSPINBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractSpinBox;
class QEvent;
class QMetaObject;
class QSize;
class QVariant;
class QWidget;
#else
typedef struct QAbstractSpinBox QAbstractSpinBox;
typedef struct QEvent QEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QAbstractSpinBox* QAbstractSpinBox_new(QWidget* parent);
QAbstractSpinBox* QAbstractSpinBox_new2();
QMetaObject* QAbstractSpinBox_MetaObject(const QAbstractSpinBox* self);
void* QAbstractSpinBox_Metacast(QAbstractSpinBox* self, const char* param1);
struct miqt_string QAbstractSpinBox_Tr(const char* s);
int QAbstractSpinBox_ButtonSymbols(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetButtonSymbols(QAbstractSpinBox* self, int bs);
void QAbstractSpinBox_SetCorrectionMode(QAbstractSpinBox* self, int cm);
int QAbstractSpinBox_CorrectionMode(const QAbstractSpinBox* self);
bool QAbstractSpinBox_HasAcceptableInput(const QAbstractSpinBox* self);
struct miqt_string QAbstractSpinBox_Text(const QAbstractSpinBox* self);
struct miqt_string QAbstractSpinBox_SpecialValueText(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetSpecialValueText(QAbstractSpinBox* self, struct miqt_string txt);
bool QAbstractSpinBox_Wrapping(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetWrapping(QAbstractSpinBox* self, bool w);
void QAbstractSpinBox_SetReadOnly(QAbstractSpinBox* self, bool r);
bool QAbstractSpinBox_IsReadOnly(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetKeyboardTracking(QAbstractSpinBox* self, bool kt);
bool QAbstractSpinBox_KeyboardTracking(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetAlignment(QAbstractSpinBox* self, int flag);
int QAbstractSpinBox_Alignment(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetFrame(QAbstractSpinBox* self, bool frame);
bool QAbstractSpinBox_HasFrame(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetAccelerated(QAbstractSpinBox* self, bool on);
bool QAbstractSpinBox_IsAccelerated(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetGroupSeparatorShown(QAbstractSpinBox* self, bool shown);
bool QAbstractSpinBox_IsGroupSeparatorShown(const QAbstractSpinBox* self);
QSize* QAbstractSpinBox_SizeHint(const QAbstractSpinBox* self);
QSize* QAbstractSpinBox_MinimumSizeHint(const QAbstractSpinBox* self);
void QAbstractSpinBox_InterpretText(QAbstractSpinBox* self);
bool QAbstractSpinBox_Event(QAbstractSpinBox* self, QEvent* event);
QVariant* QAbstractSpinBox_InputMethodQuery(const QAbstractSpinBox* self, int param1);
int QAbstractSpinBox_Validate(const QAbstractSpinBox* self, struct miqt_string input, int* pos);
void QAbstractSpinBox_Fixup(const QAbstractSpinBox* self, struct miqt_string input);
void QAbstractSpinBox_StepBy(QAbstractSpinBox* self, int steps);
void QAbstractSpinBox_StepUp(QAbstractSpinBox* self);
void QAbstractSpinBox_StepDown(QAbstractSpinBox* self);
void QAbstractSpinBox_SelectAll(QAbstractSpinBox* self);
void QAbstractSpinBox_Clear(QAbstractSpinBox* self);
void QAbstractSpinBox_EditingFinished(QAbstractSpinBox* self);
void QAbstractSpinBox_connect_EditingFinished(QAbstractSpinBox* self, intptr_t slot);
struct miqt_string QAbstractSpinBox_Tr2(const char* s, const char* c);
struct miqt_string QAbstractSpinBox_Tr3(const char* s, const char* c, int n);
void QAbstractSpinBox_Delete(QAbstractSpinBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
