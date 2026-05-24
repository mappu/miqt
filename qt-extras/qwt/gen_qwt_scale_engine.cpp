#include <QList>
#include <qwt_scale_engine.h>
#include "gen_qwt_scale_engine.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtScaleEngine_autoScale(const QwtScaleEngine*, intptr_t, int, double*, double*, double*);
QwtScaleDiv* miqt_exec_callback_QwtScaleEngine_divideScale(const QwtScaleEngine*, intptr_t, double, double, int, int, double);
void miqt_exec_callback_QwtLinearScaleEngine_autoScale(const QwtLinearScaleEngine*, intptr_t, int, double*, double*, double*);
QwtScaleDiv* miqt_exec_callback_QwtLinearScaleEngine_divideScale(const QwtLinearScaleEngine*, intptr_t, double, double, int, int, double);
void miqt_exec_callback_QwtLogScaleEngine_autoScale(const QwtLogScaleEngine*, intptr_t, int, double*, double*, double*);
QwtScaleDiv* miqt_exec_callback_QwtLogScaleEngine_divideScale(const QwtLogScaleEngine*, intptr_t, double, double, int, int, double);
#ifdef __cplusplus
} /* extern C */
#endif

double QwtScaleArithmetic_ceilEps(double value, double intervalSize) {
	return QwtScaleArithmetic::ceilEps(static_cast<double>(value), static_cast<double>(intervalSize));
}

double QwtScaleArithmetic_floorEps(double value, double intervalSize) {
	return QwtScaleArithmetic::floorEps(static_cast<double>(value), static_cast<double>(intervalSize));
}

double QwtScaleArithmetic_divideEps(double intervalSize, double numSteps) {
	return QwtScaleArithmetic::divideEps(static_cast<double>(intervalSize), static_cast<double>(numSteps));
}

double QwtScaleArithmetic_divideInterval(double intervalSize, int numSteps, unsigned int base) {
	return QwtScaleArithmetic::divideInterval(static_cast<double>(intervalSize), static_cast<int>(numSteps), static_cast<uint>(base));
}

void QwtScaleArithmetic_delete(QwtScaleArithmetic* self) {
	delete self;
}

class MiqtVirtualQwtScaleEngine final : public QwtScaleEngine {
public:

	MiqtVirtualQwtScaleEngine(): QwtScaleEngine() {}
	MiqtVirtualQwtScaleEngine(const QwtScaleEngine& param1): QwtScaleEngine(param1) {}
	MiqtVirtualQwtScaleEngine(uint base): QwtScaleEngine(base) {}

	virtual ~MiqtVirtualQwtScaleEngine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoScale = 0;

