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
class QMetaObject;
class QObject;
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QMediaControl_virtbase(QMediaControl* src, QObject** outptr_QObject);
QMetaObject* QMediaControl_MetaObject(const QMediaControl* self);
void* QMediaControl_Metacast(QMediaControl* self, const char* param1);
struct miqt_string QMediaControl_Tr(const char* s);
struct miqt_string QMediaControl_TrUtf8(const char* s);
struct miqt_string QMediaControl_Tr2(const char* s, const char* c);
struct miqt_string QMediaControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QMediaControl_TrUtf82(const char* s, const char* c);
struct miqt_string QMediaControl_TrUtf83(const char* s, const char* c, int n);
void QMediaControl_Delete(QMediaControl* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
