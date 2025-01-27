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

void miqt_exec_callback_QAbstractTextDocumentLayout_Update(intptr_t);
void miqt_exec_callback_QAbstractTextDocumentLayout_UpdateBlock(intptr_t, QTextBlock*);
void miqt_exec_callback_QAbstractTextDocumentLayout_DocumentSizeChanged(intptr_t, QSizeF*);
void miqt_exec_callback_QAbstractTextDocumentLayout_PageCountChanged(intptr_t, int);
void miqt_exec_callback_QAbstractTextDocumentLayout_Update1(intptr_t, QRectF*);
void miqt_exec_callback_QAbstractTextDocumentLayout_Draw(QAbstractTextDocumentLayout*, intptr_t, QPainter*, QAbstractTextDocumentLayout__PaintContext*);
int miqt_exec_callback_QAbstractTextDocumentLayout_HitTest(const QAbstractTextDocumentLayout*, intptr_t, QPointF*, int);
int miqt_exec_callback_QAbstractTextDocumentLayout_PageCount(const QAbstractTextDocumentLayout*, intptr_t);
QSizeF* miqt_exec_callback_QAbstractTextDocumentLayout_DocumentSize(const QAbstractTextDocumentLayout*, intptr_t);
QRectF* miqt_exec_callback_QAbstractTextDocumentLayout_FrameBoundingRect(const QAbstractTextDocumentLayout*, intptr_t, QTextFrame*);
QRectF* miqt_exec_callback_QAbstractTextDocumentLayout_BlockBoundingRect(const QAbstractTextDocumentLayout*, intptr_t, QTextBlock*);
void miqt_exec_callback_QAbstractTextDocumentLayout_DocumentChanged(QAbstractTextDocumentLayout*, intptr_t, int, int, int);
void miqt_exec_callback_QAbstractTextDocumentLayout_ResizeInlineObject(QAbstractTextDocumentLayout*, intptr_t, QTextInlineObject*, int, QTextFormat*);
void miqt_exec_callback_QAbstractTextDocumentLayout_PositionInlineObject(QAbstractTextDocumentLayout*, intptr_t, QTextInlineObject*, int, QTextFormat*);
void miqt_exec_callback_QAbstractTextDocumentLayout_DrawInlineObject(QAbstractTextDocumentLayout*, intptr_t, QPainter*, QRectF*, QTextInlineObject*, int, QTextFormat*);
bool miqt_exec_callback_QAbstractTextDocumentLayout_Event(QAbstractTextDocumentLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractTextDocumentLayout_EventFilter(QAbstractTextDocumentLayout*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractTextDocumentLayout_TimerEvent(QAbstractTextDocumentLayout*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractTextDocumentLayout_ChildEvent(QAbstractTextDocumentLayout*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractTextDocumentLayout_CustomEvent(QAbstractTextDocumentLayout*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractTextDocumentLayout_ConnectNotify(QAbstractTextDocumentLayout*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractTextDocumentLayout_DisconnectNotify(QAbstractTextDocumentLayout*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractTextDocumentLayout final : public QAbstractTextDocumentLayout {
public:

	MiqtVirtualQAbstractTextDocumentLayout(QTextDocument* doc): QAbstractTextDocumentLayout(doc) {};

	virtual ~MiqtVirtualQAbstractTextDocumentLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* painter, const QAbstractTextDocumentLayout::PaintContext& context) override {
		if (handle__Draw == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QPainter* sigval1 = painter;
		const QAbstractTextDocumentLayout::PaintContext& context_ret = context;
		// Cast returned reference into pointer
		QAbstractTextDocumentLayout__PaintContext* sigval2 = const_cast<QAbstractTextDocumentLayout::PaintContext*>(&context_ret);

		miqt_exec_callback_QAbstractTextDocumentLayout_Draw(this, handle__Draw, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HitTest = 0;

	// Subclass to allow providing a Go implementation
	virtual int hitTest(const QPointF& point, Qt::HitTestAccuracy accuracy) const override {
		if (handle__HitTest == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
		Qt::HitTestAccuracy accuracy_ret = accuracy;
		int sigval2 = static_cast<int>(accuracy_ret);

		int callback_return_value = miqt_exec_callback_QAbstractTextDocumentLayout_HitTest(this, handle__HitTest, sigval1, sigval2);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PageCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int pageCount() const override {
		if (handle__PageCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractTextDocumentLayout_PageCount(this, handle__PageCount);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DocumentSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF documentSize() const override {
		if (handle__DocumentSize == 0) {
			return QSizeF(); // Pure virtual, there is no base we can call
		}
		

		QSizeF* callback_return_value = miqt_exec_callback_QAbstractTextDocumentLayout_DocumentSize(this, handle__DocumentSize);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FrameBoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF frameBoundingRect(QTextFrame* frame) const override {
		if (handle__FrameBoundingRect == 0) {
			return QRectF(); // Pure virtual, there is no base we can call
		}
		
		QTextFrame* sigval1 = frame;

		QRectF* callback_return_value = miqt_exec_callback_QAbstractTextDocumentLayout_FrameBoundingRect(this, handle__FrameBoundingRect, sigval1);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockBoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF blockBoundingRect(const QTextBlock& block) const override {
		if (handle__BlockBoundingRect == 0) {
			return QRectF(); // Pure virtual, there is no base we can call
		}
		
		const QTextBlock& block_ret = block;
		// Cast returned reference into pointer
		QTextBlock* sigval1 = const_cast<QTextBlock*>(&block_ret);

		QRectF* callback_return_value = miqt_exec_callback_QAbstractTextDocumentLayout_BlockBoundingRect(this, handle__BlockBoundingRect, sigval1);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DocumentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void documentChanged(int from, int charsRemoved, int charsAdded) override {
		if (handle__DocumentChanged == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = from;
		int sigval2 = charsRemoved;
		int sigval3 = charsAdded;

		miqt_exec_callback_QAbstractTextDocumentLayout_DocumentChanged(this, handle__DocumentChanged, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeInlineObject = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
		if (handle__ResizeInlineObject == 0) {
			QAbstractTextDocumentLayout::resizeInlineObject(item, posInDocument, format);
			return;
		}
		
		QTextInlineObject* sigval1 = new QTextInlineObject(item);
		int sigval2 = posInDocument;
		const QTextFormat& format_ret = format;
		// Cast returned reference into pointer
		QTextFormat* sigval3 = const_cast<QTextFormat*>(&format_ret);

		miqt_exec_callback_QAbstractTextDocumentLayout_ResizeInlineObject(this, handle__ResizeInlineObject, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeInlineObject(QTextInlineObject* item, int posInDocument, QTextFormat* format) {

		QAbstractTextDocumentLayout::resizeInlineObject(*item, static_cast<int>(posInDocument), *format);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PositionInlineObject = 0;

	// Subclass to allow providing a Go implementation
	virtual void positionInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
		if (handle__PositionInlineObject == 0) {
			QAbstractTextDocumentLayout::positionInlineObject(item, posInDocument, format);
			return;
		}
		
		QTextInlineObject* sigval1 = new QTextInlineObject(item);
		int sigval2 = posInDocument;
		const QTextFormat& format_ret = format;
		// Cast returned reference into pointer
		QTextFormat* sigval3 = const_cast<QTextFormat*>(&format_ret);

		miqt_exec_callback_QAbstractTextDocumentLayout_PositionInlineObject(this, handle__PositionInlineObject, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PositionInlineObject(QTextInlineObject* item, int posInDocument, QTextFormat* format) {

		QAbstractTextDocumentLayout::positionInlineObject(*item, static_cast<int>(posInDocument), *format);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawInlineObject = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawInlineObject(QPainter* painter, const QRectF& rect, QTextInlineObject object, int posInDocument, const QTextFormat& format) override {
		if (handle__DrawInlineObject == 0) {
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

		miqt_exec_callback_QAbstractTextDocumentLayout_DrawInlineObject(this, handle__DrawInlineObject, sigval1, sigval2, sigval3, sigval4, sigval5);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawInlineObject(QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format) {

		QAbstractTextDocumentLayout::drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAbstractTextDocumentLayout::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractTextDocumentLayout_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAbstractTextDocumentLayout::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAbstractTextDocumentLayout::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractTextDocumentLayout_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAbstractTextDocumentLayout::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAbstractTextDocumentLayout::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractTextDocumentLayout_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAbstractTextDocumentLayout::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAbstractTextDocumentLayout::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractTextDocumentLayout_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAbstractTextDocumentLayout::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAbstractTextDocumentLayout::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractTextDocumentLayout_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAbstractTextDocumentLayout::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAbstractTextDocumentLayout::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractTextDocumentLayout_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAbstractTextDocumentLayout::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAbstractTextDocumentLayout::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractTextDocumentLayout_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAbstractTextDocumentLayout::disconnectNotify(*signal);

	}

};

QAbstractTextDocumentLayout* QAbstractTextDocumentLayout_new(QTextDocument* doc) {
	return new MiqtVirtualQAbstractTextDocumentLayout(doc);
}

void QAbstractTextDocumentLayout_virtbase(QAbstractTextDocumentLayout* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractTextDocumentLayout_MetaObject(const QAbstractTextDocumentLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractTextDocumentLayout_Metacast(QAbstractTextDocumentLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractTextDocumentLayout_Tr(const char* s) {
	QString _ret = QAbstractTextDocumentLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTextDocumentLayout_TrUtf8(const char* s) {
	QString _ret = QAbstractTextDocumentLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractTextDocumentLayout_Draw(QAbstractTextDocumentLayout* self, QPainter* painter, QAbstractTextDocumentLayout__PaintContext* context) {
	self->draw(painter, *context);
}

int QAbstractTextDocumentLayout_HitTest(const QAbstractTextDocumentLayout* self, QPointF* point, int accuracy) {
	return self->hitTest(*point, static_cast<Qt::HitTestAccuracy>(accuracy));
}

struct miqt_string QAbstractTextDocumentLayout_AnchorAt(const QAbstractTextDocumentLayout* self, QPointF* pos) {
	QString _ret = self->anchorAt(*pos);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTextDocumentLayout_ImageAt(const QAbstractTextDocumentLayout* self, QPointF* pos) {
	QString _ret = self->imageAt(*pos);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QTextFormat* QAbstractTextDocumentLayout_FormatAt(const QAbstractTextDocumentLayout* self, QPointF* pos) {
	return new QTextFormat(self->formatAt(*pos));
}

QTextBlock* QAbstractTextDocumentLayout_BlockWithMarkerAt(const QAbstractTextDocumentLayout* self, QPointF* pos) {
	return new QTextBlock(self->blockWithMarkerAt(*pos));
}

int QAbstractTextDocumentLayout_PageCount(const QAbstractTextDocumentLayout* self) {
	return self->pageCount();
}

QSizeF* QAbstractTextDocumentLayout_DocumentSize(const QAbstractTextDocumentLayout* self) {
	return new QSizeF(self->documentSize());
}

QRectF* QAbstractTextDocumentLayout_FrameBoundingRect(const QAbstractTextDocumentLayout* self, QTextFrame* frame) {
	return new QRectF(self->frameBoundingRect(frame));
}

QRectF* QAbstractTextDocumentLayout_BlockBoundingRect(const QAbstractTextDocumentLayout* self, QTextBlock* block) {
	return new QRectF(self->blockBoundingRect(*block));
}

void QAbstractTextDocumentLayout_SetPaintDevice(QAbstractTextDocumentLayout* self, QPaintDevice* device) {
	self->setPaintDevice(device);
}

QPaintDevice* QAbstractTextDocumentLayout_PaintDevice(const QAbstractTextDocumentLayout* self) {
	return self->paintDevice();
}

QTextDocument* QAbstractTextDocumentLayout_Document(const QAbstractTextDocumentLayout* self) {
	return self->document();
}

void QAbstractTextDocumentLayout_RegisterHandler(QAbstractTextDocumentLayout* self, int objectType, QObject* component) {
	self->registerHandler(static_cast<int>(objectType), component);
}

void QAbstractTextDocumentLayout_UnregisterHandler(QAbstractTextDocumentLayout* self, int objectType) {
	self->unregisterHandler(static_cast<int>(objectType));
}

QTextObjectInterface* QAbstractTextDocumentLayout_HandlerForObject(const QAbstractTextDocumentLayout* self, int objectType) {
	return self->handlerForObject(static_cast<int>(objectType));
}

void QAbstractTextDocumentLayout_Update(QAbstractTextDocumentLayout* self) {
	self->update();
}

void QAbstractTextDocumentLayout_connect_Update(QAbstractTextDocumentLayout* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout::connect(self, static_cast<void (QAbstractTextDocumentLayout::*)(const QRectF&)>(&QAbstractTextDocumentLayout::update), self, [=]() {
		miqt_exec_callback_QAbstractTextDocumentLayout_Update(slot);
	});
}

void QAbstractTextDocumentLayout_UpdateBlock(QAbstractTextDocumentLayout* self, QTextBlock* block) {
	self->updateBlock(*block);
}

void QAbstractTextDocumentLayout_connect_UpdateBlock(QAbstractTextDocumentLayout* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout::connect(self, static_cast<void (QAbstractTextDocumentLayout::*)(const QTextBlock&)>(&QAbstractTextDocumentLayout::updateBlock), self, [=](const QTextBlock& block) {
		const QTextBlock& block_ret = block;
		// Cast returned reference into pointer
		QTextBlock* sigval1 = const_cast<QTextBlock*>(&block_ret);
		miqt_exec_callback_QAbstractTextDocumentLayout_UpdateBlock(slot, sigval1);
	});
}

void QAbstractTextDocumentLayout_DocumentSizeChanged(QAbstractTextDocumentLayout* self, QSizeF* newSize) {
	self->documentSizeChanged(*newSize);
}

void QAbstractTextDocumentLayout_connect_DocumentSizeChanged(QAbstractTextDocumentLayout* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout::connect(self, static_cast<void (QAbstractTextDocumentLayout::*)(const QSizeF&)>(&QAbstractTextDocumentLayout::documentSizeChanged), self, [=](const QSizeF& newSize) {
		const QSizeF& newSize_ret = newSize;
		// Cast returned reference into pointer
		QSizeF* sigval1 = const_cast<QSizeF*>(&newSize_ret);
		miqt_exec_callback_QAbstractTextDocumentLayout_DocumentSizeChanged(slot, sigval1);
	});
}

void QAbstractTextDocumentLayout_PageCountChanged(QAbstractTextDocumentLayout* self, int newPages) {
	self->pageCountChanged(static_cast<int>(newPages));
}

void QAbstractTextDocumentLayout_connect_PageCountChanged(QAbstractTextDocumentLayout* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout::connect(self, static_cast<void (QAbstractTextDocumentLayout::*)(int)>(&QAbstractTextDocumentLayout::pageCountChanged), self, [=](int newPages) {
		int sigval1 = newPages;
		miqt_exec_callback_QAbstractTextDocumentLayout_PageCountChanged(slot, sigval1);
	});
}

struct miqt_string QAbstractTextDocumentLayout_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractTextDocumentLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTextDocumentLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractTextDocumentLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTextDocumentLayout_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractTextDocumentLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTextDocumentLayout_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractTextDocumentLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractTextDocumentLayout_UnregisterHandler2(QAbstractTextDocumentLayout* self, int objectType, QObject* component) {
	self->unregisterHandler(static_cast<int>(objectType), component);
}

void QAbstractTextDocumentLayout_Update1(QAbstractTextDocumentLayout* self, QRectF* param1) {
	self->update(*param1);
}

void QAbstractTextDocumentLayout_connect_Update1(QAbstractTextDocumentLayout* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout::connect(self, static_cast<void (QAbstractTextDocumentLayout::*)(const QRectF&)>(&QAbstractTextDocumentLayout::update), self, [=](const QRectF& param1) {
		const QRectF& param1_ret = param1;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&param1_ret);
		miqt_exec_callback_QAbstractTextDocumentLayout_Update1(slot, sigval1);
	});
}

bool QAbstractTextDocumentLayout_override_virtual_Draw(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Draw = slot;
	return true;
}

bool QAbstractTextDocumentLayout_override_virtual_HitTest(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HitTest = slot;
	return true;
}

bool QAbstractTextDocumentLayout_override_virtual_PageCount(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PageCount = slot;
	return true;
}

bool QAbstractTextDocumentLayout_override_virtual_DocumentSize(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DocumentSize = slot;
	return true;
}

bool QAbstractTextDocumentLayout_override_virtual_FrameBoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FrameBoundingRect = slot;
	return true;
}

bool QAbstractTextDocumentLayout_override_virtual_BlockBoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockBoundingRect = slot;
	return true;
}

bool QAbstractTextDocumentLayout_override_virtual_DocumentChanged(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DocumentChanged = slot;
	return true;
}

bool QAbstractTextDocumentLayout_override_virtual_ResizeInlineObject(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeInlineObject = slot;
	return true;
}

void QAbstractTextDocumentLayout_virtualbase_ResizeInlineObject(void* self, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
	( (MiqtVirtualQAbstractTextDocumentLayout*)(self) )->virtualbase_ResizeInlineObject(item, posInDocument, format);
}

bool QAbstractTextDocumentLayout_override_virtual_PositionInlineObject(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PositionInlineObject = slot;
	return true;
}

void QAbstractTextDocumentLayout_virtualbase_PositionInlineObject(void* self, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
	( (MiqtVirtualQAbstractTextDocumentLayout*)(self) )->virtualbase_PositionInlineObject(item, posInDocument, format);
}

bool QAbstractTextDocumentLayout_override_virtual_DrawInlineObject(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DrawInlineObject = slot;
	return true;
}

void QAbstractTextDocumentLayout_virtualbase_DrawInlineObject(void* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format) {
	( (MiqtVirtualQAbstractTextDocumentLayout*)(self) )->virtualbase_DrawInlineObject(painter, rect, object, posInDocument, format);
}

bool QAbstractTextDocumentLayout_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QAbstractTextDocumentLayout_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractTextDocumentLayout*)(self) )->virtualbase_Event(event);
}

bool QAbstractTextDocumentLayout_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QAbstractTextDocumentLayout_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractTextDocumentLayout*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QAbstractTextDocumentLayout_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QAbstractTextDocumentLayout_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractTextDocumentLayout*)(self) )->virtualbase_TimerEvent(event);
}

bool QAbstractTextDocumentLayout_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QAbstractTextDocumentLayout_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractTextDocumentLayout*)(self) )->virtualbase_ChildEvent(event);
}

bool QAbstractTextDocumentLayout_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QAbstractTextDocumentLayout_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractTextDocumentLayout*)(self) )->virtualbase_CustomEvent(event);
}

bool QAbstractTextDocumentLayout_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QAbstractTextDocumentLayout_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractTextDocumentLayout*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QAbstractTextDocumentLayout_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQAbstractTextDocumentLayout*>( (QAbstractTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QAbstractTextDocumentLayout_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractTextDocumentLayout*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAbstractTextDocumentLayout_Delete(QAbstractTextDocumentLayout* self) {
	delete self;
}

QSizeF* QTextObjectInterface_IntrinsicSize(QTextObjectInterface* self, QTextDocument* doc, int posInDocument, QTextFormat* format) {
	return new QSizeF(self->intrinsicSize(doc, static_cast<int>(posInDocument), *format));
}

void QTextObjectInterface_DrawObject(QTextObjectInterface* self, QPainter* painter, QRectF* rect, QTextDocument* doc, int posInDocument, QTextFormat* format) {
	self->drawObject(painter, *rect, doc, static_cast<int>(posInDocument), *format);
}

void QTextObjectInterface_OperatorAssign(QTextObjectInterface* self, QTextObjectInterface* param1) {
	self->operator=(*param1);
}

void QTextObjectInterface_Delete(QTextObjectInterface* self) {
	delete self;
}

QAbstractTextDocumentLayout__Selection* QAbstractTextDocumentLayout__Selection_new(QAbstractTextDocumentLayout__Selection* param1) {
	return new QAbstractTextDocumentLayout::Selection(*param1);
}

void QAbstractTextDocumentLayout__Selection_OperatorAssign(QAbstractTextDocumentLayout__Selection* self, QAbstractTextDocumentLayout__Selection* param1) {
	self->operator=(*param1);
}

void QAbstractTextDocumentLayout__Selection_Delete(QAbstractTextDocumentLayout__Selection* self) {
	delete self;
}

QAbstractTextDocumentLayout__PaintContext* QAbstractTextDocumentLayout__PaintContext_new() {
	return new QAbstractTextDocumentLayout::PaintContext();
}

QAbstractTextDocumentLayout__PaintContext* QAbstractTextDocumentLayout__PaintContext_new2(QAbstractTextDocumentLayout__PaintContext* param1) {
	return new QAbstractTextDocumentLayout::PaintContext(*param1);
}

void QAbstractTextDocumentLayout__PaintContext_OperatorAssign(QAbstractTextDocumentLayout__PaintContext* self, QAbstractTextDocumentLayout__PaintContext* param1) {
	self->operator=(*param1);
}

void QAbstractTextDocumentLayout__PaintContext_Delete(QAbstractTextDocumentLayout__PaintContext* self) {
	delete self;
}

