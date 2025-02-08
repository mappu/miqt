#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMETADATAWRITERCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QMETADATAWRITERCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaControl;
class QMetaDataWriterControl;
class QMetaMethod;
class QMetaObject;
class QObject;
class QVariant;
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMetaDataWriterControl QMetaDataWriterControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

void QMetaDataWriterControl_virtbase(QMetaDataWriterControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QMetaDataWriterControl_metaObject(const QMetaDataWriterControl* self);
void* QMetaDataWriterControl_metacast(QMetaDataWriterControl* self, const char* param1);
struct miqt_string QMetaDataWriterControl_tr(const char* s);
struct miqt_string QMetaDataWriterControl_trUtf8(const char* s);
bool QMetaDataWriterControl_isWritable(const QMetaDataWriterControl* self);
bool QMetaDataWriterControl_isMetaDataAvailable(const QMetaDataWriterControl* self);
QVariant* QMetaDataWriterControl_metaData(const QMetaDataWriterControl* self, struct miqt_string key);
void QMetaDataWriterControl_setMetaData(QMetaDataWriterControl* self, struct miqt_string key, QVariant* value);
struct miqt_array /* of struct miqt_string */  QMetaDataWriterControl_availableMetaData(const QMetaDataWriterControl* self);
void QMetaDataWriterControl_metaDataChanged(QMetaDataWriterControl* self);
void QMetaDataWriterControl_connect_metaDataChanged(QMetaDataWriterControl* self, intptr_t slot);
void QMetaDataWriterControl_metaDataChanged2(QMetaDataWriterControl* self, struct miqt_string key, QVariant* value);
void QMetaDataWriterControl_connect_metaDataChanged2(QMetaDataWriterControl* self, intptr_t slot);
void QMetaDataWriterControl_writableChanged(QMetaDataWriterControl* self, bool writable);
void QMetaDataWriterControl_connect_writableChanged(QMetaDataWriterControl* self, intptr_t slot);
void QMetaDataWriterControl_metaDataAvailableChanged(QMetaDataWriterControl* self, bool available);
void QMetaDataWriterControl_connect_metaDataAvailableChanged(QMetaDataWriterControl* self, intptr_t slot);
struct miqt_string QMetaDataWriterControl_tr2(const char* s, const char* c);
struct miqt_string QMetaDataWriterControl_tr3(const char* s, const char* c, int n);
struct miqt_string QMetaDataWriterControl_trUtf82(const char* s, const char* c);
struct miqt_string QMetaDataWriterControl_trUtf83(const char* s, const char* c, int n);
void QMetaDataWriterControl_delete(QMetaDataWriterControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
