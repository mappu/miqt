#include <QAbstractSeries>
#include <QBrush>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPen>
#include <QScatterSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QXYSeries>
#include <qscatterseries.h>
#include "gen_qscatterseries.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QScatterSeries_colorChanged(intptr_t, QColor*);
void miqt_exec_callback_QScatterSeries_borderColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QScatterSeries_markerShapeChanged(intptr_t, int);
void miqt_exec_callback_QScatterSeries_markerSizeChanged(intptr_t, double);
int miqt_exec_callback_QScatterSeries_type(const QScatterSeries*, intptr_t);
void miqt_exec_callback_QScatterSeries_setPen(QScatterSeries*, intptr_t, QPen*);
void miqt_exec_callback_QScatterSeries_setBrush(QScatterSeries*, intptr_t, QBrush*);
void miqt_exec_callback_QScatterSeries_setColor(QScatterSeries*, intptr_t, QColor*);
QColor* miqt_exec_callback_QScatterSeries_color(const QScatterSeries*, intptr_t);
bool miqt_exec_callback_QScatterSeries_event(QScatterSeries*, intptr_t, QEvent*);
bool miqt_exec_callback_QScatterSeries_eventFilter(QScatterSeries*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QScatterSeries_timerEvent(QScatterSeries*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QScatterSeries_childEvent(QScatterSeries*, intptr_t, QChildEvent*);
void miqt_exec_callback_QScatterSeries_customEvent(QScatterSeries*, intptr_t, QEvent*);
void miqt_exec_callback_QScatterSeries_connectNotify(QScatterSeries*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QScatterSeries_disconnectNotify(QScatterSeries*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQScatterSeries final : public QScatterSeries {
public:

	MiqtVirtualQScatterSeries(): QScatterSeries() {};
	MiqtVirtualQScatterSeries(QObject* parent): QScatterSeries(parent) {};

	virtual ~MiqtVirtualQScatterSeries() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSeries::SeriesType type() const override {
		if (handle__type == 0) {
			return QScatterSeries::type();
		}
		

		int callback_return_value = miqt_exec_callback_QScatterSeries_type(this, handle__type);

		return static_cast<QAbstractSeries::SeriesType>(callback_return_value);
	}

	friend int QScatterSeries_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPen = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPen(const QPen& pen) override {
		if (handle__setPen == 0) {
			QScatterSeries::setPen(pen);
			return;
		}
		
		const QPen& pen_ret = pen;
		// Cast returned reference into pointer
		QPen* sigval1 = const_cast<QPen*>(&pen_ret);

		miqt_exec_callback_QScatterSeries_setPen(this, handle__setPen, sigval1);

		
	}

	friend void QScatterSeries_virtualbase_setPen(void* self, QPen* pen);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setBrush = 0;

	// Subclass to allow providing a Go implementation
	virtual void setBrush(const QBrush& brush) override {
		if (handle__setBrush == 0) {
			QScatterSeries::setBrush(brush);
			return;
		}
		
		const QBrush& brush_ret = brush;
		// Cast returned reference into pointer
		QBrush* sigval1 = const_cast<QBrush*>(&brush_ret);

		miqt_exec_callback_QScatterSeries_setBrush(this, handle__setBrush, sigval1);

		
	}

	friend void QScatterSeries_virtualbase_setBrush(void* self, QBrush* brush);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& color) override {
		if (handle__setColor == 0) {
			QScatterSeries::setColor(color);
			return;
		}
		
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);

		miqt_exec_callback_QScatterSeries_setColor(this, handle__setColor, sigval1);

		
	}

	friend void QScatterSeries_virtualbase_setColor(void* self, QColor* color);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color() const override {
		if (handle__color == 0) {
			return QScatterSeries::color();
		}
		

		QColor* callback_return_value = miqt_exec_callback_QScatterSeries_color(this, handle__color);

		return *callback_return_value;
	}

	friend QColor* QScatterSeries_virtualbase_color(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QScatterSeries::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QScatterSeries_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QScatterSeries_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QScatterSeries::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QScatterSeries_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QScatterSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QScatterSeries::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QScatterSeries_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QScatterSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QScatterSeries::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QScatterSeries_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QScatterSeries_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QScatterSeries::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QScatterSeries_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QScatterSeries_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QScatterSeries::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QScatterSeries_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QScatterSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QScatterSeries::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QScatterSeries_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QScatterSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QScatterSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QScatterSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QScatterSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QScatterSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QScatterSeries* QScatterSeries_new() {
	return new MiqtVirtualQScatterSeries();
}

QScatterSeries* QScatterSeries_new2(QObject* parent) {
	return new MiqtVirtualQScatterSeries(parent);
}

void QScatterSeries_virtbase(QScatterSeries* src, QXYSeries** outptr_QXYSeries) {
	*outptr_QXYSeries = static_cast<QXYSeries*>(src);
}

QMetaObject* QScatterSeries_metaObject(const QScatterSeries* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScatterSeries_metacast(QScatterSeries* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScatterSeries_tr(const char* s) {
	QString _ret = QScatterSeries::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QScatterSeries_type(const QScatterSeries* self) {
	QAbstractSeries::SeriesType _ret = self->type();
	return static_cast<int>(_ret);
}

void QScatterSeries_setPen(QScatterSeries* self, QPen* pen) {
	self->setPen(*pen);
}

void QScatterSeries_setBrush(QScatterSeries* self, QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QScatterSeries_brush(const QScatterSeries* self) {
	return new QBrush(self->brush());
}

void QScatterSeries_setColor(QScatterSeries* self, QColor* color) {
	self->setColor(*color);
}

QColor* QScatterSeries_color(const QScatterSeries* self) {
	return new QColor(self->color());
}

void QScatterSeries_setBorderColor(QScatterSeries* self, QColor* color) {
	self->setBorderColor(*color);
}

QColor* QScatterSeries_borderColor(const QScatterSeries* self) {
	return new QColor(self->borderColor());
}

int QScatterSeries_markerShape(const QScatterSeries* self) {
	QScatterSeries::MarkerShape _ret = self->markerShape();
	return static_cast<int>(_ret);
}

void QScatterSeries_setMarkerShape(QScatterSeries* self, int shape) {
	self->setMarkerShape(static_cast<QScatterSeries::MarkerShape>(shape));
}

double QScatterSeries_markerSize(const QScatterSeries* self) {
	qreal _ret = self->markerSize();
	return static_cast<double>(_ret);
}

void QScatterSeries_setMarkerSize(QScatterSeries* self, double size) {
	self->setMarkerSize(static_cast<qreal>(size));
}

void QScatterSeries_colorChanged(QScatterSeries* self, QColor* color) {
	self->colorChanged(*color);
}

void QScatterSeries_connect_colorChanged(QScatterSeries* self, intptr_t slot) {
	MiqtVirtualQScatterSeries::connect(self, static_cast<void (QScatterSeries::*)(QColor)>(&QScatterSeries::colorChanged), self, [=](QColor color) {
		QColor* sigval1 = new QColor(color);
		miqt_exec_callback_QScatterSeries_colorChanged(slot, sigval1);
	});
}

void QScatterSeries_borderColorChanged(QScatterSeries* self, QColor* color) {
	self->borderColorChanged(*color);
}

void QScatterSeries_connect_borderColorChanged(QScatterSeries* self, intptr_t slot) {
	MiqtVirtualQScatterSeries::connect(self, static_cast<void (QScatterSeries::*)(QColor)>(&QScatterSeries::borderColorChanged), self, [=](QColor color) {
		QColor* sigval1 = new QColor(color);
		miqt_exec_callback_QScatterSeries_borderColorChanged(slot, sigval1);
	});
}

void QScatterSeries_markerShapeChanged(QScatterSeries* self, int shape) {
	self->markerShapeChanged(static_cast<QScatterSeries::MarkerShape>(shape));
}

void QScatterSeries_connect_markerShapeChanged(QScatterSeries* self, intptr_t slot) {
	MiqtVirtualQScatterSeries::connect(self, static_cast<void (QScatterSeries::*)(QScatterSeries::MarkerShape)>(&QScatterSeries::markerShapeChanged), self, [=](QScatterSeries::MarkerShape shape) {
		QScatterSeries::MarkerShape shape_ret = shape;
		int sigval1 = static_cast<int>(shape_ret);
		miqt_exec_callback_QScatterSeries_markerShapeChanged(slot, sigval1);
	});
}

void QScatterSeries_markerSizeChanged(QScatterSeries* self, double size) {
	self->markerSizeChanged(static_cast<qreal>(size));
}

void QScatterSeries_connect_markerSizeChanged(QScatterSeries* self, intptr_t slot) {
	MiqtVirtualQScatterSeries::connect(self, static_cast<void (QScatterSeries::*)(qreal)>(&QScatterSeries::markerSizeChanged), self, [=](qreal size) {
		qreal size_ret = size;
		double sigval1 = static_cast<double>(size_ret);
		miqt_exec_callback_QScatterSeries_markerSizeChanged(slot, sigval1);
	});
}

struct miqt_string QScatterSeries_tr2(const char* s, const char* c) {
	QString _ret = QScatterSeries::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScatterSeries_tr3(const char* s, const char* c, int n) {
	QString _ret = QScatterSeries::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScatterSeries_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QScatterSeries_virtualbase_type(const void* self) {

	MiqtVirtualQScatterSeries::SeriesType _ret = ( (const MiqtVirtualQScatterSeries*)(self) )->QScatterSeries::type();
	return static_cast<int>(_ret);

}

bool QScatterSeries_override_virtual_setPen(void* self, intptr_t slot) {
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPen = slot;
	return true;
}

void QScatterSeries_virtualbase_setPen(void* self, QPen* pen) {

	( (MiqtVirtualQScatterSeries*)(self) )->QScatterSeries::setPen(*pen);

}

bool QScatterSeries_override_virtual_setBrush(void* self, intptr_t slot) {
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setBrush = slot;
	return true;
}

void QScatterSeries_virtualbase_setBrush(void* self, QBrush* brush) {

	( (MiqtVirtualQScatterSeries*)(self) )->QScatterSeries::setBrush(*brush);

}

bool QScatterSeries_override_virtual_setColor(void* self, intptr_t slot) {
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setColor = slot;
	return true;
}

void QScatterSeries_virtualbase_setColor(void* self, QColor* color) {

	( (MiqtVirtualQScatterSeries*)(self) )->QScatterSeries::setColor(*color);

}

bool QScatterSeries_override_virtual_color(void* self, intptr_t slot) {
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__color = slot;
	return true;
}

QColor* QScatterSeries_virtualbase_color(const void* self) {

	return new QColor(( (const MiqtVirtualQScatterSeries*)(self) )->QScatterSeries::color());

}

bool QScatterSeries_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QScatterSeries_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQScatterSeries*)(self) )->QScatterSeries::event(event);

}

bool QScatterSeries_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QScatterSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQScatterSeries*)(self) )->QScatterSeries::eventFilter(watched, event);

}

bool QScatterSeries_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QScatterSeries_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQScatterSeries*)(self) )->QScatterSeries::timerEvent(event);

}

bool QScatterSeries_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QScatterSeries_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQScatterSeries*)(self) )->QScatterSeries::childEvent(event);

}

bool QScatterSeries_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QScatterSeries_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQScatterSeries*)(self) )->QScatterSeries::customEvent(event);

}

bool QScatterSeries_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QScatterSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQScatterSeries*)(self) )->QScatterSeries::connectNotify(*signal);

}

bool QScatterSeries_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QScatterSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQScatterSeries*)(self) )->QScatterSeries::disconnectNotify(*signal);

}

QObject* QScatterSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QScatterSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QScatterSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QScatterSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QScatterSeries_delete(QScatterSeries* self) {
	delete self;
}

