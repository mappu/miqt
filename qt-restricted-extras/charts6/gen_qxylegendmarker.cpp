#include <QChildEvent>
#include <QEvent>
#include <QLegend>
#include <QLegendMarker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QXYLegendMarker>
#include <QXYSeries>
#include <qxylegendmarker.h>
#include "gen_qxylegendmarker.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QXYLegendMarker_type(QXYLegendMarker*, intptr_t);
QXYSeries* miqt_exec_callback_QXYLegendMarker_series(QXYLegendMarker*, intptr_t);
bool miqt_exec_callback_QXYLegendMarker_event(QXYLegendMarker*, intptr_t, QEvent*);
bool miqt_exec_callback_QXYLegendMarker_eventFilter(QXYLegendMarker*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QXYLegendMarker_timerEvent(QXYLegendMarker*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QXYLegendMarker_childEvent(QXYLegendMarker*, intptr_t, QChildEvent*);
void miqt_exec_callback_QXYLegendMarker_customEvent(QXYLegendMarker*, intptr_t, QEvent*);
void miqt_exec_callback_QXYLegendMarker_connectNotify(QXYLegendMarker*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QXYLegendMarker_disconnectNotify(QXYLegendMarker*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQXYLegendMarker final : public QXYLegendMarker {
public:

	MiqtVirtualQXYLegendMarker(QXYSeries* series, QLegend* legend): QXYLegendMarker(series, legend) {}
	MiqtVirtualQXYLegendMarker(QXYSeries* series, QLegend* legend, QObject* parent): QXYLegendMarker(series, legend, parent) {}

	virtual ~MiqtVirtualQXYLegendMarker() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual QLegendMarker::LegendMarkerType type() override {
		if (handle__type == 0) {
			return QXYLegendMarker::type();
		}

		int callback_return_value = miqt_exec_callback_QXYLegendMarker_type(this, handle__type);
		return static_cast<QLegendMarker::LegendMarkerType>(callback_return_value);
	}

	friend int QXYLegendMarker_virtualbase_type(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__series = 0;

	// Subclass to allow providing a Go implementation
	virtual QXYSeries* series() override {
		if (handle__series == 0) {
			return QXYLegendMarker::series();
		}

		QXYSeries* callback_return_value = miqt_exec_callback_QXYLegendMarker_series(this, handle__series);
		return callback_return_value;
	}

	friend QXYSeries* QXYLegendMarker_virtualbase_series(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QXYLegendMarker::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QXYLegendMarker_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QXYLegendMarker_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QXYLegendMarker::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QXYLegendMarker_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QXYLegendMarker_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QXYLegendMarker::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QXYLegendMarker_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QXYLegendMarker_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QXYLegendMarker::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QXYLegendMarker_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QXYLegendMarker_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QXYLegendMarker::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QXYLegendMarker_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QXYLegendMarker_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QXYLegendMarker::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QXYLegendMarker_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QXYLegendMarker_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QXYLegendMarker::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QXYLegendMarker_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QXYLegendMarker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QXYLegendMarker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QXYLegendMarker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QXYLegendMarker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QXYLegendMarker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QXYLegendMarker* QXYLegendMarker_new(QXYSeries* series, QLegend* legend) {
	return new (std::nothrow) MiqtVirtualQXYLegendMarker(series, legend);
}

QXYLegendMarker* QXYLegendMarker_new2(QXYSeries* series, QLegend* legend, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQXYLegendMarker(series, legend, parent);
}

void QXYLegendMarker_virtbase(QXYLegendMarker* src, QLegendMarker** outptr_QLegendMarker) {
	*outptr_QLegendMarker = static_cast<QLegendMarker*>(src);
}

QMetaObject* QXYLegendMarker_metaObject(const QXYLegendMarker* self) {
	return (QMetaObject*) self->metaObject();
}

void* QXYLegendMarker_metacast(QXYLegendMarker* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QXYLegendMarker_tr(const char* s) {
	QString _ret = QXYLegendMarker::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QXYLegendMarker_type(QXYLegendMarker* self) {
	QLegendMarker::LegendMarkerType _ret = self->type();
	return static_cast<int>(_ret);
}

QXYSeries* QXYLegendMarker_series(QXYLegendMarker* self) {
	return self->series();
}

struct miqt_string QXYLegendMarker_tr2(const char* s, const char* c) {
	QString _ret = QXYLegendMarker::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QXYLegendMarker_tr3(const char* s, const char* c, int n) {
	QString _ret = QXYLegendMarker::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QXYLegendMarker_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQXYLegendMarker* self_cast = dynamic_cast<MiqtVirtualQXYLegendMarker*>( (QXYLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = slot;
	return true;
}

int QXYLegendMarker_virtualbase_type(void* self) {
	MiqtVirtualQXYLegendMarker::LegendMarkerType _ret = static_cast<MiqtVirtualQXYLegendMarker*>(self)->QXYLegendMarker::type();
	return static_cast<int>(_ret);
}

bool QXYLegendMarker_override_virtual_series(void* self, intptr_t slot) {
	MiqtVirtualQXYLegendMarker* self_cast = dynamic_cast<MiqtVirtualQXYLegendMarker*>( (QXYLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__series = slot;
	return true;
}

QXYSeries* QXYLegendMarker_virtualbase_series(void* self) {
	return static_cast<MiqtVirtualQXYLegendMarker*>(self)->QXYLegendMarker::series();
}

bool QXYLegendMarker_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQXYLegendMarker* self_cast = dynamic_cast<MiqtVirtualQXYLegendMarker*>( (QXYLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QXYLegendMarker_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQXYLegendMarker*>(self)->QXYLegendMarker::event(event);
}

bool QXYLegendMarker_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQXYLegendMarker* self_cast = dynamic_cast<MiqtVirtualQXYLegendMarker*>( (QXYLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QXYLegendMarker_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQXYLegendMarker*>(self)->QXYLegendMarker::eventFilter(watched, event);
}

bool QXYLegendMarker_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQXYLegendMarker* self_cast = dynamic_cast<MiqtVirtualQXYLegendMarker*>( (QXYLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QXYLegendMarker_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQXYLegendMarker*>(self)->QXYLegendMarker::timerEvent(event);
}

bool QXYLegendMarker_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQXYLegendMarker* self_cast = dynamic_cast<MiqtVirtualQXYLegendMarker*>( (QXYLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QXYLegendMarker_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQXYLegendMarker*>(self)->QXYLegendMarker::childEvent(event);
}

bool QXYLegendMarker_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQXYLegendMarker* self_cast = dynamic_cast<MiqtVirtualQXYLegendMarker*>( (QXYLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QXYLegendMarker_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQXYLegendMarker*>(self)->QXYLegendMarker::customEvent(event);
}

bool QXYLegendMarker_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQXYLegendMarker* self_cast = dynamic_cast<MiqtVirtualQXYLegendMarker*>( (QXYLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QXYLegendMarker_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQXYLegendMarker*>(self)->QXYLegendMarker::connectNotify(*signal);
}

bool QXYLegendMarker_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQXYLegendMarker* self_cast = dynamic_cast<MiqtVirtualQXYLegendMarker*>( (QXYLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QXYLegendMarker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQXYLegendMarker*>(self)->QXYLegendMarker::disconnectNotify(*signal);
}

QObject* QXYLegendMarker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQXYLegendMarker* self_cast = dynamic_cast<MiqtVirtualQXYLegendMarker*>( (QXYLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QXYLegendMarker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQXYLegendMarker* self_cast = dynamic_cast<MiqtVirtualQXYLegendMarker*>( (QXYLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QXYLegendMarker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQXYLegendMarker* self_cast = dynamic_cast<MiqtVirtualQXYLegendMarker*>( (QXYLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QXYLegendMarker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQXYLegendMarker* self_cast = dynamic_cast<MiqtVirtualQXYLegendMarker*>( (QXYLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QXYLegendMarker_delete(QXYLegendMarker* self) {
	delete self;
}

