#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QPainter>
#include <QPrinter>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSvgGenerator>
#include <QTimerEvent>
#include <qwt_plot_renderer.h>
#include "gen_qwt_plot_renderer.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtPlotRenderer_render(const QwtPlotRenderer*, intptr_t, QwtPlot*, QPainter*, QRectF*);
void miqt_exec_callback_QwtPlotRenderer_renderTitle(const QwtPlotRenderer*, intptr_t, QwtPlot*, QPainter*, QRectF*);
void miqt_exec_callback_QwtPlotRenderer_renderFooter(const QwtPlotRenderer*, intptr_t, QwtPlot*, QPainter*, QRectF*);
void miqt_exec_callback_QwtPlotRenderer_renderScale(const QwtPlotRenderer*, intptr_t, QwtPlot*, QPainter*, int, int, int, int, QRectF*);
void miqt_exec_callback_QwtPlotRenderer_renderLegend(const QwtPlotRenderer*, intptr_t, QwtPlot*, QPainter*, QRectF*);
bool miqt_exec_callback_QwtPlotRenderer_event(QwtPlotRenderer*, intptr_t, QEvent*);
bool miqt_exec_callback_QwtPlotRenderer_eventFilter(QwtPlotRenderer*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtPlotRenderer_timerEvent(QwtPlotRenderer*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtPlotRenderer_childEvent(QwtPlotRenderer*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtPlotRenderer_customEvent(QwtPlotRenderer*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotRenderer_connectNotify(QwtPlotRenderer*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtPlotRenderer_disconnectNotify(QwtPlotRenderer*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtPlotRenderer final : public QwtPlotRenderer {
public:

	MiqtVirtualQwtPlotRenderer(): QwtPlotRenderer() {}
	MiqtVirtualQwtPlotRenderer(QObject* param1): QwtPlotRenderer(param1) {}

	virtual ~MiqtVirtualQwtPlotRenderer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__render = 0;

	// Subclass to allow providing a Go implementation
	virtual void render(QwtPlot* param1, QPainter* param2, const QRectF& plotRect) const override {
		if (handle__render == 0) {
			QwtPlotRenderer::render(param1, param2, plotRect);
			return;
		}

		QwtPlot* sigval1 = param1;
		QPainter* sigval2 = param2;
		const QRectF& plotRect_ret = plotRect;
		// Cast returned reference into pointer
		QRectF* sigval3 = const_cast<QRectF*>(&plotRect_ret);
		miqt_exec_callback_QwtPlotRenderer_render(this, handle__render, sigval1, sigval2, sigval3);

	}

	friend void QwtPlotRenderer_virtualbase_render(const void* self, QwtPlot* param1, QPainter* param2, QRectF* plotRect);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__renderTitle = 0;

	// Subclass to allow providing a Go implementation
	virtual void renderTitle(const QwtPlot* param1, QPainter* param2, const QRectF& titleRect) const override {
		if (handle__renderTitle == 0) {
			QwtPlotRenderer::renderTitle(param1, param2, titleRect);
			return;
		}

		QwtPlot* sigval1 = (QwtPlot*) param1;
		QPainter* sigval2 = param2;
		const QRectF& titleRect_ret = titleRect;
		// Cast returned reference into pointer
		QRectF* sigval3 = const_cast<QRectF*>(&titleRect_ret);
		miqt_exec_callback_QwtPlotRenderer_renderTitle(this, handle__renderTitle, sigval1, sigval2, sigval3);

	}

	friend void QwtPlotRenderer_virtualbase_renderTitle(const void* self, QwtPlot* param1, QPainter* param2, QRectF* titleRect);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__renderFooter = 0;

	// Subclass to allow providing a Go implementation
	virtual void renderFooter(const QwtPlot* param1, QPainter* param2, const QRectF& footerRect) const override {
		if (handle__renderFooter == 0) {
			QwtPlotRenderer::renderFooter(param1, param2, footerRect);
			return;
		}

		QwtPlot* sigval1 = (QwtPlot*) param1;
		QPainter* sigval2 = param2;
		const QRectF& footerRect_ret = footerRect;
		// Cast returned reference into pointer
		QRectF* sigval3 = const_cast<QRectF*>(&footerRect_ret);
		miqt_exec_callback_QwtPlotRenderer_renderFooter(this, handle__renderFooter, sigval1, sigval2, sigval3);

	}

	friend void QwtPlotRenderer_virtualbase_renderFooter(const void* self, QwtPlot* param1, QPainter* param2, QRectF* footerRect);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__renderScale = 0;

	// Subclass to allow providing a Go implementation
	virtual void renderScale(const QwtPlot* param1, QPainter* param2, int axisId, int startDist, int endDist, int baseDist, const QRectF& scaleRect) const override {
		if (handle__renderScale == 0) {
			QwtPlotRenderer::renderScale(param1, param2, axisId, startDist, endDist, baseDist, scaleRect);
			return;
		}

		QwtPlot* sigval1 = (QwtPlot*) param1;
		QPainter* sigval2 = param2;
		int sigval3 = axisId;
		int sigval4 = startDist;
		int sigval5 = endDist;
		int sigval6 = baseDist;
		const QRectF& scaleRect_ret = scaleRect;
		// Cast returned reference into pointer
		QRectF* sigval7 = const_cast<QRectF*>(&scaleRect_ret);
		miqt_exec_callback_QwtPlotRenderer_renderScale(this, handle__renderScale, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6, sigval7);

	}

	friend void QwtPlotRenderer_virtualbase_renderScale(const void* self, QwtPlot* param1, QPainter* param2, int axisId, int startDist, int endDist, int baseDist, QRectF* scaleRect);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__renderLegend = 0;

	// Subclass to allow providing a Go implementation
	virtual void renderLegend(const QwtPlot* param1, QPainter* param2, const QRectF& legendRect) const override {
		if (handle__renderLegend == 0) {
			QwtPlotRenderer::renderLegend(param1, param2, legendRect);
			return;
		}

		QwtPlot* sigval1 = (QwtPlot*) param1;
		QPainter* sigval2 = param2;
		const QRectF& legendRect_ret = legendRect;
		// Cast returned reference into pointer
		QRectF* sigval3 = const_cast<QRectF*>(&legendRect_ret);
		miqt_exec_callback_QwtPlotRenderer_renderLegend(this, handle__renderLegend, sigval1, sigval2, sigval3);

	}

	friend void QwtPlotRenderer_virtualbase_renderLegend(const void* self, QwtPlot* param1, QPainter* param2, QRectF* legendRect);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QwtPlotRenderer::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtPlotRenderer_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QwtPlotRenderer_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QwtPlotRenderer::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QwtPlotRenderer_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtPlotRenderer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QwtPlotRenderer::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotRenderer_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QwtPlotRenderer_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QwtPlotRenderer::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotRenderer_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QwtPlotRenderer_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QwtPlotRenderer::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotRenderer_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QwtPlotRenderer_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QwtPlotRenderer::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPlotRenderer_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QwtPlotRenderer_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QwtPlotRenderer::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPlotRenderer_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QwtPlotRenderer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QwtPlotRenderer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPlotRenderer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPlotRenderer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtPlotRenderer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtPlotRenderer* QwtPlotRenderer_new() {
	return new (std::nothrow) MiqtVirtualQwtPlotRenderer();
}

QwtPlotRenderer* QwtPlotRenderer_new2(QObject* param1) {
	return new (std::nothrow) MiqtVirtualQwtPlotRenderer(param1);
}

void QwtPlotRenderer_virtbase(QwtPlotRenderer* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QwtPlotRenderer_metaObject(const QwtPlotRenderer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtPlotRenderer_metacast(QwtPlotRenderer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtPlotRenderer_tr(const char* s) {
	QString _ret = QwtPlotRenderer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotRenderer_trUtf8(const char* s) {
	QString _ret = QwtPlotRenderer::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtPlotRenderer_setDiscardFlag(QwtPlotRenderer* self, int flag) {
	self->setDiscardFlag(static_cast<QwtPlotRenderer::DiscardFlag>(flag));
}

bool QwtPlotRenderer_testDiscardFlag(const QwtPlotRenderer* self, int flag) {
	return self->testDiscardFlag(static_cast<QwtPlotRenderer::DiscardFlag>(flag));
}

void QwtPlotRenderer_setDiscardFlags(QwtPlotRenderer* self, int flags) {
	self->setDiscardFlags(static_cast<QwtPlotRenderer::DiscardFlags>(flags));
}

int QwtPlotRenderer_discardFlags(const QwtPlotRenderer* self) {
	QwtPlotRenderer::DiscardFlags _ret = self->discardFlags();
	return static_cast<int>(_ret);
}

void QwtPlotRenderer_setLayoutFlag(QwtPlotRenderer* self, int flag) {
	self->setLayoutFlag(static_cast<QwtPlotRenderer::LayoutFlag>(flag));
}

bool QwtPlotRenderer_testLayoutFlag(const QwtPlotRenderer* self, int flag) {
	return self->testLayoutFlag(static_cast<QwtPlotRenderer::LayoutFlag>(flag));
}

void QwtPlotRenderer_setLayoutFlags(QwtPlotRenderer* self, int flags) {
	self->setLayoutFlags(static_cast<QwtPlotRenderer::LayoutFlags>(flags));
}

int QwtPlotRenderer_layoutFlags(const QwtPlotRenderer* self) {
	QwtPlotRenderer::LayoutFlags _ret = self->layoutFlags();
	return static_cast<int>(_ret);
}

void QwtPlotRenderer_renderDocument(QwtPlotRenderer* self, QwtPlot* param1, struct miqt_string fileName, QSizeF* sizeMM) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->renderDocument(param1, fileName_QString, *sizeMM);
}

void QwtPlotRenderer_renderDocument2(QwtPlotRenderer* self, QwtPlot* param1, struct miqt_string fileName, struct miqt_string format, QSizeF* sizeMM) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	self->renderDocument(param1, fileName_QString, format_QString, *sizeMM);
}

void QwtPlotRenderer_renderTo(const QwtPlotRenderer* self, QwtPlot* param1, QSvgGenerator* param2) {
	self->renderTo(param1, *param2);
}

void QwtPlotRenderer_renderTo2(const QwtPlotRenderer* self, QwtPlot* param1, QPrinter* param2) {
	self->renderTo(param1, *param2);
}

void QwtPlotRenderer_renderTo3(const QwtPlotRenderer* self, QwtPlot* param1, QPaintDevice* param2) {
	self->renderTo(param1, *param2);
}

void QwtPlotRenderer_render(const QwtPlotRenderer* self, QwtPlot* param1, QPainter* param2, QRectF* plotRect) {
	self->render(param1, param2, *plotRect);
}

void QwtPlotRenderer_renderTitle(const QwtPlotRenderer* self, QwtPlot* param1, QPainter* param2, QRectF* titleRect) {
	self->renderTitle(param1, param2, *titleRect);
}

void QwtPlotRenderer_renderFooter(const QwtPlotRenderer* self, QwtPlot* param1, QPainter* param2, QRectF* footerRect) {
	self->renderFooter(param1, param2, *footerRect);
}

void QwtPlotRenderer_renderScale(const QwtPlotRenderer* self, QwtPlot* param1, QPainter* param2, int axisId, int startDist, int endDist, int baseDist, QRectF* scaleRect) {
	self->renderScale(param1, param2, static_cast<int>(axisId), static_cast<int>(startDist), static_cast<int>(endDist), static_cast<int>(baseDist), *scaleRect);
}

void QwtPlotRenderer_renderLegend(const QwtPlotRenderer* self, QwtPlot* param1, QPainter* param2, QRectF* legendRect) {
	self->renderLegend(param1, param2, *legendRect);
}

bool QwtPlotRenderer_exportTo(QwtPlotRenderer* self, QwtPlot* param1, struct miqt_string documentName) {
	QString documentName_QString = QString::fromUtf8(documentName.data, documentName.len);
	return self->exportTo(param1, documentName_QString);
}

struct miqt_string QwtPlotRenderer_tr2(const char* s, const char* c) {
	QString _ret = QwtPlotRenderer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotRenderer_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtPlotRenderer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotRenderer_trUtf82(const char* s, const char* c) {
	QString _ret = QwtPlotRenderer::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotRenderer_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtPlotRenderer::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtPlotRenderer_setDiscardFlag2(QwtPlotRenderer* self, int flag, bool on) {
	self->setDiscardFlag(static_cast<QwtPlotRenderer::DiscardFlag>(flag), on);
}

void QwtPlotRenderer_setLayoutFlag2(QwtPlotRenderer* self, int flag, bool on) {
	self->setLayoutFlag(static_cast<QwtPlotRenderer::LayoutFlag>(flag), on);
}

void QwtPlotRenderer_renderDocument3(QwtPlotRenderer* self, QwtPlot* param1, struct miqt_string fileName, QSizeF* sizeMM, int resolution) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->renderDocument(param1, fileName_QString, *sizeMM, static_cast<int>(resolution));
}

void QwtPlotRenderer_renderDocument4(QwtPlotRenderer* self, QwtPlot* param1, struct miqt_string fileName, struct miqt_string format, QSizeF* sizeMM, int resolution) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	self->renderDocument(param1, fileName_QString, format_QString, *sizeMM, static_cast<int>(resolution));
}

bool QwtPlotRenderer_exportTo2(QwtPlotRenderer* self, QwtPlot* param1, struct miqt_string documentName, QSizeF* sizeMM) {
	QString documentName_QString = QString::fromUtf8(documentName.data, documentName.len);
	return self->exportTo(param1, documentName_QString, *sizeMM);
}

bool QwtPlotRenderer_exportTo3(QwtPlotRenderer* self, QwtPlot* param1, struct miqt_string documentName, QSizeF* sizeMM, int resolution) {
	QString documentName_QString = QString::fromUtf8(documentName.data, documentName.len);
	return self->exportTo(param1, documentName_QString, *sizeMM, static_cast<int>(resolution));
}

bool QwtPlotRenderer_override_virtual_render(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRenderer* self_cast = dynamic_cast<MiqtVirtualQwtPlotRenderer*>( (QwtPlotRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__render = slot;
	return true;
}

void QwtPlotRenderer_virtualbase_render(const void* self, QwtPlot* param1, QPainter* param2, QRectF* plotRect) {
	static_cast<const MiqtVirtualQwtPlotRenderer*>(self)->QwtPlotRenderer::render(param1, param2, *plotRect);
}

bool QwtPlotRenderer_override_virtual_renderTitle(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRenderer* self_cast = dynamic_cast<MiqtVirtualQwtPlotRenderer*>( (QwtPlotRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__renderTitle = slot;
	return true;
}

void QwtPlotRenderer_virtualbase_renderTitle(const void* self, QwtPlot* param1, QPainter* param2, QRectF* titleRect) {
	static_cast<const MiqtVirtualQwtPlotRenderer*>(self)->QwtPlotRenderer::renderTitle(param1, param2, *titleRect);
}

bool QwtPlotRenderer_override_virtual_renderFooter(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRenderer* self_cast = dynamic_cast<MiqtVirtualQwtPlotRenderer*>( (QwtPlotRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__renderFooter = slot;
	return true;
}

void QwtPlotRenderer_virtualbase_renderFooter(const void* self, QwtPlot* param1, QPainter* param2, QRectF* footerRect) {
	static_cast<const MiqtVirtualQwtPlotRenderer*>(self)->QwtPlotRenderer::renderFooter(param1, param2, *footerRect);
}

bool QwtPlotRenderer_override_virtual_renderScale(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRenderer* self_cast = dynamic_cast<MiqtVirtualQwtPlotRenderer*>( (QwtPlotRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__renderScale = slot;
	return true;
}

void QwtPlotRenderer_virtualbase_renderScale(const void* self, QwtPlot* param1, QPainter* param2, int axisId, int startDist, int endDist, int baseDist, QRectF* scaleRect) {
	static_cast<const MiqtVirtualQwtPlotRenderer*>(self)->QwtPlotRenderer::renderScale(param1, param2, static_cast<int>(axisId), static_cast<int>(startDist), static_cast<int>(endDist), static_cast<int>(baseDist), *scaleRect);
}

bool QwtPlotRenderer_override_virtual_renderLegend(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRenderer* self_cast = dynamic_cast<MiqtVirtualQwtPlotRenderer*>( (QwtPlotRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__renderLegend = slot;
	return true;
}

void QwtPlotRenderer_virtualbase_renderLegend(const void* self, QwtPlot* param1, QPainter* param2, QRectF* legendRect) {
	static_cast<const MiqtVirtualQwtPlotRenderer*>(self)->QwtPlotRenderer::renderLegend(param1, param2, *legendRect);
}

bool QwtPlotRenderer_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRenderer* self_cast = dynamic_cast<MiqtVirtualQwtPlotRenderer*>( (QwtPlotRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QwtPlotRenderer_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtPlotRenderer*>(self)->QwtPlotRenderer::event(event);
}

bool QwtPlotRenderer_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRenderer* self_cast = dynamic_cast<MiqtVirtualQwtPlotRenderer*>( (QwtPlotRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QwtPlotRenderer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQwtPlotRenderer*>(self)->QwtPlotRenderer::eventFilter(watched, event);
}

bool QwtPlotRenderer_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRenderer* self_cast = dynamic_cast<MiqtVirtualQwtPlotRenderer*>( (QwtPlotRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QwtPlotRenderer_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtPlotRenderer*>(self)->QwtPlotRenderer::timerEvent(event);
}

bool QwtPlotRenderer_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRenderer* self_cast = dynamic_cast<MiqtVirtualQwtPlotRenderer*>( (QwtPlotRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QwtPlotRenderer_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtPlotRenderer*>(self)->QwtPlotRenderer::childEvent(event);
}

bool QwtPlotRenderer_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRenderer* self_cast = dynamic_cast<MiqtVirtualQwtPlotRenderer*>( (QwtPlotRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QwtPlotRenderer_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPlotRenderer*>(self)->QwtPlotRenderer::customEvent(event);
}

bool QwtPlotRenderer_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRenderer* self_cast = dynamic_cast<MiqtVirtualQwtPlotRenderer*>( (QwtPlotRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QwtPlotRenderer_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPlotRenderer*>(self)->QwtPlotRenderer::connectNotify(*signal);
}

bool QwtPlotRenderer_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRenderer* self_cast = dynamic_cast<MiqtVirtualQwtPlotRenderer*>( (QwtPlotRenderer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QwtPlotRenderer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPlotRenderer*>(self)->QwtPlotRenderer::disconnectNotify(*signal);
}

QObject* QwtPlotRenderer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotRenderer* self_cast = dynamic_cast<MiqtVirtualQwtPlotRenderer*>( (QwtPlotRenderer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtPlotRenderer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotRenderer* self_cast = dynamic_cast<MiqtVirtualQwtPlotRenderer*>( (QwtPlotRenderer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtPlotRenderer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtPlotRenderer* self_cast = dynamic_cast<MiqtVirtualQwtPlotRenderer*>( (QwtPlotRenderer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtPlotRenderer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtPlotRenderer* self_cast = dynamic_cast<MiqtVirtualQwtPlotRenderer*>( (QwtPlotRenderer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtPlotRenderer_delete(QwtPlotRenderer* self) {
	delete self;
}

