#ifndef GEN_QSETTINGS_H
#define GEN_QSETTINGS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QSettings;
class QTextCodec;
class QVariant;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QTextCodec QTextCodec;
typedef struct QVariant QVariant;
#endif

QSettings* QSettings_new(const char* organization, size_t organization_Strlen);
QSettings* QSettings_new2();
QSettings* QSettings_new3(const char* organization, size_t organization_Strlen, const char* application, size_t application_Strlen);
QSettings* QSettings_new4(const char* organization, size_t organization_Strlen, const char* application, size_t application_Strlen, QObject* parent);
QSettings* QSettings_new5(QObject* parent);
QMetaObject* QSettings_MetaObject(QSettings* self);
void QSettings_Tr(char* s, char** _out, int* _out_Strlen);
void QSettings_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QSettings_Clear(QSettings* self);
void QSettings_Sync(QSettings* self);
bool QSettings_IsAtomicSyncRequired(QSettings* self);
void QSettings_SetAtomicSyncRequired(QSettings* self, bool enable);
void QSettings_BeginGroup(QSettings* self, const char* prefix, size_t prefix_Strlen);
void QSettings_EndGroup(QSettings* self);
void QSettings_Group(QSettings* self, char** _out, int* _out_Strlen);
int QSettings_BeginReadArray(QSettings* self, const char* prefix, size_t prefix_Strlen);
void QSettings_BeginWriteArray(QSettings* self, const char* prefix, size_t prefix_Strlen);
void QSettings_EndArray(QSettings* self);
void QSettings_SetArrayIndex(QSettings* self, int i);
void QSettings_AllKeys(QSettings* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QSettings_ChildKeys(QSettings* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QSettings_ChildGroups(QSettings* self, char*** _out, int** _out_Lengths, size_t* _out_len);
bool QSettings_IsWritable(QSettings* self);
void QSettings_SetValue(QSettings* self, const char* key, size_t key_Strlen, QVariant* value);
QVariant* QSettings_Value(QSettings* self, const char* key, size_t key_Strlen);
void QSettings_Remove(QSettings* self, const char* key, size_t key_Strlen);
bool QSettings_Contains(QSettings* self, const char* key, size_t key_Strlen);
void QSettings_SetFallbacksEnabled(QSettings* self, bool b);
bool QSettings_FallbacksEnabled(QSettings* self);
void QSettings_FileName(QSettings* self, char** _out, int* _out_Strlen);
void QSettings_OrganizationName(QSettings* self, char** _out, int* _out_Strlen);
void QSettings_ApplicationName(QSettings* self, char** _out, int* _out_Strlen);
void QSettings_SetIniCodec(QSettings* self, QTextCodec* codec);
void QSettings_SetIniCodecWithCodecName(QSettings* self, char* codecName);
QTextCodec* QSettings_IniCodec(QSettings* self);
void QSettings_SetSystemIniPath(const char* dir, size_t dir_Strlen);
void QSettings_SetUserIniPath(const char* dir, size_t dir_Strlen);
void QSettings_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QSettings_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSettings_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QSettings_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSettings_BeginWriteArray2(QSettings* self, const char* prefix, size_t prefix_Strlen, int size);
QVariant* QSettings_Value2(QSettings* self, const char* key, size_t key_Strlen, QVariant* defaultValue);
void QSettings_Delete(QSettings* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
