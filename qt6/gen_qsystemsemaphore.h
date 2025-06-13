#pragma once
#ifndef MIQT_QT6_GEN_QSYSTEMSEMAPHORE_H
#define MIQT_QT6_GEN_QSYSTEMSEMAPHORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSystemSemaphore;
#else
typedef struct QSystemSemaphore QSystemSemaphore;
#endif

QSystemSemaphore* QSystemSemaphore_new(struct miqt_string key);
QSystemSemaphore* QSystemSemaphore_new2(struct miqt_string key, int initialValue);
QSystemSemaphore* QSystemSemaphore_new3(struct miqt_string key, int initialValue, int mode);
struct miqt_string QSystemSemaphore_tr(const char* sourceText);
void QSystemSemaphore_setKey(QSystemSemaphore* self, struct miqt_string key);
struct miqt_string QSystemSemaphore_key(const QSystemSemaphore* self);
bool QSystemSemaphore_acquire(QSystemSemaphore* self);
bool QSystemSemaphore_release(QSystemSemaphore* self);
int QSystemSemaphore_error(const QSystemSemaphore* self);
struct miqt_string QSystemSemaphore_errorString(const QSystemSemaphore* self);
struct miqt_string QSystemSemaphore_tr2(const char* sourceText, const char* disambiguation);
struct miqt_string QSystemSemaphore_tr3(const char* sourceText, const char* disambiguation, int n);
void QSystemSemaphore_setKey2(QSystemSemaphore* self, struct miqt_string key, int initialValue);
void QSystemSemaphore_setKey3(QSystemSemaphore* self, struct miqt_string key, int initialValue, int mode);
bool QSystemSemaphore_releaseWithInt(QSystemSemaphore* self, int n);

void QSystemSemaphore_delete(QSystemSemaphore* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
