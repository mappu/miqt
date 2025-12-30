#define WORKAROUND_INNER_CLASS_DEFINITION_QScxmlExecutableContent__AssignmentInfo
#define WORKAROUND_INNER_CLASS_DEFINITION_QScxmlExecutableContent__EvaluatorInfo
#define WORKAROUND_INNER_CLASS_DEFINITION_QScxmlExecutableContent__ForeachInfo
#define WORKAROUND_INNER_CLASS_DEFINITION_QScxmlExecutableContent__InvokeInfo
#define WORKAROUND_INNER_CLASS_DEFINITION_QScxmlExecutableContent__ParameterInfo
#include <qscxmlexecutablecontent.h>
#include "gen_qscxmlexecutablecontent.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

int QScxmlExecutableContent__EvaluatorInfo_expr(const QScxmlExecutableContent__EvaluatorInfo* self) {
	QScxmlExecutableContent::StringId expr_ret = self->expr;
	return static_cast<int>(expr_ret);
}

void QScxmlExecutableContent__EvaluatorInfo_setExpr(QScxmlExecutableContent__EvaluatorInfo* self, int expr) {
	self->expr = static_cast<QScxmlExecutableContent::StringId>(expr);
}

int QScxmlExecutableContent__EvaluatorInfo_context(const QScxmlExecutableContent__EvaluatorInfo* self) {
	QScxmlExecutableContent::StringId context_ret = self->context;
	return static_cast<int>(context_ret);
}

void QScxmlExecutableContent__EvaluatorInfo_setContext(QScxmlExecutableContent__EvaluatorInfo* self, int context) {
	self->context = static_cast<QScxmlExecutableContent::StringId>(context);
}

void QScxmlExecutableContent__EvaluatorInfo_delete(QScxmlExecutableContent__EvaluatorInfo* self) {
	delete self;
}

int QScxmlExecutableContent__AssignmentInfo_dest(const QScxmlExecutableContent__AssignmentInfo* self) {
	QScxmlExecutableContent::StringId dest_ret = self->dest;
	return static_cast<int>(dest_ret);
}

void QScxmlExecutableContent__AssignmentInfo_setDest(QScxmlExecutableContent__AssignmentInfo* self, int dest) {
	self->dest = static_cast<QScxmlExecutableContent::StringId>(dest);
}

int QScxmlExecutableContent__AssignmentInfo_expr(const QScxmlExecutableContent__AssignmentInfo* self) {
	QScxmlExecutableContent::StringId expr_ret = self->expr;
	return static_cast<int>(expr_ret);
}

void QScxmlExecutableContent__AssignmentInfo_setExpr(QScxmlExecutableContent__AssignmentInfo* self, int expr) {
	self->expr = static_cast<QScxmlExecutableContent::StringId>(expr);
}

int QScxmlExecutableContent__AssignmentInfo_context(const QScxmlExecutableContent__AssignmentInfo* self) {
	QScxmlExecutableContent::StringId context_ret = self->context;
	return static_cast<int>(context_ret);
}

void QScxmlExecutableContent__AssignmentInfo_setContext(QScxmlExecutableContent__AssignmentInfo* self, int context) {
	self->context = static_cast<QScxmlExecutableContent::StringId>(context);
}

void QScxmlExecutableContent__AssignmentInfo_delete(QScxmlExecutableContent__AssignmentInfo* self) {
	delete self;
}

int QScxmlExecutableContent__ForeachInfo_array(const QScxmlExecutableContent__ForeachInfo* self) {
	QScxmlExecutableContent::StringId array_ret = self->array;
	return static_cast<int>(array_ret);
}

void QScxmlExecutableContent__ForeachInfo_setArray(QScxmlExecutableContent__ForeachInfo* self, int array) {
	self->array = static_cast<QScxmlExecutableContent::StringId>(array);
}

int QScxmlExecutableContent__ForeachInfo_item(const QScxmlExecutableContent__ForeachInfo* self) {
	QScxmlExecutableContent::StringId item_ret = self->item;
	return static_cast<int>(item_ret);
}

void QScxmlExecutableContent__ForeachInfo_setItem(QScxmlExecutableContent__ForeachInfo* self, int item) {
	self->item = static_cast<QScxmlExecutableContent::StringId>(item);
}

int QScxmlExecutableContent__ForeachInfo_index(const QScxmlExecutableContent__ForeachInfo* self) {
	QScxmlExecutableContent::StringId index_ret = self->index;
	return static_cast<int>(index_ret);
}

void QScxmlExecutableContent__ForeachInfo_setIndex(QScxmlExecutableContent__ForeachInfo* self, int index) {
	self->index = static_cast<QScxmlExecutableContent::StringId>(index);
}

int QScxmlExecutableContent__ForeachInfo_context(const QScxmlExecutableContent__ForeachInfo* self) {
	QScxmlExecutableContent::StringId context_ret = self->context;
	return static_cast<int>(context_ret);
}

