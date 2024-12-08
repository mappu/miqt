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
struct miqt_string QSystemSemaphore_Tr(const char* sourceText);
void QSystemSemaphore_SetKey(QSystemSemaphore* self, struct miqt_string key);
struct miqt_string QSystemSemaphore_Key(const QSystemSemaphore* self);
bool QSystemSemaphore_Acquire(QSystemSemaphore* self);
bool QSystemSemaphore_Release(QSystemSemaphore* self);
int QSystemSemaphore_Error(const QSystemSemaphore* self);
struct miqt_string QSystemSemaphore_ErrorString(const QSystemSemaphore* self);
struct miqt_string QSystemSemaphore_Tr2(const char* sourceText, const char* disambiguation);
struct miqt_string QSystemSemaphore_Tr3(const char* sourceText, const char* disambiguation, int n);
void QSystemSemaphore_SetKey2(QSystemSemaphore* self, struct miqt_string key, int initialValue);
void QSystemSemaphore_SetKey3(QSystemSemaphore* self, struct miqt_string key, int initialValue, int mode);
bool QSystemSemaphore_Release1(QSystemSemaphore* self, int n);
void QSystemSemaphore_Delete(QSystemSemaphore* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
