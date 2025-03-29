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
#include <QSplineSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QXYSeries>
#include <qsplineseries.h>
#include "gen_qsplineseries.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QSplineSeries_type(const QSplineSeries*, intptr_t);
void miqt_exec_callback_QSplineSeries_setPen(QSplineSeries*, intptr_t, QPen*);
void miqt_exec_callback_QSplineSeries_setBrush(QSplineSeries*, intptr_t, QBrush*);
void miqt_exec_callback_QSplineSeries_setColor(QSplineSeries*, intptr_t, QColor*);
QColor* miqt_exec_callback_QSplineSeries_color(const QSplineSeries*, intptr_t);
bool miqt_exec_callback_QSplineSeries_event(QSplineSeries*, intptr_t, QEvent*);
bool miqt_exec_callback_QSplineSeries_eventFilter(QSplineSeries*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSplineSeries_timerEvent(QSplineSeries*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSplineSeries_childEvent(QSplineSeries*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSplineSeries_customEvent(QSplineSeries*, intptr_t, QEvent*);
void miqt_exec_callback_QSplineSeries_connectNotify(QSplineSeries*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSplineSeries_disconnectNotify(QSplineSeries*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSplineSeries final : public QSplineSeries {
public:

	MiqtVirtualQSplineSeries(): QSplineSeries() {};
	MiqtVirtualQSplineSeries(QObject* parent): QSplineSeries(parent) {};

	virtual ~MiqtVirtualQSplineSeries() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSeries::SeriesType type() const override {
		if (handle__type == 0) {
			return QSplineSeries::type();
		}
		

		int callback_return_value = miqt_exec_callback_QSplineSeries_type(this, handle__type);

		return static_cast<QAbstractSeries::SeriesType>(callback_return_value);
	}

	friend int QSplineSeries_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPen = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPen(const QPen& pen) override {
		if (handle__setPen == 0) {
			QSplineSeries::setPen(pen);
			return;
		}
		
		const QPen& pen_ret = pen;
		// Cast returned reference into pointer
		QPen* sigval1 = const_cast<QPen*>(&pen_ret);

		miqt_exec_callback_QSplineSeries_setPen(this, handle__setPen, sigval1);

		
	}

	friend void QSplineSeries_virtualbase_setPen(void* self, QPen* pen);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setBrush = 0;

	// Subclass to allow providing a Go implementation
	virtual void setBrush(const QBrush& brush) override {
		if (handle__setBrush == 0) {
			QSplineSeries::setBrush(brush);
			return;
		}
		
		const QBrush& brush_ret = brush;
		// Cast returned reference into pointer
		QBrush* sigval1 = const_cast<QBrush*>(&brush_ret);

		miqt_exec_callback_QSplineSeries_setBrush(this, handle__setBrush, sigval1);

		
	}

	friend void QSplineSeries_virtualbase_setBrush(void* self, QBrush* brush);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& color) override {
		if (handle__setColor == 0) {
			QSplineSeries::setColor(color);
			return;
		}
		
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);

		miqt_exec_callback_QSplineSeries_setColor(this, handle__setColor, sigval1);

		
	}

	friend void QSplineSeries_virtualbase_setColor(void* self, QColor* color);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color() const override {
		if (handle__color == 0) {
			return QSplineSeries::color();
		}
		

		QColor* callback_return_value = miqt_exec_callback_QSplineSeries_color(this, handle__color);

		return *callback_return_value;
	}

	friend QColor* QSplineSeries_virtualbase_color(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSplineSeries::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSplineSeries_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QSplineSeries_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSplineSeries::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSplineSeries_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QSplineSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSplineSeries::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSplineSeries_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QSplineSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSplineSeries::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSplineSeries_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QSplineSeries_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSplineSeries::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSplineSeries_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QSplineSeries_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSplineSeries::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSplineSeries_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QSplineSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSplineSeries::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSplineSeries_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QSplineSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QSplineSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSplineSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSplineSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSplineSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSplineSeries* QSplineSeries_new() {
	return new MiqtVirtualQSplineSeries();
}

QSplineSeries* QSplineSeries_new2(QObject* parent) {
	return new MiqtVirtualQSplineSeries(parent);
}

void QSplineSeries_virtbase(QSplineSeries* src, QLineSeries** outptr_QLineSeries) {
	*outptr_QLineSeries = static_cast<QLineSeries*>(src);
}

QMetaObject* QSplineSeries_metaObject(const QSplineSeries* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSplineSeries_metacast(QSplineSeries* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSplineSeries_tr(const char* s) {
	QString _ret = QSplineSeries::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QSplineSeries_type(const QSplineSeries* self) {
	QAbstractSeries::SeriesType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QSplineSeries_tr2(const char* s, const char* c) {
	QString _ret = QSplineSeries::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplineSeries_tr3(const char* s, const char* c, int n) {
	QString _ret = QSplineSeries::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSplineSeries_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQSplineSeries* self_cast = dynamic_cast<MiqtVirtualQSplineSeries*>( (QSplineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QSplineSeries_virtualbase_type(const void* self) {

	MiqtVirtualQSplineSeries::SeriesType _ret = ( (const MiqtVirtualQSplineSeries*)(self) )->QSplineSeries::type();
	return static_cast<int>(_ret);

}

bool QSplineSeries_override_virtual_setPen(void* self, intptr_t slot) {
	MiqtVirtualQSplineSeries* self_cast = dynamic_cast<MiqtVirtualQSplineSeries*>( (QSplineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPen = slot;
	return true;
}

void QSplineSeries_virtualbase_setPen(void* self, QPen* pen) {

	( (MiqtVirtualQSplineSeries*)(self) )->QSplineSeries::setPen(*pen);

}

bool QSplineSeries_override_virtual_setBrush(void* self, intptr_t slot) {
	MiqtVirtualQSplineSeries* self_cast = dynamic_cast<MiqtVirtualQSplineSeries*>( (QSplineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setBrush = slot;
	return true;
}

void QSplineSeries_virtualbase_setBrush(void* self, QBrush* brush) {

	( (MiqtVirtualQSplineSeries*)(self) )->QSplineSeries::setBrush(*brush);

}

bool QSplineSeries_override_virtual_setColor(void* self, intptr_t slot) {
	MiqtVirtualQSplineSeries* self_cast = dynamic_cast<MiqtVirtualQSplineSeries*>( (QSplineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setColor = slot;
	return true;
}

void QSplineSeries_virtualbase_setColor(void* self, QColor* color) {

	( (MiqtVirtualQSplineSeries*)(self) )->QSplineSeries::setColor(*color);

}

bool QSplineSeries_override_virtual_color(void* self, intptr_t slot) {
	MiqtVirtualQSplineSeries* self_cast = dynamic_cast<MiqtVirtualQSplineSeries*>( (QSplineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__color = slot;
	return true;
}

QColor* QSplineSeries_virtualbase_color(const void* self) {

	return new QColor(( (const MiqtVirtualQSplineSeries*)(self) )->QSplineSeries::color());

}

bool QSplineSeries_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSplineSeries* self_cast = dynamic_cast<MiqtVirtualQSplineSeries*>( (QSplineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QSplineSeries_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQSplineSeries*)(self) )->QSplineSeries::event(event);

}

bool QSplineSeries_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSplineSeries* self_cast = dynamic_cast<MiqtVirtualQSplineSeries*>( (QSplineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSplineSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQSplineSeries*)(self) )->QSplineSeries::eventFilter(watched, event);

}

bool QSplineSeries_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplineSeries* self_cast = dynamic_cast<MiqtVirtualQSplineSeries*>( (QSplineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QSplineSeries_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQSplineSeries*)(self) )->QSplineSeries::timerEvent(event);

}

bool QSplineSeries_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplineSeries* self_cast = dynamic_cast<MiqtVirtualQSplineSeries*>( (QSplineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QSplineSeries_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQSplineSeries*)(self) )->QSplineSeries::childEvent(event);

}

bool QSplineSeries_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplineSeries* self_cast = dynamic_cast<MiqtVirtualQSplineSeries*>( (QSplineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QSplineSeries_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQSplineSeries*)(self) )->QSplineSeries::customEvent(event);

}

bool QSplineSeries_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSplineSeries* self_cast = dynamic_cast<MiqtVirtualQSplineSeries*>( (QSplineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QSplineSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQSplineSeries*)(self) )->QSplineSeries::connectNotify(*signal);

}

bool QSplineSeries_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSplineSeries* self_cast = dynamic_cast<MiqtVirtualQSplineSeries*>( (QSplineSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSplineSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQSplineSeries*)(self) )->QSplineSeries::disconnectNotify(*signal);

}

QObject* QSplineSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSplineSeries* self_cast = dynamic_cast<MiqtVirtualQSplineSeries*>( (QSplineSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QSplineSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSplineSeries* self_cast = dynamic_cast<MiqtVirtualQSplineSeries*>( (QSplineSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QSplineSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSplineSeries* self_cast = dynamic_cast<MiqtVirtualQSplineSeries*>( (QSplineSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QSplineSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSplineSeries* self_cast = dynamic_cast<MiqtVirtualQSplineSeries*>( (QSplineSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QSplineSeries_delete(QSplineSeries* self) {
	delete self;
}

