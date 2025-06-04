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
QTextBoundaryFinder* QTextBoundaryFinder_new3(int type, struct miqt_string string);
QTextBoundaryFinder* QTextBoundaryFinder_new4(int type, QChar* chars, int length);
QTextBoundaryFinder* QTextBoundaryFinder_new5(int type, QChar* chars, int length, unsigned char* buffer);
QTextBoundaryFinder* QTextBoundaryFinder_new6(int type, QChar* chars, int length, unsigned char* buffer, int bufferSize);
void QTextBoundaryFinder_operatorAssign(QTextBoundaryFinder* self, QTextBoundaryFinder* other);
bool QTextBoundaryFinder_isValid(const QTextBoundaryFinder* self);
int QTextBoundaryFinder_type(const QTextBoundaryFinder* self);
struct miqt_string QTextBoundaryFinder_string(const QTextBoundaryFinder* self);
void QTextBoundaryFinder_toStart(QTextBoundaryFinder* self);
void QTextBoundaryFinder_toEnd(QTextBoundaryFinder* self);
int QTextBoundaryFinder_position(const QTextBoundaryFinder* self);
void QTextBoundaryFinder_setPosition(QTextBoundaryFinder* self, int position);
int QTextBoundaryFinder_toNextBoundary(QTextBoundaryFinder* self);
int QTextBoundaryFinder_toPreviousBoundary(QTextBoundaryFinder* self);
bool QTextBoundaryFinder_isAtBoundary(const QTextBoundaryFinder* self);
int QTextBoundaryFinder_boundaryReasons(const QTextBoundaryFinder* self);

void QTextBoundaryFinder_delete(QTextBoundaryFinder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
