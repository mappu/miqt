#include <QChar>
#include <QList>
#include <QTextOption>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextOption__Tab
#include <qtextoption.h>
#include "gen_qtextoption.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QTextOption* QTextOption_new() {
	return new QTextOption();
}

QTextOption* QTextOption_new2(int alignment) {
	return new QTextOption(static_cast<Qt::Alignment>(alignment));
}

QTextOption* QTextOption_new3(QTextOption* o) {
	return new QTextOption(*o);
}

void QTextOption_operatorAssign(QTextOption* self, QTextOption* o) {
	self->operator=(*o);
}

void QTextOption_setAlignment(QTextOption* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

int QTextOption_alignment(const QTextOption* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QTextOption_setTextDirection(QTextOption* self, int aDirection) {
	self->setTextDirection(static_cast<Qt::LayoutDirection>(aDirection));
}

int QTextOption_textDirection(const QTextOption* self) {
	Qt::LayoutDirection _ret = self->textDirection();
	return static_cast<int>(_ret);
}

void QTextOption_setWrapMode(QTextOption* self, int wrap) {
	self->setWrapMode(static_cast<QTextOption::WrapMode>(wrap));
}

int QTextOption_wrapMode(const QTextOption* self) {
	QTextOption::WrapMode _ret = self->wrapMode();
	return static_cast<int>(_ret);
}

void QTextOption_setFlags(QTextOption* self, int flags) {
	self->setFlags(static_cast<QTextOption::Flags>(flags));
}

int QTextOption_flags(const QTextOption* self) {
	QTextOption::Flags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QTextOption_setTabStop(QTextOption* self, double tabStop) {
	self->setTabStop(static_cast<qreal>(tabStop));
}

double QTextOption_tabStop(const QTextOption* self) {
	qreal _ret = self->tabStop();
	return static_cast<double>(_ret);
}

void QTextOption_setTabStopDistance(QTextOption* self, double tabStopDistance) {
	self->setTabStopDistance(static_cast<qreal>(tabStopDistance));
}

double QTextOption_tabStopDistance(const QTextOption* self) {
	qreal _ret = self->tabStopDistance();
	return static_cast<double>(_ret);
}

void QTextOption_setTabArray(QTextOption* self, struct miqt_array /* of double */  tabStops) {
	QList<qreal> tabStops_QList;
	tabStops_QList.reserve(tabStops.len);
	double* tabStops_arr = static_cast<double*>(tabStops.data);
	for(size_t i = 0; i < tabStops.len; ++i) {
		tabStops_QList.push_back(static_cast<double>(tabStops_arr[i]));
	}
	self->setTabArray(tabStops_QList);
}

struct miqt_array /* of double */  QTextOption_tabArray(const QTextOption* self) {
	QList<qreal> _ret = self->tabArray();
	// Convert QList<> from C++ memory to manually-managed C memory
	double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextOption_setTabs(QTextOption* self, struct miqt_array /* of QTextOption__Tab* */  tabStops) {
	QList<QTextOption::Tab> tabStops_QList;
	tabStops_QList.reserve(tabStops.len);
	QTextOption__Tab** tabStops_arr = static_cast<QTextOption__Tab**>(tabStops.data);
	for(size_t i = 0; i < tabStops.len; ++i) {
		tabStops_QList.push_back(*(tabStops_arr[i]));
	}
	self->setTabs(tabStops_QList);
}

struct miqt_array /* of QTextOption__Tab* */  QTextOption_tabs(const QTextOption* self) {
	QList<QTextOption::Tab> _ret = self->tabs();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextOption__Tab** _arr = static_cast<QTextOption__Tab**>(malloc(sizeof(QTextOption__Tab*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTextOption::Tab(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextOption_setUseDesignMetrics(QTextOption* self, bool b) {
	self->setUseDesignMetrics(b);
}

bool QTextOption_useDesignMetrics(const QTextOption* self) {
	return self->useDesignMetrics();
}

void QTextOption_delete(QTextOption* self) {
	delete self;
}

QTextOption__Tab* QTextOption__Tab_new() {
	return new QTextOption::Tab();
}

QTextOption__Tab* QTextOption__Tab_new2(double pos, int tabType) {
	return new QTextOption::Tab(static_cast<qreal>(pos), static_cast<QTextOption::TabType>(tabType));
}

QTextOption__Tab* QTextOption__Tab_new3(QTextOption__Tab* param1) {
	return new QTextOption::Tab(*param1);
}

QTextOption__Tab* QTextOption__Tab_new4(double pos, int tabType, QChar* delim) {
	return new QTextOption::Tab(static_cast<qreal>(pos), static_cast<QTextOption::TabType>(tabType), *delim);
}

bool QTextOption__Tab_operatorEqual(const QTextOption__Tab* self, QTextOption__Tab* other) {
	return (*self == *other);
}

bool QTextOption__Tab_operatorNotEqual(const QTextOption__Tab* self, QTextOption__Tab* other) {
	return (*self != *other);
}

void QTextOption__Tab_delete(QTextOption__Tab* self) {
	delete self;
}

