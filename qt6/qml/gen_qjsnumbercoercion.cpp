#include <QJSNumberCoercion>
#include <qjsnumbercoercion.h>
#include "gen_qjsnumbercoercion.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QJSNumberCoercion* QJSNumberCoercion_new(QJSNumberCoercion* param1) {
	return new QJSNumberCoercion(*param1);
}

bool QJSNumberCoercion_isInteger(double d) {
	return QJSNumberCoercion::isInteger(static_cast<double>(d));
}

int QJSNumberCoercion_toInteger(double d) {
	return QJSNumberCoercion::toInteger(static_cast<double>(d));
}

bool QJSNumberCoercion_equals(double lhs, double rhs) {
	return QJSNumberCoercion::equals(static_cast<double>(lhs), static_cast<double>(rhs));
}

void QJSNumberCoercion_delete(QJSNumberCoercion* self) {
	delete self;
}

