#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMEDIANETWORKACCESSCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QMEDIANETWORKACCESSCONTROL_H

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
class QMediaNetworkAccessControl;
class QMetaMethod;
class QMetaObject;
class QNetworkConfiguration;
class QObject;
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMediaNetworkAccessControl QMediaNetworkAccessControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkConfiguration QNetworkConfiguration;
typedef struct QObject QObject;
#endif

void QMediaNetworkAccessControl_virtbase(QMediaNetworkAccessControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QMediaNetworkAccessControl_metaObject(const QMediaNetworkAccessControl* self);
void* QMediaNetworkAccessControl_metacast(QMediaNetworkAccessControl* self, const char* param1);
struct miqt_string QMediaNetworkAccessControl_tr(const char* s);
struct miqt_string QMediaNetworkAccessControl_trUtf8(const char* s);
void QMediaNetworkAccessControl_setConfigurations(QMediaNetworkAccessControl* self, struct miqt_array /* of QNetworkConfiguration* */  configuration);
QNetworkConfiguration* QMediaNetworkAccessControl_currentConfiguration(const QMediaNetworkAccessControl* self);
void QMediaNetworkAccessControl_configurationChanged(QMediaNetworkAccessControl* self, QNetworkConfiguration* configuration);
void QMediaNetworkAccessControl_connect_configurationChanged(QMediaNetworkAccessControl* self, intptr_t slot);
struct miqt_string QMediaNetworkAccessControl_tr2(const char* s, const char* c);
struct miqt_string QMediaNetworkAccessControl_tr3(const char* s, const char* c, int n);
struct miqt_string QMediaNetworkAccessControl_trUtf82(const char* s, const char* c);
struct miqt_string QMediaNetworkAccessControl_trUtf83(const char* s, const char* c, int n);
void QMediaNetworkAccessControl_delete(QMediaNetworkAccessControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
