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
class QTextBoundaryFinder;
#else
typedef struct QTextBoundaryFinder QTextBoundaryFinder;
#endif

QTextBoundaryFinder* QTextBoundaryFinder_new();
QTextBoundaryFinder* QTextBoundaryFinder_new2(QTextBoundaryFinder* other);
void QTextBoundaryFinder_OperatorAssign(QTextBoundaryFinder* self, QTextBoundaryFinder* other);
bool QTextBoundaryFinder_IsValid(QTextBoundaryFinder* self);
void QTextBoundaryFinder_String(QTextBoundaryFinder* self, char** _out, int* _out_Strlen);
void QTextBoundaryFinder_ToStart(QTextBoundaryFinder* self);
void QTextBoundaryFinder_ToEnd(QTextBoundaryFinder* self);
int QTextBoundaryFinder_Position(QTextBoundaryFinder* self);
void QTextBoundaryFinder_SetPosition(QTextBoundaryFinder* self, int position);
int QTextBoundaryFinder_ToNextBoundary(QTextBoundaryFinder* self);
int QTextBoundaryFinder_ToPreviousBoundary(QTextBoundaryFinder* self);
bool QTextBoundaryFinder_IsAtBoundary(QTextBoundaryFinder* self);
void QTextBoundaryFinder_Delete(QTextBoundaryFinder* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
