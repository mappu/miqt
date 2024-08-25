#include "gen_qtextoption.h"
#include "qtextoption.h"

#include <QList>
#include <QTextOption>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTextOption* QTextOption_new() {
	return new QTextOption();
}

QTextOption* QTextOption_new2(QTextOption* o) {
	return new QTextOption(*o);
}

void QTextOption_OperatorAssign(QTextOption* self, QTextOption* o) {
	self->operator=(*o);
}

void QTextOption_SetTabStop(QTextOption* self, double tabStop) {
	self->setTabStop(static_cast<qreal>(tabStop));
}

double QTextOption_TabStop(QTextOption* self) {
	return self->tabStop();
}

void QTextOption_SetTabStopDistance(QTextOption* self, double tabStopDistance) {
	self->setTabStopDistance(static_cast<qreal>(tabStopDistance));
}

double QTextOption_TabStopDistance(QTextOption* self) {
	return self->tabStopDistance();
}

void QTextOption_SetTabArray(QTextOption* self, double* tabStops, size_t tabStops_len) {
	QList<qreal> tabStops_QList;
	tabStops_QList.reserve(tabStops_len);
	for(size_t i = 0; i < tabStops_len; ++i) {
		tabStops_QList.push_back(tabStops[i]);
	}
	self->setTabArray(tabStops_QList);
}

void QTextOption_TabArray(QTextOption* self, double** _out, size_t* _out_len) {
	QList<qreal> ret = self->tabArray();
	// Convert QList<> from C++ memory to manually-managed C memory
	double* __out = static_cast<double*>(malloc(sizeof(double) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextOption_SetUseDesignMetrics(QTextOption* self, bool b) {
	self->setUseDesignMetrics(b);
}

bool QTextOption_UseDesignMetrics(QTextOption* self) {
	return self->useDesignMetrics();
}

void QTextOption_Delete(QTextOption* self) {
	delete self;
}

