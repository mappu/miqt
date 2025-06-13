#include <QAbstractSeries>
#include <QBrush>
#include <QCandlestickSeries>
#include <QCandlestickSet>
#include <QChildEvent>
#include <QColor>
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
#include <qcandlestickseries.h>
#include "gen_qcandlestickseries.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCandlestickSeries_clicked(intptr_t, QCandlestickSet*);
void miqt_exec_callback_QCandlestickSeries_hovered(intptr_t, bool, QCandlestickSet*);
void miqt_exec_callback_QCandlestickSeries_pressed(intptr_t, QCandlestickSet*);
void miqt_exec_callback_QCandlestickSeries_released(intptr_t, QCandlestickSet*);
void miqt_exec_callback_QCandlestickSeries_doubleClicked(intptr_t, QCandlestickSet*);
void miqt_exec_callback_QCandlestickSeries_candlestickSetsAdded(intptr_t, struct miqt_array /* of QCandlestickSet* */ );
void miqt_exec_callback_QCandlestickSeries_candlestickSetsRemoved(intptr_t, struct miqt_array /* of QCandlestickSet* */ );
void miqt_exec_callback_QCandlestickSeries_countChanged(intptr_t);
void miqt_exec_callback_QCandlestickSeries_maximumColumnWidthChanged(intptr_t);
void miqt_exec_callback_QCandlestickSeries_minimumColumnWidthChanged(intptr_t);
void miqt_exec_callback_QCandlestickSeries_bodyWidthChanged(intptr_t);
void miqt_exec_callback_QCandlestickSeries_bodyOutlineVisibilityChanged(intptr_t);
void miqt_exec_callback_QCandlestickSeries_capsWidthChanged(intptr_t);
void miqt_exec_callback_QCandlestickSeries_capsVisibilityChanged(intptr_t);
void miqt_exec_callback_QCandlestickSeries_increasingColorChanged(intptr_t);
void miqt_exec_callback_QCandlestickSeries_decreasingColorChanged(intptr_t);
void miqt_exec_callback_QCandlestickSeries_brushChanged(intptr_t);
void miqt_exec_callback_QCandlestickSeries_penChanged(intptr_t);
int miqt_exec_callback_QCandlestickSeries_type(const QCandlestickSeries*, intptr_t);
bool miqt_exec_callback_QCandlestickSeries_event(QCandlestickSeries*, intptr_t, QEvent*);
bool miqt_exec_callback_QCandlestickSeries_eventFilter(QCandlestickSeries*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QCandlestickSeries_timerEvent(QCandlestickSeries*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QCandlestickSeries_childEvent(QCandlestickSeries*, intptr_t, QChildEvent*);
void miqt_exec_callback_QCandlestickSeries_customEvent(QCandlestickSeries*, intptr_t, QEvent*);
void miqt_exec_callback_QCandlestickSeries_connectNotify(QCandlestickSeries*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QCandlestickSeries_disconnectNotify(QCandlestickSeries*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQCandlestickSeries final : public QCandlestickSeries {
public:

	MiqtVirtualQCandlestickSeries(): QCandlestickSeries() {}
	MiqtVirtualQCandlestickSeries(QObject* parent): QCandlestickSeries(parent) {}

	virtual ~MiqtVirtualQCandlestickSeries() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSeries::SeriesType type() const override {
		if (handle__type == 0) {
			return QCandlestickSeries::type();
		}

		int callback_return_value = miqt_exec_callback_QCandlestickSeries_type(this, handle__type);
		return static_cast<QAbstractSeries::SeriesType>(callback_return_value);
	}

	friend int QCandlestickSeries_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QCandlestickSeries::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QCandlestickSeries_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QCandlestickSeries_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QCandlestickSeries::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QCandlestickSeries_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QCandlestickSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QCandlestickSeries::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QCandlestickSeries_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QCandlestickSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QCandlestickSeries::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QCandlestickSeries_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QCandlestickSeries_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QCandlestickSeries::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QCandlestickSeries_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QCandlestickSeries_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QCandlestickSeries::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QCandlestickSeries_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QCandlestickSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QCandlestickSeries::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QCandlestickSeries_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QCandlestickSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QCandlestickSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QCandlestickSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QCandlestickSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QCandlestickSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QCandlestickSeries* QCandlestickSeries_new() {
	return new (std::nothrow) MiqtVirtualQCandlestickSeries();
}

QCandlestickSeries* QCandlestickSeries_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQCandlestickSeries(parent);
}

void QCandlestickSeries_virtbase(QCandlestickSeries* src, QAbstractSeries** outptr_QAbstractSeries) {
	*outptr_QAbstractSeries = static_cast<QAbstractSeries*>(src);
}

QMetaObject* QCandlestickSeries_metaObject(const QCandlestickSeries* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCandlestickSeries_metacast(QCandlestickSeries* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCandlestickSeries_tr(const char* s) {
	QString _ret = QCandlestickSeries::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCandlestickSeries_append(QCandlestickSeries* self, QCandlestickSet* set) {
	return self->append(set);
}

bool QCandlestickSeries_remove(QCandlestickSeries* self, QCandlestickSet* set) {
	return self->remove(set);
}

bool QCandlestickSeries_appendWithSets(QCandlestickSeries* self, struct miqt_array /* of QCandlestickSet* */  sets) {
	QList<QCandlestickSet *> sets_QList;
	sets_QList.reserve(sets.len);
	QCandlestickSet** sets_arr = static_cast<QCandlestickSet**>(sets.data);
	for(size_t i = 0; i < sets.len; ++i) {
		sets_QList.push_back(sets_arr[i]);
	}
	return self->append(sets_QList);
}

bool QCandlestickSeries_removeWithSets(QCandlestickSeries* self, struct miqt_array /* of QCandlestickSet* */  sets) {
	QList<QCandlestickSet *> sets_QList;
	sets_QList.reserve(sets.len);
	QCandlestickSet** sets_arr = static_cast<QCandlestickSet**>(sets.data);
	for(size_t i = 0; i < sets.len; ++i) {
		sets_QList.push_back(sets_arr[i]);
	}
	return self->remove(sets_QList);
}

bool QCandlestickSeries_insert(QCandlestickSeries* self, int index, QCandlestickSet* set) {
	return self->insert(static_cast<int>(index), set);
}

bool QCandlestickSeries_take(QCandlestickSeries* self, QCandlestickSet* set) {
	return self->take(set);
}

void QCandlestickSeries_clear(QCandlestickSeries* self) {
	self->clear();
}

struct miqt_array /* of QCandlestickSet* */  QCandlestickSeries_sets(const QCandlestickSeries* self) {
	QList<QCandlestickSet *> _ret = self->sets();
	// Convert QList<> from C++ memory to manually-managed C memory
	QCandlestickSet** _arr = static_cast<QCandlestickSet**>(malloc(sizeof(QCandlestickSet*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QCandlestickSeries_count(const QCandlestickSeries* self) {
	return self->count();
}

int QCandlestickSeries_type(const QCandlestickSeries* self) {
	QAbstractSeries::SeriesType _ret = self->type();
	return static_cast<int>(_ret);
}

void QCandlestickSeries_setMaximumColumnWidth(QCandlestickSeries* self, double maximumColumnWidth) {
	self->setMaximumColumnWidth(static_cast<qreal>(maximumColumnWidth));
}

double QCandlestickSeries_maximumColumnWidth(const QCandlestickSeries* self) {
	qreal _ret = self->maximumColumnWidth();
	return static_cast<double>(_ret);
}

void QCandlestickSeries_setMinimumColumnWidth(QCandlestickSeries* self, double minimumColumnWidth) {
	self->setMinimumColumnWidth(static_cast<qreal>(minimumColumnWidth));
}

double QCandlestickSeries_minimumColumnWidth(const QCandlestickSeries* self) {
	qreal _ret = self->minimumColumnWidth();
	return static_cast<double>(_ret);
}

void QCandlestickSeries_setBodyWidth(QCandlestickSeries* self, double bodyWidth) {
	self->setBodyWidth(static_cast<qreal>(bodyWidth));
}

double QCandlestickSeries_bodyWidth(const QCandlestickSeries* self) {
	qreal _ret = self->bodyWidth();
	return static_cast<double>(_ret);
}

void QCandlestickSeries_setBodyOutlineVisible(QCandlestickSeries* self, bool bodyOutlineVisible) {
	self->setBodyOutlineVisible(bodyOutlineVisible);
}

bool QCandlestickSeries_bodyOutlineVisible(const QCandlestickSeries* self) {
	return self->bodyOutlineVisible();
}

void QCandlestickSeries_setCapsWidth(QCandlestickSeries* self, double capsWidth) {
	self->setCapsWidth(static_cast<qreal>(capsWidth));
}

double QCandlestickSeries_capsWidth(const QCandlestickSeries* self) {
	qreal _ret = self->capsWidth();
	return static_cast<double>(_ret);
}

void QCandlestickSeries_setCapsVisible(QCandlestickSeries* self, bool capsVisible) {
	self->setCapsVisible(capsVisible);
}

bool QCandlestickSeries_capsVisible(const QCandlestickSeries* self) {
	return self->capsVisible();
}

void QCandlestickSeries_setIncreasingColor(QCandlestickSeries* self, QColor* increasingColor) {
	self->setIncreasingColor(*increasingColor);
}

QColor* QCandlestickSeries_increasingColor(const QCandlestickSeries* self) {
	return new QColor(self->increasingColor());
}

void QCandlestickSeries_setDecreasingColor(QCandlestickSeries* self, QColor* decreasingColor) {
	self->setDecreasingColor(*decreasingColor);
}

QColor* QCandlestickSeries_decreasingColor(const QCandlestickSeries* self) {
	return new QColor(self->decreasingColor());
}

void QCandlestickSeries_setBrush(QCandlestickSeries* self, QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QCandlestickSeries_brush(const QCandlestickSeries* self) {
	return new QBrush(self->brush());
}

void QCandlestickSeries_setPen(QCandlestickSeries* self, QPen* pen) {
	self->setPen(*pen);
}

QPen* QCandlestickSeries_pen(const QCandlestickSeries* self) {
	return new QPen(self->pen());
}

void QCandlestickSeries_clicked(QCandlestickSeries* self, QCandlestickSet* set) {
	self->clicked(set);
}

void QCandlestickSeries_connect_clicked(QCandlestickSeries* self, intptr_t slot) {
	QCandlestickSeries::connect(self, static_cast<void (QCandlestickSeries::*)(QCandlestickSet*)>(&QCandlestickSeries::clicked), self, [=](QCandlestickSet* set) {
		QCandlestickSet* sigval1 = set;
		miqt_exec_callback_QCandlestickSeries_clicked(slot, sigval1);
	});
}

void QCandlestickSeries_hovered(QCandlestickSeries* self, bool status, QCandlestickSet* set) {
	self->hovered(status, set);
}

void QCandlestickSeries_connect_hovered(QCandlestickSeries* self, intptr_t slot) {
	QCandlestickSeries::connect(self, static_cast<void (QCandlestickSeries::*)(bool, QCandlestickSet*)>(&QCandlestickSeries::hovered), self, [=](bool status, QCandlestickSet* set) {
		bool sigval1 = status;
		QCandlestickSet* sigval2 = set;
		miqt_exec_callback_QCandlestickSeries_hovered(slot, sigval1, sigval2);
	});
}

void QCandlestickSeries_pressed(QCandlestickSeries* self, QCandlestickSet* set) {
	self->pressed(set);
}

void QCandlestickSeries_connect_pressed(QCandlestickSeries* self, intptr_t slot) {
	QCandlestickSeries::connect(self, static_cast<void (QCandlestickSeries::*)(QCandlestickSet*)>(&QCandlestickSeries::pressed), self, [=](QCandlestickSet* set) {
		QCandlestickSet* sigval1 = set;
		miqt_exec_callback_QCandlestickSeries_pressed(slot, sigval1);
	});
}

void QCandlestickSeries_released(QCandlestickSeries* self, QCandlestickSet* set) {
	self->released(set);
}

void QCandlestickSeries_connect_released(QCandlestickSeries* self, intptr_t slot) {
	QCandlestickSeries::connect(self, static_cast<void (QCandlestickSeries::*)(QCandlestickSet*)>(&QCandlestickSeries::released), self, [=](QCandlestickSet* set) {
		QCandlestickSet* sigval1 = set;
		miqt_exec_callback_QCandlestickSeries_released(slot, sigval1);
	});
}

void QCandlestickSeries_doubleClicked(QCandlestickSeries* self, QCandlestickSet* set) {
	self->doubleClicked(set);
}

void QCandlestickSeries_connect_doubleClicked(QCandlestickSeries* self, intptr_t slot) {
	QCandlestickSeries::connect(self, static_cast<void (QCandlestickSeries::*)(QCandlestickSet*)>(&QCandlestickSeries::doubleClicked), self, [=](QCandlestickSet* set) {
		QCandlestickSet* sigval1 = set;
		miqt_exec_callback_QCandlestickSeries_doubleClicked(slot, sigval1);
	});
}

void QCandlestickSeries_candlestickSetsAdded(QCandlestickSeries* self, struct miqt_array /* of QCandlestickSet* */  sets) {
	QList<QCandlestickSet *> sets_QList;
	sets_QList.reserve(sets.len);
	QCandlestickSet** sets_arr = static_cast<QCandlestickSet**>(sets.data);
	for(size_t i = 0; i < sets.len; ++i) {
		sets_QList.push_back(sets_arr[i]);
	}
	self->candlestickSetsAdded(sets_QList);
}

void QCandlestickSeries_connect_candlestickSetsAdded(QCandlestickSeries* self, intptr_t slot) {
	QCandlestickSeries::connect(self, static_cast<void (QCandlestickSeries::*)(const QList<QCandlestickSet *>&)>(&QCandlestickSeries::candlestickSetsAdded), self, [=](const QList<QCandlestickSet *>& sets) {
		const QList<QCandlestickSet *>& sets_ret = sets;
		// Convert QList<> from C++ memory to manually-managed C memory
		QCandlestickSet** sets_arr = static_cast<QCandlestickSet**>(malloc(sizeof(QCandlestickSet*) * sets_ret.length()));
		for (size_t i = 0, e = sets_ret.length(); i < e; ++i) {
			sets_arr[i] = sets_ret[i];
		}
		struct miqt_array sets_out;
		sets_out.len = sets_ret.length();
		sets_out.data = static_cast<void*>(sets_arr);
		struct miqt_array /* of QCandlestickSet* */  sigval1 = sets_out;
		miqt_exec_callback_QCandlestickSeries_candlestickSetsAdded(slot, sigval1);
	});
}

void QCandlestickSeries_candlestickSetsRemoved(QCandlestickSeries* self, struct miqt_array /* of QCandlestickSet* */  sets) {
	QList<QCandlestickSet *> sets_QList;
	sets_QList.reserve(sets.len);
	QCandlestickSet** sets_arr = static_cast<QCandlestickSet**>(sets.data);
	for(size_t i = 0; i < sets.len; ++i) {
		sets_QList.push_back(sets_arr[i]);
	}
	self->candlestickSetsRemoved(sets_QList);
}

void QCandlestickSeries_connect_candlestickSetsRemoved(QCandlestickSeries* self, intptr_t slot) {
	QCandlestickSeries::connect(self, static_cast<void (QCandlestickSeries::*)(const QList<QCandlestickSet *>&)>(&QCandlestickSeries::candlestickSetsRemoved), self, [=](const QList<QCandlestickSet *>& sets) {
		const QList<QCandlestickSet *>& sets_ret = sets;
		// Convert QList<> from C++ memory to manually-managed C memory
		QCandlestickSet** sets_arr = static_cast<QCandlestickSet**>(malloc(sizeof(QCandlestickSet*) * sets_ret.length()));
		for (size_t i = 0, e = sets_ret.length(); i < e; ++i) {
			sets_arr[i] = sets_ret[i];
		}
		struct miqt_array sets_out;
		sets_out.len = sets_ret.length();
		sets_out.data = static_cast<void*>(sets_arr);
		struct miqt_array /* of QCandlestickSet* */  sigval1 = sets_out;
		miqt_exec_callback_QCandlestickSeries_candlestickSetsRemoved(slot, sigval1);
	});
}

void QCandlestickSeries_countChanged(QCandlestickSeries* self) {
	self->countChanged();
}

void QCandlestickSeries_connect_countChanged(QCandlestickSeries* self, intptr_t slot) {
	QCandlestickSeries::connect(self, static_cast<void (QCandlestickSeries::*)()>(&QCandlestickSeries::countChanged), self, [=]() {
		miqt_exec_callback_QCandlestickSeries_countChanged(slot);
	});
}

void QCandlestickSeries_maximumColumnWidthChanged(QCandlestickSeries* self) {
	self->maximumColumnWidthChanged();
}

void QCandlestickSeries_connect_maximumColumnWidthChanged(QCandlestickSeries* self, intptr_t slot) {
	QCandlestickSeries::connect(self, static_cast<void (QCandlestickSeries::*)()>(&QCandlestickSeries::maximumColumnWidthChanged), self, [=]() {
		miqt_exec_callback_QCandlestickSeries_maximumColumnWidthChanged(slot);
	});
}

void QCandlestickSeries_minimumColumnWidthChanged(QCandlestickSeries* self) {
	self->minimumColumnWidthChanged();
}

void QCandlestickSeries_connect_minimumColumnWidthChanged(QCandlestickSeries* self, intptr_t slot) {
	QCandlestickSeries::connect(self, static_cast<void (QCandlestickSeries::*)()>(&QCandlestickSeries::minimumColumnWidthChanged), self, [=]() {
		miqt_exec_callback_QCandlestickSeries_minimumColumnWidthChanged(slot);
	});
}

void QCandlestickSeries_bodyWidthChanged(QCandlestickSeries* self) {
	self->bodyWidthChanged();
}

void QCandlestickSeries_connect_bodyWidthChanged(QCandlestickSeries* self, intptr_t slot) {
	QCandlestickSeries::connect(self, static_cast<void (QCandlestickSeries::*)()>(&QCandlestickSeries::bodyWidthChanged), self, [=]() {
		miqt_exec_callback_QCandlestickSeries_bodyWidthChanged(slot);
	});
}

void QCandlestickSeries_bodyOutlineVisibilityChanged(QCandlestickSeries* self) {
	self->bodyOutlineVisibilityChanged();
}

void QCandlestickSeries_connect_bodyOutlineVisibilityChanged(QCandlestickSeries* self, intptr_t slot) {
	QCandlestickSeries::connect(self, static_cast<void (QCandlestickSeries::*)()>(&QCandlestickSeries::bodyOutlineVisibilityChanged), self, [=]() {
		miqt_exec_callback_QCandlestickSeries_bodyOutlineVisibilityChanged(slot);
	});
}

void QCandlestickSeries_capsWidthChanged(QCandlestickSeries* self) {
	self->capsWidthChanged();
}

void QCandlestickSeries_connect_capsWidthChanged(QCandlestickSeries* self, intptr_t slot) {
	QCandlestickSeries::connect(self, static_cast<void (QCandlestickSeries::*)()>(&QCandlestickSeries::capsWidthChanged), self, [=]() {
		miqt_exec_callback_QCandlestickSeries_capsWidthChanged(slot);
	});
}

void QCandlestickSeries_capsVisibilityChanged(QCandlestickSeries* self) {
	self->capsVisibilityChanged();
}

void QCandlestickSeries_connect_capsVisibilityChanged(QCandlestickSeries* self, intptr_t slot) {
	QCandlestickSeries::connect(self, static_cast<void (QCandlestickSeries::*)()>(&QCandlestickSeries::capsVisibilityChanged), self, [=]() {
		miqt_exec_callback_QCandlestickSeries_capsVisibilityChanged(slot);
	});
}

void QCandlestickSeries_increasingColorChanged(QCandlestickSeries* self) {
	self->increasingColorChanged();
}

void QCandlestickSeries_connect_increasingColorChanged(QCandlestickSeries* self, intptr_t slot) {
	QCandlestickSeries::connect(self, static_cast<void (QCandlestickSeries::*)()>(&QCandlestickSeries::increasingColorChanged), self, [=]() {
		miqt_exec_callback_QCandlestickSeries_increasingColorChanged(slot);
	});
}

void QCandlestickSeries_decreasingColorChanged(QCandlestickSeries* self) {
	self->decreasingColorChanged();
}

void QCandlestickSeries_connect_decreasingColorChanged(QCandlestickSeries* self, intptr_t slot) {
	QCandlestickSeries::connect(self, static_cast<void (QCandlestickSeries::*)()>(&QCandlestickSeries::decreasingColorChanged), self, [=]() {
		miqt_exec_callback_QCandlestickSeries_decreasingColorChanged(slot);
	});
}

void QCandlestickSeries_brushChanged(QCandlestickSeries* self) {
	self->brushChanged();
}

void QCandlestickSeries_connect_brushChanged(QCandlestickSeries* self, intptr_t slot) {
	QCandlestickSeries::connect(self, static_cast<void (QCandlestickSeries::*)()>(&QCandlestickSeries::brushChanged), self, [=]() {
		miqt_exec_callback_QCandlestickSeries_brushChanged(slot);
	});
}

void QCandlestickSeries_penChanged(QCandlestickSeries* self) {
	self->penChanged();
}

void QCandlestickSeries_connect_penChanged(QCandlestickSeries* self, intptr_t slot) {
	QCandlestickSeries::connect(self, static_cast<void (QCandlestickSeries::*)()>(&QCandlestickSeries::penChanged), self, [=]() {
		miqt_exec_callback_QCandlestickSeries_penChanged(slot);
	});
}

struct miqt_string QCandlestickSeries_tr2(const char* s, const char* c) {
	QString _ret = QCandlestickSeries::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCandlestickSeries_tr3(const char* s, const char* c, int n) {
	QString _ret = QCandlestickSeries::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCandlestickSeries_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickSeries* self_cast = dynamic_cast<MiqtVirtualQCandlestickSeries*>( (QCandlestickSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = slot;
	return true;
}

int QCandlestickSeries_virtualbase_type(const void* self) {
	MiqtVirtualQCandlestickSeries::SeriesType _ret = static_cast<const MiqtVirtualQCandlestickSeries*>(self)->QCandlestickSeries::type();
	return static_cast<int>(_ret);
}

bool QCandlestickSeries_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickSeries* self_cast = dynamic_cast<MiqtVirtualQCandlestickSeries*>( (QCandlestickSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QCandlestickSeries_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQCandlestickSeries*>(self)->QCandlestickSeries::event(event);
}

bool QCandlestickSeries_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickSeries* self_cast = dynamic_cast<MiqtVirtualQCandlestickSeries*>( (QCandlestickSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QCandlestickSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQCandlestickSeries*>(self)->QCandlestickSeries::eventFilter(watched, event);
}

bool QCandlestickSeries_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickSeries* self_cast = dynamic_cast<MiqtVirtualQCandlestickSeries*>( (QCandlestickSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QCandlestickSeries_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQCandlestickSeries*>(self)->QCandlestickSeries::timerEvent(event);
}

bool QCandlestickSeries_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickSeries* self_cast = dynamic_cast<MiqtVirtualQCandlestickSeries*>( (QCandlestickSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QCandlestickSeries_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQCandlestickSeries*>(self)->QCandlestickSeries::childEvent(event);
}

bool QCandlestickSeries_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickSeries* self_cast = dynamic_cast<MiqtVirtualQCandlestickSeries*>( (QCandlestickSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QCandlestickSeries_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQCandlestickSeries*>(self)->QCandlestickSeries::customEvent(event);
}

bool QCandlestickSeries_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickSeries* self_cast = dynamic_cast<MiqtVirtualQCandlestickSeries*>( (QCandlestickSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QCandlestickSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQCandlestickSeries*>(self)->QCandlestickSeries::connectNotify(*signal);
}

bool QCandlestickSeries_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickSeries* self_cast = dynamic_cast<MiqtVirtualQCandlestickSeries*>( (QCandlestickSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QCandlestickSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQCandlestickSeries*>(self)->QCandlestickSeries::disconnectNotify(*signal);
}

QObject* QCandlestickSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCandlestickSeries* self_cast = dynamic_cast<MiqtVirtualQCandlestickSeries*>( (QCandlestickSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QCandlestickSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCandlestickSeries* self_cast = dynamic_cast<MiqtVirtualQCandlestickSeries*>( (QCandlestickSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QCandlestickSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQCandlestickSeries* self_cast = dynamic_cast<MiqtVirtualQCandlestickSeries*>( (QCandlestickSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QCandlestickSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQCandlestickSeries* self_cast = dynamic_cast<MiqtVirtualQCandlestickSeries*>( (QCandlestickSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QCandlestickSeries_delete(QCandlestickSeries* self) {
	delete self;
}

