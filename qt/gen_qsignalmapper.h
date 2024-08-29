#ifndef GEN_QSIGNALMAPPER_H
#define GEN_QSIGNALMAPPER_H

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
class QSignalMapper;
class QWidget;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSignalMapper QSignalMapper;
typedef struct QWidget QWidget;
#endif

QSignalMapper* QSignalMapper_new();
QSignalMapper* QSignalMapper_new2(QObject* parent);
QMetaObject* QSignalMapper_MetaObject(QSignalMapper* self);
void QSignalMapper_Tr(const char* s, char** _out, int* _out_Strlen);
void QSignalMapper_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QSignalMapper_SetMapping(QSignalMapper* self, QObject* sender, int id);
void QSignalMapper_SetMapping2(QSignalMapper* self, QObject* sender, const char* text, size_t text_Strlen);
void QSignalMapper_SetMapping3(QSignalMapper* self, QObject* sender, QWidget* widget);
void QSignalMapper_SetMapping4(QSignalMapper* self, QObject* sender, QObject* object);
void QSignalMapper_RemoveMappings(QSignalMapper* self, QObject* sender);
QObject* QSignalMapper_Mapping(QSignalMapper* self, int id);
QObject* QSignalMapper_MappingWithText(QSignalMapper* self, const char* text, size_t text_Strlen);
QObject* QSignalMapper_MappingWithWidget(QSignalMapper* self, QWidget* widget);
QObject* QSignalMapper_MappingWithObject(QSignalMapper* self, QObject* object);
void QSignalMapper_Mapped(QSignalMapper* self, int param1);
void QSignalMapper_connect_Mapped(QSignalMapper* self, void* slot);
void QSignalMapper_MappedWithQString(QSignalMapper* self, const char* param1, size_t param1_Strlen);
void QSignalMapper_connect_MappedWithQString(QSignalMapper* self, void* slot);
void QSignalMapper_MappedWithQWidget(QSignalMapper* self, QWidget* param1);
void QSignalMapper_connect_MappedWithQWidget(QSignalMapper* self, void* slot);
void QSignalMapper_MappedWithQObject(QSignalMapper* self, QObject* param1);
void QSignalMapper_connect_MappedWithQObject(QSignalMapper* self, void* slot);
void QSignalMapper_MappedInt(QSignalMapper* self, int param1);
void QSignalMapper_connect_MappedInt(QSignalMapper* self, void* slot);
void QSignalMapper_MappedString(QSignalMapper* self, const char* param1, size_t param1_Strlen);
void QSignalMapper_connect_MappedString(QSignalMapper* self, void* slot);
void QSignalMapper_MappedWidget(QSignalMapper* self, QWidget* param1);
void QSignalMapper_connect_MappedWidget(QSignalMapper* self, void* slot);
void QSignalMapper_MappedObject(QSignalMapper* self, QObject* param1);
void QSignalMapper_connect_MappedObject(QSignalMapper* self, void* slot);
void QSignalMapper_Map(QSignalMapper* self);
void QSignalMapper_MapWithSender(QSignalMapper* self, QObject* sender);
void QSignalMapper_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QSignalMapper_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QSignalMapper_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QSignalMapper_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QSignalMapper_Delete(QSignalMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
