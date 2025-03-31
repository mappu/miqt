#include <QAbstractItemModel>
#include <QCandlestickModelMapper>
#include <QCandlestickSeries>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qcandlestickmodelmapper.h>
#include "gen_qcandlestickmodelmapper.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCandlestickModelMapper_modelReplaced(intptr_t);
void miqt_exec_callback_QCandlestickModelMapper_seriesReplaced(intptr_t);
int miqt_exec_callback_QCandlestickModelMapper_orientation(const QCandlestickModelMapper*, intptr_t);
bool miqt_exec_callback_QCandlestickModelMapper_event(QCandlestickModelMapper*, intptr_t, QEvent*);
bool miqt_exec_callback_QCandlestickModelMapper_eventFilter(QCandlestickModelMapper*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QCandlestickModelMapper_timerEvent(QCandlestickModelMapper*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QCandlestickModelMapper_childEvent(QCandlestickModelMapper*, intptr_t, QChildEvent*);
void miqt_exec_callback_QCandlestickModelMapper_customEvent(QCandlestickModelMapper*, intptr_t, QEvent*);
void miqt_exec_callback_QCandlestickModelMapper_connectNotify(QCandlestickModelMapper*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QCandlestickModelMapper_disconnectNotify(QCandlestickModelMapper*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQCandlestickModelMapper final : public QCandlestickModelMapper {
public:

	MiqtVirtualQCandlestickModelMapper(): QCandlestickModelMapper() {};
	MiqtVirtualQCandlestickModelMapper(QObject* parent): QCandlestickModelMapper(parent) {};

	virtual ~MiqtVirtualQCandlestickModelMapper() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__orientation = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientation orientation() const override {
		if (handle__orientation == 0) {
			return (Qt::Orientation)(0); // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_QCandlestickModelMapper_orientation(this, handle__orientation);

		return static_cast<Qt::Orientation>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QCandlestickModelMapper::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QCandlestickModelMapper_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QCandlestickModelMapper_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QCandlestickModelMapper::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QCandlestickModelMapper_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QCandlestickModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QCandlestickModelMapper::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QCandlestickModelMapper_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QCandlestickModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QCandlestickModelMapper::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QCandlestickModelMapper_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QCandlestickModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QCandlestickModelMapper::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCandlestickModelMapper_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QCandlestickModelMapper_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QCandlestickModelMapper::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCandlestickModelMapper_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QCandlestickModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QCandlestickModelMapper::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCandlestickModelMapper_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QCandlestickModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QCandlestickModelMapper_protectedbase_setTimestamp(bool* _dynamic_cast_ok, void* self, int timestamp);
	friend int QCandlestickModelMapper_protectedbase_timestamp(bool* _dynamic_cast_ok, const void* self);
	friend void QCandlestickModelMapper_protectedbase_setOpen(bool* _dynamic_cast_ok, void* self, int open);
	friend int QCandlestickModelMapper_protectedbase_open(bool* _dynamic_cast_ok, const void* self);
	friend void QCandlestickModelMapper_protectedbase_setHigh(bool* _dynamic_cast_ok, void* self, int high);
	friend int QCandlestickModelMapper_protectedbase_high(bool* _dynamic_cast_ok, const void* self);
	friend void QCandlestickModelMapper_protectedbase_setLow(bool* _dynamic_cast_ok, void* self, int low);
	friend int QCandlestickModelMapper_protectedbase_low(bool* _dynamic_cast_ok, const void* self);
	friend void QCandlestickModelMapper_protectedbase_setClose(bool* _dynamic_cast_ok, void* self, int close);
	friend int QCandlestickModelMapper_protectedbase_close(bool* _dynamic_cast_ok, const void* self);
	friend void QCandlestickModelMapper_protectedbase_setFirstSetSection(bool* _dynamic_cast_ok, void* self, int firstSetSection);
	friend int QCandlestickModelMapper_protectedbase_firstSetSection(bool* _dynamic_cast_ok, const void* self);
	friend void QCandlestickModelMapper_protectedbase_setLastSetSection(bool* _dynamic_cast_ok, void* self, int lastSetSection);
	friend int QCandlestickModelMapper_protectedbase_lastSetSection(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QCandlestickModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QCandlestickModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QCandlestickModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QCandlestickModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QCandlestickModelMapper* QCandlestickModelMapper_new() {
	return new MiqtVirtualQCandlestickModelMapper();
}

QCandlestickModelMapper* QCandlestickModelMapper_new2(QObject* parent) {
	return new MiqtVirtualQCandlestickModelMapper(parent);
}

void QCandlestickModelMapper_virtbase(QCandlestickModelMapper* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QCandlestickModelMapper_metaObject(const QCandlestickModelMapper* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCandlestickModelMapper_metacast(QCandlestickModelMapper* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCandlestickModelMapper_tr(const char* s) {
	QString _ret = QCandlestickModelMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCandlestickModelMapper_setModel(QCandlestickModelMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QAbstractItemModel* QCandlestickModelMapper_model(const QCandlestickModelMapper* self) {
	return self->model();
}

void QCandlestickModelMapper_setSeries(QCandlestickModelMapper* self, QCandlestickSeries* series) {
	self->setSeries(series);
}

QCandlestickSeries* QCandlestickModelMapper_series(const QCandlestickModelMapper* self) {
	return self->series();
}

int QCandlestickModelMapper_orientation(const QCandlestickModelMapper* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QCandlestickModelMapper_modelReplaced(QCandlestickModelMapper* self) {
	self->modelReplaced();
}

void QCandlestickModelMapper_connect_modelReplaced(QCandlestickModelMapper* self, intptr_t slot) {
	MiqtVirtualQCandlestickModelMapper::connect(self, static_cast<void (QCandlestickModelMapper::*)()>(&QCandlestickModelMapper::modelReplaced), self, [=]() {
		miqt_exec_callback_QCandlestickModelMapper_modelReplaced(slot);
	});
}

void QCandlestickModelMapper_seriesReplaced(QCandlestickModelMapper* self) {
	self->seriesReplaced();
}

void QCandlestickModelMapper_connect_seriesReplaced(QCandlestickModelMapper* self, intptr_t slot) {
	MiqtVirtualQCandlestickModelMapper::connect(self, static_cast<void (QCandlestickModelMapper::*)()>(&QCandlestickModelMapper::seriesReplaced), self, [=]() {
		miqt_exec_callback_QCandlestickModelMapper_seriesReplaced(slot);
	});
}

struct miqt_string QCandlestickModelMapper_tr2(const char* s, const char* c) {
	QString _ret = QCandlestickModelMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCandlestickModelMapper_tr3(const char* s, const char* c, int n) {
	QString _ret = QCandlestickModelMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCandlestickModelMapper_override_virtual_orientation(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__orientation = slot;
	return true;
}

bool QCandlestickModelMapper_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QCandlestickModelMapper_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQCandlestickModelMapper*)(self) )->QCandlestickModelMapper::event(event);

}

bool QCandlestickModelMapper_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QCandlestickModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQCandlestickModelMapper*)(self) )->QCandlestickModelMapper::eventFilter(watched, event);

}

bool QCandlestickModelMapper_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QCandlestickModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQCandlestickModelMapper*)(self) )->QCandlestickModelMapper::timerEvent(event);

}

bool QCandlestickModelMapper_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QCandlestickModelMapper_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQCandlestickModelMapper*)(self) )->QCandlestickModelMapper::childEvent(event);

}

bool QCandlestickModelMapper_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QCandlestickModelMapper_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQCandlestickModelMapper*)(self) )->QCandlestickModelMapper::customEvent(event);

}

bool QCandlestickModelMapper_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QCandlestickModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQCandlestickModelMapper*)(self) )->QCandlestickModelMapper::connectNotify(*signal);

}