void QScxmlExecutableContent__ForeachInfo_setContext(QScxmlExecutableContent__ForeachInfo* self, int context) {
	self->context = static_cast<QScxmlExecutableContent::StringId>(context);
}

void QScxmlExecutableContent__ForeachInfo_delete(QScxmlExecutableContent__ForeachInfo* self) {
	delete self;
}

int QScxmlExecutableContent__ParameterInfo_name(const QScxmlExecutableContent__ParameterInfo* self) {
	QScxmlExecutableContent::StringId name_ret = self->name;
	return static_cast<int>(name_ret);
}

void QScxmlExecutableContent__ParameterInfo_setName(QScxmlExecutableContent__ParameterInfo* self, int name) {
	self->name = static_cast<QScxmlExecutableContent::StringId>(name);
}

int QScxmlExecutableContent__ParameterInfo_expr(const QScxmlExecutableContent__ParameterInfo* self) {
	QScxmlExecutableContent::EvaluatorId expr_ret = self->expr;
	return static_cast<int>(expr_ret);
}

void QScxmlExecutableContent__ParameterInfo_setExpr(QScxmlExecutableContent__ParameterInfo* self, int expr) {
	self->expr = static_cast<QScxmlExecutableContent::EvaluatorId>(expr);
}

int QScxmlExecutableContent__ParameterInfo_location(const QScxmlExecutableContent__ParameterInfo* self) {
	QScxmlExecutableContent::StringId location_ret = self->location;
	return static_cast<int>(location_ret);
}

void QScxmlExecutableContent__ParameterInfo_setLocation(QScxmlExecutableContent__ParameterInfo* self, int location) {
	self->location = static_cast<QScxmlExecutableContent::StringId>(location);
}

void QScxmlExecutableContent__ParameterInfo_delete(QScxmlExecutableContent__ParameterInfo* self) {
	delete self;
}

int QScxmlExecutableContent__InvokeInfo_id(const QScxmlExecutableContent__InvokeInfo* self) {
	QScxmlExecutableContent::StringId id_ret = self->id;
	return static_cast<int>(id_ret);
}

void QScxmlExecutableContent__InvokeInfo_setId(QScxmlExecutableContent__InvokeInfo* self, int id) {
	self->id = static_cast<QScxmlExecutableContent::StringId>(id);
}

int QScxmlExecutableContent__InvokeInfo_prefix(const QScxmlExecutableContent__InvokeInfo* self) {
	QScxmlExecutableContent::StringId prefix_ret = self->prefix;
	return static_cast<int>(prefix_ret);
}

void QScxmlExecutableContent__InvokeInfo_setPrefix(QScxmlExecutableContent__InvokeInfo* self, int prefix) {
	self->prefix = static_cast<QScxmlExecutableContent::StringId>(prefix);
}

int QScxmlExecutableContent__InvokeInfo_location(const QScxmlExecutableContent__InvokeInfo* self) {
	QScxmlExecutableContent::StringId location_ret = self->location;
	return static_cast<int>(location_ret);
}

void QScxmlExecutableContent__InvokeInfo_setLocation(QScxmlExecutableContent__InvokeInfo* self, int location) {
	self->location = static_cast<QScxmlExecutableContent::StringId>(location);
}

int QScxmlExecutableContent__InvokeInfo_context(const QScxmlExecutableContent__InvokeInfo* self) {
	QScxmlExecutableContent::StringId context_ret = self->context;
	return static_cast<int>(context_ret);
}

void QScxmlExecutableContent__InvokeInfo_setContext(QScxmlExecutableContent__InvokeInfo* self, int context) {
	self->context = static_cast<QScxmlExecutableContent::StringId>(context);
}

int QScxmlExecutableContent__InvokeInfo_expr(const QScxmlExecutableContent__InvokeInfo* self) {
	QScxmlExecutableContent::EvaluatorId expr_ret = self->expr;
	return static_cast<int>(expr_ret);
}

void QScxmlExecutableContent__InvokeInfo_setExpr(QScxmlExecutableContent__InvokeInfo* self, int expr) {
	self->expr = static_cast<QScxmlExecutableContent::EvaluatorId>(expr);
}

int QScxmlExecutableContent__InvokeInfo_finalize(const QScxmlExecutableContent__InvokeInfo* self) {
	QScxmlExecutableContent::ContainerId finalize_ret = self->finalize;
	return static_cast<int>(finalize_ret);
}

void QScxmlExecutableContent__InvokeInfo_setFinalize(QScxmlExecutableContent__InvokeInfo* self, int finalize) {
	self->finalize = static_cast<QScxmlExecutableContent::ContainerId>(finalize);
}

bool QScxmlExecutableContent__InvokeInfo_autoforward(const QScxmlExecutableContent__InvokeInfo* self) {
	return self->autoforward;
}

void QScxmlExecutableContent__InvokeInfo_setAutoforward(QScxmlExecutableContent__InvokeInfo* self, bool autoforward) {
	self->autoforward = autoforward;
}

void QScxmlExecutableContent__InvokeInfo_delete(QScxmlExecutableContent__InvokeInfo* self) {
	delete self;
}

