#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QGLContext>
#include <QGLFormat>
#include <QGLWidget>
#include <QHideEvent>
#include <QImage>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSurfaceFormat>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qgl.h>
#include "gen_qgl.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QGLContext_create(QGLContext*, intptr_t, QGLContext*);
void miqt_exec_callback_QGLContext_makeCurrent(QGLContext*, intptr_t);
void miqt_exec_callback_QGLContext_doneCurrent(QGLContext*, intptr_t);
void miqt_exec_callback_QGLContext_swapBuffers(const QGLContext*, intptr_t);
bool miqt_exec_callback_QGLContext_chooseContext(QGLContext*, intptr_t, QGLContext*);
QPaintEngine* miqt_exec_callback_QGLWidget_paintEngine(const QGLWidget*, intptr_t);
void miqt_exec_callback_QGLWidget_updateGL(QGLWidget*, intptr_t);
void miqt_exec_callback_QGLWidget_updateOverlayGL(QGLWidget*, intptr_t);
bool miqt_exec_callback_QGLWidget_event(QGLWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGLWidget_initializeGL(QGLWidget*, intptr_t);
void miqt_exec_callback_QGLWidget_resizeGL(QGLWidget*, intptr_t, int, int);
void miqt_exec_callback_QGLWidget_paintGL(QGLWidget*, intptr_t);
void miqt_exec_callback_QGLWidget_initializeOverlayGL(QGLWidget*, intptr_t);
void miqt_exec_callback_QGLWidget_resizeOverlayGL(QGLWidget*, intptr_t, int, int);
void miqt_exec_callback_QGLWidget_paintOverlayGL(QGLWidget*, intptr_t);
void miqt_exec_callback_QGLWidget_paintEvent(QGLWidget*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QGLWidget_resizeEvent(QGLWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QGLWidget_glInit(QGLWidget*, intptr_t);
void miqt_exec_callback_QGLWidget_glDraw(QGLWidget*, intptr_t);
int miqt_exec_callback_QGLWidget_devType(const QGLWidget*, intptr_t);
void miqt_exec_callback_QGLWidget_setVisible(QGLWidget*, intptr_t, bool);
QSize* miqt_exec_callback_QGLWidget_sizeHint(const QGLWidget*, intptr_t);
QSize* miqt_exec_callback_QGLWidget_minimumSizeHint(const QGLWidget*, intptr_t);
int miqt_exec_callback_QGLWidget_heightForWidth(const QGLWidget*, intptr_t, int);
bool miqt_exec_callback_QGLWidget_hasHeightForWidth(const QGLWidget*, intptr_t);
void miqt_exec_callback_QGLWidget_mousePressEvent(QGLWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QGLWidget_mouseReleaseEvent(QGLWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QGLWidget_mouseDoubleClickEvent(QGLWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QGLWidget_mouseMoveEvent(QGLWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QGLWidget_wheelEvent(QGLWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QGLWidget_keyPressEvent(QGLWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGLWidget_keyReleaseEvent(QGLWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGLWidget_focusInEvent(QGLWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGLWidget_focusOutEvent(QGLWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGLWidget_enterEvent(QGLWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGLWidget_leaveEvent(QGLWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGLWidget_moveEvent(QGLWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QGLWidget_closeEvent(QGLWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QGLWidget_contextMenuEvent(QGLWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QGLWidget_tabletEvent(QGLWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QGLWidget_actionEvent(QGLWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QGLWidget_dragEnterEvent(QGLWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QGLWidget_dragMoveEvent(QGLWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QGLWidget_dragLeaveEvent(QGLWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QGLWidget_dropEvent(QGLWidget*, intptr_t, QDropEvent*);
void miqt_exec_callback_QGLWidget_showEvent(QGLWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QGLWidget_hideEvent(QGLWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QGLWidget_nativeEvent(QGLWidget*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QGLWidget_changeEvent(QGLWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QGLWidget_metric(const QGLWidget*, intptr_t, int);
void miqt_exec_callback_QGLWidget_initPainter(const QGLWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QGLWidget_redirected(const QGLWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QGLWidget_sharedPainter(const QGLWidget*, intptr_t);
void miqt_exec_callback_QGLWidget_inputMethodEvent(QGLWidget*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGLWidget_inputMethodQuery(const QGLWidget*, intptr_t, int);
bool miqt_exec_callback_QGLWidget_focusNextPrevChild(QGLWidget*, intptr_t, bool);
bool miqt_exec_callback_QGLWidget_eventFilter(QGLWidget*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGLWidget_timerEvent(QGLWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGLWidget_childEvent(QGLWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGLWidget_customEvent(QGLWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGLWidget_connectNotify(QGLWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGLWidget_disconnectNotify(QGLWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QGLFormat* QGLFormat_new() {
	return new (std::nothrow) QGLFormat();
}

QGLFormat* QGLFormat_new2(int options) {
	return new (std::nothrow) QGLFormat(static_cast<QGL::FormatOptions>(options));
}

QGLFormat* QGLFormat_new3(QGLFormat* other) {
	return new (std::nothrow) QGLFormat(*other);
}

QGLFormat* QGLFormat_new4(int options, int plane) {
	return new (std::nothrow) QGLFormat(static_cast<QGL::FormatOptions>(options), static_cast<int>(plane));
}

void QGLFormat_operatorAssign(QGLFormat* self, QGLFormat* other) {
	self->operator=(*other);
}

void QGLFormat_setDepthBufferSize(QGLFormat* self, int size) {
	self->setDepthBufferSize(static_cast<int>(size));
}

int QGLFormat_depthBufferSize(const QGLFormat* self) {
	return self->depthBufferSize();
}

void QGLFormat_setAccumBufferSize(QGLFormat* self, int size) {
	self->setAccumBufferSize(static_cast<int>(size));
}

int QGLFormat_accumBufferSize(const QGLFormat* self) {
	return self->accumBufferSize();
}

void QGLFormat_setRedBufferSize(QGLFormat* self, int size) {
	self->setRedBufferSize(static_cast<int>(size));
}

int QGLFormat_redBufferSize(const QGLFormat* self) {
	return self->redBufferSize();
}

void QGLFormat_setGreenBufferSize(QGLFormat* self, int size) {
	self->setGreenBufferSize(static_cast<int>(size));
}

int QGLFormat_greenBufferSize(const QGLFormat* self) {
	return self->greenBufferSize();
}

void QGLFormat_setBlueBufferSize(QGLFormat* self, int size) {
	self->setBlueBufferSize(static_cast<int>(size));
}

int QGLFormat_blueBufferSize(const QGLFormat* self) {
	return self->blueBufferSize();
}

void QGLFormat_setAlphaBufferSize(QGLFormat* self, int size) {
	self->setAlphaBufferSize(static_cast<int>(size));
}

int QGLFormat_alphaBufferSize(const QGLFormat* self) {
	return self->alphaBufferSize();
}

void QGLFormat_setStencilBufferSize(QGLFormat* self, int size) {
	self->setStencilBufferSize(static_cast<int>(size));
}

int QGLFormat_stencilBufferSize(const QGLFormat* self) {
	return self->stencilBufferSize();
}

void QGLFormat_setSampleBuffers(QGLFormat* self, bool enable) {
	self->setSampleBuffers(enable);
}

bool QGLFormat_sampleBuffers(const QGLFormat* self) {
	return self->sampleBuffers();
}

void QGLFormat_setSamples(QGLFormat* self, int numSamples) {
	self->setSamples(static_cast<int>(numSamples));
}

int QGLFormat_samples(const QGLFormat* self) {
	return self->samples();
}

void QGLFormat_setSwapInterval(QGLFormat* self, int interval) {
	self->setSwapInterval(static_cast<int>(interval));
}

int QGLFormat_swapInterval(const QGLFormat* self) {
	return self->swapInterval();
}

bool QGLFormat_doubleBuffer(const QGLFormat* self) {
	return self->doubleBuffer();
}

void QGLFormat_setDoubleBuffer(QGLFormat* self, bool enable) {
	self->setDoubleBuffer(enable);
}

bool QGLFormat_depth(const QGLFormat* self) {
	return self->depth();
}

void QGLFormat_setDepth(QGLFormat* self, bool enable) {
	self->setDepth(enable);
}

bool QGLFormat_rgba(const QGLFormat* self) {
	return self->rgba();
}

void QGLFormat_setRgba(QGLFormat* self, bool enable) {
	self->setRgba(enable);
}

bool QGLFormat_alpha(const QGLFormat* self) {
	return self->alpha();
}

void QGLFormat_setAlpha(QGLFormat* self, bool enable) {
	self->setAlpha(enable);
}

bool QGLFormat_accum(const QGLFormat* self) {
	return self->accum();
}

void QGLFormat_setAccum(QGLFormat* self, bool enable) {
	self->setAccum(enable);
}

bool QGLFormat_stencil(const QGLFormat* self) {
	return self->stencil();
}

void QGLFormat_setStencil(QGLFormat* self, bool enable) {
	self->setStencil(enable);
}

bool QGLFormat_stereo(const QGLFormat* self) {
	return self->stereo();
}

void QGLFormat_setStereo(QGLFormat* self, bool enable) {
	self->setStereo(enable);
}

bool QGLFormat_directRendering(const QGLFormat* self) {
	return self->directRendering();
}

void QGLFormat_setDirectRendering(QGLFormat* self, bool enable) {
	self->setDirectRendering(enable);
}

bool QGLFormat_hasOverlay(const QGLFormat* self) {
	return self->hasOverlay();
}

void QGLFormat_setOverlay(QGLFormat* self, bool enable) {
	self->setOverlay(enable);
}

int QGLFormat_plane(const QGLFormat* self) {
	return self->plane();
}

void QGLFormat_setPlane(QGLFormat* self, int plane) {
	self->setPlane(static_cast<int>(plane));
}

void QGLFormat_setOption(QGLFormat* self, int opt) {
	self->setOption(static_cast<QGL::FormatOptions>(opt));
}

bool QGLFormat_testOption(const QGLFormat* self, int opt) {
	return self->testOption(static_cast<QGL::FormatOptions>(opt));
}

QGLFormat* QGLFormat_defaultFormat() {
	return new QGLFormat(QGLFormat::defaultFormat());
}

void QGLFormat_setDefaultFormat(QGLFormat* f) {
	QGLFormat::setDefaultFormat(*f);
}

QGLFormat* QGLFormat_defaultOverlayFormat() {
	return new QGLFormat(QGLFormat::defaultOverlayFormat());
}

void QGLFormat_setDefaultOverlayFormat(QGLFormat* f) {
	QGLFormat::setDefaultOverlayFormat(*f);
}

bool QGLFormat_hasOpenGL() {
	return QGLFormat::hasOpenGL();
}

bool QGLFormat_hasOpenGLOverlays() {
	return QGLFormat::hasOpenGLOverlays();
}

void QGLFormat_setVersion(QGLFormat* self, int major, int minor) {
	self->setVersion(static_cast<int>(major), static_cast<int>(minor));
}

int QGLFormat_majorVersion(const QGLFormat* self) {
	return self->majorVersion();
}

int QGLFormat_minorVersion(const QGLFormat* self) {
	return self->minorVersion();
}

void QGLFormat_setProfile(QGLFormat* self, int profile) {
	self->setProfile(static_cast<QGLFormat::OpenGLContextProfile>(profile));
}

int QGLFormat_profile(const QGLFormat* self) {
	QGLFormat::OpenGLContextProfile _ret = self->profile();
	return static_cast<int>(_ret);
}

int QGLFormat_openGLVersionFlags() {
	QGLFormat::OpenGLVersionFlags _ret = QGLFormat::openGLVersionFlags();
	return static_cast<int>(_ret);
}

QGLFormat* QGLFormat_fromSurfaceFormat(QSurfaceFormat* format) {
	return new QGLFormat(QGLFormat::fromSurfaceFormat(*format));
}

QSurfaceFormat* QGLFormat_toSurfaceFormat(QGLFormat* format) {
	return new QSurfaceFormat(QGLFormat::toSurfaceFormat(*format));
}

void QGLFormat_delete(QGLFormat* self) {
	delete self;
}

class MiqtVirtualQGLContext final : public QGLContext {
public:

	MiqtVirtualQGLContext(const QGLFormat& format, QPaintDevice* device): QGLContext(format, device) {}
	MiqtVirtualQGLContext(const QGLFormat& format): QGLContext(format) {}

	virtual ~MiqtVirtualQGLContext() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__create = 0;

	// Subclass to allow providing a Go implementation
	virtual bool create(const QGLContext* shareContext) override {
		if (handle__create == 0) {
			return QGLContext::create(shareContext);
		}

		QGLContext* sigval1 = (QGLContext*) shareContext;
		bool callback_return_value = miqt_exec_callback_QGLContext_create(this, handle__create, sigval1);
		return callback_return_value;
	}

	friend bool QGLContext_virtualbase_create(void* self, QGLContext* shareContext);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__makeCurrent = 0;

	// Subclass to allow providing a Go implementation
	virtual void makeCurrent() override {
		if (handle__makeCurrent == 0) {
			QGLContext::makeCurrent();
			return;
		}

		miqt_exec_callback_QGLContext_makeCurrent(this, handle__makeCurrent);

	}

	friend void QGLContext_virtualbase_makeCurrent(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__doneCurrent = 0;

	// Subclass to allow providing a Go implementation
	virtual void doneCurrent() override {
		if (handle__doneCurrent == 0) {
			QGLContext::doneCurrent();
			return;
		}

		miqt_exec_callback_QGLContext_doneCurrent(this, handle__doneCurrent);

	}

	friend void QGLContext_virtualbase_doneCurrent(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__swapBuffers = 0;

	// Subclass to allow providing a Go implementation
	virtual void swapBuffers() const override {
		if (handle__swapBuffers == 0) {
			QGLContext::swapBuffers();
			return;
		}

		miqt_exec_callback_QGLContext_swapBuffers(this, handle__swapBuffers);

	}

	friend void QGLContext_virtualbase_swapBuffers(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__chooseContext = 0;

	// Subclass to allow providing a Go implementation
	virtual bool chooseContext(const QGLContext* shareContext) override {
		if (handle__chooseContext == 0) {
			return QGLContext::chooseContext(shareContext);
		}

		QGLContext* sigval1 = (QGLContext*) shareContext;
		bool callback_return_value = miqt_exec_callback_QGLContext_chooseContext(this, handle__chooseContext, sigval1);
		return callback_return_value;
	}

	friend bool QGLContext_virtualbase_chooseContext(void* self, QGLContext* shareContext);

	// Wrappers to allow calling protected methods:
	friend bool QGLContext_protectedbase_deviceIsPixmap(bool* _dynamic_cast_ok, const void* self);
	friend bool QGLContext_protectedbase_windowCreated(bool* _dynamic_cast_ok, const void* self);
	friend void QGLContext_protectedbase_setWindowCreated(bool* _dynamic_cast_ok, void* self, bool on);
	friend bool QGLContext_protectedbase_initialized(bool* _dynamic_cast_ok, const void* self);
	friend void QGLContext_protectedbase_setInitialized(bool* _dynamic_cast_ok, void* self, bool on);
	friend unsigned int QGLContext_protectedbase_colorIndex(bool* _dynamic_cast_ok, const void* self, QColor* c);
	friend void QGLContext_protectedbase_setValid(bool* _dynamic_cast_ok, void* self, bool valid);
	friend void QGLContext_protectedbase_setDevice(bool* _dynamic_cast_ok, void* self, QPaintDevice* pDev);
};

QGLContext* QGLContext_new(QGLFormat* format, QPaintDevice* device) {
	return new (std::nothrow) MiqtVirtualQGLContext(*format, device);
}

QGLContext* QGLContext_new2(QGLFormat* format) {
	return new (std::nothrow) MiqtVirtualQGLContext(*format);
}

bool QGLContext_create(QGLContext* self, QGLContext* shareContext) {
	return self->create(shareContext);
}

bool QGLContext_isValid(const QGLContext* self) {
	return self->isValid();
}

bool QGLContext_isSharing(const QGLContext* self) {
	return self->isSharing();
}

void QGLContext_reset(QGLContext* self) {
	self->reset();
}

bool QGLContext_areSharing(QGLContext* context1, QGLContext* context2) {
	return QGLContext::areSharing(context1, context2);
}

QGLFormat* QGLContext_format(const QGLContext* self) {
	return new QGLFormat(self->format());
}

QGLFormat* QGLContext_requestedFormat(const QGLContext* self) {
	return new QGLFormat(self->requestedFormat());
}

void QGLContext_setFormat(QGLContext* self, QGLFormat* format) {
	self->setFormat(*format);
}

void QGLContext_moveToThread(QGLContext* self, QThread* thread) {
	self->moveToThread(thread);
}

void QGLContext_makeCurrent(QGLContext* self) {
	self->makeCurrent();
}

void QGLContext_doneCurrent(QGLContext* self) {
	self->doneCurrent();
}

void QGLContext_swapBuffers(const QGLContext* self) {
	self->swapBuffers();
}

void QGLContext_setTextureCacheLimit(int size) {
	QGLContext::setTextureCacheLimit(static_cast<int>(size));
}

int QGLContext_textureCacheLimit() {
	return QGLContext::textureCacheLimit();
}

QPaintDevice* QGLContext_device(const QGLContext* self) {
	return self->device();
}

QColor* QGLContext_overlayTransparentColor(const QGLContext* self) {
	return new QColor(self->overlayTransparentColor());
}

QGLContext* QGLContext_currentContext() {
	return (QGLContext*) QGLContext::currentContext();
}

bool QGLContext_override_virtual_create(void* self, intptr_t slot) {
	MiqtVirtualQGLContext* self_cast = dynamic_cast<MiqtVirtualQGLContext*>( (QGLContext*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__create = slot;
	return true;
}

bool QGLContext_virtualbase_create(void* self, QGLContext* shareContext) {
	return static_cast<MiqtVirtualQGLContext*>(self)->QGLContext::create(shareContext);
}

bool QGLContext_override_virtual_makeCurrent(void* self, intptr_t slot) {
	MiqtVirtualQGLContext* self_cast = dynamic_cast<MiqtVirtualQGLContext*>( (QGLContext*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__makeCurrent = slot;
	return true;
}

void QGLContext_virtualbase_makeCurrent(void* self) {
	static_cast<MiqtVirtualQGLContext*>(self)->QGLContext::makeCurrent();
}

bool QGLContext_override_virtual_doneCurrent(void* self, intptr_t slot) {
	MiqtVirtualQGLContext* self_cast = dynamic_cast<MiqtVirtualQGLContext*>( (QGLContext*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__doneCurrent = slot;
	return true;
}

void QGLContext_virtualbase_doneCurrent(void* self) {
	static_cast<MiqtVirtualQGLContext*>(self)->QGLContext::doneCurrent();
}

bool QGLContext_override_virtual_swapBuffers(void* self, intptr_t slot) {
	MiqtVirtualQGLContext* self_cast = dynamic_cast<MiqtVirtualQGLContext*>( (QGLContext*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__swapBuffers = slot;
	return true;
}

void QGLContext_virtualbase_swapBuffers(const void* self) {
	static_cast<const MiqtVirtualQGLContext*>(self)->QGLContext::swapBuffers();
}

bool QGLContext_override_virtual_chooseContext(void* self, intptr_t slot) {
	MiqtVirtualQGLContext* self_cast = dynamic_cast<MiqtVirtualQGLContext*>( (QGLContext*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__chooseContext = slot;
	return true;
}

bool QGLContext_virtualbase_chooseContext(void* self, QGLContext* shareContext) {
	return static_cast<MiqtVirtualQGLContext*>(self)->QGLContext::chooseContext(shareContext);
}

bool QGLContext_protectedbase_deviceIsPixmap(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGLContext* self_cast = dynamic_cast<MiqtVirtualQGLContext*>( (QGLContext*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->deviceIsPixmap();
}

bool QGLContext_protectedbase_windowCreated(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGLContext* self_cast = dynamic_cast<MiqtVirtualQGLContext*>( (QGLContext*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->windowCreated();
}

void QGLContext_protectedbase_setWindowCreated(bool* _dynamic_cast_ok, void* self, bool on) {
	MiqtVirtualQGLContext* self_cast = dynamic_cast<MiqtVirtualQGLContext*>( (QGLContext*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setWindowCreated(on);
}

bool QGLContext_protectedbase_initialized(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGLContext* self_cast = dynamic_cast<MiqtVirtualQGLContext*>( (QGLContext*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->initialized();
}

void QGLContext_protectedbase_setInitialized(bool* _dynamic_cast_ok, void* self, bool on) {
	MiqtVirtualQGLContext* self_cast = dynamic_cast<MiqtVirtualQGLContext*>( (QGLContext*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setInitialized(on);
}

unsigned int QGLContext_protectedbase_colorIndex(bool* _dynamic_cast_ok, const void* self, QColor* c) {
	MiqtVirtualQGLContext* self_cast = dynamic_cast<MiqtVirtualQGLContext*>( (QGLContext*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	uint _ret = self_cast->colorIndex(*c);
	return static_cast<unsigned int>(_ret);
}

void QGLContext_protectedbase_setValid(bool* _dynamic_cast_ok, void* self, bool valid) {
	MiqtVirtualQGLContext* self_cast = dynamic_cast<MiqtVirtualQGLContext*>( (QGLContext*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setValid(valid);
}

void QGLContext_protectedbase_setDevice(bool* _dynamic_cast_ok, void* self, QPaintDevice* pDev) {
	MiqtVirtualQGLContext* self_cast = dynamic_cast<MiqtVirtualQGLContext*>( (QGLContext*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setDevice(pDev);
}

void QGLContext_delete(QGLContext* self) {
	delete self;
}

class MiqtVirtualQGLWidget final : public QGLWidget {
public:

	MiqtVirtualQGLWidget(QWidget* parent): QGLWidget(parent) {}
	MiqtVirtualQGLWidget(): QGLWidget() {}
	MiqtVirtualQGLWidget(QGLContext* context): QGLWidget(context) {}
	MiqtVirtualQGLWidget(const QGLFormat& format): QGLWidget(format) {}
	MiqtVirtualQGLWidget(QWidget* parent, const QGLWidget* shareWidget): QGLWidget(parent, shareWidget) {}
	MiqtVirtualQGLWidget(QWidget* parent, const QGLWidget* shareWidget, Qt::WindowFlags f): QGLWidget(parent, shareWidget, f) {}
	MiqtVirtualQGLWidget(QGLContext* context, QWidget* parent): QGLWidget(context, parent) {}
	MiqtVirtualQGLWidget(QGLContext* context, QWidget* parent, const QGLWidget* shareWidget): QGLWidget(context, parent, shareWidget) {}
	MiqtVirtualQGLWidget(QGLContext* context, QWidget* parent, const QGLWidget* shareWidget, Qt::WindowFlags f): QGLWidget(context, parent, shareWidget, f) {}
	MiqtVirtualQGLWidget(const QGLFormat& format, QWidget* parent): QGLWidget(format, parent) {}
	MiqtVirtualQGLWidget(const QGLFormat& format, QWidget* parent, const QGLWidget* shareWidget): QGLWidget(format, parent, shareWidget) {}
	MiqtVirtualQGLWidget(const QGLFormat& format, QWidget* parent, const QGLWidget* shareWidget, Qt::WindowFlags f): QGLWidget(format, parent, shareWidget, f) {}

	virtual ~MiqtVirtualQGLWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QGLWidget::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QGLWidget_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QGLWidget_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateGL = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGL() override {
		if (handle__updateGL == 0) {
			QGLWidget::updateGL();
			return;
		}

		miqt_exec_callback_QGLWidget_updateGL(this, handle__updateGL);

	}

	friend void QGLWidget_virtualbase_updateGL(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateOverlayGL = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateOverlayGL() override {
		if (handle__updateOverlayGL == 0) {
			QGLWidget::updateOverlayGL();
			return;
		}

		miqt_exec_callback_QGLWidget_updateOverlayGL(this, handle__updateOverlayGL);

	}

	friend void QGLWidget_virtualbase_updateOverlayGL(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QGLWidget::event(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QGLWidget_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QGLWidget_virtualbase_event(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initializeGL = 0;

	// Subclass to allow providing a Go implementation
	virtual void initializeGL() override {
		if (handle__initializeGL == 0) {
			QGLWidget::initializeGL();
			return;
		}

		miqt_exec_callback_QGLWidget_initializeGL(this, handle__initializeGL);

	}

	friend void QGLWidget_virtualbase_initializeGL(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeGL = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeGL(int w, int h) override {
		if (handle__resizeGL == 0) {
			QGLWidget::resizeGL(w, h);
			return;
		}

		int sigval1 = w;
		int sigval2 = h;
		miqt_exec_callback_QGLWidget_resizeGL(this, handle__resizeGL, sigval1, sigval2);

	}

	friend void QGLWidget_virtualbase_resizeGL(void* self, int w, int h);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintGL = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintGL() override {
		if (handle__paintGL == 0) {
			QGLWidget::paintGL();
			return;
		}

		miqt_exec_callback_QGLWidget_paintGL(this, handle__paintGL);

	}

	friend void QGLWidget_virtualbase_paintGL(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initializeOverlayGL = 0;

	// Subclass to allow providing a Go implementation
	virtual void initializeOverlayGL() override {
		if (handle__initializeOverlayGL == 0) {
			QGLWidget::initializeOverlayGL();
			return;
		}

		miqt_exec_callback_QGLWidget_initializeOverlayGL(this, handle__initializeOverlayGL);

	}

	friend void QGLWidget_virtualbase_initializeOverlayGL(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeOverlayGL = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeOverlayGL(int w, int h) override {
		if (handle__resizeOverlayGL == 0) {
			QGLWidget::resizeOverlayGL(w, h);
			return;
		}

		int sigval1 = w;
		int sigval2 = h;
		miqt_exec_callback_QGLWidget_resizeOverlayGL(this, handle__resizeOverlayGL, sigval1, sigval2);

	}

	friend void QGLWidget_virtualbase_resizeOverlayGL(void* self, int w, int h);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintOverlayGL = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintOverlayGL() override {
		if (handle__paintOverlayGL == 0) {
			QGLWidget::paintOverlayGL();
			return;
		}

		miqt_exec_callback_QGLWidget_paintOverlayGL(this, handle__paintOverlayGL);

	}

	friend void QGLWidget_virtualbase_paintOverlayGL(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QGLWidget::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QGLWidget_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QGLWidget::resizeEvent(param1);
			return;
		}

		QResizeEvent* sigval1 = param1;
		miqt_exec_callback_QGLWidget_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_resizeEvent(void* self, QResizeEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__glInit = 0;

	// Subclass to allow providing a Go implementation
	virtual void glInit() override {
		if (handle__glInit == 0) {
			QGLWidget::glInit();
			return;
		}

		miqt_exec_callback_QGLWidget_glInit(this, handle__glInit);

	}

	friend void QGLWidget_virtualbase_glInit(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__glDraw = 0;

	// Subclass to allow providing a Go implementation
	virtual void glDraw() override {
		if (handle__glDraw == 0) {
			QGLWidget::glDraw();
			return;
		}

		miqt_exec_callback_QGLWidget_glDraw(this, handle__glDraw);

	}

	friend void QGLWidget_virtualbase_glDraw(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QGLWidget::devType();
		}

		int callback_return_value = miqt_exec_callback_QGLWidget_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QGLWidget_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QGLWidget::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QGLWidget_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QGLWidget_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QGLWidget::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QGLWidget_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QGLWidget_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QGLWidget::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QGLWidget_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QGLWidget_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QGLWidget::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QGLWidget_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QGLWidget_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QGLWidget::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QGLWidget_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QGLWidget_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QGLWidget::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QGLWidget::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QGLWidget::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QGLWidget::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QGLWidget::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QGLWidget::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QGLWidget::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QGLWidget::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QGLWidget::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QGLWidget::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QGLWidget::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QGLWidget::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QGLWidget::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QGLWidget::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QGLWidget::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QGLWidget::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QGLWidget::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QGLWidget::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QGLWidget::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QGLWidget::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QGLWidget::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QGLWidget::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QGLWidget::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QGLWidget_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QGLWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QGLWidget::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QGLWidget_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QGLWidget::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QGLWidget_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QGLWidget_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QGLWidget::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QGLWidget_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QGLWidget_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QGLWidget::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QGLWidget_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QGLWidget_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QGLWidget::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QGLWidget_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QGLWidget_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QGLWidget::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QGLWidget_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QGLWidget::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QGLWidget_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QGLWidget_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QGLWidget::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QGLWidget_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QGLWidget_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGLWidget::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGLWidget_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGLWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGLWidget::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QGLWidget::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGLWidget::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGLWidget_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QGLWidget_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGLWidget::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGLWidget_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QGLWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGLWidget::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGLWidget_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QGLWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QGLWidget_protectedbase_setAutoBufferSwap(bool* _dynamic_cast_ok, void* self, bool on);
	friend bool QGLWidget_protectedbase_autoBufferSwap(bool* _dynamic_cast_ok, const void* self);
	friend void QGLWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QGLWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QGLWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QGLWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QGLWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QGLWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGLWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGLWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGLWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QGLWidget* QGLWidget_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQGLWidget(parent);
}

QGLWidget* QGLWidget_new2() {
	return new (std::nothrow) MiqtVirtualQGLWidget();
}

QGLWidget* QGLWidget_new3(QGLContext* context) {
	return new (std::nothrow) MiqtVirtualQGLWidget(context);
}

QGLWidget* QGLWidget_new4(QGLFormat* format) {
	return new (std::nothrow) MiqtVirtualQGLWidget(*format);
}

QGLWidget* QGLWidget_new5(QWidget* parent, QGLWidget* shareWidget) {
	return new (std::nothrow) MiqtVirtualQGLWidget(parent, shareWidget);
}

QGLWidget* QGLWidget_new6(QWidget* parent, QGLWidget* shareWidget, int f) {
	return new (std::nothrow) MiqtVirtualQGLWidget(parent, shareWidget, static_cast<Qt::WindowFlags>(f));
}

QGLWidget* QGLWidget_new7(QGLContext* context, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQGLWidget(context, parent);
}

QGLWidget* QGLWidget_new8(QGLContext* context, QWidget* parent, QGLWidget* shareWidget) {
	return new (std::nothrow) MiqtVirtualQGLWidget(context, parent, shareWidget);
}

QGLWidget* QGLWidget_new9(QGLContext* context, QWidget* parent, QGLWidget* shareWidget, int f) {
	return new (std::nothrow) MiqtVirtualQGLWidget(context, parent, shareWidget, static_cast<Qt::WindowFlags>(f));
}

QGLWidget* QGLWidget_new10(QGLFormat* format, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQGLWidget(*format, parent);
}

QGLWidget* QGLWidget_new11(QGLFormat* format, QWidget* parent, QGLWidget* shareWidget) {
	return new (std::nothrow) MiqtVirtualQGLWidget(*format, parent, shareWidget);
}

QGLWidget* QGLWidget_new12(QGLFormat* format, QWidget* parent, QGLWidget* shareWidget, int f) {
	return new (std::nothrow) MiqtVirtualQGLWidget(*format, parent, shareWidget, static_cast<Qt::WindowFlags>(f));
}

void QGLWidget_virtbase(QGLWidget* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QGLWidget_metaObject(const QGLWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGLWidget_metacast(QGLWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGLWidget_tr(const char* s) {
	QString _ret = QGLWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGLWidget_trUtf8(const char* s) {
	QString _ret = QGLWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGLWidget_qglColor(const QGLWidget* self, QColor* c) {
	self->qglColor(*c);
}

void QGLWidget_qglClearColor(const QGLWidget* self, QColor* c) {
	self->qglClearColor(*c);
}

bool QGLWidget_isValid(const QGLWidget* self) {
	return self->isValid();
}

bool QGLWidget_isSharing(const QGLWidget* self) {
	return self->isSharing();
}

void QGLWidget_makeCurrent(QGLWidget* self) {
	self->makeCurrent();
}

void QGLWidget_doneCurrent(QGLWidget* self) {
	self->doneCurrent();
}

bool QGLWidget_doubleBuffer(const QGLWidget* self) {
	return self->doubleBuffer();
}

void QGLWidget_swapBuffers(QGLWidget* self) {
	self->swapBuffers();
}

QGLFormat* QGLWidget_format(const QGLWidget* self) {
	return new QGLFormat(self->format());
}

void QGLWidget_setFormat(QGLWidget* self, QGLFormat* format) {
	self->setFormat(*format);
}

QGLContext* QGLWidget_context(const QGLWidget* self) {
	return self->context();
}

void QGLWidget_setContext(QGLWidget* self, QGLContext* context) {
	self->setContext(context);
}

QPixmap* QGLWidget_renderPixmap(QGLWidget* self) {
	return new QPixmap(self->renderPixmap());
}

QImage* QGLWidget_grabFrameBuffer(QGLWidget* self) {
	return new QImage(self->grabFrameBuffer());
}

void QGLWidget_makeOverlayCurrent(QGLWidget* self) {
	self->makeOverlayCurrent();
}

QGLContext* QGLWidget_overlayContext(const QGLWidget* self) {
	return (QGLContext*) self->overlayContext();
}

QImage* QGLWidget_convertToGLFormat(QImage* img) {
	return new QImage(QGLWidget::convertToGLFormat(*img));
}

void QGLWidget_renderText(QGLWidget* self, int x, int y, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	self->renderText(static_cast<int>(x), static_cast<int>(y), str_QString);
}

void QGLWidget_renderText2(QGLWidget* self, double x, double y, double z, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	self->renderText(static_cast<double>(x), static_cast<double>(y), static_cast<double>(z), str_QString);
}

QPaintEngine* QGLWidget_paintEngine(const QGLWidget* self) {
	return self->paintEngine();
}

void QGLWidget_updateGL(QGLWidget* self) {
	self->updateGL();
}

void QGLWidget_updateOverlayGL(QGLWidget* self) {
	self->updateOverlayGL();
}

struct miqt_string QGLWidget_tr2(const char* s, const char* c) {
	QString _ret = QGLWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGLWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QGLWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGLWidget_trUtf82(const char* s, const char* c) {
	QString _ret = QGLWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGLWidget_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QGLWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGLWidget_setContext2(QGLWidget* self, QGLContext* context, QGLContext* shareContext) {
	self->setContext(context, shareContext);
}

void QGLWidget_setContext3(QGLWidget* self, QGLContext* context, QGLContext* shareContext, bool deleteOldContext) {
	self->setContext(context, shareContext, deleteOldContext);
}

QPixmap* QGLWidget_renderPixmapWithInt(QGLWidget* self, int w) {
	return new QPixmap(self->renderPixmap(static_cast<int>(w)));
}

QPixmap* QGLWidget_renderPixmap2(QGLWidget* self, int w, int h) {
	return new QPixmap(self->renderPixmap(static_cast<int>(w), static_cast<int>(h)));
}

QPixmap* QGLWidget_renderPixmap3(QGLWidget* self, int w, int h, bool useContext) {
	return new QPixmap(self->renderPixmap(static_cast<int>(w), static_cast<int>(h), useContext));
}

QImage* QGLWidget_grabFrameBufferWithWithAlpha(QGLWidget* self, bool withAlpha) {
	return new QImage(self->grabFrameBuffer(withAlpha));
}

void QGLWidget_renderText3(QGLWidget* self, int x, int y, struct miqt_string str, QFont* fnt) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	self->renderText(static_cast<int>(x), static_cast<int>(y), str_QString, *fnt);
}

void QGLWidget_renderText4(QGLWidget* self, double x, double y, double z, struct miqt_string str, QFont* fnt) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	self->renderText(static_cast<double>(x), static_cast<double>(y), static_cast<double>(z), str_QString, *fnt);
}

bool QGLWidget_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QGLWidget_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQGLWidget*>(self)->QGLWidget::paintEngine();
}

bool QGLWidget_override_virtual_updateGL(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateGL = slot;
	return true;
}

void QGLWidget_virtualbase_updateGL(void* self) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::updateGL();
}

bool QGLWidget_override_virtual_updateOverlayGL(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateOverlayGL = slot;
	return true;
}

void QGLWidget_virtualbase_updateOverlayGL(void* self) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::updateOverlayGL();
}

bool QGLWidget_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QGLWidget_virtualbase_event(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::event(param1);
}

bool QGLWidget_override_virtual_initializeGL(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initializeGL = slot;
	return true;
}

void QGLWidget_virtualbase_initializeGL(void* self) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::initializeGL();
}

bool QGLWidget_override_virtual_resizeGL(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeGL = slot;
	return true;
}

void QGLWidget_virtualbase_resizeGL(void* self, int w, int h) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::resizeGL(static_cast<int>(w), static_cast<int>(h));
}

bool QGLWidget_override_virtual_paintGL(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintGL = slot;
	return true;
}

void QGLWidget_virtualbase_paintGL(void* self) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::paintGL();
}

bool QGLWidget_override_virtual_initializeOverlayGL(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initializeOverlayGL = slot;
	return true;
}

void QGLWidget_virtualbase_initializeOverlayGL(void* self) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::initializeOverlayGL();
}

bool QGLWidget_override_virtual_resizeOverlayGL(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeOverlayGL = slot;
	return true;
}

void QGLWidget_virtualbase_resizeOverlayGL(void* self, int w, int h) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::resizeOverlayGL(static_cast<int>(w), static_cast<int>(h));
}

bool QGLWidget_override_virtual_paintOverlayGL(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintOverlayGL = slot;
	return true;
}

void QGLWidget_virtualbase_paintOverlayGL(void* self) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::paintOverlayGL();
}

bool QGLWidget_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QGLWidget_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::paintEvent(param1);
}

bool QGLWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QGLWidget_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::resizeEvent(param1);
}

bool QGLWidget_override_virtual_glInit(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__glInit = slot;
	return true;
}

void QGLWidget_virtualbase_glInit(void* self) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::glInit();
}

bool QGLWidget_override_virtual_glDraw(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__glDraw = slot;
	return true;
}

void QGLWidget_virtualbase_glDraw(void* self) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::glDraw();
}

bool QGLWidget_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QGLWidget_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQGLWidget*>(self)->QGLWidget::devType();
}

bool QGLWidget_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QGLWidget_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::setVisible(visible);
}

bool QGLWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QGLWidget_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQGLWidget*>(self)->QGLWidget::sizeHint());
}

bool QGLWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QGLWidget_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQGLWidget*>(self)->QGLWidget::minimumSizeHint());
}

bool QGLWidget_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QGLWidget_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQGLWidget*>(self)->QGLWidget::heightForWidth(static_cast<int>(param1));
}

bool QGLWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QGLWidget_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQGLWidget*>(self)->QGLWidget::hasHeightForWidth();
}

bool QGLWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QGLWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::mousePressEvent(event);
}

bool QGLWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QGLWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::mouseReleaseEvent(event);
}

bool QGLWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QGLWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::mouseDoubleClickEvent(event);
}

bool QGLWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QGLWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::mouseMoveEvent(event);
}

bool QGLWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QGLWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::wheelEvent(event);
}

bool QGLWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QGLWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::keyPressEvent(event);
}

bool QGLWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QGLWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::keyReleaseEvent(event);
}

bool QGLWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QGLWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::focusInEvent(event);
}

bool QGLWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QGLWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::focusOutEvent(event);
}

bool QGLWidget_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QGLWidget_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::enterEvent(event);
}

bool QGLWidget_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QGLWidget_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::leaveEvent(event);
}

bool QGLWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QGLWidget_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::moveEvent(event);
}

bool QGLWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QGLWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::closeEvent(event);
}

bool QGLWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QGLWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::contextMenuEvent(event);
}

bool QGLWidget_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QGLWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::tabletEvent(event);
}

bool QGLWidget_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QGLWidget_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::actionEvent(event);
}

bool QGLWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QGLWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::dragEnterEvent(event);
}

bool QGLWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QGLWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::dragMoveEvent(event);
}

bool QGLWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QGLWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::dragLeaveEvent(event);
}

bool QGLWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QGLWidget_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::dropEvent(event);
}

bool QGLWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QGLWidget_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::showEvent(event);
}

bool QGLWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QGLWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::hideEvent(event);
}

bool QGLWidget_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QGLWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QGLWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QGLWidget_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::changeEvent(param1);
}

bool QGLWidget_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QGLWidget_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQGLWidget*>(self)->QGLWidget::metric(static_cast<MiqtVirtualQGLWidget::PaintDeviceMetric>(param1));
}

bool QGLWidget_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QGLWidget_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQGLWidget*>(self)->QGLWidget::initPainter(painter);
}

bool QGLWidget_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QGLWidget_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQGLWidget*>(self)->QGLWidget::redirected(offset);
}

bool QGLWidget_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QGLWidget_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQGLWidget*>(self)->QGLWidget::sharedPainter();
}

bool QGLWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QGLWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::inputMethodEvent(param1);
}

bool QGLWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QGLWidget_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQGLWidget*>(self)->QGLWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QGLWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QGLWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::focusNextPrevChild(next);
}

bool QGLWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGLWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::eventFilter(watched, event);
}

bool QGLWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QGLWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::timerEvent(event);
}

bool QGLWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QGLWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::childEvent(event);
}

bool QGLWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QGLWidget_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::customEvent(event);
}

bool QGLWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QGLWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::connectNotify(*signal);
}

bool QGLWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGLWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGLWidget*>(self)->QGLWidget::disconnectNotify(*signal);
}

void QGLWidget_protectedbase_setAutoBufferSwap(bool* _dynamic_cast_ok, void* self, bool on) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setAutoBufferSwap(on);
}

bool QGLWidget_protectedbase_autoBufferSwap(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->autoBufferSwap();
}

void QGLWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QGLWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QGLWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QGLWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QGLWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QGLWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QGLWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QGLWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QGLWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGLWidget* self_cast = dynamic_cast<MiqtVirtualQGLWidget*>( (QGLWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QGLWidget_delete(QGLWidget* self) {
	delete self;
}

