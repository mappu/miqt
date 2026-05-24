#include <QDateTime>
#include <QList>
#include <qwt_date_scale_engine.h>
#include "gen_qwt_date_scale_engine.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtDateScaleEngine_autoScale(const QwtDateScaleEngine*, intptr_t, int, double*, double*, double*);
QwtScaleDiv* miqt_exec_callback_QwtDateScaleEngine_divideScale(const QwtDateScaleEngine*, intptr_t, double, double, int, int, double);
int miqt_exec_callback_QwtDateScaleEngine_intervalType(const QwtDateScaleEngine*, intptr_t, QDateTime*, QDateTime*, int);
QDateTime* miqt_exec_callback_QwtDateScaleEngine_alignDate(const QwtDateScaleEngine*, intptr_t, QDateTime*, double, int, bool);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtDateScaleEngine final : public QwtDateScaleEngine {
public:

	MiqtVirtualQwtDateScaleEngine(): QwtDateScaleEngine() {}
	MiqtVirtualQwtDateScaleEngine(const QwtDateScaleEngine& param1): QwtDateScaleEngine(param1) {}
	MiqtVirtualQwtDateScaleEngine(Qt::TimeSpec param1): QwtDateScaleEngine(param1) {}

	virtual ~MiqtVirtualQwtDateScaleEngine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoScale = 0;

	// Subclass to allow providing a Go implementation
	virtual void autoScale(int maxNumSteps, double& x1, double& x2, double& stepSize) const override {
		if (handle__autoScale == 0) {
			QwtDateScaleEngine::autoScale(maxNumSteps, x1, x2, stepSize);
			return;
		}

		int sigval1 = maxNumSteps;
		double* sigval2 = &x1;
		double* sigval3 = &x2;
		double* sigval4 = &stepSize;
		miqt_exec_callback_QwtDateScaleEngine_autoScale(this, handle__autoScale, sigval1, sigval2, sigval3, sigval4);

	}

	friend void QwtDateScaleEngine_virtualbase_autoScale(const void* self, int maxNumSteps, double* x1, double* x2, double* stepSize);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__divideScale = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtScaleDiv divideScale(double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize) const override {
		if (handle__divideScale == 0) {
			return QwtDateScaleEngine::divideScale(x1, x2, maxMajorSteps, maxMinorSteps, stepSize);
		}

		double sigval1 = x1;
		double sigval2 = x2;
		int sigval3 = maxMajorSteps;
		int sigval4 = maxMinorSteps;
		double sigval5 = stepSize;
		QwtScaleDiv* callback_return_value = miqt_exec_callback_QwtDateScaleEngine_divideScale(this, handle__divideScale, sigval1, sigval2, sigval3, sigval4, sigval5);
		return *callback_return_value;
	}

	friend QwtScaleDiv* QwtDateScaleEngine_virtualbase_divideScale(const void* self, double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__intervalType = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtDate::IntervalType intervalType(const QDateTime& param1, const QDateTime& param2, int maxSteps) const override {
		if (handle__intervalType == 0) {
			return QwtDateScaleEngine::intervalType(param1, param2, maxSteps);
		}

		const QDateTime& param1_ret = param1;
		// Cast returned reference into pointer
		QDateTime* sigval1 = const_cast<QDateTime*>(&param1_ret);
		const QDateTime& param2_ret = param2;
		// Cast returned reference into pointer
		QDateTime* sigval2 = const_cast<QDateTime*>(&param2_ret);
		int sigval3 = maxSteps;
		int callback_return_value = miqt_exec_callback_QwtDateScaleEngine_intervalType(this, handle__intervalType, sigval1, sigval2, sigval3);
		return static_cast<QwtDate::IntervalType>(callback_return_value);
	}

	friend int QwtDateScaleEngine_virtualbase_intervalType(const void* self, QDateTime* param1, QDateTime* param2, int maxSteps);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__alignDate = 0;

	// Subclass to allow providing a Go implementation
	virtual QDateTime alignDate(const QDateTime& param1, double stepSize, QwtDate::IntervalType param3, bool up) const override {
		if (handle__alignDate == 0) {
			return QwtDateScaleEngine::alignDate(param1, stepSize, param3, up);
		}

		const QDateTime& param1_ret = param1;
		// Cast returned reference into pointer
		QDateTime* sigval1 = const_cast<QDateTime*>(&param1_ret);
		double sigval2 = stepSize;
		QwtDate::IntervalType param3_ret = param3;
		int sigval3 = static_cast<int>(param3_ret);
		bool sigval4 = up;
		QDateTime* callback_return_value = miqt_exec_callback_QwtDateScaleEngine_alignDate(this, handle__alignDate, sigval1, sigval2, sigval3, sigval4);
		return *callback_return_value;
	}

	friend QDateTime* QwtDateScaleEngine_virtualbase_alignDate(const void* self, QDateTime* param1, double stepSize, int param3, bool up);

	// Wrappers to allow calling protected methods:
	friend QwtInterval* QwtDateScaleEngine_protectedbase_align(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double stepSize);
	friend void QwtDateScaleEngine_protectedbase_buildTicks(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double stepSize, int maxMinorSteps, struct miqt_array /* of double */  ticks);
	friend struct miqt_array /* of double */  QwtDateScaleEngine_protectedbase_buildMajorTicks(bool* _dynamic_cast_ok, const void* self, QwtInterval* interval, double stepSize);
	friend void QwtDateScaleEngine_protectedbase_buildMinorTicks(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  majorTicks, int maxMinorSteps, double stepSize, struct miqt_array /* of double */  minorTicks, struct miqt_array /* of double */  mediumTicks);
	friend bool QwtDateScaleEngine_protectedbase_contains(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double value);
	friend struct miqt_array /* of double */  QwtDateScaleEngine_protectedbase_strip(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  param1, QwtInterval* param2);
	friend double QwtDateScaleEngine_protectedbase_divideInterval(bool* _dynamic_cast_ok, const void* self, double intervalSize, int numSteps);
	friend QwtInterval* QwtDateScaleEngine_protectedbase_buildInterval(bool* _dynamic_cast_ok, const void* self, double value);
};

QwtDateScaleEngine* QwtDateScaleEngine_new() {
	return new (std::nothrow) MiqtVirtualQwtDateScaleEngine();
}

QwtDateScaleEngine* QwtDateScaleEngine_new2(QwtDateScaleEngine* param1) {
	return new (std::nothrow) MiqtVirtualQwtDateScaleEngine(*param1);
}

QwtDateScaleEngine* QwtDateScaleEngine_new3(int param1) {
	return new (std::nothrow) MiqtVirtualQwtDateScaleEngine(static_cast<Qt::TimeSpec>(param1));
}

void QwtDateScaleEngine_virtbase(QwtDateScaleEngine* src, QwtLinearScaleEngine** outptr_QwtLinearScaleEngine) {
	*outptr_QwtLinearScaleEngine = static_cast<QwtLinearScaleEngine*>(src);
}

void QwtDateScaleEngine_setTimeSpec(QwtDateScaleEngine* self, int timeSpec) {
	self->setTimeSpec(static_cast<Qt::TimeSpec>(timeSpec));
}

int QwtDateScaleEngine_timeSpec(const QwtDateScaleEngine* self) {
	Qt::TimeSpec _ret = self->timeSpec();
	return static_cast<int>(_ret);
}

void QwtDateScaleEngine_setUtcOffset(QwtDateScaleEngine* self, int seconds) {
	self->setUtcOffset(static_cast<int>(seconds));
}

int QwtDateScaleEngine_utcOffset(const QwtDateScaleEngine* self) {
	return self->utcOffset();
}

void QwtDateScaleEngine_setWeek0Type(QwtDateScaleEngine* self, int week0Type) {
	self->setWeek0Type(static_cast<QwtDate::Week0Type>(week0Type));
}

int QwtDateScaleEngine_week0Type(const QwtDateScaleEngine* self) {
	QwtDate::Week0Type _ret = self->week0Type();
	return static_cast<int>(_ret);
}

void QwtDateScaleEngine_setMaxWeeks(QwtDateScaleEngine* self, int maxWeeks) {
	self->setMaxWeeks(static_cast<int>(maxWeeks));
}

int QwtDateScaleEngine_maxWeeks(const QwtDateScaleEngine* self) {
	return self->maxWeeks();
}

void QwtDateScaleEngine_autoScale(const QwtDateScaleEngine* self, int maxNumSteps, double* x1, double* x2, double* stepSize) {
	self->autoScale(static_cast<int>(maxNumSteps), static_cast<double&>(*x1), static_cast<double&>(*x2), static_cast<double&>(*stepSize));
}

QwtScaleDiv* QwtDateScaleEngine_divideScale(const QwtDateScaleEngine* self, double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize) {
	return new QwtScaleDiv(self->divideScale(static_cast<double>(x1), static_cast<double>(x2), static_cast<int>(maxMajorSteps), static_cast<int>(maxMinorSteps), static_cast<double>(stepSize)));
}

int QwtDateScaleEngine_intervalType(const QwtDateScaleEngine* self, QDateTime* param1, QDateTime* param2, int maxSteps) {
	QwtDate::IntervalType _ret = self->intervalType(*param1, *param2, static_cast<int>(maxSteps));
	return static_cast<int>(_ret);
}

QDateTime* QwtDateScaleEngine_toDateTime(const QwtDateScaleEngine* self, double param1) {
	return new QDateTime(self->toDateTime(static_cast<double>(param1)));
}

void QwtDateScaleEngine_operatorAssign(QwtDateScaleEngine* self, QwtDateScaleEngine* param1) {
	self->operator=(*param1);
}

bool QwtDateScaleEngine_override_virtual_autoScale(void* self, intptr_t slot) {
	MiqtVirtualQwtDateScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleEngine*>( (QwtDateScaleEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoScale = slot;
	return true;
}

void QwtDateScaleEngine_virtualbase_autoScale(const void* self, int maxNumSteps, double* x1, double* x2, double* stepSize) {
	static_cast<const MiqtVirtualQwtDateScaleEngine*>(self)->QwtDateScaleEngine::autoScale(static_cast<int>(maxNumSteps), static_cast<double&>(*x1), static_cast<double&>(*x2), static_cast<double&>(*stepSize));
}

bool QwtDateScaleEngine_override_virtual_divideScale(void* self, intptr_t slot) {
	MiqtVirtualQwtDateScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleEngine*>( (QwtDateScaleEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__divideScale = slot;
	return true;
}

QwtScaleDiv* QwtDateScaleEngine_virtualbase_divideScale(const void* self, double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize) {
	return new QwtScaleDiv(static_cast<const MiqtVirtualQwtDateScaleEngine*>(self)->QwtDateScaleEngine::divideScale(static_cast<double>(x1), static_cast<double>(x2), static_cast<int>(maxMajorSteps), static_cast<int>(maxMinorSteps), static_cast<double>(stepSize)));
}

bool QwtDateScaleEngine_override_virtual_intervalType(void* self, intptr_t slot) {
	MiqtVirtualQwtDateScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleEngine*>( (QwtDateScaleEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__intervalType = slot;
	return true;
}

int QwtDateScaleEngine_virtualbase_intervalType(const void* self, QDateTime* param1, QDateTime* param2, int maxSteps) {
	QwtDate::IntervalType _ret = static_cast<const MiqtVirtualQwtDateScaleEngine*>(self)->QwtDateScaleEngine::intervalType(*param1, *param2, static_cast<int>(maxSteps));
	return static_cast<int>(_ret);
}

bool QwtDateScaleEngine_override_virtual_alignDate(void* self, intptr_t slot) {
	MiqtVirtualQwtDateScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleEngine*>( (QwtDateScaleEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__alignDate = slot;
	return true;
}

QDateTime* QwtDateScaleEngine_virtualbase_alignDate(const void* self, QDateTime* param1, double stepSize, int param3, bool up) {
	return new QDateTime(static_cast<const MiqtVirtualQwtDateScaleEngine*>(self)->QwtDateScaleEngine::alignDate(*param1, static_cast<double>(stepSize), static_cast<QwtDate::IntervalType>(param3), up));
}

QwtInterval* QwtDateScaleEngine_protectedbase_align(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double stepSize) {
	MiqtVirtualQwtDateScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleEngine*>( (QwtDateScaleEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QwtInterval(self_cast->align(*param1, static_cast<double>(stepSize)));
}

void QwtDateScaleEngine_protectedbase_buildTicks(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double stepSize, int maxMinorSteps, struct miqt_array /* of double */  ticks) {
	MiqtVirtualQwtDateScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleEngine*>( (QwtDateScaleEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QList<double> ticks_QList;
		ticks_QList.reserve(ticks.len);
		double* ticks_arr = static_cast<double*>(ticks.data);
		for(size_t i = 0; i < ticks.len; ++i) {
			ticks_QList.push_back(static_cast<double>(ticks_arr[i]));
		}
	self_cast->buildTicks(*param1, static_cast<double>(stepSize), static_cast<int>(maxMinorSteps), &ticks_QList);
}

struct miqt_array /* of double */  QwtDateScaleEngine_protectedbase_buildMajorTicks(bool* _dynamic_cast_ok, const void* self, QwtInterval* interval, double stepSize) {
	MiqtVirtualQwtDateScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleEngine*>( (QwtDateScaleEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_array){};
	}

	*_dynamic_cast_ok = true;
	QList<double> _ret = self_cast->buildMajorTicks(*interval, static_cast<double>(stepSize));
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

void QwtDateScaleEngine_protectedbase_buildMinorTicks(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  majorTicks, int maxMinorSteps, double stepSize, struct miqt_array /* of double */  minorTicks, struct miqt_array /* of double */  mediumTicks) {
	MiqtVirtualQwtDateScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleEngine*>( (QwtDateScaleEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QList<double> majorTicks_QList;
		majorTicks_QList.reserve(majorTicks.len);
		double* majorTicks_arr = static_cast<double*>(majorTicks.data);
		for(size_t i = 0; i < majorTicks.len; ++i) {
			majorTicks_QList.push_back(static_cast<double>(majorTicks_arr[i]));
		}
		QList<double> minorTicks_QList;
		minorTicks_QList.reserve(minorTicks.len);
		double* minorTicks_arr = static_cast<double*>(minorTicks.data);
		for(size_t i = 0; i < minorTicks.len; ++i) {
			minorTicks_QList.push_back(static_cast<double>(minorTicks_arr[i]));
		}
		QList<double> mediumTicks_QList;
		mediumTicks_QList.reserve(mediumTicks.len);
		double* mediumTicks_arr = static_cast<double*>(mediumTicks.data);
		for(size_t i = 0; i < mediumTicks.len; ++i) {
			mediumTicks_QList.push_back(static_cast<double>(mediumTicks_arr[i]));
		}
	self_cast->buildMinorTicks(majorTicks_QList, static_cast<int>(maxMinorSteps), static_cast<double>(stepSize), minorTicks_QList, mediumTicks_QList);
}

bool QwtDateScaleEngine_protectedbase_contains(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double value) {
	MiqtVirtualQwtDateScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleEngine*>( (QwtDateScaleEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->contains(*param1, static_cast<double>(value));
}

struct miqt_array /* of double */  QwtDateScaleEngine_protectedbase_strip(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  param1, QwtInterval* param2) {
	MiqtVirtualQwtDateScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleEngine*>( (QwtDateScaleEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_array){};
	}

	*_dynamic_cast_ok = true;
		QList<double> param1_QList;
		param1_QList.reserve(param1.len);
		double* param1_arr = static_cast<double*>(param1.data);
		for(size_t i = 0; i < param1.len; ++i) {
			param1_QList.push_back(static_cast<double>(param1_arr[i]));
		}
	QList<double> _ret = self_cast->strip(param1_QList, *param2);
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

double QwtDateScaleEngine_protectedbase_divideInterval(bool* _dynamic_cast_ok, const void* self, double intervalSize, int numSteps) {
	MiqtVirtualQwtDateScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleEngine*>( (QwtDateScaleEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->divideInterval(static_cast<double>(intervalSize), static_cast<int>(numSteps));
}

QwtInterval* QwtDateScaleEngine_protectedbase_buildInterval(bool* _dynamic_cast_ok, const void* self, double value) {
	MiqtVirtualQwtDateScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleEngine*>( (QwtDateScaleEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QwtInterval(self_cast->buildInterval(static_cast<double>(value)));
}

void QwtDateScaleEngine_delete(QwtDateScaleEngine* self) {
	delete self;
}

