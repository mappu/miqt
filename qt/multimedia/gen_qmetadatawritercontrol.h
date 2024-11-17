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
class QMetaDataWriterControl;
class QMetaObject;
class QVariant;
#else
typedef struct QMetaDataWriterControl QMetaDataWriterControl;
typedef struct QMetaObject QMetaObject;
typedef struct QVariant QVariant;
#endif

QMetaObject* QMetaDataWriterControl_MetaObject(const QMetaDataWriterControl* self);
void* QMetaDataWriterControl_Metacast(QMetaDataWriterControl* self, const char* param1);
struct miqt_string QMetaDataWriterControl_Tr(const char* s);
struct miqt_string QMetaDataWriterControl_TrUtf8(const char* s);
bool QMetaDataWriterControl_IsWritable(const QMetaDataWriterControl* self);
bool QMetaDataWriterControl_IsMetaDataAvailable(const QMetaDataWriterControl* self);
QVariant* QMetaDataWriterControl_MetaData(const QMetaDataWriterControl* self, struct miqt_string key);
void QMetaDataWriterControl_SetMetaData(QMetaDataWriterControl* self, struct miqt_string key, QVariant* value);
struct miqt_array /* of struct miqt_string */  QMetaDataWriterControl_AvailableMetaData(const QMetaDataWriterControl* self);
void QMetaDataWriterControl_MetaDataChanged(QMetaDataWriterControl* self);
void QMetaDataWriterControl_connect_MetaDataChanged(QMetaDataWriterControl* self, intptr_t slot);
void QMetaDataWriterControl_MetaDataChanged2(QMetaDataWriterControl* self, struct miqt_string key, QVariant* value);
void QMetaDataWriterControl_connect_MetaDataChanged2(QMetaDataWriterControl* self, intptr_t slot);
void QMetaDataWriterControl_WritableChanged(QMetaDataWriterControl* self, bool writable);
void QMetaDataWriterControl_connect_WritableChanged(QMetaDataWriterControl* self, intptr_t slot);
void QMetaDataWriterControl_MetaDataAvailableChanged(QMetaDataWriterControl* self, bool available);
void QMetaDataWriterControl_connect_MetaDataAvailableChanged(QMetaDataWriterControl* self, intptr_t slot);
struct miqt_string QMetaDataWriterControl_Tr2(const char* s, const char* c);
struct miqt_string QMetaDataWriterControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QMetaDataWriterControl_TrUtf82(const char* s, const char* c);
struct miqt_string QMetaDataWriterControl_TrUtf83(const char* s, const char* c, int n);
void QMetaDataWriterControl_Delete(QMetaDataWriterControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
