#include <QAbstractListModel>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QImage>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPdfDocument>
#include <QPdfDocumentRenderOptions>
#include <QPdfSelection>
#include <QPointF>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qpdfdocument.h>
#include "gen_qpdfdocument.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QPdfDocument_passwordChanged(intptr_t);
void miqt_exec_callback_QPdfDocument_passwordRequired(intptr_t);
void miqt_exec_callback_QPdfDocument_statusChanged(intptr_t, int);
void miqt_exec_callback_QPdfDocument_pageCountChanged(intptr_t, int);
void miqt_exec_callback_QPdfDocument_pageModelChanged(intptr_t);
bool miqt_exec_callback_QPdfDocument_event(QPdfDocument*, intptr_t, QEvent*);
bool miqt_exec_callback_QPdfDocument_eventFilter(QPdfDocument*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPdfDocument_timerEvent(QPdfDocument*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPdfDocument_childEvent(QPdfDocument*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPdfDocument_customEvent(QPdfDocument*, intptr_t, QEvent*);
void miqt_exec_callback_QPdfDocument_connectNotify(QPdfDocument*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPdfDocument_disconnectNotify(QPdfDocument*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPdfDocument final : public QPdfDocument {
public:

	MiqtVirtualQPdfDocument(): QPdfDocument() {};
	MiqtVirtualQPdfDocument(QObject* parent): QPdfDocument(parent) {};

	virtual ~MiqtVirtualQPdfDocument() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPdfDocument::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPdfDocument_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QPdfDocument_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QPdfDocument::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPdfDocument_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QPdfDocument_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPdfDocument::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPdfDocument_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QPdfDocument_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPdfDocument::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPdfDocument_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QPdfDocument_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPdfDocument::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPdfDocument_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QPdfDocument_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPdfDocument::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPdfDocument_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QPdfDocument_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPdfDocument::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPdfDocument_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QPdfDocument_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QPdfDocument_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPdfDocument_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPdfDocument_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPdfDocument_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPdfDocument* QPdfDocument_new() {
	return new MiqtVirtualQPdfDocument();
}

QPdfDocument* QPdfDocument_new2(QObject* parent) {
	return new MiqtVirtualQPdfDocument(parent);
}

void QPdfDocument_virtbase(QPdfDocument* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QPdfDocument_metaObject(const QPdfDocument* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPdfDocument_metacast(QPdfDocument* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPdfDocument_tr(const char* s) {
	QString _ret = QPdfDocument::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPdfDocument_load(QPdfDocument* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QPdfDocument::Error _ret = self->load(fileName_QString);
	return static_cast<int>(_ret);
}

int QPdfDocument_status(const QPdfDocument* self) {
	QPdfDocument::Status _ret = self->status();
	return static_cast<int>(_ret);
}

void QPdfDocument_loadWithDevice(QPdfDocument* self, QIODevice* device) {
	self->load(device);
}

void QPdfDocument_setPassword(QPdfDocument* self, struct miqt_string password) {
	QString password_QString = QString::fromUtf8(password.data, password.len);
	self->setPassword(password_QString);
}

struct miqt_string QPdfDocument_password(const QPdfDocument* self) {
	QString _ret = self->password();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVariant* QPdfDocument_metaData(const QPdfDocument* self, int field) {
	return new QVariant(self->metaData(static_cast<QPdfDocument::MetaDataField>(field)));
}

int QPdfDocument_error(const QPdfDocument* self) {
	QPdfDocument::Error _ret = self->error();
	return static_cast<int>(_ret);
}

void QPdfDocument_close(QPdfDocument* self) {
	self->close();
}

int QPdfDocument_pageCount(const QPdfDocument* self) {
	return self->pageCount();
}

QSizeF* QPdfDocument_pagePointSize(const QPdfDocument* self, int page) {
	return new QSizeF(self->pagePointSize(static_cast<int>(page)));
}

struct miqt_string QPdfDocument_pageLabel(QPdfDocument* self, int page) {
	QString _ret = self->pageLabel(static_cast<int>(page));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractListModel* QPdfDocument_pageModel(QPdfDocument* self) {
	return self->pageModel();
}

QImage* QPdfDocument_render(QPdfDocument* self, int page, QSize* imageSize) {
	return new QImage(self->render(static_cast<int>(page), *imageSize));
}

QPdfSelection* QPdfDocument_getSelection(QPdfDocument* self, int page, QPointF* start, QPointF* end) {
	return new QPdfSelection(self->getSelection(static_cast<int>(page), *start, *end));
}

QPdfSelection* QPdfDocument_getSelectionAtIndex(QPdfDocument* self, int page, int startIndex, int maxLength) {
	return new QPdfSelection(self->getSelectionAtIndex(static_cast<int>(page), static_cast<int>(startIndex), static_cast<int>(maxLength)));
}

QPdfSelection* QPdfDocument_getAllText(QPdfDocument* self, int page) {
	return new QPdfSelection(self->getAllText(static_cast<int>(page)));
}

void QPdfDocument_passwordChanged(QPdfDocument* self) {
	self->passwordChanged();
}

void QPdfDocument_connect_passwordChanged(QPdfDocument* self, intptr_t slot) {
	MiqtVirtualQPdfDocument::connect(self, static_cast<void (QPdfDocument::*)()>(&QPdfDocument::passwordChanged), self, [=]() {
		miqt_exec_callback_QPdfDocument_passwordChanged(slot);
	});
}

void QPdfDocument_passwordRequired(QPdfDocument* self) {
	self->passwordRequired();
}

void QPdfDocument_connect_passwordRequired(QPdfDocument* self, intptr_t slot) {
	MiqtVirtualQPdfDocument::connect(self, static_cast<void (QPdfDocument::*)()>(&QPdfDocument::passwordRequired), self, [=]() {
		miqt_exec_callback_QPdfDocument_passwordRequired(slot);
	});
}

void QPdfDocument_statusChanged(QPdfDocument* self, int status) {
	self->statusChanged(static_cast<QPdfDocument::Status>(status));
}

void QPdfDocument_connect_statusChanged(QPdfDocument* self, intptr_t slot) {
	MiqtVirtualQPdfDocument::connect(self, static_cast<void (QPdfDocument::*)(QPdfDocument::Status)>(&QPdfDocument::statusChanged), self, [=](QPdfDocument::Status status) {
		QPdfDocument::Status status_ret = status;
		int sigval1 = static_cast<int>(status_ret);
		miqt_exec_callback_QPdfDocument_statusChanged(slot, sigval1);
	});
}

void QPdfDocument_pageCountChanged(QPdfDocument* self, int pageCount) {
	self->pageCountChanged(static_cast<int>(pageCount));
}

void QPdfDocument_connect_pageCountChanged(QPdfDocument* self, intptr_t slot) {
	MiqtVirtualQPdfDocument::connect(self, static_cast<void (QPdfDocument::*)(int)>(&QPdfDocument::pageCountChanged), self, [=](int pageCount) {
		int sigval1 = pageCount;
		miqt_exec_callback_QPdfDocument_pageCountChanged(slot, sigval1);
	});
}

void QPdfDocument_pageModelChanged(QPdfDocument* self) {
	self->pageModelChanged();
}

void QPdfDocument_connect_pageModelChanged(QPdfDocument* self, intptr_t slot) {
	MiqtVirtualQPdfDocument::connect(self, static_cast<void (QPdfDocument::*)()>(&QPdfDocument::pageModelChanged), self, [=]() {
		miqt_exec_callback_QPdfDocument_pageModelChanged(slot);
	});
}

struct miqt_string QPdfDocument_tr2(const char* s, const char* c) {
	QString _ret = QPdfDocument::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfDocument_tr3(const char* s, const char* c, int n) {
	QString _ret = QPdfDocument::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QImage* QPdfDocument_render2(QPdfDocument* self, int page, QSize* imageSize, QPdfDocumentRenderOptions* options) {
	return new QImage(self->render(static_cast<int>(page), *imageSize, *options));
}

bool QPdfDocument_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPdfDocument* self_cast = dynamic_cast<MiqtVirtualQPdfDocument*>( (QPdfDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPdfDocument_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQPdfDocument*)(self) )->QPdfDocument::event(event);

}

bool QPdfDocument_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPdfDocument* self_cast = dynamic_cast<MiqtVirtualQPdfDocument*>( (QPdfDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPdfDocument_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQPdfDocument*)(self) )->QPdfDocument::eventFilter(watched, event);

}

bool QPdfDocument_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfDocument* self_cast = dynamic_cast<MiqtVirtualQPdfDocument*>( (QPdfDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPdfDocument_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQPdfDocument*)(self) )->QPdfDocument::timerEvent(event);

}

bool QPdfDocument_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfDocument* self_cast = dynamic_cast<MiqtVirtualQPdfDocument*>( (QPdfDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPdfDocument_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQPdfDocument*)(self) )->QPdfDocument::childEvent(event);

}

bool QPdfDocument_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfDocument* self_cast = dynamic_cast<MiqtVirtualQPdfDocument*>( (QPdfDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPdfDocument_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQPdfDocument*)(self) )->QPdfDocument::customEvent(event);

}

bool QPdfDocument_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPdfDocument* self_cast = dynamic_cast<MiqtVirtualQPdfDocument*>( (QPdfDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPdfDocument_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQPdfDocument*)(self) )->QPdfDocument::connectNotify(*signal);

}

bool QPdfDocument_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPdfDocument* self_cast = dynamic_cast<MiqtVirtualQPdfDocument*>( (QPdfDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPdfDocument_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQPdfDocument*)(self) )->QPdfDocument::disconnectNotify(*signal);

}

QObject* QPdfDocument_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPdfDocument* self_cast = dynamic_cast<MiqtVirtualQPdfDocument*>( (QPdfDocument*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPdfDocument_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPdfDocument* self_cast = dynamic_cast<MiqtVirtualQPdfDocument*>( (QPdfDocument*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPdfDocument_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPdfDocument* self_cast = dynamic_cast<MiqtVirtualQPdfDocument*>( (QPdfDocument*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPdfDocument_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPdfDocument* self_cast = dynamic_cast<MiqtVirtualQPdfDocument*>( (QPdfDocument*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPdfDocument_delete(QPdfDocument* self) {
	delete self;
}

