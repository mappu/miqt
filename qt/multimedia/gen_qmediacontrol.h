#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMEDIACONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QMEDIACONTROL_H

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
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QMediaControl_virtbase(QMediaControl* src, QObject** outptr_QObject);
QMetaObject* QMediaControl_metaObject(const QMediaControl* self);
void* QMediaControl_metacast(QMediaControl* self, const char* param1);
struct miqt_string QMediaControl_tr(const char* s);
struct miqt_string QMediaControl_trUtf8(const char* s);
struct miqt_string QMediaControl_tr2(const char* s, const char* c);
struct miqt_string QMediaControl_tr3(const char* s, const char* c, int n);
struct miqt_string QMediaControl_trUtf82(const char* s, const char* c);
struct miqt_string QMediaControl_trUtf83(const char* s, const char* c, int n);

void QMediaControl_delete(QMediaControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
