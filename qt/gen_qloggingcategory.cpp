#include <QLoggingCategory>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qloggingcategory.h>
#include "gen_qloggingcategory.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QLoggingCategory* QLoggingCategory_new(const char* category) {
	return new QLoggingCategory(category);
}

bool QLoggingCategory_isDebugEnabled(const QLoggingCategory* self) {
	return self->isDebugEnabled();
}

bool QLoggingCategory_isInfoEnabled(const QLoggingCategory* self) {
	return self->isInfoEnabled();
}

bool QLoggingCategory_isWarningEnabled(const QLoggingCategory* self) {
	return self->isWarningEnabled();
}

bool QLoggingCategory_isCriticalEnabled(const QLoggingCategory* self) {
	return self->isCriticalEnabled();
}

const char* QLoggingCategory_categoryName(const QLoggingCategory* self) {
	return (const char*) self->categoryName();
}

QLoggingCategory* QLoggingCategory_operatorCall(QLoggingCategory* self) {
	QLoggingCategory& _ret = self->operator()();
	// Cast returned reference into pointer
	return &_ret;
}

QLoggingCategory* QLoggingCategory_operatorCall2(const QLoggingCategory* self) {
	const QLoggingCategory& _ret = self->operator()();
	// Cast returned reference into pointer
	return const_cast<QLoggingCategory*>(&_ret);
}

QLoggingCategory* QLoggingCategory_defaultCategory() {
	return QLoggingCategory::defaultCategory();
}

void QLoggingCategory_setFilterRules(struct miqt_string rules) {
	QString rules_QString = QString::fromUtf8(rules.data, rules.len);
	QLoggingCategory::setFilterRules(rules_QString);
}

void QLoggingCategory_delete(QLoggingCategory* self) {
	delete self;
}

