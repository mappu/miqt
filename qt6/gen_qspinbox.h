#pragma once
#ifndef MIQT_QT6_GEN_QSPINBOX_H
#define MIQT_QT6_GEN_QSPINBOX_H

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
class QCloseEvent;
class QContextMenuEvent;
class QDoubleSpinBox;
class QEvent;
class QFocusEvent;
class QHideEvent;
class QKeyEvent;
class QMetaObject;
class QMouseEvent;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QResizeEvent;
class QShowEvent;
class QSize;
class QSpinBox;
class QStyleOptionSpinBox;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractSpinBox QAbstractSpinBox;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDoubleSpinBox QDoubleSpinBox;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSpinBox QSpinBox;
typedef struct QStyleOptionSpinBox QStyleOptionSpinBox;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

void QSpinBox_new(QWidget* parent, QSpinBox** outptr_QSpinBox, QAbstractSpinBox** outptr_QAbstractSpinBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QSpinBox_new2(QSpinBox** outptr_QSpinBox, QAbstractSpinBox** outptr_QAbstractSpinBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QSpinBox_MetaObject(const QSpinBox* self);
void* QSpinBox_Metacast(QSpinBox* self, const char* param1);
struct miqt_string QSpinBox_Tr(const char* s);
int QSpinBox_Value(const QSpinBox* self);
struct miqt_string QSpinBox_Prefix(const QSpinBox* self);
void QSpinBox_SetPrefix(QSpinBox* self, struct miqt_string prefix);
struct miqt_string QSpinBox_Suffix(const QSpinBox* self);
void QSpinBox_SetSuffix(QSpinBox* self, struct miqt_string suffix);
struct miqt_string QSpinBox_CleanText(const QSpinBox* self);
int QSpinBox_SingleStep(const QSpinBox* self);
void QSpinBox_SetSingleStep(QSpinBox* self, int val);
int QSpinBox_Minimum(const QSpinBox* self);
void QSpinBox_SetMinimum(QSpinBox* self, int min);
int QSpinBox_Maximum(const QSpinBox* self);
void QSpinBox_SetMaximum(QSpinBox* self, int max);
void QSpinBox_SetRange(QSpinBox* self, int min, int max);
int QSpinBox_StepType(const QSpinBox* self);
void QSpinBox_SetStepType(QSpinBox* self, int stepType);
int QSpinBox_DisplayIntegerBase(const QSpinBox* self);
void QSpinBox_SetDisplayIntegerBase(QSpinBox* self, int base);
bool QSpinBox_Event(QSpinBox* self, QEvent* event);
int QSpinBox_Validate(const QSpinBox* self, struct miqt_string input, int* pos);
int QSpinBox_ValueFromText(const QSpinBox* self, struct miqt_string text);
struct miqt_string QSpinBox_TextFromValue(const QSpinBox* self, int val);
void QSpinBox_Fixup(const QSpinBox* self, struct miqt_string str);
void QSpinBox_SetValue(QSpinBox* self, int val);
void QSpinBox_ValueChanged(QSpinBox* self, int param1);
void QSpinBox_connect_ValueChanged(QSpinBox* self, intptr_t slot);
void QSpinBox_TextChanged(QSpinBox* self, struct miqt_string param1);
void QSpinBox_connect_TextChanged(QSpinBox* self, intptr_t slot);
struct miqt_string QSpinBox_Tr2(const char* s, const char* c);
struct miqt_string QSpinBox_Tr3(const char* s, const char* c, int n);
void QSpinBox_override_virtual_Event(void* self, intptr_t slot);
bool QSpinBox_virtualbase_Event(void* self, QEvent* event);
void QSpinBox_override_virtual_Validate(void* self, intptr_t slot);
int QSpinBox_virtualbase_Validate(const void* self, struct miqt_string input, int* pos);
void QSpinBox_override_virtual_ValueFromText(void* self, intptr_t slot);
int QSpinBox_virtualbase_ValueFromText(const void* self, struct miqt_string text);
void QSpinBox_override_virtual_TextFromValue(void* self, intptr_t slot);
struct miqt_string QSpinBox_virtualbase_TextFromValue(const void* self, int val);
void QSpinBox_override_virtual_Fixup(void* self, intptr_t slot);
void QSpinBox_virtualbase_Fixup(const void* self, struct miqt_string str);
void QSpinBox_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QSpinBox_virtualbase_SizeHint(const void* self);
void QSpinBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QSpinBox_virtualbase_MinimumSizeHint(const void* self);
void QSpinBox_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QSpinBox_virtualbase_InputMethodQuery(const void* self, int param1);
void QSpinBox_override_virtual_StepBy(void* self, intptr_t slot);
void QSpinBox_virtualbase_StepBy(void* self, int steps);
void QSpinBox_override_virtual_Clear(void* self, intptr_t slot);
void QSpinBox_virtualbase_Clear(void* self);
void QSpinBox_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QSpinBox_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
void QSpinBox_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QSpinBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
void QSpinBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QSpinBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
void QSpinBox_override_virtual_WheelEvent(void* self, intptr_t slot);
void QSpinBox_virtualbase_WheelEvent(void* self, QWheelEvent* event);
void QSpinBox_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QSpinBox_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QSpinBox_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QSpinBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QSpinBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QSpinBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
void QSpinBox_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QSpinBox_virtualbase_ChangeEvent(void* self, QEvent* event);
void QSpinBox_override_virtual_CloseEvent(void* self, intptr_t slot);
void QSpinBox_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QSpinBox_override_virtual_HideEvent(void* self, intptr_t slot);
void QSpinBox_virtualbase_HideEvent(void* self, QHideEvent* event);
void QSpinBox_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QSpinBox_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
void QSpinBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QSpinBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
void QSpinBox_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QSpinBox_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
void QSpinBox_override_virtual_TimerEvent(void* self, intptr_t slot);
void QSpinBox_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QSpinBox_override_virtual_PaintEvent(void* self, intptr_t slot);
void QSpinBox_virtualbase_PaintEvent(void* self, QPaintEvent* event);
void QSpinBox_override_virtual_ShowEvent(void* self, intptr_t slot);
void QSpinBox_virtualbase_ShowEvent(void* self, QShowEvent* event);
void QSpinBox_override_virtual_InitStyleOption(void* self, intptr_t slot);
void QSpinBox_virtualbase_InitStyleOption(const void* self, QStyleOptionSpinBox* option);
void QSpinBox_override_virtual_StepEnabled(void* self, intptr_t slot);
int QSpinBox_virtualbase_StepEnabled(const void* self);
void QSpinBox_Delete(QSpinBox* self, bool isSubclass);

void QDoubleSpinBox_new(QWidget* parent, QDoubleSpinBox** outptr_QDoubleSpinBox, QAbstractSpinBox** outptr_QAbstractSpinBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QDoubleSpinBox_new2(QDoubleSpinBox** outptr_QDoubleSpinBox, QAbstractSpinBox** outptr_QAbstractSpinBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QDoubleSpinBox_MetaObject(const QDoubleSpinBox* self);
void* QDoubleSpinBox_Metacast(QDoubleSpinBox* self, const char* param1);
struct miqt_string QDoubleSpinBox_Tr(const char* s);
double QDoubleSpinBox_Value(const QDoubleSpinBox* self);
struct miqt_string QDoubleSpinBox_Prefix(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetPrefix(QDoubleSpinBox* self, struct miqt_string prefix);
struct miqt_string QDoubleSpinBox_Suffix(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetSuffix(QDoubleSpinBox* self, struct miqt_string suffix);
struct miqt_string QDoubleSpinBox_CleanText(const QDoubleSpinBox* self);
double QDoubleSpinBox_SingleStep(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetSingleStep(QDoubleSpinBox* self, double val);
double QDoubleSpinBox_Minimum(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetMinimum(QDoubleSpinBox* self, double min);
double QDoubleSpinBox_Maximum(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetMaximum(QDoubleSpinBox* self, double max);
void QDoubleSpinBox_SetRange(QDoubleSpinBox* self, double min, double max);
int QDoubleSpinBox_StepType(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetStepType(QDoubleSpinBox* self, int stepType);
int QDoubleSpinBox_Decimals(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetDecimals(QDoubleSpinBox* self, int prec);
int QDoubleSpinBox_Validate(const QDoubleSpinBox* self, struct miqt_string input, int* pos);
double QDoubleSpinBox_ValueFromText(const QDoubleSpinBox* self, struct miqt_string text);
struct miqt_string QDoubleSpinBox_TextFromValue(const QDoubleSpinBox* self, double val);
void QDoubleSpinBox_Fixup(const QDoubleSpinBox* self, struct miqt_string str);
void QDoubleSpinBox_SetValue(QDoubleSpinBox* self, double val);
void QDoubleSpinBox_ValueChanged(QDoubleSpinBox* self, double param1);
void QDoubleSpinBox_connect_ValueChanged(QDoubleSpinBox* self, intptr_t slot);
void QDoubleSpinBox_TextChanged(QDoubleSpinBox* self, struct miqt_string param1);
void QDoubleSpinBox_connect_TextChanged(QDoubleSpinBox* self, intptr_t slot);
struct miqt_string QDoubleSpinBox_Tr2(const char* s, const char* c);
struct miqt_string QDoubleSpinBox_Tr3(const char* s, const char* c, int n);
void QDoubleSpinBox_override_virtual_Validate(void* self, intptr_t slot);
int QDoubleSpinBox_virtualbase_Validate(const void* self, struct miqt_string input, int* pos);
void QDoubleSpinBox_override_virtual_ValueFromText(void* self, intptr_t slot);
double QDoubleSpinBox_virtualbase_ValueFromText(const void* self, struct miqt_string text);
void QDoubleSpinBox_override_virtual_TextFromValue(void* self, intptr_t slot);
struct miqt_string QDoubleSpinBox_virtualbase_TextFromValue(const void* self, double val);
void QDoubleSpinBox_override_virtual_Fixup(void* self, intptr_t slot);
void QDoubleSpinBox_virtualbase_Fixup(const void* self, struct miqt_string str);
void QDoubleSpinBox_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QDoubleSpinBox_virtualbase_SizeHint(const void* self);
void QDoubleSpinBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QDoubleSpinBox_virtualbase_MinimumSizeHint(const void* self);
void QDoubleSpinBox_override_virtual_Event(void* self, intptr_t slot);
bool QDoubleSpinBox_virtualbase_Event(void* self, QEvent* event);
void QDoubleSpinBox_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QDoubleSpinBox_virtualbase_InputMethodQuery(const void* self, int param1);
void QDoubleSpinBox_override_virtual_StepBy(void* self, intptr_t slot);
void QDoubleSpinBox_virtualbase_StepBy(void* self, int steps);
void QDoubleSpinBox_override_virtual_Clear(void* self, intptr_t slot);
void QDoubleSpinBox_virtualbase_Clear(void* self);
void QDoubleSpinBox_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QDoubleSpinBox_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
void QDoubleSpinBox_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QDoubleSpinBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
void QDoubleSpinBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QDoubleSpinBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
void QDoubleSpinBox_override_virtual_WheelEvent(void* self, intptr_t slot);
void QDoubleSpinBox_virtualbase_WheelEvent(void* self, QWheelEvent* event);
void QDoubleSpinBox_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QDoubleSpinBox_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QDoubleSpinBox_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QDoubleSpinBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QDoubleSpinBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QDoubleSpinBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
void QDoubleSpinBox_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QDoubleSpinBox_virtualbase_ChangeEvent(void* self, QEvent* event);
void QDoubleSpinBox_override_virtual_CloseEvent(void* self, intptr_t slot);
void QDoubleSpinBox_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QDoubleSpinBox_override_virtual_HideEvent(void* self, intptr_t slot);
void QDoubleSpinBox_virtualbase_HideEvent(void* self, QHideEvent* event);
void QDoubleSpinBox_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QDoubleSpinBox_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
void QDoubleSpinBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QDoubleSpinBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
void QDoubleSpinBox_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QDoubleSpinBox_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
void QDoubleSpinBox_override_virtual_TimerEvent(void* self, intptr_t slot);
void QDoubleSpinBox_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QDoubleSpinBox_override_virtual_PaintEvent(void* self, intptr_t slot);
void QDoubleSpinBox_virtualbase_PaintEvent(void* self, QPaintEvent* event);
void QDoubleSpinBox_override_virtual_ShowEvent(void* self, intptr_t slot);
void QDoubleSpinBox_virtualbase_ShowEvent(void* self, QShowEvent* event);
void QDoubleSpinBox_override_virtual_InitStyleOption(void* self, intptr_t slot);
void QDoubleSpinBox_virtualbase_InitStyleOption(const void* self, QStyleOptionSpinBox* option);
void QDoubleSpinBox_override_virtual_StepEnabled(void* self, intptr_t slot);
int QDoubleSpinBox_virtualbase_StepEnabled(const void* self);
void QDoubleSpinBox_Delete(QDoubleSpinBox* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
