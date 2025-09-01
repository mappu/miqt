#include <QList>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlResult>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qsqlresult.h>
#include "gen_qsqlresult.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QVariant* QSqlResult_handle(const QSqlResult* self) {
	return new QVariant(self->handle());
}

void QSqlResult_delete(QSqlResult* self) {
	delete self;
}

