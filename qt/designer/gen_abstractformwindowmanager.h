#pragma once
#ifndef MIQT_QT_DESIGNER_GEN_ABSTRACTFORMWINDOWMANAGER_H
#define MIQT_QT_DESIGNER_GEN_ABSTRACTFORMWINDOWMANAGER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QActionGroup;
class QChildEvent;
class QDesignerDnDItemInterface;
class QDesignerFormEditorInterface;
class QDesignerFormWindowInterface;
class QDesignerFormWindowManagerInterface;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPixmap;
class QTimerEvent;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QActionGroup QActionGroup;
typedef struct QChildEvent QChildEvent;
typedef struct QDesignerDnDItemInterface QDesignerDnDItemInterface;
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QDesignerFormWindowInterface QDesignerFormWindowInterface;
typedef struct QDesignerFormWindowManagerInterface QDesignerFormWindowManagerInterface;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPixmap QPixmap;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QDesignerFormWindowManagerInterface* QDesignerFormWindowManagerInterface_new();
QDesignerFormWindowManagerInterface* QDesignerFormWindowManagerInterface_new2(QObject* parent);
void QDesignerFormWindowManagerInterface_virtbase(QDesignerFormWindowManagerInterface* src, QObject** outptr_QObject);
QMetaObject* QDesignerFormWindowManagerInterface_metaObject(const QDesignerFormWindowManagerInterface* self);
void* QDesignerFormWindowManagerInterface_metacast(QDesignerFormWindowManagerInterface* self, const char* param1);
struct miqt_string QDesignerFormWindowManagerInterface_tr(const char* s);
struct miqt_string QDesignerFormWindowManagerInterface_trUtf8(const char* s);
QAction* QDesignerFormWindowManagerInterface_action(const QDesignerFormWindowManagerInterface* self, int action);
QActionGroup* QDesignerFormWindowManagerInterface_actionGroup(const QDesignerFormWindowManagerInterface* self, int actionGroup);
QAction* QDesignerFormWindowManagerInterface_actionCut(const QDesignerFormWindowManagerInterface* self);
QAction* QDesignerFormWindowManagerInterface_actionCopy(const QDesignerFormWindowManagerInterface* self);
QAction* QDesignerFormWindowManagerInterface_actionPaste(const QDesignerFormWindowManagerInterface* self);
QAction* QDesignerFormWindowManagerInterface_actionDelete(const QDesignerFormWindowManagerInterface* self);
QAction* QDesignerFormWindowManagerInterface_actionSelectAll(const QDesignerFormWindowManagerInterface* self);
QAction* QDesignerFormWindowManagerInterface_actionLower(const QDesignerFormWindowManagerInterface* self);
QAction* QDesignerFormWindowManagerInterface_actionRaise(const QDesignerFormWindowManagerInterface* self);
QAction* QDesignerFormWindowManagerInterface_actionUndo(const QDesignerFormWindowManagerInterface* self);
QAction* QDesignerFormWindowManagerInterface_actionRedo(const QDesignerFormWindowManagerInterface* self);
QAction* QDesignerFormWindowManagerInterface_actionHorizontalLayout(const QDesignerFormWindowManagerInterface* self);
QAction* QDesignerFormWindowManagerInterface_actionVerticalLayout(const QDesignerFormWindowManagerInterface* self);
QAction* QDesignerFormWindowManagerInterface_actionSplitHorizontal(const QDesignerFormWindowManagerInterface* self);
QAction* QDesignerFormWindowManagerInterface_actionSplitVertical(const QDesignerFormWindowManagerInterface* self);
QAction* QDesignerFormWindowManagerInterface_actionGridLayout(const QDesignerFormWindowManagerInterface* self);
QAction* QDesignerFormWindowManagerInterface_actionFormLayout(const QDesignerFormWindowManagerInterface* self);
QAction* QDesignerFormWindowManagerInterface_actionBreakLayout(const QDesignerFormWindowManagerInterface* self);
QAction* QDesignerFormWindowManagerInterface_actionAdjustSize(const QDesignerFormWindowManagerInterface* self);
QAction* QDesignerFormWindowManagerInterface_actionSimplifyLayout(const QDesignerFormWindowManagerInterface* self);
QDesignerFormWindowInterface* QDesignerFormWindowManagerInterface_activeFormWindow(const QDesignerFormWindowManagerInterface* self);
int QDesignerFormWindowManagerInterface_formWindowCount(const QDesignerFormWindowManagerInterface* self);
QDesignerFormWindowInterface* QDesignerFormWindowManagerInterface_formWindow(const QDesignerFormWindowManagerInterface* self, int index);
QDesignerFormWindowInterface* QDesignerFormWindowManagerInterface_createFormWindow(QDesignerFormWindowManagerInterface* self, QWidget* parentWidget, int flags);
QDesignerFormEditorInterface* QDesignerFormWindowManagerInterface_core(const QDesignerFormWindowManagerInterface* self);
void QDesignerFormWindowManagerInterface_dragItems(QDesignerFormWindowManagerInterface* self, struct miqt_array /* of QDesignerDnDItemInterface* */  item_list);
QPixmap* QDesignerFormWindowManagerInterface_createPreviewPixmap(const QDesignerFormWindowManagerInterface* self);
void QDesignerFormWindowManagerInterface_formWindowAdded(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow);
void QDesignerFormWindowManagerInterface_connect_formWindowAdded(QDesignerFormWindowManagerInterface* self, intptr_t slot);
void QDesignerFormWindowManagerInterface_formWindowRemoved(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow);
void QDesignerFormWindowManagerInterface_connect_formWindowRemoved(QDesignerFormWindowManagerInterface* self, intptr_t slot);
void QDesignerFormWindowManagerInterface_activeFormWindowChanged(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow);
void QDesignerFormWindowManagerInterface_connect_activeFormWindowChanged(QDesignerFormWindowManagerInterface* self, intptr_t slot);
void QDesignerFormWindowManagerInterface_formWindowSettingsChanged(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* fw);
void QDesignerFormWindowManagerInterface_connect_formWindowSettingsChanged(QDesignerFormWindowManagerInterface* self, intptr_t slot);
void QDesignerFormWindowManagerInterface_addFormWindow(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow);
void QDesignerFormWindowManagerInterface_removeFormWindow(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow);
void QDesignerFormWindowManagerInterface_setActiveFormWindow(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow);
void QDesignerFormWindowManagerInterface_showPreview(QDesignerFormWindowManagerInterface* self);
void QDesignerFormWindowManagerInterface_closeAllPreviews(QDesignerFormWindowManagerInterface* self);
void QDesignerFormWindowManagerInterface_showPluginDialog(QDesignerFormWindowManagerInterface* self);
struct miqt_string QDesignerFormWindowManagerInterface_tr2(const char* s, const char* c);
struct miqt_string QDesignerFormWindowManagerInterface_tr3(const char* s, const char* c, int n);
struct miqt_string QDesignerFormWindowManagerInterface_trUtf82(const char* s, const char* c);
struct miqt_string QDesignerFormWindowManagerInterface_trUtf83(const char* s, const char* c, int n);

