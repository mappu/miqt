#include <QAbstractSeries>
#include <QBoxPlotSeries>
#include <QBoxSet>
#include <QBrush>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qboxplotseries.h>
#include "gen_qboxplotseries.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QBoxPlotSeries_clicked(intptr_t, QBoxSet*);
void miqt_exec_callback_QBoxPlotSeries_hovered(intptr_t, bool, QBoxSet*);
void miqt_exec_callback_QBoxPlotSeries_pressed(intptr_t, QBoxSet*);
void miqt_exec_callback_QBoxPlotSeries_released(intptr_t, QBoxSet*);
void miqt_exec_callback_QBoxPlotSeries_doubleClicked(intptr_t, QBoxSet*);
void miqt_exec_callback_QBoxPlotSeries_countChanged(intptr_t);
void miqt_exec_callback_QBoxPlotSeries_penChanged(intptr_t);
void miqt_exec_callback_QBoxPlotSeries_brushChanged(intptr_t);
void miqt_exec_callback_QBoxPlotSeries_boxOutlineVisibilityChanged(intptr_t);
void miqt_exec_callback_QBoxPlotSeries_boxWidthChanged(intptr_t);
void miqt_exec_callback_QBoxPlotSeries_boxsetsAdded(intptr_t, struct miqt_array /* of QBoxSet* */ );
void miqt_exec_callback_QBoxPlotSeries_boxsetsRemoved(intptr_t, struct miqt_array /* of QBoxSet* */ );
int miqt_exec_callback_QBoxPlotSeries_type(const QBoxPlotSeries*, intptr_t);
bool miqt_exec_callback_QBoxPlotSeries_event(QBoxPlotSeries*, intptr_t, QEvent*);
bool miqt_exec_callback_QBoxPlotSeries_eventFilter(QBoxPlotSeries*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QBoxPlotSeries_timerEvent(QBoxPlotSeries*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QBoxPlotSeries_childEvent(QBoxPlotSeries*, intptr_t, QChildEvent*);
void miqt_exec_callback_QBoxPlotSeries_customEvent(QBoxPlotSeries*, intptr_t, QEvent*);
void miqt_exec_callback_QBoxPlotSeries_connectNotify(QBoxPlotSeries*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QBoxPlotSeries_disconnectNotify(QBoxPlotSeries*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQBoxPlotSeries final : public QBoxPlotSeries {
public:

	MiqtVirtualQBoxPlotSeries(): QBoxPlotSeries() {}
	MiqtVirtualQBoxPlotSeries(QObject* parent): QBoxPlotSeries(parent) {}

	virtual ~MiqtVirtualQBoxPlotSeries() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSeries::SeriesType type() const override {
		if (handle__type == 0) {
			return QBoxPlotSeries::type();
		}

		int callback_return_value = miqt_exec_callback_QBoxPlotSeries_type(this, handle__type);
		return static_cast<QAbstractSeries::SeriesType>(callback_return_value);
	}

	friend int QBoxPlotSeries_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QBoxPlotSeries::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QBoxPlotSeries_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QBoxPlotSeries_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QBoxPlotSeries::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QBoxPlotSeries_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QBoxPlotSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QBoxPlotSeries::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QBoxPlotSeries_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QBoxPlotSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QBoxPlotSeries::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QBoxPlotSeries_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QBoxPlotSeries_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QBoxPlotSeries::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QBoxPlotSeries_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QBoxPlotSeries_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QBoxPlotSeries::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QBoxPlotSeries_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QBoxPlotSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QBoxPlotSeries::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QBoxPlotSeries_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QBoxPlotSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QBoxPlotSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QBoxPlotSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QBoxPlotSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QBoxPlotSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QBoxPlotSeries* QBoxPlotSeries_new() {
	return new (std::nothrow) MiqtVirtualQBoxPlotSeries();
}

QBoxPlotSeries* QBoxPlotSeries_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQBoxPlotSeries(parent);
}

void QBoxPlotSeries_virtbase(QBoxPlotSeries* src, QAbstractSeries** outptr_QAbstractSeries) {
	*outptr_QAbstractSeries = static_cast<QAbstractSeries*>(src);
}

QMetaObject* QBoxPlotSeries_metaObject(const QBoxPlotSeries* self) {
	return (QMetaObject*) self->metaObject();
}

void* QBoxPlotSeries_metacast(QBoxPlotSeries* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QBoxPlotSeries_tr(const char* s) {
	QString _ret = QBoxPlotSeries::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QBoxPlotSeries_append(QBoxPlotSeries* self, QBoxSet* box) {
	return self->append(box);
}

bool QBoxPlotSeries_remove(QBoxPlotSeries* self, QBoxSet* box) {
	return self->remove(box);
}

bool QBoxPlotSeries_take(QBoxPlotSeries* self, QBoxSet* box) {
	return self->take(box);
}

bool QBoxPlotSeries_appendWithBoxes(QBoxPlotSeries* self, struct miqt_array /* of QBoxSet* */  boxes) {
	QList<QBoxSet *> boxes_QList;
	boxes_QList.reserve(boxes.len);
	QBoxSet** boxes_arr = static_cast<QBoxSet**>(boxes.data);
	for(size_t i = 0; i < boxes.len; ++i) {
		boxes_QList.push_back(boxes_arr[i]);
	}
	return self->append(boxes_QList);
}

bool QBoxPlotSeries_insert(QBoxPlotSeries* self, int index, QBoxSet* box) {
	return self->insert(static_cast<int>(index), box);
}

int QBoxPlotSeries_count(const QBoxPlotSeries* self) {
	return self->count();
}

struct miqt_array /* of QBoxSet* */  QBoxPlotSeries_boxSets(const QBoxPlotSeries* self) {
	QList<QBoxSet *> _ret = self->boxSets();
	// Convert QList<> from C++ memory to manually-managed C memory
	QBoxSet** _arr = static_cast<QBoxSet**>(malloc(sizeof(QBoxSet*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QBoxPlotSeries_clear(QBoxPlotSeries* self) {
	self->clear();
}

int QBoxPlotSeries_type(const QBoxPlotSeries* self) {
	QAbstractSeries::SeriesType _ret = self->type();
	return static_cast<int>(_ret);
}

void QBoxPlotSeries_setBoxOutlineVisible(QBoxPlotSeries* self, bool visible) {
	self->setBoxOutlineVisible(visible);
}

bool QBoxPlotSeries_boxOutlineVisible(QBoxPlotSeries* self) {
	return self->boxOutlineVisible();
}

void QBoxPlotSeries_setBoxWidth(QBoxPlotSeries* self, double width) {
	self->setBoxWidth(static_cast<qreal>(width));
}

double QBoxPlotSeries_boxWidth(QBoxPlotSeries* self) {
	qreal _ret = self->boxWidth();
	return static_cast<double>(_ret);
}

void QBoxPlotSeries_setBrush(QBoxPlotSeries* self, QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QBoxPlotSeries_brush(const QBoxPlotSeries* self) {
	return new QBrush(self->brush());
}

void QBoxPlotSeries_setPen(QBoxPlotSeries* self, QPen* pen) {
	self->setPen(*pen);
}

QPen* QBoxPlotSeries_pen(const QBoxPlotSeries* self) {
	return new QPen(self->pen());
}

void QBoxPlotSeries_clicked(QBoxPlotSeries* self, QBoxSet* boxset) {
	self->clicked(boxset);
}

void QBoxPlotSeries_connect_clicked(QBoxPlotSeries* self, intptr_t slot) {
	QBoxPlotSeries::connect(self, static_cast<void (QBoxPlotSeries::*)(QBoxSet*)>(&QBoxPlotSeries::clicked), self, [=](QBoxSet* boxset) {
		QBoxSet* sigval1 = boxset;
		miqt_exec_callback_QBoxPlotSeries_clicked(slot, sigval1);
	});
}

void QBoxPlotSeries_hovered(QBoxPlotSeries* self, bool status, QBoxSet* boxset) {
	self->hovered(status, boxset);
}

void QBoxPlotSeries_connect_hovered(QBoxPlotSeries* self, intptr_t slot) {
	QBoxPlotSeries::connect(self, static_cast<void (QBoxPlotSeries::*)(bool, QBoxSet*)>(&QBoxPlotSeries::hovered), self, [=](bool status, QBoxSet* boxset) {
		bool sigval1 = status;
		QBoxSet* sigval2 = boxset;
		miqt_exec_callback_QBoxPlotSeries_hovered(slot, sigval1, sigval2);
	});
}

void QBoxPlotSeries_pressed(QBoxPlotSeries* self, QBoxSet* boxset) {
	self->pressed(boxset);
}

void QBoxPlotSeries_connect_pressed(QBoxPlotSeries* self, intptr_t slot) {
	QBoxPlotSeries::connect(self, static_cast<void (QBoxPlotSeries::*)(QBoxSet*)>(&QBoxPlotSeries::pressed), self, [=](QBoxSet* boxset) {
		QBoxSet* sigval1 = boxset;
		miqt_exec_callback_QBoxPlotSeries_pressed(slot, sigval1);
	});
}

void QBoxPlotSeries_released(QBoxPlotSeries* self, QBoxSet* boxset) {
	self->released(boxset);
}

void QBoxPlotSeries_connect_released(QBoxPlotSeries* self, intptr_t slot) {
	QBoxPlotSeries::connect(self, static_cast<void (QBoxPlotSeries::*)(QBoxSet*)>(&QBoxPlotSeries::released), self, [=](QBoxSet* boxset) {
		QBoxSet* sigval1 = boxset;
		miqt_exec_callback_QBoxPlotSeries_released(slot, sigval1);
	});
}

void QBoxPlotSeries_doubleClicked(QBoxPlotSeries* self, QBoxSet* boxset) {
	self->doubleClicked(boxset);
}

void QBoxPlotSeries_connect_doubleClicked(QBoxPlotSeries* self, intptr_t slot) {
	QBoxPlotSeries::connect(self, static_cast<void (QBoxPlotSeries::*)(QBoxSet*)>(&QBoxPlotSeries::doubleClicked), self, [=](QBoxSet* boxset) {
		QBoxSet* sigval1 = boxset;
		miqt_exec_callback_QBoxPlotSeries_doubleClicked(slot, sigval1);
	});
}

void QBoxPlotSeries_countChanged(QBoxPlotSeries* self) {
	self->countChanged();
}

void QBoxPlotSeries_connect_countChanged(QBoxPlotSeries* self, intptr_t slot) {
	QBoxPlotSeries::connect(self, static_cast<void (QBoxPlotSeries::*)()>(&QBoxPlotSeries::countChanged), self, [=]() {
		miqt_exec_callback_QBoxPlotSeries_countChanged(slot);
	});
}

void QBoxPlotSeries_penChanged(QBoxPlotSeries* self) {
	self->penChanged();
}

void QBoxPlotSeries_connect_penChanged(QBoxPlotSeries* self, intptr_t slot) {
	QBoxPlotSeries::connect(self, static_cast<void (QBoxPlotSeries::*)()>(&QBoxPlotSeries::penChanged), self, [=]() {
		miqt_exec_callback_QBoxPlotSeries_penChanged(slot);
	});
}

void QBoxPlotSeries_brushChanged(QBoxPlotSeries* self) {
	self->brushChanged();
}

void QBoxPlotSeries_connect_brushChanged(QBoxPlotSeries* self, intptr_t slot) {
	QBoxPlotSeries::connect(self, static_cast<void (QBoxPlotSeries::*)()>(&QBoxPlotSeries::brushChanged), self, [=]() {
		miqt_exec_callback_QBoxPlotSeries_brushChanged(slot);
	});
}

void QBoxPlotSeries_boxOutlineVisibilityChanged(QBoxPlotSeries* self) {
	self->boxOutlineVisibilityChanged();
}

void QBoxPlotSeries_connect_boxOutlineVisibilityChanged(QBoxPlotSeries* self, intptr_t slot) {
	QBoxPlotSeries::connect(self, static_cast<void (QBoxPlotSeries::*)()>(&QBoxPlotSeries::boxOutlineVisibilityChanged), self, [=]() {
		miqt_exec_callback_QBoxPlotSeries_boxOutlineVisibilityChanged(slot);
	});
}

void QBoxPlotSeries_boxWidthChanged(QBoxPlotSeries* self) {
	self->boxWidthChanged();
}

void QBoxPlotSeries_connect_boxWidthChanged(QBoxPlotSeries* self, intptr_t slot) {
	QBoxPlotSeries::connect(self, static_cast<void (QBoxPlotSeries::*)()>(&QBoxPlotSeries::boxWidthChanged), self, [=]() {
		miqt_exec_callback_QBoxPlotSeries_boxWidthChanged(slot);
	});
}

void QBoxPlotSeries_boxsetsAdded(QBoxPlotSeries* self, struct miqt_array /* of QBoxSet* */  sets) {
	QList<QBoxSet *> sets_QList;
	sets_QList.reserve(sets.len);
	QBoxSet** sets_arr = static_cast<QBoxSet**>(sets.data);
	for(size_t i = 0; i < sets.len; ++i) {
		sets_QList.push_back(sets_arr[i]);
	}
	self->boxsetsAdded(sets_QList);
}

void QBoxPlotSeries_connect_boxsetsAdded(QBoxPlotSeries* self, intptr_t slot) {
	QBoxPlotSeries::connect(self, static_cast<void (QBoxPlotSeries::*)(const QList<QBoxSet *>&)>(&QBoxPlotSeries::boxsetsAdded), self, [=](const QList<QBoxSet *>& sets) {
		const QList<QBoxSet *>& sets_ret = sets;
		// Convert QList<> from C++ memory to manually-managed C memory
		QBoxSet** sets_arr = static_cast<QBoxSet**>(malloc(sizeof(QBoxSet*) * sets_ret.length()));
		for (size_t i = 0, e = sets_ret.length(); i < e; ++i) {
			sets_arr[i] = sets_ret[i];
		}
		struct miqt_array sets_out;
		sets_out.len = sets_ret.length();
		sets_out.data = static_cast<void*>(sets_arr);
		struct miqt_array /* of QBoxSet* */  sigval1 = sets_out;
		miqt_exec_callback_QBoxPlotSeries_boxsetsAdded(slot, sigval1);
	});
}

void QBoxPlotSeries_boxsetsRemoved(QBoxPlotSeries* self, struct miqt_array /* of QBoxSet* */  sets) {
	QList<QBoxSet *> sets_QList;
	sets_QList.reserve(sets.len);
	QBoxSet** sets_arr = static_cast<QBoxSet**>(sets.data);
	for(size_t i = 0; i < sets.len; ++i) {
		sets_QList.push_back(sets_arr[i]);
	}
	self->boxsetsRemoved(sets_QList);
}

void QBoxPlotSeries_connect_boxsetsRemoved(QBoxPlotSeries* self, intptr_t slot) {
	QBoxPlotSeries::connect(self, static_cast<void (QBoxPlotSeries::*)(const QList<QBoxSet *>&)>(&QBoxPlotSeries::boxsetsRemoved), self, [=](const QList<QBoxSet *>& sets) {
		const QList<QBoxSet *>& sets_ret = sets;
		// Convert QList<> from C++ memory to manually-managed C memory
		QBoxSet** sets_arr = static_cast<QBoxSet**>(malloc(sizeof(QBoxSet*) * sets_ret.length()));
		for (size_t i = 0, e = sets_ret.length(); i < e; ++i) {
			sets_arr[i] = sets_ret[i];
		}
		struct miqt_array sets_out;
		sets_out.len = sets_ret.length();
		sets_out.data = static_cast<void*>(sets_arr);
		struct miqt_array /* of QBoxSet* */  sigval1 = sets_out;
		miqt_exec_callback_QBoxPlotSeries_boxsetsRemoved(slot, sigval1);
	});
}

struct miqt_string QBoxPlotSeries_tr2(const char* s, const char* c) {
	QString _ret = QBoxPlotSeries::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBoxPlotSeries_tr3(const char* s, const char* c, int n) {
	QString _ret = QBoxPlotSeries::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QBoxPlotSeries_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQBoxPlotSeries* self_cast = dynamic_cast<MiqtVirtualQBoxPlotSeries*>( (QBoxPlotSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = slot;
	return true;
}

int QBoxPlotSeries_virtualbase_type(const void* self) {
	MiqtVirtualQBoxPlotSeries::SeriesType _ret = static_cast<const MiqtVirtualQBoxPlotSeries*>(self)->QBoxPlotSeries::type();
	return static_cast<int>(_ret);
}

bool QBoxPlotSeries_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQBoxPlotSeries* self_cast = dynamic_cast<MiqtVirtualQBoxPlotSeries*>( (QBoxPlotSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QBoxPlotSeries_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQBoxPlotSeries*>(self)->QBoxPlotSeries::event(event);
}

bool QBoxPlotSeries_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQBoxPlotSeries* self_cast = dynamic_cast<MiqtVirtualQBoxPlotSeries*>( (QBoxPlotSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QBoxPlotSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQBoxPlotSeries*>(self)->QBoxPlotSeries::eventFilter(watched, event);
}

bool QBoxPlotSeries_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQBoxPlotSeries* self_cast = dynamic_cast<MiqtVirtualQBoxPlotSeries*>( (QBoxPlotSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QBoxPlotSeries_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQBoxPlotSeries*>(self)->QBoxPlotSeries::timerEvent(event);
}

bool QBoxPlotSeries_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQBoxPlotSeries* self_cast = dynamic_cast<MiqtVirtualQBoxPlotSeries*>( (QBoxPlotSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QBoxPlotSeries_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQBoxPlotSeries*>(self)->QBoxPlotSeries::childEvent(event);
}

bool QBoxPlotSeries_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQBoxPlotSeries* self_cast = dynamic_cast<MiqtVirtualQBoxPlotSeries*>( (QBoxPlotSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QBoxPlotSeries_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQBoxPlotSeries*>(self)->QBoxPlotSeries::customEvent(event);
}

bool QBoxPlotSeries_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQBoxPlotSeries* self_cast = dynamic_cast<MiqtVirtualQBoxPlotSeries*>( (QBoxPlotSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QBoxPlotSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQBoxPlotSeries*>(self)->QBoxPlotSeries::connectNotify(*signal);
}

bool QBoxPlotSeries_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQBoxPlotSeries* self_cast = dynamic_cast<MiqtVirtualQBoxPlotSeries*>( (QBoxPlotSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QBoxPlotSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQBoxPlotSeries*>(self)->QBoxPlotSeries::disconnectNotify(*signal);
}

QObject* QBoxPlotSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQBoxPlotSeries* self_cast = dynamic_cast<MiqtVirtualQBoxPlotSeries*>( (QBoxPlotSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QBoxPlotSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQBoxPlotSeries* self_cast = dynamic_cast<MiqtVirtualQBoxPlotSeries*>( (QBoxPlotSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QBoxPlotSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQBoxPlotSeries* self_cast = dynamic_cast<MiqtVirtualQBoxPlotSeries*>( (QBoxPlotSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QBoxPlotSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQBoxPlotSeries* self_cast = dynamic_cast<MiqtVirtualQBoxPlotSeries*>( (QBoxPlotSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QBoxPlotSeries_delete(QBoxPlotSeries* self) {
	delete self;
}

