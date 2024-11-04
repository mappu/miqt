#ifndef GEN_QDIALOGBUTTONBOX_H
#define GEN_QDIALOGBUTTONBOX_H

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
class QDialogButtonBox;
class QMetaObject;
class QPushButton;
class QWidget;
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QDialogButtonBox QDialogButtonBox;
typedef struct QMetaObject QMetaObject;
typedef struct QPushButton QPushButton;
typedef struct QWidget QWidget;
#endif

QDialogButtonBox* QDialogButtonBox_new(QWidget* parent);
QDialogButtonBox* QDialogButtonBox_new2();
QDialogButtonBox* QDialogButtonBox_new3(int orientation);
QDialogButtonBox* QDialogButtonBox_new4(int buttons);
QDialogButtonBox* QDialogButtonBox_new5(int buttons, int orientation);
QDialogButtonBox* QDialogButtonBox_new6(int orientation, QWidget* parent);
QDialogButtonBox* QDialogButtonBox_new7(int buttons, QWidget* parent);
QDialogButtonBox* QDialogButtonBox_new8(int buttons, int orientation, QWidget* parent);
QMetaObject* QDialogButtonBox_MetaObject(const QDialogButtonBox* self);
void* QDialogButtonBox_Metacast(QDialogButtonBox* self, const char* param1);
struct miqt_string QDialogButtonBox_Tr(const char* s);
struct miqt_string QDialogButtonBox_TrUtf8(const char* s);
void QDialogButtonBox_SetOrientation(QDialogButtonBox* self, int orientation);
int QDialogButtonBox_Orientation(const QDialogButtonBox* self);
void QDialogButtonBox_AddButton(QDialogButtonBox* self, QAbstractButton* button, int role);
QPushButton* QDialogButtonBox_AddButton2(QDialogButtonBox* self, struct miqt_string text, int role);
QPushButton* QDialogButtonBox_AddButtonWithButton(QDialogButtonBox* self, int button);
void QDialogButtonBox_RemoveButton(QDialogButtonBox* self, QAbstractButton* button);
void QDialogButtonBox_Clear(QDialogButtonBox* self);
struct miqt_array QDialogButtonBox_Buttons(const QDialogButtonBox* self);
int QDialogButtonBox_ButtonRole(const QDialogButtonBox* self, QAbstractButton* button);
void QDialogButtonBox_SetStandardButtons(QDialogButtonBox* self, int buttons);
int QDialogButtonBox_StandardButtons(const QDialogButtonBox* self);
int QDialogButtonBox_StandardButton(const QDialogButtonBox* self, QAbstractButton* button);
QPushButton* QDialogButtonBox_Button(const QDialogButtonBox* self, int which);
void QDialogButtonBox_SetCenterButtons(QDialogButtonBox* self, bool center);
bool QDialogButtonBox_CenterButtons(const QDialogButtonBox* self);
void QDialogButtonBox_Clicked(QDialogButtonBox* self, QAbstractButton* button);
void QDialogButtonBox_connect_Clicked(QDialogButtonBox* self, intptr_t slot);
void QDialogButtonBox_Accepted(QDialogButtonBox* self);
void QDialogButtonBox_connect_Accepted(QDialogButtonBox* self, intptr_t slot);
void QDialogButtonBox_HelpRequested(QDialogButtonBox* self);
void QDialogButtonBox_connect_HelpRequested(QDialogButtonBox* self, intptr_t slot);
void QDialogButtonBox_Rejected(QDialogButtonBox* self);
void QDialogButtonBox_connect_Rejected(QDialogButtonBox* self, intptr_t slot);
struct miqt_string QDialogButtonBox_Tr2(const char* s, const char* c);
struct miqt_string QDialogButtonBox_Tr3(const char* s, const char* c, int n);
struct miqt_string QDialogButtonBox_TrUtf82(const char* s, const char* c);
struct miqt_string QDialogButtonBox_TrUtf83(const char* s, const char* c, int n);
void QDialogButtonBox_Delete(QDialogButtonBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
