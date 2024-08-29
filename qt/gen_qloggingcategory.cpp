#include <QLoggingCategory>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qloggingcategory.h"

#include "gen_qloggingcategory.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QLoggingCategory* QLoggingCategory_new(const char* category) {
	return new QLoggingCategory(category);
}

bool QLoggingCategory_IsDebugEnabled(QLoggingCategory* self) {
	return const_cast<const QLoggingCategory*>(self)->isDebugEnabled();
}

bool QLoggingCategory_IsInfoEnabled(QLoggingCategory* self) {
	return const_cast<const QLoggingCategory*>(self)->isInfoEnabled();
}

bool QLoggingCategory_IsWarningEnabled(QLoggingCategory* self) {
	return const_cast<const QLoggingCategory*>(self)->isWarningEnabled();
}

bool QLoggingCategory_IsCriticalEnabled(QLoggingCategory* self) {
	return const_cast<const QLoggingCategory*>(self)->isCriticalEnabled();
}

const char* QLoggingCategory_CategoryName(QLoggingCategory* self) {
	return (const char*) const_cast<const QLoggingCategory*>(self)->categoryName();
}

QLoggingCategory* QLoggingCategory_OperatorCall(QLoggingCategory* self) {
	QLoggingCategory& ret = self->operator()();
	// Cast returned reference into pointer
	return &ret;
}

QLoggingCategory* QLoggingCategory_OperatorCall2(QLoggingCategory* self) {
	const QLoggingCategory& ret = const_cast<const QLoggingCategory*>(self)->operator()();
	// Cast returned reference into pointer
	return const_cast<QLoggingCategory*>(&ret);
}

QLoggingCategory* QLoggingCategory_DefaultCategory() {
	return QLoggingCategory::defaultCategory();
}

void QLoggingCategory_SetFilterRules(const char* rules, size_t rules_Strlen) {
	QString rules_QString = QString::fromUtf8(rules, rules_Strlen);
	QLoggingCategory::setFilterRules(rules_QString);
}

void QLoggingCategory_Delete(QLoggingCategory* self) {
	delete self;
}

