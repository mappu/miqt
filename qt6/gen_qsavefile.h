#pragma once
#ifndef MIQT_QT6_GEN_QSAVEFILE_H
#define MIQT_QT6_GEN_QSAVEFILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QSaveFile;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSaveFile QSaveFile;
#endif

QSaveFile* QSaveFile_new(struct miqt_string name);
QSaveFile* QSaveFile_new2();
QSaveFile* QSaveFile_new3(struct miqt_string name, QObject* parent);
QSaveFile* QSaveFile_new4(QObject* parent);
QMetaObject* QSaveFile_MetaObject(const QSaveFile* self);
void* QSaveFile_Metacast(QSaveFile* self, const char* param1);
struct miqt_string QSaveFile_Tr(const char* s);
struct miqt_string QSaveFile_FileName(const QSaveFile* self);
void QSaveFile_SetFileName(QSaveFile* self, struct miqt_string name);
bool QSaveFile_Open(QSaveFile* self, int flags);
bool QSaveFile_Commit(QSaveFile* self);
void QSaveFile_CancelWriting(QSaveFile* self);
void QSaveFile_SetDirectWriteFallback(QSaveFile* self, bool enabled);
bool QSaveFile_DirectWriteFallback(const QSaveFile* self);
struct miqt_string QSaveFile_Tr2(const char* s, const char* c);
struct miqt_string QSaveFile_Tr3(const char* s, const char* c, int n);
void QSaveFile_Delete(QSaveFile* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
