#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMEDIACONTENT_H
#define MIQT_QT_MULTIMEDIA_GEN_QMEDIACONTENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaContent;
class QMediaPlaylist;
class QMediaResource;
class QNetworkRequest;
class QUrl;
#else
typedef struct QMediaContent QMediaContent;
typedef struct QMediaPlaylist QMediaPlaylist;
typedef struct QMediaResource QMediaResource;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QUrl QUrl;
#endif

QMediaContent* QMediaContent_new();
QMediaContent* QMediaContent_new2(QUrl* contentUrl);
QMediaContent* QMediaContent_new3(QNetworkRequest* contentRequest);
QMediaContent* QMediaContent_new4(QMediaResource* contentResource);
QMediaContent* QMediaContent_new5(struct miqt_array /* of QMediaResource* */  resources);
QMediaContent* QMediaContent_new6(QMediaContent* other);
QMediaContent* QMediaContent_new7(QMediaPlaylist* playlist);
QMediaContent* QMediaContent_new8(QMediaPlaylist* playlist, QUrl* contentUrl);
QMediaContent* QMediaContent_new9(QMediaPlaylist* playlist, QUrl* contentUrl, bool takeOwnership);
void QMediaContent_operatorAssign(QMediaContent* self, QMediaContent* other);
bool QMediaContent_operatorEqual(const QMediaContent* self, QMediaContent* other);
bool QMediaContent_operatorNotEqual(const QMediaContent* self, QMediaContent* other);
bool QMediaContent_isNull(const QMediaContent* self);
QNetworkRequest* QMediaContent_request(const QMediaContent* self);
QUrl* QMediaContent_canonicalUrl(const QMediaContent* self);
QNetworkRequest* QMediaContent_canonicalRequest(const QMediaContent* self);
QMediaResource* QMediaContent_canonicalResource(const QMediaContent* self);
struct miqt_array /* of QMediaResource* */  QMediaContent_resources(const QMediaContent* self);
QMediaPlaylist* QMediaContent_playlist(const QMediaContent* self);

void QMediaContent_delete(QMediaContent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