bool QDesignerFormWindowManagerInterface_override_virtual_action(void* self, intptr_t slot);
QAction* QDesignerFormWindowManagerInterface_virtualbase_action(const void* self, int action);
bool QDesignerFormWindowManagerInterface_override_virtual_actionGroup(void* self, intptr_t slot);
QActionGroup* QDesignerFormWindowManagerInterface_virtualbase_actionGroup(const void* self, int actionGroup);
bool QDesignerFormWindowManagerInterface_override_virtual_activeFormWindow(void* self, intptr_t slot);
QDesignerFormWindowInterface* QDesignerFormWindowManagerInterface_virtualbase_activeFormWindow(const void* self);
bool QDesignerFormWindowManagerInterface_override_virtual_formWindowCount(void* self, intptr_t slot);
int QDesignerFormWindowManagerInterface_virtualbase_formWindowCount(const void* self);
bool QDesignerFormWindowManagerInterface_override_virtual_formWindow(void* self, intptr_t slot);
QDesignerFormWindowInterface* QDesignerFormWindowManagerInterface_virtualbase_formWindow(const void* self, int index);
bool QDesignerFormWindowManagerInterface_override_virtual_createFormWindow(void* self, intptr_t slot);
QDesignerFormWindowInterface* QDesignerFormWindowManagerInterface_virtualbase_createFormWindow(void* self, QWidget* parentWidget, int flags);
bool QDesignerFormWindowManagerInterface_override_virtual_core(void* self, intptr_t slot);
QDesignerFormEditorInterface* QDesignerFormWindowManagerInterface_virtualbase_core(const void* self);
bool QDesignerFormWindowManagerInterface_override_virtual_dragItems(void* self, intptr_t slot);
void QDesignerFormWindowManagerInterface_virtualbase_dragItems(void* self, struct miqt_array /* of QDesignerDnDItemInterface* */  item_list);
bool QDesignerFormWindowManagerInterface_override_virtual_createPreviewPixmap(void* self, intptr_t slot);
QPixmap* QDesignerFormWindowManagerInterface_virtualbase_createPreviewPixmap(const void* self);
bool QDesignerFormWindowManagerInterface_override_virtual_addFormWindow(void* self, intptr_t slot);
void QDesignerFormWindowManagerInterface_virtualbase_addFormWindow(void* self, QDesignerFormWindowInterface* formWindow);
bool QDesignerFormWindowManagerInterface_override_virtual_removeFormWindow(void* self, intptr_t slot);
void QDesignerFormWindowManagerInterface_virtualbase_removeFormWindow(void* self, QDesignerFormWindowInterface* formWindow);
bool QDesignerFormWindowManagerInterface_override_virtual_setActiveFormWindow(void* self, intptr_t slot);
void QDesignerFormWindowManagerInterface_virtualbase_setActiveFormWindow(void* self, QDesignerFormWindowInterface* formWindow);
bool QDesignerFormWindowManagerInterface_override_virtual_showPreview(void* self, intptr_t slot);
void QDesignerFormWindowManagerInterface_virtualbase_showPreview(void* self);
bool QDesignerFormWindowManagerInterface_override_virtual_closeAllPreviews(void* self, intptr_t slot);
void QDesignerFormWindowManagerInterface_virtualbase_closeAllPreviews(void* self);
bool QDesignerFormWindowManagerInterface_override_virtual_showPluginDialog(void* self, intptr_t slot);
void QDesignerFormWindowManagerInterface_virtualbase_showPluginDialog(void* self);
bool QDesignerFormWindowManagerInterface_override_virtual_event(void* self, intptr_t slot);
bool QDesignerFormWindowManagerInterface_virtualbase_event(void* self, QEvent* event);
bool QDesignerFormWindowManagerInterface_override_virtual_eventFilter(void* self, intptr_t slot);
bool QDesignerFormWindowManagerInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QDesignerFormWindowManagerInterface_override_virtual_timerEvent(void* self, intptr_t slot);
void QDesignerFormWindowManagerInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QDesignerFormWindowManagerInterface_override_virtual_childEvent(void* self, intptr_t slot);
void QDesignerFormWindowManagerInterface_virtualbase_childEvent(void* self, QChildEvent* event);
bool QDesignerFormWindowManagerInterface_override_virtual_customEvent(void* self, intptr_t slot);
void QDesignerFormWindowManagerInterface_virtualbase_customEvent(void* self, QEvent* event);
bool QDesignerFormWindowManagerInterface_override_virtual_connectNotify(void* self, intptr_t slot);
void QDesignerFormWindowManagerInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QDesignerFormWindowManagerInterface_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QDesignerFormWindowManagerInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QDesignerFormWindowManagerInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QDesignerFormWindowManagerInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QDesignerFormWindowManagerInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QDesignerFormWindowManagerInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QDesignerFormWindowManagerInterface_delete(QDesignerFormWindowManagerInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
