#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QMatrix>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSvgRenderer>
#include <QTimerEvent>
#include <QTransform>
#include <QXmlStreamReader>
#include <qsvgrenderer.h>
#include "gen_qsvgrenderer.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSvgRenderer_repaintNeeded(intptr_t);
bool miqt_exec_callback_QSvgRenderer_event(QSvgRenderer*, intptr_t, QEvent*);
bool miqt_exec_callback_QSvgRenderer_eventFilter(QSvgRenderer*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSvgRenderer_timerEvent(QSvgRenderer*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSvgRenderer_childEvent(QSvgRenderer*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSvgRenderer_customEvent(QSvgRenderer*, intptr_t, QEvent*);
void miqt_exec_callback_QSvgRenderer_connectNotify(QSvgRenderer*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSvgRenderer_disconnectNotify(QSvgRenderer*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSvgRenderer final : public QSvgRenderer {
public:

	MiqtVirtualQSvgRenderer(): QSvgRenderer() {};
	MiqtVirtualQSvgRenderer(const QString& filename): QSvgRenderer(filename) {};
	MiqtVirtualQSvgRenderer(const QByteArray& contents): QSvgRenderer(contents) {};
	MiqtVirtualQSvgRenderer(QXmlStreamReader* contents): QSvgRenderer(contents) {};
	MiqtVirtualQSvgRenderer(QObject* parent): QSvgRenderer(parent) {};
	MiqtVirtualQSvgRenderer(const QString& filename, QObject* parent): QSvgRenderer(filename, parent) {};
	MiqtVirtualQSvgRenderer(const QByteArray& contents, QObject* parent): QSvgRenderer(contents, parent) {};
	MiqtVirtualQSvgRenderer(QXmlStreamReader* contents, QObject* parent): QSvgRenderer(contents, parent) {};

	virtual ~MiqtVirtualQSvgRenderer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSvgRenderer::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSvgRenderer_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QSvgRenderer::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSvgRenderer::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSvgRenderer_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QSvgRenderer::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSvgRenderer::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSvgRenderer_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QSvgRenderer::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSvgRenderer::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSvgRenderer_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QSvgRenderer::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSvgRenderer::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSvgRenderer_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QSvgRenderer::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSvgRenderer::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSvgRenderer_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QSvgRenderer::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSvgRenderer::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSvgRenderer_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QSvgRenderer::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QSvgRenderer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSvgRenderer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSvgRenderer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSvgRenderer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSvgRenderer* QSvgRenderer_new() {
	return new MiqtVirtualQSvgRenderer();
}

QSvgRenderer* QSvgRenderer_new2(struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return new MiqtVirtualQSvgRenderer(filename_QString);
}

QSvgRenderer* QSvgRenderer_new3(struct miqt_string contents) {
	QByteArray contents_QByteArray(contents.data, contents.len);
	return new MiqtVirtualQSvgRenderer(contents_QByteArray);
}

QSvgRenderer* QSvgRenderer_new4(QXmlStreamReader* contents) {
	return new MiqtVirtualQSvgRenderer(contents);
}

QSvgRenderer* QSvgRenderer_new5(QObject* parent) {
	return new MiqtVirtualQSvgRenderer(parent);
}

QSvgRenderer* QSvgRenderer_new6(struct miqt_string filename, QObject* parent) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return new MiqtVirtualQSvgRenderer(filename_QString, parent);
}

QSvgRenderer* QSvgRenderer_new7(struct miqt_string contents, QObject* parent) {
	QByteArray contents_QByteArray(contents.data, contents.len);
	return new MiqtVirtualQSvgRenderer(contents_QByteArray, parent);
}

QSvgRenderer* QSvgRenderer_new8(QXmlStreamReader* contents, QObject* parent) {
	return new MiqtVirtualQSvgRenderer(contents, parent);
}

void QSvgRenderer_virtbase(QSvgRenderer* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QSvgRenderer_metaObject(const QSvgRenderer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSvgRenderer_metacast(QSvgRenderer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSvgRenderer_tr(const char* s) {
	QString _ret = QSvgRenderer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSvgRenderer_trUtf8(const char* s) {
	QString _ret = QSvgRenderer::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSvgRenderer_isValid(const QSvgRenderer* self) {
	return self->isValid();
}

QSize* QSvgRenderer_defaultSize(const QSvgRenderer* self) {
	return new QSize(self->defaultSize());
}

QRect* QSvgRenderer_viewBox(const QSvgRenderer* self) {
	return new QRect(self->viewBox());
}

QRectF* QSvgRenderer_viewBoxF(const QSvgRenderer* self) {
	return new QRectF(self->viewBoxF());
}

void QSvgRenderer_setViewBox(QSvgRenderer* self, QRect* viewbox) {
	self->setViewBox(*viewbox);
}

void QSvgRenderer_setViewBoxWithViewbox(QSvgRenderer* self, QRectF* viewbox) {
	self->setViewBox(*viewbox);
}

int QSvgRenderer_aspectRatioMode(const QSvgRenderer* self) {
	Qt::AspectRatioMode _ret = self->aspectRatioMode();
	return static_cast<int>(_ret);
}

void QSvgRenderer_setAspectRatioMode(QSvgRenderer* self, int mode) {
	self->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

bool QSvgRenderer_animated(const QSvgRenderer* self) {
	return self->animated();
}

int QSvgRenderer_framesPerSecond(const QSvgRenderer* self) {
	return self->framesPerSecond();
}

void QSvgRenderer_setFramesPerSecond(QSvgRenderer* self, int num) {
	self->setFramesPerSecond(static_cast<int>(num));
}

int QSvgRenderer_currentFrame(const QSvgRenderer* self) {
	return self->currentFrame();
}

void QSvgRenderer_setCurrentFrame(QSvgRenderer* self, int currentFrame) {
	self->setCurrentFrame(static_cast<int>(currentFrame));
}

int QSvgRenderer_animationDuration(const QSvgRenderer* self) {
	return self->animationDuration();
}

QRectF* QSvgRenderer_boundsOnElement(const QSvgRenderer* self, struct miqt_string id) {
	QString id_QString = QString::fromUtf8(id.data, id.len);
	return new QRectF(self->boundsOnElement(id_QString));
}

bool QSvgRenderer_elementExists(const QSvgRenderer* self, struct miqt_string id) {
	QString id_QString = QString::fromUtf8(id.data, id.len);
	return self->elementExists(id_QString);
}

QMatrix* QSvgRenderer_matrixForElement(const QSvgRenderer* self, struct miqt_string id) {
	QString id_QString = QString::fromUtf8(id.data, id.len);
	return new QMatrix(self->matrixForElement(id_QString));
}

QTransform* QSvgRenderer_transformForElement(const QSvgRenderer* self, struct miqt_string id) {
	QString id_QString = QString::fromUtf8(id.data, id.len);
	return new QTransform(self->transformForElement(id_QString));
}

bool QSvgRenderer_load(QSvgRenderer* self, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->load(filename_QString);
}

bool QSvgRenderer_loadWithContents(QSvgRenderer* self, struct miqt_string contents) {
	QByteArray contents_QByteArray(contents.data, contents.len);
	return self->load(contents_QByteArray);
}

bool QSvgRenderer_load2(QSvgRenderer* self, QXmlStreamReader* contents) {
	return self->load(contents);
}

void QSvgRenderer_render(QSvgRenderer* self, QPainter* p) {
	self->render(p);
}

void QSvgRenderer_render2(QSvgRenderer* self, QPainter* p, QRectF* bounds) {
	self->render(p, *bounds);
}

void QSvgRenderer_render3(QSvgRenderer* self, QPainter* p, struct miqt_string elementId) {
	QString elementId_QString = QString::fromUtf8(elementId.data, elementId.len);
	self->render(p, elementId_QString);
}

void QSvgRenderer_repaintNeeded(QSvgRenderer* self) {
	self->repaintNeeded();
}

void QSvgRenderer_connect_repaintNeeded(QSvgRenderer* self, intptr_t slot) {
	MiqtVirtualQSvgRenderer::connect(self, static_cast<void (QSvgRenderer::*)()>(&QSvgRenderer::repaintNeeded), self, [=]() {
		miqt_exec_callback_QSvgRenderer_repaintNeeded(slot);
	});
}

struct miqt_string QSvgRenderer_tr2(const char* s, const char* c) {
	QString _ret = QSvgRenderer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSvgRenderer_tr3(const char* s, const char* c, int n) {
	QString _ret = QSvgRenderer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSvgRenderer_trUtf82(const char* s, const char* c) {
	QString _ret = QSvgRenderer::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSvgRenderer_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSvgRenderer::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSvgRenderer_render32(QSvgRenderer* self, QPainter* p, struct miqt_string elementId, QRectF* bounds) {
	QString elementId_QString = QString::fromUtf8(elementId.data, elementId.len);
	self->render(p, elementId_QString, *bounds);
}

bool QSvgRenderer_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSvgRenderer* self_cast = dynamic_cast<MiqtVirtualQSvgRenderer*>( (QSvgRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QSvgRenderer_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSvgRenderer*)(self) )->virtualbase_event(event);
}

bool QSvgRenderer_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSvgRenderer* self_cast = dynamic_cast<MiqtVirtualQSvgRenderer*>( (QSvgRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSvgRenderer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSvgRenderer*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QSvgRenderer_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgRenderer* self_cast = dynamic_cast<MiqtVirtualQSvgRenderer*>( (QSvgRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QSvgRenderer_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSvgRenderer*)(self) )->virtualbase_timerEvent(event);
}

bool QSvgRenderer_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgRenderer* self_cast = dynamic_cast<MiqtVirtualQSvgRenderer*>( (QSvgRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QSvgRenderer_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSvgRenderer*)(self) )->virtualbase_childEvent(event);
}

bool QSvgRenderer_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgRenderer* self_cast = dynamic_cast<MiqtVirtualQSvgRenderer*>( (QSvgRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QSvgRenderer_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSvgRenderer*)(self) )->virtualbase_customEvent(event);
}

bool QSvgRenderer_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSvgRenderer* self_cast = dynamic_cast<MiqtVirtualQSvgRenderer*>( (QSvgRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QSvgRenderer_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSvgRenderer*)(self) )->virtualbase_connectNotify(signal);
}

bool QSvgRenderer_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSvgRenderer* self_cast = dynamic_cast<MiqtVirtualQSvgRenderer*>( (QSvgRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSvgRenderer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSvgRenderer*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QSvgRenderer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSvgRenderer* self_cast = dynamic_cast<MiqtVirtualQSvgRenderer*>( (QSvgRenderer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QSvgRenderer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSvgRenderer* self_cast = dynamic_cast<MiqtVirtualQSvgRenderer*>( (QSvgRenderer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QSvgRenderer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSvgRenderer* self_cast = dynamic_cast<MiqtVirtualQSvgRenderer*>( (QSvgRenderer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QSvgRenderer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSvgRenderer* self_cast = dynamic_cast<MiqtVirtualQSvgRenderer*>( (QSvgRenderer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QSvgRenderer_delete(QSvgRenderer* self) {
	delete self;
}

