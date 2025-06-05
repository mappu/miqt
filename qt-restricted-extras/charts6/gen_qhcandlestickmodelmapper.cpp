#include <QCandlestickModelMapper>
#include <QChildEvent>
#include <QEvent>
#include <QHCandlestickModelMapper>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qhcandlestickmodelmapper.h>
#include "gen_qhcandlestickmodelmapper.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QHCandlestickModelMapper_timestampColumnChanged(intptr_t);
void miqt_exec_callback_QHCandlestickModelMapper_openColumnChanged(intptr_t);
void miqt_exec_callback_QHCandlestickModelMapper_highColumnChanged(intptr_t);
void miqt_exec_callback_QHCandlestickModelMapper_lowColumnChanged(intptr_t);
void miqt_exec_callback_QHCandlestickModelMapper_closeColumnChanged(intptr_t);
void miqt_exec_callback_QHCandlestickModelMapper_firstSetRowChanged(intptr_t);
void miqt_exec_callback_QHCandlestickModelMapper_lastSetRowChanged(intptr_t);
int miqt_exec_callback_QHCandlestickModelMapper_orientation(const QHCandlestickModelMapper*, intptr_t);
bool miqt_exec_callback_QHCandlestickModelMapper_event(QHCandlestickModelMapper*, intptr_t, QEvent*);
bool miqt_exec_callback_QHCandlestickModelMapper_eventFilter(QHCandlestickModelMapper*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QHCandlestickModelMapper_timerEvent(QHCandlestickModelMapper*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QHCandlestickModelMapper_childEvent(QHCandlestickModelMapper*, intptr_t, QChildEvent*);
void miqt_exec_callback_QHCandlestickModelMapper_customEvent(QHCandlestickModelMapper*, intptr_t, QEvent*);
void miqt_exec_callback_QHCandlestickModelMapper_connectNotify(QHCandlestickModelMapper*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QHCandlestickModelMapper_disconnectNotify(QHCandlestickModelMapper*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQHCandlestickModelMapper final : public QHCandlestickModelMapper {
public:

	MiqtVirtualQHCandlestickModelMapper(): QHCandlestickModelMapper() {}
	MiqtVirtualQHCandlestickModelMapper(QObject* parent): QHCandlestickModelMapper(parent) {}

	virtual ~MiqtVirtualQHCandlestickModelMapper() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__orientation = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientation orientation() const override {
		if (handle__orientation == 0) {
			return QHCandlestickModelMapper::orientation();
		}

		int callback_return_value = miqt_exec_callback_QHCandlestickModelMapper_orientation(this, handle__orientation);
		return static_cast<Qt::Orientation>(callback_return_value);
	}

	friend int QHCandlestickModelMapper_virtualbase_orientation(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QHCandlestickModelMapper::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QHCandlestickModelMapper_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QHCandlestickModelMapper_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QHCandlestickModelMapper::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QHCandlestickModelMapper_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QHCandlestickModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QHCandlestickModelMapper::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QHCandlestickModelMapper_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QHCandlestickModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QHCandlestickModelMapper::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QHCandlestickModelMapper_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QHCandlestickModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QHCandlestickModelMapper::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QHCandlestickModelMapper_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QHCandlestickModelMapper_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QHCandlestickModelMapper::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QHCandlestickModelMapper_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QHCandlestickModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QHCandlestickModelMapper::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QHCandlestickModelMapper_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QHCandlestickModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QHCandlestickModelMapper_protectedbase_setTimestamp(bool* _dynamic_cast_ok, void* self, int timestamp);
	friend int QHCandlestickModelMapper_protectedbase_timestamp(bool* _dynamic_cast_ok, const void* self);
	friend void QHCandlestickModelMapper_protectedbase_setOpen(bool* _dynamic_cast_ok, void* self, int open);
	friend int QHCandlestickModelMapper_protectedbase_open(bool* _dynamic_cast_ok, const void* self);
	friend void QHCandlestickModelMapper_protectedbase_setHigh(bool* _dynamic_cast_ok, void* self, int high);
	friend int QHCandlestickModelMapper_protectedbase_high(bool* _dynamic_cast_ok, const void* self);
	friend void QHCandlestickModelMapper_protectedbase_setLow(bool* _dynamic_cast_ok, void* self, int low);
	friend int QHCandlestickModelMapper_protectedbase_low(bool* _dynamic_cast_ok, const void* self);
	friend void QHCandlestickModelMapper_protectedbase_setClose(bool* _dynamic_cast_ok, void* self, int close);
	friend int QHCandlestickModelMapper_protectedbase_close(bool* _dynamic_cast_ok, const void* self);
	friend void QHCandlestickModelMapper_protectedbase_setFirstSetSection(bool* _dynamic_cast_ok, void* self, int firstSetSection);
	friend int QHCandlestickModelMapper_protectedbase_firstSetSection(bool* _dynamic_cast_ok, const void* self);
	friend void QHCandlestickModelMapper_protectedbase_setLastSetSection(bool* _dynamic_cast_ok, void* self, int lastSetSection);
	friend int QHCandlestickModelMapper_protectedbase_lastSetSection(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QHCandlestickModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QHCandlestickModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QHCandlestickModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QHCandlestickModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QHCandlestickModelMapper* QHCandlestickModelMapper_new() {
	return new (std::nothrow) MiqtVirtualQHCandlestickModelMapper();
}

QHCandlestickModelMapper* QHCandlestickModelMapper_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQHCandlestickModelMapper(parent);
}

void QHCandlestickModelMapper_virtbase(QHCandlestickModelMapper* src, QCandlestickModelMapper** outptr_QCandlestickModelMapper) {
	*outptr_QCandlestickModelMapper = static_cast<QCandlestickModelMapper*>(src);
}

QMetaObject* QHCandlestickModelMapper_metaObject(const QHCandlestickModelMapper* self) {
	return (QMetaObject*) self->metaObject();
}

void* QHCandlestickModelMapper_metacast(QHCandlestickModelMapper* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QHCandlestickModelMapper_tr(const char* s) {
	QString _ret = QHCandlestickModelMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QHCandlestickModelMapper_orientation(const QHCandlestickModelMapper* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QHCandlestickModelMapper_setTimestampColumn(QHCandlestickModelMapper* self, int timestampColumn) {
	self->setTimestampColumn(static_cast<int>(timestampColumn));
}

int QHCandlestickModelMapper_timestampColumn(const QHCandlestickModelMapper* self) {
	return self->timestampColumn();
}

void QHCandlestickModelMapper_setOpenColumn(QHCandlestickModelMapper* self, int openColumn) {
	self->setOpenColumn(static_cast<int>(openColumn));
}

int QHCandlestickModelMapper_openColumn(const QHCandlestickModelMapper* self) {
	return self->openColumn();
}

void QHCandlestickModelMapper_setHighColumn(QHCandlestickModelMapper* self, int highColumn) {
	self->setHighColumn(static_cast<int>(highColumn));
}

int QHCandlestickModelMapper_highColumn(const QHCandlestickModelMapper* self) {
	return self->highColumn();
}

void QHCandlestickModelMapper_setLowColumn(QHCandlestickModelMapper* self, int lowColumn) {
	self->setLowColumn(static_cast<int>(lowColumn));
}

int QHCandlestickModelMapper_lowColumn(const QHCandlestickModelMapper* self) {
	return self->lowColumn();
}

void QHCandlestickModelMapper_setCloseColumn(QHCandlestickModelMapper* self, int closeColumn) {
	self->setCloseColumn(static_cast<int>(closeColumn));
}

int QHCandlestickModelMapper_closeColumn(const QHCandlestickModelMapper* self) {
	return self->closeColumn();
}

void QHCandlestickModelMapper_setFirstSetRow(QHCandlestickModelMapper* self, int firstSetRow) {
	self->setFirstSetRow(static_cast<int>(firstSetRow));
}

int QHCandlestickModelMapper_firstSetRow(const QHCandlestickModelMapper* self) {
	return self->firstSetRow();
}

void QHCandlestickModelMapper_setLastSetRow(QHCandlestickModelMapper* self, int lastSetRow) {
	self->setLastSetRow(static_cast<int>(lastSetRow));
}

int QHCandlestickModelMapper_lastSetRow(const QHCandlestickModelMapper* self) {
	return self->lastSetRow();
}

void QHCandlestickModelMapper_timestampColumnChanged(QHCandlestickModelMapper* self) {
	self->timestampColumnChanged();
}

void QHCandlestickModelMapper_connect_timestampColumnChanged(QHCandlestickModelMapper* self, intptr_t slot) {
	QHCandlestickModelMapper::connect(self, static_cast<void (QHCandlestickModelMapper::*)()>(&QHCandlestickModelMapper::timestampColumnChanged), self, [=]() {
		miqt_exec_callback_QHCandlestickModelMapper_timestampColumnChanged(slot);
	});
}

void QHCandlestickModelMapper_openColumnChanged(QHCandlestickModelMapper* self) {
	self->openColumnChanged();
}

void QHCandlestickModelMapper_connect_openColumnChanged(QHCandlestickModelMapper* self, intptr_t slot) {
	QHCandlestickModelMapper::connect(self, static_cast<void (QHCandlestickModelMapper::*)()>(&QHCandlestickModelMapper::openColumnChanged), self, [=]() {
		miqt_exec_callback_QHCandlestickModelMapper_openColumnChanged(slot);
	});
}

void QHCandlestickModelMapper_highColumnChanged(QHCandlestickModelMapper* self) {
	self->highColumnChanged();
}

void QHCandlestickModelMapper_connect_highColumnChanged(QHCandlestickModelMapper* self, intptr_t slot) {
	QHCandlestickModelMapper::connect(self, static_cast<void (QHCandlestickModelMapper::*)()>(&QHCandlestickModelMapper::highColumnChanged), self, [=]() {
		miqt_exec_callback_QHCandlestickModelMapper_highColumnChanged(slot);
	});
}

void QHCandlestickModelMapper_lowColumnChanged(QHCandlestickModelMapper* self) {
	self->lowColumnChanged();
}

void QHCandlestickModelMapper_connect_lowColumnChanged(QHCandlestickModelMapper* self, intptr_t slot) {
	QHCandlestickModelMapper::connect(self, static_cast<void (QHCandlestickModelMapper::*)()>(&QHCandlestickModelMapper::lowColumnChanged), self, [=]() {
		miqt_exec_callback_QHCandlestickModelMapper_lowColumnChanged(slot);
	});
}

void QHCandlestickModelMapper_closeColumnChanged(QHCandlestickModelMapper* self) {
	self->closeColumnChanged();
}

void QHCandlestickModelMapper_connect_closeColumnChanged(QHCandlestickModelMapper* self, intptr_t slot) {
	QHCandlestickModelMapper::connect(self, static_cast<void (QHCandlestickModelMapper::*)()>(&QHCandlestickModelMapper::closeColumnChanged), self, [=]() {
		miqt_exec_callback_QHCandlestickModelMapper_closeColumnChanged(slot);
	});
}

void QHCandlestickModelMapper_firstSetRowChanged(QHCandlestickModelMapper* self) {
	self->firstSetRowChanged();
}

void QHCandlestickModelMapper_connect_firstSetRowChanged(QHCandlestickModelMapper* self, intptr_t slot) {
	QHCandlestickModelMapper::connect(self, static_cast<void (QHCandlestickModelMapper::*)()>(&QHCandlestickModelMapper::firstSetRowChanged), self, [=]() {
		miqt_exec_callback_QHCandlestickModelMapper_firstSetRowChanged(slot);
	});
}

void QHCandlestickModelMapper_lastSetRowChanged(QHCandlestickModelMapper* self) {
	self->lastSetRowChanged();
}

void QHCandlestickModelMapper_connect_lastSetRowChanged(QHCandlestickModelMapper* self, intptr_t slot) {
	QHCandlestickModelMapper::connect(self, static_cast<void (QHCandlestickModelMapper::*)()>(&QHCandlestickModelMapper::lastSetRowChanged), self, [=]() {
		miqt_exec_callback_QHCandlestickModelMapper_lastSetRowChanged(slot);
	});
}

struct miqt_string QHCandlestickModelMapper_tr2(const char* s, const char* c) {
	QString _ret = QHCandlestickModelMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHCandlestickModelMapper_tr3(const char* s, const char* c, int n) {
	QString _ret = QHCandlestickModelMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QHCandlestickModelMapper_override_virtual_orientation(void* self, intptr_t slot) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__orientation = slot;
	return true;
}

int QHCandlestickModelMapper_virtualbase_orientation(const void* self) {
	Qt::Orientation _ret = static_cast<const MiqtVirtualQHCandlestickModelMapper*>(self)->QHCandlestickModelMapper::orientation();
	return static_cast<int>(_ret);
}

bool QHCandlestickModelMapper_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QHCandlestickModelMapper_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQHCandlestickModelMapper*>(self)->QHCandlestickModelMapper::event(event);
}

bool QHCandlestickModelMapper_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QHCandlestickModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQHCandlestickModelMapper*>(self)->QHCandlestickModelMapper::eventFilter(watched, event);
}

bool QHCandlestickModelMapper_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QHCandlestickModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQHCandlestickModelMapper*>(self)->QHCandlestickModelMapper::timerEvent(event);
}

bool QHCandlestickModelMapper_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QHCandlestickModelMapper_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQHCandlestickModelMapper*>(self)->QHCandlestickModelMapper::childEvent(event);
}

bool QHCandlestickModelMapper_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QHCandlestickModelMapper_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQHCandlestickModelMapper*>(self)->QHCandlestickModelMapper::customEvent(event);
}

bool QHCandlestickModelMapper_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QHCandlestickModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQHCandlestickModelMapper*>(self)->QHCandlestickModelMapper::connectNotify(*signal);
}

bool QHCandlestickModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QHCandlestickModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQHCandlestickModelMapper*>(self)->QHCandlestickModelMapper::disconnectNotify(*signal);
}

void QHCandlestickModelMapper_protectedbase_setTimestamp(bool* _dynamic_cast_ok, void* self, int timestamp) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setTimestamp(static_cast<int>(timestamp));
}

int QHCandlestickModelMapper_protectedbase_timestamp(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->timestamp();
}

void QHCandlestickModelMapper_protectedbase_setOpen(bool* _dynamic_cast_ok, void* self, int open) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOpen(static_cast<int>(open));
}

int QHCandlestickModelMapper_protectedbase_open(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->open();
}

void QHCandlestickModelMapper_protectedbase_setHigh(bool* _dynamic_cast_ok, void* self, int high) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setHigh(static_cast<int>(high));
}

