#include <QChildEvent>
#include <QEvent>
#include <QGraphicsRotation>
#include <QGraphicsScale>
#include <QGraphicsTransform>
#include <QMatrix4x4>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVector3D>
#include <qgraphicstransform.h>
#include "gen_qgraphicstransform.h"
#include "_cgo_export.h"

class MiqtVirtualQGraphicsTransform : public virtual QGraphicsTransform {
public:

	MiqtVirtualQGraphicsTransform(): QGraphicsTransform() {};
	MiqtVirtualQGraphicsTransform(QObject* parent): QGraphicsTransform(parent) {};

	virtual ~MiqtVirtualQGraphicsTransform() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ApplyTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void applyTo(QMatrix4x4* matrix) const override {
		if (handle__ApplyTo == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QMatrix4x4* sigval1 = matrix;

		miqt_exec_callback_QGraphicsTransform_ApplyTo(const_cast<MiqtVirtualQGraphicsTransform*>(this), handle__ApplyTo, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QGraphicsTransform::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsTransform_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QGraphicsTransform::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QGraphicsTransform::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsTransform_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QGraphicsTransform::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QGraphicsTransform::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTransform_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QGraphicsTransform::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QGraphicsTransform::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTransform_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QGraphicsTransform::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QGraphicsTransform::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTransform_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QGraphicsTransform::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QGraphicsTransform::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsTransform_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QGraphicsTransform::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QGraphicsTransform::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsTransform_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QGraphicsTransform::disconnectNotify(*signal);

	}

};

void QGraphicsTransform_new(QGraphicsTransform** outptr_QGraphicsTransform, QObject** outptr_QObject) {
	MiqtVirtualQGraphicsTransform* ret = new MiqtVirtualQGraphicsTransform();
	*outptr_QGraphicsTransform = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QGraphicsTransform_new2(QObject* parent, QGraphicsTransform** outptr_QGraphicsTransform, QObject** outptr_QObject) {
	MiqtVirtualQGraphicsTransform* ret = new MiqtVirtualQGraphicsTransform(parent);
	*outptr_QGraphicsTransform = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

QMetaObject* QGraphicsTransform_MetaObject(const QGraphicsTransform* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsTransform_Metacast(QGraphicsTransform* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsTransform_Tr(const char* s) {
	QString _ret = QGraphicsTransform::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTransform_TrUtf8(const char* s) {
	QString _ret = QGraphicsTransform::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsTransform_ApplyTo(const QGraphicsTransform* self, QMatrix4x4* matrix) {
	self->applyTo(matrix);
}

struct miqt_string QGraphicsTransform_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsTransform::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTransform_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsTransform::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTransform_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsTransform::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTransform_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsTransform::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsTransform_override_virtual_ApplyTo(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) )->handle__ApplyTo = slot;
}

void QGraphicsTransform_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) )->handle__Event = slot;
}

bool QGraphicsTransform_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsTransform*)(self) )->virtualbase_Event(event);
}

void QGraphicsTransform_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) )->handle__EventFilter = slot;
}

bool QGraphicsTransform_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsTransform*)(self) )->virtualbase_EventFilter(watched, event);
}

void QGraphicsTransform_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) )->handle__TimerEvent = slot;
}

void QGraphicsTransform_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsTransform*)(self) )->virtualbase_TimerEvent(event);
}

void QGraphicsTransform_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) )->handle__ChildEvent = slot;
}

void QGraphicsTransform_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsTransform*)(self) )->virtualbase_ChildEvent(event);
}

void QGraphicsTransform_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) )->handle__CustomEvent = slot;
}

void QGraphicsTransform_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsTransform*)(self) )->virtualbase_CustomEvent(event);
}

void QGraphicsTransform_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) )->handle__ConnectNotify = slot;
}

void QGraphicsTransform_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsTransform*)(self) )->virtualbase_ConnectNotify(signal);
}

void QGraphicsTransform_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) )->handle__DisconnectNotify = slot;
}

