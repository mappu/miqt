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
QMetaObject* QButtonGroup_metaObject(const QButtonGroup* self);
void* QButtonGroup_metacast(QButtonGroup* self, const char* param1);
struct miqt_string QButtonGroup_tr(const char* s);
void QButtonGroup_setExclusive(QButtonGroup* self, bool exclusive);
bool QButtonGroup_exclusive(const QButtonGroup* self);
void QButtonGroup_addButton(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_removeButton(QButtonGroup* self, QAbstractButton* param1);
struct miqt_array /* of QAbstractButton* */  QButtonGroup_buttons(const QButtonGroup* self);
QAbstractButton* QButtonGroup_checkedButton(const QButtonGroup* self);
QAbstractButton* QButtonGroup_button(const QButtonGroup* self, int id);
void QButtonGroup_setId(QButtonGroup* self, QAbstractButton* button, int id);
int QButtonGroup_id(const QButtonGroup* self, QAbstractButton* button);
int QButtonGroup_checkedId(const QButtonGroup* self);
void QButtonGroup_buttonClicked(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_connect_buttonClicked(QButtonGroup* self, intptr_t slot);
void QButtonGroup_buttonPressed(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_connect_buttonPressed(QButtonGroup* self, intptr_t slot);
void QButtonGroup_buttonReleased(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_connect_buttonReleased(QButtonGroup* self, intptr_t slot);
void QButtonGroup_buttonToggled(QButtonGroup* self, QAbstractButton* param1, bool param2);
void QButtonGroup_connect_buttonToggled(QButtonGroup* self, intptr_t slot);
void QButtonGroup_idClicked(QButtonGroup* self, int param1);
void QButtonGroup_connect_idClicked(QButtonGroup* self, intptr_t slot);
void QButtonGroup_idPressed(QButtonGroup* self, int param1);
void QButtonGroup_connect_idPressed(QButtonGroup* self, intptr_t slot);
void QButtonGroup_idReleased(QButtonGroup* self, int param1);
void QButtonGroup_connect_idReleased(QButtonGroup* self, intptr_t slot);
void QButtonGroup_idToggled(QButtonGroup* self, int param1, bool param2);
void QButtonGroup_connect_idToggled(QButtonGroup* self, intptr_t slot);
struct miqt_string QButtonGroup_tr2(const char* s, const char* c);
struct miqt_string QButtonGroup_tr3(const char* s, const char* c, int n);
void QButtonGroup_addButton2(QButtonGroup* self, QAbstractButton* param1, int id);
bool QButtonGroup_override_virtual_event(void* self, intptr_t slot);
bool QButtonGroup_virtualbase_event(void* self, QEvent* event);
bool QButtonGroup_override_virtual_eventFilter(void* self, intptr_t slot);
bool QButtonGroup_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QButtonGroup_override_virtual_timerEvent(void* self, intptr_t slot);
void QButtonGroup_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QButtonGroup_override_virtual_childEvent(void* self, intptr_t slot);
void QButtonGroup_virtualbase_childEvent(void* self, QChildEvent* event);
bool QButtonGroup_override_virtual_customEvent(void* self, intptr_t slot);
void QButtonGroup_virtualbase_customEvent(void* self, QEvent* event);
bool QButtonGroup_override_virtual_connectNotify(void* self, intptr_t slot);
void QButtonGroup_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QButtonGroup_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QButtonGroup_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QButtonGroup_delete(QButtonGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
