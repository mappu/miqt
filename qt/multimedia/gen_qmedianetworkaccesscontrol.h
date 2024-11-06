#ifndef GEN_QMEDIANETWORKACCESSCONTROL_H
#define GEN_QMEDIANETWORKACCESSCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaNetworkAccessControl;
class QMetaObject;
class QNetworkConfiguration;
#else
typedef struct QMediaNetworkAccessControl QMediaNetworkAccessControl;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkConfiguration QNetworkConfiguration;
#endif

QMetaObject* QMediaNetworkAccessControl_MetaObject(const QMediaNetworkAccessControl* self);
void* QMediaNetworkAccessControl_Metacast(QMediaNetworkAccessControl* self, const char* param1);
struct miqt_string QMediaNetworkAccessControl_Tr(const char* s);
struct miqt_string QMediaNetworkAccessControl_TrUtf8(const char* s);
void QMediaNetworkAccessControl_SetConfigurations(QMediaNetworkAccessControl* self, struct miqt_array /* of QNetworkConfiguration* */ configuration);
QNetworkConfiguration* QMediaNetworkAccessControl_CurrentConfiguration(const QMediaNetworkAccessControl* self);
void QMediaNetworkAccessControl_ConfigurationChanged(QMediaNetworkAccessControl* self, QNetworkConfiguration* configuration);
void QMediaNetworkAccessControl_connect_ConfigurationChanged(QMediaNetworkAccessControl* self, intptr_t slot);
struct miqt_string QMediaNetworkAccessControl_Tr2(const char* s, const char* c);
struct miqt_string QMediaNetworkAccessControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QMediaNetworkAccessControl_TrUtf82(const char* s, const char* c);
struct miqt_string QMediaNetworkAccessControl_TrUtf83(const char* s, const char* c, int n);
void QMediaNetworkAccessControl_Delete(QMediaNetworkAccessControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
