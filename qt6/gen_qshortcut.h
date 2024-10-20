#ifndef GEN_QSHORTCUT_H
#define GEN_QSHORTCUT_H

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
class QObject;
class QShortcut;
#else
typedef struct QKeySequence QKeySequence;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QShortcut QShortcut;
#endif

QShortcut* QShortcut_new(QObject* parent);
QShortcut* QShortcut_new2(QKeySequence* key, QObject* parent);
QShortcut* QShortcut_new3(int key, QObject* parent);
QShortcut* QShortcut_new4(QKeySequence* key, QObject* parent, const char* member);
QShortcut* QShortcut_new5(QKeySequence* key, QObject* parent, const char* member, const char* ambiguousMember);
QShortcut* QShortcut_new6(QKeySequence* key, QObject* parent, const char* member, const char* ambiguousMember, int context);
QShortcut* QShortcut_new7(int key, QObject* parent, const char* member);
QShortcut* QShortcut_new8(int key, QObject* parent, const char* member, const char* ambiguousMember);
QShortcut* QShortcut_new9(int key, QObject* parent, const char* member, const char* ambiguousMember, int context);
QMetaObject* QShortcut_MetaObject(const QShortcut* self);
void* QShortcut_Metacast(QShortcut* self, const char* param1);
struct miqt_string QShortcut_Tr(const char* s);
void QShortcut_SetKey(QShortcut* self, QKeySequence* key);
QKeySequence* QShortcut_Key(const QShortcut* self);
void QShortcut_SetKeys(QShortcut* self, int key);
void QShortcut_SetKeysWithKeys(QShortcut* self, struct miqt_array* /* of QKeySequence* */ keys);
struct miqt_array* QShortcut_Keys(const QShortcut* self);
void QShortcut_SetEnabled(QShortcut* self, bool enable);
bool QShortcut_IsEnabled(const QShortcut* self);
void QShortcut_SetContext(QShortcut* self, int context);
int QShortcut_Context(const QShortcut* self);
void QShortcut_SetAutoRepeat(QShortcut* self, bool on);
bool QShortcut_AutoRepeat(const QShortcut* self);
int QShortcut_Id(const QShortcut* self);
void QShortcut_SetWhatsThis(QShortcut* self, struct miqt_string text);
struct miqt_string QShortcut_WhatsThis(const QShortcut* self);
void QShortcut_Activated(QShortcut* self);
void QShortcut_connect_Activated(QShortcut* self, intptr_t slot);
void QShortcut_ActivatedAmbiguously(QShortcut* self);
void QShortcut_connect_ActivatedAmbiguously(QShortcut* self, intptr_t slot);
struct miqt_string QShortcut_Tr2(const char* s, const char* c);
struct miqt_string QShortcut_Tr3(const char* s, const char* c, int n);
void QShortcut_Delete(QShortcut* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
