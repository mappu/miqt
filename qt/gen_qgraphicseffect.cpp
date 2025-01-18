#include <QBrush>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QGraphicsBlurEffect>
#include <QGraphicsColorizeEffect>
#include <QGraphicsDropShadowEffect>
#include <QGraphicsEffect>
#include <QGraphicsOpacityEffect>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPointF>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qgraphicseffect.h>
#include "gen_qgraphicseffect.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QGraphicsEffect_EnabledChanged(intptr_t, bool);
QRectF* miqt_exec_callback_QGraphicsEffect_BoundingRectFor(void*, intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsEffect_Draw(void*, intptr_t, QPainter*);
void miqt_exec_callback_QGraphicsEffect_SourceChanged(void*, intptr_t, int);
bool miqt_exec_callback_QGraphicsEffect_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsEffect_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsEffect_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsEffect_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsEffect_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsEffect_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsEffect_DisconnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsColorizeEffect_ColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QGraphicsColorizeEffect_StrengthChanged(intptr_t, double);
void miqt_exec_callback_QGraphicsColorizeEffect_Draw(void*, intptr_t, QPainter*);
QRectF* miqt_exec_callback_QGraphicsColorizeEffect_BoundingRectFor(void*, intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsColorizeEffect_SourceChanged(void*, intptr_t, int);
void miqt_exec_callback_QGraphicsBlurEffect_BlurRadiusChanged(intptr_t, double);
void miqt_exec_callback_QGraphicsBlurEffect_BlurHintsChanged(intptr_t, int);
QRectF* miqt_exec_callback_QGraphicsBlurEffect_BoundingRectFor(void*, intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsBlurEffect_Draw(void*, intptr_t, QPainter*);
void miqt_exec_callback_QGraphicsBlurEffect_SourceChanged(void*, intptr_t, int);
void miqt_exec_callback_QGraphicsDropShadowEffect_OffsetChanged(intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsDropShadowEffect_BlurRadiusChanged(intptr_t, double);
void miqt_exec_callback_QGraphicsDropShadowEffect_ColorChanged(intptr_t, QColor*);
QRectF* miqt_exec_callback_QGraphicsDropShadowEffect_BoundingRectFor(void*, intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsDropShadowEffect_Draw(void*, intptr_t, QPainter*);
void miqt_exec_callback_QGraphicsDropShadowEffect_SourceChanged(void*, intptr_t, int);
void miqt_exec_callback_QGraphicsOpacityEffect_OpacityChanged(intptr_t, double);
void miqt_exec_callback_QGraphicsOpacityEffect_OpacityMaskChanged(intptr_t, QBrush*);
void miqt_exec_callback_QGraphicsOpacityEffect_Draw(void*, intptr_t, QPainter*);
QRectF* miqt_exec_callback_QGraphicsOpacityEffect_BoundingRectFor(void*, intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsOpacityEffect_SourceChanged(void*, intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsEffect final : public QGraphicsEffect {
public:

	MiqtVirtualQGraphicsEffect(): QGraphicsEffect() {};
	MiqtVirtualQGraphicsEffect(QObject* parent): QGraphicsEffect(parent) {};

	virtual ~MiqtVirtualQGraphicsEffect() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRectFor = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRectFor(const QRectF& sourceRect) const override {
		if (handle__BoundingRectFor == 0) {
			return QGraphicsEffect::boundingRectFor(sourceRect);
		}
		
		const QRectF& sourceRect_ret = sourceRect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&sourceRect_ret);

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsEffect_BoundingRectFor(const_cast<MiqtVirtualQGraphicsEffect*>(this), handle__BoundingRectFor, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRectFor(QRectF* sourceRect) const {

		return new QRectF(QGraphicsEffect::boundingRectFor(*sourceRect));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* painter) override {
		if (handle__Draw == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QGraphicsEffect_Draw(this, handle__Draw, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SourceChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void sourceChanged(QGraphicsEffect::ChangeFlags flags) override {
		if (handle__SourceChanged == 0) {
			QGraphicsEffect::sourceChanged(flags);
			return;
		}
		
		QGraphicsEffect::ChangeFlags flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);

		miqt_exec_callback_QGraphicsEffect_SourceChanged(this, handle__SourceChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SourceChanged(int flags) {

		QGraphicsEffect::sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QGraphicsEffect::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsEffect_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QGraphicsEffect::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QGraphicsEffect::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsEffect_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QGraphicsEffect::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QGraphicsEffect::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEffect_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QGraphicsEffect::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QGraphicsEffect::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEffect_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QGraphicsEffect::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QGraphicsEffect::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEffect_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QGraphicsEffect::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QGraphicsEffect::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsEffect_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QGraphicsEffect::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QGraphicsEffect::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsEffect_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QGraphicsEffect::disconnectNotify(*signal);

	}

};

QGraphicsEffect* QGraphicsEffect_new() {
	return new MiqtVirtualQGraphicsEffect();
}

QGraphicsEffect* QGraphicsEffect_new2(QObject* parent) {
	return new MiqtVirtualQGraphicsEffect(parent);
}

void QGraphicsEffect_virtbase(QGraphicsEffect* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QGraphicsEffect_MetaObject(const QGraphicsEffect* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsEffect_Metacast(QGraphicsEffect* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsEffect_Tr(const char* s) {
	QString _ret = QGraphicsEffect::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsEffect_TrUtf8(const char* s) {
	QString _ret = QGraphicsEffect::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QRectF* QGraphicsEffect_BoundingRectFor(const QGraphicsEffect* self, QRectF* sourceRect) {
	return new QRectF(self->boundingRectFor(*sourceRect));
}

QRectF* QGraphicsEffect_BoundingRect(const QGraphicsEffect* self) {
	return new QRectF(self->boundingRect());
}

bool QGraphicsEffect_IsEnabled(const QGraphicsEffect* self) {
	return self->isEnabled();
}

void QGraphicsEffect_SetEnabled(QGraphicsEffect* self, bool enable) {
	self->setEnabled(enable);
}

void QGraphicsEffect_Update(QGraphicsEffect* self) {
	self->update();
}

void QGraphicsEffect_EnabledChanged(QGraphicsEffect* self, bool enabled) {
	self->enabledChanged(enabled);
}

void QGraphicsEffect_connect_EnabledChanged(QGraphicsEffect* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect::connect(self, static_cast<void (QGraphicsEffect::*)(bool)>(&QGraphicsEffect::enabledChanged), self, [=](bool enabled) {
		bool sigval1 = enabled;
		miqt_exec_callback_QGraphicsEffect_EnabledChanged(slot, sigval1);
	});
}

struct miqt_string QGraphicsEffect_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsEffect::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsEffect_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsEffect::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsEffect_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsEffect::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsEffect_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsEffect::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsEffect_override_virtual_BoundingRectFor(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRectFor = slot;
	return true;
}

QRectF* QGraphicsEffect_virtualbase_BoundingRectFor(const void* self, QRectF* sourceRect) {
	return ( (const MiqtVirtualQGraphicsEffect*)(self) )->virtualbase_BoundingRectFor(sourceRect);
}

bool QGraphicsEffect_override_virtual_Draw(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Draw = slot;
	return true;
}

bool QGraphicsEffect_override_virtual_SourceChanged(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SourceChanged = slot;
	return true;
}

void QGraphicsEffect_virtualbase_SourceChanged(void* self, int flags) {
	( (MiqtVirtualQGraphicsEffect*)(self) )->virtualbase_SourceChanged(flags);
}

bool QGraphicsEffect_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QGraphicsEffect_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsEffect*)(self) )->virtualbase_Event(event);
}

bool QGraphicsEffect_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QGraphicsEffect_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsEffect*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QGraphicsEffect_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QGraphicsEffect_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsEffect*)(self) )->virtualbase_TimerEvent(event);
}

bool QGraphicsEffect_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QGraphicsEffect_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsEffect*)(self) )->virtualbase_ChildEvent(event);
}

bool QGraphicsEffect_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QGraphicsEffect_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsEffect*)(self) )->virtualbase_CustomEvent(event);
}

bool QGraphicsEffect_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QGraphicsEffect_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsEffect*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QGraphicsEffect_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QGraphicsEffect_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsEffect*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QGraphicsEffect_Delete(QGraphicsEffect* self) {
	delete self;
}

class MiqtVirtualQGraphicsColorizeEffect final : public QGraphicsColorizeEffect {
public:

	MiqtVirtualQGraphicsColorizeEffect(): QGraphicsColorizeEffect() {};
	MiqtVirtualQGraphicsColorizeEffect(QObject* parent): QGraphicsColorizeEffect(parent) {};

	virtual ~MiqtVirtualQGraphicsColorizeEffect() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* painter) override {
		if (handle__Draw == 0) {
			QGraphicsColorizeEffect::draw(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QGraphicsColorizeEffect_Draw(this, handle__Draw, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Draw(QPainter* painter) {

		QGraphicsColorizeEffect::draw(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRectFor = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRectFor(const QRectF& sourceRect) const override {
		if (handle__BoundingRectFor == 0) {
			return QGraphicsColorizeEffect::boundingRectFor(sourceRect);
		}
		
		const QRectF& sourceRect_ret = sourceRect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&sourceRect_ret);

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsColorizeEffect_BoundingRectFor(const_cast<MiqtVirtualQGraphicsColorizeEffect*>(this), handle__BoundingRectFor, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRectFor(QRectF* sourceRect) const {

		return new QRectF(QGraphicsColorizeEffect::boundingRectFor(*sourceRect));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SourceChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void sourceChanged(QGraphicsEffect::ChangeFlags flags) override {
		if (handle__SourceChanged == 0) {
			QGraphicsColorizeEffect::sourceChanged(flags);
			return;
		}
		
		QGraphicsEffect::ChangeFlags flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);

		miqt_exec_callback_QGraphicsColorizeEffect_SourceChanged(this, handle__SourceChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SourceChanged(int flags) {

		QGraphicsColorizeEffect::sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));

	}

};

QGraphicsColorizeEffect* QGraphicsColorizeEffect_new() {
	return new MiqtVirtualQGraphicsColorizeEffect();
}

QGraphicsColorizeEffect* QGraphicsColorizeEffect_new2(QObject* parent) {
	return new MiqtVirtualQGraphicsColorizeEffect(parent);
}

void QGraphicsColorizeEffect_virtbase(QGraphicsColorizeEffect* src, QGraphicsEffect** outptr_QGraphicsEffect) {
	*outptr_QGraphicsEffect = static_cast<QGraphicsEffect*>(src);
}

QMetaObject* QGraphicsColorizeEffect_MetaObject(const QGraphicsColorizeEffect* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsColorizeEffect_Metacast(QGraphicsColorizeEffect* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsColorizeEffect_Tr(const char* s) {
	QString _ret = QGraphicsColorizeEffect::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsColorizeEffect_TrUtf8(const char* s) {
	QString _ret = QGraphicsColorizeEffect::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QColor* QGraphicsColorizeEffect_Color(const QGraphicsColorizeEffect* self) {
	return new QColor(self->color());
}

double QGraphicsColorizeEffect_Strength(const QGraphicsColorizeEffect* self) {
	qreal _ret = self->strength();
	return static_cast<double>(_ret);
}

void QGraphicsColorizeEffect_SetColor(QGraphicsColorizeEffect* self, QColor* c) {
	self->setColor(*c);
}

void QGraphicsColorizeEffect_SetStrength(QGraphicsColorizeEffect* self, double strength) {
	self->setStrength(static_cast<qreal>(strength));
}

void QGraphicsColorizeEffect_ColorChanged(QGraphicsColorizeEffect* self, QColor* color) {
	self->colorChanged(*color);
}

void QGraphicsColorizeEffect_connect_ColorChanged(QGraphicsColorizeEffect* self, intptr_t slot) {
	MiqtVirtualQGraphicsColorizeEffect::connect(self, static_cast<void (QGraphicsColorizeEffect::*)(const QColor&)>(&QGraphicsColorizeEffect::colorChanged), self, [=](const QColor& color) {
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QGraphicsColorizeEffect_ColorChanged(slot, sigval1);
	});
}

void QGraphicsColorizeEffect_StrengthChanged(QGraphicsColorizeEffect* self, double strength) {
	self->strengthChanged(static_cast<qreal>(strength));
}

void QGraphicsColorizeEffect_connect_StrengthChanged(QGraphicsColorizeEffect* self, intptr_t slot) {
	MiqtVirtualQGraphicsColorizeEffect::connect(self, static_cast<void (QGraphicsColorizeEffect::*)(qreal)>(&QGraphicsColorizeEffect::strengthChanged), self, [=](qreal strength) {
		qreal strength_ret = strength;
		double sigval1 = static_cast<double>(strength_ret);
		miqt_exec_callback_QGraphicsColorizeEffect_StrengthChanged(slot, sigval1);
	});
}

struct miqt_string QGraphicsColorizeEffect_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsColorizeEffect::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsColorizeEffect_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsColorizeEffect::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsColorizeEffect_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsColorizeEffect::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsColorizeEffect_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsColorizeEffect::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsColorizeEffect_override_virtual_Draw(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Draw = slot;
	return true;
}

void QGraphicsColorizeEffect_virtualbase_Draw(void* self, QPainter* painter) {
	( (MiqtVirtualQGraphicsColorizeEffect*)(self) )->virtualbase_Draw(painter);
}

bool QGraphicsColorizeEffect_override_virtual_BoundingRectFor(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRectFor = slot;
	return true;
}

QRectF* QGraphicsColorizeEffect_virtualbase_BoundingRectFor(const void* self, QRectF* sourceRect) {
	return ( (const MiqtVirtualQGraphicsColorizeEffect*)(self) )->virtualbase_BoundingRectFor(sourceRect);
}

bool QGraphicsColorizeEffect_override_virtual_SourceChanged(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SourceChanged = slot;
	return true;
}

void QGraphicsColorizeEffect_virtualbase_SourceChanged(void* self, int flags) {
	( (MiqtVirtualQGraphicsColorizeEffect*)(self) )->virtualbase_SourceChanged(flags);
}

void QGraphicsColorizeEffect_Delete(QGraphicsColorizeEffect* self) {
	delete self;
}

class MiqtVirtualQGraphicsBlurEffect final : public QGraphicsBlurEffect {
public:

	MiqtVirtualQGraphicsBlurEffect(): QGraphicsBlurEffect() {};
	MiqtVirtualQGraphicsBlurEffect(QObject* parent): QGraphicsBlurEffect(parent) {};

	virtual ~MiqtVirtualQGraphicsBlurEffect() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRectFor = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRectFor(const QRectF& rect) const override {
		if (handle__BoundingRectFor == 0) {
			return QGraphicsBlurEffect::boundingRectFor(rect);
		}
		
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsBlurEffect_BoundingRectFor(const_cast<MiqtVirtualQGraphicsBlurEffect*>(this), handle__BoundingRectFor, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRectFor(QRectF* rect) const {

		return new QRectF(QGraphicsBlurEffect::boundingRectFor(*rect));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* painter) override {
		if (handle__Draw == 0) {
			QGraphicsBlurEffect::draw(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QGraphicsBlurEffect_Draw(this, handle__Draw, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Draw(QPainter* painter) {

		QGraphicsBlurEffect::draw(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SourceChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void sourceChanged(QGraphicsEffect::ChangeFlags flags) override {
		if (handle__SourceChanged == 0) {
			QGraphicsBlurEffect::sourceChanged(flags);
			return;
		}
		
		QGraphicsEffect::ChangeFlags flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);

		miqt_exec_callback_QGraphicsBlurEffect_SourceChanged(this, handle__SourceChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SourceChanged(int flags) {

		QGraphicsBlurEffect::sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));

	}

};

QGraphicsBlurEffect* QGraphicsBlurEffect_new() {
	return new MiqtVirtualQGraphicsBlurEffect();
}

QGraphicsBlurEffect* QGraphicsBlurEffect_new2(QObject* parent) {
	return new MiqtVirtualQGraphicsBlurEffect(parent);
}

void QGraphicsBlurEffect_virtbase(QGraphicsBlurEffect* src, QGraphicsEffect** outptr_QGraphicsEffect) {
	*outptr_QGraphicsEffect = static_cast<QGraphicsEffect*>(src);
}

QMetaObject* QGraphicsBlurEffect_MetaObject(const QGraphicsBlurEffect* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsBlurEffect_Metacast(QGraphicsBlurEffect* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsBlurEffect_Tr(const char* s) {
	QString _ret = QGraphicsBlurEffect::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsBlurEffect_TrUtf8(const char* s) {
	QString _ret = QGraphicsBlurEffect::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QRectF* QGraphicsBlurEffect_BoundingRectFor(const QGraphicsBlurEffect* self, QRectF* rect) {
	return new QRectF(self->boundingRectFor(*rect));
}

double QGraphicsBlurEffect_BlurRadius(const QGraphicsBlurEffect* self) {
	qreal _ret = self->blurRadius();
	return static_cast<double>(_ret);
}

int QGraphicsBlurEffect_BlurHints(const QGraphicsBlurEffect* self) {
	QGraphicsBlurEffect::BlurHints _ret = self->blurHints();
	return static_cast<int>(_ret);
}

void QGraphicsBlurEffect_SetBlurRadius(QGraphicsBlurEffect* self, double blurRadius) {
	self->setBlurRadius(static_cast<qreal>(blurRadius));
}

void QGraphicsBlurEffect_SetBlurHints(QGraphicsBlurEffect* self, int hints) {
	self->setBlurHints(static_cast<QGraphicsBlurEffect::BlurHints>(hints));
}

void QGraphicsBlurEffect_BlurRadiusChanged(QGraphicsBlurEffect* self, double blurRadius) {
	self->blurRadiusChanged(static_cast<qreal>(blurRadius));
}

void QGraphicsBlurEffect_connect_BlurRadiusChanged(QGraphicsBlurEffect* self, intptr_t slot) {
	MiqtVirtualQGraphicsBlurEffect::connect(self, static_cast<void (QGraphicsBlurEffect::*)(qreal)>(&QGraphicsBlurEffect::blurRadiusChanged), self, [=](qreal blurRadius) {
		qreal blurRadius_ret = blurRadius;
		double sigval1 = static_cast<double>(blurRadius_ret);
		miqt_exec_callback_QGraphicsBlurEffect_BlurRadiusChanged(slot, sigval1);
	});
}

void QGraphicsBlurEffect_BlurHintsChanged(QGraphicsBlurEffect* self, int hints) {
	self->blurHintsChanged(static_cast<QGraphicsBlurEffect::BlurHints>(hints));
}

void QGraphicsBlurEffect_connect_BlurHintsChanged(QGraphicsBlurEffect* self, intptr_t slot) {
	MiqtVirtualQGraphicsBlurEffect::connect(self, static_cast<void (QGraphicsBlurEffect::*)(QGraphicsBlurEffect::BlurHints)>(&QGraphicsBlurEffect::blurHintsChanged), self, [=](QGraphicsBlurEffect::BlurHints hints) {
		QGraphicsBlurEffect::BlurHints hints_ret = hints;
		int sigval1 = static_cast<int>(hints_ret);
		miqt_exec_callback_QGraphicsBlurEffect_BlurHintsChanged(slot, sigval1);
	});
}

struct miqt_string QGraphicsBlurEffect_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsBlurEffect::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsBlurEffect_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsBlurEffect::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsBlurEffect_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsBlurEffect::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsBlurEffect_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsBlurEffect::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsBlurEffect_override_virtual_BoundingRectFor(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRectFor = slot;
	return true;
}

QRectF* QGraphicsBlurEffect_virtualbase_BoundingRectFor(const void* self, QRectF* rect) {
	return ( (const MiqtVirtualQGraphicsBlurEffect*)(self) )->virtualbase_BoundingRectFor(rect);
}

bool QGraphicsBlurEffect_override_virtual_Draw(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Draw = slot;
	return true;
}

void QGraphicsBlurEffect_virtualbase_Draw(void* self, QPainter* painter) {
	( (MiqtVirtualQGraphicsBlurEffect*)(self) )->virtualbase_Draw(painter);
}

bool QGraphicsBlurEffect_override_virtual_SourceChanged(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SourceChanged = slot;
	return true;
}

void QGraphicsBlurEffect_virtualbase_SourceChanged(void* self, int flags) {
	( (MiqtVirtualQGraphicsBlurEffect*)(self) )->virtualbase_SourceChanged(flags);
}

void QGraphicsBlurEffect_Delete(QGraphicsBlurEffect* self) {
	delete self;
}

class MiqtVirtualQGraphicsDropShadowEffect final : public QGraphicsDropShadowEffect {
public:

	MiqtVirtualQGraphicsDropShadowEffect(): QGraphicsDropShadowEffect() {};
	MiqtVirtualQGraphicsDropShadowEffect(QObject* parent): QGraphicsDropShadowEffect(parent) {};

	virtual ~MiqtVirtualQGraphicsDropShadowEffect() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRectFor = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRectFor(const QRectF& rect) const override {
		if (handle__BoundingRectFor == 0) {
			return QGraphicsDropShadowEffect::boundingRectFor(rect);
		}
		
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsDropShadowEffect_BoundingRectFor(const_cast<MiqtVirtualQGraphicsDropShadowEffect*>(this), handle__BoundingRectFor, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRectFor(QRectF* rect) const {

		return new QRectF(QGraphicsDropShadowEffect::boundingRectFor(*rect));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* painter) override {
		if (handle__Draw == 0) {
			QGraphicsDropShadowEffect::draw(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QGraphicsDropShadowEffect_Draw(this, handle__Draw, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Draw(QPainter* painter) {

		QGraphicsDropShadowEffect::draw(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SourceChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void sourceChanged(QGraphicsEffect::ChangeFlags flags) override {
		if (handle__SourceChanged == 0) {
			QGraphicsDropShadowEffect::sourceChanged(flags);
			return;
		}
		
		QGraphicsEffect::ChangeFlags flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);

		miqt_exec_callback_QGraphicsDropShadowEffect_SourceChanged(this, handle__SourceChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SourceChanged(int flags) {

		QGraphicsDropShadowEffect::sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));

	}

};

QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new() {
	return new MiqtVirtualQGraphicsDropShadowEffect();
}

QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new2(QObject* parent) {
	return new MiqtVirtualQGraphicsDropShadowEffect(parent);
}

void QGraphicsDropShadowEffect_virtbase(QGraphicsDropShadowEffect* src, QGraphicsEffect** outptr_QGraphicsEffect) {
	*outptr_QGraphicsEffect = static_cast<QGraphicsEffect*>(src);
}

QMetaObject* QGraphicsDropShadowEffect_MetaObject(const QGraphicsDropShadowEffect* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsDropShadowEffect_Metacast(QGraphicsDropShadowEffect* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsDropShadowEffect_Tr(const char* s) {
	QString _ret = QGraphicsDropShadowEffect::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsDropShadowEffect_TrUtf8(const char* s) {
	QString _ret = QGraphicsDropShadowEffect::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QRectF* QGraphicsDropShadowEffect_BoundingRectFor(const QGraphicsDropShadowEffect* self, QRectF* rect) {
	return new QRectF(self->boundingRectFor(*rect));
}

QPointF* QGraphicsDropShadowEffect_Offset(const QGraphicsDropShadowEffect* self) {
	return new QPointF(self->offset());
}

double QGraphicsDropShadowEffect_XOffset(const QGraphicsDropShadowEffect* self) {
	qreal _ret = self->xOffset();
	return static_cast<double>(_ret);
}

double QGraphicsDropShadowEffect_YOffset(const QGraphicsDropShadowEffect* self) {
	qreal _ret = self->yOffset();
	return static_cast<double>(_ret);
}

double QGraphicsDropShadowEffect_BlurRadius(const QGraphicsDropShadowEffect* self) {
	qreal _ret = self->blurRadius();
	return static_cast<double>(_ret);
}

QColor* QGraphicsDropShadowEffect_Color(const QGraphicsDropShadowEffect* self) {
	return new QColor(self->color());
}

void QGraphicsDropShadowEffect_SetOffset(QGraphicsDropShadowEffect* self, QPointF* ofs) {
	self->setOffset(*ofs);
}

void QGraphicsDropShadowEffect_SetOffset2(QGraphicsDropShadowEffect* self, double dx, double dy) {
	self->setOffset(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QGraphicsDropShadowEffect_SetOffsetWithQreal(QGraphicsDropShadowEffect* self, double d) {
	self->setOffset(static_cast<qreal>(d));
}

void QGraphicsDropShadowEffect_SetXOffset(QGraphicsDropShadowEffect* self, double dx) {
	self->setXOffset(static_cast<qreal>(dx));
}

void QGraphicsDropShadowEffect_SetYOffset(QGraphicsDropShadowEffect* self, double dy) {
	self->setYOffset(static_cast<qreal>(dy));
}

void QGraphicsDropShadowEffect_SetBlurRadius(QGraphicsDropShadowEffect* self, double blurRadius) {
	self->setBlurRadius(static_cast<qreal>(blurRadius));
}

void QGraphicsDropShadowEffect_SetColor(QGraphicsDropShadowEffect* self, QColor* color) {
	self->setColor(*color);
}

void QGraphicsDropShadowEffect_OffsetChanged(QGraphicsDropShadowEffect* self, QPointF* offset) {
	self->offsetChanged(*offset);
}

void QGraphicsDropShadowEffect_connect_OffsetChanged(QGraphicsDropShadowEffect* self, intptr_t slot) {
	MiqtVirtualQGraphicsDropShadowEffect::connect(self, static_cast<void (QGraphicsDropShadowEffect::*)(const QPointF&)>(&QGraphicsDropShadowEffect::offsetChanged), self, [=](const QPointF& offset) {
		const QPointF& offset_ret = offset;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&offset_ret);
		miqt_exec_callback_QGraphicsDropShadowEffect_OffsetChanged(slot, sigval1);
	});
}

void QGraphicsDropShadowEffect_BlurRadiusChanged(QGraphicsDropShadowEffect* self, double blurRadius) {
	self->blurRadiusChanged(static_cast<qreal>(blurRadius));
}

void QGraphicsDropShadowEffect_connect_BlurRadiusChanged(QGraphicsDropShadowEffect* self, intptr_t slot) {
	MiqtVirtualQGraphicsDropShadowEffect::connect(self, static_cast<void (QGraphicsDropShadowEffect::*)(qreal)>(&QGraphicsDropShadowEffect::blurRadiusChanged), self, [=](qreal blurRadius) {
		qreal blurRadius_ret = blurRadius;
		double sigval1 = static_cast<double>(blurRadius_ret);
		miqt_exec_callback_QGraphicsDropShadowEffect_BlurRadiusChanged(slot, sigval1);
	});
}

void QGraphicsDropShadowEffect_ColorChanged(QGraphicsDropShadowEffect* self, QColor* color) {
	self->colorChanged(*color);
}

void QGraphicsDropShadowEffect_connect_ColorChanged(QGraphicsDropShadowEffect* self, intptr_t slot) {
	MiqtVirtualQGraphicsDropShadowEffect::connect(self, static_cast<void (QGraphicsDropShadowEffect::*)(const QColor&)>(&QGraphicsDropShadowEffect::colorChanged), self, [=](const QColor& color) {
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QGraphicsDropShadowEffect_ColorChanged(slot, sigval1);
	});
}

struct miqt_string QGraphicsDropShadowEffect_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsDropShadowEffect::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsDropShadowEffect_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsDropShadowEffect::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsDropShadowEffect_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsDropShadowEffect::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsDropShadowEffect_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsDropShadowEffect::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsDropShadowEffect_override_virtual_BoundingRectFor(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRectFor = slot;
	return true;
}

QRectF* QGraphicsDropShadowEffect_virtualbase_BoundingRectFor(const void* self, QRectF* rect) {
	return ( (const MiqtVirtualQGraphicsDropShadowEffect*)(self) )->virtualbase_BoundingRectFor(rect);
}

bool QGraphicsDropShadowEffect_override_virtual_Draw(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Draw = slot;
	return true;
}

void QGraphicsDropShadowEffect_virtualbase_Draw(void* self, QPainter* painter) {
	( (MiqtVirtualQGraphicsDropShadowEffect*)(self) )->virtualbase_Draw(painter);
}

bool QGraphicsDropShadowEffect_override_virtual_SourceChanged(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SourceChanged = slot;
	return true;
}

void QGraphicsDropShadowEffect_virtualbase_SourceChanged(void* self, int flags) {
	( (MiqtVirtualQGraphicsDropShadowEffect*)(self) )->virtualbase_SourceChanged(flags);
}

void QGraphicsDropShadowEffect_Delete(QGraphicsDropShadowEffect* self) {
	delete self;
}

class MiqtVirtualQGraphicsOpacityEffect final : public QGraphicsOpacityEffect {
public:

	MiqtVirtualQGraphicsOpacityEffect(): QGraphicsOpacityEffect() {};
	MiqtVirtualQGraphicsOpacityEffect(QObject* parent): QGraphicsOpacityEffect(parent) {};

	virtual ~MiqtVirtualQGraphicsOpacityEffect() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* painter) override {
		if (handle__Draw == 0) {
			QGraphicsOpacityEffect::draw(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QGraphicsOpacityEffect_Draw(this, handle__Draw, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Draw(QPainter* painter) {

		QGraphicsOpacityEffect::draw(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRectFor = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRectFor(const QRectF& sourceRect) const override {
		if (handle__BoundingRectFor == 0) {
			return QGraphicsOpacityEffect::boundingRectFor(sourceRect);
		}
		
		const QRectF& sourceRect_ret = sourceRect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&sourceRect_ret);

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsOpacityEffect_BoundingRectFor(const_cast<MiqtVirtualQGraphicsOpacityEffect*>(this), handle__BoundingRectFor, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRectFor(QRectF* sourceRect) const {

		return new QRectF(QGraphicsOpacityEffect::boundingRectFor(*sourceRect));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SourceChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void sourceChanged(QGraphicsEffect::ChangeFlags flags) override {
		if (handle__SourceChanged == 0) {
			QGraphicsOpacityEffect::sourceChanged(flags);
			return;
		}
		
		QGraphicsEffect::ChangeFlags flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);

		miqt_exec_callback_QGraphicsOpacityEffect_SourceChanged(this, handle__SourceChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SourceChanged(int flags) {

		QGraphicsOpacityEffect::sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));

	}

};

QGraphicsOpacityEffect* QGraphicsOpacityEffect_new() {
	return new MiqtVirtualQGraphicsOpacityEffect();
}

QGraphicsOpacityEffect* QGraphicsOpacityEffect_new2(QObject* parent) {
	return new MiqtVirtualQGraphicsOpacityEffect(parent);
}

void QGraphicsOpacityEffect_virtbase(QGraphicsOpacityEffect* src, QGraphicsEffect** outptr_QGraphicsEffect) {
	*outptr_QGraphicsEffect = static_cast<QGraphicsEffect*>(src);
}

QMetaObject* QGraphicsOpacityEffect_MetaObject(const QGraphicsOpacityEffect* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsOpacityEffect_Metacast(QGraphicsOpacityEffect* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsOpacityEffect_Tr(const char* s) {
	QString _ret = QGraphicsOpacityEffect::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsOpacityEffect_TrUtf8(const char* s) {
	QString _ret = QGraphicsOpacityEffect::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QGraphicsOpacityEffect_Opacity(const QGraphicsOpacityEffect* self) {
	qreal _ret = self->opacity();
	return static_cast<double>(_ret);
}

QBrush* QGraphicsOpacityEffect_OpacityMask(const QGraphicsOpacityEffect* self) {
	return new QBrush(self->opacityMask());
}

void QGraphicsOpacityEffect_SetOpacity(QGraphicsOpacityEffect* self, double opacity) {
	self->setOpacity(static_cast<qreal>(opacity));
}

void QGraphicsOpacityEffect_SetOpacityMask(QGraphicsOpacityEffect* self, QBrush* mask) {
	self->setOpacityMask(*mask);
}

void QGraphicsOpacityEffect_OpacityChanged(QGraphicsOpacityEffect* self, double opacity) {
	self->opacityChanged(static_cast<qreal>(opacity));
}

void QGraphicsOpacityEffect_connect_OpacityChanged(QGraphicsOpacityEffect* self, intptr_t slot) {
	MiqtVirtualQGraphicsOpacityEffect::connect(self, static_cast<void (QGraphicsOpacityEffect::*)(qreal)>(&QGraphicsOpacityEffect::opacityChanged), self, [=](qreal opacity) {
		qreal opacity_ret = opacity;
		double sigval1 = static_cast<double>(opacity_ret);
		miqt_exec_callback_QGraphicsOpacityEffect_OpacityChanged(slot, sigval1);
	});
}

void QGraphicsOpacityEffect_OpacityMaskChanged(QGraphicsOpacityEffect* self, QBrush* mask) {
	self->opacityMaskChanged(*mask);
}

void QGraphicsOpacityEffect_connect_OpacityMaskChanged(QGraphicsOpacityEffect* self, intptr_t slot) {
	MiqtVirtualQGraphicsOpacityEffect::connect(self, static_cast<void (QGraphicsOpacityEffect::*)(const QBrush&)>(&QGraphicsOpacityEffect::opacityMaskChanged), self, [=](const QBrush& mask) {
		const QBrush& mask_ret = mask;
		// Cast returned reference into pointer
		QBrush* sigval1 = const_cast<QBrush*>(&mask_ret);
		miqt_exec_callback_QGraphicsOpacityEffect_OpacityMaskChanged(slot, sigval1);
	});
}

struct miqt_string QGraphicsOpacityEffect_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsOpacityEffect::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsOpacityEffect_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsOpacityEffect::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsOpacityEffect_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsOpacityEffect::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsOpacityEffect_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsOpacityEffect::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsOpacityEffect_override_virtual_Draw(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Draw = slot;
	return true;
}

void QGraphicsOpacityEffect_virtualbase_Draw(void* self, QPainter* painter) {
	( (MiqtVirtualQGraphicsOpacityEffect*)(self) )->virtualbase_Draw(painter);
}

bool QGraphicsOpacityEffect_override_virtual_BoundingRectFor(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRectFor = slot;
	return true;
}

QRectF* QGraphicsOpacityEffect_virtualbase_BoundingRectFor(const void* self, QRectF* sourceRect) {
	return ( (const MiqtVirtualQGraphicsOpacityEffect*)(self) )->virtualbase_BoundingRectFor(sourceRect);
}

bool QGraphicsOpacityEffect_override_virtual_SourceChanged(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SourceChanged = slot;
	return true;
}

void QGraphicsOpacityEffect_virtualbase_SourceChanged(void* self, int flags) {
	( (MiqtVirtualQGraphicsOpacityEffect*)(self) )->virtualbase_SourceChanged(flags);
}

void QGraphicsOpacityEffect_Delete(QGraphicsOpacityEffect* self) {
	delete self;
}

