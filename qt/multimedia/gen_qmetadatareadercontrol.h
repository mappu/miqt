#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMETADATAREADERCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QMETADATAREADERCONTROL_H

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
class QMetaDataReaderControl;
class QMetaMethod;
class QMetaObject;
class QObject;
class QVariant;
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMetaDataReaderControl QMetaDataReaderControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

void QMetaDataReaderControl_virtbase(QMetaDataReaderControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QMetaDataReaderControl_metaObject(const QMetaDataReaderControl* self);
void* QMetaDataReaderControl_metacast(QMetaDataReaderControl* self, const char* param1);
struct miqt_string QMetaDataReaderControl_tr(const char* s);
struct miqt_string QMetaDataReaderControl_trUtf8(const char* s);
bool QMetaDataReaderControl_isMetaDataAvailable(const QMetaDataReaderControl* self);
QVariant* QMetaDataReaderControl_metaData(const QMetaDataReaderControl* self, struct miqt_string key);
struct miqt_array /* of struct miqt_string */  QMetaDataReaderControl_availableMetaData(const QMetaDataReaderControl* self);
void QMetaDataReaderControl_metaDataChanged(QMetaDataReaderControl* self);
void QMetaDataReaderControl_connect_metaDataChanged(QMetaDataReaderControl* self, intptr_t slot);
void QMetaDataReaderControl_metaDataChanged2(QMetaDataReaderControl* self, struct miqt_string key, QVariant* value);
void QMetaDataReaderControl_connect_metaDataChanged2(QMetaDataReaderControl* self, intptr_t slot);
void QMetaDataReaderControl_metaDataAvailableChanged(QMetaDataReaderControl* self, bool available);
void QMetaDataReaderControl_connect_metaDataAvailableChanged(QMetaDataReaderControl* self, intptr_t slot);
struct miqt_string QMetaDataReaderControl_tr2(const char* s, const char* c);
struct miqt_string QMetaDataReaderControl_tr3(const char* s, const char* c, int n);
struct miqt_string QMetaDataReaderControl_trUtf82(const char* s, const char* c);
struct miqt_string QMetaDataReaderControl_trUtf83(const char* s, const char* c, int n);
void QMetaDataReaderControl_delete(QMetaDataReaderControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
