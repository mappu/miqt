#include <QPointF>
#include <QRectF>
#include <QVector>
#include <qwt_series_data.h>
#include "gen_qwt_series_data.h"

#ifdef __cplusplus
extern "C" {
#endif

QRectF* miqt_exec_callback_QwtPointSeriesData_boundingRect(const QwtPointSeriesData*, intptr_t);
QRectF* miqt_exec_callback_QwtPoint3DSeriesData_boundingRect(const QwtPoint3DSeriesData*, intptr_t);
QRectF* miqt_exec_callback_QwtIntervalSeriesData_boundingRect(const QwtIntervalSeriesData*, intptr_t);
QRectF* miqt_exec_callback_QwtSetSeriesData_boundingRect(const QwtSetSeriesData*, intptr_t);
QRectF* miqt_exec_callback_QwtTradingChartData_boundingRect(const QwtTradingChartData*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtPointSeriesData final : public QwtPointSeriesData {
public:

	MiqtVirtualQwtPointSeriesData(): QwtPointSeriesData() {}
	MiqtVirtualQwtPointSeriesData(const QVector<QPointF>& param1): QwtPointSeriesData(param1) {}

	virtual ~MiqtVirtualQwtPointSeriesData() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QwtPointSeriesData::boundingRect();
		}

		QRectF* callback_return_value = miqt_exec_callback_QwtPointSeriesData_boundingRect(this, handle__boundingRect);
		return *callback_return_value;
	}

	friend QRectF* QwtPointSeriesData_virtualbase_boundingRect(const void* self);

};

QwtPointSeriesData* QwtPointSeriesData_new() {
	return new (std::nothrow) MiqtVirtualQwtPointSeriesData();
}

QwtPointSeriesData* QwtPointSeriesData_new2(struct miqt_array /* of QPointF* */  param1) {
	QVector<QPointF> param1_QList;
	param1_QList.reserve(param1.len);
	QPointF** param1_arr = static_cast<QPointF**>(param1.data);
	for(size_t i = 0; i < param1.len; ++i) {
		param1_QList.push_back(*(param1_arr[i]));
	}
	return new (std::nothrow) MiqtVirtualQwtPointSeriesData(param1_QList);
}

QRectF* QwtPointSeriesData_boundingRect(const QwtPointSeriesData* self) {
	return new QRectF(self->boundingRect());
}

bool QwtPointSeriesData_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQwtPointSeriesData* self_cast = dynamic_cast<MiqtVirtualQwtPointSeriesData*>( (QwtPointSeriesData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__boundingRect = slot;
	return true;
}

QRectF* QwtPointSeriesData_virtualbase_boundingRect(const void* self) {
	return new QRectF(static_cast<const MiqtVirtualQwtPointSeriesData*>(self)->QwtPointSeriesData::boundingRect());
}

void QwtPointSeriesData_delete(QwtPointSeriesData* self) {
	delete self;
}

class MiqtVirtualQwtPoint3DSeriesData final : public QwtPoint3DSeriesData {
public:

	MiqtVirtualQwtPoint3DSeriesData(): QwtPoint3DSeriesData() {}
	MiqtVirtualQwtPoint3DSeriesData(const QVector<QwtPoint3D>& param1): QwtPoint3DSeriesData(param1) {}

	virtual ~MiqtVirtualQwtPoint3DSeriesData() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QwtPoint3DSeriesData::boundingRect();
		}

		QRectF* callback_return_value = miqt_exec_callback_QwtPoint3DSeriesData_boundingRect(this, handle__boundingRect);
		return *callback_return_value;
	}

	friend QRectF* QwtPoint3DSeriesData_virtualbase_boundingRect(const void* self);

};

QwtPoint3DSeriesData* QwtPoint3DSeriesData_new() {
	return new (std::nothrow) MiqtVirtualQwtPoint3DSeriesData();
}

QwtPoint3DSeriesData* QwtPoint3DSeriesData_new2(struct miqt_array /* of QwtPoint3D* */  param1) {
	QVector<QwtPoint3D> param1_QList;
	param1_QList.reserve(param1.len);
	QwtPoint3D** param1_arr = static_cast<QwtPoint3D**>(param1.data);
	for(size_t i = 0; i < param1.len; ++i) {
		param1_QList.push_back(*(param1_arr[i]));
	}
	return new (std::nothrow) MiqtVirtualQwtPoint3DSeriesData(param1_QList);
}

QRectF* QwtPoint3DSeriesData_boundingRect(const QwtPoint3DSeriesData* self) {
	return new QRectF(self->boundingRect());
}

bool QwtPoint3DSeriesData_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQwtPoint3DSeriesData* self_cast = dynamic_cast<MiqtVirtualQwtPoint3DSeriesData*>( (QwtPoint3DSeriesData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__boundingRect = slot;
	return true;
}

QRectF* QwtPoint3DSeriesData_virtualbase_boundingRect(const void* self) {
	return new QRectF(static_cast<const MiqtVirtualQwtPoint3DSeriesData*>(self)->QwtPoint3DSeriesData::boundingRect());
}

void QwtPoint3DSeriesData_delete(QwtPoint3DSeriesData* self) {
	delete self;
}

class MiqtVirtualQwtIntervalSeriesData final : public QwtIntervalSeriesData {
public:

	MiqtVirtualQwtIntervalSeriesData(): QwtIntervalSeriesData() {}
	MiqtVirtualQwtIntervalSeriesData(const QVector<QwtIntervalSample>& param1): QwtIntervalSeriesData(param1) {}

	virtual ~MiqtVirtualQwtIntervalSeriesData() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QwtIntervalSeriesData::boundingRect();
		}

		QRectF* callback_return_value = miqt_exec_callback_QwtIntervalSeriesData_boundingRect(this, handle__boundingRect);
		return *callback_return_value;
	}

	friend QRectF* QwtIntervalSeriesData_virtualbase_boundingRect(const void* self);

};

