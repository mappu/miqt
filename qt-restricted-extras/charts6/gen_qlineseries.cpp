#include <QAbstractSeries>
#include <QBrush>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QLineSeries>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QXYSeries>
#include <qlineseries.h>
#include "gen_qlineseries.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QLineSeries_type(const QLineSeries*, intptr_t);
void miqt_exec_callback_QLineSeries_setPen(QLineSeries*, intptr_t, QPen*);
void miqt_exec_callback_QLineSeries_setBrush(QLineSeries*, intptr_t, QBrush*);
void miqt_exec_callback_QLineSeries_setColor(QLineSeries*, intptr_t, QColor*);
QColor* miqt_exec_callback_QLineSeries_color(const QLineSeries*, intptr_t);
bool miqt_exec_callback_QLineSeries_event(QLineSeries*, intptr_t, QEvent*);
bool miqt_exec_callback_QLineSeries_eventFilter(QLineSeries*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QLineSeries_timerEvent(QLineSeries*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QLineSeries_childEvent(QLineSeries*, intptr_t, QChildEvent*);
void miqt_exec_callback_QLineSeries_customEvent(QLineSeries*, intptr_t, QEvent*);
void miqt_exec_callback_QLineSeries_connectNotify(QLineSeries*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QLineSeries_disconnectNotify(QLineSeries*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQLineSeries final : public QLineSeries {
public:

	MiqtVirtualQLineSeries(): QLineSeries() {};
	MiqtVirtualQLineSeries(QObject* parent): QLineSeries(parent) {};

	virtual ~MiqtVirtualQLineSeries() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSeries::SeriesType type() const override {
		if (handle__type == 0) {
			return QLineSeries::type();
		}
		

		int callback_return_value = miqt_exec_callback_QLineSeries_type(this, handle__type);

		return static_cast<QAbstractSeries::SeriesType>(callback_return_value);
	}

	friend int QLineSeries_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPen = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPen(const QPen& pen) override {
		if (handle__setPen == 0) {
			QLineSeries::setPen(pen);
			return;
		}
		
		const QPen& pen_ret = pen;
		// Cast returned reference into pointer
		QPen* sigval1 = const_cast<QPen*>(&pen_ret);

		miqt_exec_callback_QLineSeries_setPen(this, handle__setPen, sigval1);

		
	}

	friend void QLineSeries_virtualbase_setPen(void* self, QPen* pen);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setBrush = 0;

	// Subclass to allow providing a Go implementation
	virtual void setBrush(const QBrush& brush) override {
		if (handle__setBrush == 0) {
			QLineSeries::setBrush(brush);
			return;
		}
		
		const QBrush& brush_ret = brush;
		// Cast returned reference into pointer
		QBrush* sigval1 = const_cast<QBrush*>(&brush_ret);

		miqt_exec_callback_QLineSeries_setBrush(this, handle__setBrush, sigval1);

		
	}

	friend void QLineSeries_virtualbase_setBrush(void* self, QBrush* brush);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& color) override {
		if (handle__setColor == 0) {
			QLineSeries::setColor(color);
			return;
		}
		
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);

		miqt_exec_callback_QLineSeries_setColor(this, handle__setColor, sigval1);

		
	}

	friend void QLineSeries_virtualbase_setColor(void* self, QColor* color);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color() const override {
		if (handle__color == 0) {
			return QLineSeries::color();
		}
		

		QColor* callback_return_value = miqt_exec_callback_QLineSeries_color(this, handle__color);

		return *callback_return_value;
	}

	friend QColor* QLineSeries_virtualbase_color(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QLineSeries::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QLineSeries_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QLineSeries_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QLineSeries::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QLineSeries_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QLineSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QLineSeries::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QLineSeries_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QLineSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QLineSeries::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QLineSeries_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QLineSeries_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QLineSeries::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QLineSeries_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QLineSeries_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QLineSeries::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLineSeries_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QLineSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QLineSeries::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLineSeries_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QLineSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QLineSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QLineSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QLineSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QLineSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QLineSeries* QLineSeries_new() {
	return new MiqtVirtualQLineSeries();
}

QLineSeries* QLineSeries_new2(QObject* parent) {
	return new MiqtVirtualQLineSeries(parent);
}

void QLineSeries_virtbase(QLineSeries* src, QXYSeries** outptr_QXYSeries) {
	*outptr_QXYSeries = static_cast<QXYSeries*>(src);
}

QMetaObject* QLineSeries_metaObject(const QLineSeries* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLineSeries_metacast(QLineSeries* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QLineSeries_tr(const char* s) {
	QString _ret = QLineSeries::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QLineSeries_type(const QLineSeries* self) {
	QAbstractSeries::SeriesType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QLineSeries_tr2(const char* s, const char* c) {
	QString _ret = QLineSeries::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLineSeries_tr3(const char* s, const char* c, int n) {
	QString _ret = QLineSeries::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QLineSeries_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQLineSeries* self_cast = dynamic_cast<MiqtVirtualQLineSeries*>( (QLineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QLineSeries_virtualbase_type(const void* self) {

	MiqtVirtualQLineSeries::SeriesType _ret = ( (const MiqtVirtualQLineSeries*)(self) )->QLineSeries::type();
	return static_cast<int>(_ret);

}

bool QLineSeries_override_virtual_setPen(void* self, intptr_t slot) {
	MiqtVirtualQLineSeries* self_cast = dynamic_cast<MiqtVirtualQLineSeries*>( (QLineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPen = slot;
	return true;
}

void QLineSeries_virtualbase_setPen(void* self, QPen* pen) {

	( (MiqtVirtualQLineSeries*)(self) )->QLineSeries::setPen(*pen);

}

bool QLineSeries_override_virtual_setBrush(void* self, intptr_t slot) {
	MiqtVirtualQLineSeries* self_cast = dynamic_cast<MiqtVirtualQLineSeries*>( (QLineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setBrush = slot;
	return true;
}

void QLineSeries_virtualbase_setBrush(void* self, QBrush* brush) {

	( (MiqtVirtualQLineSeries*)(self) )->QLineSeries::setBrush(*brush);

}

bool QLineSeries_override_virtual_setColor(void* self, intptr_t slot) {
	MiqtVirtualQLineSeries* self_cast = dynamic_cast<MiqtVirtualQLineSeries*>( (QLineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setColor = slot;
	return true;
}

void QLineSeries_virtualbase_setColor(void* self, QColor* color) {

	( (MiqtVirtualQLineSeries*)(self) )->QLineSeries::setColor(*color);

}

bool QLineSeries_override_virtual_color(void* self, intptr_t slot) {
	MiqtVirtualQLineSeries* self_cast = dynamic_cast<MiqtVirtualQLineSeries*>( (QLineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__color = slot;
	return true;
}

QColor* QLineSeries_virtualbase_color(const void* self) {

	return new QColor(( (const MiqtVirtualQLineSeries*)(self) )->QLineSeries::color());

}

bool QLineSeries_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQLineSeries* self_cast = dynamic_cast<MiqtVirtualQLineSeries*>( (QLineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QLineSeries_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQLineSeries*)(self) )->QLineSeries::event(event);

}

bool QLineSeries_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQLineSeries* self_cast = dynamic_cast<MiqtVirtualQLineSeries*>( (QLineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QLineSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQLineSeries*)(self) )->QLineSeries::eventFilter(watched, event);

}

bool QLineSeries_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineSeries* self_cast = dynamic_cast<MiqtVirtualQLineSeries*>( (QLineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QLineSeries_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQLineSeries*)(self) )->QLineSeries::timerEvent(event);

}

bool QLineSeries_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineSeries* self_cast = dynamic_cast<MiqtVirtualQLineSeries*>( (QLineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QLineSeries_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQLineSeries*)(self) )->QLineSeries::childEvent(event);

}

bool QLineSeries_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineSeries* self_cast = dynamic_cast<MiqtVirtualQLineSeries*>( (QLineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QLineSeries_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQLineSeries*)(self) )->QLineSeries::customEvent(event);

}

bool QLineSeries_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLineSeries* self_cast = dynamic_cast<MiqtVirtualQLineSeries*>( (QLineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QLineSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQLineSeries*)(self) )->QLineSeries::connectNotify(*signal);

}

bool QLineSeries_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLineSeries* self_cast = dynamic_cast<MiqtVirtualQLineSeries*>( (QLineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QLineSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQLineSeries*)(self) )->QLineSeries::disconnectNotify(*signal);

}

QObject* QLineSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQLineSeries* self_cast = dynamic_cast<MiqtVirtualQLineSeries*>( (QLineSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QLineSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQLineSeries* self_cast = dynamic_cast<MiqtVirtualQLineSeries*>( (QLineSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QLineSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQLineSeries* self_cast = dynamic_cast<MiqtVirtualQLineSeries*>( (QLineSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QLineSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQLineSeries* self_cast = dynamic_cast<MiqtVirtualQLineSeries*>( (QLineSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QLineSeries_delete(QLineSeries* self) {
	delete self;
}

