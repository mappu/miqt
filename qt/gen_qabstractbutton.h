#ifndef GEN_QABSTRACTBUTTON_H
#define GEN_QABSTRACTBUTTON_H

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

QMetaObject* QAbstractButton_MetaObject(const QAbstractButton* self);
void* QAbstractButton_Metacast(QAbstractButton* self, const char* param1);
struct miqt_string* QAbstractButton_Tr(const char* s);
struct miqt_string* QAbstractButton_TrUtf8(const char* s);
void QAbstractButton_SetText(QAbstractButton* self, struct miqt_string* text);
struct miqt_string* QAbstractButton_Text(const QAbstractButton* self);
void QAbstractButton_SetIcon(QAbstractButton* self, QIcon* icon);
QIcon* QAbstractButton_Icon(const QAbstractButton* self);
QSize* QAbstractButton_IconSize(const QAbstractButton* self);
void QAbstractButton_SetShortcut(QAbstractButton* self, QKeySequence* key);
QKeySequence* QAbstractButton_Shortcut(const QAbstractButton* self);
void QAbstractButton_SetCheckable(QAbstractButton* self, bool checkable);
bool QAbstractButton_IsCheckable(const QAbstractButton* self);
bool QAbstractButton_IsChecked(const QAbstractButton* self);
void QAbstractButton_SetDown(QAbstractButton* self, bool down);
bool QAbstractButton_IsDown(const QAbstractButton* self);
void QAbstractButton_SetAutoRepeat(QAbstractButton* self, bool autoRepeat);
bool QAbstractButton_AutoRepeat(const QAbstractButton* self);
void QAbstractButton_SetAutoRepeatDelay(QAbstractButton* self, int autoRepeatDelay);
int QAbstractButton_AutoRepeatDelay(const QAbstractButton* self);
void QAbstractButton_SetAutoRepeatInterval(QAbstractButton* self, int autoRepeatInterval);
int QAbstractButton_AutoRepeatInterval(const QAbstractButton* self);
void QAbstractButton_SetAutoExclusive(QAbstractButton* self, bool autoExclusive);
bool QAbstractButton_AutoExclusive(const QAbstractButton* self);
QButtonGroup* QAbstractButton_Group(const QAbstractButton* self);
void QAbstractButton_SetIconSize(QAbstractButton* self, QSize* size);
void QAbstractButton_AnimateClick(QAbstractButton* self);
void QAbstractButton_Click(QAbstractButton* self);
void QAbstractButton_Toggle(QAbstractButton* self);
void QAbstractButton_SetChecked(QAbstractButton* self, bool checked);
void QAbstractButton_Pressed(QAbstractButton* self);
void QAbstractButton_connect_Pressed(QAbstractButton* self, intptr_t slot);
void QAbstractButton_Released(QAbstractButton* self);
void QAbstractButton_connect_Released(QAbstractButton* self, intptr_t slot);
void QAbstractButton_Clicked(QAbstractButton* self);
void QAbstractButton_connect_Clicked(QAbstractButton* self, intptr_t slot);
void QAbstractButton_Toggled(QAbstractButton* self, bool checked);
void QAbstractButton_connect_Toggled(QAbstractButton* self, intptr_t slot);
struct miqt_string* QAbstractButton_Tr2(const char* s, const char* c);
struct miqt_string* QAbstractButton_Tr3(const char* s, const char* c, int n);
struct miqt_string* QAbstractButton_TrUtf82(const char* s, const char* c);
struct miqt_string* QAbstractButton_TrUtf83(const char* s, const char* c, int n);
void QAbstractButton_AnimateClick1(QAbstractButton* self, int msec);
void QAbstractButton_Clicked1(QAbstractButton* self, bool checked);
void QAbstractButton_connect_Clicked1(QAbstractButton* self, intptr_t slot);
void QAbstractButton_Delete(QAbstractButton* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
