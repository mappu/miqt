#ifndef GEN_QDIALOGBUTTONBOX_H
#define GEN_QDIALOGBUTTONBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

QDialogButtonBox* QDialogButtonBox_new();
QDialogButtonBox* QDialogButtonBox_new2(uintptr_t orientation);
QDialogButtonBox* QDialogButtonBox_new3(int buttons);
QDialogButtonBox* QDialogButtonBox_new4(int buttons, uintptr_t orientation);
QDialogButtonBox* QDialogButtonBox_new5(QWidget* parent);
QDialogButtonBox* QDialogButtonBox_new6(uintptr_t orientation, QWidget* parent);
QDialogButtonBox* QDialogButtonBox_new7(int buttons, QWidget* parent);
QDialogButtonBox* QDialogButtonBox_new8(int buttons, uintptr_t orientation, QWidget* parent);
QMetaObject* QDialogButtonBox_MetaObject(QDialogButtonBox* self);
void QDialogButtonBox_Tr(const char* s, char** _out, int* _out_Strlen);
void QDialogButtonBox_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QDialogButtonBox_SetOrientation(QDialogButtonBox* self, uintptr_t orientation);
uintptr_t QDialogButtonBox_Orientation(QDialogButtonBox* self);
void QDialogButtonBox_AddButton(QDialogButtonBox* self, QAbstractButton* button, uintptr_t role);
QPushButton* QDialogButtonBox_AddButton2(QDialogButtonBox* self, const char* text, size_t text_Strlen, uintptr_t role);
QPushButton* QDialogButtonBox_AddButtonWithButton(QDialogButtonBox* self, uintptr_t button);
void QDialogButtonBox_RemoveButton(QDialogButtonBox* self, QAbstractButton* button);
void QDialogButtonBox_Clear(QDialogButtonBox* self);
void QDialogButtonBox_Buttons(QDialogButtonBox* self, QAbstractButton*** _out, size_t* _out_len);
uintptr_t QDialogButtonBox_ButtonRole(QDialogButtonBox* self, QAbstractButton* button);
void QDialogButtonBox_SetStandardButtons(QDialogButtonBox* self, int buttons);
int QDialogButtonBox_StandardButtons(QDialogButtonBox* self);
uintptr_t QDialogButtonBox_StandardButton(QDialogButtonBox* self, QAbstractButton* button);
QPushButton* QDialogButtonBox_Button(QDialogButtonBox* self, uintptr_t which);
void QDialogButtonBox_SetCenterButtons(QDialogButtonBox* self, bool center);
bool QDialogButtonBox_CenterButtons(QDialogButtonBox* self);
void QDialogButtonBox_Clicked(QDialogButtonBox* self, QAbstractButton* button);
void QDialogButtonBox_connect_Clicked(QDialogButtonBox* self, void* slot);
void QDialogButtonBox_Accepted(QDialogButtonBox* self);
void QDialogButtonBox_connect_Accepted(QDialogButtonBox* self, void* slot);
void QDialogButtonBox_HelpRequested(QDialogButtonBox* self);
void QDialogButtonBox_connect_HelpRequested(QDialogButtonBox* self, void* slot);
void QDialogButtonBox_Rejected(QDialogButtonBox* self);
void QDialogButtonBox_connect_Rejected(QDialogButtonBox* self, void* slot);
void QDialogButtonBox_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QDialogButtonBox_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QDialogButtonBox_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QDialogButtonBox_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QDialogButtonBox_Delete(QDialogButtonBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
