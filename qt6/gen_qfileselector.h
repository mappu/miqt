#ifndef GEN_QFILESELECTOR_H
#define GEN_QFILESELECTOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFileSelector;
class QMetaObject;
class QObject;
class QUrl;
#else
typedef struct QFileSelector QFileSelector;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QFileSelector* QFileSelector_new();
QFileSelector* QFileSelector_new2(QObject* parent);
QMetaObject* QFileSelector_MetaObject(const QFileSelector* self);
void* QFileSelector_Metacast(QFileSelector* self, const char* param1);
struct miqt_string QFileSelector_Tr(const char* s);
struct miqt_string QFileSelector_Select(const QFileSelector* self, struct miqt_string filePath);
QUrl* QFileSelector_SelectWithFilePath(const QFileSelector* self, QUrl* filePath);
struct miqt_array QFileSelector_ExtraSelectors(const QFileSelector* self);
void QFileSelector_SetExtraSelectors(QFileSelector* self, struct miqt_array /* of struct miqt_string */ list);
struct miqt_array QFileSelector_AllSelectors(const QFileSelector* self);
struct miqt_string QFileSelector_Tr2(const char* s, const char* c);
struct miqt_string QFileSelector_Tr3(const char* s, const char* c, int n);
void QFileSelector_Delete(QFileSelector* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
