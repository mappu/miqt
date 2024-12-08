#pragma once
#ifndef MIQT_QT_GEN_QMESSAGEBOX_H
#define MIQT_QT_GEN_QMESSAGEBOX_H

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
class QCheckBox;
class QCloseEvent;
class QContextMenuEvent;
class QDialog;
class QEvent;
class QKeyEvent;
class QMessageBox;
class QMetaObject;
class QObject;
class QPaintDevice;
class QPixmap;
class QPushButton;
class QResizeEvent;
class QShowEvent;
class QSize;
class QWidget;
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QCheckBox QCheckBox;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDialog QDialog;
typedef struct QEvent QEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMessageBox QMessageBox;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPixmap QPixmap;
typedef struct QPushButton QPushButton;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QMessageBox* QMessageBox_new(QWidget* parent);
QMessageBox* QMessageBox_new2();
QMessageBox* QMessageBox_new3(int icon, struct miqt_string title, struct miqt_string text);
QMessageBox* QMessageBox_new4(struct miqt_string title, struct miqt_string text, int icon, int button0, int button1, int button2);
QMessageBox* QMessageBox_new5(int icon, struct miqt_string title, struct miqt_string text, int buttons);
QMessageBox* QMessageBox_new6(int icon, struct miqt_string title, struct miqt_string text, int buttons, QWidget* parent);
QMessageBox* QMessageBox_new7(int icon, struct miqt_string title, struct miqt_string text, int buttons, QWidget* parent, int flags);
QMessageBox* QMessageBox_new8(struct miqt_string title, struct miqt_string text, int icon, int button0, int button1, int button2, QWidget* parent);
QMessageBox* QMessageBox_new9(struct miqt_string title, struct miqt_string text, int icon, int button0, int button1, int button2, QWidget* parent, int f);
void QMessageBox_virtbase(QMessageBox* src, QDialog** outptr_QDialog);
QMetaObject* QMessageBox_MetaObject(const QMessageBox* self);
void* QMessageBox_Metacast(QMessageBox* self, const char* param1);
struct miqt_string QMessageBox_Tr(const char* s);
struct miqt_string QMessageBox_TrUtf8(const char* s);
void QMessageBox_AddButton(QMessageBox* self, QAbstractButton* button, int role);
QPushButton* QMessageBox_AddButton2(QMessageBox* self, struct miqt_string text, int role);
QPushButton* QMessageBox_AddButtonWithButton(QMessageBox* self, int button);
void QMessageBox_RemoveButton(QMessageBox* self, QAbstractButton* button);
struct miqt_array /* of QAbstractButton* */  QMessageBox_Buttons(const QMessageBox* self);
int QMessageBox_ButtonRole(const QMessageBox* self, QAbstractButton* button);
void QMessageBox_SetStandardButtons(QMessageBox* self, int buttons);
int QMessageBox_StandardButtons(const QMessageBox* self);
int QMessageBox_StandardButton(const QMessageBox* self, QAbstractButton* button);
QAbstractButton* QMessageBox_Button(const QMessageBox* self, int which);
QPushButton* QMessageBox_DefaultButton(const QMessageBox* self);
void QMessageBox_SetDefaultButton(QMessageBox* self, QPushButton* button);
void QMessageBox_SetDefaultButtonWithButton(QMessageBox* self, int button);
QAbstractButton* QMessageBox_EscapeButton(const QMessageBox* self);
void QMessageBox_SetEscapeButton(QMessageBox* self, QAbstractButton* button);
void QMessageBox_SetEscapeButtonWithButton(QMessageBox* self, int button);
QAbstractButton* QMessageBox_ClickedButton(const QMessageBox* self);
struct miqt_string QMessageBox_Text(const QMessageBox* self);
void QMessageBox_SetText(QMessageBox* self, struct miqt_string text);
int QMessageBox_Icon(const QMessageBox* self);
void QMessageBox_SetIcon(QMessageBox* self, int icon);
QPixmap* QMessageBox_IconPixmap(const QMessageBox* self);
void QMessageBox_SetIconPixmap(QMessageBox* self, QPixmap* pixmap);
int QMessageBox_TextFormat(const QMessageBox* self);
void QMessageBox_SetTextFormat(QMessageBox* self, int format);
void QMessageBox_SetTextInteractionFlags(QMessageBox* self, int flags);
int QMessageBox_TextInteractionFlags(const QMessageBox* self);
void QMessageBox_SetCheckBox(QMessageBox* self, QCheckBox* cb);
QCheckBox* QMessageBox_CheckBox(const QMessageBox* self);
int QMessageBox_Information(QWidget* parent, struct miqt_string title, struct miqt_string text);
int QMessageBox_Question(QWidget* parent, struct miqt_string title, struct miqt_string text);
int QMessageBox_Warning(QWidget* parent, struct miqt_string title, struct miqt_string text);
int QMessageBox_Critical(QWidget* parent, struct miqt_string title, struct miqt_string text);
void QMessageBox_About(QWidget* parent, struct miqt_string title, struct miqt_string text);
void QMessageBox_AboutQt(QWidget* parent);
int QMessageBox_Information2(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0);
int QMessageBox_Information3(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text);
int QMessageBox_Information4(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0);
int QMessageBox_Question2(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0);
int QMessageBox_Question3(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text);
int QMessageBox_Question4(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1);
int QMessageBox_Warning2(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1);
int QMessageBox_Warning3(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text);
int QMessageBox_Warning4(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1);
int QMessageBox_Critical2(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1);
int QMessageBox_Critical3(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text);
int QMessageBox_Critical4(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1);
struct miqt_string QMessageBox_ButtonText(const QMessageBox* self, int button);
void QMessageBox_SetButtonText(QMessageBox* self, int button, struct miqt_string text);
struct miqt_string QMessageBox_InformativeText(const QMessageBox* self);
void QMessageBox_SetInformativeText(QMessageBox* self, struct miqt_string text);
struct miqt_string QMessageBox_DetailedText(const QMessageBox* self);
void QMessageBox_SetDetailedText(QMessageBox* self, struct miqt_string text);
void QMessageBox_SetWindowTitle(QMessageBox* self, struct miqt_string title);
void QMessageBox_SetWindowModality(QMessageBox* self, int windowModality);
QPixmap* QMessageBox_StandardIcon(int icon);
void QMessageBox_ButtonClicked(QMessageBox* self, QAbstractButton* button);
void QMessageBox_connect_ButtonClicked(QMessageBox* self, intptr_t slot);
bool QMessageBox_Event(QMessageBox* self, QEvent* e);
void QMessageBox_ResizeEvent(QMessageBox* self, QResizeEvent* event);
void QMessageBox_ShowEvent(QMessageBox* self, QShowEvent* event);
void QMessageBox_CloseEvent(QMessageBox* self, QCloseEvent* event);
void QMessageBox_KeyPressEvent(QMessageBox* self, QKeyEvent* event);
void QMessageBox_ChangeEvent(QMessageBox* self, QEvent* event);
struct miqt_string QMessageBox_Tr2(const char* s, const char* c);
struct miqt_string QMessageBox_Tr3(const char* s, const char* c, int n);
struct miqt_string QMessageBox_TrUtf82(const char* s, const char* c);
struct miqt_string QMessageBox_TrUtf83(const char* s, const char* c, int n);
int QMessageBox_Information42(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons);
int QMessageBox_Information5(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons, int defaultButton);
int QMessageBox_Question42(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons);
int QMessageBox_Question5(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons, int defaultButton);
int QMessageBox_Warning42(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons);
int QMessageBox_Warning5(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons, int defaultButton);
int QMessageBox_Critical42(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons);
int QMessageBox_Critical5(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons, int defaultButton);
void QMessageBox_AboutQt2(QWidget* parent, struct miqt_string title);
int QMessageBox_Information52(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1);
int QMessageBox_Information6(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1, int button2);
int QMessageBox_Information53(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text);
int QMessageBox_Information62(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text);
int QMessageBox_Information7(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber);
int QMessageBox_Information8(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber);
int QMessageBox_Information54(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1);
int QMessageBox_Question52(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1);
int QMessageBox_Question6(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1, int button2);
int QMessageBox_Question53(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text);
int QMessageBox_Question62(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text);
int QMessageBox_Question7(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber);
int QMessageBox_Question8(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber);
int QMessageBox_Warning6(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1, int button2);
int QMessageBox_Warning52(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text);
int QMessageBox_Warning62(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text);
int QMessageBox_Warning7(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber);
int QMessageBox_Warning8(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber);
int QMessageBox_Critical6(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1, int button2);
int QMessageBox_Critical52(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text);
int QMessageBox_Critical62(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text);
int QMessageBox_Critical7(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber);
int QMessageBox_Critical8(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber);
void QMessageBox_override_virtual_Event(void* self, intptr_t slot);
bool QMessageBox_virtualbase_Event(void* self, QEvent* e);
void QMessageBox_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QMessageBox_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
void QMessageBox_override_virtual_ShowEvent(void* self, intptr_t slot);
void QMessageBox_virtualbase_ShowEvent(void* self, QShowEvent* event);
void QMessageBox_override_virtual_CloseEvent(void* self, intptr_t slot);
void QMessageBox_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QMessageBox_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QMessageBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
void QMessageBox_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QMessageBox_virtualbase_ChangeEvent(void* self, QEvent* event);
void QMessageBox_override_virtual_SetVisible(void* self, intptr_t slot);
void QMessageBox_virtualbase_SetVisible(void* self, bool visible);
void QMessageBox_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QMessageBox_virtualbase_SizeHint(const void* self);
void QMessageBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QMessageBox_virtualbase_MinimumSizeHint(const void* self);
void QMessageBox_override_virtual_Open(void* self, intptr_t slot);
void QMessageBox_virtualbase_Open(void* self);
void QMessageBox_override_virtual_Exec(void* self, intptr_t slot);
int QMessageBox_virtualbase_Exec(void* self);
void QMessageBox_override_virtual_Done(void* self, intptr_t slot);
void QMessageBox_virtualbase_Done(void* self, int param1);
void QMessageBox_override_virtual_Accept(void* self, intptr_t slot);
void QMessageBox_virtualbase_Accept(void* self);
void QMessageBox_override_virtual_Reject(void* self, intptr_t slot);
void QMessageBox_virtualbase_Reject(void* self);
void QMessageBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QMessageBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
void QMessageBox_override_virtual_EventFilter(void* self, intptr_t slot);
bool QMessageBox_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
void QMessageBox_Delete(QMessageBox* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
