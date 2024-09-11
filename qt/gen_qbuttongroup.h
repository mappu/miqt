#ifndef GEN_QBUTTONGROUP_H
#define GEN_QBUTTONGROUP_H

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
class QMetaObject;
class QObject;
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QButtonGroup QButtonGroup;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QButtonGroup* QButtonGroup_new();
QButtonGroup* QButtonGroup_new2(QObject* parent);
QMetaObject* QButtonGroup_MetaObject(const QButtonGroup* self);
void QButtonGroup_Tr(const char* s, char** _out, int* _out_Strlen);
void QButtonGroup_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QButtonGroup_SetExclusive(QButtonGroup* self, bool exclusive);
bool QButtonGroup_Exclusive(const QButtonGroup* self);
void QButtonGroup_AddButton(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_RemoveButton(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_Buttons(const QButtonGroup* self, QAbstractButton*** _out, size_t* _out_len);
QAbstractButton* QButtonGroup_CheckedButton(const QButtonGroup* self);
QAbstractButton* QButtonGroup_Button(const QButtonGroup* self, int id);
void QButtonGroup_SetId(QButtonGroup* self, QAbstractButton* button, int id);
int QButtonGroup_Id(const QButtonGroup* self, QAbstractButton* button);
int QButtonGroup_CheckedId(const QButtonGroup* self);
void QButtonGroup_ButtonClicked(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_connect_ButtonClicked(QButtonGroup* self, void* slot);
void QButtonGroup_ButtonPressed(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_connect_ButtonPressed(QButtonGroup* self, void* slot);
void QButtonGroup_ButtonReleased(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_connect_ButtonReleased(QButtonGroup* self, void* slot);
void QButtonGroup_ButtonToggled(QButtonGroup* self, QAbstractButton* param1, bool param2);
void QButtonGroup_connect_ButtonToggled(QButtonGroup* self, void* slot);
void QButtonGroup_IdClicked(QButtonGroup* self, int param1);
void QButtonGroup_connect_IdClicked(QButtonGroup* self, void* slot);
void QButtonGroup_IdPressed(QButtonGroup* self, int param1);
void QButtonGroup_connect_IdPressed(QButtonGroup* self, void* slot);
void QButtonGroup_IdReleased(QButtonGroup* self, int param1);
void QButtonGroup_connect_IdReleased(QButtonGroup* self, void* slot);
void QButtonGroup_IdToggled(QButtonGroup* self, int param1, bool param2);
void QButtonGroup_connect_IdToggled(QButtonGroup* self, void* slot);
void QButtonGroup_ButtonClickedWithInt(QButtonGroup* self, int param1);
void QButtonGroup_connect_ButtonClickedWithInt(QButtonGroup* self, void* slot);
void QButtonGroup_ButtonPressedWithInt(QButtonGroup* self, int param1);
void QButtonGroup_connect_ButtonPressedWithInt(QButtonGroup* self, void* slot);
void QButtonGroup_ButtonReleasedWithInt(QButtonGroup* self, int param1);
void QButtonGroup_connect_ButtonReleasedWithInt(QButtonGroup* self, void* slot);
void QButtonGroup_ButtonToggled2(QButtonGroup* self, int param1, bool param2);
void QButtonGroup_connect_ButtonToggled2(QButtonGroup* self, void* slot);
void QButtonGroup_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QButtonGroup_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QButtonGroup_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QButtonGroup_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QButtonGroup_AddButton2(QButtonGroup* self, QAbstractButton* param1, int id);
void QButtonGroup_Delete(QButtonGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