bool QCandlestickModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QCandlestickModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQCandlestickModelMapper*)(self) )->QCandlestickModelMapper::disconnectNotify(*signal);

}

void QCandlestickModelMapper_protectedbase_setTimestamp(bool* _dynamic_cast_ok, void* self, int timestamp) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setTimestamp(static_cast<int>(timestamp));

}

int QCandlestickModelMapper_protectedbase_timestamp(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->timestamp();

}

void QCandlestickModelMapper_protectedbase_setOpen(bool* _dynamic_cast_ok, void* self, int open) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOpen(static_cast<int>(open));

}

int QCandlestickModelMapper_protectedbase_open(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->open();

}

void QCandlestickModelMapper_protectedbase_setHigh(bool* _dynamic_cast_ok, void* self, int high) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setHigh(static_cast<int>(high));

}

int QCandlestickModelMapper_protectedbase_high(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->high();

}

void QCandlestickModelMapper_protectedbase_setLow(bool* _dynamic_cast_ok, void* self, int low) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setLow(static_cast<int>(low));

}

int QCandlestickModelMapper_protectedbase_low(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->low();

}

void QCandlestickModelMapper_protectedbase_setClose(bool* _dynamic_cast_ok, void* self, int close) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setClose(static_cast<int>(close));

}

int QCandlestickModelMapper_protectedbase_close(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->close();

}

void QCandlestickModelMapper_protectedbase_setFirstSetSection(bool* _dynamic_cast_ok, void* self, int firstSetSection) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setFirstSetSection(static_cast<int>(firstSetSection));

}

int QCandlestickModelMapper_protectedbase_firstSetSection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->firstSetSection();

}

void QCandlestickModelMapper_protectedbase_setLastSetSection(bool* _dynamic_cast_ok, void* self, int lastSetSection) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setLastSetSection(static_cast<int>(lastSetSection));

}

int QCandlestickModelMapper_protectedbase_lastSetSection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->lastSetSection();

}

QObject* QCandlestickModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QCandlestickModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QCandlestickModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QCandlestickModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQCandlestickModelMapper* self_cast = dynamic_cast<MiqtVirtualQCandlestickModelMapper*>( (QCandlestickModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QCandlestickModelMapper_delete(QCandlestickModelMapper* self) {
	delete self;
}

