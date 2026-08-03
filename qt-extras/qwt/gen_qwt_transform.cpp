#include <qwt_transform.h>
#include "gen_qwt_transform.h"

#ifdef __cplusplus
extern "C" {
#endif

double miqt_exec_callback_QwtTransform_bounded(const QwtTransform*, intptr_t, double);
double miqt_exec_callback_QwtTransform_transform(const QwtTransform*, intptr_t, double);
double miqt_exec_callback_QwtTransform_invTransform(const QwtTransform*, intptr_t, double);
QwtTransform* miqt_exec_callback_QwtTransform_copy(const QwtTransform*, intptr_t);
double miqt_exec_callback_QwtNullTransform_transform(const QwtNullTransform*, intptr_t, double);
double miqt_exec_callback_QwtNullTransform_invTransform(const QwtNullTransform*, intptr_t, double);
QwtTransform* miqt_exec_callback_QwtNullTransform_copy(const QwtNullTransform*, intptr_t);
double miqt_exec_callback_QwtNullTransform_bounded(const QwtNullTransform*, intptr_t, double);
double miqt_exec_callback_QwtLogTransform_transform(const QwtLogTransform*, intptr_t, double);
double miqt_exec_callback_QwtLogTransform_invTransform(const QwtLogTransform*, intptr_t, double);
double miqt_exec_callback_QwtLogTransform_bounded(const QwtLogTransform*, intptr_t, double);
QwtTransform* miqt_exec_callback_QwtLogTransform_copy(const QwtLogTransform*, intptr_t);
double miqt_exec_callback_QwtPowerTransform_transform(const QwtPowerTransform*, intptr_t, double);
double miqt_exec_callback_QwtPowerTransform_invTransform(const QwtPowerTransform*, intptr_t, double);
QwtTransform* miqt_exec_callback_QwtPowerTransform_copy(const QwtPowerTransform*, intptr_t);
double miqt_exec_callback_QwtPowerTransform_bounded(const QwtPowerTransform*, intptr_t, double);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtTransform final : public QwtTransform {
public:

	MiqtVirtualQwtTransform(): QwtTransform() {}
	MiqtVirtualQwtTransform(const QwtTransform& param1): QwtTransform(param1) {}

	virtual ~MiqtVirtualQwtTransform() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bounded = 0;

	// Subclass to allow providing a Go implementation
	virtual double bounded(double value) const override {
		if (handle__bounded == 0) {
			return QwtTransform::bounded(value);
		}

		double sigval1 = value;
		double callback_return_value = miqt_exec_callback_QwtTransform_bounded(this, handle__bounded, sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtTransform_virtualbase_bounded(const void* self, double value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__transform = 0;

	// Subclass to allow providing a Go implementation
	virtual double transform(double value) const override {
		if (handle__transform == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		double sigval1 = value;
		double callback_return_value = miqt_exec_callback_QwtTransform_transform(this, handle__transform, sigval1);
		return static_cast<double>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__invTransform = 0;

	// Subclass to allow providing a Go implementation
	virtual double invTransform(double value) const override {
		if (handle__invTransform == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		double sigval1 = value;
		double callback_return_value = miqt_exec_callback_QwtTransform_invTransform(this, handle__invTransform, sigval1);
		return static_cast<double>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__copy = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtTransform* copy() const override {
		if (handle__copy == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QwtTransform* callback_return_value = miqt_exec_callback_QwtTransform_copy(this, handle__copy);
		return callback_return_value;
	}

};

QwtTransform* QwtTransform_new() {
	return new (std::nothrow) MiqtVirtualQwtTransform();
}

QwtTransform* QwtTransform_new2(QwtTransform* param1) {
	return new (std::nothrow) MiqtVirtualQwtTransform(*param1);
}

double QwtTransform_bounded(const QwtTransform* self, double value) {
	return self->bounded(static_cast<double>(value));
}

double QwtTransform_transform(const QwtTransform* self, double value) {
	return self->transform(static_cast<double>(value));
}

double QwtTransform_invTransform(const QwtTransform* self, double value) {
	return self->invTransform(static_cast<double>(value));
}

QwtTransform* QwtTransform_copy(const QwtTransform* self) {
	return self->copy();
}

void QwtTransform_operatorAssign(QwtTransform* self, QwtTransform* param1) {
	self->operator=(*param1);
}

bool QwtTransform_override_virtual_bounded(void* self, intptr_t slot) {
	MiqtVirtualQwtTransform* self_cast = dynamic_cast<MiqtVirtualQwtTransform*>( (QwtTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bounded = slot;
	return true;
}

double QwtTransform_virtualbase_bounded(const void* self, double value) {
	return static_cast<const MiqtVirtualQwtTransform*>(self)->QwtTransform::bounded(static_cast<double>(value));
}

bool QwtTransform_override_virtual_transform(void* self, intptr_t slot) {
	MiqtVirtualQwtTransform* self_cast = dynamic_cast<MiqtVirtualQwtTransform*>( (QwtTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__transform = slot;
	return true;
}

bool QwtTransform_override_virtual_invTransform(void* self, intptr_t slot) {
	MiqtVirtualQwtTransform* self_cast = dynamic_cast<MiqtVirtualQwtTransform*>( (QwtTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__invTransform = slot;
	return true;
}

bool QwtTransform_override_virtual_copy(void* self, intptr_t slot) {
	MiqtVirtualQwtTransform* self_cast = dynamic_cast<MiqtVirtualQwtTransform*>( (QwtTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__copy = slot;
	return true;
}

void QwtTransform_delete(QwtTransform* self) {
	delete self;
}

class MiqtVirtualQwtNullTransform final : public QwtNullTransform {
public:

	MiqtVirtualQwtNullTransform(): QwtNullTransform() {}
	MiqtVirtualQwtNullTransform(const QwtNullTransform& param1): QwtNullTransform(param1) {}

	virtual ~MiqtVirtualQwtNullTransform() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__transform = 0;

	// Subclass to allow providing a Go implementation
	virtual double transform(double value) const override {
		if (handle__transform == 0) {
			return QwtNullTransform::transform(value);
		}

		double sigval1 = value;
		double callback_return_value = miqt_exec_callback_QwtNullTransform_transform(this, handle__transform, sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtNullTransform_virtualbase_transform(const void* self, double value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__invTransform = 0;

	// Subclass to allow providing a Go implementation
	virtual double invTransform(double value) const override {
		if (handle__invTransform == 0) {
			return QwtNullTransform::invTransform(value);
		}

		double sigval1 = value;
		double callback_return_value = miqt_exec_callback_QwtNullTransform_invTransform(this, handle__invTransform, sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtNullTransform_virtualbase_invTransform(const void* self, double value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__copy = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtTransform* copy() const override {
		if (handle__copy == 0) {
			return QwtNullTransform::copy();
		}

		QwtTransform* callback_return_value = miqt_exec_callback_QwtNullTransform_copy(this, handle__copy);
		return callback_return_value;
	}

	friend QwtTransform* QwtNullTransform_virtualbase_copy(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bounded = 0;

	// Subclass to allow providing a Go implementation
	virtual double bounded(double value) const override {
		if (handle__bounded == 0) {
			return QwtNullTransform::bounded(value);
		}

		double sigval1 = value;
		double callback_return_value = miqt_exec_callback_QwtNullTransform_bounded(this, handle__bounded, sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtNullTransform_virtualbase_bounded(const void* self, double value);

};

QwtNullTransform* QwtNullTransform_new() {
	return new (std::nothrow) MiqtVirtualQwtNullTransform();
}

QwtNullTransform* QwtNullTransform_new2(QwtNullTransform* param1) {
	return new (std::nothrow) MiqtVirtualQwtNullTransform(*param1);
}

void QwtNullTransform_virtbase(QwtNullTransform* src, QwtTransform** outptr_QwtTransform) {
	*outptr_QwtTransform = static_cast<QwtTransform*>(src);
}

double QwtNullTransform_transform(const QwtNullTransform* self, double value) {
	return self->transform(static_cast<double>(value));
}

double QwtNullTransform_invTransform(const QwtNullTransform* self, double value) {
	return self->invTransform(static_cast<double>(value));
}

QwtTransform* QwtNullTransform_copy(const QwtNullTransform* self) {
	return self->copy();
}

void QwtNullTransform_operatorAssign(QwtNullTransform* self, QwtNullTransform* param1) {
	self->operator=(*param1);
}

bool QwtNullTransform_override_virtual_transform(void* self, intptr_t slot) {
	MiqtVirtualQwtNullTransform* self_cast = dynamic_cast<MiqtVirtualQwtNullTransform*>( (QwtNullTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__transform = slot;
	return true;
}

double QwtNullTransform_virtualbase_transform(const void* self, double value) {
	return static_cast<const MiqtVirtualQwtNullTransform*>(self)->QwtNullTransform::transform(static_cast<double>(value));
}

bool QwtNullTransform_override_virtual_invTransform(void* self, intptr_t slot) {
	MiqtVirtualQwtNullTransform* self_cast = dynamic_cast<MiqtVirtualQwtNullTransform*>( (QwtNullTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__invTransform = slot;
	return true;
}

double QwtNullTransform_virtualbase_invTransform(const void* self, double value) {
	return static_cast<const MiqtVirtualQwtNullTransform*>(self)->QwtNullTransform::invTransform(static_cast<double>(value));
}

bool QwtNullTransform_override_virtual_copy(void* self, intptr_t slot) {
	MiqtVirtualQwtNullTransform* self_cast = dynamic_cast<MiqtVirtualQwtNullTransform*>( (QwtNullTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__copy = slot;
	return true;
}

QwtTransform* QwtNullTransform_virtualbase_copy(const void* self) {
	return static_cast<const MiqtVirtualQwtNullTransform*>(self)->QwtNullTransform::copy();
}

bool QwtNullTransform_override_virtual_bounded(void* self, intptr_t slot) {
	MiqtVirtualQwtNullTransform* self_cast = dynamic_cast<MiqtVirtualQwtNullTransform*>( (QwtNullTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bounded = slot;
	return true;
}

double QwtNullTransform_virtualbase_bounded(const void* self, double value) {
	return static_cast<const MiqtVirtualQwtNullTransform*>(self)->QwtNullTransform::bounded(static_cast<double>(value));
}

void QwtNullTransform_delete(QwtNullTransform* self) {
	delete self;
}

class MiqtVirtualQwtLogTransform final : public QwtLogTransform {
public:

	MiqtVirtualQwtLogTransform(): QwtLogTransform() {}
	MiqtVirtualQwtLogTransform(const QwtLogTransform& param1): QwtLogTransform(param1) {}

	virtual ~MiqtVirtualQwtLogTransform() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__transform = 0;

	// Subclass to allow providing a Go implementation
	virtual double transform(double value) const override {
		if (handle__transform == 0) {
			return QwtLogTransform::transform(value);
		}

		double sigval1 = value;
		double callback_return_value = miqt_exec_callback_QwtLogTransform_transform(this, handle__transform, sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtLogTransform_virtualbase_transform(const void* self, double value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__invTransform = 0;

	// Subclass to allow providing a Go implementation
	virtual double invTransform(double value) const override {
		if (handle__invTransform == 0) {
			return QwtLogTransform::invTransform(value);
		}

		double sigval1 = value;
		double callback_return_value = miqt_exec_callback_QwtLogTransform_invTransform(this, handle__invTransform, sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtLogTransform_virtualbase_invTransform(const void* self, double value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bounded = 0;

	// Subclass to allow providing a Go implementation
	virtual double bounded(double value) const override {
		if (handle__bounded == 0) {
			return QwtLogTransform::bounded(value);
		}

		double sigval1 = value;
		double callback_return_value = miqt_exec_callback_QwtLogTransform_bounded(this, handle__bounded, sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtLogTransform_virtualbase_bounded(const void* self, double value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__copy = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtTransform* copy() const override {
		if (handle__copy == 0) {
			return QwtLogTransform::copy();
		}

		QwtTransform* callback_return_value = miqt_exec_callback_QwtLogTransform_copy(this, handle__copy);
		return callback_return_value;
	}

	friend QwtTransform* QwtLogTransform_virtualbase_copy(const void* self);

};

QwtLogTransform* QwtLogTransform_new() {
	return new (std::nothrow) MiqtVirtualQwtLogTransform();
}

QwtLogTransform* QwtLogTransform_new2(QwtLogTransform* param1) {
	return new (std::nothrow) MiqtVirtualQwtLogTransform(*param1);
}

void QwtLogTransform_virtbase(QwtLogTransform* src, QwtTransform** outptr_QwtTransform) {
	*outptr_QwtTransform = static_cast<QwtTransform*>(src);
}

double QwtLogTransform_transform(const QwtLogTransform* self, double value) {
	return self->transform(static_cast<double>(value));
}

double QwtLogTransform_invTransform(const QwtLogTransform* self, double value) {
	return self->invTransform(static_cast<double>(value));
}

double QwtLogTransform_bounded(const QwtLogTransform* self, double value) {
	return self->bounded(static_cast<double>(value));
}

QwtTransform* QwtLogTransform_copy(const QwtLogTransform* self) {
	return self->copy();
}

void QwtLogTransform_operatorAssign(QwtLogTransform* self, QwtLogTransform* param1) {
	self->operator=(*param1);
}

bool QwtLogTransform_override_virtual_transform(void* self, intptr_t slot) {
	MiqtVirtualQwtLogTransform* self_cast = dynamic_cast<MiqtVirtualQwtLogTransform*>( (QwtLogTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__transform = slot;
	return true;
}

double QwtLogTransform_virtualbase_transform(const void* self, double value) {
	return static_cast<const MiqtVirtualQwtLogTransform*>(self)->QwtLogTransform::transform(static_cast<double>(value));
}

bool QwtLogTransform_override_virtual_invTransform(void* self, intptr_t slot) {
	MiqtVirtualQwtLogTransform* self_cast = dynamic_cast<MiqtVirtualQwtLogTransform*>( (QwtLogTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__invTransform = slot;
	return true;
}

double QwtLogTransform_virtualbase_invTransform(const void* self, double value) {
	return static_cast<const MiqtVirtualQwtLogTransform*>(self)->QwtLogTransform::invTransform(static_cast<double>(value));
}

bool QwtLogTransform_override_virtual_bounded(void* self, intptr_t slot) {
	MiqtVirtualQwtLogTransform* self_cast = dynamic_cast<MiqtVirtualQwtLogTransform*>( (QwtLogTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bounded = slot;
	return true;
}

double QwtLogTransform_virtualbase_bounded(const void* self, double value) {
	return static_cast<const MiqtVirtualQwtLogTransform*>(self)->QwtLogTransform::bounded(static_cast<double>(value));
}

bool QwtLogTransform_override_virtual_copy(void* self, intptr_t slot) {
	MiqtVirtualQwtLogTransform* self_cast = dynamic_cast<MiqtVirtualQwtLogTransform*>( (QwtLogTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__copy = slot;
	return true;
}

QwtTransform* QwtLogTransform_virtualbase_copy(const void* self) {
	return static_cast<const MiqtVirtualQwtLogTransform*>(self)->QwtLogTransform::copy();
}

void QwtLogTransform_delete(QwtLogTransform* self) {
	delete self;
}

class MiqtVirtualQwtPowerTransform final : public QwtPowerTransform {
public:

	MiqtVirtualQwtPowerTransform(double exponent): QwtPowerTransform(exponent) {}
	MiqtVirtualQwtPowerTransform(const QwtPowerTransform& param1): QwtPowerTransform(param1) {}

	virtual ~MiqtVirtualQwtPowerTransform() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__transform = 0;

	// Subclass to allow providing a Go implementation
	virtual double transform(double value) const override {
		if (handle__transform == 0) {
			return QwtPowerTransform::transform(value);
		}

		double sigval1 = value;
		double callback_return_value = miqt_exec_callback_QwtPowerTransform_transform(this, handle__transform, sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtPowerTransform_virtualbase_transform(const void* self, double value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__invTransform = 0;

	// Subclass to allow providing a Go implementation
	virtual double invTransform(double value) const override {
		if (handle__invTransform == 0) {
			return QwtPowerTransform::invTransform(value);
		}

		double sigval1 = value;
		double callback_return_value = miqt_exec_callback_QwtPowerTransform_invTransform(this, handle__invTransform, sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtPowerTransform_virtualbase_invTransform(const void* self, double value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__copy = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtTransform* copy() const override {
		if (handle__copy == 0) {
			return QwtPowerTransform::copy();
		}

		QwtTransform* callback_return_value = miqt_exec_callback_QwtPowerTransform_copy(this, handle__copy);
		return callback_return_value;
	}

	friend QwtTransform* QwtPowerTransform_virtualbase_copy(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bounded = 0;

	// Subclass to allow providing a Go implementation
	virtual double bounded(double value) const override {
		if (handle__bounded == 0) {
			return QwtPowerTransform::bounded(value);
		}

		double sigval1 = value;
		double callback_return_value = miqt_exec_callback_QwtPowerTransform_bounded(this, handle__bounded, sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtPowerTransform_virtualbase_bounded(const void* self, double value);

};

QwtPowerTransform* QwtPowerTransform_new(double exponent) {
	return new (std::nothrow) MiqtVirtualQwtPowerTransform(static_cast<double>(exponent));
}

QwtPowerTransform* QwtPowerTransform_new2(QwtPowerTransform* param1) {
	return new (std::nothrow) MiqtVirtualQwtPowerTransform(*param1);
}

void QwtPowerTransform_virtbase(QwtPowerTransform* src, QwtTransform** outptr_QwtTransform) {
	*outptr_QwtTransform = static_cast<QwtTransform*>(src);
}

double QwtPowerTransform_transform(const QwtPowerTransform* self, double value) {
	return self->transform(static_cast<double>(value));
}

double QwtPowerTransform_invTransform(const QwtPowerTransform* self, double value) {
	return self->invTransform(static_cast<double>(value));
}

QwtTransform* QwtPowerTransform_copy(const QwtPowerTransform* self) {
	return self->copy();
}

bool QwtPowerTransform_override_virtual_transform(void* self, intptr_t slot) {
	MiqtVirtualQwtPowerTransform* self_cast = dynamic_cast<MiqtVirtualQwtPowerTransform*>( (QwtPowerTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__transform = slot;
	return true;
}

double QwtPowerTransform_virtualbase_transform(const void* self, double value) {
	return static_cast<const MiqtVirtualQwtPowerTransform*>(self)->QwtPowerTransform::transform(static_cast<double>(value));
}

bool QwtPowerTransform_override_virtual_invTransform(void* self, intptr_t slot) {
	MiqtVirtualQwtPowerTransform* self_cast = dynamic_cast<MiqtVirtualQwtPowerTransform*>( (QwtPowerTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__invTransform = slot;
	return true;
}

double QwtPowerTransform_virtualbase_invTransform(const void* self, double value) {
	return static_cast<const MiqtVirtualQwtPowerTransform*>(self)->QwtPowerTransform::invTransform(static_cast<double>(value));
}

bool QwtPowerTransform_override_virtual_copy(void* self, intptr_t slot) {
	MiqtVirtualQwtPowerTransform* self_cast = dynamic_cast<MiqtVirtualQwtPowerTransform*>( (QwtPowerTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__copy = slot;
	return true;
}

QwtTransform* QwtPowerTransform_virtualbase_copy(const void* self) {
	return static_cast<const MiqtVirtualQwtPowerTransform*>(self)->QwtPowerTransform::copy();
}

bool QwtPowerTransform_override_virtual_bounded(void* self, intptr_t slot) {
	MiqtVirtualQwtPowerTransform* self_cast = dynamic_cast<MiqtVirtualQwtPowerTransform*>( (QwtPowerTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bounded = slot;
	return true;
}

double QwtPowerTransform_virtualbase_bounded(const void* self, double value) {
	return static_cast<const MiqtVirtualQwtPowerTransform*>(self)->QwtPowerTransform::bounded(static_cast<double>(value));
}

void QwtPowerTransform_delete(QwtPowerTransform* self) {
	delete self;
}

