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
class QMetaObject;
class QObject;
class QRadioDataControl;
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRadioDataControl QRadioDataControl;
#endif

void QRadioDataControl_virtbase(QRadioDataControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QRadioDataControl_MetaObject(const QRadioDataControl* self);
void* QRadioDataControl_Metacast(QRadioDataControl* self, const char* param1);
struct miqt_string QRadioDataControl_Tr(const char* s);
struct miqt_string QRadioDataControl_TrUtf8(const char* s);
struct miqt_string QRadioDataControl_StationId(const QRadioDataControl* self);
int QRadioDataControl_ProgramType(const QRadioDataControl* self);
struct miqt_string QRadioDataControl_ProgramTypeName(const QRadioDataControl* self);
struct miqt_string QRadioDataControl_StationName(const QRadioDataControl* self);
struct miqt_string QRadioDataControl_RadioText(const QRadioDataControl* self);
void QRadioDataControl_SetAlternativeFrequenciesEnabled(QRadioDataControl* self, bool enabled);
bool QRadioDataControl_IsAlternativeFrequenciesEnabled(const QRadioDataControl* self);
int QRadioDataControl_Error(const QRadioDataControl* self);
struct miqt_string QRadioDataControl_ErrorString(const QRadioDataControl* self);
void QRadioDataControl_StationIdChanged(QRadioDataControl* self, struct miqt_string stationId);
void QRadioDataControl_connect_StationIdChanged(QRadioDataControl* self, intptr_t slot);
void QRadioDataControl_ProgramTypeChanged(QRadioDataControl* self, int programType);
void QRadioDataControl_connect_ProgramTypeChanged(QRadioDataControl* self, intptr_t slot);
void QRadioDataControl_ProgramTypeNameChanged(QRadioDataControl* self, struct miqt_string programTypeName);
void QRadioDataControl_connect_ProgramTypeNameChanged(QRadioDataControl* self, intptr_t slot);
void QRadioDataControl_StationNameChanged(QRadioDataControl* self, struct miqt_string stationName);
void QRadioDataControl_connect_StationNameChanged(QRadioDataControl* self, intptr_t slot);
void QRadioDataControl_RadioTextChanged(QRadioDataControl* self, struct miqt_string radioText);
void QRadioDataControl_connect_RadioTextChanged(QRadioDataControl* self, intptr_t slot);
void QRadioDataControl_AlternativeFrequenciesEnabledChanged(QRadioDataControl* self, bool enabled);
void QRadioDataControl_connect_AlternativeFrequenciesEnabledChanged(QRadioDataControl* self, intptr_t slot);
void QRadioDataControl_ErrorWithErr(QRadioDataControl* self, int err);
void QRadioDataControl_connect_ErrorWithErr(QRadioDataControl* self, intptr_t slot);
struct miqt_string QRadioDataControl_Tr2(const char* s, const char* c);
struct miqt_string QRadioDataControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QRadioDataControl_TrUtf82(const char* s, const char* c);
struct miqt_string QRadioDataControl_TrUtf83(const char* s, const char* c, int n);
void QRadioDataControl_Delete(QRadioDataControl* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
