#include <QChar>
#include <QList>
#include <QTextOption>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextOption__Tab
#include "qtextoption.h"

#include "gen_qtextoption.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTextOption* QTextOption_new() {
	return new QTextOption();
}

QTextOption* QTextOption_new2(int alignment) {
	return new QTextOption(static_cast<Qt::Alignment>(alignment));
}

QTextOption* QTextOption_new3(QTextOption* o) {
	return new QTextOption(*o);
}

void QTextOption_OperatorAssign(QTextOption* self, QTextOption* o) {
	self->operator=(*o);
}

void QTextOption_SetAlignment(QTextOption* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

int QTextOption_Alignment(const QTextOption* self) {
	Qt::Alignment ret = self->alignment();
	return static_cast<int>(ret);
}

void QTextOption_SetTextDirection(QTextOption* self, uintptr_t aDirection) {
	self->setTextDirection(static_cast<Qt::LayoutDirection>(aDirection));
}

uintptr_t QTextOption_TextDirection(const QTextOption* self) {
	Qt::LayoutDirection ret = self->textDirection();
	return static_cast<uintptr_t>(ret);
}

void QTextOption_SetWrapMode(QTextOption* self, uintptr_t wrap) {
	self->setWrapMode(static_cast<QTextOption::WrapMode>(wrap));
}

uintptr_t QTextOption_WrapMode(const QTextOption* self) {
	QTextOption::WrapMode ret = self->wrapMode();
	return static_cast<uintptr_t>(ret);
}

void QTextOption_SetFlags(QTextOption* self, int flags) {
	self->setFlags(static_cast<QTextOption::Flags>(flags));
}

int QTextOption_Flags(const QTextOption* self) {
	QTextOption::Flags ret = self->flags();
	return static_cast<int>(ret);
}

void QTextOption_SetTabStop(QTextOption* self, double tabStop) {
	self->setTabStop(static_cast<qreal>(tabStop));
}

double QTextOption_TabStop(const QTextOption* self) {
	return self->tabStop();
}

void QTextOption_SetTabStopDistance(QTextOption* self, double tabStopDistance) {
	self->setTabStopDistance(static_cast<qreal>(tabStopDistance));
}

double QTextOption_TabStopDistance(const QTextOption* self) {
	return self->tabStopDistance();
}

void QTextOption_SetTabArray(QTextOption* self, double* tabStops, size_t tabStops_len) {
	QList<double> tabStops_QList;
	tabStops_QList.reserve(tabStops_len);
	for(size_t i = 0; i < tabStops_len; ++i) {
		tabStops_QList.push_back(tabStops[i]);
	}
	self->setTabArray(tabStops_QList);
}

void QTextOption_TabArray(const QTextOption* self, double** _out, size_t* _out_len) {
	QList<double> ret = self->tabArray();
	// Convert QList<> from C++ memory to manually-managed C memory
	double* __out = static_cast<double*>(malloc(sizeof(double) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextOption_SetTabs(QTextOption* self, QTextOption__Tab** tabStops, size_t tabStops_len) {
	QList<QTextOption::Tab> tabStops_QList;
	tabStops_QList.reserve(tabStops_len);
	for(size_t i = 0; i < tabStops_len; ++i) {
		tabStops_QList.push_back(*(tabStops[i]));
	}
	self->setTabs(tabStops_QList);
}

void QTextOption_Tabs(const QTextOption* self, QTextOption__Tab*** _out, size_t* _out_len) {
	QList<QTextOption::Tab> ret = self->tabs();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QTextOption__Tab** __out = static_cast<QTextOption__Tab**>(malloc(sizeof(QTextOption__Tab**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QTextOption::Tab(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextOption_SetUseDesignMetrics(QTextOption* self, bool b) {
	self->setUseDesignMetrics(b);
}

bool QTextOption_UseDesignMetrics(const QTextOption* self) {
	return self->useDesignMetrics();
}

void QTextOption_Delete(QTextOption* self) {
	delete self;
}

QTextOption__Tab* QTextOption__Tab_new() {
	return new QTextOption::Tab();
}

QTextOption__Tab* QTextOption__Tab_new2(double pos, uintptr_t tabType) {
	return new QTextOption::Tab(static_cast<qreal>(pos), static_cast<QTextOption::TabType>(tabType));
}

QTextOption__Tab* QTextOption__Tab_new3(QTextOption__Tab* param1) {
	return new QTextOption::Tab(*param1);
}

QTextOption__Tab* QTextOption__Tab_new4(double pos, uintptr_t tabType, QChar* delim) {
	return new QTextOption::Tab(static_cast<qreal>(pos), static_cast<QTextOption::TabType>(tabType), *delim);
}

bool QTextOption__Tab_OperatorEqual(const QTextOption__Tab* self, QTextOption__Tab* other) {
	return self->operator==(*other);
}

bool QTextOption__Tab_OperatorNotEqual(const QTextOption__Tab* self, QTextOption__Tab* other) {
	return self->operator!=(*other);
}

void QTextOption__Tab_Delete(QTextOption__Tab* self) {
	delete self;
}

