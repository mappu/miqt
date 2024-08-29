#ifndef GEN_QSHORTCUT_H
#define GEN_QSHORTCUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QShortcut* QShortcut_new5(QKeySequence* key, QWidget* parent, const char* member, const char* ambiguousMember, uintptr_t shortcutContext);
QMetaObject* QShortcut_MetaObject(QShortcut* self);
void QShortcut_Tr(const char* s, char** _out, int* _out_Strlen);
void QShortcut_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QShortcut_SetKey(QShortcut* self, QKeySequence* key);
QKeySequence* QShortcut_Key(QShortcut* self);
void QShortcut_SetEnabled(QShortcut* self, bool enable);
bool QShortcut_IsEnabled(QShortcut* self);
void QShortcut_SetContext(QShortcut* self, uintptr_t context);
uintptr_t QShortcut_Context(QShortcut* self);
void QShortcut_SetWhatsThis(QShortcut* self, const char* text, size_t text_Strlen);
void QShortcut_WhatsThis(QShortcut* self, char** _out, int* _out_Strlen);
void QShortcut_SetAutoRepeat(QShortcut* self, bool on);
bool QShortcut_AutoRepeat(QShortcut* self);
int QShortcut_Id(QShortcut* self);
QWidget* QShortcut_ParentWidget(QShortcut* self);
void QShortcut_Activated(QShortcut* self);
void QShortcut_connect_Activated(QShortcut* self, void* slot);
void QShortcut_ActivatedAmbiguously(QShortcut* self);
void QShortcut_connect_ActivatedAmbiguously(QShortcut* self, void* slot);
void QShortcut_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QShortcut_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QShortcut_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QShortcut_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QShortcut_Delete(QShortcut* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
