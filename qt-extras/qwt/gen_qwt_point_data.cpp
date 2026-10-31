#include <QPointF>
#include <QRectF>
#include <QVector>
#include <qwt_point_data.h>
#include "gen_qwt_point_data.h"

#ifdef __cplusplus
extern "C" {
#endif

struct miqt_qrectf miqt_exec_callback_QwtPointArrayData_boundingRect(const QwtPointArrayData*, intptr_t);
size_t miqt_exec_callback_QwtPointArrayData_size(const QwtPointArrayData*, intptr_t);
struct miqt_qpointf miqt_exec_callback_QwtPointArrayData_sample(const QwtPointArrayData*, intptr_t, size_t);
struct miqt_qrectf miqt_exec_callback_QwtCPointerData_boundingRect(const QwtCPointerData*, intptr_t);
size_t miqt_exec_callback_QwtCPointerData_size(const QwtCPointerData*, intptr_t);
struct miqt_qpointf miqt_exec_callback_QwtCPointerData_sample(const QwtCPointerData*, intptr_t, size_t);
size_t miqt_exec_callback_QwtSyntheticPointData_size(const QwtSyntheticPointData*, intptr_t);
struct miqt_qrectf miqt_exec_callback_QwtSyntheticPointData_boundingRect(const QwtSyntheticPointData*, intptr_t);
struct miqt_qpointf miqt_exec_callback_QwtSyntheticPointData_sample(const QwtSyntheticPointData*, intptr_t, size_t);
double miqt_exec_callback_QwtSyntheticPointData_y(const QwtSyntheticPointData*, intptr_t, double);
double miqt_exec_callback_QwtSyntheticPointData_x(const QwtSyntheticPointData*, intptr_t, unsigned int);
void miqt_exec_callback_QwtSyntheticPointData_setRectOfInterest(QwtSyntheticPointData*, intptr_t, struct miqt_qrectf);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtPointArrayData final : public QwtPointArrayData {
public:

	MiqtVirtualQwtPointArrayData(const QVector<double>& x, const QVector<double>& y): QwtPointArrayData(x, y) {}
	MiqtVirtualQwtPointArrayData(const double* x, const double* y, size_t size): QwtPointArrayData(x, y, size) {}
	MiqtVirtualQwtPointArrayData(const QwtPointArrayData& param1): QwtPointArrayData(param1) {}

	virtual ~MiqtVirtualQwtPointArrayData() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QwtPointArrayData::boundingRect();
		}

		struct miqt_qrectf callback_return_value = miqt_exec_callback_QwtPointArrayData_boundingRect(this, handle__boundingRect);
		return miqt_from_cabi<QRectF>(callback_return_value);
	}

	friend struct miqt_qrectf QwtPointArrayData_virtualbase_boundingRect(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__size = 0;

	// Subclass to allow providing a Go implementation
	virtual size_t size() const override {
		if (handle__size == 0) {
			return QwtPointArrayData::size();
		}

		size_t callback_return_value = miqt_exec_callback_QwtPointArrayData_size(this, handle__size);
		return static_cast<size_t>(callback_return_value);
	}

	friend size_t QwtPointArrayData_virtualbase_size(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sample = 0;

	// Subclass to allow providing a Go implementation
	virtual QPointF sample(size_t index) const override {
		if (handle__sample == 0) {
			return QwtPointArrayData::sample(index);
		}

		size_t sigval1 = index;
		struct miqt_qpointf callback_return_value = miqt_exec_callback_QwtPointArrayData_sample(this, handle__sample, sigval1);
		return miqt_from_cabi<QPointF>(callback_return_value);
	}

	friend struct miqt_qpointf QwtPointArrayData_virtualbase_sample(const void* self, size_t index);

};

QwtPointArrayData* QwtPointArrayData_new(struct miqt_array /* of double */  x, struct miqt_array /* of double */  y) {
	QVector<double> x_QList;
	x_QList.reserve(x.len);
	double* x_arr = static_cast<double*>(x.data);
	for(size_t i = 0; i < x.len; ++i) {
		x_QList.push_back(static_cast<double>(x_arr[i]));
	}
	QVector<double> y_QList;
	y_QList.reserve(y.len);
	double* y_arr = static_cast<double*>(y.data);
	for(size_t i = 0; i < y.len; ++i) {
		y_QList.push_back(static_cast<double>(y_arr[i]));
	}
	return new (std::nothrow) MiqtVirtualQwtPointArrayData(x_QList, y_QList);
}

QwtPointArrayData* QwtPointArrayData_new2(const double* x, const double* y, size_t size) {
	return new (std::nothrow) MiqtVirtualQwtPointArrayData(static_cast<const double*>(x), static_cast<const double*>(y), static_cast<size_t>(size));
}

QwtPointArrayData* QwtPointArrayData_new3(QwtPointArrayData* param1) {
	return new (std::nothrow) MiqtVirtualQwtPointArrayData(*param1);
}

struct miqt_qrectf QwtPointArrayData_boundingRect(const QwtPointArrayData* self) {
	return miqt_to_cabi<struct miqt_qrectf>(self->boundingRect());
}

size_t QwtPointArrayData_size(const QwtPointArrayData* self) {
	return self->size();
}

struct miqt_qpointf QwtPointArrayData_sample(const QwtPointArrayData* self, size_t index) {
	return miqt_to_cabi<struct miqt_qpointf>(self->sample(static_cast<size_t>(index)));
}

struct miqt_array /* of double */  QwtPointArrayData_xData(const QwtPointArrayData* self) {
	const QVector<double>& _ret = self->xData();
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

struct miqt_array /* of double */  QwtPointArrayData_yData(const QwtPointArrayData* self) {
	const QVector<double>& _ret = self->yData();
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

bool QwtPointArrayData_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQwtPointArrayData* self_cast = dynamic_cast<MiqtVirtualQwtPointArrayData*>( (QwtPointArrayData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__boundingRect = slot;
	return true;
}

struct miqt_qrectf QwtPointArrayData_virtualbase_boundingRect(const void* self) {
	return miqt_to_cabi<struct miqt_qrectf>(static_cast<const MiqtVirtualQwtPointArrayData*>(self)->QwtPointArrayData::boundingRect());
}

bool QwtPointArrayData_override_virtual_size(void* self, intptr_t slot) {
	MiqtVirtualQwtPointArrayData* self_cast = dynamic_cast<MiqtVirtualQwtPointArrayData*>( (QwtPointArrayData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__size = slot;
	return true;
}

size_t QwtPointArrayData_virtualbase_size(const void* self) {
	return static_cast<const MiqtVirtualQwtPointArrayData*>(self)->QwtPointArrayData::size();
}

bool QwtPointArrayData_override_virtual_sample(void* self, intptr_t slot) {
	MiqtVirtualQwtPointArrayData* self_cast = dynamic_cast<MiqtVirtualQwtPointArrayData*>( (QwtPointArrayData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sample = slot;
	return true;
}

struct miqt_qpointf QwtPointArrayData_virtualbase_sample(const void* self, size_t index) {
	return miqt_to_cabi<struct miqt_qpointf>(static_cast<const MiqtVirtualQwtPointArrayData*>(self)->QwtPointArrayData::sample(static_cast<size_t>(index)));
}

void QwtPointArrayData_delete(QwtPointArrayData* self) {
	delete self;
}

class MiqtVirtualQwtCPointerData final : public QwtCPointerData {
public:

	MiqtVirtualQwtCPointerData(const double* x, const double* y, size_t size): QwtCPointerData(x, y, size) {}
	MiqtVirtualQwtCPointerData(const QwtCPointerData& param1): QwtCPointerData(param1) {}

	virtual ~MiqtVirtualQwtCPointerData() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QwtCPointerData::boundingRect();
		}

		struct miqt_qrectf callback_return_value = miqt_exec_callback_QwtCPointerData_boundingRect(this, handle__boundingRect);
		return miqt_from_cabi<QRectF>(callback_return_value);
	}

	friend struct miqt_qrectf QwtCPointerData_virtualbase_boundingRect(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__size = 0;

	// Subclass to allow providing a Go implementation
	virtual size_t size() const override {
		if (handle__size == 0) {
			return QwtCPointerData::size();
		}

		size_t callback_return_value = miqt_exec_callback_QwtCPointerData_size(this, handle__size);
		return static_cast<size_t>(callback_return_value);
	}

	friend size_t QwtCPointerData_virtualbase_size(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sample = 0;

	// Subclass to allow providing a Go implementation
	virtual QPointF sample(size_t index) const override {
		if (handle__sample == 0) {
			return QwtCPointerData::sample(index);
		}

		size_t sigval1 = index;
		struct miqt_qpointf callback_return_value = miqt_exec_callback_QwtCPointerData_sample(this, handle__sample, sigval1);
		return miqt_from_cabi<QPointF>(callback_return_value);
	}

	friend struct miqt_qpointf QwtCPointerData_virtualbase_sample(const void* self, size_t index);

};

QwtCPointerData* QwtCPointerData_new(const double* x, const double* y, size_t size) {
	return new (std::nothrow) MiqtVirtualQwtCPointerData(static_cast<const double*>(x), static_cast<const double*>(y), static_cast<size_t>(size));
}

QwtCPointerData* QwtCPointerData_new2(QwtCPointerData* param1) {
	return new (std::nothrow) MiqtVirtualQwtCPointerData(*param1);
}

struct miqt_qrectf QwtCPointerData_boundingRect(const QwtCPointerData* self) {
	return miqt_to_cabi<struct miqt_qrectf>(self->boundingRect());
}

size_t QwtCPointerData_size(const QwtCPointerData* self) {
	return self->size();
}

struct miqt_qpointf QwtCPointerData_sample(const QwtCPointerData* self, size_t index) {
	return miqt_to_cabi<struct miqt_qpointf>(self->sample(static_cast<size_t>(index)));
}

const double* QwtCPointerData_xData(const QwtCPointerData* self) {
	return (const double*) self->xData();
}

const double* QwtCPointerData_yData(const QwtCPointerData* self) {
	return (const double*) self->yData();
}

bool QwtCPointerData_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQwtCPointerData* self_cast = dynamic_cast<MiqtVirtualQwtCPointerData*>( (QwtCPointerData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__boundingRect = slot;
	return true;
}

struct miqt_qrectf QwtCPointerData_virtualbase_boundingRect(const void* self) {
	return miqt_to_cabi<struct miqt_qrectf>(static_cast<const MiqtVirtualQwtCPointerData*>(self)->QwtCPointerData::boundingRect());
}

bool QwtCPointerData_override_virtual_size(void* self, intptr_t slot) {
	MiqtVirtualQwtCPointerData* self_cast = dynamic_cast<MiqtVirtualQwtCPointerData*>( (QwtCPointerData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__size = slot;
	return true;
}

size_t QwtCPointerData_virtualbase_size(const void* self) {
	return static_cast<const MiqtVirtualQwtCPointerData*>(self)->QwtCPointerData::size();
}

bool QwtCPointerData_override_virtual_sample(void* self, intptr_t slot) {
	MiqtVirtualQwtCPointerData* self_cast = dynamic_cast<MiqtVirtualQwtCPointerData*>( (QwtCPointerData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sample = slot;
	return true;
}

struct miqt_qpointf QwtCPointerData_virtualbase_sample(const void* self, size_t index) {
	return miqt_to_cabi<struct miqt_qpointf>(static_cast<const MiqtVirtualQwtCPointerData*>(self)->QwtCPointerData::sample(static_cast<size_t>(index)));
}

void QwtCPointerData_delete(QwtCPointerData* self) {
	delete self;
}

class MiqtVirtualQwtSyntheticPointData final : public QwtSyntheticPointData {
public:

	MiqtVirtualQwtSyntheticPointData(size_t size): QwtSyntheticPointData(size) {}
	MiqtVirtualQwtSyntheticPointData(const QwtSyntheticPointData& param1): QwtSyntheticPointData(param1) {}
	MiqtVirtualQwtSyntheticPointData(size_t size, const QwtInterval& param2): QwtSyntheticPointData(size, param2) {}

	virtual ~MiqtVirtualQwtSyntheticPointData() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__size = 0;

	// Subclass to allow providing a Go implementation
	virtual size_t size() const override {
		if (handle__size == 0) {
			return QwtSyntheticPointData::size();
		}

		size_t callback_return_value = miqt_exec_callback_QwtSyntheticPointData_size(this, handle__size);
		return static_cast<size_t>(callback_return_value);
	}

	friend size_t QwtSyntheticPointData_virtualbase_size(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QwtSyntheticPointData::boundingRect();
		}

		struct miqt_qrectf callback_return_value = miqt_exec_callback_QwtSyntheticPointData_boundingRect(this, handle__boundingRect);
		return miqt_from_cabi<QRectF>(callback_return_value);
	}

	friend struct miqt_qrectf QwtSyntheticPointData_virtualbase_boundingRect(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sample = 0;

	// Subclass to allow providing a Go implementation
	virtual QPointF sample(size_t index) const override {
		if (handle__sample == 0) {
			return QwtSyntheticPointData::sample(index);
		}

		size_t sigval1 = index;
		struct miqt_qpointf callback_return_value = miqt_exec_callback_QwtSyntheticPointData_sample(this, handle__sample, sigval1);
		return miqt_from_cabi<QPointF>(callback_return_value);
	}

	friend struct miqt_qpointf QwtSyntheticPointData_virtualbase_sample(const void* self, size_t index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__y = 0;

	// Subclass to allow providing a Go implementation
	virtual double y(double x) const override {
		if (handle__y == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		double sigval1 = x;
		double callback_return_value = miqt_exec_callback_QwtSyntheticPointData_y(this, handle__y, sigval1);
		return static_cast<double>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__x = 0;

	// Subclass to allow providing a Go implementation
	virtual double x(uint index) const override {
		if (handle__x == 0) {
			return QwtSyntheticPointData::x(index);
		}

		uint index_ret = index;
		unsigned int sigval1 = static_cast<unsigned int>(index_ret);
		double callback_return_value = miqt_exec_callback_QwtSyntheticPointData_x(this, handle__x, sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtSyntheticPointData_virtualbase_x(const void* self, unsigned int index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setRectOfInterest = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRectOfInterest(const QRectF& rectOfInterest) override {
		if (handle__setRectOfInterest == 0) {
			QwtSyntheticPointData::setRectOfInterest(rectOfInterest);
			return;
		}

		struct miqt_qrectf sigval1 = miqt_to_cabi<struct miqt_qrectf>(rectOfInterest);
		miqt_exec_callback_QwtSyntheticPointData_setRectOfInterest(this, handle__setRectOfInterest, sigval1);

	}

	friend void QwtSyntheticPointData_virtualbase_setRectOfInterest(void* self, struct miqt_qrectf rectOfInterest);

};

QwtSyntheticPointData* QwtSyntheticPointData_new(size_t size) {
	return new (std::nothrow) MiqtVirtualQwtSyntheticPointData(static_cast<size_t>(size));
}

QwtSyntheticPointData* QwtSyntheticPointData_new2(QwtSyntheticPointData* param1) {
	return new (std::nothrow) MiqtVirtualQwtSyntheticPointData(*param1);
}

QwtSyntheticPointData* QwtSyntheticPointData_new3(size_t size, QwtInterval* param2) {
	return new (std::nothrow) MiqtVirtualQwtSyntheticPointData(static_cast<size_t>(size), *param2);
}

void QwtSyntheticPointData_setSize(QwtSyntheticPointData* self, size_t size) {
	self->setSize(static_cast<size_t>(size));
}

size_t QwtSyntheticPointData_size(const QwtSyntheticPointData* self) {
	return self->size();
}

void QwtSyntheticPointData_setInterval(QwtSyntheticPointData* self, QwtInterval* interval) {
	self->setInterval(*interval);
}

QwtInterval* QwtSyntheticPointData_interval(const QwtSyntheticPointData* self) {
	return new QwtInterval(self->interval());
}

struct miqt_qrectf QwtSyntheticPointData_boundingRect(const QwtSyntheticPointData* self) {
	return miqt_to_cabi<struct miqt_qrectf>(self->boundingRect());
}

struct miqt_qpointf QwtSyntheticPointData_sample(const QwtSyntheticPointData* self, size_t index) {
	return miqt_to_cabi<struct miqt_qpointf>(self->sample(static_cast<size_t>(index)));
}

double QwtSyntheticPointData_y(const QwtSyntheticPointData* self, double x) {
	return self->y(static_cast<double>(x));
}

double QwtSyntheticPointData_x(const QwtSyntheticPointData* self, unsigned int index) {
	return self->x(static_cast<uint>(index));
}

void QwtSyntheticPointData_setRectOfInterest(QwtSyntheticPointData* self, struct miqt_qrectf rectOfInterest) {
	self->setRectOfInterest(miqt_from_cabi<QRectF>(rectOfInterest));
}

struct miqt_qrectf QwtSyntheticPointData_rectOfInterest(const QwtSyntheticPointData* self) {
	return miqt_to_cabi<struct miqt_qrectf>(self->rectOfInterest());
}

bool QwtSyntheticPointData_override_virtual_size(void* self, intptr_t slot) {
	MiqtVirtualQwtSyntheticPointData* self_cast = dynamic_cast<MiqtVirtualQwtSyntheticPointData*>( (QwtSyntheticPointData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__size = slot;
	return true;
}

size_t QwtSyntheticPointData_virtualbase_size(const void* self) {
	return static_cast<const MiqtVirtualQwtSyntheticPointData*>(self)->QwtSyntheticPointData::size();
}

bool QwtSyntheticPointData_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQwtSyntheticPointData* self_cast = dynamic_cast<MiqtVirtualQwtSyntheticPointData*>( (QwtSyntheticPointData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__boundingRect = slot;
	return true;
}

struct miqt_qrectf QwtSyntheticPointData_virtualbase_boundingRect(const void* self) {
	return miqt_to_cabi<struct miqt_qrectf>(static_cast<const MiqtVirtualQwtSyntheticPointData*>(self)->QwtSyntheticPointData::boundingRect());
}

bool QwtSyntheticPointData_override_virtual_sample(void* self, intptr_t slot) {
	MiqtVirtualQwtSyntheticPointData* self_cast = dynamic_cast<MiqtVirtualQwtSyntheticPointData*>( (QwtSyntheticPointData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sample = slot;
	return true;
}

struct miqt_qpointf QwtSyntheticPointData_virtualbase_sample(const void* self, size_t index) {
	return miqt_to_cabi<struct miqt_qpointf>(static_cast<const MiqtVirtualQwtSyntheticPointData*>(self)->QwtSyntheticPointData::sample(static_cast<size_t>(index)));
}

bool QwtSyntheticPointData_override_virtual_y(void* self, intptr_t slot) {
	MiqtVirtualQwtSyntheticPointData* self_cast = dynamic_cast<MiqtVirtualQwtSyntheticPointData*>( (QwtSyntheticPointData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__y = slot;
	return true;
}

bool QwtSyntheticPointData_override_virtual_x(void* self, intptr_t slot) {
	MiqtVirtualQwtSyntheticPointData* self_cast = dynamic_cast<MiqtVirtualQwtSyntheticPointData*>( (QwtSyntheticPointData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__x = slot;
	return true;
}

double QwtSyntheticPointData_virtualbase_x(const void* self, unsigned int index) {
	return static_cast<const MiqtVirtualQwtSyntheticPointData*>(self)->QwtSyntheticPointData::x(static_cast<uint>(index));
}

bool QwtSyntheticPointData_override_virtual_setRectOfInterest(void* self, intptr_t slot) {
	MiqtVirtualQwtSyntheticPointData* self_cast = dynamic_cast<MiqtVirtualQwtSyntheticPointData*>( (QwtSyntheticPointData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setRectOfInterest = slot;
	return true;
}

void QwtSyntheticPointData_virtualbase_setRectOfInterest(void* self, struct miqt_qrectf rectOfInterest) {
	static_cast<MiqtVirtualQwtSyntheticPointData*>(self)->QwtSyntheticPointData::setRectOfInterest(miqt_from_cabi<QRectF>(rectOfInterest));
}

void QwtSyntheticPointData_delete(QwtSyntheticPointData* self) {
	delete self;
}

