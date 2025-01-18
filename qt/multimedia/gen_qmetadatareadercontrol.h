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
class QMetaObject;
class QObject;
class QVariant;
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMetaDataReaderControl QMetaDataReaderControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

void QMetaDataReaderControl_virtbase(QMetaDataReaderControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QMetaDataReaderControl_MetaObject(const QMetaDataReaderControl* self);
void* QMetaDataReaderControl_Metacast(QMetaDataReaderControl* self, const char* param1);
struct miqt_string QMetaDataReaderControl_Tr(const char* s);
struct miqt_string QMetaDataReaderControl_TrUtf8(const char* s);
bool QMetaDataReaderControl_IsMetaDataAvailable(const QMetaDataReaderControl* self);
QVariant* QMetaDataReaderControl_MetaData(const QMetaDataReaderControl* self, struct miqt_string key);
struct miqt_array /* of struct miqt_string */  QMetaDataReaderControl_AvailableMetaData(const QMetaDataReaderControl* self);
void QMetaDataReaderControl_MetaDataChanged(QMetaDataReaderControl* self);
void QMetaDataReaderControl_connect_MetaDataChanged(QMetaDataReaderControl* self, intptr_t slot);
void QMetaDataReaderControl_MetaDataChanged2(QMetaDataReaderControl* self, struct miqt_string key, QVariant* value);
void QMetaDataReaderControl_connect_MetaDataChanged2(QMetaDataReaderControl* self, intptr_t slot);
void QMetaDataReaderControl_MetaDataAvailableChanged(QMetaDataReaderControl* self, bool available);
void QMetaDataReaderControl_connect_MetaDataAvailableChanged(QMetaDataReaderControl* self, intptr_t slot);
struct miqt_string QMetaDataReaderControl_Tr2(const char* s, const char* c);
struct miqt_string QMetaDataReaderControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QMetaDataReaderControl_TrUtf82(const char* s, const char* c);
struct miqt_string QMetaDataReaderControl_TrUtf83(const char* s, const char* c, int n);
void QMetaDataReaderControl_Delete(QMetaDataReaderControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
