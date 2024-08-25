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
QMetaObject* QShortcut_MetaObject(QShortcut* self);
void QShortcut_Tr(char* s, char** _out, int* _out_Strlen);
void QShortcut_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QShortcut_SetKey(QShortcut* self, QKeySequence* key);
QKeySequence* QShortcut_Key(QShortcut* self);
void QShortcut_SetEnabled(QShortcut* self, bool enable);
bool QShortcut_IsEnabled(QShortcut* self);
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
void QShortcut_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QShortcut_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QShortcut_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QShortcut_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QShortcut_Delete(QShortcut* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
