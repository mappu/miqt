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
#include <QPixmap>
#include <QPoint>
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

void miqt_exec_callback_QGraphicsEffect_enabledChanged(intptr_t, bool);
QRectF* miqt_exec_callback_QGraphicsEffect_boundingRectFor(const QGraphicsEffect*, intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsEffect_draw(QGraphicsEffect*, intptr_t, QPainter*);
void miqt_exec_callback_QGraphicsEffect_sourceChanged(QGraphicsEffect*, intptr_t, int);
bool miqt_exec_callback_QGraphicsEffect_event(QGraphicsEffect*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsEffect_eventFilter(QGraphicsEffect*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsEffect_timerEvent(QGraphicsEffect*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsEffect_childEvent(QGraphicsEffect*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsEffect_customEvent(QGraphicsEffect*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsEffect_connectNotify(QGraphicsEffect*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsEffect_disconnectNotify(QGraphicsEffect*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsColorizeEffect_colorChanged(intptr_t, QColor*);
void miqt_exec_callback_QGraphicsColorizeEffect_strengthChanged(intptr_t, double);
void miqt_exec_callback_QGraphicsColorizeEffect_draw(QGraphicsColorizeEffect*, intptr_t, QPainter*);
QRectF* miqt_exec_callback_QGraphicsColorizeEffect_boundingRectFor(const QGraphicsColorizeEffect*, intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsColorizeEffect_sourceChanged(QGraphicsColorizeEffect*, intptr_t, int);
bool miqt_exec_callback_QGraphicsColorizeEffect_event(QGraphicsColorizeEffect*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsColorizeEffect_eventFilter(QGraphicsColorizeEffect*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsColorizeEffect_timerEvent(QGraphicsColorizeEffect*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsColorizeEffect_childEvent(QGraphicsColorizeEffect*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsColorizeEffect_customEvent(QGraphicsColorizeEffect*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsColorizeEffect_connectNotify(QGraphicsColorizeEffect*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsColorizeEffect_disconnectNotify(QGraphicsColorizeEffect*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsBlurEffect_blurRadiusChanged(intptr_t, double);
void miqt_exec_callback_QGraphicsBlurEffect_blurHintsChanged(intptr_t, int);
QRectF* miqt_exec_callback_QGraphicsBlurEffect_boundingRectFor(const QGraphicsBlurEffect*, intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsBlurEffect_draw(QGraphicsBlurEffect*, intptr_t, QPainter*);
void miqt_exec_callback_QGraphicsBlurEffect_sourceChanged(QGraphicsBlurEffect*, intptr_t, int);
bool miqt_exec_callback_QGraphicsBlurEffect_event(QGraphicsBlurEffect*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsBlurEffect_eventFilter(QGraphicsBlurEffect*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsBlurEffect_timerEvent(QGraphicsBlurEffect*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsBlurEffect_childEvent(QGraphicsBlurEffect*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsBlurEffect_customEvent(QGraphicsBlurEffect*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsBlurEffect_connectNotify(QGraphicsBlurEffect*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsBlurEffect_disconnectNotify(QGraphicsBlurEffect*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsDropShadowEffect_offsetChanged(intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsDropShadowEffect_blurRadiusChanged(intptr_t, double);
void miqt_exec_callback_QGraphicsDropShadowEffect_colorChanged(intptr_t, QColor*);
QRectF* miqt_exec_callback_QGraphicsDropShadowEffect_boundingRectFor(const QGraphicsDropShadowEffect*, intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsDropShadowEffect_draw(QGraphicsDropShadowEffect*, intptr_t, QPainter*);
void miqt_exec_callback_QGraphicsDropShadowEffect_sourceChanged(QGraphicsDropShadowEffect*, intptr_t, int);
bool miqt_exec_callback_QGraphicsDropShadowEffect_event(QGraphicsDropShadowEffect*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsDropShadowEffect_eventFilter(QGraphicsDropShadowEffect*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsDropShadowEffect_timerEvent(QGraphicsDropShadowEffect*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsDropShadowEffect_childEvent(QGraphicsDropShadowEffect*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsDropShadowEffect_customEvent(QGraphicsDropShadowEffect*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsDropShadowEffect_connectNotify(QGraphicsDropShadowEffect*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsDropShadowEffect_disconnectNotify(QGraphicsDropShadowEffect*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsOpacityEffect_opacityChanged(intptr_t, double);
void miqt_exec_callback_QGraphicsOpacityEffect_opacityMaskChanged(intptr_t, QBrush*);
void miqt_exec_callback_QGraphicsOpacityEffect_draw(QGraphicsOpacityEffect*, intptr_t, QPainter*);
QRectF* miqt_exec_callback_QGraphicsOpacityEffect_boundingRectFor(const QGraphicsOpacityEffect*, intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsOpacityEffect_sourceChanged(QGraphicsOpacityEffect*, intptr_t, int);
bool miqt_exec_callback_QGraphicsOpacityEffect_event(QGraphicsOpacityEffect*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsOpacityEffect_eventFilter(QGraphicsOpacityEffect*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsOpacityEffect_timerEvent(QGraphicsOpacityEffect*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsOpacityEffect_childEvent(QGraphicsOpacityEffect*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsOpacityEffect_customEvent(QGraphicsOpacityEffect*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsOpacityEffect_connectNotify(QGraphicsOpacityEffect*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsOpacityEffect_disconnectNotify(QGraphicsOpacityEffect*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsEffect final : public QGraphicsEffect {
public:

	MiqtVirtualQGraphicsEffect(): QGraphicsEffect() {};
	MiqtVirtualQGraphicsEffect(QObject* parent): QGraphicsEffect(parent) {};

	virtual ~MiqtVirtualQGraphicsEffect() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRectFor = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRectFor(const QRectF& sourceRect) const override {
		if (handle__boundingRectFor == 0) {
			return QGraphicsEffect::boundingRectFor(sourceRect);
		}
		
		const QRectF& sourceRect_ret = sourceRect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&sourceRect_ret);

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsEffect_boundingRectFor(this, handle__boundingRectFor, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_boundingRectFor(QRectF* sourceRect) const {

		return new QRectF(QGraphicsEffect::boundingRectFor(*sourceRect));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* painter) override {
		if (handle__draw == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QGraphicsEffect_draw(this, handle__draw, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sourceChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void sourceChanged(QGraphicsEffect::ChangeFlags flags) override {
		if (handle__sourceChanged == 0) {
			QGraphicsEffect::sourceChanged(flags);
			return;
		}
		
		QGraphicsEffect::ChangeFlags flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);

		miqt_exec_callback_QGraphicsEffect_sourceChanged(this, handle__sourceChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_sourceChanged(int flags) {

		QGraphicsEffect::sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QGraphicsEffect::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsEffect_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QGraphicsEffect::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGraphicsEffect::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsEffect_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QGraphicsEffect::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGraphicsEffect::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEffect_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QGraphicsEffect::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QGraphicsEffect::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEffect_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QGraphicsEffect::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGraphicsEffect::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEffect_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QGraphicsEffect::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGraphicsEffect::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsEffect_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QGraphicsEffect::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGraphicsEffect::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsEffect_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QGraphicsEffect::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsEffect_protectedbase_updateBoundingRect(bool* _dynamic_cast_ok, void* self);
	friend bool QGraphicsEffect_protectedbase_sourceIsPixmap(bool* _dynamic_cast_ok, const void* self);
	friend QRectF* QGraphicsEffect_protectedbase_sourceBoundingRect(bool* _dynamic_cast_ok, const void* self);
	friend void QGraphicsEffect_protectedbase_drawSource(bool* _dynamic_cast_ok, void* self, QPainter* painter);
	friend QPixmap* QGraphicsEffect_protectedbase_sourcePixmap(bool* _dynamic_cast_ok, const void* self);
	friend QRectF* QGraphicsEffect_protectedbase_sourceBoundingRect1(bool* _dynamic_cast_ok, const void* self, int system);
	friend QPixmap* QGraphicsEffect_protectedbase_sourcePixmap1(bool* _dynamic_cast_ok, const void* self, int system);
	friend QPixmap* QGraphicsEffect_protectedbase_sourcePixmap2(bool* _dynamic_cast_ok, const void* self, int system, QPoint* offset);
	friend QPixmap* QGraphicsEffect_protectedbase_sourcePixmap3(bool* _dynamic_cast_ok, const void* self, int system, QPoint* offset, int mode);
	friend QObject* QGraphicsEffect_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsEffect_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsEffect_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsEffect_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QGraphicsEffect_metaObject(const QGraphicsEffect* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsEffect_metacast(QGraphicsEffect* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsEffect_tr(const char* s) {
	QString _ret = QGraphicsEffect::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsEffect_trUtf8(const char* s) {
	QString _ret = QGraphicsEffect::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QRectF* QGraphicsEffect_boundingRectFor(const QGraphicsEffect* self, QRectF* sourceRect) {
	return new QRectF(self->boundingRectFor(*sourceRect));
}

QRectF* QGraphicsEffect_boundingRect(const QGraphicsEffect* self) {
	return new QRectF(self->boundingRect());
}

bool QGraphicsEffect_isEnabled(const QGraphicsEffect* self) {
	return self->isEnabled();
}

void QGraphicsEffect_setEnabled(QGraphicsEffect* self, bool enable) {
	self->setEnabled(enable);
}

void QGraphicsEffect_update(QGraphicsEffect* self) {
	self->update();
}

void QGraphicsEffect_enabledChanged(QGraphicsEffect* self, bool enabled) {
	self->enabledChanged(enabled);
}

void QGraphicsEffect_connect_enabledChanged(QGraphicsEffect* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect::connect(self, static_cast<void (QGraphicsEffect::*)(bool)>(&QGraphicsEffect::enabledChanged), self, [=](bool enabled) {
		bool sigval1 = enabled;
		miqt_exec_callback_QGraphicsEffect_enabledChanged(slot, sigval1);
	});
}

struct miqt_string QGraphicsEffect_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsEffect::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsEffect_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsEffect::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsEffect_trUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsEffect::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsEffect_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsEffect::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsEffect_override_virtual_boundingRectFor(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRectFor = slot;
	return true;
}

QRectF* QGraphicsEffect_virtualbase_boundingRectFor(const void* self, QRectF* sourceRect) {
	return ( (const MiqtVirtualQGraphicsEffect*)(self) )->virtualbase_boundingRectFor(sourceRect);
}

bool QGraphicsEffect_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__draw = slot;
	return true;
}

bool QGraphicsEffect_override_virtual_sourceChanged(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sourceChanged = slot;
	return true;
}

void QGraphicsEffect_virtualbase_sourceChanged(void* self, int flags) {
	( (MiqtVirtualQGraphicsEffect*)(self) )->virtualbase_sourceChanged(flags);
}

bool QGraphicsEffect_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QGraphicsEffect_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsEffect*)(self) )->virtualbase_event(event);
}

bool QGraphicsEffect_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGraphicsEffect_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsEffect*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QGraphicsEffect_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QGraphicsEffect_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsEffect*)(self) )->virtualbase_timerEvent(event);
}

bool QGraphicsEffect_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QGraphicsEffect_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsEffect*)(self) )->virtualbase_childEvent(event);
}

bool QGraphicsEffect_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QGraphicsEffect_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsEffect*)(self) )->virtualbase_customEvent(event);
}

bool QGraphicsEffect_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QGraphicsEffect_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsEffect*)(self) )->virtualbase_connectNotify(signal);
}

bool QGraphicsEffect_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGraphicsEffect_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsEffect*)(self) )->virtualbase_disconnectNotify(signal);
}

void QGraphicsEffect_protectedbase_updateBoundingRect(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateBoundingRect();

}

bool QGraphicsEffect_protectedbase_sourceIsPixmap(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sourceIsPixmap();

}

QRectF* QGraphicsEffect_protectedbase_sourceBoundingRect(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRectF(self_cast->sourceBoundingRect());

}

void QGraphicsEffect_protectedbase_drawSource(bool* _dynamic_cast_ok, void* self, QPainter* painter) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawSource(painter);

}

QPixmap* QGraphicsEffect_protectedbase_sourcePixmap(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPixmap(self_cast->sourcePixmap());

}

QRectF* QGraphicsEffect_protectedbase_sourceBoundingRect1(bool* _dynamic_cast_ok, const void* self, int system) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRectF(self_cast->sourceBoundingRect(static_cast<Qt::CoordinateSystem>(system)));

}

QPixmap* QGraphicsEffect_protectedbase_sourcePixmap1(bool* _dynamic_cast_ok, const void* self, int system) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPixmap(self_cast->sourcePixmap(static_cast<Qt::CoordinateSystem>(system)));

}

QPixmap* QGraphicsEffect_protectedbase_sourcePixmap2(bool* _dynamic_cast_ok, const void* self, int system, QPoint* offset) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPixmap(self_cast->sourcePixmap(static_cast<Qt::CoordinateSystem>(system), offset));

}

QPixmap* QGraphicsEffect_protectedbase_sourcePixmap3(bool* _dynamic_cast_ok, const void* self, int system, QPoint* offset, int mode) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPixmap(self_cast->sourcePixmap(static_cast<Qt::CoordinateSystem>(system), offset, static_cast<MiqtVirtualQGraphicsEffect::PixmapPadMode>(mode)));

}

QObject* QGraphicsEffect_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QGraphicsEffect_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QGraphicsEffect_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QGraphicsEffect_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsEffect*>( (QGraphicsEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QGraphicsEffect_delete(QGraphicsEffect* self) {
	delete self;
}

class MiqtVirtualQGraphicsColorizeEffect final : public QGraphicsColorizeEffect {
public:

	MiqtVirtualQGraphicsColorizeEffect(): QGraphicsColorizeEffect() {};
	MiqtVirtualQGraphicsColorizeEffect(QObject* parent): QGraphicsColorizeEffect(parent) {};

	virtual ~MiqtVirtualQGraphicsColorizeEffect() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* painter) override {
		if (handle__draw == 0) {
			QGraphicsColorizeEffect::draw(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QGraphicsColorizeEffect_draw(this, handle__draw, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_draw(QPainter* painter) {

		QGraphicsColorizeEffect::draw(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRectFor = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRectFor(const QRectF& sourceRect) const override {
		if (handle__boundingRectFor == 0) {
			return QGraphicsColorizeEffect::boundingRectFor(sourceRect);
		}
		
		const QRectF& sourceRect_ret = sourceRect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&sourceRect_ret);

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsColorizeEffect_boundingRectFor(this, handle__boundingRectFor, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_boundingRectFor(QRectF* sourceRect) const {

		return new QRectF(QGraphicsColorizeEffect::boundingRectFor(*sourceRect));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sourceChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void sourceChanged(QGraphicsEffect::ChangeFlags flags) override {
		if (handle__sourceChanged == 0) {
			QGraphicsColorizeEffect::sourceChanged(flags);
			return;
		}
		
		QGraphicsEffect::ChangeFlags flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);

		miqt_exec_callback_QGraphicsColorizeEffect_sourceChanged(this, handle__sourceChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_sourceChanged(int flags) {

		QGraphicsColorizeEffect::sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QGraphicsColorizeEffect::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsColorizeEffect_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QGraphicsColorizeEffect::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGraphicsColorizeEffect::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsColorizeEffect_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QGraphicsColorizeEffect::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGraphicsColorizeEffect::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsColorizeEffect_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QGraphicsColorizeEffect::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QGraphicsColorizeEffect::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsColorizeEffect_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QGraphicsColorizeEffect::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGraphicsColorizeEffect::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsColorizeEffect_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QGraphicsColorizeEffect::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGraphicsColorizeEffect::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsColorizeEffect_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QGraphicsColorizeEffect::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGraphicsColorizeEffect::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsColorizeEffect_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QGraphicsColorizeEffect::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsColorizeEffect_protectedbase_updateBoundingRect(bool* _dynamic_cast_ok, void* self);
	friend bool QGraphicsColorizeEffect_protectedbase_sourceIsPixmap(bool* _dynamic_cast_ok, const void* self);
	friend QRectF* QGraphicsColorizeEffect_protectedbase_sourceBoundingRect(bool* _dynamic_cast_ok, const void* self);
	friend void QGraphicsColorizeEffect_protectedbase_drawSource(bool* _dynamic_cast_ok, void* self, QPainter* painter);
	friend QPixmap* QGraphicsColorizeEffect_protectedbase_sourcePixmap(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QGraphicsColorizeEffect_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsColorizeEffect_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsColorizeEffect_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsColorizeEffect_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QGraphicsColorizeEffect_metaObject(const QGraphicsColorizeEffect* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsColorizeEffect_metacast(QGraphicsColorizeEffect* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsColorizeEffect_tr(const char* s) {
	QString _ret = QGraphicsColorizeEffect::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsColorizeEffect_trUtf8(const char* s) {
	QString _ret = QGraphicsColorizeEffect::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QColor* QGraphicsColorizeEffect_color(const QGraphicsColorizeEffect* self) {
	return new QColor(self->color());
}

double QGraphicsColorizeEffect_strength(const QGraphicsColorizeEffect* self) {
	qreal _ret = self->strength();
	return static_cast<double>(_ret);
}

void QGraphicsColorizeEffect_setColor(QGraphicsColorizeEffect* self, QColor* c) {
	self->setColor(*c);
}

void QGraphicsColorizeEffect_setStrength(QGraphicsColorizeEffect* self, double strength) {
	self->setStrength(static_cast<qreal>(strength));
}

void QGraphicsColorizeEffect_colorChanged(QGraphicsColorizeEffect* self, QColor* color) {
	self->colorChanged(*color);
}

void QGraphicsColorizeEffect_connect_colorChanged(QGraphicsColorizeEffect* self, intptr_t slot) {
	MiqtVirtualQGraphicsColorizeEffect::connect(self, static_cast<void (QGraphicsColorizeEffect::*)(const QColor&)>(&QGraphicsColorizeEffect::colorChanged), self, [=](const QColor& color) {
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QGraphicsColorizeEffect_colorChanged(slot, sigval1);
	});
}

void QGraphicsColorizeEffect_strengthChanged(QGraphicsColorizeEffect* self, double strength) {
	self->strengthChanged(static_cast<qreal>(strength));
}

void QGraphicsColorizeEffect_connect_strengthChanged(QGraphicsColorizeEffect* self, intptr_t slot) {
	MiqtVirtualQGraphicsColorizeEffect::connect(self, static_cast<void (QGraphicsColorizeEffect::*)(qreal)>(&QGraphicsColorizeEffect::strengthChanged), self, [=](qreal strength) {
		qreal strength_ret = strength;
		double sigval1 = static_cast<double>(strength_ret);
		miqt_exec_callback_QGraphicsColorizeEffect_strengthChanged(slot, sigval1);
	});
}

struct miqt_string QGraphicsColorizeEffect_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsColorizeEffect::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsColorizeEffect_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsColorizeEffect::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsColorizeEffect_trUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsColorizeEffect::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsColorizeEffect_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsColorizeEffect::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsColorizeEffect_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__draw = slot;
	return true;
}

void QGraphicsColorizeEffect_virtualbase_draw(void* self, QPainter* painter) {
	( (MiqtVirtualQGraphicsColorizeEffect*)(self) )->virtualbase_draw(painter);
}

bool QGraphicsColorizeEffect_override_virtual_boundingRectFor(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRectFor = slot;
	return true;
}

QRectF* QGraphicsColorizeEffect_virtualbase_boundingRectFor(const void* self, QRectF* sourceRect) {
	return ( (const MiqtVirtualQGraphicsColorizeEffect*)(self) )->virtualbase_boundingRectFor(sourceRect);
}

bool QGraphicsColorizeEffect_override_virtual_sourceChanged(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sourceChanged = slot;
	return true;
}

void QGraphicsColorizeEffect_virtualbase_sourceChanged(void* self, int flags) {
	( (MiqtVirtualQGraphicsColorizeEffect*)(self) )->virtualbase_sourceChanged(flags);
}

bool QGraphicsColorizeEffect_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QGraphicsColorizeEffect_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsColorizeEffect*)(self) )->virtualbase_event(event);
}

bool QGraphicsColorizeEffect_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGraphicsColorizeEffect_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsColorizeEffect*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QGraphicsColorizeEffect_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QGraphicsColorizeEffect_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsColorizeEffect*)(self) )->virtualbase_timerEvent(event);
}

bool QGraphicsColorizeEffect_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QGraphicsColorizeEffect_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsColorizeEffect*)(self) )->virtualbase_childEvent(event);
}

bool QGraphicsColorizeEffect_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QGraphicsColorizeEffect_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsColorizeEffect*)(self) )->virtualbase_customEvent(event);
}

bool QGraphicsColorizeEffect_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QGraphicsColorizeEffect_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsColorizeEffect*)(self) )->virtualbase_connectNotify(signal);
}

bool QGraphicsColorizeEffect_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGraphicsColorizeEffect_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsColorizeEffect*)(self) )->virtualbase_disconnectNotify(signal);
}

void QGraphicsColorizeEffect_protectedbase_updateBoundingRect(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateBoundingRect();

}

bool QGraphicsColorizeEffect_protectedbase_sourceIsPixmap(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sourceIsPixmap();

}

QRectF* QGraphicsColorizeEffect_protectedbase_sourceBoundingRect(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRectF(self_cast->sourceBoundingRect());

}

void QGraphicsColorizeEffect_protectedbase_drawSource(bool* _dynamic_cast_ok, void* self, QPainter* painter) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawSource(painter);

}

QPixmap* QGraphicsColorizeEffect_protectedbase_sourcePixmap(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPixmap(self_cast->sourcePixmap());

}

QObject* QGraphicsColorizeEffect_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QGraphicsColorizeEffect_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QGraphicsColorizeEffect_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QGraphicsColorizeEffect_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsColorizeEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsColorizeEffect*>( (QGraphicsColorizeEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QGraphicsColorizeEffect_delete(QGraphicsColorizeEffect* self) {
	delete self;
}

class MiqtVirtualQGraphicsBlurEffect final : public QGraphicsBlurEffect {
public:

	MiqtVirtualQGraphicsBlurEffect(): QGraphicsBlurEffect() {};
	MiqtVirtualQGraphicsBlurEffect(QObject* parent): QGraphicsBlurEffect(parent) {};

	virtual ~MiqtVirtualQGraphicsBlurEffect() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRectFor = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRectFor(const QRectF& rect) const override {
		if (handle__boundingRectFor == 0) {
			return QGraphicsBlurEffect::boundingRectFor(rect);
		}
		
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsBlurEffect_boundingRectFor(this, handle__boundingRectFor, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_boundingRectFor(QRectF* rect) const {

		return new QRectF(QGraphicsBlurEffect::boundingRectFor(*rect));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* painter) override {
		if (handle__draw == 0) {
			QGraphicsBlurEffect::draw(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QGraphicsBlurEffect_draw(this, handle__draw, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_draw(QPainter* painter) {

		QGraphicsBlurEffect::draw(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sourceChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void sourceChanged(QGraphicsEffect::ChangeFlags flags) override {
		if (handle__sourceChanged == 0) {
			QGraphicsBlurEffect::sourceChanged(flags);
			return;
		}
		
		QGraphicsEffect::ChangeFlags flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);

		miqt_exec_callback_QGraphicsBlurEffect_sourceChanged(this, handle__sourceChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_sourceChanged(int flags) {

		QGraphicsBlurEffect::sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QGraphicsBlurEffect::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsBlurEffect_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QGraphicsBlurEffect::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGraphicsBlurEffect::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsBlurEffect_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QGraphicsBlurEffect::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGraphicsBlurEffect::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsBlurEffect_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QGraphicsBlurEffect::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QGraphicsBlurEffect::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsBlurEffect_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QGraphicsBlurEffect::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGraphicsBlurEffect::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsBlurEffect_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QGraphicsBlurEffect::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGraphicsBlurEffect::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsBlurEffect_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QGraphicsBlurEffect::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGraphicsBlurEffect::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsBlurEffect_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QGraphicsBlurEffect::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsBlurEffect_protectedbase_updateBoundingRect(bool* _dynamic_cast_ok, void* self);
	friend bool QGraphicsBlurEffect_protectedbase_sourceIsPixmap(bool* _dynamic_cast_ok, const void* self);
	friend QRectF* QGraphicsBlurEffect_protectedbase_sourceBoundingRect(bool* _dynamic_cast_ok, const void* self);
	friend void QGraphicsBlurEffect_protectedbase_drawSource(bool* _dynamic_cast_ok, void* self, QPainter* painter);
	friend QPixmap* QGraphicsBlurEffect_protectedbase_sourcePixmap(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QGraphicsBlurEffect_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsBlurEffect_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsBlurEffect_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsBlurEffect_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QGraphicsBlurEffect_metaObject(const QGraphicsBlurEffect* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsBlurEffect_metacast(QGraphicsBlurEffect* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsBlurEffect_tr(const char* s) {
	QString _ret = QGraphicsBlurEffect::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsBlurEffect_trUtf8(const char* s) {
	QString _ret = QGraphicsBlurEffect::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QRectF* QGraphicsBlurEffect_boundingRectFor(const QGraphicsBlurEffect* self, QRectF* rect) {
	return new QRectF(self->boundingRectFor(*rect));
}

double QGraphicsBlurEffect_blurRadius(const QGraphicsBlurEffect* self) {
	qreal _ret = self->blurRadius();
	return static_cast<double>(_ret);
}

int QGraphicsBlurEffect_blurHints(const QGraphicsBlurEffect* self) {
	QGraphicsBlurEffect::BlurHints _ret = self->blurHints();
	return static_cast<int>(_ret);
}

void QGraphicsBlurEffect_setBlurRadius(QGraphicsBlurEffect* self, double blurRadius) {
	self->setBlurRadius(static_cast<qreal>(blurRadius));
}

void QGraphicsBlurEffect_setBlurHints(QGraphicsBlurEffect* self, int hints) {
	self->setBlurHints(static_cast<QGraphicsBlurEffect::BlurHints>(hints));
}

void QGraphicsBlurEffect_blurRadiusChanged(QGraphicsBlurEffect* self, double blurRadius) {
	self->blurRadiusChanged(static_cast<qreal>(blurRadius));
}

void QGraphicsBlurEffect_connect_blurRadiusChanged(QGraphicsBlurEffect* self, intptr_t slot) {
	MiqtVirtualQGraphicsBlurEffect::connect(self, static_cast<void (QGraphicsBlurEffect::*)(qreal)>(&QGraphicsBlurEffect::blurRadiusChanged), self, [=](qreal blurRadius) {
		qreal blurRadius_ret = blurRadius;
		double sigval1 = static_cast<double>(blurRadius_ret);
		miqt_exec_callback_QGraphicsBlurEffect_blurRadiusChanged(slot, sigval1);
	});
}

void QGraphicsBlurEffect_blurHintsChanged(QGraphicsBlurEffect* self, int hints) {
	self->blurHintsChanged(static_cast<QGraphicsBlurEffect::BlurHints>(hints));
}

void QGraphicsBlurEffect_connect_blurHintsChanged(QGraphicsBlurEffect* self, intptr_t slot) {
	MiqtVirtualQGraphicsBlurEffect::connect(self, static_cast<void (QGraphicsBlurEffect::*)(QGraphicsBlurEffect::BlurHints)>(&QGraphicsBlurEffect::blurHintsChanged), self, [=](QGraphicsBlurEffect::BlurHints hints) {
		QGraphicsBlurEffect::BlurHints hints_ret = hints;
		int sigval1 = static_cast<int>(hints_ret);
		miqt_exec_callback_QGraphicsBlurEffect_blurHintsChanged(slot, sigval1);
	});
}

struct miqt_string QGraphicsBlurEffect_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsBlurEffect::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsBlurEffect_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsBlurEffect::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsBlurEffect_trUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsBlurEffect::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsBlurEffect_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsBlurEffect::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsBlurEffect_override_virtual_boundingRectFor(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRectFor = slot;
	return true;
}

QRectF* QGraphicsBlurEffect_virtualbase_boundingRectFor(const void* self, QRectF* rect) {
	return ( (const MiqtVirtualQGraphicsBlurEffect*)(self) )->virtualbase_boundingRectFor(rect);
}

bool QGraphicsBlurEffect_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__draw = slot;
	return true;
}

void QGraphicsBlurEffect_virtualbase_draw(void* self, QPainter* painter) {
	( (MiqtVirtualQGraphicsBlurEffect*)(self) )->virtualbase_draw(painter);
}

bool QGraphicsBlurEffect_override_virtual_sourceChanged(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sourceChanged = slot;
	return true;
}

void QGraphicsBlurEffect_virtualbase_sourceChanged(void* self, int flags) {
	( (MiqtVirtualQGraphicsBlurEffect*)(self) )->virtualbase_sourceChanged(flags);
}

bool QGraphicsBlurEffect_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QGraphicsBlurEffect_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsBlurEffect*)(self) )->virtualbase_event(event);
}

bool QGraphicsBlurEffect_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGraphicsBlurEffect_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsBlurEffect*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QGraphicsBlurEffect_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QGraphicsBlurEffect_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsBlurEffect*)(self) )->virtualbase_timerEvent(event);
}

bool QGraphicsBlurEffect_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QGraphicsBlurEffect_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsBlurEffect*)(self) )->virtualbase_childEvent(event);
}

bool QGraphicsBlurEffect_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QGraphicsBlurEffect_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsBlurEffect*)(self) )->virtualbase_customEvent(event);
}

bool QGraphicsBlurEffect_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QGraphicsBlurEffect_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsBlurEffect*)(self) )->virtualbase_connectNotify(signal);
}

bool QGraphicsBlurEffect_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGraphicsBlurEffect_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsBlurEffect*)(self) )->virtualbase_disconnectNotify(signal);
}

void QGraphicsBlurEffect_protectedbase_updateBoundingRect(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateBoundingRect();

}

bool QGraphicsBlurEffect_protectedbase_sourceIsPixmap(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sourceIsPixmap();

}

QRectF* QGraphicsBlurEffect_protectedbase_sourceBoundingRect(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRectF(self_cast->sourceBoundingRect());

}

void QGraphicsBlurEffect_protectedbase_drawSource(bool* _dynamic_cast_ok, void* self, QPainter* painter) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawSource(painter);

}

QPixmap* QGraphicsBlurEffect_protectedbase_sourcePixmap(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPixmap(self_cast->sourcePixmap());

}

QObject* QGraphicsBlurEffect_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QGraphicsBlurEffect_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QGraphicsBlurEffect_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QGraphicsBlurEffect_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsBlurEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsBlurEffect*>( (QGraphicsBlurEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QGraphicsBlurEffect_delete(QGraphicsBlurEffect* self) {
	delete self;
}

class MiqtVirtualQGraphicsDropShadowEffect final : public QGraphicsDropShadowEffect {
public:

	MiqtVirtualQGraphicsDropShadowEffect(): QGraphicsDropShadowEffect() {};
	MiqtVirtualQGraphicsDropShadowEffect(QObject* parent): QGraphicsDropShadowEffect(parent) {};

	virtual ~MiqtVirtualQGraphicsDropShadowEffect() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRectFor = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRectFor(const QRectF& rect) const override {
		if (handle__boundingRectFor == 0) {
			return QGraphicsDropShadowEffect::boundingRectFor(rect);
		}
		
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsDropShadowEffect_boundingRectFor(this, handle__boundingRectFor, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_boundingRectFor(QRectF* rect) const {

		return new QRectF(QGraphicsDropShadowEffect::boundingRectFor(*rect));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* painter) override {
		if (handle__draw == 0) {
			QGraphicsDropShadowEffect::draw(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QGraphicsDropShadowEffect_draw(this, handle__draw, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_draw(QPainter* painter) {

		QGraphicsDropShadowEffect::draw(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sourceChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void sourceChanged(QGraphicsEffect::ChangeFlags flags) override {
		if (handle__sourceChanged == 0) {
			QGraphicsDropShadowEffect::sourceChanged(flags);
			return;
		}
		
		QGraphicsEffect::ChangeFlags flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);

		miqt_exec_callback_QGraphicsDropShadowEffect_sourceChanged(this, handle__sourceChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_sourceChanged(int flags) {

		QGraphicsDropShadowEffect::sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QGraphicsDropShadowEffect::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsDropShadowEffect_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QGraphicsDropShadowEffect::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGraphicsDropShadowEffect::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsDropShadowEffect_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QGraphicsDropShadowEffect::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGraphicsDropShadowEffect::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsDropShadowEffect_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QGraphicsDropShadowEffect::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QGraphicsDropShadowEffect::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsDropShadowEffect_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QGraphicsDropShadowEffect::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGraphicsDropShadowEffect::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsDropShadowEffect_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QGraphicsDropShadowEffect::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGraphicsDropShadowEffect::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsDropShadowEffect_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QGraphicsDropShadowEffect::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGraphicsDropShadowEffect::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsDropShadowEffect_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QGraphicsDropShadowEffect::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsDropShadowEffect_protectedbase_updateBoundingRect(bool* _dynamic_cast_ok, void* self);
	friend bool QGraphicsDropShadowEffect_protectedbase_sourceIsPixmap(bool* _dynamic_cast_ok, const void* self);
	friend QRectF* QGraphicsDropShadowEffect_protectedbase_sourceBoundingRect(bool* _dynamic_cast_ok, const void* self);
	friend void QGraphicsDropShadowEffect_protectedbase_drawSource(bool* _dynamic_cast_ok, void* self, QPainter* painter);
	friend QPixmap* QGraphicsDropShadowEffect_protectedbase_sourcePixmap(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QGraphicsDropShadowEffect_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsDropShadowEffect_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsDropShadowEffect_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsDropShadowEffect_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QGraphicsDropShadowEffect_metaObject(const QGraphicsDropShadowEffect* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsDropShadowEffect_metacast(QGraphicsDropShadowEffect* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsDropShadowEffect_tr(const char* s) {
	QString _ret = QGraphicsDropShadowEffect::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsDropShadowEffect_trUtf8(const char* s) {
	QString _ret = QGraphicsDropShadowEffect::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QRectF* QGraphicsDropShadowEffect_boundingRectFor(const QGraphicsDropShadowEffect* self, QRectF* rect) {
	return new QRectF(self->boundingRectFor(*rect));
}

QPointF* QGraphicsDropShadowEffect_offset(const QGraphicsDropShadowEffect* self) {
	return new QPointF(self->offset());
}

double QGraphicsDropShadowEffect_xOffset(const QGraphicsDropShadowEffect* self) {
	qreal _ret = self->xOffset();
	return static_cast<double>(_ret);
}

double QGraphicsDropShadowEffect_yOffset(const QGraphicsDropShadowEffect* self) {
	qreal _ret = self->yOffset();
	return static_cast<double>(_ret);
}

double QGraphicsDropShadowEffect_blurRadius(const QGraphicsDropShadowEffect* self) {
	qreal _ret = self->blurRadius();
	return static_cast<double>(_ret);
}

QColor* QGraphicsDropShadowEffect_color(const QGraphicsDropShadowEffect* self) {
	return new QColor(self->color());
}

void QGraphicsDropShadowEffect_setOffset(QGraphicsDropShadowEffect* self, QPointF* ofs) {
	self->setOffset(*ofs);
}

void QGraphicsDropShadowEffect_setOffset2(QGraphicsDropShadowEffect* self, double dx, double dy) {
	self->setOffset(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QGraphicsDropShadowEffect_setOffsetWithQreal(QGraphicsDropShadowEffect* self, double d) {
	self->setOffset(static_cast<qreal>(d));
}

void QGraphicsDropShadowEffect_setXOffset(QGraphicsDropShadowEffect* self, double dx) {
	self->setXOffset(static_cast<qreal>(dx));
}

void QGraphicsDropShadowEffect_setYOffset(QGraphicsDropShadowEffect* self, double dy) {
	self->setYOffset(static_cast<qreal>(dy));
}

void QGraphicsDropShadowEffect_setBlurRadius(QGraphicsDropShadowEffect* self, double blurRadius) {
	self->setBlurRadius(static_cast<qreal>(blurRadius));
}

void QGraphicsDropShadowEffect_setColor(QGraphicsDropShadowEffect* self, QColor* color) {
	self->setColor(*color);
}

void QGraphicsDropShadowEffect_offsetChanged(QGraphicsDropShadowEffect* self, QPointF* offset) {
	self->offsetChanged(*offset);
}

void QGraphicsDropShadowEffect_connect_offsetChanged(QGraphicsDropShadowEffect* self, intptr_t slot) {
	MiqtVirtualQGraphicsDropShadowEffect::connect(self, static_cast<void (QGraphicsDropShadowEffect::*)(const QPointF&)>(&QGraphicsDropShadowEffect::offsetChanged), self, [=](const QPointF& offset) {
		const QPointF& offset_ret = offset;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&offset_ret);
		miqt_exec_callback_QGraphicsDropShadowEffect_offsetChanged(slot, sigval1);
	});
}

void QGraphicsDropShadowEffect_blurRadiusChanged(QGraphicsDropShadowEffect* self, double blurRadius) {
	self->blurRadiusChanged(static_cast<qreal>(blurRadius));
}

void QGraphicsDropShadowEffect_connect_blurRadiusChanged(QGraphicsDropShadowEffect* self, intptr_t slot) {
	MiqtVirtualQGraphicsDropShadowEffect::connect(self, static_cast<void (QGraphicsDropShadowEffect::*)(qreal)>(&QGraphicsDropShadowEffect::blurRadiusChanged), self, [=](qreal blurRadius) {
		qreal blurRadius_ret = blurRadius;
		double sigval1 = static_cast<double>(blurRadius_ret);
		miqt_exec_callback_QGraphicsDropShadowEffect_blurRadiusChanged(slot, sigval1);
	});
}

void QGraphicsDropShadowEffect_colorChanged(QGraphicsDropShadowEffect* self, QColor* color) {
	self->colorChanged(*color);
}

void QGraphicsDropShadowEffect_connect_colorChanged(QGraphicsDropShadowEffect* self, intptr_t slot) {
	MiqtVirtualQGraphicsDropShadowEffect::connect(self, static_cast<void (QGraphicsDropShadowEffect::*)(const QColor&)>(&QGraphicsDropShadowEffect::colorChanged), self, [=](const QColor& color) {
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QGraphicsDropShadowEffect_colorChanged(slot, sigval1);
	});
}

struct miqt_string QGraphicsDropShadowEffect_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsDropShadowEffect::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsDropShadowEffect_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsDropShadowEffect::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsDropShadowEffect_trUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsDropShadowEffect::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsDropShadowEffect_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsDropShadowEffect::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsDropShadowEffect_override_virtual_boundingRectFor(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRectFor = slot;
	return true;
}

QRectF* QGraphicsDropShadowEffect_virtualbase_boundingRectFor(const void* self, QRectF* rect) {
	return ( (const MiqtVirtualQGraphicsDropShadowEffect*)(self) )->virtualbase_boundingRectFor(rect);
}

bool QGraphicsDropShadowEffect_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__draw = slot;
	return true;
}

void QGraphicsDropShadowEffect_virtualbase_draw(void* self, QPainter* painter) {
	( (MiqtVirtualQGraphicsDropShadowEffect*)(self) )->virtualbase_draw(painter);
}

bool QGraphicsDropShadowEffect_override_virtual_sourceChanged(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sourceChanged = slot;
	return true;
}

void QGraphicsDropShadowEffect_virtualbase_sourceChanged(void* self, int flags) {
	( (MiqtVirtualQGraphicsDropShadowEffect*)(self) )->virtualbase_sourceChanged(flags);
}

bool QGraphicsDropShadowEffect_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QGraphicsDropShadowEffect_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsDropShadowEffect*)(self) )->virtualbase_event(event);
}

bool QGraphicsDropShadowEffect_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGraphicsDropShadowEffect_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsDropShadowEffect*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QGraphicsDropShadowEffect_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QGraphicsDropShadowEffect_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsDropShadowEffect*)(self) )->virtualbase_timerEvent(event);
}

bool QGraphicsDropShadowEffect_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QGraphicsDropShadowEffect_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsDropShadowEffect*)(self) )->virtualbase_childEvent(event);
}

bool QGraphicsDropShadowEffect_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QGraphicsDropShadowEffect_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsDropShadowEffect*)(self) )->virtualbase_customEvent(event);
}

bool QGraphicsDropShadowEffect_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QGraphicsDropShadowEffect_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsDropShadowEffect*)(self) )->virtualbase_connectNotify(signal);
}

bool QGraphicsDropShadowEffect_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGraphicsDropShadowEffect_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsDropShadowEffect*)(self) )->virtualbase_disconnectNotify(signal);
}

void QGraphicsDropShadowEffect_protectedbase_updateBoundingRect(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateBoundingRect();

}

bool QGraphicsDropShadowEffect_protectedbase_sourceIsPixmap(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sourceIsPixmap();

}

QRectF* QGraphicsDropShadowEffect_protectedbase_sourceBoundingRect(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRectF(self_cast->sourceBoundingRect());

}

void QGraphicsDropShadowEffect_protectedbase_drawSource(bool* _dynamic_cast_ok, void* self, QPainter* painter) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawSource(painter);

}

QPixmap* QGraphicsDropShadowEffect_protectedbase_sourcePixmap(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPixmap(self_cast->sourcePixmap());

}

QObject* QGraphicsDropShadowEffect_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QGraphicsDropShadowEffect_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QGraphicsDropShadowEffect_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QGraphicsDropShadowEffect_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsDropShadowEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsDropShadowEffect*>( (QGraphicsDropShadowEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QGraphicsDropShadowEffect_delete(QGraphicsDropShadowEffect* self) {
	delete self;
}

class MiqtVirtualQGraphicsOpacityEffect final : public QGraphicsOpacityEffect {
public:

	MiqtVirtualQGraphicsOpacityEffect(): QGraphicsOpacityEffect() {};
	MiqtVirtualQGraphicsOpacityEffect(QObject* parent): QGraphicsOpacityEffect(parent) {};

	virtual ~MiqtVirtualQGraphicsOpacityEffect() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* painter) override {
		if (handle__draw == 0) {
			QGraphicsOpacityEffect::draw(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QGraphicsOpacityEffect_draw(this, handle__draw, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_draw(QPainter* painter) {

		QGraphicsOpacityEffect::draw(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRectFor = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRectFor(const QRectF& sourceRect) const override {
		if (handle__boundingRectFor == 0) {
			return QGraphicsOpacityEffect::boundingRectFor(sourceRect);
		}
		
		const QRectF& sourceRect_ret = sourceRect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&sourceRect_ret);

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsOpacityEffect_boundingRectFor(this, handle__boundingRectFor, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_boundingRectFor(QRectF* sourceRect) const {

		return new QRectF(QGraphicsOpacityEffect::boundingRectFor(*sourceRect));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sourceChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void sourceChanged(QGraphicsEffect::ChangeFlags flags) override {
		if (handle__sourceChanged == 0) {
			QGraphicsOpacityEffect::sourceChanged(flags);
			return;
		}
		
		QGraphicsEffect::ChangeFlags flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);

		miqt_exec_callback_QGraphicsOpacityEffect_sourceChanged(this, handle__sourceChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_sourceChanged(int flags) {

		QGraphicsOpacityEffect::sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QGraphicsOpacityEffect::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsOpacityEffect_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QGraphicsOpacityEffect::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGraphicsOpacityEffect::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsOpacityEffect_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QGraphicsOpacityEffect::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGraphicsOpacityEffect::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsOpacityEffect_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QGraphicsOpacityEffect::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QGraphicsOpacityEffect::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsOpacityEffect_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QGraphicsOpacityEffect::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGraphicsOpacityEffect::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsOpacityEffect_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QGraphicsOpacityEffect::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGraphicsOpacityEffect::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsOpacityEffect_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QGraphicsOpacityEffect::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGraphicsOpacityEffect::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsOpacityEffect_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QGraphicsOpacityEffect::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsOpacityEffect_protectedbase_updateBoundingRect(bool* _dynamic_cast_ok, void* self);
	friend bool QGraphicsOpacityEffect_protectedbase_sourceIsPixmap(bool* _dynamic_cast_ok, const void* self);
	friend QRectF* QGraphicsOpacityEffect_protectedbase_sourceBoundingRect(bool* _dynamic_cast_ok, const void* self);
	friend void QGraphicsOpacityEffect_protectedbase_drawSource(bool* _dynamic_cast_ok, void* self, QPainter* painter);
	friend QPixmap* QGraphicsOpacityEffect_protectedbase_sourcePixmap(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QGraphicsOpacityEffect_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsOpacityEffect_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsOpacityEffect_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsOpacityEffect_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QGraphicsOpacityEffect_metaObject(const QGraphicsOpacityEffect* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsOpacityEffect_metacast(QGraphicsOpacityEffect* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsOpacityEffect_tr(const char* s) {
	QString _ret = QGraphicsOpacityEffect::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsOpacityEffect_trUtf8(const char* s) {
	QString _ret = QGraphicsOpacityEffect::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QGraphicsOpacityEffect_opacity(const QGraphicsOpacityEffect* self) {
	qreal _ret = self->opacity();
	return static_cast<double>(_ret);
}

QBrush* QGraphicsOpacityEffect_opacityMask(const QGraphicsOpacityEffect* self) {
	return new QBrush(self->opacityMask());
}

void QGraphicsOpacityEffect_setOpacity(QGraphicsOpacityEffect* self, double opacity) {
	self->setOpacity(static_cast<qreal>(opacity));
}

void QGraphicsOpacityEffect_setOpacityMask(QGraphicsOpacityEffect* self, QBrush* mask) {
	self->setOpacityMask(*mask);
}

void QGraphicsOpacityEffect_opacityChanged(QGraphicsOpacityEffect* self, double opacity) {
	self->opacityChanged(static_cast<qreal>(opacity));
}

void QGraphicsOpacityEffect_connect_opacityChanged(QGraphicsOpacityEffect* self, intptr_t slot) {
	MiqtVirtualQGraphicsOpacityEffect::connect(self, static_cast<void (QGraphicsOpacityEffect::*)(qreal)>(&QGraphicsOpacityEffect::opacityChanged), self, [=](qreal opacity) {
		qreal opacity_ret = opacity;
		double sigval1 = static_cast<double>(opacity_ret);
		miqt_exec_callback_QGraphicsOpacityEffect_opacityChanged(slot, sigval1);
	});
}

void QGraphicsOpacityEffect_opacityMaskChanged(QGraphicsOpacityEffect* self, QBrush* mask) {
	self->opacityMaskChanged(*mask);
}

void QGraphicsOpacityEffect_connect_opacityMaskChanged(QGraphicsOpacityEffect* self, intptr_t slot) {
	MiqtVirtualQGraphicsOpacityEffect::connect(self, static_cast<void (QGraphicsOpacityEffect::*)(const QBrush&)>(&QGraphicsOpacityEffect::opacityMaskChanged), self, [=](const QBrush& mask) {
		const QBrush& mask_ret = mask;
		// Cast returned reference into pointer
		QBrush* sigval1 = const_cast<QBrush*>(&mask_ret);
		miqt_exec_callback_QGraphicsOpacityEffect_opacityMaskChanged(slot, sigval1);
	});
}

struct miqt_string QGraphicsOpacityEffect_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsOpacityEffect::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsOpacityEffect_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsOpacityEffect::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsOpacityEffect_trUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsOpacityEffect::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsOpacityEffect_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsOpacityEffect::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsOpacityEffect_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__draw = slot;
	return true;
}

void QGraphicsOpacityEffect_virtualbase_draw(void* self, QPainter* painter) {
	( (MiqtVirtualQGraphicsOpacityEffect*)(self) )->virtualbase_draw(painter);
}

bool QGraphicsOpacityEffect_override_virtual_boundingRectFor(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRectFor = slot;
	return true;
}

QRectF* QGraphicsOpacityEffect_virtualbase_boundingRectFor(const void* self, QRectF* sourceRect) {
	return ( (const MiqtVirtualQGraphicsOpacityEffect*)(self) )->virtualbase_boundingRectFor(sourceRect);
}

bool QGraphicsOpacityEffect_override_virtual_sourceChanged(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sourceChanged = slot;
	return true;
}

void QGraphicsOpacityEffect_virtualbase_sourceChanged(void* self, int flags) {
	( (MiqtVirtualQGraphicsOpacityEffect*)(self) )->virtualbase_sourceChanged(flags);
}

bool QGraphicsOpacityEffect_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QGraphicsOpacityEffect_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsOpacityEffect*)(self) )->virtualbase_event(event);
}

bool QGraphicsOpacityEffect_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGraphicsOpacityEffect_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsOpacityEffect*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QGraphicsOpacityEffect_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QGraphicsOpacityEffect_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsOpacityEffect*)(self) )->virtualbase_timerEvent(event);
}

bool QGraphicsOpacityEffect_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QGraphicsOpacityEffect_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsOpacityEffect*)(self) )->virtualbase_childEvent(event);
}

bool QGraphicsOpacityEffect_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QGraphicsOpacityEffect_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsOpacityEffect*)(self) )->virtualbase_customEvent(event);
}

bool QGraphicsOpacityEffect_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QGraphicsOpacityEffect_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsOpacityEffect*)(self) )->virtualbase_connectNotify(signal);
}

bool QGraphicsOpacityEffect_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGraphicsOpacityEffect_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsOpacityEffect*)(self) )->virtualbase_disconnectNotify(signal);
}

void QGraphicsOpacityEffect_protectedbase_updateBoundingRect(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateBoundingRect();

}

bool QGraphicsOpacityEffect_protectedbase_sourceIsPixmap(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sourceIsPixmap();

}

QRectF* QGraphicsOpacityEffect_protectedbase_sourceBoundingRect(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRectF(self_cast->sourceBoundingRect());

}

void QGraphicsOpacityEffect_protectedbase_drawSource(bool* _dynamic_cast_ok, void* self, QPainter* painter) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawSource(painter);

}

QPixmap* QGraphicsOpacityEffect_protectedbase_sourcePixmap(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPixmap(self_cast->sourcePixmap());

}

QObject* QGraphicsOpacityEffect_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QGraphicsOpacityEffect_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QGraphicsOpacityEffect_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QGraphicsOpacityEffect_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsOpacityEffect* self_cast = dynamic_cast<MiqtVirtualQGraphicsOpacityEffect*>( (QGraphicsOpacityEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QGraphicsOpacityEffect_delete(QGraphicsOpacityEffect* self) {
	delete self;
}

