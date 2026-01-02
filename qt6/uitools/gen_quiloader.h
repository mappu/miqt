#pragma once
#ifndef MIQT_QT6_UITOOLS_GEN_QUILOADER_H
#define MIQT_QT6_UITOOLS_GEN_QUILOADER_H

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
class QDir;
class QEvent;
class QIODevice;
class QLayout;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QUiLoader;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QActionGroup QActionGroup;
typedef struct QChildEvent QChildEvent;
typedef struct QDir QDir;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QLayout QLayout;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUiLoader QUiLoader;
typedef struct QWidget QWidget;
#endif

QUiLoader* QUiLoader_new();
QUiLoader* QUiLoader_new2(QObject* parent);
void QUiLoader_virtbase(QUiLoader* src, QObject** outptr_QObject);
QMetaObject* QUiLoader_metaObject(const QUiLoader* self);
void* QUiLoader_metacast(QUiLoader* self, const char* param1);
struct miqt_string QUiLoader_tr(const char* s);
struct miqt_array /* of struct miqt_string */  QUiLoader_pluginPaths(const QUiLoader* self);
void QUiLoader_clearPluginPaths(QUiLoader* self);
void QUiLoader_addPluginPath(QUiLoader* self, struct miqt_string path);
QWidget* QUiLoader_load(QUiLoader* self, QIODevice* device);
struct miqt_array /* of struct miqt_string */  QUiLoader_availableWidgets(const QUiLoader* self);
struct miqt_array /* of struct miqt_string */  QUiLoader_availableLayouts(const QUiLoader* self);
QWidget* QUiLoader_createWidget(QUiLoader* self, struct miqt_string className, QWidget* parent, struct miqt_string name);
QLayout* QUiLoader_createLayout(QUiLoader* self, struct miqt_string className, QObject* parent, struct miqt_string name);
QActionGroup* QUiLoader_createActionGroup(QUiLoader* self, QObject* parent, struct miqt_string name);
QAction* QUiLoader_createAction(QUiLoader* self, QObject* parent, struct miqt_string name);
void QUiLoader_setWorkingDirectory(QUiLoader* self, QDir* dir);
QDir* QUiLoader_workingDirectory(const QUiLoader* self);
void QUiLoader_setLanguageChangeEnabled(QUiLoader* self, bool enabled);
bool QUiLoader_isLanguageChangeEnabled(const QUiLoader* self);
void QUiLoader_setTranslationEnabled(QUiLoader* self, bool enabled);
bool QUiLoader_isTranslationEnabled(const QUiLoader* self);
struct miqt_string QUiLoader_errorString(const QUiLoader* self);
struct miqt_string QUiLoader_tr2(const char* s, const char* c);
struct miqt_string QUiLoader_tr3(const char* s, const char* c, int n);
QWidget* QUiLoader_load2(QUiLoader* self, QIODevice* device, QWidget* parentWidget);

bool QUiLoader_override_virtual_createWidget(void* self, intptr_t slot);
QWidget* QUiLoader_virtualbase_createWidget(void* self, struct miqt_string className, QWidget* parent, struct miqt_string name);
bool QUiLoader_override_virtual_createLayout(void* self, intptr_t slot);
QLayout* QUiLoader_virtualbase_createLayout(void* self, struct miqt_string className, QObject* parent, struct miqt_string name);
bool QUiLoader_override_virtual_createActionGroup(void* self, intptr_t slot);
QActionGroup* QUiLoader_virtualbase_createActionGroup(void* self, QObject* parent, struct miqt_string name);
bool QUiLoader_override_virtual_createAction(void* self, intptr_t slot);
QAction* QUiLoader_virtualbase_createAction(void* self, QObject* parent, struct miqt_string name);
bool QUiLoader_override_virtual_event(void* self, intptr_t slot);
bool QUiLoader_virtualbase_event(void* self, QEvent* event);
bool QUiLoader_override_virtual_eventFilter(void* self, intptr_t slot);
bool QUiLoader_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QUiLoader_override_virtual_timerEvent(void* self, intptr_t slot);
void QUiLoader_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QUiLoader_override_virtual_childEvent(void* self, intptr_t slot);
void QUiLoader_virtualbase_childEvent(void* self, QChildEvent* event);
bool QUiLoader_override_virtual_customEvent(void* self, intptr_t slot);
void QUiLoader_virtualbase_customEvent(void* self, QEvent* event);
bool QUiLoader_override_virtual_connectNotify(void* self, intptr_t slot);
void QUiLoader_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QUiLoader_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QUiLoader_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QUiLoader_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QUiLoader_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QUiLoader_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QUiLoader_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QUiLoader_delete(QUiLoader* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
