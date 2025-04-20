#include <QChildEvent>
#include <QEvent>
#include <QImage>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPdfDocument>
#include <QPdfDocumentRenderOptions>
#include <QPdfPageRenderer>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qpdfpagerenderer.h>
#include "gen_qpdfpagerenderer.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QPdfPageRenderer_documentChanged(intptr_t, QPdfDocument*);
void miqt_exec_callback_QPdfPageRenderer_renderModeChanged(intptr_t, int);
void miqt_exec_callback_QPdfPageRenderer_pageRendered(intptr_t, int, QSize*, QImage*, QPdfDocumentRenderOptions*, unsigned long long);
bool miqt_exec_callback_QPdfPageRenderer_event(QPdfPageRenderer*, intptr_t, QEvent*);
bool miqt_exec_callback_QPdfPageRenderer_eventFilter(QPdfPageRenderer*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPdfPageRenderer_timerEvent(QPdfPageRenderer*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPdfPageRenderer_childEvent(QPdfPageRenderer*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPdfPageRenderer_customEvent(QPdfPageRenderer*, intptr_t, QEvent*);
void miqt_exec_callback_QPdfPageRenderer_connectNotify(QPdfPageRenderer*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPdfPageRenderer_disconnectNotify(QPdfPageRenderer*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPdfPageRenderer final : public QPdfPageRenderer {
public:

	MiqtVirtualQPdfPageRenderer(): QPdfPageRenderer() {};
	MiqtVirtualQPdfPageRenderer(QObject* parent): QPdfPageRenderer(parent) {};

	virtual ~MiqtVirtualQPdfPageRenderer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPdfPageRenderer::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPdfPageRenderer_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QPdfPageRenderer_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QPdfPageRenderer::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPdfPageRenderer_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QPdfPageRenderer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPdfPageRenderer::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPdfPageRenderer_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QPdfPageRenderer_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPdfPageRenderer::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPdfPageRenderer_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QPdfPageRenderer_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPdfPageRenderer::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPdfPageRenderer_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QPdfPageRenderer_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPdfPageRenderer::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPdfPageRenderer_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QPdfPageRenderer_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPdfPageRenderer::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPdfPageRenderer_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QPdfPageRenderer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QPdfPageRenderer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPdfPageRenderer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPdfPageRenderer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPdfPageRenderer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPdfPageRenderer* QPdfPageRenderer_new() {
	return new MiqtVirtualQPdfPageRenderer();
}

QPdfPageRenderer* QPdfPageRenderer_new2(QObject* parent) {
	return new MiqtVirtualQPdfPageRenderer(parent);
}

void QPdfPageRenderer_virtbase(QPdfPageRenderer* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QPdfPageRenderer_metaObject(const QPdfPageRenderer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPdfPageRenderer_metacast(QPdfPageRenderer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPdfPageRenderer_tr(const char* s) {
	QString _ret = QPdfPageRenderer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPdfPageRenderer_renderMode(const QPdfPageRenderer* self) {
	QPdfPageRenderer::RenderMode _ret = self->renderMode();
	return static_cast<int>(_ret);
}

void QPdfPageRenderer_setRenderMode(QPdfPageRenderer* self, int mode) {
	self->setRenderMode(static_cast<QPdfPageRenderer::RenderMode>(mode));
}

QPdfDocument* QPdfPageRenderer_document(const QPdfPageRenderer* self) {
	return self->document();
}

void QPdfPageRenderer_setDocument(QPdfPageRenderer* self, QPdfDocument* document) {
	self->setDocument(document);
}

unsigned long long QPdfPageRenderer_requestPage(QPdfPageRenderer* self, int pageNumber, QSize* imageSize) {
	quint64 _ret = self->requestPage(static_cast<int>(pageNumber), *imageSize);
	return static_cast<unsigned long long>(_ret);
}

void QPdfPageRenderer_documentChanged(QPdfPageRenderer* self, QPdfDocument* document) {
	self->documentChanged(document);
}

void QPdfPageRenderer_connect_documentChanged(QPdfPageRenderer* self, intptr_t slot) {
	MiqtVirtualQPdfPageRenderer::connect(self, static_cast<void (QPdfPageRenderer::*)(QPdfDocument*)>(&QPdfPageRenderer::documentChanged), self, [=](QPdfDocument* document) {
		QPdfDocument* sigval1 = document;
		miqt_exec_callback_QPdfPageRenderer_documentChanged(slot, sigval1);
	});
}

void QPdfPageRenderer_renderModeChanged(QPdfPageRenderer* self, int renderMode) {
	self->renderModeChanged(static_cast<QPdfPageRenderer::RenderMode>(renderMode));
}

void QPdfPageRenderer_connect_renderModeChanged(QPdfPageRenderer* self, intptr_t slot) {
	MiqtVirtualQPdfPageRenderer::connect(self, static_cast<void (QPdfPageRenderer::*)(QPdfPageRenderer::RenderMode)>(&QPdfPageRenderer::renderModeChanged), self, [=](QPdfPageRenderer::RenderMode renderMode) {
		QPdfPageRenderer::RenderMode renderMode_ret = renderMode;
		int sigval1 = static_cast<int>(renderMode_ret);
		miqt_exec_callback_QPdfPageRenderer_renderModeChanged(slot, sigval1);
	});
}

void QPdfPageRenderer_pageRendered(QPdfPageRenderer* self, int pageNumber, QSize* imageSize, QImage* image, QPdfDocumentRenderOptions* options, unsigned long long requestId) {
	self->pageRendered(static_cast<int>(pageNumber), *imageSize, *image, *options, static_cast<quint64>(requestId));
}

void QPdfPageRenderer_connect_pageRendered(QPdfPageRenderer* self, intptr_t slot) {
	MiqtVirtualQPdfPageRenderer::connect(self, static_cast<void (QPdfPageRenderer::*)(int, QSize, const QImage&, QPdfDocumentRenderOptions, quint64)>(&QPdfPageRenderer::pageRendered), self, [=](int pageNumber, QSize imageSize, const QImage& image, QPdfDocumentRenderOptions options, quint64 requestId) {
		int sigval1 = pageNumber;
		QSize* sigval2 = new QSize(imageSize);
		const QImage& image_ret = image;
		// Cast returned reference into pointer
		QImage* sigval3 = const_cast<QImage*>(&image_ret);
		QPdfDocumentRenderOptions* sigval4 = new QPdfDocumentRenderOptions(options);
		quint64 requestId_ret = requestId;
		unsigned long long sigval5 = static_cast<unsigned long long>(requestId_ret);
		miqt_exec_callback_QPdfPageRenderer_pageRendered(slot, sigval1, sigval2, sigval3, sigval4, sigval5);
	});
}

struct miqt_string QPdfPageRenderer_tr2(const char* s, const char* c) {
	QString _ret = QPdfPageRenderer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfPageRenderer_tr3(const char* s, const char* c, int n) {
	QString _ret = QPdfPageRenderer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned long long QPdfPageRenderer_requestPage2(QPdfPageRenderer* self, int pageNumber, QSize* imageSize, QPdfDocumentRenderOptions* options) {
	quint64 _ret = self->requestPage(static_cast<int>(pageNumber), *imageSize, *options);
	return static_cast<unsigned long long>(_ret);
}

bool QPdfPageRenderer_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPdfPageRenderer* self_cast = dynamic_cast<MiqtVirtualQPdfPageRenderer*>( (QPdfPageRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPdfPageRenderer_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQPdfPageRenderer*)(self) )->QPdfPageRenderer::event(event);

}

bool QPdfPageRenderer_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPdfPageRenderer* self_cast = dynamic_cast<MiqtVirtualQPdfPageRenderer*>( (QPdfPageRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPdfPageRenderer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQPdfPageRenderer*)(self) )->QPdfPageRenderer::eventFilter(watched, event);

}

bool QPdfPageRenderer_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfPageRenderer* self_cast = dynamic_cast<MiqtVirtualQPdfPageRenderer*>( (QPdfPageRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPdfPageRenderer_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQPdfPageRenderer*)(self) )->QPdfPageRenderer::timerEvent(event);

}

bool QPdfPageRenderer_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfPageRenderer* self_cast = dynamic_cast<MiqtVirtualQPdfPageRenderer*>( (QPdfPageRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPdfPageRenderer_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQPdfPageRenderer*)(self) )->QPdfPageRenderer::childEvent(event);

}

bool QPdfPageRenderer_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfPageRenderer* self_cast = dynamic_cast<MiqtVirtualQPdfPageRenderer*>( (QPdfPageRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPdfPageRenderer_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQPdfPageRenderer*)(self) )->QPdfPageRenderer::customEvent(event);

}

bool QPdfPageRenderer_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPdfPageRenderer* self_cast = dynamic_cast<MiqtVirtualQPdfPageRenderer*>( (QPdfPageRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPdfPageRenderer_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQPdfPageRenderer*)(self) )->QPdfPageRenderer::connectNotify(*signal);

}

bool QPdfPageRenderer_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPdfPageRenderer* self_cast = dynamic_cast<MiqtVirtualQPdfPageRenderer*>( (QPdfPageRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPdfPageRenderer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQPdfPageRenderer*)(self) )->QPdfPageRenderer::disconnectNotify(*signal);

}

QObject* QPdfPageRenderer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPdfPageRenderer* self_cast = dynamic_cast<MiqtVirtualQPdfPageRenderer*>( (QPdfPageRenderer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPdfPageRenderer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPdfPageRenderer* self_cast = dynamic_cast<MiqtVirtualQPdfPageRenderer*>( (QPdfPageRenderer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPdfPageRenderer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPdfPageRenderer* self_cast = dynamic_cast<MiqtVirtualQPdfPageRenderer*>( (QPdfPageRenderer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPdfPageRenderer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPdfPageRenderer* self_cast = dynamic_cast<MiqtVirtualQPdfPageRenderer*>( (QPdfPageRenderer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPdfPageRenderer_delete(QPdfPageRenderer* self) {
	delete self;
}

