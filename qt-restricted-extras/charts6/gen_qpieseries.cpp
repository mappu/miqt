#include <QAbstractSeries>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPieSeries>
#include <QPieSlice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qpieseries.h>
#include "gen_qpieseries.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QPieSeries_added(intptr_t, struct miqt_array /* of QPieSlice* */ );
void miqt_exec_callback_QPieSeries_removed(intptr_t, struct miqt_array /* of QPieSlice* */ );
void miqt_exec_callback_QPieSeries_clicked(intptr_t, QPieSlice*);
void miqt_exec_callback_QPieSeries_hovered(intptr_t, QPieSlice*, bool);
void miqt_exec_callback_QPieSeries_pressed(intptr_t, QPieSlice*);
void miqt_exec_callback_QPieSeries_released(intptr_t, QPieSlice*);
void miqt_exec_callback_QPieSeries_doubleClicked(intptr_t, QPieSlice*);
void miqt_exec_callback_QPieSeries_countChanged(intptr_t);
void miqt_exec_callback_QPieSeries_sumChanged(intptr_t);
int miqt_exec_callback_QPieSeries_type(const QPieSeries*, intptr_t);
bool miqt_exec_callback_QPieSeries_event(QPieSeries*, intptr_t, QEvent*);
bool miqt_exec_callback_QPieSeries_eventFilter(QPieSeries*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPieSeries_timerEvent(QPieSeries*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPieSeries_childEvent(QPieSeries*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPieSeries_customEvent(QPieSeries*, intptr_t, QEvent*);
void miqt_exec_callback_QPieSeries_connectNotify(QPieSeries*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPieSeries_disconnectNotify(QPieSeries*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPieSeries final : public QPieSeries {
public:

	MiqtVirtualQPieSeries(): QPieSeries() {};
	MiqtVirtualQPieSeries(QObject* parent): QPieSeries(parent) {};

	virtual ~MiqtVirtualQPieSeries() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSeries::SeriesType type() const override {
		if (handle__type == 0) {
			return QPieSeries::type();
		}
		

		int callback_return_value = miqt_exec_callback_QPieSeries_type(this, handle__type);

		return static_cast<QAbstractSeries::SeriesType>(callback_return_value);
	}

	friend int QPieSeries_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPieSeries::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPieSeries_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QPieSeries_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QPieSeries::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPieSeries_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QPieSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPieSeries::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPieSeries_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QPieSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPieSeries::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPieSeries_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QPieSeries_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPieSeries::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPieSeries_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QPieSeries_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPieSeries::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPieSeries_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QPieSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPieSeries::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPieSeries_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QPieSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QPieSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPieSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPieSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPieSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPieSeries* QPieSeries_new() {
	return new MiqtVirtualQPieSeries();
}

QPieSeries* QPieSeries_new2(QObject* parent) {
	return new MiqtVirtualQPieSeries(parent);
}

void QPieSeries_virtbase(QPieSeries* src, QAbstractSeries** outptr_QAbstractSeries) {
	*outptr_QAbstractSeries = static_cast<QAbstractSeries*>(src);
}

QMetaObject* QPieSeries_metaObject(const QPieSeries* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPieSeries_metacast(QPieSeries* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPieSeries_tr(const char* s) {
	QString _ret = QPieSeries::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPieSeries_type(const QPieSeries* self) {
	QAbstractSeries::SeriesType _ret = self->type();
	return static_cast<int>(_ret);
}

bool QPieSeries_append(QPieSeries* self, QPieSlice* slice) {
	return self->append(slice);
}

bool QPieSeries_appendWithSlices(QPieSeries* self, struct miqt_array /* of QPieSlice* */  slices) {
	QList<QPieSlice *> slices_QList;
	slices_QList.reserve(slices.len);
	QPieSlice** slices_arr = static_cast<QPieSlice**>(slices.data);
	for(size_t i = 0; i < slices.len; ++i) {
		slices_QList.push_back(slices_arr[i]);
	}
	return self->append(slices_QList);
}

QPieSeries* QPieSeries_operatorShiftLeft(QPieSeries* self, QPieSlice* slice) {
	QPieSeries& _ret = self->operator<<(slice);
	// Cast returned reference into pointer
	return &_ret;
}

QPieSlice* QPieSeries_append2(QPieSeries* self, struct miqt_string label, double value) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return self->append(label_QString, static_cast<qreal>(value));
}

bool QPieSeries_insert(QPieSeries* self, int index, QPieSlice* slice) {
	return self->insert(static_cast<int>(index), slice);
}

bool QPieSeries_remove(QPieSeries* self, QPieSlice* slice) {
	return self->remove(slice);
}

bool QPieSeries_take(QPieSeries* self, QPieSlice* slice) {
	return self->take(slice);
}

void QPieSeries_clear(QPieSeries* self) {
	self->clear();
}

struct miqt_array /* of QPieSlice* */  QPieSeries_slices(const QPieSeries* self) {
	QList<QPieSlice *> _ret = self->slices();
	// Convert QList<> from C++ memory to manually-managed C memory
	QPieSlice** _arr = static_cast<QPieSlice**>(malloc(sizeof(QPieSlice*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QPieSeries_count(const QPieSeries* self) {
	return self->count();
}

bool QPieSeries_isEmpty(const QPieSeries* self) {
	return self->isEmpty();
}

double QPieSeries_sum(const QPieSeries* self) {
	qreal _ret = self->sum();
	return static_cast<double>(_ret);
}

void QPieSeries_setHoleSize(QPieSeries* self, double holeSize) {
	self->setHoleSize(static_cast<qreal>(holeSize));
}

double QPieSeries_holeSize(const QPieSeries* self) {
	qreal _ret = self->holeSize();
	return static_cast<double>(_ret);
}

void QPieSeries_setHorizontalPosition(QPieSeries* self, double relativePosition) {
	self->setHorizontalPosition(static_cast<qreal>(relativePosition));
}

double QPieSeries_horizontalPosition(const QPieSeries* self) {
	qreal _ret = self->horizontalPosition();
	return static_cast<double>(_ret);
}

void QPieSeries_setVerticalPosition(QPieSeries* self, double relativePosition) {
	self->setVerticalPosition(static_cast<qreal>(relativePosition));
}

double QPieSeries_verticalPosition(const QPieSeries* self) {
	qreal _ret = self->verticalPosition();
	return static_cast<double>(_ret);
}

void QPieSeries_setPieSize(QPieSeries* self, double relativeSize) {
	self->setPieSize(static_cast<qreal>(relativeSize));
}

double QPieSeries_pieSize(const QPieSeries* self) {
	qreal _ret = self->pieSize();
	return static_cast<double>(_ret);
}

void QPieSeries_setPieStartAngle(QPieSeries* self, double startAngle) {
	self->setPieStartAngle(static_cast<qreal>(startAngle));
}

double QPieSeries_pieStartAngle(const QPieSeries* self) {
	qreal _ret = self->pieStartAngle();
	return static_cast<double>(_ret);
}

void QPieSeries_setPieEndAngle(QPieSeries* self, double endAngle) {
	self->setPieEndAngle(static_cast<qreal>(endAngle));
}

double QPieSeries_pieEndAngle(const QPieSeries* self) {
	qreal _ret = self->pieEndAngle();
	return static_cast<double>(_ret);
}

void QPieSeries_setLabelsVisible(QPieSeries* self) {
	self->setLabelsVisible();
}

void QPieSeries_setLabelsPosition(QPieSeries* self, int position) {
	self->setLabelsPosition(static_cast<QPieSlice::LabelPosition>(position));
}

void QPieSeries_added(QPieSeries* self, struct miqt_array /* of QPieSlice* */  slices) {
	QList<QPieSlice *> slices_QList;
	slices_QList.reserve(slices.len);
	QPieSlice** slices_arr = static_cast<QPieSlice**>(slices.data);
	for(size_t i = 0; i < slices.len; ++i) {
		slices_QList.push_back(slices_arr[i]);
	}
	self->added(slices_QList);
}

void QPieSeries_connect_added(QPieSeries* self, intptr_t slot) {
	MiqtVirtualQPieSeries::connect(self, static_cast<void (QPieSeries::*)(const QList<QPieSlice *>&)>(&QPieSeries::added), self, [=](const QList<QPieSlice *>& slices) {
		const QList<QPieSlice *>& slices_ret = slices;
		// Convert QList<> from C++ memory to manually-managed C memory
		QPieSlice** slices_arr = static_cast<QPieSlice**>(malloc(sizeof(QPieSlice*) * slices_ret.length()));
		for (size_t i = 0, e = slices_ret.length(); i < e; ++i) {
			slices_arr[i] = slices_ret[i];
		}
		struct miqt_array slices_out;
		slices_out.len = slices_ret.length();
		slices_out.data = static_cast<void*>(slices_arr);
		struct miqt_array /* of QPieSlice* */  sigval1 = slices_out;
		miqt_exec_callback_QPieSeries_added(slot, sigval1);
	});
}

void QPieSeries_removed(QPieSeries* self, struct miqt_array /* of QPieSlice* */  slices) {
	QList<QPieSlice *> slices_QList;
	slices_QList.reserve(slices.len);
	QPieSlice** slices_arr = static_cast<QPieSlice**>(slices.data);
	for(size_t i = 0; i < slices.len; ++i) {
		slices_QList.push_back(slices_arr[i]);
	}
	self->removed(slices_QList);
}

void QPieSeries_connect_removed(QPieSeries* self, intptr_t slot) {
	MiqtVirtualQPieSeries::connect(self, static_cast<void (QPieSeries::*)(const QList<QPieSlice *>&)>(&QPieSeries::removed), self, [=](const QList<QPieSlice *>& slices) {
		const QList<QPieSlice *>& slices_ret = slices;
		// Convert QList<> from C++ memory to manually-managed C memory
		QPieSlice** slices_arr = static_cast<QPieSlice**>(malloc(sizeof(QPieSlice*) * slices_ret.length()));
		for (size_t i = 0, e = slices_ret.length(); i < e; ++i) {
			slices_arr[i] = slices_ret[i];
		}
		struct miqt_array slices_out;
		slices_out.len = slices_ret.length();
		slices_out.data = static_cast<void*>(slices_arr);
		struct miqt_array /* of QPieSlice* */  sigval1 = slices_out;
		miqt_exec_callback_QPieSeries_removed(slot, sigval1);
	});
}

void QPieSeries_clicked(QPieSeries* self, QPieSlice* slice) {
	self->clicked(slice);
}

void QPieSeries_connect_clicked(QPieSeries* self, intptr_t slot) {
	MiqtVirtualQPieSeries::connect(self, static_cast<void (QPieSeries::*)(QPieSlice*)>(&QPieSeries::clicked), self, [=](QPieSlice* slice) {
		QPieSlice* sigval1 = slice;
		miqt_exec_callback_QPieSeries_clicked(slot, sigval1);
	});
}

void QPieSeries_hovered(QPieSeries* self, QPieSlice* slice, bool state) {
	self->hovered(slice, state);
}

void QPieSeries_connect_hovered(QPieSeries* self, intptr_t slot) {
	MiqtVirtualQPieSeries::connect(self, static_cast<void (QPieSeries::*)(QPieSlice*, bool)>(&QPieSeries::hovered), self, [=](QPieSlice* slice, bool state) {
		QPieSlice* sigval1 = slice;
		bool sigval2 = state;
		miqt_exec_callback_QPieSeries_hovered(slot, sigval1, sigval2);
	});
}

void QPieSeries_pressed(QPieSeries* self, QPieSlice* slice) {
	self->pressed(slice);
}

void QPieSeries_connect_pressed(QPieSeries* self, intptr_t slot) {
	MiqtVirtualQPieSeries::connect(self, static_cast<void (QPieSeries::*)(QPieSlice*)>(&QPieSeries::pressed), self, [=](QPieSlice* slice) {
		QPieSlice* sigval1 = slice;
		miqt_exec_callback_QPieSeries_pressed(slot, sigval1);
	});
}

void QPieSeries_released(QPieSeries* self, QPieSlice* slice) {
	self->released(slice);
}

void QPieSeries_connect_released(QPieSeries* self, intptr_t slot) {
	MiqtVirtualQPieSeries::connect(self, static_cast<void (QPieSeries::*)(QPieSlice*)>(&QPieSeries::released), self, [=](QPieSlice* slice) {
		QPieSlice* sigval1 = slice;
		miqt_exec_callback_QPieSeries_released(slot, sigval1);
	});
}

void QPieSeries_doubleClicked(QPieSeries* self, QPieSlice* slice) {
	self->doubleClicked(slice);
}

void QPieSeries_connect_doubleClicked(QPieSeries* self, intptr_t slot) {
	MiqtVirtualQPieSeries::connect(self, static_cast<void (QPieSeries::*)(QPieSlice*)>(&QPieSeries::doubleClicked), self, [=](QPieSlice* slice) {
		QPieSlice* sigval1 = slice;
		miqt_exec_callback_QPieSeries_doubleClicked(slot, sigval1);
	});
}

void QPieSeries_countChanged(QPieSeries* self) {
	self->countChanged();
}

void QPieSeries_connect_countChanged(QPieSeries* self, intptr_t slot) {
	MiqtVirtualQPieSeries::connect(self, static_cast<void (QPieSeries::*)()>(&QPieSeries::countChanged), self, [=]() {
		miqt_exec_callback_QPieSeries_countChanged(slot);
	});
}

void QPieSeries_sumChanged(QPieSeries* self) {
	self->sumChanged();
}

void QPieSeries_connect_sumChanged(QPieSeries* self, intptr_t slot) {
	MiqtVirtualQPieSeries::connect(self, static_cast<void (QPieSeries::*)()>(&QPieSeries::sumChanged), self, [=]() {
		miqt_exec_callback_QPieSeries_sumChanged(slot);
	});
}

struct miqt_string QPieSeries_tr2(const char* s, const char* c) {
	QString _ret = QPieSeries::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPieSeries_tr3(const char* s, const char* c, int n) {
	QString _ret = QPieSeries::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPieSeries_setLabelsVisibleWithVisible(QPieSeries* self, bool visible) {
	self->setLabelsVisible(visible);
}

bool QPieSeries_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQPieSeries* self_cast = dynamic_cast<MiqtVirtualQPieSeries*>( (QPieSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QPieSeries_virtualbase_type(const void* self) {

	MiqtVirtualQPieSeries::SeriesType _ret = ( (const MiqtVirtualQPieSeries*)(self) )->QPieSeries::type();
	return static_cast<int>(_ret);

}

bool QPieSeries_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPieSeries* self_cast = dynamic_cast<MiqtVirtualQPieSeries*>( (QPieSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPieSeries_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQPieSeries*)(self) )->QPieSeries::event(event);

}

bool QPieSeries_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPieSeries* self_cast = dynamic_cast<MiqtVirtualQPieSeries*>( (QPieSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPieSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQPieSeries*)(self) )->QPieSeries::eventFilter(watched, event);

}

bool QPieSeries_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPieSeries* self_cast = dynamic_cast<MiqtVirtualQPieSeries*>( (QPieSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPieSeries_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQPieSeries*)(self) )->QPieSeries::timerEvent(event);

}

bool QPieSeries_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPieSeries* self_cast = dynamic_cast<MiqtVirtualQPieSeries*>( (QPieSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPieSeries_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQPieSeries*)(self) )->QPieSeries::childEvent(event);

}

bool QPieSeries_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPieSeries* self_cast = dynamic_cast<MiqtVirtualQPieSeries*>( (QPieSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPieSeries_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQPieSeries*)(self) )->QPieSeries::customEvent(event);

}

bool QPieSeries_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPieSeries* self_cast = dynamic_cast<MiqtVirtualQPieSeries*>( (QPieSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPieSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQPieSeries*)(self) )->QPieSeries::connectNotify(*signal);

}

bool QPieSeries_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPieSeries* self_cast = dynamic_cast<MiqtVirtualQPieSeries*>( (QPieSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPieSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQPieSeries*)(self) )->QPieSeries::disconnectNotify(*signal);

}

QObject* QPieSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPieSeries* self_cast = dynamic_cast<MiqtVirtualQPieSeries*>( (QPieSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPieSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPieSeries* self_cast = dynamic_cast<MiqtVirtualQPieSeries*>( (QPieSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPieSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPieSeries* self_cast = dynamic_cast<MiqtVirtualQPieSeries*>( (QPieSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPieSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPieSeries* self_cast = dynamic_cast<MiqtVirtualQPieSeries*>( (QPieSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPieSeries_delete(QPieSeries* self) {
	delete self;
}