QwtIntervalSeriesData* QwtIntervalSeriesData_new() {
	return new (std::nothrow) MiqtVirtualQwtIntervalSeriesData();
}

QwtIntervalSeriesData* QwtIntervalSeriesData_new2(struct miqt_array /* of QwtIntervalSample* */  param1) {
	QVector<QwtIntervalSample> param1_QList;
	param1_QList.reserve(param1.len);
	QwtIntervalSample** param1_arr = static_cast<QwtIntervalSample**>(param1.data);
	for(size_t i = 0; i < param1.len; ++i) {
		param1_QList.push_back(*(param1_arr[i]));
	}
	return new (std::nothrow) MiqtVirtualQwtIntervalSeriesData(param1_QList);
}

QRectF* QwtIntervalSeriesData_boundingRect(const QwtIntervalSeriesData* self) {
	return new QRectF(self->boundingRect());
}

bool QwtIntervalSeriesData_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQwtIntervalSeriesData* self_cast = dynamic_cast<MiqtVirtualQwtIntervalSeriesData*>( (QwtIntervalSeriesData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__boundingRect = slot;
	return true;
}

QRectF* QwtIntervalSeriesData_virtualbase_boundingRect(const void* self) {
	return new QRectF(static_cast<const MiqtVirtualQwtIntervalSeriesData*>(self)->QwtIntervalSeriesData::boundingRect());
}

void QwtIntervalSeriesData_delete(QwtIntervalSeriesData* self) {
	delete self;
}

class MiqtVirtualQwtSetSeriesData final : public QwtSetSeriesData {
public:

	MiqtVirtualQwtSetSeriesData(): QwtSetSeriesData() {}
	MiqtVirtualQwtSetSeriesData(const QVector<QwtSetSample>& param1): QwtSetSeriesData(param1) {}

	virtual ~MiqtVirtualQwtSetSeriesData() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QwtSetSeriesData::boundingRect();
		}

		QRectF* callback_return_value = miqt_exec_callback_QwtSetSeriesData_boundingRect(this, handle__boundingRect);
		return *callback_return_value;
	}

	friend QRectF* QwtSetSeriesData_virtualbase_boundingRect(const void* self);

};

QwtSetSeriesData* QwtSetSeriesData_new() {
	return new (std::nothrow) MiqtVirtualQwtSetSeriesData();
}

QwtSetSeriesData* QwtSetSeriesData_new2(struct miqt_array /* of QwtSetSample* */  param1) {
	QVector<QwtSetSample> param1_QList;
	param1_QList.reserve(param1.len);
	QwtSetSample** param1_arr = static_cast<QwtSetSample**>(param1.data);
	for(size_t i = 0; i < param1.len; ++i) {
		param1_QList.push_back(*(param1_arr[i]));
	}
	return new (std::nothrow) MiqtVirtualQwtSetSeriesData(param1_QList);
}

QRectF* QwtSetSeriesData_boundingRect(const QwtSetSeriesData* self) {
	return new QRectF(self->boundingRect());
}

bool QwtSetSeriesData_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQwtSetSeriesData* self_cast = dynamic_cast<MiqtVirtualQwtSetSeriesData*>( (QwtSetSeriesData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__boundingRect = slot;
	return true;
}

QRectF* QwtSetSeriesData_virtualbase_boundingRect(const void* self) {
	return new QRectF(static_cast<const MiqtVirtualQwtSetSeriesData*>(self)->QwtSetSeriesData::boundingRect());
}

void QwtSetSeriesData_delete(QwtSetSeriesData* self) {
	delete self;
}

class MiqtVirtualQwtTradingChartData final : public QwtTradingChartData {
public:

	MiqtVirtualQwtTradingChartData(): QwtTradingChartData() {}
	MiqtVirtualQwtTradingChartData(const QVector<QwtOHLCSample>& param1): QwtTradingChartData(param1) {}

	virtual ~MiqtVirtualQwtTradingChartData() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QwtTradingChartData::boundingRect();
		}

		QRectF* callback_return_value = miqt_exec_callback_QwtTradingChartData_boundingRect(this, handle__boundingRect);
		return *callback_return_value;
	}

	friend QRectF* QwtTradingChartData_virtualbase_boundingRect(const void* self);

};

QwtTradingChartData* QwtTradingChartData_new() {
	return new (std::nothrow) MiqtVirtualQwtTradingChartData();
}

QwtTradingChartData* QwtTradingChartData_new2(struct miqt_array /* of QwtOHLCSample* */  param1) {
	QVector<QwtOHLCSample> param1_QList;
	param1_QList.reserve(param1.len);
	QwtOHLCSample** param1_arr = static_cast<QwtOHLCSample**>(param1.data);
	for(size_t i = 0; i < param1.len; ++i) {
		param1_QList.push_back(*(param1_arr[i]));
	}
	return new (std::nothrow) MiqtVirtualQwtTradingChartData(param1_QList);
}

QRectF* QwtTradingChartData_boundingRect(const QwtTradingChartData* self) {
	return new QRectF(self->boundingRect());
}

bool QwtTradingChartData_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQwtTradingChartData* self_cast = dynamic_cast<MiqtVirtualQwtTradingChartData*>( (QwtTradingChartData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__boundingRect = slot;
	return true;
}

QRectF* QwtTradingChartData_virtualbase_boundingRect(const void* self) {
	return new QRectF(static_cast<const MiqtVirtualQwtTradingChartData*>(self)->QwtTradingChartData::boundingRect());
}

void QwtTradingChartData_delete(QwtTradingChartData* self) {
	delete self;
}

