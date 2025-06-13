#include <QSharedData>
#include <qshareddata.h>
#include "gen_qshareddata.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QSharedData* QSharedData_new() {
	return new (std::nothrow) QSharedData();
}

QSharedData* QSharedData_new2(QSharedData* param1) {
	return new (std::nothrow) QSharedData(*param1);
}

void QSharedData_delete(QSharedData* self) {
	delete self;
}

