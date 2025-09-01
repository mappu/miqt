package sql

/*

#include "gen_qtsqlglobal.h"
#include <stdlib.h>

*/
import "C"

type QSql__Location int

const (
	QSql__BeforeFirstRow QSql__Location = -1
	QSql__AfterLastRow   QSql__Location = -2
)

type QSql__ParamTypeFlag int

const (
	QSql__In     QSql__ParamTypeFlag = 1
	QSql__Out    QSql__ParamTypeFlag = 2
	QSql__InOut  QSql__ParamTypeFlag = 3
	QSql__Binary QSql__ParamTypeFlag = 4
)

type QSql__TableType int

const (
	QSql__Tables       QSql__TableType = 1
	QSql__SystemTables QSql__TableType = 2
	QSql__Views        QSql__TableType = 4
	QSql__AllTables    QSql__TableType = 255
)

type QSql__NumericalPrecisionPolicy int

const (
	QSql__LowPrecisionInt32  QSql__NumericalPrecisionPolicy = 1
	QSql__LowPrecisionInt64  QSql__NumericalPrecisionPolicy = 2
	QSql__LowPrecisionDouble QSql__NumericalPrecisionPolicy = 4
	QSql__HighPrecision      QSql__NumericalPrecisionPolicy = 0
)
