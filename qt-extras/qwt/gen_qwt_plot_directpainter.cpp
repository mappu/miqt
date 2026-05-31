#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QRegion>
#include <QTimerEvent>
#include <qwt_plot_directpainter.h>
#include "gen_qwt_plot_directpainter.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QwtPlotDirectPainter_eventFilter(QwtPlotDirectPainter*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QwtPlotDirectPainter_event(QwtPlotDirectPainter*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotDirectPainter_timerEvent(QwtPlotDirectPainter*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtPlotDirectPainter_childEvent(QwtPlotDirectPainter*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtPlotDirectPainter_customEvent(QwtPlotDirectPainter*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotDirectPainter_connectNotify(QwtPlotDirectPainter*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtPlotDirectPainter_disconnectNotify(QwtPlotDirectPainter*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtPlotDirectPainter final : public QwtPlotDirectPainter {
public:

	MiqtVirtualQwtPlotDirectPainter(): QwtPlotDirectPainter() {}
	MiqtVirtualQwtPlotDirectPainter(QObject* parent): QwtPlotDirectPainter(parent) {}

	virtual ~MiqtVirtualQwtPlotDirectPainter() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QwtPlotDirectPainter::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QwtPlotDirectPainter_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtPlotDirectPainter_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QwtPlotDirectPainter::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtPlotDirectPainter_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QwtPlotDirectPainter_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QwtPlotDirectPainter::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotDirectPainter_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QwtPlotDirectPainter_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QwtPlotDirectPainter::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotDirectPainter_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QwtPlotDirectPainter_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QwtPlotDirectPainter::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotDirectPainter_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QwtPlotDirectPainter_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QwtPlotDirectPainter::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPlotDirectPainter_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QwtPlotDirectPainter_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QwtPlotDirectPainter::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPlotDirectPainter_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QwtPlotDirectPainter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QwtPlotDirectPainter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPlotDirectPainter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPlotDirectPainter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtPlotDirectPainter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtPlotDirectPainter* QwtPlotDirectPainter_new() {
	return new (std::nothrow) MiqtVirtualQwtPlotDirectPainter();
}

QwtPlotDirectPainter* QwtPlotDirectPainter_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQwtPlotDirectPainter(parent);
}

void QwtPlotDirectPainter_virtbase(QwtPlotDirectPainter* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

void QwtPlotDirectPainter_setAttribute(QwtPlotDirectPainter* self, int param1, bool on) {
	self->setAttribute(static_cast<QwtPlotDirectPainter::Attribute>(param1), on);
}

bool QwtPlotDirectPainter_testAttribute(const QwtPlotDirectPainter* self, int param1) {
	return self->testAttribute(static_cast<QwtPlotDirectPainter::Attribute>(param1));
}

void QwtPlotDirectPainter_setClipping(QwtPlotDirectPainter* self, bool clipping) {
	self->setClipping(clipping);
}

bool QwtPlotDirectPainter_hasClipping(const QwtPlotDirectPainter* self) {
	return self->hasClipping();
}

void QwtPlotDirectPainter_setClipRegion(QwtPlotDirectPainter* self, QRegion* clipRegion) {
	self->setClipRegion(*clipRegion);
}

QRegion* QwtPlotDirectPainter_clipRegion(const QwtPlotDirectPainter* self) {
	return new QRegion(self->clipRegion());
}

void QwtPlotDirectPainter_drawSeries(QwtPlotDirectPainter* self, QwtPlotSeriesItem* param1, int from, int to) {
	self->drawSeries(param1, static_cast<int>(from), static_cast<int>(to));
}

void QwtPlotDirectPainter_reset(QwtPlotDirectPainter* self) {
	self->reset();
}

bool QwtPlotDirectPainter_eventFilter(QwtPlotDirectPainter* self, QObject* param1, QEvent* param2) {
	return self->eventFilter(param1, param2);
}

bool QwtPlotDirectPainter_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotDirectPainter* self_cast = dynamic_cast<MiqtVirtualQwtPlotDirectPainter*>( (QwtPlotDirectPainter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QwtPlotDirectPainter_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQwtPlotDirectPainter*>(self)->QwtPlotDirectPainter::eventFilter(param1, param2);
}

bool QwtPlotDirectPainter_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotDirectPainter* self_cast = dynamic_cast<MiqtVirtualQwtPlotDirectPainter*>( (QwtPlotDirectPainter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QwtPlotDirectPainter_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtPlotDirectPainter*>(self)->QwtPlotDirectPainter::event(event);
}

bool QwtPlotDirectPainter_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotDirectPainter* self_cast = dynamic_cast<MiqtVirtualQwtPlotDirectPainter*>( (QwtPlotDirectPainter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QwtPlotDirectPainter_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtPlotDirectPainter*>(self)->QwtPlotDirectPainter::timerEvent(event);
}

bool QwtPlotDirectPainter_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotDirectPainter* self_cast = dynamic_cast<MiqtVirtualQwtPlotDirectPainter*>( (QwtPlotDirectPainter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QwtPlotDirectPainter_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtPlotDirectPainter*>(self)->QwtPlotDirectPainter::childEvent(event);
}

bool QwtPlotDirectPainter_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotDirectPainter* self_cast = dynamic_cast<MiqtVirtualQwtPlotDirectPainter*>( (QwtPlotDirectPainter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QwtPlotDirectPainter_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPlotDirectPainter*>(self)->QwtPlotDirectPainter::customEvent(event);
}

bool QwtPlotDirectPainter_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotDirectPainter* self_cast = dynamic_cast<MiqtVirtualQwtPlotDirectPainter*>( (QwtPlotDirectPainter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QwtPlotDirectPainter_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPlotDirectPainter*>(self)->QwtPlotDirectPainter::connectNotify(*signal);
}

bool QwtPlotDirectPainter_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotDirectPainter* self_cast = dynamic_cast<MiqtVirtualQwtPlotDirectPainter*>( (QwtPlotDirectPainter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QwtPlotDirectPainter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPlotDirectPainter*>(self)->QwtPlotDirectPainter::disconnectNotify(*signal);
}

QObject* QwtPlotDirectPainter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotDirectPainter* self_cast = dynamic_cast<MiqtVirtualQwtPlotDirectPainter*>( (QwtPlotDirectPainter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtPlotDirectPainter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotDirectPainter* self_cast = dynamic_cast<MiqtVirtualQwtPlotDirectPainter*>( (QwtPlotDirectPainter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtPlotDirectPainter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtPlotDirectPainter* self_cast = dynamic_cast<MiqtVirtualQwtPlotDirectPainter*>( (QwtPlotDirectPainter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtPlotDirectPainter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtPlotDirectPainter* self_cast = dynamic_cast<MiqtVirtualQwtPlotDirectPainter*>( (QwtPlotDirectPainter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtPlotDirectPainter_delete(QwtPlotDirectPainter* self) {
	delete self;
}

