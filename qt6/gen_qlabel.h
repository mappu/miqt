#pragma once
#ifndef MIQT_QT6_GEN_QLABEL_H
#define MIQT_QT6_GEN_QLABEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QContextMenuEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QKeyEvent;
class QLabel;
class QMetaObject;
class QMouseEvent;
class QMovie;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QPicture;
class QPixmap;
class QSize;
class QStyleOptionFrame;
class QWidget;
#else
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QKeyEvent QKeyEvent;
typedef struct QLabel QLabel;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMovie QMovie;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPicture QPicture;
typedef struct QPixmap QPixmap;
typedef struct QSize QSize;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QWidget QWidget;
#endif

void QLabel_new(QWidget* parent, QLabel** outptr_QLabel, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QLabel_new2(QLabel** outptr_QLabel, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QLabel_new3(struct miqt_string text, QLabel** outptr_QLabel, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QLabel_new4(QWidget* parent, int f, QLabel** outptr_QLabel, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QLabel_new5(struct miqt_string text, QWidget* parent, QLabel** outptr_QLabel, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QLabel_new6(struct miqt_string text, QWidget* parent, int f, QLabel** outptr_QLabel, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QLabel_MetaObject(const QLabel* self);
void* QLabel_Metacast(QLabel* self, const char* param1);
struct miqt_string QLabel_Tr(const char* s);
struct miqt_string QLabel_Text(const QLabel* self);
QPixmap* QLabel_Pixmap(const QLabel* self, int param1);
QPixmap* QLabel_Pixmap2(const QLabel* self);
QPicture* QLabel_Picture(const QLabel* self, int param1);
QPicture* QLabel_Picture2(const QLabel* self);
QMovie* QLabel_Movie(const QLabel* self);
int QLabel_TextFormat(const QLabel* self);
void QLabel_SetTextFormat(QLabel* self, int textFormat);
int QLabel_Alignment(const QLabel* self);
void QLabel_SetAlignment(QLabel* self, int alignment);
void QLabel_SetWordWrap(QLabel* self, bool on);
bool QLabel_WordWrap(const QLabel* self);
int QLabel_Indent(const QLabel* self);
void QLabel_SetIndent(QLabel* self, int indent);
int QLabel_Margin(const QLabel* self);
void QLabel_SetMargin(QLabel* self, int margin);
bool QLabel_HasScaledContents(const QLabel* self);
void QLabel_SetScaledContents(QLabel* self, bool scaledContents);
QSize* QLabel_SizeHint(const QLabel* self);
QSize* QLabel_MinimumSizeHint(const QLabel* self);
void QLabel_SetBuddy(QLabel* self, QWidget* buddy);
QWidget* QLabel_Buddy(const QLabel* self);
int QLabel_HeightForWidth(const QLabel* self, int param1);
bool QLabel_OpenExternalLinks(const QLabel* self);
void QLabel_SetOpenExternalLinks(QLabel* self, bool open);
void QLabel_SetTextInteractionFlags(QLabel* self, int flags);
int QLabel_TextInteractionFlags(const QLabel* self);
void QLabel_SetSelection(QLabel* self, int param1, int param2);
bool QLabel_HasSelectedText(const QLabel* self);
struct miqt_string QLabel_SelectedText(const QLabel* self);
int QLabel_SelectionStart(const QLabel* self);
void QLabel_SetText(QLabel* self, struct miqt_string text);
void QLabel_SetPixmap(QLabel* self, QPixmap* pixmap);
void QLabel_SetPicture(QLabel* self, QPicture* picture);
void QLabel_SetMovie(QLabel* self, QMovie* movie);
void QLabel_SetNum(QLabel* self, int num);
void QLabel_SetNumWithNum(QLabel* self, double num);
void QLabel_Clear(QLabel* self);
void QLabel_LinkActivated(QLabel* self, struct miqt_string link);
void QLabel_connect_LinkActivated(QLabel* self, intptr_t slot);
void QLabel_LinkHovered(QLabel* self, struct miqt_string link);
void QLabel_connect_LinkHovered(QLabel* self, intptr_t slot);
bool QLabel_Event(QLabel* self, QEvent* e);
void QLabel_KeyPressEvent(QLabel* self, QKeyEvent* ev);
void QLabel_PaintEvent(QLabel* self, QPaintEvent* param1);
void QLabel_ChangeEvent(QLabel* self, QEvent* param1);
void QLabel_MousePressEvent(QLabel* self, QMouseEvent* ev);
void QLabel_MouseMoveEvent(QLabel* self, QMouseEvent* ev);
void QLabel_MouseReleaseEvent(QLabel* self, QMouseEvent* ev);
void QLabel_ContextMenuEvent(QLabel* self, QContextMenuEvent* ev);
void QLabel_FocusInEvent(QLabel* self, QFocusEvent* ev);
void QLabel_FocusOutEvent(QLabel* self, QFocusEvent* ev);
bool QLabel_FocusNextPrevChild(QLabel* self, bool next);
struct miqt_string QLabel_Tr2(const char* s, const char* c);
struct miqt_string QLabel_Tr3(const char* s, const char* c, int n);
void QLabel_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QLabel_virtualbase_SizeHint(const void* self);
void QLabel_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QLabel_virtualbase_MinimumSizeHint(const void* self);
void QLabel_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QLabel_virtualbase_HeightForWidth(const void* self, int param1);
void QLabel_override_virtual_Event(void* self, intptr_t slot);
bool QLabel_virtualbase_Event(void* self, QEvent* e);
void QLabel_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QLabel_virtualbase_KeyPressEvent(void* self, QKeyEvent* ev);
void QLabel_override_virtual_PaintEvent(void* self, intptr_t slot);
void QLabel_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
void QLabel_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QLabel_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QLabel_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QLabel_virtualbase_MousePressEvent(void* self, QMouseEvent* ev);
void QLabel_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QLabel_virtualbase_MouseMoveEvent(void* self, QMouseEvent* ev);
void QLabel_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QLabel_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* ev);
void QLabel_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QLabel_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* ev);
void QLabel_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QLabel_virtualbase_FocusInEvent(void* self, QFocusEvent* ev);
void QLabel_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QLabel_virtualbase_FocusOutEvent(void* self, QFocusEvent* ev);
void QLabel_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QLabel_virtualbase_FocusNextPrevChild(void* self, bool next);
void QLabel_override_virtual_InitStyleOption(void* self, intptr_t slot);
void QLabel_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option);
void QLabel_Delete(QLabel* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
