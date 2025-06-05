#include <QCandlestickModelMapper>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVCandlestickModelMapper>
#include <qvcandlestickmodelmapper.h>
#include "gen_qvcandlestickmodelmapper.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QVCandlestickModelMapper_timestampRowChanged(intptr_t);
void miqt_exec_callback_QVCandlestickModelMapper_openRowChanged(intptr_t);
void miqt_exec_callback_QVCandlestickModelMapper_highRowChanged(intptr_t);
void miqt_exec_callback_QVCandlestickModelMapper_lowRowChanged(intptr_t);
void miqt_exec_callback_QVCandlestickModelMapper_closeRowChanged(intptr_t);
void miqt_exec_callback_QVCandlestickModelMapper_firstSetColumnChanged(intptr_t);
void miqt_exec_callback_QVCandlestickModelMapper_lastSetColumnChanged(intptr_t);
int miqt_exec_callback_QVCandlestickModelMapper_orientation(const QVCandlestickModelMapper*, intptr_t);
bool miqt_exec_callback_QVCandlestickModelMapper_event(QVCandlestickModelMapper*, intptr_t, QEvent*);
bool miqt_exec_callback_QVCandlestickModelMapper_eventFilter(QVCandlestickModelMapper*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QVCandlestickModelMapper_timerEvent(QVCandlestickModelMapper*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QVCandlestickModelMapper_childEvent(QVCandlestickModelMapper*, intptr_t, QChildEvent*);
void miqt_exec_callback_QVCandlestickModelMapper_customEvent(QVCandlestickModelMapper*, intptr_t, QEvent*);
void miqt_exec_callback_QVCandlestickModelMapper_connectNotify(QVCandlestickModelMapper*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QVCandlestickModelMapper_disconnectNotify(QVCandlestickModelMapper*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQVCandlestickModelMapper final : public QVCandlestickModelMapper {
public:

	MiqtVirtualQVCandlestickModelMapper(): QVCandlestickModelMapper() {}
	MiqtVirtualQVCandlestickModelMapper(QObject* parent): QVCandlestickModelMapper(parent) {}

	virtual ~MiqtVirtualQVCandlestickModelMapper() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__orientation = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientation orientation() const override {
		if (handle__orientation == 0) {
			return QVCandlestickModelMapper::orientation();
		}

		int callback_return_value = miqt_exec_callback_QVCandlestickModelMapper_orientation(this, handle__orientation);
		return static_cast<Qt::Orientation>(callback_return_value);
	}

	friend int QVCandlestickModelMapper_virtualbase_orientation(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QVCandlestickModelMapper::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QVCandlestickModelMapper_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QVCandlestickModelMapper_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QVCandlestickModelMapper::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QVCandlestickModelMapper_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QVCandlestickModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QVCandlestickModelMapper::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QVCandlestickModelMapper_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QVCandlestickModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QVCandlestickModelMapper::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QVCandlestickModelMapper_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QVCandlestickModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QVCandlestickModelMapper::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QVCandlestickModelMapper_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QVCandlestickModelMapper_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QVCandlestickModelMapper::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QVCandlestickModelMapper_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QVCandlestickModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QVCandlestickModelMapper::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QVCandlestickModelMapper_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QVCandlestickModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QVCandlestickModelMapper_protectedbase_setTimestamp(bool* _dynamic_cast_ok, void* self, int timestamp);
	friend int QVCandlestickModelMapper_protectedbase_timestamp(bool* _dynamic_cast_ok, const void* self);
	friend void QVCandlestickModelMapper_protectedbase_setOpen(bool* _dynamic_cast_ok, void* self, int open);
	friend int QVCandlestickModelMapper_protectedbase_open(bool* _dynamic_cast_ok, const void* self);
	friend void QVCandlestickModelMapper_protectedbase_setHigh(bool* _dynamic_cast_ok, void* self, int high);
	friend int QVCandlestickModelMapper_protectedbase_high(bool* _dynamic_cast_ok, const void* self);
	friend void QVCandlestickModelMapper_protectedbase_setLow(bool* _dynamic_cast_ok, void* self, int low);
	friend int QVCandlestickModelMapper_protectedbase_low(bool* _dynamic_cast_ok, const void* self);
	friend void QVCandlestickModelMapper_protectedbase_setClose(bool* _dynamic_cast_ok, void* self, int close);
	friend int QVCandlestickModelMapper_protectedbase_close(bool* _dynamic_cast_ok, const void* self);
	friend void QVCandlestickModelMapper_protectedbase_setFirstSetSection(bool* _dynamic_cast_ok, void* self, int firstSetSection);
	friend int QVCandlestickModelMapper_protectedbase_firstSetSection(bool* _dynamic_cast_ok, const void* self);
	friend void QVCandlestickModelMapper_protectedbase_setLastSetSection(bool* _dynamic_cast_ok, void* self, int lastSetSection);
	friend int QVCandlestickModelMapper_protectedbase_lastSetSection(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QVCandlestickModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QVCandlestickModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QVCandlestickModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QVCandlestickModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QVCandlestickModelMapper* QVCandlestickModelMapper_new() {
	return new (std::nothrow) MiqtVirtualQVCandlestickModelMapper();
}

QVCandlestickModelMapper* QVCandlestickModelMapper_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQVCandlestickModelMapper(parent);
}

void QVCandlestickModelMapper_virtbase(QVCandlestickModelMapper* src, QCandlestickModelMapper** outptr_QCandlestickModelMapper) {
	*outptr_QCandlestickModelMapper = static_cast<QCandlestickModelMapper*>(src);
}

QMetaObject* QVCandlestickModelMapper_metaObject(const QVCandlestickModelMapper* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVCandlestickModelMapper_metacast(QVCandlestickModelMapper* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVCandlestickModelMapper_tr(const char* s) {
	QString _ret = QVCandlestickModelMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QVCandlestickModelMapper_orientation(const QVCandlestickModelMapper* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QVCandlestickModelMapper_setTimestampRow(QVCandlestickModelMapper* self, int timestampRow) {
	self->setTimestampRow(static_cast<int>(timestampRow));
}

int QVCandlestickModelMapper_timestampRow(const QVCandlestickModelMapper* self) {
	return self->timestampRow();
}

void QVCandlestickModelMapper_setOpenRow(QVCandlestickModelMapper* self, int openRow) {
	self->setOpenRow(static_cast<int>(openRow));
}

int QVCandlestickModelMapper_openRow(const QVCandlestickModelMapper* self) {
	return self->openRow();
}

void QVCandlestickModelMapper_setHighRow(QVCandlestickModelMapper* self, int highRow) {
	self->setHighRow(static_cast<int>(highRow));
}

int QVCandlestickModelMapper_highRow(const QVCandlestickModelMapper* self) {
	return self->highRow();
}

void QVCandlestickModelMapper_setLowRow(QVCandlestickModelMapper* self, int lowRow) {
	self->setLowRow(static_cast<int>(lowRow));
}

int QVCandlestickModelMapper_lowRow(const QVCandlestickModelMapper* self) {
	return self->lowRow();
}

void QVCandlestickModelMapper_setCloseRow(QVCandlestickModelMapper* self, int closeRow) {
	self->setCloseRow(static_cast<int>(closeRow));
}

int QVCandlestickModelMapper_closeRow(const QVCandlestickModelMapper* self) {
	return self->closeRow();
}

void QVCandlestickModelMapper_setFirstSetColumn(QVCandlestickModelMapper* self, int firstSetColumn) {
	self->setFirstSetColumn(static_cast<int>(firstSetColumn));
}

int QVCandlestickModelMapper_firstSetColumn(const QVCandlestickModelMapper* self) {
	return self->firstSetColumn();
}

void QVCandlestickModelMapper_setLastSetColumn(QVCandlestickModelMapper* self, int lastSetColumn) {
	self->setLastSetColumn(static_cast<int>(lastSetColumn));
}

int QVCandlestickModelMapper_lastSetColumn(const QVCandlestickModelMapper* self) {
	return self->lastSetColumn();
}

void QVCandlestickModelMapper_timestampRowChanged(QVCandlestickModelMapper* self) {
	self->timestampRowChanged();
}

void QVCandlestickModelMapper_connect_timestampRowChanged(QVCandlestickModelMapper* self, intptr_t slot) {
	QVCandlestickModelMapper::connect(self, static_cast<void (QVCandlestickModelMapper::*)()>(&QVCandlestickModelMapper::timestampRowChanged), self, [=]() {
		miqt_exec_callback_QVCandlestickModelMapper_timestampRowChanged(slot);
	});
}

void QVCandlestickModelMapper_openRowChanged(QVCandlestickModelMapper* self) {
	self->openRowChanged();
}

void QVCandlestickModelMapper_connect_openRowChanged(QVCandlestickModelMapper* self, intptr_t slot) {
	QVCandlestickModelMapper::connect(self, static_cast<void (QVCandlestickModelMapper::*)()>(&QVCandlestickModelMapper::openRowChanged), self, [=]() {
		miqt_exec_callback_QVCandlestickModelMapper_openRowChanged(slot);
	});
}

void QVCandlestickModelMapper_highRowChanged(QVCandlestickModelMapper* self) {
	self->highRowChanged();
}

void QVCandlestickModelMapper_connect_highRowChanged(QVCandlestickModelMapper* self, intptr_t slot) {
	QVCandlestickModelMapper::connect(self, static_cast<void (QVCandlestickModelMapper::*)()>(&QVCandlestickModelMapper::highRowChanged), self, [=]() {
		miqt_exec_callback_QVCandlestickModelMapper_highRowChanged(slot);
	});
}

void QVCandlestickModelMapper_lowRowChanged(QVCandlestickModelMapper* self) {
	self->lowRowChanged();
}

void QVCandlestickModelMapper_connect_lowRowChanged(QVCandlestickModelMapper* self, intptr_t slot) {
	QVCandlestickModelMapper::connect(self, static_cast<void (QVCandlestickModelMapper::*)()>(&QVCandlestickModelMapper::lowRowChanged), self, [=]() {
		miqt_exec_callback_QVCandlestickModelMapper_lowRowChanged(slot);
	});
}

void QVCandlestickModelMapper_closeRowChanged(QVCandlestickModelMapper* self) {
	self->closeRowChanged();
}

void QVCandlestickModelMapper_connect_closeRowChanged(QVCandlestickModelMapper* self, intptr_t slot) {
	QVCandlestickModelMapper::connect(self, static_cast<void (QVCandlestickModelMapper::*)()>(&QVCandlestickModelMapper::closeRowChanged), self, [=]() {
		miqt_exec_callback_QVCandlestickModelMapper_closeRowChanged(slot);
	});
}

void QVCandlestickModelMapper_firstSetColumnChanged(QVCandlestickModelMapper* self) {
	self->firstSetColumnChanged();
}

void QVCandlestickModelMapper_connect_firstSetColumnChanged(QVCandlestickModelMapper* self, intptr_t slot) {
	QVCandlestickModelMapper::connect(self, static_cast<void (QVCandlestickModelMapper::*)()>(&QVCandlestickModelMapper::firstSetColumnChanged), self, [=]() {
		miqt_exec_callback_QVCandlestickModelMapper_firstSetColumnChanged(slot);
	});
}

void QVCandlestickModelMapper_lastSetColumnChanged(QVCandlestickModelMapper* self) {
	self->lastSetColumnChanged();
}

void QVCandlestickModelMapper_connect_lastSetColumnChanged(QVCandlestickModelMapper* self, intptr_t slot) {
	QVCandlestickModelMapper::connect(self, static_cast<void (QVCandlestickModelMapper::*)()>(&QVCandlestickModelMapper::lastSetColumnChanged), self, [=]() {
		miqt_exec_callback_QVCandlestickModelMapper_lastSetColumnChanged(slot);
	});
}

struct miqt_string QVCandlestickModelMapper_tr2(const char* s, const char* c) {
	QString _ret = QVCandlestickModelMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVCandlestickModelMapper_tr3(const char* s, const char* c, int n) {
	QString _ret = QVCandlestickModelMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QVCandlestickModelMapper_override_virtual_orientation(void* self, intptr_t slot) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__orientation = slot;
	return true;
}

int QVCandlestickModelMapper_virtualbase_orientation(const void* self) {
	Qt::Orientation _ret = static_cast<const MiqtVirtualQVCandlestickModelMapper*>(self)->QVCandlestickModelMapper::orientation();
	return static_cast<int>(_ret);
}

bool QVCandlestickModelMapper_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QVCandlestickModelMapper_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQVCandlestickModelMapper*>(self)->QVCandlestickModelMapper::event(event);
}

bool QVCandlestickModelMapper_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QVCandlestickModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQVCandlestickModelMapper*>(self)->QVCandlestickModelMapper::eventFilter(watched, event);
}

bool QVCandlestickModelMapper_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QVCandlestickModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQVCandlestickModelMapper*>(self)->QVCandlestickModelMapper::timerEvent(event);
}

bool QVCandlestickModelMapper_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QVCandlestickModelMapper_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQVCandlestickModelMapper*>(self)->QVCandlestickModelMapper::childEvent(event);
}

bool QVCandlestickModelMapper_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QVCandlestickModelMapper_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQVCandlestickModelMapper*>(self)->QVCandlestickModelMapper::customEvent(event);
}

bool QVCandlestickModelMapper_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QVCandlestickModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQVCandlestickModelMapper*>(self)->QVCandlestickModelMapper::connectNotify(*signal);
}

bool QVCandlestickModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QVCandlestickModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQVCandlestickModelMapper*>(self)->QVCandlestickModelMapper::disconnectNotify(*signal);
}

void QVCandlestickModelMapper_protectedbase_setTimestamp(bool* _dynamic_cast_ok, void* self, int timestamp) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setTimestamp(static_cast<int>(timestamp));
}

int QVCandlestickModelMapper_protectedbase_timestamp(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->timestamp();
}

void QVCandlestickModelMapper_protectedbase_setOpen(bool* _dynamic_cast_ok, void* self, int open) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOpen(static_cast<int>(open));
}

int QVCandlestickModelMapper_protectedbase_open(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->open();
}

void QVCandlestickModelMapper_protectedbase_setHigh(bool* _dynamic_cast_ok, void* self, int high) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setHigh(static_cast<int>(high));
}

int QVCandlestickModelMapper_protectedbase_high(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->high();
}

void QVCandlestickModelMapper_protectedbase_setLow(bool* _dynamic_cast_ok, void* self, int low) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setLow(static_cast<int>(low));
}

int QVCandlestickModelMapper_protectedbase_low(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->low();
}

void QVCandlestickModelMapper_protectedbase_setClose(bool* _dynamic_cast_ok, void* self, int close) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setClose(static_cast<int>(close));
}

int QVCandlestickModelMapper_protectedbase_close(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->close();
}

void QVCandlestickModelMapper_protectedbase_setFirstSetSection(bool* _dynamic_cast_ok, void* self, int firstSetSection) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setFirstSetSection(static_cast<int>(firstSetSection));
}

int QVCandlestickModelMapper_protectedbase_firstSetSection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->firstSetSection();
}

void QVCandlestickModelMapper_protectedbase_setLastSetSection(bool* _dynamic_cast_ok, void* self, int lastSetSection) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setLastSetSection(static_cast<int>(lastSetSection));
}

int QVCandlestickModelMapper_protectedbase_lastSetSection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->lastSetSection();
}

QObject* QVCandlestickModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QVCandlestickModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QVCandlestickModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QVCandlestickModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQVCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQVCandlestickModelMapper*>( (QVCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QVCandlestickModelMapper_delete(QVCandlestickModelMapper* self) {
	delete self;
}

