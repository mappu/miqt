#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__Filter
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__Filter__HotSpot
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__FilterChain
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__FilterObject
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__RegExpFilter
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__RegExpFilter__HotSpot
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__TerminalImageFilterChain
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__UrlFilter
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__UrlFilter__HotSpot
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRegExp>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <Filter.h>
#include "gen_Filter.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_Konsole__Filter_process(Konsole__Filter*, intptr_t);
bool miqt_exec_callback_Konsole__Filter_event(Konsole__Filter*, intptr_t, QEvent*);
bool miqt_exec_callback_Konsole__Filter_eventFilter(Konsole__Filter*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_Konsole__Filter_timerEvent(Konsole__Filter*, intptr_t, QTimerEvent*);
void miqt_exec_callback_Konsole__Filter_childEvent(Konsole__Filter*, intptr_t, QChildEvent*);
void miqt_exec_callback_Konsole__Filter_customEvent(Konsole__Filter*, intptr_t, QEvent*);
void miqt_exec_callback_Konsole__Filter_connectNotify(Konsole__Filter*, intptr_t, QMetaMethod*);
void miqt_exec_callback_Konsole__Filter_disconnectNotify(Konsole__Filter*, intptr_t, QMetaMethod*);
void miqt_exec_callback_Konsole__RegExpFilter_process(Konsole__RegExpFilter*, intptr_t);
bool miqt_exec_callback_Konsole__RegExpFilter_event(Konsole__RegExpFilter*, intptr_t, QEvent*);
bool miqt_exec_callback_Konsole__RegExpFilter_eventFilter(Konsole__RegExpFilter*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_Konsole__RegExpFilter_timerEvent(Konsole__RegExpFilter*, intptr_t, QTimerEvent*);
void miqt_exec_callback_Konsole__RegExpFilter_childEvent(Konsole__RegExpFilter*, intptr_t, QChildEvent*);
void miqt_exec_callback_Konsole__RegExpFilter_customEvent(Konsole__RegExpFilter*, intptr_t, QEvent*);
void miqt_exec_callback_Konsole__RegExpFilter_connectNotify(Konsole__RegExpFilter*, intptr_t, QMetaMethod*);
void miqt_exec_callback_Konsole__RegExpFilter_disconnectNotify(Konsole__RegExpFilter*, intptr_t, QMetaMethod*);
void miqt_exec_callback_Konsole__UrlFilter_activated(intptr_t, QUrl*, bool);
void miqt_exec_callback_Konsole__UrlFilter_process(Konsole__UrlFilter*, intptr_t);
bool miqt_exec_callback_Konsole__UrlFilter_event(Konsole__UrlFilter*, intptr_t, QEvent*);
bool miqt_exec_callback_Konsole__UrlFilter_eventFilter(Konsole__UrlFilter*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_Konsole__UrlFilter_timerEvent(Konsole__UrlFilter*, intptr_t, QTimerEvent*);
void miqt_exec_callback_Konsole__UrlFilter_childEvent(Konsole__UrlFilter*, intptr_t, QChildEvent*);
void miqt_exec_callback_Konsole__UrlFilter_customEvent(Konsole__UrlFilter*, intptr_t, QEvent*);
void miqt_exec_callback_Konsole__UrlFilter_connectNotify(Konsole__UrlFilter*, intptr_t, QMetaMethod*);
void miqt_exec_callback_Konsole__UrlFilter_disconnectNotify(Konsole__UrlFilter*, intptr_t, QMetaMethod*);
void miqt_exec_callback_Konsole__FilterObject_activated(intptr_t, QUrl*, bool);
void miqt_exec_callback_Konsole__Filter__HotSpot_activate(Konsole__Filter__HotSpot*, intptr_t, struct miqt_string);
struct miqt_array /* of QAction* */  miqt_exec_callback_Konsole__Filter__HotSpot_actions(Konsole__Filter__HotSpot*, intptr_t);
void miqt_exec_callback_Konsole__RegExpFilter__HotSpot_activate(Konsole__RegExpFilter__HotSpot*, intptr_t, struct miqt_string);
struct miqt_array /* of QAction* */  miqt_exec_callback_Konsole__RegExpFilter__HotSpot_actions(Konsole__RegExpFilter__HotSpot*, intptr_t);
struct miqt_array /* of QAction* */  miqt_exec_callback_Konsole__UrlFilter__HotSpot_actions(Konsole__UrlFilter__HotSpot*, intptr_t);
void miqt_exec_callback_Konsole__UrlFilter__HotSpot_activate(Konsole__UrlFilter__HotSpot*, intptr_t, struct miqt_string);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualKonsoleFilter final : public Konsole::Filter {
public:

	MiqtVirtualKonsoleFilter(): Konsole::Filter() {};

	virtual ~MiqtVirtualKonsoleFilter() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__process = 0;

	// Subclass to allow providing a Go implementation
	virtual void process() override {
		if (handle__process == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_Konsole__Filter_process(this, handle__process);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return Konsole__Filter::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_Konsole__Filter_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool Konsole__Filter_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return Konsole__Filter::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_Konsole__Filter_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool Konsole__Filter_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			Konsole__Filter::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_Konsole__Filter_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void Konsole__Filter_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			Konsole__Filter::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_Konsole__Filter_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void Konsole__Filter_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			Konsole__Filter::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_Konsole__Filter_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void Konsole__Filter_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			Konsole__Filter::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_Konsole__Filter_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void Konsole__Filter_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			Konsole__Filter::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_Konsole__Filter_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void Konsole__Filter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void Konsole__Filter_protectedbase_addHotSpot(bool* _dynamic_cast_ok, void* self, Konsole__Filter__HotSpot* param1);
	friend struct miqt_string Konsole__Filter_protectedbase_buffer(bool* _dynamic_cast_ok, void* self);
	friend void Konsole__Filter_protectedbase_getLineColumn(bool* _dynamic_cast_ok, void* self, int position, int* startLine, int* startColumn);
	friend QObject* Konsole__Filter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int Konsole__Filter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int Konsole__Filter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool Konsole__Filter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

Konsole__Filter* Konsole__Filter_new() {
	return new MiqtVirtualKonsoleFilter();
}

void Konsole__Filter_virtbase(Konsole__Filter* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

void Konsole__Filter_process(Konsole__Filter* self) {
	self->process();
}

void Konsole__Filter_reset(Konsole__Filter* self) {
	self->reset();
}

Konsole__Filter__HotSpot* Konsole__Filter_hotSpotAt(const Konsole__Filter* self, int line, int column) {
	return self->hotSpotAt(static_cast<int>(line), static_cast<int>(column));
}

struct miqt_array /* of Konsole__Filter__HotSpot* */  Konsole__Filter_hotSpots(const Konsole__Filter* self) {
	QList<Konsole::Filter::HotSpot *> _ret = self->hotSpots();
	// Convert QList<> from C++ memory to manually-managed C memory
	Konsole__Filter__HotSpot** _arr = static_cast<Konsole__Filter__HotSpot**>(malloc(sizeof(Konsole__Filter__HotSpot*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of Konsole__Filter__HotSpot* */  Konsole__Filter_hotSpotsAtLine(const Konsole__Filter* self, int line) {
	QList<Konsole::Filter::HotSpot *> _ret = self->hotSpotsAtLine(static_cast<int>(line));
	// Convert QList<> from C++ memory to manually-managed C memory
	Konsole__Filter__HotSpot** _arr = static_cast<Konsole__Filter__HotSpot**>(malloc(sizeof(Konsole__Filter__HotSpot*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool Konsole__Filter_override_virtual_process(void* self, intptr_t slot) {
	MiqtVirtualKonsoleFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleFilter*>( (Konsole__Filter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__process = slot;
	return true;
}

bool Konsole__Filter_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualKonsoleFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleFilter*>( (Konsole__Filter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool Konsole__Filter_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualKonsoleFilter*)(self) )->Konsole::Filter::event(event);

}

bool Konsole__Filter_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualKonsoleFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleFilter*>( (Konsole__Filter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool Konsole__Filter_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualKonsoleFilter*)(self) )->Konsole::Filter::eventFilter(watched, event);

}

bool Konsole__Filter_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualKonsoleFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleFilter*>( (Konsole__Filter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void Konsole__Filter_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualKonsoleFilter*)(self) )->Konsole::Filter::timerEvent(event);

}

bool Konsole__Filter_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualKonsoleFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleFilter*>( (Konsole__Filter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void Konsole__Filter_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualKonsoleFilter*)(self) )->Konsole::Filter::childEvent(event);

}

bool Konsole__Filter_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualKonsoleFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleFilter*>( (Konsole__Filter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void Konsole__Filter_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualKonsoleFilter*)(self) )->Konsole::Filter::customEvent(event);

}

bool Konsole__Filter_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualKonsoleFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleFilter*>( (Konsole__Filter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void Konsole__Filter_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualKonsoleFilter*)(self) )->Konsole::Filter::connectNotify(*signal);

}

bool Konsole__Filter_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualKonsoleFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleFilter*>( (Konsole__Filter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void Konsole__Filter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualKonsoleFilter*)(self) )->Konsole::Filter::disconnectNotify(*signal);

}

void Konsole__Filter_protectedbase_addHotSpot(bool* _dynamic_cast_ok, void* self, Konsole__Filter__HotSpot* param1) {
	MiqtVirtualKonsoleFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleFilter*>( (Konsole__Filter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addHotSpot(param1);

}

struct miqt_string Konsole__Filter_protectedbase_buffer(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualKonsoleFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleFilter*>( (Konsole__Filter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_string){};
	}
	
	*_dynamic_cast_ok = true;
	
	const QString* _ret = self_cast->buffer();
	// Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret->toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;

}

void Konsole__Filter_protectedbase_getLineColumn(bool* _dynamic_cast_ok, void* self, int position, int* startLine, int* startColumn) {
	MiqtVirtualKonsoleFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleFilter*>( (Konsole__Filter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->getLineColumn(static_cast<int>(position), static_cast<int&>(*startLine), static_cast<int&>(*startColumn));

}

QObject* Konsole__Filter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKonsoleFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleFilter*>( (Konsole__Filter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int Konsole__Filter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKonsoleFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleFilter*>( (Konsole__Filter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int Konsole__Filter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualKonsoleFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleFilter*>( (Konsole__Filter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool Konsole__Filter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualKonsoleFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleFilter*>( (Konsole__Filter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void Konsole__Filter_delete(Konsole__Filter* self) {
	delete self;
}

class MiqtVirtualKonsoleRegExpFilter final : public Konsole::RegExpFilter {
public:

	MiqtVirtualKonsoleRegExpFilter(): Konsole::RegExpFilter() {};

	virtual ~MiqtVirtualKonsoleRegExpFilter() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__process = 0;

	// Subclass to allow providing a Go implementation
	virtual void process() override {
		if (handle__process == 0) {
			Konsole__RegExpFilter::process();
			return;
		}
		

		miqt_exec_callback_Konsole__RegExpFilter_process(this, handle__process);

		
	}

	friend void Konsole__RegExpFilter_virtualbase_process(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return Konsole__RegExpFilter::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_Konsole__RegExpFilter_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool Konsole__RegExpFilter_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return Konsole__RegExpFilter::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_Konsole__RegExpFilter_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool Konsole__RegExpFilter_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			Konsole__RegExpFilter::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_Konsole__RegExpFilter_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void Konsole__RegExpFilter_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			Konsole__RegExpFilter::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_Konsole__RegExpFilter_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void Konsole__RegExpFilter_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			Konsole__RegExpFilter::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_Konsole__RegExpFilter_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void Konsole__RegExpFilter_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			Konsole__RegExpFilter::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_Konsole__RegExpFilter_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void Konsole__RegExpFilter_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			Konsole__RegExpFilter::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_Konsole__RegExpFilter_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void Konsole__RegExpFilter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void Konsole__RegExpFilter_protectedbase_addHotSpot(bool* _dynamic_cast_ok, void* self, Konsole__Filter__HotSpot* param1);
	friend struct miqt_string Konsole__RegExpFilter_protectedbase_buffer(bool* _dynamic_cast_ok, void* self);
	friend void Konsole__RegExpFilter_protectedbase_getLineColumn(bool* _dynamic_cast_ok, void* self, int position, int* startLine, int* startColumn);
	friend QObject* Konsole__RegExpFilter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int Konsole__RegExpFilter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int Konsole__RegExpFilter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool Konsole__RegExpFilter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

Konsole__RegExpFilter* Konsole__RegExpFilter_new() {
	return new MiqtVirtualKonsoleRegExpFilter();
}

void Konsole__RegExpFilter_virtbase(Konsole__RegExpFilter* src, Konsole::Filter** outptr_Konsole__Filter) {
	*outptr_Konsole__Filter = static_cast<Konsole::Filter*>(src);
}

void Konsole__RegExpFilter_setRegExp(Konsole__RegExpFilter* self, QRegExp* text) {
	self->setRegExp(*text);
}

QRegExp* Konsole__RegExpFilter_regExp(const Konsole__RegExpFilter* self) {
	return new QRegExp(self->regExp());
}

void Konsole__RegExpFilter_process(Konsole__RegExpFilter* self) {
	self->process();
}

bool Konsole__RegExpFilter_override_virtual_process(void* self, intptr_t slot) {
	MiqtVirtualKonsoleRegExpFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleRegExpFilter*>( (Konsole__RegExpFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__process = slot;
	return true;
}

void Konsole__RegExpFilter_virtualbase_process(void* self) {

	( (MiqtVirtualKonsoleRegExpFilter*)(self) )->Konsole::RegExpFilter::process();

}

bool Konsole__RegExpFilter_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualKonsoleRegExpFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleRegExpFilter*>( (Konsole__RegExpFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool Konsole__RegExpFilter_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualKonsoleRegExpFilter*)(self) )->Konsole::RegExpFilter::event(event);

}

bool Konsole__RegExpFilter_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualKonsoleRegExpFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleRegExpFilter*>( (Konsole__RegExpFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool Konsole__RegExpFilter_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualKonsoleRegExpFilter*)(self) )->Konsole::RegExpFilter::eventFilter(watched, event);

}

bool Konsole__RegExpFilter_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualKonsoleRegExpFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleRegExpFilter*>( (Konsole__RegExpFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void Konsole__RegExpFilter_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualKonsoleRegExpFilter*)(self) )->Konsole::RegExpFilter::timerEvent(event);

}

bool Konsole__RegExpFilter_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualKonsoleRegExpFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleRegExpFilter*>( (Konsole__RegExpFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void Konsole__RegExpFilter_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualKonsoleRegExpFilter*)(self) )->Konsole::RegExpFilter::childEvent(event);

}

bool Konsole__RegExpFilter_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualKonsoleRegExpFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleRegExpFilter*>( (Konsole__RegExpFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void Konsole__RegExpFilter_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualKonsoleRegExpFilter*)(self) )->Konsole::RegExpFilter::customEvent(event);

}

bool Konsole__RegExpFilter_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualKonsoleRegExpFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleRegExpFilter*>( (Konsole__RegExpFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void Konsole__RegExpFilter_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualKonsoleRegExpFilter*)(self) )->Konsole::RegExpFilter::connectNotify(*signal);

}

bool Konsole__RegExpFilter_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualKonsoleRegExpFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleRegExpFilter*>( (Konsole__RegExpFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void Konsole__RegExpFilter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualKonsoleRegExpFilter*)(self) )->Konsole::RegExpFilter::disconnectNotify(*signal);

}

void Konsole__RegExpFilter_protectedbase_addHotSpot(bool* _dynamic_cast_ok, void* self, Konsole__Filter__HotSpot* param1) {
	MiqtVirtualKonsoleRegExpFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleRegExpFilter*>( (Konsole__RegExpFilter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addHotSpot(param1);

}

struct miqt_string Konsole__RegExpFilter_protectedbase_buffer(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualKonsoleRegExpFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleRegExpFilter*>( (Konsole__RegExpFilter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_string){};
	}
	
	*_dynamic_cast_ok = true;
	
	const QString* _ret = self_cast->buffer();
	// Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret->toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;

}

void Konsole__RegExpFilter_protectedbase_getLineColumn(bool* _dynamic_cast_ok, void* self, int position, int* startLine, int* startColumn) {
	MiqtVirtualKonsoleRegExpFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleRegExpFilter*>( (Konsole__RegExpFilter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->getLineColumn(static_cast<int>(position), static_cast<int&>(*startLine), static_cast<int&>(*startColumn));

}

QObject* Konsole__RegExpFilter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKonsoleRegExpFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleRegExpFilter*>( (Konsole__RegExpFilter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int Konsole__RegExpFilter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKonsoleRegExpFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleRegExpFilter*>( (Konsole__RegExpFilter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int Konsole__RegExpFilter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualKonsoleRegExpFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleRegExpFilter*>( (Konsole__RegExpFilter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool Konsole__RegExpFilter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualKonsoleRegExpFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleRegExpFilter*>( (Konsole__RegExpFilter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void Konsole__RegExpFilter_delete(Konsole__RegExpFilter* self) {
	delete self;
}

class MiqtVirtualKonsoleUrlFilter final : public Konsole::UrlFilter {
public:

	MiqtVirtualKonsoleUrlFilter(): Konsole::UrlFilter() {};

	virtual ~MiqtVirtualKonsoleUrlFilter() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__process = 0;

	// Subclass to allow providing a Go implementation
	virtual void process() override {
		if (handle__process == 0) {
			Konsole__UrlFilter::process();
			return;
		}
		

		miqt_exec_callback_Konsole__UrlFilter_process(this, handle__process);

		
	}

	friend void Konsole__UrlFilter_virtualbase_process(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return Konsole__UrlFilter::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_Konsole__UrlFilter_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool Konsole__UrlFilter_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return Konsole__UrlFilter::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_Konsole__UrlFilter_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool Konsole__UrlFilter_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			Konsole__UrlFilter::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_Konsole__UrlFilter_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void Konsole__UrlFilter_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			Konsole__UrlFilter::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_Konsole__UrlFilter_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void Konsole__UrlFilter_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			Konsole__UrlFilter::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_Konsole__UrlFilter_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void Konsole__UrlFilter_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			Konsole__UrlFilter::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_Konsole__UrlFilter_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void Konsole__UrlFilter_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			Konsole__UrlFilter::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_Konsole__UrlFilter_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void Konsole__UrlFilter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void Konsole__UrlFilter_protectedbase_addHotSpot(bool* _dynamic_cast_ok, void* self, Konsole__Filter__HotSpot* param1);
	friend struct miqt_string Konsole__UrlFilter_protectedbase_buffer(bool* _dynamic_cast_ok, void* self);
	friend void Konsole__UrlFilter_protectedbase_getLineColumn(bool* _dynamic_cast_ok, void* self, int position, int* startLine, int* startColumn);
	friend QObject* Konsole__UrlFilter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int Konsole__UrlFilter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int Konsole__UrlFilter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool Konsole__UrlFilter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

Konsole__UrlFilter* Konsole__UrlFilter_new() {
	return new MiqtVirtualKonsoleUrlFilter();
}

void Konsole__UrlFilter_virtbase(Konsole__UrlFilter* src, Konsole::RegExpFilter** outptr_Konsole__RegExpFilter) {
	*outptr_Konsole__RegExpFilter = static_cast<Konsole::RegExpFilter*>(src);
}

QMetaObject* Konsole__UrlFilter_metaObject(const Konsole__UrlFilter* self) {
	return (QMetaObject*) self->metaObject();
}

void* Konsole__UrlFilter_metacast(Konsole__UrlFilter* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string Konsole__UrlFilter_tr(const char* s) {
	QString _ret = Konsole::UrlFilter::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string Konsole__UrlFilter_trUtf8(const char* s) {
	QString _ret = Konsole::UrlFilter::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void Konsole__UrlFilter_activated(Konsole__UrlFilter* self, QUrl* url, bool fromContextMenu) {
	self->activated(*url, fromContextMenu);
}

void Konsole__UrlFilter_connect_activated(Konsole__UrlFilter* self, intptr_t slot) {
	MiqtVirtualKonsoleUrlFilter::connect(self, static_cast<void (Konsole::UrlFilter::*)(const QUrl&, bool)>(&Konsole::UrlFilter::activated), self, [=](const QUrl& url, bool fromContextMenu) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		bool sigval2 = fromContextMenu;
		miqt_exec_callback_Konsole__UrlFilter_activated(slot, sigval1, sigval2);
	});
}

struct miqt_string Konsole__UrlFilter_tr2(const char* s, const char* c) {
	QString _ret = Konsole::UrlFilter::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string Konsole__UrlFilter_tr3(const char* s, const char* c, int n) {
	QString _ret = Konsole::UrlFilter::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string Konsole__UrlFilter_trUtf82(const char* s, const char* c) {
	QString _ret = Konsole::UrlFilter::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string Konsole__UrlFilter_trUtf83(const char* s, const char* c, int n) {
	QString _ret = Konsole::UrlFilter::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool Konsole__UrlFilter_override_virtual_process(void* self, intptr_t slot) {
	MiqtVirtualKonsoleUrlFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleUrlFilter*>( (Konsole__UrlFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__process = slot;
	return true;
}

void Konsole__UrlFilter_virtualbase_process(void* self) {

	( (MiqtVirtualKonsoleUrlFilter*)(self) )->Konsole::UrlFilter::process();

}

bool Konsole__UrlFilter_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualKonsoleUrlFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleUrlFilter*>( (Konsole__UrlFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool Konsole__UrlFilter_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualKonsoleUrlFilter*)(self) )->Konsole::UrlFilter::event(event);

}

bool Konsole__UrlFilter_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualKonsoleUrlFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleUrlFilter*>( (Konsole__UrlFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool Konsole__UrlFilter_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualKonsoleUrlFilter*)(self) )->Konsole::UrlFilter::eventFilter(watched, event);

}

bool Konsole__UrlFilter_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualKonsoleUrlFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleUrlFilter*>( (Konsole__UrlFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void Konsole__UrlFilter_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualKonsoleUrlFilter*)(self) )->Konsole::UrlFilter::timerEvent(event);

}

bool Konsole__UrlFilter_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualKonsoleUrlFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleUrlFilter*>( (Konsole__UrlFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void Konsole__UrlFilter_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualKonsoleUrlFilter*)(self) )->Konsole::UrlFilter::childEvent(event);

}

bool Konsole__UrlFilter_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualKonsoleUrlFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleUrlFilter*>( (Konsole__UrlFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void Konsole__UrlFilter_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualKonsoleUrlFilter*)(self) )->Konsole::UrlFilter::customEvent(event);

}

bool Konsole__UrlFilter_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualKonsoleUrlFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleUrlFilter*>( (Konsole__UrlFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void Konsole__UrlFilter_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualKonsoleUrlFilter*)(self) )->Konsole::UrlFilter::connectNotify(*signal);

}

bool Konsole__UrlFilter_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualKonsoleUrlFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleUrlFilter*>( (Konsole__UrlFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void Konsole__UrlFilter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualKonsoleUrlFilter*)(self) )->Konsole::UrlFilter::disconnectNotify(*signal);

}

void Konsole__UrlFilter_protectedbase_addHotSpot(bool* _dynamic_cast_ok, void* self, Konsole__Filter__HotSpot* param1) {
	MiqtVirtualKonsoleUrlFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleUrlFilter*>( (Konsole__UrlFilter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addHotSpot(param1);

}

struct miqt_string Konsole__UrlFilter_protectedbase_buffer(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualKonsoleUrlFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleUrlFilter*>( (Konsole__UrlFilter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_string){};
	}
	
	*_dynamic_cast_ok = true;
	
	const QString* _ret = self_cast->buffer();
	// Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret->toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;

}

void Konsole__UrlFilter_protectedbase_getLineColumn(bool* _dynamic_cast_ok, void* self, int position, int* startLine, int* startColumn) {
	MiqtVirtualKonsoleUrlFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleUrlFilter*>( (Konsole__UrlFilter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->getLineColumn(static_cast<int>(position), static_cast<int&>(*startLine), static_cast<int&>(*startColumn));

}

QObject* Konsole__UrlFilter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKonsoleUrlFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleUrlFilter*>( (Konsole__UrlFilter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int Konsole__UrlFilter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKonsoleUrlFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleUrlFilter*>( (Konsole__UrlFilter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int Konsole__UrlFilter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualKonsoleUrlFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleUrlFilter*>( (Konsole__UrlFilter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool Konsole__UrlFilter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualKonsoleUrlFilter* self_cast = dynamic_cast<MiqtVirtualKonsoleUrlFilter*>( (Konsole__UrlFilter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void Konsole__UrlFilter_delete(Konsole__UrlFilter* self) {
	delete self;
}

void Konsole__FilterObject_virtbase(Konsole__FilterObject* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* Konsole__FilterObject_metaObject(const Konsole__FilterObject* self) {
	return (QMetaObject*) self->metaObject();
}

void* Konsole__FilterObject_metacast(Konsole__FilterObject* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string Konsole__FilterObject_tr(const char* s) {
	QString _ret = Konsole::FilterObject::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string Konsole__FilterObject_trUtf8(const char* s) {
	QString _ret = Konsole::FilterObject::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void Konsole__FilterObject_emitActivated(Konsole__FilterObject* self, QUrl* url, bool fromContextMenu) {
	self->emitActivated(*url, fromContextMenu);
}

void Konsole__FilterObject_activate(Konsole__FilterObject* self) {
	self->activate();
}

void Konsole__FilterObject_activated(Konsole__FilterObject* self, QUrl* url, bool fromContextMenu) {
	self->activated(*url, fromContextMenu);
}

void Konsole__FilterObject_connect_activated(Konsole__FilterObject* self, intptr_t slot) {
	Konsole::FilterObject::connect(self, static_cast<void (Konsole::FilterObject::*)(const QUrl&, bool)>(&Konsole::FilterObject::activated), self, [=](const QUrl& url, bool fromContextMenu) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		bool sigval2 = fromContextMenu;
		miqt_exec_callback_Konsole__FilterObject_activated(slot, sigval1, sigval2);
	});
}

struct miqt_string Konsole__FilterObject_tr2(const char* s, const char* c) {
	QString _ret = Konsole::FilterObject::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string Konsole__FilterObject_tr3(const char* s, const char* c, int n) {
	QString _ret = Konsole::FilterObject::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string Konsole__FilterObject_trUtf82(const char* s, const char* c) {
	QString _ret = Konsole::FilterObject::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string Konsole__FilterObject_trUtf83(const char* s, const char* c, int n) {
	QString _ret = Konsole::FilterObject::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void Konsole__FilterObject_delete(Konsole__FilterObject* self) {
	delete self;
}

Konsole__FilterChain* Konsole__FilterChain_new(Konsole__FilterChain* param1) {
	return new Konsole::FilterChain(*param1);
}

void Konsole__FilterChain_addFilter(Konsole__FilterChain* self, Konsole__Filter* filter) {
	self->addFilter(filter);
}

void Konsole__FilterChain_removeFilter(Konsole__FilterChain* self, Konsole__Filter* filter) {
	self->removeFilter(filter);
}

bool Konsole__FilterChain_containsFilter(Konsole__FilterChain* self, Konsole__Filter* filter) {
	return self->containsFilter(filter);
}

void Konsole__FilterChain_clear(Konsole__FilterChain* self) {
	self->clear();
}

void Konsole__FilterChain_reset(Konsole__FilterChain* self) {
	self->reset();
}

void Konsole__FilterChain_process(Konsole__FilterChain* self) {
	self->process();
}

void Konsole__FilterChain_operatorAssign(Konsole__FilterChain* self, Konsole__FilterChain* param1) {
	self->operator=(*param1);
}

void Konsole__FilterChain_delete(Konsole__FilterChain* self) {
	delete self;
}

Konsole__TerminalImageFilterChain* Konsole__TerminalImageFilterChain_new() {
	return new Konsole::TerminalImageFilterChain();
}

Konsole__TerminalImageFilterChain* Konsole__TerminalImageFilterChain_new2(Konsole__TerminalImageFilterChain* param1) {
	return new Konsole::TerminalImageFilterChain(*param1);
}

void Konsole__TerminalImageFilterChain_virtbase(Konsole__TerminalImageFilterChain* src, Konsole::FilterChain** outptr_Konsole__FilterChain) {
	*outptr_Konsole__FilterChain = static_cast<Konsole::FilterChain*>(src);
}

void Konsole__TerminalImageFilterChain_delete(Konsole__TerminalImageFilterChain* self) {
	delete self;
}

class MiqtVirtualKonsoleFilterHotSpot final : public Konsole::Filter::HotSpot {
public:

	MiqtVirtualKonsoleFilterHotSpot(int startLine, int startColumn, int endLine, int endColumn): Konsole::Filter::HotSpot(startLine, startColumn, endLine, endColumn) {};
	MiqtVirtualKonsoleFilterHotSpot(const Konsole::Filter::HotSpot& param1): Konsole::Filter::HotSpot(param1) {};

	virtual ~MiqtVirtualKonsoleFilterHotSpot() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__activate = 0;

	// Subclass to allow providing a Go implementation
	virtual void activate(const QString& action) override {
		if (handle__activate == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		const QString action_ret = action;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray action_b = action_ret.toUtf8();
		struct miqt_string action_ms;
		action_ms.len = action_b.length();
		action_ms.data = static_cast<char*>(malloc(action_ms.len));
		memcpy(action_ms.data, action_b.data(), action_ms.len);
		struct miqt_string sigval1 = action_ms;

		miqt_exec_callback_Konsole__Filter__HotSpot_activate(this, handle__activate, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actions = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QAction *> actions() override {
		if (handle__actions == 0) {
			return Konsole__Filter__HotSpot::actions();
		}
		

		struct miqt_array /* of QAction* */  callback_return_value = miqt_exec_callback_Konsole__Filter__HotSpot_actions(this, handle__actions);
		QList<QAction *> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QAction** callback_return_value_arr = static_cast<QAction**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(callback_return_value_arr[i]);
		}

		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QAction* */  Konsole__Filter__HotSpot_virtualbase_actions(void* self);

	// Wrappers to allow calling protected methods:
	friend void Konsole__Filter__HotSpot_protectedbase_setType(bool* _dynamic_cast_ok, void* self, int type);
};

Konsole__Filter__HotSpot* Konsole__Filter__HotSpot_new(int startLine, int startColumn, int endLine, int endColumn) {
	return new MiqtVirtualKonsoleFilterHotSpot(static_cast<int>(startLine), static_cast<int>(startColumn), static_cast<int>(endLine), static_cast<int>(endColumn));
}

Konsole__Filter__HotSpot* Konsole__Filter__HotSpot_new2(Konsole__Filter__HotSpot* param1) {
	return new MiqtVirtualKonsoleFilterHotSpot(*param1);
}

int Konsole__Filter__HotSpot_startLine(const Konsole__Filter__HotSpot* self) {
	return self->startLine();
}

int Konsole__Filter__HotSpot_endLine(const Konsole__Filter__HotSpot* self) {
	return self->endLine();
}

int Konsole__Filter__HotSpot_startColumn(const Konsole__Filter__HotSpot* self) {
	return self->startColumn();
}

int Konsole__Filter__HotSpot_endColumn(const Konsole__Filter__HotSpot* self) {
	return self->endColumn();
}

int Konsole__Filter__HotSpot_type(const Konsole__Filter__HotSpot* self) {
	Konsole::Filter::HotSpot::Type _ret = self->type();
	return static_cast<int>(_ret);
}

void Konsole__Filter__HotSpot_activate(Konsole__Filter__HotSpot* self, struct miqt_string action) {
	QString action_QString = QString::fromUtf8(action.data, action.len);
	self->activate(action_QString);
}

struct miqt_array /* of QAction* */  Konsole__Filter__HotSpot_actions(Konsole__Filter__HotSpot* self) {
	QList<QAction *> _ret = self->actions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool Konsole__Filter__HotSpot_override_virtual_activate(void* self, intptr_t slot) {
	MiqtVirtualKonsoleFilterHotSpot* self_cast = dynamic_cast<MiqtVirtualKonsoleFilterHotSpot*>( (Konsole__Filter__HotSpot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__activate = slot;
	return true;
}

bool Konsole__Filter__HotSpot_override_virtual_actions(void* self, intptr_t slot) {
	MiqtVirtualKonsoleFilterHotSpot* self_cast = dynamic_cast<MiqtVirtualKonsoleFilterHotSpot*>( (Konsole__Filter__HotSpot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actions = slot;
	return true;
}

struct miqt_array /* of QAction* */  Konsole__Filter__HotSpot_virtualbase_actions(void* self) {

	QList<QAction *> _ret = ( (MiqtVirtualKonsoleFilterHotSpot*)(self) )->Konsole::Filter::HotSpot::actions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;

}

void Konsole__Filter__HotSpot_protectedbase_setType(bool* _dynamic_cast_ok, void* self, int type) {
	MiqtVirtualKonsoleFilterHotSpot* self_cast = dynamic_cast<MiqtVirtualKonsoleFilterHotSpot*>( (Konsole__Filter__HotSpot*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setType(static_cast<MiqtVirtualKonsoleFilterHotSpot::Type>(type));

}

void Konsole__Filter__HotSpot_delete(Konsole__Filter__HotSpot* self) {
	delete self;
}

class MiqtVirtualKonsoleRegExpFilterHotSpot final : public Konsole::RegExpFilter::HotSpot {
public:

	MiqtVirtualKonsoleRegExpFilterHotSpot(int startLine, int startColumn, int endLine, int endColumn): Konsole::RegExpFilter::HotSpot(startLine, startColumn, endLine, endColumn) {};
	MiqtVirtualKonsoleRegExpFilterHotSpot(const Konsole::RegExpFilter::HotSpot& param1): Konsole::RegExpFilter::HotSpot(param1) {};

	virtual ~MiqtVirtualKonsoleRegExpFilterHotSpot() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__activate = 0;

	// Subclass to allow providing a Go implementation
	virtual void activate(const QString& action) override {
		if (handle__activate == 0) {
			Konsole__RegExpFilter__HotSpot::activate(action);
			return;
		}
		
		const QString action_ret = action;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray action_b = action_ret.toUtf8();
		struct miqt_string action_ms;
		action_ms.len = action_b.length();
		action_ms.data = static_cast<char*>(malloc(action_ms.len));
		memcpy(action_ms.data, action_b.data(), action_ms.len);
		struct miqt_string sigval1 = action_ms;

		miqt_exec_callback_Konsole__RegExpFilter__HotSpot_activate(this, handle__activate, sigval1);

		
	}

	friend void Konsole__RegExpFilter__HotSpot_virtualbase_activate(void* self, struct miqt_string action);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actions = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QAction *> actions() override {
		if (handle__actions == 0) {
			return Konsole__RegExpFilter__HotSpot::actions();
		}
		

		struct miqt_array /* of QAction* */  callback_return_value = miqt_exec_callback_Konsole__RegExpFilter__HotSpot_actions(this, handle__actions);
		QList<QAction *> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QAction** callback_return_value_arr = static_cast<QAction**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(callback_return_value_arr[i]);
		}

		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QAction* */  Konsole__RegExpFilter__HotSpot_virtualbase_actions(void* self);

	// Wrappers to allow calling protected methods:
	friend void Konsole__RegExpFilter__HotSpot_protectedbase_setType(bool* _dynamic_cast_ok, void* self, int type);
};

Konsole__RegExpFilter__HotSpot* Konsole__RegExpFilter__HotSpot_new(int startLine, int startColumn, int endLine, int endColumn) {
	return new MiqtVirtualKonsoleRegExpFilterHotSpot(static_cast<int>(startLine), static_cast<int>(startColumn), static_cast<int>(endLine), static_cast<int>(endColumn));
}

Konsole__RegExpFilter__HotSpot* Konsole__RegExpFilter__HotSpot_new2(Konsole__RegExpFilter__HotSpot* param1) {
	return new MiqtVirtualKonsoleRegExpFilterHotSpot(*param1);
}

void Konsole__RegExpFilter__HotSpot_virtbase(Konsole__RegExpFilter__HotSpot* src, Konsole::Filter::HotSpot** outptr_Konsole__Filter__HotSpot) {
	*outptr_Konsole__Filter__HotSpot = static_cast<Konsole::Filter::HotSpot*>(src);
}

void Konsole__RegExpFilter__HotSpot_activate(Konsole__RegExpFilter__HotSpot* self, struct miqt_string action) {
	QString action_QString = QString::fromUtf8(action.data, action.len);
	self->activate(action_QString);
}

void Konsole__RegExpFilter__HotSpot_setCapturedTexts(Konsole__RegExpFilter__HotSpot* self, struct miqt_array /* of struct miqt_string */  texts) {
	QStringList texts_QList;
	texts_QList.reserve(texts.len);
	struct miqt_string* texts_arr = static_cast<struct miqt_string*>(texts.data);
	for(size_t i = 0; i < texts.len; ++i) {
		QString texts_arr_i_QString = QString::fromUtf8(texts_arr[i].data, texts_arr[i].len);
		texts_QList.push_back(texts_arr_i_QString);
	}
	self->setCapturedTexts(texts_QList);
}

struct miqt_array /* of struct miqt_string */  Konsole__RegExpFilter__HotSpot_capturedTexts(const Konsole__RegExpFilter__HotSpot* self) {
	QStringList _ret = self->capturedTexts();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool Konsole__RegExpFilter__HotSpot_override_virtual_activate(void* self, intptr_t slot) {
	MiqtVirtualKonsoleRegExpFilterHotSpot* self_cast = dynamic_cast<MiqtVirtualKonsoleRegExpFilterHotSpot*>( (Konsole__RegExpFilter__HotSpot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__activate = slot;
	return true;
}

void Konsole__RegExpFilter__HotSpot_virtualbase_activate(void* self, struct miqt_string action) {
	QString action_QString = QString::fromUtf8(action.data, action.len);

	( (MiqtVirtualKonsoleRegExpFilterHotSpot*)(self) )->Konsole::RegExpFilter::HotSpot::activate(action_QString);

}

bool Konsole__RegExpFilter__HotSpot_override_virtual_actions(void* self, intptr_t slot) {
	MiqtVirtualKonsoleRegExpFilterHotSpot* self_cast = dynamic_cast<MiqtVirtualKonsoleRegExpFilterHotSpot*>( (Konsole__RegExpFilter__HotSpot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actions = slot;
	return true;
}

struct miqt_array /* of QAction* */  Konsole__RegExpFilter__HotSpot_virtualbase_actions(void* self) {

	QList<QAction *> _ret = ( (MiqtVirtualKonsoleRegExpFilterHotSpot*)(self) )->Konsole::RegExpFilter::HotSpot::actions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;

}

void Konsole__RegExpFilter__HotSpot_protectedbase_setType(bool* _dynamic_cast_ok, void* self, int type) {
	MiqtVirtualKonsoleRegExpFilterHotSpot* self_cast = dynamic_cast<MiqtVirtualKonsoleRegExpFilterHotSpot*>( (Konsole__RegExpFilter__HotSpot*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setType(static_cast<MiqtVirtualKonsoleRegExpFilterHotSpot::Type>(type));

}

void Konsole__RegExpFilter__HotSpot_delete(Konsole__RegExpFilter__HotSpot* self) {
	delete self;
}

class MiqtVirtualKonsoleUrlFilterHotSpot final : public Konsole::UrlFilter::HotSpot {
public:

	MiqtVirtualKonsoleUrlFilterHotSpot(int startLine, int startColumn, int endLine, int endColumn): Konsole::UrlFilter::HotSpot(startLine, startColumn, endLine, endColumn) {};

	virtual ~MiqtVirtualKonsoleUrlFilterHotSpot() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actions = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QAction *> actions() override {
		if (handle__actions == 0) {
			return Konsole__UrlFilter__HotSpot::actions();
		}
		

		struct miqt_array /* of QAction* */  callback_return_value = miqt_exec_callback_Konsole__UrlFilter__HotSpot_actions(this, handle__actions);
		QList<QAction *> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QAction** callback_return_value_arr = static_cast<QAction**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(callback_return_value_arr[i]);
		}

		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QAction* */  Konsole__UrlFilter__HotSpot_virtualbase_actions(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__activate = 0;

	// Subclass to allow providing a Go implementation
	virtual void activate(const QString& action) override {
		if (handle__activate == 0) {
			Konsole__UrlFilter__HotSpot::activate(action);
			return;
		}
		
		const QString action_ret = action;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray action_b = action_ret.toUtf8();
		struct miqt_string action_ms;
		action_ms.len = action_b.length();
		action_ms.data = static_cast<char*>(malloc(action_ms.len));
		memcpy(action_ms.data, action_b.data(), action_ms.len);
		struct miqt_string sigval1 = action_ms;

		miqt_exec_callback_Konsole__UrlFilter__HotSpot_activate(this, handle__activate, sigval1);

		
	}

	friend void Konsole__UrlFilter__HotSpot_virtualbase_activate(void* self, struct miqt_string action);

	// Wrappers to allow calling protected methods:
	friend void Konsole__UrlFilter__HotSpot_protectedbase_setType(bool* _dynamic_cast_ok, void* self, int type);
};

Konsole__UrlFilter__HotSpot* Konsole__UrlFilter__HotSpot_new(int startLine, int startColumn, int endLine, int endColumn) {
	return new MiqtVirtualKonsoleUrlFilterHotSpot(static_cast<int>(startLine), static_cast<int>(startColumn), static_cast<int>(endLine), static_cast<int>(endColumn));
}

void Konsole__UrlFilter__HotSpot_virtbase(Konsole__UrlFilter__HotSpot* src, Konsole::RegExpFilter::HotSpot** outptr_Konsole__RegExpFilter__HotSpot) {
	*outptr_Konsole__RegExpFilter__HotSpot = static_cast<Konsole::RegExpFilter::HotSpot*>(src);
}

Konsole__FilterObject* Konsole__UrlFilter__HotSpot_getUrlObject(const Konsole__UrlFilter__HotSpot* self) {
	return self->getUrlObject();
}

struct miqt_array /* of QAction* */  Konsole__UrlFilter__HotSpot_actions(Konsole__UrlFilter__HotSpot* self) {
	QList<QAction *> _ret = self->actions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void Konsole__UrlFilter__HotSpot_activate(Konsole__UrlFilter__HotSpot* self, struct miqt_string action) {
	QString action_QString = QString::fromUtf8(action.data, action.len);
	self->activate(action_QString);
}

bool Konsole__UrlFilter__HotSpot_override_virtual_actions(void* self, intptr_t slot) {
	MiqtVirtualKonsoleUrlFilterHotSpot* self_cast = dynamic_cast<MiqtVirtualKonsoleUrlFilterHotSpot*>( (Konsole__UrlFilter__HotSpot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actions = slot;
	return true;
}

struct miqt_array /* of QAction* */  Konsole__UrlFilter__HotSpot_virtualbase_actions(void* self) {

	QList<QAction *> _ret = ( (MiqtVirtualKonsoleUrlFilterHotSpot*)(self) )->Konsole::UrlFilter::HotSpot::actions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;

}

bool Konsole__UrlFilter__HotSpot_override_virtual_activate(void* self, intptr_t slot) {
	MiqtVirtualKonsoleUrlFilterHotSpot* self_cast = dynamic_cast<MiqtVirtualKonsoleUrlFilterHotSpot*>( (Konsole__UrlFilter__HotSpot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__activate = slot;
	return true;
}

void Konsole__UrlFilter__HotSpot_virtualbase_activate(void* self, struct miqt_string action) {
	QString action_QString = QString::fromUtf8(action.data, action.len);

	( (MiqtVirtualKonsoleUrlFilterHotSpot*)(self) )->Konsole::UrlFilter::HotSpot::activate(action_QString);

}

void Konsole__UrlFilter__HotSpot_protectedbase_setType(bool* _dynamic_cast_ok, void* self, int type) {
	MiqtVirtualKonsoleUrlFilterHotSpot* self_cast = dynamic_cast<MiqtVirtualKonsoleUrlFilterHotSpot*>( (Konsole__UrlFilter__HotSpot*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setType(static_cast<MiqtVirtualKonsoleUrlFilterHotSpot::Type>(type));

}

void Konsole__UrlFilter__HotSpot_delete(Konsole__UrlFilter__HotSpot* self) {
	delete self;
}

