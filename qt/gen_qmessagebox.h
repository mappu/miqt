#ifndef GEN_QMESSAGEBOX_H
#define GEN_QMESSAGEBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractButton;
class QCheckBox;
class QMessageBox;
class QMetaObject;
class QPixmap;
class QPushButton;
class QWidget;
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QCheckBox QCheckBox;
typedef struct QMessageBox QMessageBox;
typedef struct QMetaObject QMetaObject;
typedef struct QPixmap QPixmap;
typedef struct QPushButton QPushButton;
typedef struct QWidget QWidget;
#endif

QMessageBox* QMessageBox_new();
QMessageBox* QMessageBox_new2(uintptr_t icon, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen);
QMessageBox* QMessageBox_new3(const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, uintptr_t icon, int button0, int button1, int button2);
QMessageBox* QMessageBox_new4(QWidget* parent);
QMessageBox* QMessageBox_new5(uintptr_t icon, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons);
QMessageBox* QMessageBox_new6(uintptr_t icon, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons, QWidget* parent);
QMessageBox* QMessageBox_new7(uintptr_t icon, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons, QWidget* parent, int flags);
QMessageBox* QMessageBox_new8(const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, uintptr_t icon, int button0, int button1, int button2, QWidget* parent);
QMessageBox* QMessageBox_new9(const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, uintptr_t icon, int button0, int button1, int button2, QWidget* parent, int f);
QMetaObject* QMessageBox_MetaObject(QMessageBox* self);
void QMessageBox_Tr(const char* s, char** _out, int* _out_Strlen);
void QMessageBox_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QMessageBox_AddButton(QMessageBox* self, QAbstractButton* button, uintptr_t role);
QPushButton* QMessageBox_AddButton2(QMessageBox* self, const char* text, size_t text_Strlen, uintptr_t role);
QPushButton* QMessageBox_AddButtonWithButton(QMessageBox* self, uintptr_t button);
void QMessageBox_RemoveButton(QMessageBox* self, QAbstractButton* button);
void QMessageBox_Buttons(QMessageBox* self, QAbstractButton*** _out, size_t* _out_len);
uintptr_t QMessageBox_ButtonRole(QMessageBox* self, QAbstractButton* button);
void QMessageBox_SetStandardButtons(QMessageBox* self, int buttons);
int QMessageBox_StandardButtons(QMessageBox* self);
uintptr_t QMessageBox_StandardButton(QMessageBox* self, QAbstractButton* button);
QAbstractButton* QMessageBox_Button(QMessageBox* self, uintptr_t which);
QPushButton* QMessageBox_DefaultButton(QMessageBox* self);
void QMessageBox_SetDefaultButton(QMessageBox* self, QPushButton* button);
void QMessageBox_SetDefaultButtonWithButton(QMessageBox* self, uintptr_t button);
QAbstractButton* QMessageBox_EscapeButton(QMessageBox* self);
void QMessageBox_SetEscapeButton(QMessageBox* self, QAbstractButton* button);
void QMessageBox_SetEscapeButtonWithButton(QMessageBox* self, uintptr_t button);
QAbstractButton* QMessageBox_ClickedButton(QMessageBox* self);
void QMessageBox_Text(QMessageBox* self, char** _out, int* _out_Strlen);
void QMessageBox_SetText(QMessageBox* self, const char* text, size_t text_Strlen);
uintptr_t QMessageBox_Icon(QMessageBox* self);
void QMessageBox_SetIcon(QMessageBox* self, uintptr_t icon);
QPixmap* QMessageBox_IconPixmap(QMessageBox* self);
void QMessageBox_SetIconPixmap(QMessageBox* self, QPixmap* pixmap);
uintptr_t QMessageBox_TextFormat(QMessageBox* self);
void QMessageBox_SetTextFormat(QMessageBox* self, uintptr_t format);
void QMessageBox_SetTextInteractionFlags(QMessageBox* self, int flags);
int QMessageBox_TextInteractionFlags(QMessageBox* self);
void QMessageBox_SetCheckBox(QMessageBox* self, QCheckBox* cb);
QCheckBox* QMessageBox_CheckBox(QMessageBox* self);
uintptr_t QMessageBox_Information(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen);
uintptr_t QMessageBox_Question(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen);
uintptr_t QMessageBox_Warning(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen);
uintptr_t QMessageBox_Critical(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen);
void QMessageBox_About(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen);
void QMessageBox_AboutQt(QWidget* parent);
int QMessageBox_Information2(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0);
int QMessageBox_Information3(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen);
uintptr_t QMessageBox_Information4(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, uintptr_t button0);
int QMessageBox_Question2(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0);
int QMessageBox_Question3(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen);
int QMessageBox_Question4(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, uintptr_t button0, uintptr_t button1);
int QMessageBox_Warning2(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1);
int QMessageBox_Warning3(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen);
int QMessageBox_Warning4(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, uintptr_t button0, uintptr_t button1);
int QMessageBox_Critical2(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1);
int QMessageBox_Critical3(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen);
int QMessageBox_Critical4(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, uintptr_t button0, uintptr_t button1);
void QMessageBox_ButtonText(QMessageBox* self, int button, char** _out, int* _out_Strlen);
void QMessageBox_SetButtonText(QMessageBox* self, int button, const char* text, size_t text_Strlen);
void QMessageBox_InformativeText(QMessageBox* self, char** _out, int* _out_Strlen);
void QMessageBox_SetInformativeText(QMessageBox* self, const char* text, size_t text_Strlen);
void QMessageBox_DetailedText(QMessageBox* self, char** _out, int* _out_Strlen);
void QMessageBox_SetDetailedText(QMessageBox* self, const char* text, size_t text_Strlen);
void QMessageBox_SetWindowTitle(QMessageBox* self, const char* title, size_t title_Strlen);
void QMessageBox_SetWindowModality(QMessageBox* self, uintptr_t windowModality);
QPixmap* QMessageBox_StandardIcon(uintptr_t icon);
void QMessageBox_ButtonClicked(QMessageBox* self, QAbstractButton* button);
void QMessageBox_connect_ButtonClicked(QMessageBox* self, void* slot);
void QMessageBox_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QMessageBox_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QMessageBox_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QMessageBox_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
uintptr_t QMessageBox_Information42(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons);
uintptr_t QMessageBox_Information5(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons, uintptr_t defaultButton);
uintptr_t QMessageBox_Question42(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons);
uintptr_t QMessageBox_Question5(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons, uintptr_t defaultButton);
uintptr_t QMessageBox_Warning42(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons);
uintptr_t QMessageBox_Warning5(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons, uintptr_t defaultButton);
uintptr_t QMessageBox_Critical42(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons);
uintptr_t QMessageBox_Critical5(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons, uintptr_t defaultButton);
void QMessageBox_AboutQt2(QWidget* parent, const char* title, size_t title_Strlen);
int QMessageBox_Information52(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1);
int QMessageBox_Information6(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1, int button2);
int QMessageBox_Information53(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen);
int QMessageBox_Information62(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen);
int QMessageBox_Information7(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen, int defaultButtonNumber);
int QMessageBox_Information8(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen, int defaultButtonNumber, int escapeButtonNumber);
uintptr_t QMessageBox_Information54(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, uintptr_t button0, uintptr_t button1);
int QMessageBox_Question52(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1);
int QMessageBox_Question6(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1, int button2);
int QMessageBox_Question53(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen);
int QMessageBox_Question62(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen);
int QMessageBox_Question7(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen, int defaultButtonNumber);
int QMessageBox_Question8(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen, int defaultButtonNumber, int escapeButtonNumber);
int QMessageBox_Warning6(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1, int button2);
int QMessageBox_Warning52(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen);
int QMessageBox_Warning62(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen);
int QMessageBox_Warning7(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen, int defaultButtonNumber);
int QMessageBox_Warning8(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen, int defaultButtonNumber, int escapeButtonNumber);
int QMessageBox_Critical6(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1, int button2);
int QMessageBox_Critical52(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen);
int QMessageBox_Critical62(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen);
int QMessageBox_Critical7(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen, int defaultButtonNumber);
int QMessageBox_Critical8(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen, int defaultButtonNumber, int escapeButtonNumber);
void QMessageBox_Delete(QMessageBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
