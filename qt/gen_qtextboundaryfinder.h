#ifndef GEN_QTEXTBOUNDARYFINDER_H
#define GEN_QTEXTBOUNDARYFINDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QTextBoundaryFinder* QTextBoundaryFinder_new3(uintptr_t typeVal, const char* stringVal, size_t stringVal_Strlen);
QTextBoundaryFinder* QTextBoundaryFinder_new4(uintptr_t typeVal, QChar* chars, int length);
QTextBoundaryFinder* QTextBoundaryFinder_new5(uintptr_t typeVal, QChar* chars, int length, unsigned char* buffer);
QTextBoundaryFinder* QTextBoundaryFinder_new6(uintptr_t typeVal, QChar* chars, int length, unsigned char* buffer, int bufferSize);
void QTextBoundaryFinder_OperatorAssign(QTextBoundaryFinder* self, QTextBoundaryFinder* other);
bool QTextBoundaryFinder_IsValid(const QTextBoundaryFinder* self);
uintptr_t QTextBoundaryFinder_Type(const QTextBoundaryFinder* self);
void QTextBoundaryFinder_String(const QTextBoundaryFinder* self, char** _out, int* _out_Strlen);
void QTextBoundaryFinder_ToStart(QTextBoundaryFinder* self);
void QTextBoundaryFinder_ToEnd(QTextBoundaryFinder* self);
int QTextBoundaryFinder_Position(const QTextBoundaryFinder* self);
void QTextBoundaryFinder_SetPosition(QTextBoundaryFinder* self, int position);
int QTextBoundaryFinder_ToNextBoundary(QTextBoundaryFinder* self);
int QTextBoundaryFinder_ToPreviousBoundary(QTextBoundaryFinder* self);
bool QTextBoundaryFinder_IsAtBoundary(const QTextBoundaryFinder* self);
int QTextBoundaryFinder_BoundaryReasons(const QTextBoundaryFinder* self);
void QTextBoundaryFinder_Delete(QTextBoundaryFinder* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
