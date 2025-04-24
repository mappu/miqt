#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPdfDocument>
#include <QPdfPageNavigation>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qpdfpagenavigation.h>
#include "gen_qpdfpagenavigation.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QPdfPageNavigation_documentChanged(intptr_t, QPdfDocument*);
void miqt_exec_callback_QPdfPageNavigation_currentPageChanged(intptr_t, int);
void miqt_exec_callback_QPdfPageNavigation_pageCountChanged(intptr_t, int);
void miqt_exec_callback_QPdfPageNavigation_canGoToPreviousPageChanged(intptr_t, bool);
void miqt_exec_callback_QPdfPageNavigation_canGoToNextPageChanged(intptr_t, bool);
bool miqt_exec_callback_QPdfPageNavigation_event(QPdfPageNavigation*, intptr_t, QEvent*);
bool miqt_exec_callback_QPdfPageNavigation_eventFilter(QPdfPageNavigation*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPdfPageNavigation_timerEvent(QPdfPageNavigation*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPdfPageNavigation_childEvent(QPdfPageNavigation*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPdfPageNavigation_customEvent(QPdfPageNavigation*, intptr_t, QEvent*);
void miqt_exec_callback_QPdfPageNavigation_connectNotify(QPdfPageNavigation*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPdfPageNavigation_disconnectNotify(QPdfPageNavigation*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPdfPageNavigation final : public QPdfPageNavigation {
public:

	MiqtVirtualQPdfPageNavigation(): QPdfPageNavigation() {};
	MiqtVirtualQPdfPageNavigation(QObject* parent): QPdfPageNavigation(parent) {};

	virtual ~MiqtVirtualQPdfPageNavigation() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPdfPageNavigation::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPdfPageNavigation_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QPdfPageNavigation_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QPdfPageNavigation::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPdfPageNavigation_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QPdfPageNavigation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPdfPageNavigation::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPdfPageNavigation_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QPdfPageNavigation_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPdfPageNavigation::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPdfPageNavigation_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QPdfPageNavigation_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPdfPageNavigation::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPdfPageNavigation_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QPdfPageNavigation_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPdfPageNavigation::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPdfPageNavigation_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QPdfPageNavigation_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPdfPageNavigation::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPdfPageNavigation_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QPdfPageNavigation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QPdfPageNavigation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPdfPageNavigation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPdfPageNavigation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPdfPageNavigation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPdfPageNavigation* QPdfPageNavigation_new() {
	return new MiqtVirtualQPdfPageNavigation();
}

QPdfPageNavigation* QPdfPageNavigation_new2(QObject* parent) {
	return new MiqtVirtualQPdfPageNavigation(parent);
}

void QPdfPageNavigation_virtbase(QPdfPageNavigation* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QPdfPageNavigation_metaObject(const QPdfPageNavigation* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPdfPageNavigation_metacast(QPdfPageNavigation* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPdfPageNavigation_tr(const char* s) {
	QString _ret = QPdfPageNavigation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfPageNavigation_trUtf8(const char* s) {
	QString _ret = QPdfPageNavigation::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPdfDocument* QPdfPageNavigation_document(const QPdfPageNavigation* self) {
	return self->document();
}

void QPdfPageNavigation_setDocument(QPdfPageNavigation* self, QPdfDocument* document) {
	self->setDocument(document);
}

int QPdfPageNavigation_currentPage(const QPdfPageNavigation* self) {
	return self->currentPage();
}

void QPdfPageNavigation_setCurrentPage(QPdfPageNavigation* self, int currentPage) {
	self->setCurrentPage(static_cast<int>(currentPage));
}

int QPdfPageNavigation_pageCount(const QPdfPageNavigation* self) {
	return self->pageCount();
}

bool QPdfPageNavigation_canGoToPreviousPage(const QPdfPageNavigation* self) {
	return self->canGoToPreviousPage();
}

bool QPdfPageNavigation_canGoToNextPage(const QPdfPageNavigation* self) {
	return self->canGoToNextPage();
}

void QPdfPageNavigation_goToPreviousPage(QPdfPageNavigation* self) {
	self->goToPreviousPage();
}

void QPdfPageNavigation_goToNextPage(QPdfPageNavigation* self) {
	self->goToNextPage();
}

void QPdfPageNavigation_documentChanged(QPdfPageNavigation* self, QPdfDocument* document) {
	self->documentChanged(document);
}

void QPdfPageNavigation_connect_documentChanged(QPdfPageNavigation* self, intptr_t slot) {
	MiqtVirtualQPdfPageNavigation::connect(self, static_cast<void (QPdfPageNavigation::*)(QPdfDocument*)>(&QPdfPageNavigation::documentChanged), self, [=](QPdfDocument* document) {
		QPdfDocument* sigval1 = document;
		miqt_exec_callback_QPdfPageNavigation_documentChanged(slot, sigval1);
	});
}

void QPdfPageNavigation_currentPageChanged(QPdfPageNavigation* self, int currentPage) {
	self->currentPageChanged(static_cast<int>(currentPage));
}

void QPdfPageNavigation_connect_currentPageChanged(QPdfPageNavigation* self, intptr_t slot) {
	MiqtVirtualQPdfPageNavigation::connect(self, static_cast<void (QPdfPageNavigation::*)(int)>(&QPdfPageNavigation::currentPageChanged), self, [=](int currentPage) {
		int sigval1 = currentPage;
		miqt_exec_callback_QPdfPageNavigation_currentPageChanged(slot, sigval1);
	});
}

void QPdfPageNavigation_pageCountChanged(QPdfPageNavigation* self, int pageCount) {
	self->pageCountChanged(static_cast<int>(pageCount));
}

void QPdfPageNavigation_connect_pageCountChanged(QPdfPageNavigation* self, intptr_t slot) {
	MiqtVirtualQPdfPageNavigation::connect(self, static_cast<void (QPdfPageNavigation::*)(int)>(&QPdfPageNavigation::pageCountChanged), self, [=](int pageCount) {
		int sigval1 = pageCount;
		miqt_exec_callback_QPdfPageNavigation_pageCountChanged(slot, sigval1);
	});
}

void QPdfPageNavigation_canGoToPreviousPageChanged(QPdfPageNavigation* self, bool canGo) {
	self->canGoToPreviousPageChanged(canGo);
}

void QPdfPageNavigation_connect_canGoToPreviousPageChanged(QPdfPageNavigation* self, intptr_t slot) {
	MiqtVirtualQPdfPageNavigation::connect(self, static_cast<void (QPdfPageNavigation::*)(bool)>(&QPdfPageNavigation::canGoToPreviousPageChanged), self, [=](bool canGo) {
		bool sigval1 = canGo;
		miqt_exec_callback_QPdfPageNavigation_canGoToPreviousPageChanged(slot, sigval1);
	});
}

void QPdfPageNavigation_canGoToNextPageChanged(QPdfPageNavigation* self, bool canGo) {
	self->canGoToNextPageChanged(canGo);
}

void QPdfPageNavigation_connect_canGoToNextPageChanged(QPdfPageNavigation* self, intptr_t slot) {
	MiqtVirtualQPdfPageNavigation::connect(self, static_cast<void (QPdfPageNavigation::*)(bool)>(&QPdfPageNavigation::canGoToNextPageChanged), self, [=](bool canGo) {
		bool sigval1 = canGo;
		miqt_exec_callback_QPdfPageNavigation_canGoToNextPageChanged(slot, sigval1);
	});
}

struct miqt_string QPdfPageNavigation_tr2(const char* s, const char* c) {
	QString _ret = QPdfPageNavigation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfPageNavigation_tr3(const char* s, const char* c, int n) {
	QString _ret = QPdfPageNavigation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfPageNavigation_trUtf82(const char* s, const char* c) {
	QString _ret = QPdfPageNavigation::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfPageNavigation_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QPdfPageNavigation::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPdfPageNavigation_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPdfPageNavigation* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigation*>( (QPdfPageNavigation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPdfPageNavigation_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQPdfPageNavigation*)(self) )->QPdfPageNavigation::event(event);

}

bool QPdfPageNavigation_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPdfPageNavigation* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigation*>( (QPdfPageNavigation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPdfPageNavigation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQPdfPageNavigation*)(self) )->QPdfPageNavigation::eventFilter(watched, event);

}

bool QPdfPageNavigation_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfPageNavigation* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigation*>( (QPdfPageNavigation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPdfPageNavigation_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQPdfPageNavigation*)(self) )->QPdfPageNavigation::timerEvent(event);

}

bool QPdfPageNavigation_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfPageNavigation* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigation*>( (QPdfPageNavigation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPdfPageNavigation_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQPdfPageNavigation*)(self) )->QPdfPageNavigation::childEvent(event);

}

bool QPdfPageNavigation_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfPageNavigation* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigation*>( (QPdfPageNavigation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPdfPageNavigation_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQPdfPageNavigation*)(self) )->QPdfPageNavigation::customEvent(event);

}

bool QPdfPageNavigation_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPdfPageNavigation* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigation*>( (QPdfPageNavigation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPdfPageNavigation_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQPdfPageNavigation*)(self) )->QPdfPageNavigation::connectNotify(*signal);

}

bool QPdfPageNavigation_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPdfPageNavigation* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigation*>( (QPdfPageNavigation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPdfPageNavigation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQPdfPageNavigation*)(self) )->QPdfPageNavigation::disconnectNotify(*signal);

}

QObject* QPdfPageNavigation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPdfPageNavigation* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigation*>( (QPdfPageNavigation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPdfPageNavigation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPdfPageNavigation* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigation*>( (QPdfPageNavigation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPdfPageNavigation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPdfPageNavigation* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigation*>( (QPdfPageNavigation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPdfPageNavigation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPdfPageNavigation* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigation*>( (QPdfPageNavigation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPdfPageNavigation_delete(QPdfPageNavigation* self) {
	delete self;
}

