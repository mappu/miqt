#include <QLoggingCategory>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qloggingcategory.h"
#include "gen_qloggingcategory.h"
#include "_cgo_export.h"

QLoggingCategory* QLoggingCategory_new(const char* category) {
	return new QLoggingCategory(category);
}

bool QLoggingCategory_IsDebugEnabled(const QLoggingCategory* self) {
	return self->isDebugEnabled();
}

bool QLoggingCategory_IsInfoEnabled(const QLoggingCategory* self) {
	return self->isInfoEnabled();
}

bool QLoggingCategory_IsWarningEnabled(const QLoggingCategory* self) {
	return self->isWarningEnabled();
}

bool QLoggingCategory_IsCriticalEnabled(const QLoggingCategory* self) {
	return self->isCriticalEnabled();
}

const char* QLoggingCategory_CategoryName(const QLoggingCategory* self) {
	return (const char*) self->categoryName();
}

QLoggingCategory* QLoggingCategory_OperatorCall(QLoggingCategory* self) {
	QLoggingCategory& _ret = self->operator()();
	// Cast returned reference into pointer
	return &_ret;
}

QLoggingCategory* QLoggingCategory_OperatorCall2(const QLoggingCategory* self) {
	const QLoggingCategory& _ret = self->operator()();
	// Cast returned reference into pointer
	return const_cast<QLoggingCategory*>(&_ret);
}

QLoggingCategory* QLoggingCategory_DefaultCategory() {
	return QLoggingCategory::defaultCategory();
}

void QLoggingCategory_SetFilterRules(struct miqt_string* rules) {
	QString rules_QString = QString::fromUtf8(&rules->data, rules->len);
	QLoggingCategory::setFilterRules(rules_QString);
}

void QLoggingCategory_Delete(QLoggingCategory* self) {
	delete self;
}

