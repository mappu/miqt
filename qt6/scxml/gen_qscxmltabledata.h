#pragma once
#ifndef MIQT_QT6_SCXML_GEN_QSCXMLTABLEDATA_H
#define MIQT_QT6_SCXML_GEN_QSCXMLTABLEDATA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QScxmlExecutableContent__AssignmentInfo)
typedef QScxmlExecutableContent::AssignmentInfo QScxmlExecutableContent__AssignmentInfo;
#else
class QScxmlExecutableContent__AssignmentInfo;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QScxmlExecutableContent__EvaluatorInfo)
typedef QScxmlExecutableContent::EvaluatorInfo QScxmlExecutableContent__EvaluatorInfo;
#else
class QScxmlExecutableContent__EvaluatorInfo;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QScxmlExecutableContent__ForeachInfo)
typedef QScxmlExecutableContent::ForeachInfo QScxmlExecutableContent__ForeachInfo;
#else
class QScxmlExecutableContent__ForeachInfo;
#endif
class QScxmlInvokableServiceFactory;
class QScxmlTableData;
#else
typedef struct QScxmlExecutableContent__AssignmentInfo QScxmlExecutableContent__AssignmentInfo;
typedef struct QScxmlExecutableContent__EvaluatorInfo QScxmlExecutableContent__EvaluatorInfo;
typedef struct QScxmlExecutableContent__ForeachInfo QScxmlExecutableContent__ForeachInfo;
typedef struct QScxmlInvokableServiceFactory QScxmlInvokableServiceFactory;
typedef struct QScxmlTableData QScxmlTableData;
#endif

struct miqt_string QScxmlTableData_string(const QScxmlTableData* self, int id);
int* QScxmlTableData_instructions(const QScxmlTableData* self);
QScxmlExecutableContent__EvaluatorInfo* QScxmlTableData_evaluatorInfo(const QScxmlTableData* self, int evaluatorId);
QScxmlExecutableContent__AssignmentInfo* QScxmlTableData_assignmentInfo(const QScxmlTableData* self, int assignmentId);
QScxmlExecutableContent__ForeachInfo* QScxmlTableData_foreachInfo(const QScxmlTableData* self, int foreachId);
int* QScxmlTableData_dataNames(const QScxmlTableData* self, int* count);
int QScxmlTableData_initialSetup(const QScxmlTableData* self);
struct miqt_string QScxmlTableData_name(const QScxmlTableData* self);
const int* QScxmlTableData_stateMachineTable(const QScxmlTableData* self);
QScxmlInvokableServiceFactory* QScxmlTableData_serviceFactory(const QScxmlTableData* self, int id);
void QScxmlTableData_operatorAssign(QScxmlTableData* self, QScxmlTableData* param1);

void QScxmlTableData_delete(QScxmlTableData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
