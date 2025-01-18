#pragma once
#ifndef MIQT_QT_GEN_QCOMMANDLINKBUTTON_H
#define MIQT_QT_GEN_QCOMMANDLINKBUTTON_H

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
class QCommandLinkButton;
class QEvent;
class QFocusEvent;
class QKeyEvent;
class QMetaObject;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QPoint;
class QPushButton;
class QSize;
class QWidget;
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QCommandLinkButton QCommandLinkButton;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QPushButton QPushButton;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QCommandLinkButton* QCommandLinkButton_new(QWidget* parent);
QCommandLinkButton* QCommandLinkButton_new2();
QCommandLinkButton* QCommandLinkButton_new3(struct miqt_string text);
QCommandLinkButton* QCommandLinkButton_new4(struct miqt_string text, struct miqt_string description);
QCommandLinkButton* QCommandLinkButton_new5(struct miqt_string text, QWidget* parent);
QCommandLinkButton* QCommandLinkButton_new6(struct miqt_string text, struct miqt_string description, QWidget* parent);
void QCommandLinkButton_virtbase(QCommandLinkButton* src, QPushButton** outptr_QPushButton);
QMetaObject* QCommandLinkButton_MetaObject(const QCommandLinkButton* self);
void* QCommandLinkButton_Metacast(QCommandLinkButton* self, const char* param1);
struct miqt_string QCommandLinkButton_Tr(const char* s);
struct miqt_string QCommandLinkButton_TrUtf8(const char* s);
struct miqt_string QCommandLinkButton_Description(const QCommandLinkButton* self);
void QCommandLinkButton_SetDescription(QCommandLinkButton* self, struct miqt_string description);
QSize* QCommandLinkButton_SizeHint(const QCommandLinkButton* self);
int QCommandLinkButton_HeightForWidth(const QCommandLinkButton* self, int param1);
QSize* QCommandLinkButton_MinimumSizeHint(const QCommandLinkButton* self);
bool QCommandLinkButton_Event(QCommandLinkButton* self, QEvent* e);
void QCommandLinkButton_PaintEvent(QCommandLinkButton* self, QPaintEvent* param1);
struct miqt_string QCommandLinkButton_Tr2(const char* s, const char* c);
struct miqt_string QCommandLinkButton_Tr3(const char* s, const char* c, int n);
struct miqt_string QCommandLinkButton_TrUtf82(const char* s, const char* c);
struct miqt_string QCommandLinkButton_TrUtf83(const char* s, const char* c, int n);
void QCommandLinkButton_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QCommandLinkButton_virtualbase_SizeHint(const void* self);
void QCommandLinkButton_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QCommandLinkButton_virtualbase_HeightForWidth(const void* self, int param1);
void QCommandLinkButton_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QCommandLinkButton_virtualbase_MinimumSizeHint(const void* self);
void QCommandLinkButton_override_virtual_Event(void* self, intptr_t slot);
bool QCommandLinkButton_virtualbase_Event(void* self, QEvent* e);
void QCommandLinkButton_override_virtual_PaintEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
void QCommandLinkButton_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
void QCommandLinkButton_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_FocusInEvent(void* self, QFocusEvent* param1);
void QCommandLinkButton_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_FocusOutEvent(void* self, QFocusEvent* param1);
void QCommandLinkButton_override_virtual_HitButton(void* self, intptr_t slot);
bool QCommandLinkButton_virtualbase_HitButton(const void* self, QPoint* pos);
void QCommandLinkButton_Delete(QCommandLinkButton* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
