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

void miqt_exec_callback_QSvgRenderer_RepaintNeeded(intptr_t);
bool miqt_exec_callback_QSvgRenderer_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QSvgRenderer_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSvgRenderer_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSvgRenderer_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSvgRenderer_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSvgRenderer_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSvgRenderer_DisconnectNotify(void*, intptr_t, QMetaMethod*);
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
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QSvgRenderer::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSvgRenderer_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QSvgRenderer::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QSvgRenderer::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSvgRenderer_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QSvgRenderer::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QSvgRenderer::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSvgRenderer_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QSvgRenderer::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QSvgRenderer::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSvgRenderer_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QSvgRenderer::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QSvgRenderer::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSvgRenderer_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QSvgRenderer::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QSvgRenderer::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSvgRenderer_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QSvgRenderer::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QSvgRenderer::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSvgRenderer_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QSvgRenderer::disconnectNotify(*signal);

	}

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

QMetaObject* QSvgRenderer_MetaObject(const QSvgRenderer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSvgRenderer_Metacast(QSvgRenderer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSvgRenderer_Tr(const char* s) {
	QString _ret = QSvgRenderer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSvgRenderer_TrUtf8(const char* s) {
	QString _ret = QSvgRenderer::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSvgRenderer_IsValid(const QSvgRenderer* self) {
	return self->isValid();
}

QSize* QSvgRenderer_DefaultSize(const QSvgRenderer* self) {
	return new QSize(self->defaultSize());
}

QRect* QSvgRenderer_ViewBox(const QSvgRenderer* self) {
	return new QRect(self->viewBox());
}

QRectF* QSvgRenderer_ViewBoxF(const QSvgRenderer* self) {
	return new QRectF(self->viewBoxF());
}

void QSvgRenderer_SetViewBox(QSvgRenderer* self, QRect* viewbox) {
	self->setViewBox(*viewbox);
}

void QSvgRenderer_SetViewBoxWithViewbox(QSvgRenderer* self, QRectF* viewbox) {
	self->setViewBox(*viewbox);
}

int QSvgRenderer_AspectRatioMode(const QSvgRenderer* self) {
	Qt::AspectRatioMode _ret = self->aspectRatioMode();
	return static_cast<int>(_ret);
}

void QSvgRenderer_SetAspectRatioMode(QSvgRenderer* self, int mode) {
	self->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

bool QSvgRenderer_Animated(const QSvgRenderer* self) {
	return self->animated();
}

int QSvgRenderer_FramesPerSecond(const QSvgRenderer* self) {
	return self->framesPerSecond();
}

void QSvgRenderer_SetFramesPerSecond(QSvgRenderer* self, int num) {
	self->setFramesPerSecond(static_cast<int>(num));
}

int QSvgRenderer_CurrentFrame(const QSvgRenderer* self) {
	return self->currentFrame();
}

void QSvgRenderer_SetCurrentFrame(QSvgRenderer* self, int currentFrame) {
	self->setCurrentFrame(static_cast<int>(currentFrame));
}

int QSvgRenderer_AnimationDuration(const QSvgRenderer* self) {
	return self->animationDuration();
}

QRectF* QSvgRenderer_BoundsOnElement(const QSvgRenderer* self, struct miqt_string id) {
	QString id_QString = QString::fromUtf8(id.data, id.len);
	return new QRectF(self->boundsOnElement(id_QString));
}

bool QSvgRenderer_ElementExists(const QSvgRenderer* self, struct miqt_string id) {
	QString id_QString = QString::fromUtf8(id.data, id.len);
	return self->elementExists(id_QString);
}

QMatrix* QSvgRenderer_MatrixForElement(const QSvgRenderer* self, struct miqt_string id) {
	QString id_QString = QString::fromUtf8(id.data, id.len);
	return new QMatrix(self->matrixForElement(id_QString));
}

QTransform* QSvgRenderer_TransformForElement(const QSvgRenderer* self, struct miqt_string id) {
	QString id_QString = QString::fromUtf8(id.data, id.len);
	return new QTransform(self->transformForElement(id_QString));
}

bool QSvgRenderer_Load(QSvgRenderer* self, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->load(filename_QString);
}

bool QSvgRenderer_LoadWithContents(QSvgRenderer* self, struct miqt_string contents) {
	QByteArray contents_QByteArray(contents.data, contents.len);
	return self->load(contents_QByteArray);
}

bool QSvgRenderer_Load2(QSvgRenderer* self, QXmlStreamReader* contents) {
	return self->load(contents);
}

void QSvgRenderer_Render(QSvgRenderer* self, QPainter* p) {
	self->render(p);
}

void QSvgRenderer_Render2(QSvgRenderer* self, QPainter* p, QRectF* bounds) {
	self->render(p, *bounds);
}

void QSvgRenderer_Render3(QSvgRenderer* self, QPainter* p, struct miqt_string elementId) {
	QString elementId_QString = QString::fromUtf8(elementId.data, elementId.len);
	self->render(p, elementId_QString);
}

void QSvgRenderer_RepaintNeeded(QSvgRenderer* self) {
	self->repaintNeeded();
}

void QSvgRenderer_connect_RepaintNeeded(QSvgRenderer* self, intptr_t slot) {
	MiqtVirtualQSvgRenderer::connect(self, static_cast<void (QSvgRenderer::*)()>(&QSvgRenderer::repaintNeeded), self, [=]() {
		miqt_exec_callback_QSvgRenderer_RepaintNeeded(slot);
	});
}

struct miqt_string QSvgRenderer_Tr2(const char* s, const char* c) {
	QString _ret = QSvgRenderer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSvgRenderer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSvgRenderer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSvgRenderer_TrUtf82(const char* s, const char* c) {
	QString _ret = QSvgRenderer::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSvgRenderer_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSvgRenderer::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSvgRenderer_Render32(QSvgRenderer* self, QPainter* p, struct miqt_string elementId, QRectF* bounds) {
	QString elementId_QString = QString::fromUtf8(elementId.data, elementId.len);
	self->render(p, elementId_QString, *bounds);
}

bool QSvgRenderer_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQSvgRenderer* self_cast = dynamic_cast<MiqtVirtualQSvgRenderer*>( (QSvgRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QSvgRenderer_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSvgRenderer*)(self) )->virtualbase_Event(event);
}

bool QSvgRenderer_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSvgRenderer* self_cast = dynamic_cast<MiqtVirtualQSvgRenderer*>( (QSvgRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QSvgRenderer_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSvgRenderer*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QSvgRenderer_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgRenderer* self_cast = dynamic_cast<MiqtVirtualQSvgRenderer*>( (QSvgRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QSvgRenderer_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSvgRenderer*)(self) )->virtualbase_TimerEvent(event);
}

bool QSvgRenderer_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgRenderer* self_cast = dynamic_cast<MiqtVirtualQSvgRenderer*>( (QSvgRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QSvgRenderer_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSvgRenderer*)(self) )->virtualbase_ChildEvent(event);
}

bool QSvgRenderer_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgRenderer* self_cast = dynamic_cast<MiqtVirtualQSvgRenderer*>( (QSvgRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QSvgRenderer_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSvgRenderer*)(self) )->virtualbase_CustomEvent(event);
}

bool QSvgRenderer_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSvgRenderer* self_cast = dynamic_cast<MiqtVirtualQSvgRenderer*>( (QSvgRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QSvgRenderer_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSvgRenderer*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QSvgRenderer_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSvgRenderer* self_cast = dynamic_cast<MiqtVirtualQSvgRenderer*>( (QSvgRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QSvgRenderer_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSvgRenderer*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QSvgRenderer_Delete(QSvgRenderer* self) {
	delete self;
}