void QGraphicsTransform_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsTransform*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QGraphicsTransform_Delete(QGraphicsTransform* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQGraphicsTransform*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQGraphicsScale : public virtual QGraphicsScale {
public:

	MiqtVirtualQGraphicsScale(): QGraphicsScale() {};
	MiqtVirtualQGraphicsScale(QObject* parent): QGraphicsScale(parent) {};

	virtual ~MiqtVirtualQGraphicsScale() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ApplyTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void applyTo(QMatrix4x4* matrix) const override {
		if (handle__ApplyTo == 0) {
			QGraphicsScale::applyTo(matrix);
			return;
		}
		
		QMatrix4x4* sigval1 = matrix;

		miqt_exec_callback_QGraphicsScale_ApplyTo(const_cast<MiqtVirtualQGraphicsScale*>(this), handle__ApplyTo, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ApplyTo(QMatrix4x4* matrix) const {

		QGraphicsScale::applyTo(matrix);

	}

};

void QGraphicsScale_new(QGraphicsScale** outptr_QGraphicsScale, QGraphicsTransform** outptr_QGraphicsTransform, QObject** outptr_QObject) {
	MiqtVirtualQGraphicsScale* ret = new MiqtVirtualQGraphicsScale();
	*outptr_QGraphicsScale = ret;
	*outptr_QGraphicsTransform = static_cast<QGraphicsTransform*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QGraphicsScale_new2(QObject* parent, QGraphicsScale** outptr_QGraphicsScale, QGraphicsTransform** outptr_QGraphicsTransform, QObject** outptr_QObject) {
	MiqtVirtualQGraphicsScale* ret = new MiqtVirtualQGraphicsScale(parent);
	*outptr_QGraphicsScale = ret;
	*outptr_QGraphicsTransform = static_cast<QGraphicsTransform*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

QMetaObject* QGraphicsScale_MetaObject(const QGraphicsScale* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsScale_Metacast(QGraphicsScale* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsScale_Tr(const char* s) {
	QString _ret = QGraphicsScale::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsScale_TrUtf8(const char* s) {
	QString _ret = QGraphicsScale::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVector3D* QGraphicsScale_Origin(const QGraphicsScale* self) {
	return new QVector3D(self->origin());
}

void QGraphicsScale_SetOrigin(QGraphicsScale* self, QVector3D* point) {
	self->setOrigin(*point);
}

double QGraphicsScale_XScale(const QGraphicsScale* self) {
	qreal _ret = self->xScale();
	return static_cast<double>(_ret);
}

void QGraphicsScale_SetXScale(QGraphicsScale* self, double xScale) {
	self->setXScale(static_cast<qreal>(xScale));
}

double QGraphicsScale_YScale(const QGraphicsScale* self) {
	qreal _ret = self->yScale();
	return static_cast<double>(_ret);
}

void QGraphicsScale_SetYScale(QGraphicsScale* self, double yScale) {
	self->setYScale(static_cast<qreal>(yScale));
}

double QGraphicsScale_ZScale(const QGraphicsScale* self) {
	qreal _ret = self->zScale();
	return static_cast<double>(_ret);
}

void QGraphicsScale_SetZScale(QGraphicsScale* self, double zScale) {
	self->setZScale(static_cast<qreal>(zScale));
}

void QGraphicsScale_ApplyTo(const QGraphicsScale* self, QMatrix4x4* matrix) {
	self->applyTo(matrix);
}

void QGraphicsScale_OriginChanged(QGraphicsScale* self) {
	self->originChanged();
}

void QGraphicsScale_connect_OriginChanged(QGraphicsScale* self, intptr_t slot) {
	MiqtVirtualQGraphicsScale::connect(self, static_cast<void (QGraphicsScale::*)()>(&QGraphicsScale::originChanged), self, [=]() {
		miqt_exec_callback_QGraphicsScale_OriginChanged(slot);
	});
}

void QGraphicsScale_XScaleChanged(QGraphicsScale* self) {
	self->xScaleChanged();
}

void QGraphicsScale_connect_XScaleChanged(QGraphicsScale* self, intptr_t slot) {
	MiqtVirtualQGraphicsScale::connect(self, static_cast<void (QGraphicsScale::*)()>(&QGraphicsScale::xScaleChanged), self, [=]() {
		miqt_exec_callback_QGraphicsScale_XScaleChanged(slot);
	});
}

void QGraphicsScale_YScaleChanged(QGraphicsScale* self) {
	self->yScaleChanged();
}

void QGraphicsScale_connect_YScaleChanged(QGraphicsScale* self, intptr_t slot) {
	MiqtVirtualQGraphicsScale::connect(self, static_cast<void (QGraphicsScale::*)()>(&QGraphicsScale::yScaleChanged), self, [=]() {
		miqt_exec_callback_QGraphicsScale_YScaleChanged(slot);
	});
}

void QGraphicsScale_ZScaleChanged(QGraphicsScale* self) {
	self->zScaleChanged();
}

void QGraphicsScale_connect_ZScaleChanged(QGraphicsScale* self, intptr_t slot) {
	MiqtVirtualQGraphicsScale::connect(self, static_cast<void (QGraphicsScale::*)()>(&QGraphicsScale::zScaleChanged), self, [=]() {
		miqt_exec_callback_QGraphicsScale_ZScaleChanged(slot);
	});
}

void QGraphicsScale_ScaleChanged(QGraphicsScale* self) {
	self->scaleChanged();
}

void QGraphicsScale_connect_ScaleChanged(QGraphicsScale* self, intptr_t slot) {
	MiqtVirtualQGraphicsScale::connect(self, static_cast<void (QGraphicsScale::*)()>(&QGraphicsScale::scaleChanged), self, [=]() {
		miqt_exec_callback_QGraphicsScale_ScaleChanged(slot);
	});
}

struct miqt_string QGraphicsScale_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsScale::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsScale_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsScale::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsScale_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsScale::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsScale_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsScale::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsScale_override_virtual_ApplyTo(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsScale*>( (QGraphicsScale*)(self) )->handle__ApplyTo = slot;
}

void QGraphicsScale_virtualbase_ApplyTo(const void* self, QMatrix4x4* matrix) {
	( (const MiqtVirtualQGraphicsScale*)(self) )->virtualbase_ApplyTo(matrix);
}

void QGraphicsScale_Delete(QGraphicsScale* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQGraphicsScale*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQGraphicsRotation : public virtual QGraphicsRotation {
public:

	MiqtVirtualQGraphicsRotation(): QGraphicsRotation() {};
	MiqtVirtualQGraphicsRotation(QObject* parent): QGraphicsRotation(parent) {};

	virtual ~MiqtVirtualQGraphicsRotation() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ApplyTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void applyTo(QMatrix4x4* matrix) const override {
		if (handle__ApplyTo == 0) {
			QGraphicsRotation::applyTo(matrix);
			return;
		}
		
		QMatrix4x4* sigval1 = matrix;

		miqt_exec_callback_QGraphicsRotation_ApplyTo(const_cast<MiqtVirtualQGraphicsRotation*>(this), handle__ApplyTo, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ApplyTo(QMatrix4x4* matrix) const {

		QGraphicsRotation::applyTo(matrix);

	}

};

void QGraphicsRotation_new(QGraphicsRotation** outptr_QGraphicsRotation, QGraphicsTransform** outptr_QGraphicsTransform, QObject** outptr_QObject) {
	MiqtVirtualQGraphicsRotation* ret = new MiqtVirtualQGraphicsRotation();
	*outptr_QGraphicsRotation = ret;
	*outptr_QGraphicsTransform = static_cast<QGraphicsTransform*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QGraphicsRotation_new2(QObject* parent, QGraphicsRotation** outptr_QGraphicsRotation, QGraphicsTransform** outptr_QGraphicsTransform, QObject** outptr_QObject) {
	MiqtVirtualQGraphicsRotation* ret = new MiqtVirtualQGraphicsRotation(parent);
	*outptr_QGraphicsRotation = ret;
	*outptr_QGraphicsTransform = static_cast<QGraphicsTransform*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

QMetaObject* QGraphicsRotation_MetaObject(const QGraphicsRotation* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsRotation_Metacast(QGraphicsRotation* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsRotation_Tr(const char* s) {
	QString _ret = QGraphicsRotation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsRotation_TrUtf8(const char* s) {
	QString _ret = QGraphicsRotation::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVector3D* QGraphicsRotation_Origin(const QGraphicsRotation* self) {
	return new QVector3D(self->origin());
}

void QGraphicsRotation_SetOrigin(QGraphicsRotation* self, QVector3D* point) {
	self->setOrigin(*point);
}

double QGraphicsRotation_Angle(const QGraphicsRotation* self) {
	qreal _ret = self->angle();
	return static_cast<double>(_ret);
}

void QGraphicsRotation_SetAngle(QGraphicsRotation* self, double angle) {
	self->setAngle(static_cast<qreal>(angle));
}

QVector3D* QGraphicsRotation_Axis(const QGraphicsRotation* self) {
	return new QVector3D(self->axis());
}

void QGraphicsRotation_SetAxis(QGraphicsRotation* self, QVector3D* axis) {
	self->setAxis(*axis);
}

void QGraphicsRotation_SetAxisWithAxis(QGraphicsRotation* self, int axis) {
	self->setAxis(static_cast<Qt::Axis>(axis));
}

void QGraphicsRotation_ApplyTo(const QGraphicsRotation* self, QMatrix4x4* matrix) {
	self->applyTo(matrix);
}

void QGraphicsRotation_OriginChanged(QGraphicsRotation* self) {
	self->originChanged();
}

void QGraphicsRotation_connect_OriginChanged(QGraphicsRotation* self, intptr_t slot) {
	MiqtVirtualQGraphicsRotation::connect(self, static_cast<void (QGraphicsRotation::*)()>(&QGraphicsRotation::originChanged), self, [=]() {
		miqt_exec_callback_QGraphicsRotation_OriginChanged(slot);
	});
}

void QGraphicsRotation_AngleChanged(QGraphicsRotation* self) {
	self->angleChanged();
}

void QGraphicsRotation_connect_AngleChanged(QGraphicsRotation* self, intptr_t slot) {
	MiqtVirtualQGraphicsRotation::connect(self, static_cast<void (QGraphicsRotation::*)()>(&QGraphicsRotation::angleChanged), self, [=]() {
		miqt_exec_callback_QGraphicsRotation_AngleChanged(slot);
	});
}

void QGraphicsRotation_AxisChanged(QGraphicsRotation* self) {
	self->axisChanged();
}

void QGraphicsRotation_connect_AxisChanged(QGraphicsRotation* self, intptr_t slot) {
	MiqtVirtualQGraphicsRotation::connect(self, static_cast<void (QGraphicsRotation::*)()>(&QGraphicsRotation::axisChanged), self, [=]() {
		miqt_exec_callback_QGraphicsRotation_AxisChanged(slot);
	});
}

struct miqt_string QGraphicsRotation_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsRotation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsRotation_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsRotation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsRotation_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsRotation::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsRotation_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsRotation::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsRotation_override_virtual_ApplyTo(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsRotation*>( (QGraphicsRotation*)(self) )->handle__ApplyTo = slot;
}

void QGraphicsRotation_virtualbase_ApplyTo(const void* self, QMatrix4x4* matrix) {
	( (const MiqtVirtualQGraphicsRotation*)(self) )->virtualbase_ApplyTo(matrix);
}

void QGraphicsRotation_Delete(QGraphicsRotation* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQGraphicsRotation*>( self );
	} else {
		delete self;
	}
}

