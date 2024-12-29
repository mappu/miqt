#pragma once
#ifndef MIQT_QT_GEN_QTEXTBOUNDARYFINDER_H
#define MIQT_QT_GEN_QTEXTBOUNDARYFINDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChar;
class QTextBoundaryFinder;
#else
typedef struct QChar QChar;
typedef struct QTextBoundaryFinder QTextBoundaryFinder;
#endif

QTextBoundaryFinder* QTextBoundaryFinder_new();
QTextBoundaryFinder* QTextBoundaryFinder_new2(QTextBoundaryFinder* other);
QTextBoundaryFinder* QTextBoundaryFinder_new3(int typeVal, struct miqt_string stringVal);
QTextBoundaryFinder* QTextBoundaryFinder_new4(int typeVal, QChar* chars, int length);
QTextBoundaryFinder* QTextBoundaryFinder_new5(int typeVal, QChar* chars, int length, unsigned char* buffer);
QTextBoundaryFinder* QTextBoundaryFinder_new6(int typeVal, QChar* chars, int length, unsigned char* buffer, int bufferSize);
void QTextBoundaryFinder_OperatorAssign(QTextBoundaryFinder* self, QTextBoundaryFinder* other);
bool QTextBoundaryFinder_IsValid(const QTextBoundaryFinder* self);
int QTextBoundaryFinder_Type(const QTextBoundaryFinder* self);
struct miqt_string QTextBoundaryFinder_String(const QTextBoundaryFinder* self);
void QTextBoundaryFinder_ToStart(QTextBoundaryFinder* self);
void QTextBoundaryFinder_ToEnd(QTextBoundaryFinder* self);
int QTextBoundaryFinder_Position(const QTextBoundaryFinder* self);
void QTextBoundaryFinder_SetPosition(QTextBoundaryFinder* self, int position);
int QTextBoundaryFinder_ToNextBoundary(QTextBoundaryFinder* self);
int QTextBoundaryFinder_ToPreviousBoundary(QTextBoundaryFinder* self);
bool QTextBoundaryFinder_IsAtBoundary(const QTextBoundaryFinder* self);
int QTextBoundaryFinder_BoundaryReasons(const QTextBoundaryFinder* self);
void QTextBoundaryFinder_Delete(QTextBoundaryFinder* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
