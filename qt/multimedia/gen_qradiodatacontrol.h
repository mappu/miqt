#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QRADIODATACONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QRADIODATACONTROL_H

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
class QMetaMethod;
class QMetaObject;
class QObject;
class QRadioDataControl;
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRadioDataControl QRadioDataControl;
#endif

void QRadioDataControl_virtbase(QRadioDataControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QRadioDataControl_metaObject(const QRadioDataControl* self);
void* QRadioDataControl_metacast(QRadioDataControl* self, const char* param1);
struct miqt_string QRadioDataControl_tr(const char* s);
struct miqt_string QRadioDataControl_trUtf8(const char* s);
struct miqt_string QRadioDataControl_stationId(const QRadioDataControl* self);
int QRadioDataControl_programType(const QRadioDataControl* self);
struct miqt_string QRadioDataControl_programTypeName(const QRadioDataControl* self);
struct miqt_string QRadioDataControl_stationName(const QRadioDataControl* self);
struct miqt_string QRadioDataControl_radioText(const QRadioDataControl* self);
void QRadioDataControl_setAlternativeFrequenciesEnabled(QRadioDataControl* self, bool enabled);
bool QRadioDataControl_isAlternativeFrequenciesEnabled(const QRadioDataControl* self);
int QRadioDataControl_error(const QRadioDataControl* self);
struct miqt_string QRadioDataControl_errorString(const QRadioDataControl* self);
void QRadioDataControl_stationIdChanged(QRadioDataControl* self, struct miqt_string stationId);
void QRadioDataControl_connect_stationIdChanged(QRadioDataControl* self, intptr_t slot);
void QRadioDataControl_programTypeChanged(QRadioDataControl* self, int programType);
void QRadioDataControl_connect_programTypeChanged(QRadioDataControl* self, intptr_t slot);
void QRadioDataControl_programTypeNameChanged(QRadioDataControl* self, struct miqt_string programTypeName);
void QRadioDataControl_connect_programTypeNameChanged(QRadioDataControl* self, intptr_t slot);
void QRadioDataControl_stationNameChanged(QRadioDataControl* self, struct miqt_string stationName);
void QRadioDataControl_connect_stationNameChanged(QRadioDataControl* self, intptr_t slot);
void QRadioDataControl_radioTextChanged(QRadioDataControl* self, struct miqt_string radioText);
void QRadioDataControl_connect_radioTextChanged(QRadioDataControl* self, intptr_t slot);
void QRadioDataControl_alternativeFrequenciesEnabledChanged(QRadioDataControl* self, bool enabled);
void QRadioDataControl_connect_alternativeFrequenciesEnabledChanged(QRadioDataControl* self, intptr_t slot);
void QRadioDataControl_errorWithErr(QRadioDataControl* self, int err);
void QRadioDataControl_connect_errorWithErr(QRadioDataControl* self, intptr_t slot);
struct miqt_string QRadioDataControl_tr2(const char* s, const char* c);
struct miqt_string QRadioDataControl_tr3(const char* s, const char* c, int n);
struct miqt_string QRadioDataControl_trUtf82(const char* s, const char* c);
struct miqt_string QRadioDataControl_trUtf83(const char* s, const char* c, int n);
void QRadioDataControl_delete(QRadioDataControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
