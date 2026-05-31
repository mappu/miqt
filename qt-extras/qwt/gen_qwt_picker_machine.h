#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PICKER_MACHINE_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PICKER_MACHINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEvent;
class QwtEventPattern;
class QwtPickerClickPointMachine;
class QwtPickerClickRectMachine;
class QwtPickerDragLineMachine;
class QwtPickerDragPointMachine;
class QwtPickerDragRectMachine;
class QwtPickerMachine;
class QwtPickerPolygonMachine;
class QwtPickerTrackerMachine;
#else
typedef struct QEvent QEvent;
typedef struct QwtEventPattern QwtEventPattern;
typedef struct QwtPickerClickPointMachine QwtPickerClickPointMachine;
typedef struct QwtPickerClickRectMachine QwtPickerClickRectMachine;
typedef struct QwtPickerDragLineMachine QwtPickerDragLineMachine;
typedef struct QwtPickerDragPointMachine QwtPickerDragPointMachine;
typedef struct QwtPickerDragRectMachine QwtPickerDragRectMachine;
typedef struct QwtPickerMachine QwtPickerMachine;
typedef struct QwtPickerPolygonMachine QwtPickerPolygonMachine;
typedef struct QwtPickerTrackerMachine QwtPickerTrackerMachine;
#endif

QwtPickerMachine* QwtPickerMachine_new(int param1);
QwtPickerMachine* QwtPickerMachine_new2(QwtPickerMachine* param1);
struct miqt_array /* of int */  QwtPickerMachine_transition(QwtPickerMachine* self, QwtEventPattern* param1, QEvent* param2);
void QwtPickerMachine_reset(QwtPickerMachine* self);
int QwtPickerMachine_state(const QwtPickerMachine* self);
void QwtPickerMachine_setState(QwtPickerMachine* self, int state);
int QwtPickerMachine_selectionType(const QwtPickerMachine* self);

bool QwtPickerMachine_override_virtual_transition(void* self, intptr_t slot);
struct miqt_array /* of int */  QwtPickerMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2);

void QwtPickerMachine_delete(QwtPickerMachine* self);

QwtPickerTrackerMachine* QwtPickerTrackerMachine_new();
QwtPickerTrackerMachine* QwtPickerTrackerMachine_new2(QwtPickerTrackerMachine* param1);
void QwtPickerTrackerMachine_virtbase(QwtPickerTrackerMachine* src, QwtPickerMachine** outptr_QwtPickerMachine);
struct miqt_array /* of int */  QwtPickerTrackerMachine_transition(QwtPickerTrackerMachine* self, QwtEventPattern* param1, QEvent* param2);

bool QwtPickerTrackerMachine_override_virtual_transition(void* self, intptr_t slot);
struct miqt_array /* of int */  QwtPickerTrackerMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2);

void QwtPickerTrackerMachine_delete(QwtPickerTrackerMachine* self);

QwtPickerClickPointMachine* QwtPickerClickPointMachine_new();
QwtPickerClickPointMachine* QwtPickerClickPointMachine_new2(QwtPickerClickPointMachine* param1);
void QwtPickerClickPointMachine_virtbase(QwtPickerClickPointMachine* src, QwtPickerMachine** outptr_QwtPickerMachine);
struct miqt_array /* of int */  QwtPickerClickPointMachine_transition(QwtPickerClickPointMachine* self, QwtEventPattern* param1, QEvent* param2);

bool QwtPickerClickPointMachine_override_virtual_transition(void* self, intptr_t slot);
struct miqt_array /* of int */  QwtPickerClickPointMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2);

void QwtPickerClickPointMachine_delete(QwtPickerClickPointMachine* self);

QwtPickerDragPointMachine* QwtPickerDragPointMachine_new();
QwtPickerDragPointMachine* QwtPickerDragPointMachine_new2(QwtPickerDragPointMachine* param1);
void QwtPickerDragPointMachine_virtbase(QwtPickerDragPointMachine* src, QwtPickerMachine** outptr_QwtPickerMachine);
struct miqt_array /* of int */  QwtPickerDragPointMachine_transition(QwtPickerDragPointMachine* self, QwtEventPattern* param1, QEvent* param2);

bool QwtPickerDragPointMachine_override_virtual_transition(void* self, intptr_t slot);
struct miqt_array /* of int */  QwtPickerDragPointMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2);

void QwtPickerDragPointMachine_delete(QwtPickerDragPointMachine* self);

QwtPickerClickRectMachine* QwtPickerClickRectMachine_new();
QwtPickerClickRectMachine* QwtPickerClickRectMachine_new2(QwtPickerClickRectMachine* param1);
void QwtPickerClickRectMachine_virtbase(QwtPickerClickRectMachine* src, QwtPickerMachine** outptr_QwtPickerMachine);
struct miqt_array /* of int */  QwtPickerClickRectMachine_transition(QwtPickerClickRectMachine* self, QwtEventPattern* param1, QEvent* param2);

bool QwtPickerClickRectMachine_override_virtual_transition(void* self, intptr_t slot);
struct miqt_array /* of int */  QwtPickerClickRectMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2);

void QwtPickerClickRectMachine_delete(QwtPickerClickRectMachine* self);

QwtPickerDragRectMachine* QwtPickerDragRectMachine_new();
QwtPickerDragRectMachine* QwtPickerDragRectMachine_new2(QwtPickerDragRectMachine* param1);
void QwtPickerDragRectMachine_virtbase(QwtPickerDragRectMachine* src, QwtPickerMachine** outptr_QwtPickerMachine);
struct miqt_array /* of int */  QwtPickerDragRectMachine_transition(QwtPickerDragRectMachine* self, QwtEventPattern* param1, QEvent* param2);

bool QwtPickerDragRectMachine_override_virtual_transition(void* self, intptr_t slot);
struct miqt_array /* of int */  QwtPickerDragRectMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2);

void QwtPickerDragRectMachine_delete(QwtPickerDragRectMachine* self);

QwtPickerDragLineMachine* QwtPickerDragLineMachine_new();
QwtPickerDragLineMachine* QwtPickerDragLineMachine_new2(QwtPickerDragLineMachine* param1);
void QwtPickerDragLineMachine_virtbase(QwtPickerDragLineMachine* src, QwtPickerMachine** outptr_QwtPickerMachine);
struct miqt_array /* of int */  QwtPickerDragLineMachine_transition(QwtPickerDragLineMachine* self, QwtEventPattern* param1, QEvent* param2);

bool QwtPickerDragLineMachine_override_virtual_transition(void* self, intptr_t slot);
struct miqt_array /* of int */  QwtPickerDragLineMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2);

void QwtPickerDragLineMachine_delete(QwtPickerDragLineMachine* self);

QwtPickerPolygonMachine* QwtPickerPolygonMachine_new();
QwtPickerPolygonMachine* QwtPickerPolygonMachine_new2(QwtPickerPolygonMachine* param1);
void QwtPickerPolygonMachine_virtbase(QwtPickerPolygonMachine* src, QwtPickerMachine** outptr_QwtPickerMachine);
struct miqt_array /* of int */  QwtPickerPolygonMachine_transition(QwtPickerPolygonMachine* self, QwtEventPattern* param1, QEvent* param2);

bool QwtPickerPolygonMachine_override_virtual_transition(void* self, intptr_t slot);
struct miqt_array /* of int */  QwtPickerPolygonMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2);

void QwtPickerPolygonMachine_delete(QwtPickerPolygonMachine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
