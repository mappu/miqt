#pragma once
#ifndef MIQT_QT6_GEN_QBUTTONGROUP_H
#define MIQT_QT6_GEN_QBUTTONGROUP_H

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
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QButtonGroup QButtonGroup;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QButtonGroup* QButtonGroup_new();
QButtonGroup* QButtonGroup_new2(QObject* parent);
void QButtonGroup_virtbase(QButtonGroup* src, QObject** outptr_QObject);
QMetaObject* QButtonGroup_MetaObject(const QButtonGroup* self);
void* QButtonGroup_Metacast(QButtonGroup* self, const char* param1);
struct miqt_string QButtonGroup_Tr(const char* s);
void QButtonGroup_SetExclusive(QButtonGroup* self, bool exclusive);
bool QButtonGroup_Exclusive(const QButtonGroup* self);
void QButtonGroup_AddButton(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_RemoveButton(QButtonGroup* self, QAbstractButton* param1);
struct miqt_array /* of QAbstractButton* */  QButtonGroup_Buttons(const QButtonGroup* self);
QAbstractButton* QButtonGroup_CheckedButton(const QButtonGroup* self);
QAbstractButton* QButtonGroup_Button(const QButtonGroup* self, int id);
void QButtonGroup_SetId(QButtonGroup* self, QAbstractButton* button, int id);
int QButtonGroup_Id(const QButtonGroup* self, QAbstractButton* button);
int QButtonGroup_CheckedId(const QButtonGroup* self);
void QButtonGroup_ButtonClicked(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_connect_ButtonClicked(QButtonGroup* self, intptr_t slot);
void QButtonGroup_ButtonPressed(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_connect_ButtonPressed(QButtonGroup* self, intptr_t slot);
void QButtonGroup_ButtonReleased(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_connect_ButtonReleased(QButtonGroup* self, intptr_t slot);
void QButtonGroup_ButtonToggled(QButtonGroup* self, QAbstractButton* param1, bool param2);
void QButtonGroup_connect_ButtonToggled(QButtonGroup* self, intptr_t slot);
void QButtonGroup_IdClicked(QButtonGroup* self, int param1);
void QButtonGroup_connect_IdClicked(QButtonGroup* self, intptr_t slot);
void QButtonGroup_IdPressed(QButtonGroup* self, int param1);
void QButtonGroup_connect_IdPressed(QButtonGroup* self, intptr_t slot);
void QButtonGroup_IdReleased(QButtonGroup* self, int param1);
void QButtonGroup_connect_IdReleased(QButtonGroup* self, intptr_t slot);
void QButtonGroup_IdToggled(QButtonGroup* self, int param1, bool param2);
void QButtonGroup_connect_IdToggled(QButtonGroup* self, intptr_t slot);
struct miqt_string QButtonGroup_Tr2(const char* s, const char* c);
struct miqt_string QButtonGroup_Tr3(const char* s, const char* c, int n);
void QButtonGroup_AddButton2(QButtonGroup* self, QAbstractButton* param1, int id);
void QButtonGroup_override_virtual_Event(void* self, intptr_t slot);
bool QButtonGroup_virtualbase_Event(void* self, QEvent* event);
void QButtonGroup_override_virtual_EventFilter(void* self, intptr_t slot);
bool QButtonGroup_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QButtonGroup_override_virtual_TimerEvent(void* self, intptr_t slot);
void QButtonGroup_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QButtonGroup_override_virtual_ChildEvent(void* self, intptr_t slot);
void QButtonGroup_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QButtonGroup_override_virtual_CustomEvent(void* self, intptr_t slot);
void QButtonGroup_virtualbase_CustomEvent(void* self, QEvent* event);
void QButtonGroup_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QButtonGroup_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QButtonGroup_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QButtonGroup_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QButtonGroup_Delete(QButtonGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
