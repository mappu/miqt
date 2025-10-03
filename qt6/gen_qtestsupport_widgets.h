#pragma once
#ifndef MIQT_QT6_GEN_QTESTSUPPORT_WIDGETS_H
#define MIQT_QT6_GEN_QTESTSUPPORT_WIDGETS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEventPoint;
class QPoint;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTest__QTouchEventSequence)
typedef QTest::QTouchEventSequence QTest__QTouchEventSequence;
#else
class QTest__QTouchEventSequence;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTest__QTouchEventWidgetSequence)
typedef QTest::QTouchEventWidgetSequence QTest__QTouchEventWidgetSequence;
#else
class QTest__QTouchEventWidgetSequence;
#endif
class QWidget;
#else
typedef struct QEventPoint QEventPoint;
typedef struct QPoint QPoint;
typedef struct QTest__QTouchEventSequence QTest__QTouchEventSequence;
typedef struct QTest__QTouchEventWidgetSequence QTest__QTouchEventWidgetSequence;
typedef struct QWidget QWidget;
#endif

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_new(QTest__QTouchEventWidgetSequence* param1);
void QTest__QTouchEventWidgetSequence_virtbase(QTest__QTouchEventWidgetSequence* src, QTest__QTouchEventSequence** outptr_QTest__QTouchEventSequence);
QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_press(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt);
QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_move(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt);
QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_release(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt);
QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_stationary(QTest__QTouchEventWidgetSequence* self, int touchId);
bool QTest__QTouchEventWidgetSequence_commit(QTest__QTouchEventWidgetSequence* self, bool processEvents);
void QTest__QTouchEventWidgetSequence_operatorAssign(QTest__QTouchEventWidgetSequence* self, QTest__QTouchEventWidgetSequence* param1);
QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_press2(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt, QWidget* widget);
QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_move2(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt, QWidget* widget);
QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_release2(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt, QWidget* widget);

bool QTest__QTouchEventWidgetSequence_override_virtual_stationary(void* self, intptr_t slot);
QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_virtualbase_stationary(void* self, int touchId);
bool QTest__QTouchEventWidgetSequence_override_virtual_commit(void* self, intptr_t slot);
bool QTest__QTouchEventWidgetSequence_virtualbase_commit(void* self, bool processEvents);

QEventPoint* QTest__QTouchEventWidgetSequence_protectedbase_point(bool* _dynamic_cast_ok, void* self, int touchId);
QEventPoint* QTest__QTouchEventWidgetSequence_protectedbase_pointOrPreviousPoint(bool* _dynamic_cast_ok, void* self, int touchId);

void QTest__QTouchEventWidgetSequence_delete(QTest__QTouchEventWidgetSequence* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
