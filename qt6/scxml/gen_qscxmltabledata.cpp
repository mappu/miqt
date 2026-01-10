#define WORKAROUND_INNER_CLASS_DEFINITION_QScxmlExecutableContent__AssignmentInfo
#define WORKAROUND_INNER_CLASS_DEFINITION_QScxmlExecutableContent__EvaluatorInfo
#define WORKAROUND_INNER_CLASS_DEFINITION_QScxmlExecutableContent__ForeachInfo
#include <QScxmlInvokableServiceFactory>
#include <QScxmlTableData>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscxmltabledata.h>
#include "gen_qscxmltabledata.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

struct miqt_string QScxmlTableData_string(const QScxmlTableData* self, int id) {
	QString _ret = self->string(static_cast<QScxmlExecutableContent::StringId>(id));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int* QScxmlTableData_instructions(const QScxmlTableData* self) {
	QScxmlExecutableContent::InstructionId* _ret = self->instructions();
	return static_cast<int*>(_ret);
}

QScxmlExecutableContent__EvaluatorInfo* QScxmlTableData_evaluatorInfo(const QScxmlTableData* self, int evaluatorId) {
	return new QScxmlExecutableContent::EvaluatorInfo(self->evaluatorInfo(static_cast<QScxmlExecutableContent::EvaluatorId>(evaluatorId)));
}

QScxmlExecutableContent__AssignmentInfo* QScxmlTableData_assignmentInfo(const QScxmlTableData* self, int assignmentId) {
	return new QScxmlExecutableContent::AssignmentInfo(self->assignmentInfo(static_cast<QScxmlExecutableContent::EvaluatorId>(assignmentId)));
}

QScxmlExecutableContent__ForeachInfo* QScxmlTableData_foreachInfo(const QScxmlTableData* self, int foreachId) {
	return new QScxmlExecutableContent::ForeachInfo(self->foreachInfo(static_cast<QScxmlExecutableContent::EvaluatorId>(foreachId)));
}

int* QScxmlTableData_dataNames(const QScxmlTableData* self, int* count) {
	QScxmlExecutableContent::StringId* _ret = self->dataNames(static_cast<int*>(count));
	return static_cast<int*>(_ret);
}

int QScxmlTableData_initialSetup(const QScxmlTableData* self) {
	QScxmlExecutableContent::ContainerId _ret = self->initialSetup();
	return static_cast<int>(_ret);
}

struct miqt_string QScxmlTableData_name(const QScxmlTableData* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const int* QScxmlTableData_stateMachineTable(const QScxmlTableData* self) {
	const qint32* _ret = self->stateMachineTable();
	return static_cast<const int*>(_ret);
}

QScxmlInvokableServiceFactory* QScxmlTableData_serviceFactory(const QScxmlTableData* self, int id) {
	return self->serviceFactory(static_cast<int>(id));
}

void QScxmlTableData_operatorAssign(QScxmlTableData* self, QScxmlTableData* param1) {
	self->operator=(*param1);
}

void QScxmlTableData_delete(QScxmlTableData* self) {
	delete self;
}

