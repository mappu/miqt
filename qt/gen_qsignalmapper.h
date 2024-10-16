#ifndef GEN_QSIGNALMAPPER_H
#define GEN_QSIGNALMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
QMetaObject* QSignalMapper_MetaObject(const QSignalMapper* self);
void* QSignalMapper_Metacast(QSignalMapper* self, const char* param1);
struct miqt_string* QSignalMapper_Tr(const char* s);
struct miqt_string* QSignalMapper_TrUtf8(const char* s);
void QSignalMapper_SetMapping(QSignalMapper* self, QObject* sender, int id);
void QSignalMapper_SetMapping2(QSignalMapper* self, QObject* sender, struct miqt_string* text);
void QSignalMapper_SetMapping3(QSignalMapper* self, QObject* sender, QWidget* widget);
void QSignalMapper_SetMapping4(QSignalMapper* self, QObject* sender, QObject* object);
void QSignalMapper_RemoveMappings(QSignalMapper* self, QObject* sender);
QObject* QSignalMapper_Mapping(const QSignalMapper* self, int id);
QObject* QSignalMapper_MappingWithText(const QSignalMapper* self, struct miqt_string* text);
QObject* QSignalMapper_MappingWithWidget(const QSignalMapper* self, QWidget* widget);
QObject* QSignalMapper_MappingWithObject(const QSignalMapper* self, QObject* object);
void QSignalMapper_Mapped(QSignalMapper* self, int param1);
void QSignalMapper_connect_Mapped(QSignalMapper* self, intptr_t slot);
void QSignalMapper_MappedWithQString(QSignalMapper* self, struct miqt_string* param1);
void QSignalMapper_connect_MappedWithQString(QSignalMapper* self, intptr_t slot);
void QSignalMapper_MappedWithQWidget(QSignalMapper* self, QWidget* param1);
void QSignalMapper_connect_MappedWithQWidget(QSignalMapper* self, intptr_t slot);
void QSignalMapper_MappedWithQObject(QSignalMapper* self, QObject* param1);
void QSignalMapper_connect_MappedWithQObject(QSignalMapper* self, intptr_t slot);
void QSignalMapper_MappedInt(QSignalMapper* self, int param1);
void QSignalMapper_connect_MappedInt(QSignalMapper* self, intptr_t slot);
void QSignalMapper_MappedString(QSignalMapper* self, struct miqt_string* param1);
void QSignalMapper_connect_MappedString(QSignalMapper* self, intptr_t slot);
void QSignalMapper_MappedWidget(QSignalMapper* self, QWidget* param1);
void QSignalMapper_connect_MappedWidget(QSignalMapper* self, intptr_t slot);
void QSignalMapper_MappedObject(QSignalMapper* self, QObject* param1);
void QSignalMapper_connect_MappedObject(QSignalMapper* self, intptr_t slot);
void QSignalMapper_Map(QSignalMapper* self);
void QSignalMapper_MapWithSender(QSignalMapper* self, QObject* sender);
struct miqt_string* QSignalMapper_Tr2(const char* s, const char* c);
struct miqt_string* QSignalMapper_Tr3(const char* s, const char* c, int n);
struct miqt_string* QSignalMapper_TrUtf82(const char* s, const char* c);
struct miqt_string* QSignalMapper_TrUtf83(const char* s, const char* c, int n);
void QSignalMapper_Delete(QSignalMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
