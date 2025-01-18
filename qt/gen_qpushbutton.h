#pragma once
#ifndef MIQT_QT_GEN_QPUSHBUTTON_H
#define MIQT_QT_GEN_QPUSHBUTTON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractButton;
class QEvent;
class QFocusEvent;
class QIcon;
class QKeyEvent;
class QMenu;
class QMetaObject;
class QMouseEvent;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QPoint;
class QPushButton;
class QSize;
class QTimerEvent;
class QWidget;
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QIcon QIcon;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMenu QMenu;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QPushButton QPushButton;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QPushButton* QPushButton_new(QWidget* parent);
QPushButton* QPushButton_new2();
QPushButton* QPushButton_new3(struct miqt_string text);
QPushButton* QPushButton_new4(QIcon* icon, struct miqt_string text);
QPushButton* QPushButton_new5(struct miqt_string text, QWidget* parent);
QPushButton* QPushButton_new6(QIcon* icon, struct miqt_string text, QWidget* parent);
void QPushButton_virtbase(QPushButton* src, QAbstractButton** outptr_QAbstractButton);
QMetaObject* QPushButton_MetaObject(const QPushButton* self);
void* QPushButton_Metacast(QPushButton* self, const char* param1);
struct miqt_string QPushButton_Tr(const char* s);
struct miqt_string QPushButton_TrUtf8(const char* s);
QSize* QPushButton_SizeHint(const QPushButton* self);
QSize* QPushButton_MinimumSizeHint(const QPushButton* self);
bool QPushButton_AutoDefault(const QPushButton* self);
void QPushButton_SetAutoDefault(QPushButton* self, bool autoDefault);
bool QPushButton_IsDefault(const QPushButton* self);
void QPushButton_SetDefault(QPushButton* self, bool defaultVal);
void QPushButton_SetMenu(QPushButton* self, QMenu* menu);
QMenu* QPushButton_Menu(const QPushButton* self);
void QPushButton_SetFlat(QPushButton* self, bool flat);
bool QPushButton_IsFlat(const QPushButton* self);
void QPushButton_ShowMenu(QPushButton* self);
bool QPushButton_Event(QPushButton* self, QEvent* e);
void QPushButton_PaintEvent(QPushButton* self, QPaintEvent* param1);
void QPushButton_KeyPressEvent(QPushButton* self, QKeyEvent* param1);
void QPushButton_FocusInEvent(QPushButton* self, QFocusEvent* param1);
void QPushButton_FocusOutEvent(QPushButton* self, QFocusEvent* param1);
bool QPushButton_HitButton(const QPushButton* self, QPoint* pos);
struct miqt_string QPushButton_Tr2(const char* s, const char* c);
struct miqt_string QPushButton_Tr3(const char* s, const char* c, int n);
struct miqt_string QPushButton_TrUtf82(const char* s, const char* c);
struct miqt_string QPushButton_TrUtf83(const char* s, const char* c, int n);
bool QPushButton_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QPushButton_virtualbase_SizeHint(const void* self);
bool QPushButton_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QPushButton_virtualbase_MinimumSizeHint(const void* self);
bool QPushButton_override_virtual_Event(void* self, intptr_t slot);
bool QPushButton_virtualbase_Event(void* self, QEvent* e);
bool QPushButton_override_virtual_PaintEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
bool QPushButton_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
bool QPushButton_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_FocusInEvent(void* self, QFocusEvent* param1);
bool QPushButton_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_FocusOutEvent(void* self, QFocusEvent* param1);
bool QPushButton_override_virtual_HitButton(void* self, intptr_t slot);
bool QPushButton_virtualbase_HitButton(const void* self, QPoint* pos);
bool QPushButton_override_virtual_CheckStateSet(void* self, intptr_t slot);
void QPushButton_virtualbase_CheckStateSet(void* self);
bool QPushButton_override_virtual_NextCheckState(void* self, intptr_t slot);
void QPushButton_virtualbase_NextCheckState(void* self);
bool QPushButton_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e);
bool QPushButton_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_MousePressEvent(void* self, QMouseEvent* e);
bool QPushButton_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e);
bool QPushButton_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e);
bool QPushButton_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_ChangeEvent(void* self, QEvent* e);
bool QPushButton_override_virtual_TimerEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_TimerEvent(void* self, QTimerEvent* e);
void QPushButton_Delete(QPushButton* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
