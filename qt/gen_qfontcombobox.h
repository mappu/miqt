#pragma once
#ifndef MIQT_QT_GEN_QFONTCOMBOBOX_H
#define MIQT_QT_GEN_QFONTCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QComboBox;
class QContextMenuEvent;
class QEvent;
class QFocusEvent;
class QFont;
class QFontComboBox;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QMetaObject;
class QMouseEvent;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QResizeEvent;
class QShowEvent;
class QSize;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QComboBox QComboBox;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QFontComboBox QFontComboBox;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

void QFontComboBox_new(QWidget* parent, QFontComboBox** outptr_QFontComboBox, QComboBox** outptr_QComboBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QFontComboBox_new2(QFontComboBox** outptr_QFontComboBox, QComboBox** outptr_QComboBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QFontComboBox_MetaObject(const QFontComboBox* self);
void* QFontComboBox_Metacast(QFontComboBox* self, const char* param1);
struct miqt_string QFontComboBox_Tr(const char* s);
struct miqt_string QFontComboBox_TrUtf8(const char* s);
void QFontComboBox_SetWritingSystem(QFontComboBox* self, int writingSystem);
int QFontComboBox_WritingSystem(const QFontComboBox* self);
void QFontComboBox_SetFontFilters(QFontComboBox* self, int filters);
int QFontComboBox_FontFilters(const QFontComboBox* self);
QFont* QFontComboBox_CurrentFont(const QFontComboBox* self);
QSize* QFontComboBox_SizeHint(const QFontComboBox* self);
void QFontComboBox_SetCurrentFont(QFontComboBox* self, QFont* f);
void QFontComboBox_CurrentFontChanged(QFontComboBox* self, QFont* f);
void QFontComboBox_connect_CurrentFontChanged(QFontComboBox* self, intptr_t slot);
bool QFontComboBox_Event(QFontComboBox* self, QEvent* e);
struct miqt_string QFontComboBox_Tr2(const char* s, const char* c);
struct miqt_string QFontComboBox_Tr3(const char* s, const char* c, int n);
struct miqt_string QFontComboBox_TrUtf82(const char* s, const char* c);
struct miqt_string QFontComboBox_TrUtf83(const char* s, const char* c, int n);
void QFontComboBox_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QFontComboBox_virtualbase_SizeHint(const void* self);
void QFontComboBox_override_virtual_Event(void* self, intptr_t slot);
bool QFontComboBox_virtualbase_Event(void* self, QEvent* e);
void QFontComboBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QFontComboBox_virtualbase_MinimumSizeHint(const void* self);
void QFontComboBox_override_virtual_ShowPopup(void* self, intptr_t slot);
void QFontComboBox_virtualbase_ShowPopup(void* self);
void QFontComboBox_override_virtual_HidePopup(void* self, intptr_t slot);
void QFontComboBox_virtualbase_HidePopup(void* self);
void QFontComboBox_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QFontComboBox_virtualbase_InputMethodQuery(const void* self, int param1);
void QFontComboBox_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_FocusInEvent(void* self, QFocusEvent* e);
void QFontComboBox_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* e);
void QFontComboBox_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_ChangeEvent(void* self, QEvent* e);
void QFontComboBox_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_ResizeEvent(void* self, QResizeEvent* e);
void QFontComboBox_override_virtual_PaintEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_PaintEvent(void* self, QPaintEvent* e);
void QFontComboBox_override_virtual_ShowEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_ShowEvent(void* self, QShowEvent* e);
void QFontComboBox_override_virtual_HideEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_HideEvent(void* self, QHideEvent* e);
void QFontComboBox_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_MousePressEvent(void* self, QMouseEvent* e);
void QFontComboBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e);
void QFontComboBox_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* e);
void QFontComboBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e);
void QFontComboBox_override_virtual_WheelEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_WheelEvent(void* self, QWheelEvent* e);
void QFontComboBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* e);
void QFontComboBox_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QFontComboBox_Delete(QFontComboBox* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
