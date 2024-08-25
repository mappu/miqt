#ifndef GEN_QABSTRACTBUTTON_H
#define GEN_QABSTRACTBUTTON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractButton;
class QButtonGroup;
class QIcon;
class QKeySequence;
class QMetaObject;
class QSize;
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QButtonGroup QButtonGroup;
typedef struct QIcon QIcon;
typedef struct QKeySequence QKeySequence;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
#endif

QMetaObject* QAbstractButton_MetaObject(QAbstractButton* self);
void QAbstractButton_Tr(char* s, char** _out, int* _out_Strlen);
void QAbstractButton_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QAbstractButton_SetText(QAbstractButton* self, const char* text, size_t text_Strlen);
void QAbstractButton_Text(QAbstractButton* self, char** _out, int* _out_Strlen);
void QAbstractButton_SetIcon(QAbstractButton* self, QIcon* icon);
QIcon* QAbstractButton_Icon(QAbstractButton* self);
QSize* QAbstractButton_IconSize(QAbstractButton* self);
void QAbstractButton_SetShortcut(QAbstractButton* self, QKeySequence* key);
QKeySequence* QAbstractButton_Shortcut(QAbstractButton* self);
void QAbstractButton_SetCheckable(QAbstractButton* self, bool checkable);
bool QAbstractButton_IsCheckable(QAbstractButton* self);
bool QAbstractButton_IsChecked(QAbstractButton* self);
void QAbstractButton_SetDown(QAbstractButton* self, bool down);
bool QAbstractButton_IsDown(QAbstractButton* self);
void QAbstractButton_SetAutoRepeat(QAbstractButton* self, bool autoRepeat);
bool QAbstractButton_AutoRepeat(QAbstractButton* self);
void QAbstractButton_SetAutoRepeatDelay(QAbstractButton* self, int autoRepeatDelay);
int QAbstractButton_AutoRepeatDelay(QAbstractButton* self);
void QAbstractButton_SetAutoRepeatInterval(QAbstractButton* self, int autoRepeatInterval);
int QAbstractButton_AutoRepeatInterval(QAbstractButton* self);
void QAbstractButton_SetAutoExclusive(QAbstractButton* self, bool autoExclusive);
bool QAbstractButton_AutoExclusive(QAbstractButton* self);
QButtonGroup* QAbstractButton_Group(QAbstractButton* self);
void QAbstractButton_SetIconSize(QAbstractButton* self, QSize* size);
void QAbstractButton_AnimateClick(QAbstractButton* self);
void QAbstractButton_Click(QAbstractButton* self);
void QAbstractButton_Toggle(QAbstractButton* self);
void QAbstractButton_SetChecked(QAbstractButton* self, bool checked);
void QAbstractButton_Pressed(QAbstractButton* self);
void QAbstractButton_connect_Pressed(QAbstractButton* self, void* slot);
void QAbstractButton_Released(QAbstractButton* self);
void QAbstractButton_connect_Released(QAbstractButton* self, void* slot);
void QAbstractButton_Clicked(QAbstractButton* self);
void QAbstractButton_Toggled(QAbstractButton* self, bool checked);
void QAbstractButton_connect_Toggled(QAbstractButton* self, void* slot);
void QAbstractButton_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QAbstractButton_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QAbstractButton_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QAbstractButton_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QAbstractButton_AnimateClick1(QAbstractButton* self, int msec);
void QAbstractButton_Clicked1(QAbstractButton* self, bool checked);
void QAbstractButton_connect_Clicked1(QAbstractButton* self, void* slot);
void QAbstractButton_Delete(QAbstractButton* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