int QHCandlestickModelMapper_protectedbase_high(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->high();
}

void QHCandlestickModelMapper_protectedbase_setLow(bool* _dynamic_cast_ok, void* self, int low) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setLow(static_cast<int>(low));
}

int QHCandlestickModelMapper_protectedbase_low(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->low();
}

void QHCandlestickModelMapper_protectedbase_setClose(bool* _dynamic_cast_ok, void* self, int close) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setClose(static_cast<int>(close));
}

int QHCandlestickModelMapper_protectedbase_close(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->close();
}

void QHCandlestickModelMapper_protectedbase_setFirstSetSection(bool* _dynamic_cast_ok, void* self, int firstSetSection) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setFirstSetSection(static_cast<int>(firstSetSection));
}

int QHCandlestickModelMapper_protectedbase_firstSetSection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->firstSetSection();
}

void QHCandlestickModelMapper_protectedbase_setLastSetSection(bool* _dynamic_cast_ok, void* self, int lastSetSection) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setLastSetSection(static_cast<int>(lastSetSection));
}

int QHCandlestickModelMapper_protectedbase_lastSetSection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->lastSetSection();
}

QObject* QHCandlestickModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QHCandlestickModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QHCandlestickModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QHCandlestickModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQHCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQHCandlestickModelMapper*>( (QHCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QHCandlestickModelMapper_delete(QHCandlestickModelMapper* self) {
	delete self;
}

