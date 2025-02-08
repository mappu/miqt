#include <QAbstractTextDocumentLayout>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__PaintContext
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__Selection
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QPainter>
#include <QPointF>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextBlock>
#include <QTextCharFormat>
#include <QTextDocument>
#include <QTextFormat>
#include <QTextFrame>
#include <QTextInlineObject>
#include <QTextObjectInterface>
#include <QTimerEvent>
#include <qabstracttextdocumentlayout.h>
#include "gen_qabstracttextdocumentlayout.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractTextDocumentLayout_update(intptr_t);
void miqt_exec_callback_QAbstractTextDocumentLayout_updateBlock(intptr_t, QTextBlock*);
void miqt_exec_callback_QAbstractTextDocumentLayout_documentSizeChanged(intptr_t, QSizeF*);
void miqt_exec_callback_QAbstractTextDocumentLayout_pageCountChanged(intptr_t, int);
void miqt_exec_callback_QAbstractTextDocumentLayout_update1(intptr_t, QRectF*);
void miqt_exec_callback_QAbstractTextDocumentLayout_draw(QAbstractTextDocumentLayout*, intptr_t, QPainter*, QAbstractTextDocumentLayout__PaintContext*);
int miqt_exec_callback_QAbstractTextDocumentLayout_hitTest(const QAbstractTextDocumentLayout*, intptr_t, QPointF*, int);
int miqt_exec_callback_QAbstractTextDocumentLayout_pageCount(const QAbstractTextDocumentLayout*, intptr_t);
QSizeF* miqt_exec_callback_QAbstractTextDocumentLayout_documentSize(const QAbstractTextDocumentLayout*, intptr_t);
QRectF* miqt_exec_callback_QAbstractTextDocumentLayout_frameBoundingRect(const QAbstractTextDocumentLayout*, intptr_t, QTextFrame*);
QRectF* miqt_exec_callback_QAbstractTextDocumentLayout_blockBoundingRect(const QAbstractTextDocumentLayout*, intptr_t, QTextBlock*);
void miqt_exec_callback_QAbstractTextDocumentLayout_documentChanged(QAbstractTextDocumentLayout*, intptr_t, int, int, int);
void miqt_exec_callback_QAbstractTextDocumentLayout_resizeInlineObject(QAbstractTextDocumentLayout*, intptr_t, QTextInlineObject*, int, QTextFormat*);
void miqt_exec_callback_QAbstractTextDocumentLayout_positionInlineObject(QAbstractTextDocumentLayout*, intptr_t, QTextInlineObject*, int, QTextFormat*);
void miqt_exec_callback_QAbstractTextDocumentLayout_drawInlineObject(QAbstractTextDocumentLayout*, intptr_t, QPainter*, QRectF*, QTextInlineObject*, int, QTextFormat*);
bool miqt_exec_callback_QAbstractTextDocumentLayout_event(QAbstractTextDocumentLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractTextDocumentLayout_eventFilter(QAbstractTextDocumentLayout*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractTextDocumentLayout_timerEvent(QAbstractTextDocumentLayout*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractTextDocumentLayout_childEvent(QAbstractTextDocumentLayout*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractTextDocumentLayout_customEvent(QAbstractTextDocumentLayout*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractTextDocumentLayout_connectNotify(QAbstractTextDocumentLayout*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractTextDocumentLayout_disconnectNotify(QAbstractTextDocumentLayout*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractTextDocumentLayout final : public QAbstractTextDocumentLayout {
public:

	MiqtVirtualQAbstractTextDocumentLayout(QTextDocument* doc): QAbstractTextDocumentLayout(doc) {};

	virtual ~MiqtVirtualQAbstractTextDocumentLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* painter, const QAbstractTextDocumentLayout::PaintContext& context) override {
		if (handle__draw == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QPainter* sigval1 = painter;
		const QAbstractTextDocumentLayout::PaintContext& context_ret = context;
		// Cast returned reference into pointer
		QAbstractTextDocumentLayout__PaintContext* sigval2 = const_cast<QAbstractTextDocumentLayout::PaintContext*>(&context_ret);

		miqt_exec_callback_QAbstractTextDocumentLayout_draw(this, handle__draw, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hitTest = 0;

	// Subclass to allow providing a Go implementation
	virtual int hitTest(const QPointF& point, Qt::HitTestAccuracy accuracy) const override {
		if (handle__hitTest == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
		Qt::HitTestAccuracy accuracy_ret = accuracy;
		int sigval2 = static_cast<int>(accuracy_ret);

		int callback_return_value = miqt_exec_callback_QAbstractTextDocumentLayout_hitTest(this, handle__hitTest, sigval1, sigval2);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__pageCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int pageCount() const override {
		if (handle__pageCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractTextDocumentLayout_pageCount(this, handle__pageCount);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__documentSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF documentSize() const override {
		if (handle__documentSize == 0) {
			return QSizeF(); // Pure virtual, there is no base we can call
		}
		

		QSizeF* callback_return_value = miqt_exec_callback_QAbstractTextDocumentLayout_documentSize(this, handle__documentSize);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__frameBoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF frameBoundingRect(QTextFrame* frame) const override {
		if (handle__frameBoundingRect == 0) {
			return QRectF(); // Pure virtual, there is no base we can call
		}
		
		QTextFrame* sigval1 = frame;

		QRectF* callback_return_value = miqt_exec_callback_QAbstractTextDocumentLayout_frameBoundingRect(this, handle__frameBoundingRect, sigval1);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockBoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF blockBoundingRect(const QTextBlock& block) const override {
		if (handle__blockBoundingRect == 0) {
			return QRectF(); // Pure virtual, there is no base we can call
		}
		
		const QTextBlock& block_ret = block;
		// Cast returned reference into pointer
		QTextBlock* sigval1 = const_cast<QTextBlock*>(&block_ret);

		QRectF* callback_return_value = miqt_exec_callback_QAbstractTextDocumentLayout_blockBoundingRect(this, handle__blockBoundingRect, sigval1);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__documentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void documentChanged(int from, int charsRemoved, int charsAdded) override {
		if (handle__documentChanged == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = from;
		int sigval2 = charsRemoved;
		int sigval3 = charsAdded;

		miqt_exec_callback_QAbstractTextDocumentLayout_documentChanged(this, handle__documentChanged, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeInlineObject = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
		if (handle__resizeInlineObject == 0) {
			QAbstractTextDocumentLayout::resizeInlineObject(item, posInDocument, format);
			return;
		}
		
		QTextInlineObject* sigval1 = new QTextInlineObject(item);
		int sigval2 = posInDocument;
		const QTextFormat& format_ret = format;
		// Cast returned reference into pointer
		QTextFormat* sigval3 = const_cast<QTextFormat*>(&format_ret);

		miqt_exec_callback_QAbstractTextDocumentLayout_resizeInlineObject(this, handle__resizeInlineObject, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeInlineObject(QTextInlineObject* item, int posInDocument, QTextFormat* format) {

		QAbstractTextDocumentLayout::resizeInlineObject(*item, static_cast<int>(posInDocument), *format);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__positionInlineObject = 0;

	// Subclass to allow providing a Go implementation
	virtual void positionInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
		if (handle__positionInlineObject == 0) {
			QAbstractTextDocumentLayout::positionInlineObject(item, posInDocument, format);
			return;
		}
		
		QTextInlineObject* sigval1 = new QTextInlineObject(item);
		int sigval2 = posInDocument;
		const QTextFormat& format_ret = format;
		// Cast returned reference into pointer
		QTextFormat* sigval3 = const_cast<QTextFormat*>(&format_ret);

		miqt_exec_callback_QAbstractTextDocumentLayout_positionInlineObject(this, handle__positionInlineObject, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_positionInlineObject(QTextInlineObject* item, int posInDocument, QTextFormat* format) {

		QAbstractTextDocumentLayout::positionInlineObject(*item, static_cast<int>(posInDocument), *format);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawInlineObject = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawInlineObject(QPainter* painter, const QRectF& rect, QTextInlineObject object, int posInDocument, const QTextFormat& format) override {
		if (handle__drawInlineObject == 0) {
			QAbstractTextDocumentLayout::drawInlineObject(painter, rect, object, posInDocument, format);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&rect_ret);
		QTextInlineObject* sigval3 = new QTextInlineObject(object);
		int sigval4 = posInDocument;
		const QTextFormat& format_ret = format;
		// Cast returned reference into pointer
		QTextFormat* sigval5 = const_cast<QTextFormat*>(&format_ret);

		miqt_exec_callback_QAbstractTextDocumentLayout_drawInlineObject(this, handle__drawInlineObject, sigval1, sigval2, sigval3, sigval4, sigval5);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawInlineObject(QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format) {

		QAbstractTextDocumentLayout::drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAbstractTextDocumentLayout::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractTextDocumentLayout_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAbstractTextDocumentLayout::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAbstractTextDocumentLayout::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractTextDocumentLayout_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAbstractTextDocumentLayout::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAbstractTextDocumentLayout::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractTextDocumentLayout_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAbstractTextDocumentLayout::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAbstractTextDocumentLayout::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractTextDocumentLayout_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAbstractTextDocumentLayout::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAbstractTextDocumentLayout::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractTextDocumentLayout_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAbstractTextDocumentLayout::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAbstractTextDocumentLayout::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractTextDocumentLayout_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAbstractTextDocumentLayout::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAbstractTextDocumentLayout::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractTextDocumentLayout_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAbstractTextDocumentLayout::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend int QAbstractTextDocumentLayout_protectedbase_formatIndex(bool* _dynamic_cast_ok, void* self, int pos);
	friend QTextCharFormat* QAbstractTextDocumentLayout_protectedbase_format(bool* _dynamic_cast_ok, void* self, int pos);
	friend QObject* QAbstractTextDocumentLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractTextDocumentLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractTextDocumentLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractTextDocumentLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAbstractTextDocumentLayout* QAbstractTextDocumentLayout_new(QTextDocument* doc) {
	return new MiqtVirtualQAbstractTextDocumentLayout(doc);
}

void QAbstractTextDocumentLayout_virtbase(QAbstractTextDocumentLayout* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractTextDocumentLayout_metaObject(const QAbstractTextDocumentLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractTextDocumentLayout_metacast(QAbstractTextDocumentLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractTextDocumentLayout_tr(const char* s) {
	QString _ret = QAbstractTextDocumentLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTextDocumentLayout_trUtf8(const char* s) {
	QString _ret = QAbstractTextDocumentLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractTextDocumentLayout_draw(QAbstractTextDocumentLayout* self, QPainter* painter, QAbstractTextDocumentLayout__PaintContext* context) {
	self->draw(painter, *context);
}

int QAbstractTextDocumentLayout_hitTest(const QAbstractTextDocumentLayout* self, QPointF* point, int accuracy) {
	return self->hitTest(*point, static_cast<Qt::HitTestAccuracy>(accuracy));
}

struct miqt_string QAbstractTextDocumentLayout_anchorAt(const QAbstractTextDocumentLayout* self, QPointF* pos) {
	QString _ret = self->anchorAt(*pos);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTextDocumentLayout_imageAt(const QAbstractTextDocumentLayout* self, QPointF* pos) {
	QString _ret = self->imageAt(*pos);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QTextFormat* QAbstractTextDocumentLayout_formatAt(const QAbstractTextDocumentLayout* self, QPointF* pos) {
	return new QTextFormat(self->formatAt(*pos));
}

QTextBlock* QAbstractTextDocumentLayout_blockWithMarkerAt(const QAbstractTextDocumentLayout* self, QPointF* pos) {
	return new QTextBlock(self->blockWithMarkerAt(*pos));
}

int QAbstractTextDocumentLayout_pageCount(const QAbstractTextDocumentLayout* self) {
	return self->pageCount();
}

QSizeF* QAbstractTextDocumentLayout_documentSize(const QAbstractTextDocumentLayout* self) {
	return new QSizeF(self->documentSize());
}

QRectF* QAbstractTextDocumentLayout_frameBoundingRect(const QAbstractTextDocumentLayout* self, QTextFrame* frame) {
	return new QRectF(self->frameBoundingRect(frame));
}

QRectF* QAbstractTextDocumentLayout_blockBoundingRect(const QAbstractTextDocumentLayout* self, QTextBlock* block) {
	return new QRectF(self->blockBoundingRect(*block));
}

void QAbstractTextDocumentLayout_setPaintDevice(QAbstractTextDocumentLayout* self, QPaintDevice* device) {
	self->setPaintDevice(device);
}

QPaintDevice* QAbstractTextDocumentLayout_paintDevice(const QAbstractTextDocumentLayout* self) {
	return self->paintDevice();
}

QTextDocument* QAbstractTextDocumentLayout_document(const QAbstractTextDocumentLayout* self) {
	return self->document();
}

void QAbstractTextDocumentLayout_registerHandler(QAbstractTextDocumentLayout* self, int objectType, QObject* component) {
	self->registerHandler(static_cast<int>(objectType), component);
}

void QAbstractTextDocumentLayout_unregisterHandler(QAbstractTextDocumentLayout* self, int objectType) {
	self->unregisterHandler(static_cast<int>(objectType));
}

QTextObjectInterface* QAbstractTextDocumentLayout_handlerForObject(const QAbstractTextDocumentLayout* self, int objectType) {
	return self->handlerForObject(static_cast<int>(objectType));
}

void QAbstractTextDocumentLayout_update(QAbstractTextDocumentLayout* self) {
	self->update();
}

void QAbstractTextDocumentLayout_connect_update(QAbstractTextDocumentLayout* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout::connect(self, static_cast<void (QAbstractTextDocumentLayout::*)(const QRectF&)>(&QAbstractTextDocumentLayout::update), self, [=]() {
		miqt_exec_callback_QAbstractTextDocumentLayout_update(slot);
	});
}

void QAbstractTextDocumentLayout_updateBlock(QAbstractTextDocumentLayout* self, QTextBlock* block) {
	self->updateBlock(*block);
}

void QAbstractTextDocumentLayout_connect_updateBlock(QAbstractTextDocumentLayout* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout::connect(self, static_cast<void (QAbstractTextDocumentLayout::*)(const QTextBlock&)>(&QAbstractTextDocumentLayout::updateBlock), self, [=](const QTextBlock& block) {
		const QTextBlock& block_ret = block;
		// Cast returned reference into pointer
		QTextBlock* sigval1 = const_cast<QTextBlock*>(&block_ret);
		miqt_exec_callback_QAbstractTextDocumentLayout_updateBlock(slot, sigval1);
	});
}

void QAbstractTextDocumentLayout_documentSizeChanged(QAbstractTextDocumentLayout* self, QSizeF* newSize) {
	self->documentSizeChanged(*newSize);
}

void QAbstractTextDocumentLayout_connect_documentSizeChanged(QAbstractTextDocumentLayout* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout::connect(self, static_cast<void (QAbstractTextDocumentLayout::*)(const QSizeF&)>(&QAbstractTextDocumentLayout::documentSizeChanged), self, [=](const QSizeF& newSize) {
		const QSizeF& newSize_ret = newSize;
		// Cast returned reference into pointer
		QSizeF* sigval1 = const_cast<QSizeF*>(&newSize_ret);
		miqt_exec_callback_QAbstractTextDocumentLayout_documentSizeChanged(slot, sigval1);
	});
}

void QAbstractTextDocumentLayout_pageCountChanged(QAbstractTextDocumentLayout* self, int newPages) {
	self->pageCountChanged(static_cast<int>(newPages));
}

void QAbstractTextDocumentLayout_connect_pageCountChanged(QAbstractTextDocumentLayout* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout::connect(self, static_cast<void (QAbstractTextDocumentLayout::*)(int)>(&QAbstractTextDocumentLayout::pageCountChanged), self, [=](int newPages) {
		int sigval1 = newPages;
		miqt_exec_callback_QAbstractTextDocumentLayout_pageCountChanged(slot, sigval1);
	});
}

struct miqt_string QAbstractTextDocumentLayout_tr2(const char* s, const char* c) {
	QString _ret = QAbstractTextDocumentLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTextDocumentLayout_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractTextDocumentLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTextDocumentLayout_trUtf82(const char* s, const char* c) {
	QString _ret = QAbstractTextDocumentLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTextDocumentLayout_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractTextDocumentLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractTextDocumentLayout_unregisterHandler2(QAbstractTextDocumentLayout* self, int objectType, QObject* component) {
	self->unregisterHandler(static_cast<int>(objectType), component);
}

void QAbstractTextDocumentLayout_update1(QAbstractTextDocumentLayout* self, QRectF* param1) {
	self->update(*param1);
}

void QAbstractTextDocumentLayout_connect_update1(QAbstractTextDocumentLayout* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout::connect(self, static_cast<void (QAbstractTextDocumentLayout::*)(const QRectF&)>(&QAbstractTextDocumentLayout::update), self, [=](const QRectF& param1) {
		const QRectF& param1_ret = param1;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&param1_ret);
		miqt_exec_callback_QAbstractTextDocumentLayout_update1(slot, sigval1);
	});
}

bool QAbstractTextDocumentLayout_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__draw = slot;
	return true;
}

bool QAbstractTextDocumentLayout_override_virtual_hitTest(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hitTest = slot;
	return true;
}

bool QAbstractTextDocumentLayout_override_virtual_pageCount(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__pageCount = slot;
	return true;
}

bool QAbstractTextDocumentLayout_override_virtual_documentSize(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__documentSize = slot;
	return true;
}

bool QAbstractTextDocumentLayout_override_virtual_frameBoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__frameBoundingRect = slot;
	return true;
}

bool QAbstractTextDocumentLayout_override_virtual_blockBoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockBoundingRect = slot;
	return true;
}

bool QAbstractTextDocumentLayout_override_virtual_documentChanged(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__documentChanged = slot;
	return true;
}

bool QAbstractTextDocumentLayout_override_virtual_resizeInlineObject(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeInlineObject = slot;
	return true;
}

void QAbstractTextDocumentLayout_virtualbase_resizeInlineObject(void* self, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
	( (MiqtVirtualQAbstractTextDocumentLayout*)(self) )->virtualbase_resizeInlineObject(item, posInDocument, format);
}

bool QAbstractTextDocumentLayout_override_virtual_positionInlineObject(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__positionInlineObject = slot;
	return true;
}

void QAbstractTextDocumentLayout_virtualbase_positionInlineObject(void* self, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
	( (MiqtVirtualQAbstractTextDocumentLayout*)(self) )->virtualbase_positionInlineObject(item, posInDocument, format);
}

bool QAbstractTextDocumentLayout_override_virtual_drawInlineObject(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawInlineObject = slot;
	return true;
}

void QAbstractTextDocumentLayout_virtualbase_drawInlineObject(void* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format) {
	( (MiqtVirtualQAbstractTextDocumentLayout*)(self) )->virtualbase_drawInlineObject(painter, rect, object, posInDocument, format);
}

bool QAbstractTextDocumentLayout_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAbstractTextDocumentLayout_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractTextDocumentLayout*)(self) )->virtualbase_event(event);
}

bool QAbstractTextDocumentLayout_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAbstractTextDocumentLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractTextDocumentLayout*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAbstractTextDocumentLayout_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAbstractTextDocumentLayout_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractTextDocumentLayout*)(self) )->virtualbase_timerEvent(event);
}

bool QAbstractTextDocumentLayout_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAbstractTextDocumentLayout_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractTextDocumentLayout*)(self) )->virtualbase_childEvent(event);
}

bool QAbstractTextDocumentLayout_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAbstractTextDocumentLayout_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractTextDocumentLayout*)(self) )->virtualbase_customEvent(event);
}

bool QAbstractTextDocumentLayout_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAbstractTextDocumentLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractTextDocumentLayout*)(self) )->virtualbase_connectNotify(signal);
}

bool QAbstractTextDocumentLayout_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAbstractTextDocumentLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractTextDocumentLayout*)(self) )->virtualbase_disconnectNotify(signal);
}

int QAbstractTextDocumentLayout_protectedbase_formatIndex(bool* _dynamic_cast_ok, void* self, int pos) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->formatIndex(static_cast<int>(pos));

}

QTextCharFormat* QAbstractTextDocumentLayout_protectedbase_format(bool* _dynamic_cast_ok, void* self, int pos) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QTextCharFormat(self_cast->format(static_cast<int>(pos)));

}

QObject* QAbstractTextDocumentLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAbstractTextDocumentLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAbstractTextDocumentLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAbstractTextDocumentLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAbstractTextDocumentLayout_delete(QAbstractTextDocumentLayout* self) {
	delete self;
}

QSizeF* QTextObjectInterface_intrinsicSize(QTextObjectInterface* self, QTextDocument* doc, int posInDocument, QTextFormat* format) {
	return new QSizeF(self->intrinsicSize(doc, static_cast<int>(posInDocument), *format));
}

void QTextObjectInterface_drawObject(QTextObjectInterface* self, QPainter* painter, QRectF* rect, QTextDocument* doc, int posInDocument, QTextFormat* format) {
	self->drawObject(painter, *rect, doc, static_cast<int>(posInDocument), *format);
}

void QTextObjectInterface_operatorAssign(QTextObjectInterface* self, QTextObjectInterface* param1) {
	self->operator=(*param1);
}

void QTextObjectInterface_delete(QTextObjectInterface* self) {
	delete self;
}

QAbstractTextDocumentLayout__Selection* QAbstractTextDocumentLayout__Selection_new(QAbstractTextDocumentLayout__Selection* param1) {
	return new QAbstractTextDocumentLayout::Selection(*param1);
}

void QAbstractTextDocumentLayout__Selection_operatorAssign(QAbstractTextDocumentLayout__Selection* self, QAbstractTextDocumentLayout__Selection* param1) {
	self->operator=(*param1);
}

void QAbstractTextDocumentLayout__Selection_delete(QAbstractTextDocumentLayout__Selection* self) {
	delete self;
}

QAbstractTextDocumentLayout__PaintContext* QAbstractTextDocumentLayout__PaintContext_new() {
	return new QAbstractTextDocumentLayout::PaintContext();
}

QAbstractTextDocumentLayout__PaintContext* QAbstractTextDocumentLayout__PaintContext_new2(QAbstractTextDocumentLayout__PaintContext* param1) {
	return new QAbstractTextDocumentLayout::PaintContext(*param1);
}

void QAbstractTextDocumentLayout__PaintContext_operatorAssign(QAbstractTextDocumentLayout__PaintContext* self, QAbstractTextDocumentLayout__PaintContext* param1) {
	self->operator=(*param1);
}

void QAbstractTextDocumentLayout__PaintContext_delete(QAbstractTextDocumentLayout__PaintContext* self) {
	delete self;
}