	// Subclass to allow providing a Go implementation
	virtual void autoScale(int maxNumSteps, double& x1, double& x2, double& stepSize) const override {
		if (handle__autoScale == 0) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = maxNumSteps;
		double* sigval2 = &x1;
		double* sigval3 = &x2;
		double* sigval4 = &stepSize;
		miqt_exec_callback_QwtScaleEngine_autoScale(this, handle__autoScale, sigval1, sigval2, sigval3, sigval4);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__divideScale = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtScaleDiv divideScale(double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize) const override {
		if (handle__divideScale == 0) {
			return QwtScaleDiv(); // Pure virtual, there is no base we can call
		}

		double sigval1 = x1;
		double sigval2 = x2;
		int sigval3 = maxMajorSteps;
		int sigval4 = maxMinorSteps;
		double sigval5 = stepSize;
		QwtScaleDiv* callback_return_value = miqt_exec_callback_QwtScaleEngine_divideScale(this, handle__divideScale, sigval1, sigval2, sigval3, sigval4, sigval5);
		return *callback_return_value;
	}

	// Wrappers to allow calling protected methods:
	friend bool QwtScaleEngine_protectedbase_contains(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double value);
	friend struct miqt_array /* of double */  QwtScaleEngine_protectedbase_strip(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  param1, QwtInterval* param2);
	friend double QwtScaleEngine_protectedbase_divideInterval(bool* _dynamic_cast_ok, const void* self, double intervalSize, int numSteps);
	friend QwtInterval* QwtScaleEngine_protectedbase_buildInterval(bool* _dynamic_cast_ok, const void* self, double value);
};

QwtScaleEngine* QwtScaleEngine_new() {
	return new (std::nothrow) MiqtVirtualQwtScaleEngine();
}

QwtScaleEngine* QwtScaleEngine_new2(QwtScaleEngine* param1) {
	return new (std::nothrow) MiqtVirtualQwtScaleEngine(*param1);
}

QwtScaleEngine* QwtScaleEngine_new3(unsigned int base) {
	return new (std::nothrow) MiqtVirtualQwtScaleEngine(static_cast<uint>(base));
}

void QwtScaleEngine_setBase(QwtScaleEngine* self, unsigned int base) {
	self->setBase(static_cast<uint>(base));
}

unsigned int QwtScaleEngine_base(const QwtScaleEngine* self) {
	uint _ret = self->base();
	return static_cast<unsigned int>(_ret);
}

void QwtScaleEngine_setAttribute(QwtScaleEngine* self, int param1) {
	self->setAttribute(static_cast<QwtScaleEngine::Attribute>(param1));
}

bool QwtScaleEngine_testAttribute(const QwtScaleEngine* self, int param1) {
	return self->testAttribute(static_cast<QwtScaleEngine::Attribute>(param1));
}

void QwtScaleEngine_setAttributes(QwtScaleEngine* self, int attributes) {
	self->setAttributes(static_cast<QwtScaleEngine::Attributes>(attributes));
}

int QwtScaleEngine_attributes(const QwtScaleEngine* self) {
	QwtScaleEngine::Attributes _ret = self->attributes();
	return static_cast<int>(_ret);
}

void QwtScaleEngine_setReference(QwtScaleEngine* self, double reference) {
	self->setReference(static_cast<double>(reference));
}

double QwtScaleEngine_reference(const QwtScaleEngine* self) {
	return self->reference();
}

void QwtScaleEngine_setMargins(QwtScaleEngine* self, double lower, double upper) {
	self->setMargins(static_cast<double>(lower), static_cast<double>(upper));
}

double QwtScaleEngine_lowerMargin(const QwtScaleEngine* self) {
	return self->lowerMargin();
}

double QwtScaleEngine_upperMargin(const QwtScaleEngine* self) {
	return self->upperMargin();
}

void QwtScaleEngine_autoScale(const QwtScaleEngine* self, int maxNumSteps, double* x1, double* x2, double* stepSize) {
	self->autoScale(static_cast<int>(maxNumSteps), static_cast<double&>(*x1), static_cast<double&>(*x2), static_cast<double&>(*stepSize));
}

QwtScaleDiv* QwtScaleEngine_divideScale(const QwtScaleEngine* self, double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize) {
	return new QwtScaleDiv(self->divideScale(static_cast<double>(x1), static_cast<double>(x2), static_cast<int>(maxMajorSteps), static_cast<int>(maxMinorSteps), static_cast<double>(stepSize)));
}

void QwtScaleEngine_setTransformation(QwtScaleEngine* self, QwtTransform* transformation) {
	self->setTransformation(transformation);
}

QwtTransform* QwtScaleEngine_transformation(const QwtScaleEngine* self) {
	return self->transformation();
}

void QwtScaleEngine_operatorAssign(QwtScaleEngine* self, QwtScaleEngine* param1) {
	self->operator=(*param1);
}

void QwtScaleEngine_setAttribute2(QwtScaleEngine* self, int param1, bool on) {
	self->setAttribute(static_cast<QwtScaleEngine::Attribute>(param1), on);
}

bool QwtScaleEngine_override_virtual_autoScale(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtScaleEngine*>( (QwtScaleEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoScale = slot;
	return true;
}

bool QwtScaleEngine_override_virtual_divideScale(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtScaleEngine*>( (QwtScaleEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__divideScale = slot;
	return true;
}

bool QwtScaleEngine_protectedbase_contains(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double value) {
	MiqtVirtualQwtScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtScaleEngine*>( (QwtScaleEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->contains(*param1, static_cast<double>(value));
}

struct miqt_array /* of double */  QwtScaleEngine_protectedbase_strip(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  param1, QwtInterval* param2) {
	MiqtVirtualQwtScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtScaleEngine*>( (QwtScaleEngine*)(self) );
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

double QwtScaleEngine_protectedbase_divideInterval(bool* _dynamic_cast_ok, const void* self, double intervalSize, int numSteps) {
	MiqtVirtualQwtScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtScaleEngine*>( (QwtScaleEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->divideInterval(static_cast<double>(intervalSize), static_cast<int>(numSteps));
}

QwtInterval* QwtScaleEngine_protectedbase_buildInterval(bool* _dynamic_cast_ok, const void* self, double value) {
	MiqtVirtualQwtScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtScaleEngine*>( (QwtScaleEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QwtInterval(self_cast->buildInterval(static_cast<double>(value)));
}

void QwtScaleEngine_delete(QwtScaleEngine* self) {
	delete self;
}

class MiqtVirtualQwtLinearScaleEngine final : public QwtLinearScaleEngine {
public:

	MiqtVirtualQwtLinearScaleEngine(): QwtLinearScaleEngine() {}
	MiqtVirtualQwtLinearScaleEngine(const QwtLinearScaleEngine& param1): QwtLinearScaleEngine(param1) {}
	MiqtVirtualQwtLinearScaleEngine(uint base): QwtLinearScaleEngine(base) {}

	virtual ~MiqtVirtualQwtLinearScaleEngine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoScale = 0;

	// Subclass to allow providing a Go implementation
	virtual void autoScale(int maxNumSteps, double& x1, double& x2, double& stepSize) const override {
		if (handle__autoScale == 0) {
			QwtLinearScaleEngine::autoScale(maxNumSteps, x1, x2, stepSize);
			return;
		}

		int sigval1 = maxNumSteps;
		double* sigval2 = &x1;
		double* sigval3 = &x2;
		double* sigval4 = &stepSize;
		miqt_exec_callback_QwtLinearScaleEngine_autoScale(this, handle__autoScale, sigval1, sigval2, sigval3, sigval4);

	}

	friend void QwtLinearScaleEngine_virtualbase_autoScale(const void* self, int maxNumSteps, double* x1, double* x2, double* stepSize);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__divideScale = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtScaleDiv divideScale(double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize) const override {
		if (handle__divideScale == 0) {
			return QwtLinearScaleEngine::divideScale(x1, x2, maxMajorSteps, maxMinorSteps, stepSize);
		}

		double sigval1 = x1;
		double sigval2 = x2;
		int sigval3 = maxMajorSteps;
		int sigval4 = maxMinorSteps;
		double sigval5 = stepSize;
		QwtScaleDiv* callback_return_value = miqt_exec_callback_QwtLinearScaleEngine_divideScale(this, handle__divideScale, sigval1, sigval2, sigval3, sigval4, sigval5);
		return *callback_return_value;
	}

	friend QwtScaleDiv* QwtLinearScaleEngine_virtualbase_divideScale(const void* self, double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize);

	// Wrappers to allow calling protected methods:
	friend QwtInterval* QwtLinearScaleEngine_protectedbase_align(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double stepSize);
	friend void QwtLinearScaleEngine_protectedbase_buildTicks(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double stepSize, int maxMinorSteps, struct miqt_array /* of double */  ticks);
	friend struct miqt_array /* of double */  QwtLinearScaleEngine_protectedbase_buildMajorTicks(bool* _dynamic_cast_ok, const void* self, QwtInterval* interval, double stepSize);
	friend void QwtLinearScaleEngine_protectedbase_buildMinorTicks(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  majorTicks, int maxMinorSteps, double stepSize, struct miqt_array /* of double */  minorTicks, struct miqt_array /* of double */  mediumTicks);
	friend bool QwtLinearScaleEngine_protectedbase_contains(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double value);
	friend struct miqt_array /* of double */  QwtLinearScaleEngine_protectedbase_strip(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  param1, QwtInterval* param2);
	friend double QwtLinearScaleEngine_protectedbase_divideInterval(bool* _dynamic_cast_ok, const void* self, double intervalSize, int numSteps);
	friend QwtInterval* QwtLinearScaleEngine_protectedbase_buildInterval(bool* _dynamic_cast_ok, const void* self, double value);
};

QwtLinearScaleEngine* QwtLinearScaleEngine_new() {
	return new (std::nothrow) MiqtVirtualQwtLinearScaleEngine();
}

QwtLinearScaleEngine* QwtLinearScaleEngine_new2(QwtLinearScaleEngine* param1) {
	return new (std::nothrow) MiqtVirtualQwtLinearScaleEngine(*param1);
}

QwtLinearScaleEngine* QwtLinearScaleEngine_new3(unsigned int base) {
	return new (std::nothrow) MiqtVirtualQwtLinearScaleEngine(static_cast<uint>(base));
}

void QwtLinearScaleEngine_virtbase(QwtLinearScaleEngine* src, QwtScaleEngine** outptr_QwtScaleEngine) {
	*outptr_QwtScaleEngine = static_cast<QwtScaleEngine*>(src);
}

void QwtLinearScaleEngine_autoScale(const QwtLinearScaleEngine* self, int maxNumSteps, double* x1, double* x2, double* stepSize) {
	self->autoScale(static_cast<int>(maxNumSteps), static_cast<double&>(*x1), static_cast<double&>(*x2), static_cast<double&>(*stepSize));
}

QwtScaleDiv* QwtLinearScaleEngine_divideScale(const QwtLinearScaleEngine* self, double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize) {
	return new QwtScaleDiv(self->divideScale(static_cast<double>(x1), static_cast<double>(x2), static_cast<int>(maxMajorSteps), static_cast<int>(maxMinorSteps), static_cast<double>(stepSize)));
}

void QwtLinearScaleEngine_operatorAssign(QwtLinearScaleEngine* self, QwtLinearScaleEngine* param1) {
	self->operator=(*param1);
}

bool QwtLinearScaleEngine_override_virtual_autoScale(void* self, intptr_t slot) {
	MiqtVirtualQwtLinearScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtLinearScaleEngine*>( (QwtLinearScaleEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoScale = slot;
	return true;
}

void QwtLinearScaleEngine_virtualbase_autoScale(const void* self, int maxNumSteps, double* x1, double* x2, double* stepSize) {
	static_cast<const MiqtVirtualQwtLinearScaleEngine*>(self)->QwtLinearScaleEngine::autoScale(static_cast<int>(maxNumSteps), static_cast<double&>(*x1), static_cast<double&>(*x2), static_cast<double&>(*stepSize));
}

bool QwtLinearScaleEngine_override_virtual_divideScale(void* self, intptr_t slot) {
	MiqtVirtualQwtLinearScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtLinearScaleEngine*>( (QwtLinearScaleEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__divideScale = slot;
	return true;
}

QwtScaleDiv* QwtLinearScaleEngine_virtualbase_divideScale(const void* self, double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize) {
	return new QwtScaleDiv(static_cast<const MiqtVirtualQwtLinearScaleEngine*>(self)->QwtLinearScaleEngine::divideScale(static_cast<double>(x1), static_cast<double>(x2), static_cast<int>(maxMajorSteps), static_cast<int>(maxMinorSteps), static_cast<double>(stepSize)));
}

QwtInterval* QwtLinearScaleEngine_protectedbase_align(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double stepSize) {
	MiqtVirtualQwtLinearScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtLinearScaleEngine*>( (QwtLinearScaleEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QwtInterval(self_cast->align(*param1, static_cast<double>(stepSize)));
}

void QwtLinearScaleEngine_protectedbase_buildTicks(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double stepSize, int maxMinorSteps, struct miqt_array /* of double */  ticks) {
	MiqtVirtualQwtLinearScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtLinearScaleEngine*>( (QwtLinearScaleEngine*)(self) );
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

struct miqt_array /* of double */  QwtLinearScaleEngine_protectedbase_buildMajorTicks(bool* _dynamic_cast_ok, const void* self, QwtInterval* interval, double stepSize) {
	MiqtVirtualQwtLinearScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtLinearScaleEngine*>( (QwtLinearScaleEngine*)(self) );
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

void QwtLinearScaleEngine_protectedbase_buildMinorTicks(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  majorTicks, int maxMinorSteps, double stepSize, struct miqt_array /* of double */  minorTicks, struct miqt_array /* of double */  mediumTicks) {
	MiqtVirtualQwtLinearScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtLinearScaleEngine*>( (QwtLinearScaleEngine*)(self) );
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

bool QwtLinearScaleEngine_protectedbase_contains(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double value) {
	MiqtVirtualQwtLinearScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtLinearScaleEngine*>( (QwtLinearScaleEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->contains(*param1, static_cast<double>(value));
}

struct miqt_array /* of double */  QwtLinearScaleEngine_protectedbase_strip(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  param1, QwtInterval* param2) {
	MiqtVirtualQwtLinearScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtLinearScaleEngine*>( (QwtLinearScaleEngine*)(self) );
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

double QwtLinearScaleEngine_protectedbase_divideInterval(bool* _dynamic_cast_ok, const void* self, double intervalSize, int numSteps) {
	MiqtVirtualQwtLinearScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtLinearScaleEngine*>( (QwtLinearScaleEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->divideInterval(static_cast<double>(intervalSize), static_cast<int>(numSteps));
}

QwtInterval* QwtLinearScaleEngine_protectedbase_buildInterval(bool* _dynamic_cast_ok, const void* self, double value) {
	MiqtVirtualQwtLinearScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtLinearScaleEngine*>( (QwtLinearScaleEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QwtInterval(self_cast->buildInterval(static_cast<double>(value)));
}

void QwtLinearScaleEngine_delete(QwtLinearScaleEngine* self) {
	delete self;
}

class MiqtVirtualQwtLogScaleEngine final : public QwtLogScaleEngine {
public:

	MiqtVirtualQwtLogScaleEngine(): QwtLogScaleEngine() {}
	MiqtVirtualQwtLogScaleEngine(const QwtLogScaleEngine& param1): QwtLogScaleEngine(param1) {}
	MiqtVirtualQwtLogScaleEngine(uint base): QwtLogScaleEngine(base) {}

	virtual ~MiqtVirtualQwtLogScaleEngine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoScale = 0;

	// Subclass to allow providing a Go implementation
	virtual void autoScale(int maxNumSteps, double& x1, double& x2, double& stepSize) const override {
		if (handle__autoScale == 0) {
			QwtLogScaleEngine::autoScale(maxNumSteps, x1, x2, stepSize);
			return;
		}

		int sigval1 = maxNumSteps;
		double* sigval2 = &x1;
		double* sigval3 = &x2;
		double* sigval4 = &stepSize;
		miqt_exec_callback_QwtLogScaleEngine_autoScale(this, handle__autoScale, sigval1, sigval2, sigval3, sigval4);

	}

	friend void QwtLogScaleEngine_virtualbase_autoScale(const void* self, int maxNumSteps, double* x1, double* x2, double* stepSize);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__divideScale = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtScaleDiv divideScale(double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize) const override {
		if (handle__divideScale == 0) {
			return QwtLogScaleEngine::divideScale(x1, x2, maxMajorSteps, maxMinorSteps, stepSize);
		}

		double sigval1 = x1;
		double sigval2 = x2;
		int sigval3 = maxMajorSteps;
		int sigval4 = maxMinorSteps;
		double sigval5 = stepSize;
		QwtScaleDiv* callback_return_value = miqt_exec_callback_QwtLogScaleEngine_divideScale(this, handle__divideScale, sigval1, sigval2, sigval3, sigval4, sigval5);
		return *callback_return_value;
	}

	friend QwtScaleDiv* QwtLogScaleEngine_virtualbase_divideScale(const void* self, double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize);

	// Wrappers to allow calling protected methods:
	friend QwtInterval* QwtLogScaleEngine_protectedbase_align(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double stepSize);
	friend void QwtLogScaleEngine_protectedbase_buildTicks(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double stepSize, int maxMinorSteps, struct miqt_array /* of double */  ticks);
	friend struct miqt_array /* of double */  QwtLogScaleEngine_protectedbase_buildMajorTicks(bool* _dynamic_cast_ok, const void* self, QwtInterval* interval, double stepSize);
	friend void QwtLogScaleEngine_protectedbase_buildMinorTicks(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  majorTicks, int maxMinorSteps, double stepSize, struct miqt_array /* of double */  minorTicks, struct miqt_array /* of double */  mediumTicks);
	friend bool QwtLogScaleEngine_protectedbase_contains(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double value);
	friend struct miqt_array /* of double */  QwtLogScaleEngine_protectedbase_strip(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  param1, QwtInterval* param2);
	friend double QwtLogScaleEngine_protectedbase_divideInterval(bool* _dynamic_cast_ok, const void* self, double intervalSize, int numSteps);
	friend QwtInterval* QwtLogScaleEngine_protectedbase_buildInterval(bool* _dynamic_cast_ok, const void* self, double value);
};

QwtLogScaleEngine* QwtLogScaleEngine_new() {
	return new (std::nothrow) MiqtVirtualQwtLogScaleEngine();
}

QwtLogScaleEngine* QwtLogScaleEngine_new2(QwtLogScaleEngine* param1) {
	return new (std::nothrow) MiqtVirtualQwtLogScaleEngine(*param1);
}

QwtLogScaleEngine* QwtLogScaleEngine_new3(unsigned int base) {
	return new (std::nothrow) MiqtVirtualQwtLogScaleEngine(static_cast<uint>(base));
}

void QwtLogScaleEngine_virtbase(QwtLogScaleEngine* src, QwtScaleEngine** outptr_QwtScaleEngine) {
	*outptr_QwtScaleEngine = static_cast<QwtScaleEngine*>(src);
}

void QwtLogScaleEngine_autoScale(const QwtLogScaleEngine* self, int maxNumSteps, double* x1, double* x2, double* stepSize) {
	self->autoScale(static_cast<int>(maxNumSteps), static_cast<double&>(*x1), static_cast<double&>(*x2), static_cast<double&>(*stepSize));
}

QwtScaleDiv* QwtLogScaleEngine_divideScale(const QwtLogScaleEngine* self, double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize) {
	return new QwtScaleDiv(self->divideScale(static_cast<double>(x1), static_cast<double>(x2), static_cast<int>(maxMajorSteps), static_cast<int>(maxMinorSteps), static_cast<double>(stepSize)));
}

void QwtLogScaleEngine_operatorAssign(QwtLogScaleEngine* self, QwtLogScaleEngine* param1) {
	self->operator=(*param1);
}

bool QwtLogScaleEngine_override_virtual_autoScale(void* self, intptr_t slot) {
	MiqtVirtualQwtLogScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtLogScaleEngine*>( (QwtLogScaleEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoScale = slot;
	return true;
}

void QwtLogScaleEngine_virtualbase_autoScale(const void* self, int maxNumSteps, double* x1, double* x2, double* stepSize) {
	static_cast<const MiqtVirtualQwtLogScaleEngine*>(self)->QwtLogScaleEngine::autoScale(static_cast<int>(maxNumSteps), static_cast<double&>(*x1), static_cast<double&>(*x2), static_cast<double&>(*stepSize));
}

bool QwtLogScaleEngine_override_virtual_divideScale(void* self, intptr_t slot) {
	MiqtVirtualQwtLogScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtLogScaleEngine*>( (QwtLogScaleEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__divideScale = slot;
	return true;
}

QwtScaleDiv* QwtLogScaleEngine_virtualbase_divideScale(const void* self, double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize) {
	return new QwtScaleDiv(static_cast<const MiqtVirtualQwtLogScaleEngine*>(self)->QwtLogScaleEngine::divideScale(static_cast<double>(x1), static_cast<double>(x2), static_cast<int>(maxMajorSteps), static_cast<int>(maxMinorSteps), static_cast<double>(stepSize)));
}

QwtInterval* QwtLogScaleEngine_protectedbase_align(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double stepSize) {
	MiqtVirtualQwtLogScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtLogScaleEngine*>( (QwtLogScaleEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QwtInterval(self_cast->align(*param1, static_cast<double>(stepSize)));
}

void QwtLogScaleEngine_protectedbase_buildTicks(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double stepSize, int maxMinorSteps, struct miqt_array /* of double */  ticks) {
	MiqtVirtualQwtLogScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtLogScaleEngine*>( (QwtLogScaleEngine*)(self) );
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

struct miqt_array /* of double */  QwtLogScaleEngine_protectedbase_buildMajorTicks(bool* _dynamic_cast_ok, const void* self, QwtInterval* interval, double stepSize) {
	MiqtVirtualQwtLogScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtLogScaleEngine*>( (QwtLogScaleEngine*)(self) );
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

void QwtLogScaleEngine_protectedbase_buildMinorTicks(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  majorTicks, int maxMinorSteps, double stepSize, struct miqt_array /* of double */  minorTicks, struct miqt_array /* of double */  mediumTicks) {
	MiqtVirtualQwtLogScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtLogScaleEngine*>( (QwtLogScaleEngine*)(self) );
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

bool QwtLogScaleEngine_protectedbase_contains(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double value) {
	MiqtVirtualQwtLogScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtLogScaleEngine*>( (QwtLogScaleEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->contains(*param1, static_cast<double>(value));
}

struct miqt_array /* of double */  QwtLogScaleEngine_protectedbase_strip(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  param1, QwtInterval* param2) {
	MiqtVirtualQwtLogScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtLogScaleEngine*>( (QwtLogScaleEngine*)(self) );
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

double QwtLogScaleEngine_protectedbase_divideInterval(bool* _dynamic_cast_ok, const void* self, double intervalSize, int numSteps) {
	MiqtVirtualQwtLogScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtLogScaleEngine*>( (QwtLogScaleEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->divideInterval(static_cast<double>(intervalSize), static_cast<int>(numSteps));
}

QwtInterval* QwtLogScaleEngine_protectedbase_buildInterval(bool* _dynamic_cast_ok, const void* self, double value) {
	MiqtVirtualQwtLogScaleEngine* self_cast = dynamic_cast<MiqtVirtualQwtLogScaleEngine*>( (QwtLogScaleEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QwtInterval(self_cast->buildInterval(static_cast<double>(value)));
}

void QwtLogScaleEngine_delete(QwtLogScaleEngine* self) {
	delete self;
}

