#pragma once
#ifndef MIQT_QT_GEN_QSHORTCUT_H
#define MIQT_QT_GEN_QSHORTCUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QKeySequence;
class QMetaObject;
class QShortcut;
class QWidget;
#else
typedef struct QKeySequence QKeySequence;
typedef struct QMetaObject QMetaObject;
typedef struct QShortcut QShortcut;
typedef struct QWidget QWidget;
#endif

QShortcut* QShortcut_new(QWidget* parent);
QShortcut* QShortcut_new2(QKeySequence* key, QWidget* parent);
QShortcut* QShortcut_new3(QKeySequence* key, QWidget* parent, const char* member);
QShortcut* QShortcut_new4(QKeySequence* key, QWidget* parent, const char* member, const char* ambiguousMember);
QShortcut* QShortcut_new5(QKeySequence* key, QWidget* parent, const char* member, const char* ambiguousMember, int shortcutContext);
QMetaObject* QShortcut_MetaObject(const QShortcut* self);
void* QShortcut_Metacast(QShortcut* self, const char* param1);
struct miqt_string QShortcut_Tr(const char* s);
struct miqt_string QShortcut_TrUtf8(const char* s);
void QShortcut_SetKey(QShortcut* self, QKeySequence* key);
QKeySequence* QShortcut_Key(const QShortcut* self);
void QShortcut_SetEnabled(QShortcut* self, bool enable);
bool QShortcut_IsEnabled(const QShortcut* self);
void QShortcut_SetContext(QShortcut* self, int context);
int QShortcut_Context(const QShortcut* self);
void QShortcut_SetWhatsThis(QShortcut* self, struct miqt_string text);
struct miqt_string QShortcut_WhatsThis(const QShortcut* self);
void QShortcut_SetAutoRepeat(QShortcut* self, bool on);
bool QShortcut_AutoRepeat(const QShortcut* self);
int QShortcut_Id(const QShortcut* self);
QWidget* QShortcut_ParentWidget(const QShortcut* self);
void QShortcut_Activated(QShortcut* self);
void QShortcut_connect_Activated(QShortcut* self, intptr_t slot);
void QShortcut_ActivatedAmbiguously(QShortcut* self);
void QShortcut_connect_ActivatedAmbiguously(QShortcut* self, intptr_t slot);
struct miqt_string QShortcut_Tr2(const char* s, const char* c);
struct miqt_string QShortcut_Tr3(const char* s, const char* c, int n);
struct miqt_string QShortcut_TrUtf82(const char* s, const char* c);
struct miqt_string QShortcut_TrUtf83(const char* s, const char* c, int n);
void QShortcut_Delete(QShortcut* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
