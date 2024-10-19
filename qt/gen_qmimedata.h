#ifndef GEN_QMIMEDATA_H
#define GEN_QMIMEDATA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QMetaObject;
class QMimeData;
class QUrl;
class QVariant;
#else
typedef struct QByteArray QByteArray;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

QMimeData* QMimeData_new();
QMetaObject* QMimeData_MetaObject(const QMimeData* self);
void* QMimeData_Metacast(QMimeData* self, const char* param1);
struct miqt_string QMimeData_Tr(const char* s);
struct miqt_string QMimeData_TrUtf8(const char* s);
struct miqt_array* QMimeData_Urls(const QMimeData* self);
void QMimeData_SetUrls(QMimeData* self, struct miqt_array* /* of QUrl* */ urls);
bool QMimeData_HasUrls(const QMimeData* self);
struct miqt_string QMimeData_Text(const QMimeData* self);
void QMimeData_SetText(QMimeData* self, struct miqt_string text);
bool QMimeData_HasText(const QMimeData* self);
struct miqt_string QMimeData_Html(const QMimeData* self);
void QMimeData_SetHtml(QMimeData* self, struct miqt_string html);
bool QMimeData_HasHtml(const QMimeData* self);
QVariant* QMimeData_ImageData(const QMimeData* self);
void QMimeData_SetImageData(QMimeData* self, QVariant* image);
bool QMimeData_HasImage(const QMimeData* self);
QVariant* QMimeData_ColorData(const QMimeData* self);
void QMimeData_SetColorData(QMimeData* self, QVariant* color);
bool QMimeData_HasColor(const QMimeData* self);
struct miqt_string QMimeData_Data(const QMimeData* self, struct miqt_string mimetype);
void QMimeData_SetData(QMimeData* self, struct miqt_string mimetype, struct miqt_string data);
void QMimeData_RemoveFormat(QMimeData* self, struct miqt_string mimetype);
bool QMimeData_HasFormat(const QMimeData* self, struct miqt_string mimetype);
struct miqt_array* QMimeData_Formats(const QMimeData* self);
void QMimeData_Clear(QMimeData* self);
struct miqt_string QMimeData_Tr2(const char* s, const char* c);
struct miqt_string QMimeData_Tr3(const char* s, const char* c, int n);
struct miqt_string QMimeData_TrUtf82(const char* s, const char* c);
struct miqt_string QMimeData_TrUtf83(const char* s, const char* c, int n);
void QMimeData_Delete(QMimeData* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
