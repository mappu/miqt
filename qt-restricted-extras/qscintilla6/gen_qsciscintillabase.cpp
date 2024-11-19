#include <QAbstractScrollArea>
#include <QByteArray>
#include <QColor>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QImage>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaObject>
#include <QMimeData>
#include <QMouseEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>
#include <QRect>
#include <QResizeEvent>
#include <QScrollBar>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qsciscintillabase.h>
#include "gen_qsciscintillabase.h"
#include "_cgo_export.h"

class MiqtVirtualQsciScintillaBase : public virtual QsciScintillaBase {
public:

	MiqtVirtualQsciScintillaBase(QWidget* parent): QsciScintillaBase(parent) {};
	MiqtVirtualQsciScintillaBase(): QsciScintillaBase() {};

	virtual ~MiqtVirtualQsciScintillaBase() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanInsertFromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canInsertFromMimeData(const QMimeData* source) const override {
		if (handle__CanInsertFromMimeData == 0) {
			return QsciScintillaBase::canInsertFromMimeData(source);
		}
		
		QMimeData* sigval1 = (QMimeData*) source;

		bool callback_return_value = miqt_exec_callback_QsciScintillaBase_CanInsertFromMimeData(const_cast<MiqtVirtualQsciScintillaBase*>(this), handle__CanInsertFromMimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanInsertFromMimeData(QMimeData* source) const {

		return QsciScintillaBase::canInsertFromMimeData(source);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QByteArray fromMimeData(const QMimeData* source, bool& rectangular) const override {
		if (handle__FromMimeData == 0) {
			return QsciScintillaBase::fromMimeData(source, rectangular);
		}
		
		QMimeData* sigval1 = (QMimeData*) source;
		bool* sigval2 = &rectangular;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciScintillaBase_FromMimeData(const_cast<MiqtVirtualQsciScintillaBase*>(this), handle__FromMimeData, sigval1, sigval2);
		QByteArray callback_return_value_QByteArray(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QByteArray;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_FromMimeData(QMimeData* source, bool* rectangular) const {

		QByteArray _qb = QsciScintillaBase::fromMimeData(source, *rectangular);
		struct miqt_string _ms;
		_ms.len = _qb.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _qb.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ToMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* toMimeData(const QByteArray& text, bool rectangular) const override {
		if (handle__ToMimeData == 0) {
			return QsciScintillaBase::toMimeData(text, rectangular);
		}
		
		const QByteArray text_qb = text;
		struct miqt_string text_ms;
		text_ms.len = text_qb.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_qb.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		bool sigval2 = rectangular;

		QMimeData* callback_return_value = miqt_exec_callback_QsciScintillaBase_ToMimeData(const_cast<MiqtVirtualQsciScintillaBase*>(this), handle__ToMimeData, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_ToMimeData(struct miqt_string text, bool rectangular) const {
		QByteArray text_QByteArray(text.data, text.len);

		return QsciScintillaBase::toMimeData(text_QByteArray, rectangular);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QsciScintillaBase::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QsciScintillaBase::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* e) override {
		if (handle__ContextMenuEvent == 0) {
			QsciScintillaBase::contextMenuEvent(e);
			return;
		}
		
		QContextMenuEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* e) {

		QsciScintillaBase::contextMenuEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* e) override {
		if (handle__DragEnterEvent == 0) {
			QsciScintillaBase::dragEnterEvent(e);
			return;
		}
		
		QDragEnterEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* e) {

		QsciScintillaBase::dragEnterEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__DragLeaveEvent == 0) {
			QsciScintillaBase::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* e) {

		QsciScintillaBase::dragLeaveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__DragMoveEvent == 0) {
			QsciScintillaBase::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* e) {

		QsciScintillaBase::dragMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (handle__DropEvent == 0) {
			QsciScintillaBase::dropEvent(e);
			return;
		}
		
		QDropEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* e) {

		QsciScintillaBase::dropEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__FocusInEvent == 0) {
			QsciScintillaBase::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* e) {

		QsciScintillaBase::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__FocusOutEvent == 0) {
			QsciScintillaBase::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* e) {

		QsciScintillaBase::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QsciScintillaBase::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QsciScintillaBase_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QsciScintillaBase::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__KeyPressEvent == 0) {
			QsciScintillaBase::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* e) {

		QsciScintillaBase::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QsciScintillaBase::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QsciScintillaBase::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QsciScintillaBase::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QsciScintillaBase_InputMethodQuery(const_cast<MiqtVirtualQsciScintillaBase*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QsciScintillaBase::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QsciScintillaBase::mouseDoubleClickEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* e) {

		QsciScintillaBase::mouseDoubleClickEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__MouseMoveEvent == 0) {
			QsciScintillaBase::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* e) {

		QsciScintillaBase::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__MousePressEvent == 0) {
			QsciScintillaBase::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* e) {

		QsciScintillaBase::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__MouseReleaseEvent == 0) {
			QsciScintillaBase::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* e) {

		QsciScintillaBase::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__PaintEvent == 0) {
			QsciScintillaBase::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* e) {

		QsciScintillaBase::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__ResizeEvent == 0) {
			QsciScintillaBase::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* e) {

		QsciScintillaBase::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QsciScintillaBase::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QsciScintillaBase_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QsciScintillaBase::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QsciScintillaBase::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QsciScintillaBase_MinimumSizeHint(const_cast<MiqtVirtualQsciScintillaBase*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QsciScintillaBase::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QsciScintillaBase::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QsciScintillaBase_SizeHint(const_cast<MiqtVirtualQsciScintillaBase*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QsciScintillaBase::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__SetupViewport == 0) {
			QsciScintillaBase::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QsciScintillaBase_SetupViewport(this, handle__SetupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetupViewport(QWidget* viewport) {

		QsciScintillaBase::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QsciScintillaBase::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QsciScintillaBase_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QsciScintillaBase::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QsciScintillaBase::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QsciScintillaBase_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QsciScintillaBase::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* param1) override {
		if (handle__ViewportEvent == 0) {
			return QsciScintillaBase::viewportEvent(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QsciScintillaBase_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* param1) {

		return QsciScintillaBase::viewportEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__WheelEvent == 0) {
			QsciScintillaBase::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QsciScintillaBase_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* param1) {

		QsciScintillaBase::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QsciScintillaBase::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QsciScintillaBase_ViewportSizeHint(const_cast<MiqtVirtualQsciScintillaBase*>(this), handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QsciScintillaBase::viewportSizeHint());

	}

};

void QsciScintillaBase_new(QWidget* parent, QsciScintillaBase** outptr_QsciScintillaBase, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQsciScintillaBase* ret = new MiqtVirtualQsciScintillaBase(parent);
	*outptr_QsciScintillaBase = ret;
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(ret);
	*outptr_QFrame = static_cast<QFrame*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QsciScintillaBase_new2(QsciScintillaBase** outptr_QsciScintillaBase, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQsciScintillaBase* ret = new MiqtVirtualQsciScintillaBase();
	*outptr_QsciScintillaBase = ret;
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(ret);
	*outptr_QFrame = static_cast<QFrame*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

QMetaObject* QsciScintillaBase_MetaObject(const QsciScintillaBase* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciScintillaBase_Metacast(QsciScintillaBase* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciScintillaBase_Tr(const char* s) {
	QString _ret = QsciScintillaBase::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QsciScintillaBase* QsciScintillaBase_Pool() {
	return QsciScintillaBase::pool();
}

void QsciScintillaBase_ReplaceHorizontalScrollBar(QsciScintillaBase* self, QScrollBar* scrollBar) {
	self->replaceHorizontalScrollBar(scrollBar);
}

void QsciScintillaBase_ReplaceVerticalScrollBar(QsciScintillaBase* self, QScrollBar* scrollBar) {
	self->replaceVerticalScrollBar(scrollBar);
}

long QsciScintillaBase_SendScintilla(const QsciScintillaBase* self, unsigned int msg) {
	return self->SendScintilla(static_cast<unsigned int>(msg));
}

long QsciScintillaBase_SendScintilla2(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, void* lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), lParam);
}

long QsciScintillaBase_SendScintilla3(const QsciScintillaBase* self, unsigned int msg, uintptr_t wParam, const char* lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<uintptr_t>(wParam), lParam);
}

long QsciScintillaBase_SendScintilla4(const QsciScintillaBase* self, unsigned int msg, const char* lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), lParam);
}

long QsciScintillaBase_SendScintilla5(const QsciScintillaBase* self, unsigned int msg, const char* wParam, const char* lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), wParam, lParam);
}

long QsciScintillaBase_SendScintilla6(const QsciScintillaBase* self, unsigned int msg, long wParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<long>(wParam));
}

long QsciScintillaBase_SendScintilla7(const QsciScintillaBase* self, unsigned int msg, int wParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<int>(wParam));
}

long QsciScintillaBase_SendScintilla8(const QsciScintillaBase* self, unsigned int msg, long cpMin, long cpMax, char* lpstrText) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<long>(cpMin), static_cast<long>(cpMax), lpstrText);
}

long QsciScintillaBase_SendScintilla9(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QColor* col) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), *col);
}

long QsciScintillaBase_SendScintilla10(const QsciScintillaBase* self, unsigned int msg, QColor* col) {
	return self->SendScintilla(static_cast<unsigned int>(msg), *col);
}

long QsciScintillaBase_SendScintilla11(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QPainter* hdc, QRect* rc, long cpMin, long cpMax) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), hdc, *rc, static_cast<long>(cpMin), static_cast<long>(cpMax));
}

long QsciScintillaBase_SendScintilla12(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QPixmap* lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), *lParam);
}

long QsciScintillaBase_SendScintilla13(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QImage* lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), *lParam);
}

void* QsciScintillaBase_SendScintillaPtrResult(const QsciScintillaBase* self, unsigned int msg) {
	return self->SendScintillaPtrResult(static_cast<unsigned int>(msg));
}

int QsciScintillaBase_CommandKey(int qt_key, int* modifiers) {
	return QsciScintillaBase::commandKey(static_cast<int>(qt_key), static_cast<int&>(*modifiers));
}

void QsciScintillaBase_QSCN_SELCHANGED(QsciScintillaBase* self, bool yes) {
	self->QSCN_SELCHANGED(yes);
}

void QsciScintillaBase_connect_QSCN_SELCHANGED(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(bool)>(&QsciScintillaBase::QSCN_SELCHANGED), self, [=](bool yes) {
		bool sigval1 = yes;
		miqt_exec_callback_QsciScintillaBase_QSCN_SELCHANGED(slot, sigval1);
	});
}

void QsciScintillaBase_SCN_AUTOCCANCELLED(QsciScintillaBase* self) {
	self->SCN_AUTOCCANCELLED();
}

void QsciScintillaBase_connect_SCN_AUTOCCANCELLED(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_AUTOCCANCELLED), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_AUTOCCANCELLED(slot);
	});
}

void QsciScintillaBase_SCN_AUTOCCHARDELETED(QsciScintillaBase* self) {
	self->SCN_AUTOCCHARDELETED();
}

void QsciScintillaBase_connect_SCN_AUTOCCHARDELETED(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_AUTOCCHARDELETED), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_AUTOCCHARDELETED(slot);
	});
}

void QsciScintillaBase_SCN_AUTOCCOMPLETED(QsciScintillaBase* self, const char* selection, int position, int ch, int method) {
	self->SCN_AUTOCCOMPLETED(selection, static_cast<int>(position), static_cast<int>(ch), static_cast<int>(method));
}

void QsciScintillaBase_connect_SCN_AUTOCCOMPLETED(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int, int, int)>(&QsciScintillaBase::SCN_AUTOCCOMPLETED), self, [=](const char* selection, int position, int ch, int method) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = position;
		int sigval3 = ch;
		int sigval4 = method;
		miqt_exec_callback_QsciScintillaBase_SCN_AUTOCCOMPLETED(slot, sigval1, sigval2, sigval3, sigval4);
	});
}

void QsciScintillaBase_SCN_AUTOCSELECTION(QsciScintillaBase* self, const char* selection, int position, int ch, int method) {
	self->SCN_AUTOCSELECTION(selection, static_cast<int>(position), static_cast<int>(ch), static_cast<int>(method));
}

void QsciScintillaBase_connect_SCN_AUTOCSELECTION(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int, int, int)>(&QsciScintillaBase::SCN_AUTOCSELECTION), self, [=](const char* selection, int position, int ch, int method) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = position;
		int sigval3 = ch;
		int sigval4 = method;
		miqt_exec_callback_QsciScintillaBase_SCN_AUTOCSELECTION(slot, sigval1, sigval2, sigval3, sigval4);
	});
}

void QsciScintillaBase_SCN_AUTOCSELECTION2(QsciScintillaBase* self, const char* selection, int position) {
	self->SCN_AUTOCSELECTION(selection, static_cast<int>(position));
}

void QsciScintillaBase_connect_SCN_AUTOCSELECTION2(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int)>(&QsciScintillaBase::SCN_AUTOCSELECTION), self, [=](const char* selection, int position) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = position;
		miqt_exec_callback_QsciScintillaBase_SCN_AUTOCSELECTION2(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE(QsciScintillaBase* self, const char* selection, int id, int position) {
	self->SCN_AUTOCSELECTIONCHANGE(selection, static_cast<int>(id), static_cast<int>(position));
}

void QsciScintillaBase_connect_SCN_AUTOCSELECTIONCHANGE(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int, int)>(&QsciScintillaBase::SCN_AUTOCSELECTIONCHANGE), self, [=](const char* selection, int id, int position) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = id;
		int sigval3 = position;
		miqt_exec_callback_QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCEN_CHANGE(QsciScintillaBase* self) {
	self->SCEN_CHANGE();
}

void QsciScintillaBase_connect_SCEN_CHANGE(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCEN_CHANGE), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCEN_CHANGE(slot);
	});
}

void QsciScintillaBase_SCN_CALLTIPCLICK(QsciScintillaBase* self, int direction) {
	self->SCN_CALLTIPCLICK(static_cast<int>(direction));
}

void QsciScintillaBase_connect_SCN_CALLTIPCLICK(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int)>(&QsciScintillaBase::SCN_CALLTIPCLICK), self, [=](int direction) {
		int sigval1 = direction;
		miqt_exec_callback_QsciScintillaBase_SCN_CALLTIPCLICK(slot, sigval1);
	});
}

void QsciScintillaBase_SCN_CHARADDED(QsciScintillaBase* self, int charadded) {
	self->SCN_CHARADDED(static_cast<int>(charadded));
}

void QsciScintillaBase_connect_SCN_CHARADDED(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int)>(&QsciScintillaBase::SCN_CHARADDED), self, [=](int charadded) {
		int sigval1 = charadded;
		miqt_exec_callback_QsciScintillaBase_SCN_CHARADDED(slot, sigval1);
	});
}

void QsciScintillaBase_SCN_DOUBLECLICK(QsciScintillaBase* self, int position, int line, int modifiers) {
	self->SCN_DOUBLECLICK(static_cast<int>(position), static_cast<int>(line), static_cast<int>(modifiers));
}

void QsciScintillaBase_connect_SCN_DOUBLECLICK(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int, int)>(&QsciScintillaBase::SCN_DOUBLECLICK), self, [=](int position, int line, int modifiers) {
		int sigval1 = position;
		int sigval2 = line;
		int sigval3 = modifiers;
		miqt_exec_callback_QsciScintillaBase_SCN_DOUBLECLICK(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCN_DWELLEND(QsciScintillaBase* self, int position, int x, int y) {
	self->SCN_DWELLEND(static_cast<int>(position), static_cast<int>(x), static_cast<int>(y));
}

void QsciScintillaBase_connect_SCN_DWELLEND(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int, int)>(&QsciScintillaBase::SCN_DWELLEND), self, [=](int position, int x, int y) {
		int sigval1 = position;
		int sigval2 = x;
		int sigval3 = y;
		miqt_exec_callback_QsciScintillaBase_SCN_DWELLEND(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCN_DWELLSTART(QsciScintillaBase* self, int position, int x, int y) {
	self->SCN_DWELLSTART(static_cast<int>(position), static_cast<int>(x), static_cast<int>(y));
}

void QsciScintillaBase_connect_SCN_DWELLSTART(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int, int)>(&QsciScintillaBase::SCN_DWELLSTART), self, [=](int position, int x, int y) {
		int sigval1 = position;
		int sigval2 = x;
		int sigval3 = y;
		miqt_exec_callback_QsciScintillaBase_SCN_DWELLSTART(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCN_FOCUSIN(QsciScintillaBase* self) {
	self->SCN_FOCUSIN();
}

void QsciScintillaBase_connect_SCN_FOCUSIN(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_FOCUSIN), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_FOCUSIN(slot);
	});
}

void QsciScintillaBase_SCN_FOCUSOUT(QsciScintillaBase* self) {
	self->SCN_FOCUSOUT();
}

void QsciScintillaBase_connect_SCN_FOCUSOUT(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_FOCUSOUT), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_FOCUSOUT(slot);
	});
}

void QsciScintillaBase_SCN_HOTSPOTCLICK(QsciScintillaBase* self, int position, int modifiers) {
	self->SCN_HOTSPOTCLICK(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_connect_SCN_HOTSPOTCLICK(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_HOTSPOTCLICK), self, [=](int position, int modifiers) {
		int sigval1 = position;
		int sigval2 = modifiers;
		miqt_exec_callback_QsciScintillaBase_SCN_HOTSPOTCLICK(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK(QsciScintillaBase* self, int position, int modifiers) {
	self->SCN_HOTSPOTDOUBLECLICK(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_connect_SCN_HOTSPOTDOUBLECLICK(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_HOTSPOTDOUBLECLICK), self, [=](int position, int modifiers) {
		int sigval1 = position;
		int sigval2 = modifiers;
		miqt_exec_callback_QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_HOTSPOTRELEASECLICK(QsciScintillaBase* self, int position, int modifiers) {
	self->SCN_HOTSPOTRELEASECLICK(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_connect_SCN_HOTSPOTRELEASECLICK(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_HOTSPOTRELEASECLICK), self, [=](int position, int modifiers) {
		int sigval1 = position;
		int sigval2 = modifiers;
		miqt_exec_callback_QsciScintillaBase_SCN_HOTSPOTRELEASECLICK(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_INDICATORCLICK(QsciScintillaBase* self, int position, int modifiers) {
	self->SCN_INDICATORCLICK(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_connect_SCN_INDICATORCLICK(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_INDICATORCLICK), self, [=](int position, int modifiers) {
		int sigval1 = position;
		int sigval2 = modifiers;
		miqt_exec_callback_QsciScintillaBase_SCN_INDICATORCLICK(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_INDICATORRELEASE(QsciScintillaBase* self, int position, int modifiers) {
	self->SCN_INDICATORRELEASE(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_connect_SCN_INDICATORRELEASE(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_INDICATORRELEASE), self, [=](int position, int modifiers) {
		int sigval1 = position;
		int sigval2 = modifiers;
		miqt_exec_callback_QsciScintillaBase_SCN_INDICATORRELEASE(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_MACRORECORD(QsciScintillaBase* self, unsigned int param1, unsigned long param2, void* param3) {
	self->SCN_MACRORECORD(static_cast<unsigned int>(param1), static_cast<unsigned long>(param2), param3);
}

void QsciScintillaBase_connect_SCN_MACRORECORD(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(unsigned int, unsigned long, void*)>(&QsciScintillaBase::SCN_MACRORECORD), self, [=](unsigned int param1, unsigned long param2, void* param3) {
		unsigned int sigval1 = param1;
		unsigned long sigval2 = param2;
		void* sigval3 = param3;
		miqt_exec_callback_QsciScintillaBase_SCN_MACRORECORD(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCN_MARGINCLICK(QsciScintillaBase* self, int position, int modifiers, int margin) {
	self->SCN_MARGINCLICK(static_cast<int>(position), static_cast<int>(modifiers), static_cast<int>(margin));
}

void QsciScintillaBase_connect_SCN_MARGINCLICK(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int, int)>(&QsciScintillaBase::SCN_MARGINCLICK), self, [=](int position, int modifiers, int margin) {
		int sigval1 = position;
		int sigval2 = modifiers;
		int sigval3 = margin;
		miqt_exec_callback_QsciScintillaBase_SCN_MARGINCLICK(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCN_MARGINRIGHTCLICK(QsciScintillaBase* self, int position, int modifiers, int margin) {
	self->SCN_MARGINRIGHTCLICK(static_cast<int>(position), static_cast<int>(modifiers), static_cast<int>(margin));
}

void QsciScintillaBase_connect_SCN_MARGINRIGHTCLICK(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int, int)>(&QsciScintillaBase::SCN_MARGINRIGHTCLICK), self, [=](int position, int modifiers, int margin) {
		int sigval1 = position;
		int sigval2 = modifiers;
		int sigval3 = margin;
		miqt_exec_callback_QsciScintillaBase_SCN_MARGINRIGHTCLICK(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCN_MODIFIED(QsciScintillaBase* self, int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10) {
	self->SCN_MODIFIED(static_cast<int>(param1), static_cast<int>(param2), param3, static_cast<int>(param4), static_cast<int>(param5), static_cast<int>(param6), static_cast<int>(param7), static_cast<int>(param8), static_cast<int>(param9), static_cast<int>(param10));
}

void QsciScintillaBase_connect_SCN_MODIFIED(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int, const char*, int, int, int, int, int, int, int)>(&QsciScintillaBase::SCN_MODIFIED), self, [=](int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10) {
		int sigval1 = param1;
		int sigval2 = param2;
		const char* sigval3 = (const char*) param3;
		int sigval4 = param4;
		int sigval5 = param5;
		int sigval6 = param6;
		int sigval7 = param7;
		int sigval8 = param8;
		int sigval9 = param9;
		int sigval10 = param10;
		miqt_exec_callback_QsciScintillaBase_SCN_MODIFIED(slot, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6, sigval7, sigval8, sigval9, sigval10);
	});
}

void QsciScintillaBase_SCN_MODIFYATTEMPTRO(QsciScintillaBase* self) {
	self->SCN_MODIFYATTEMPTRO();
}

void QsciScintillaBase_connect_SCN_MODIFYATTEMPTRO(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_MODIFYATTEMPTRO), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_MODIFYATTEMPTRO(slot);
	});
}

void QsciScintillaBase_SCN_NEEDSHOWN(QsciScintillaBase* self, int param1, int param2) {
	self->SCN_NEEDSHOWN(static_cast<int>(param1), static_cast<int>(param2));
}

void QsciScintillaBase_connect_SCN_NEEDSHOWN(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_NEEDSHOWN), self, [=](int param1, int param2) {
		int sigval1 = param1;
		int sigval2 = param2;
		miqt_exec_callback_QsciScintillaBase_SCN_NEEDSHOWN(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_PAINTED(QsciScintillaBase* self) {
	self->SCN_PAINTED();
}

void QsciScintillaBase_connect_SCN_PAINTED(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_PAINTED), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_PAINTED(slot);
	});
}

void QsciScintillaBase_SCN_SAVEPOINTLEFT(QsciScintillaBase* self) {
	self->SCN_SAVEPOINTLEFT();
}

void QsciScintillaBase_connect_SCN_SAVEPOINTLEFT(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_SAVEPOINTLEFT), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_SAVEPOINTLEFT(slot);
	});
}

void QsciScintillaBase_SCN_SAVEPOINTREACHED(QsciScintillaBase* self) {
	self->SCN_SAVEPOINTREACHED();
}

void QsciScintillaBase_connect_SCN_SAVEPOINTREACHED(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_SAVEPOINTREACHED), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_SAVEPOINTREACHED(slot);
	});
}

void QsciScintillaBase_SCN_STYLENEEDED(QsciScintillaBase* self, int position) {
	self->SCN_STYLENEEDED(static_cast<int>(position));
}

void QsciScintillaBase_connect_SCN_STYLENEEDED(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int)>(&QsciScintillaBase::SCN_STYLENEEDED), self, [=](int position) {
		int sigval1 = position;
		miqt_exec_callback_QsciScintillaBase_SCN_STYLENEEDED(slot, sigval1);
	});
}

void QsciScintillaBase_SCN_URIDROPPED(QsciScintillaBase* self, QUrl* url) {
	self->SCN_URIDROPPED(*url);
}

void QsciScintillaBase_connect_SCN_URIDROPPED(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const QUrl&)>(&QsciScintillaBase::SCN_URIDROPPED), self, [=](const QUrl& url) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QsciScintillaBase_SCN_URIDROPPED(slot, sigval1);
	});
}

void QsciScintillaBase_SCN_UPDATEUI(QsciScintillaBase* self, int updated) {
	self->SCN_UPDATEUI(static_cast<int>(updated));
}

void QsciScintillaBase_connect_SCN_UPDATEUI(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int)>(&QsciScintillaBase::SCN_UPDATEUI), self, [=](int updated) {
		int sigval1 = updated;
		miqt_exec_callback_QsciScintillaBase_SCN_UPDATEUI(slot, sigval1);
	});
}

void QsciScintillaBase_SCN_USERLISTSELECTION(QsciScintillaBase* self, const char* selection, int id, int ch, int method, int position) {
	self->SCN_USERLISTSELECTION(selection, static_cast<int>(id), static_cast<int>(ch), static_cast<int>(method), static_cast<int>(position));
}

void QsciScintillaBase_connect_SCN_USERLISTSELECTION(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int, int, int, int)>(&QsciScintillaBase::SCN_USERLISTSELECTION), self, [=](const char* selection, int id, int ch, int method, int position) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = id;
		int sigval3 = ch;
		int sigval4 = method;
		int sigval5 = position;
		miqt_exec_callback_QsciScintillaBase_SCN_USERLISTSELECTION(slot, sigval1, sigval2, sigval3, sigval4, sigval5);
	});
}

void QsciScintillaBase_SCN_USERLISTSELECTION2(QsciScintillaBase* self, const char* selection, int id, int ch, int method) {
	self->SCN_USERLISTSELECTION(selection, static_cast<int>(id), static_cast<int>(ch), static_cast<int>(method));
}

void QsciScintillaBase_connect_SCN_USERLISTSELECTION2(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int, int, int)>(&QsciScintillaBase::SCN_USERLISTSELECTION), self, [=](const char* selection, int id, int ch, int method) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = id;
		int sigval3 = ch;
		int sigval4 = method;
		miqt_exec_callback_QsciScintillaBase_SCN_USERLISTSELECTION2(slot, sigval1, sigval2, sigval3, sigval4);
	});
}

void QsciScintillaBase_SCN_USERLISTSELECTION3(QsciScintillaBase* self, const char* selection, int id) {
	self->SCN_USERLISTSELECTION(selection, static_cast<int>(id));
}

void QsciScintillaBase_connect_SCN_USERLISTSELECTION3(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int)>(&QsciScintillaBase::SCN_USERLISTSELECTION), self, [=](const char* selection, int id) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = id;
		miqt_exec_callback_QsciScintillaBase_SCN_USERLISTSELECTION3(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_ZOOM(QsciScintillaBase* self) {
	self->SCN_ZOOM();
}

void QsciScintillaBase_connect_SCN_ZOOM(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_ZOOM), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_ZOOM(slot);
	});
}

struct miqt_string QsciScintillaBase_Tr2(const char* s, const char* c) {
	QString _ret = QsciScintillaBase::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintillaBase_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciScintillaBase::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long QsciScintillaBase_SendScintilla22(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam));
}

long QsciScintillaBase_SendScintilla32(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, long lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), static_cast<long>(lParam));
}

void QsciScintillaBase_override_virtual_CanInsertFromMimeData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__CanInsertFromMimeData = slot;
}

bool QsciScintillaBase_virtualbase_CanInsertFromMimeData(const void* self, QMimeData* source) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_CanInsertFromMimeData(source);
}

void QsciScintillaBase_override_virtual_FromMimeData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__FromMimeData = slot;
}

struct miqt_string QsciScintillaBase_virtualbase_FromMimeData(const void* self, QMimeData* source, bool* rectangular) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_FromMimeData(source, rectangular);
}

void QsciScintillaBase_override_virtual_ToMimeData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__ToMimeData = slot;
}

QMimeData* QsciScintillaBase_virtualbase_ToMimeData(const void* self, struct miqt_string text, bool rectangular) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_ToMimeData(text, rectangular);
}

void QsciScintillaBase_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__ChangeEvent = slot;
}

void QsciScintillaBase_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_ChangeEvent(e);
}

void QsciScintillaBase_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__ContextMenuEvent = slot;
}

void QsciScintillaBase_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_ContextMenuEvent(e);
}

void QsciScintillaBase_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__DragEnterEvent = slot;
}

void QsciScintillaBase_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_DragEnterEvent(e);
}

void QsciScintillaBase_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__DragLeaveEvent = slot;
}

void QsciScintillaBase_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_DragLeaveEvent(e);
}

void QsciScintillaBase_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__DragMoveEvent = slot;
}

void QsciScintillaBase_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_DragMoveEvent(e);
}

void QsciScintillaBase_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__DropEvent = slot;
}

void QsciScintillaBase_virtualbase_DropEvent(void* self, QDropEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_DropEvent(e);
}

void QsciScintillaBase_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__FocusInEvent = slot;
}

void QsciScintillaBase_virtualbase_FocusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_FocusInEvent(e);
}

void QsciScintillaBase_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__FocusOutEvent = slot;
}

void QsciScintillaBase_virtualbase_FocusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_FocusOutEvent(e);
}

void QsciScintillaBase_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QsciScintillaBase_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QsciScintillaBase_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__KeyPressEvent = slot;
}

void QsciScintillaBase_virtualbase_KeyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_KeyPressEvent(e);
}

void QsciScintillaBase_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__InputMethodEvent = slot;
}

void QsciScintillaBase_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_InputMethodEvent(event);
}

void QsciScintillaBase_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QsciScintillaBase_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_InputMethodQuery(query);
}

void QsciScintillaBase_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QsciScintillaBase_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_MouseDoubleClickEvent(e);
}

void QsciScintillaBase_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__MouseMoveEvent = slot;
}

void QsciScintillaBase_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_MouseMoveEvent(e);
}

void QsciScintillaBase_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__MousePressEvent = slot;
}

void QsciScintillaBase_virtualbase_MousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_MousePressEvent(e);
}

void QsciScintillaBase_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__MouseReleaseEvent = slot;
}

void QsciScintillaBase_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_MouseReleaseEvent(e);
}

void QsciScintillaBase_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__PaintEvent = slot;
}

void QsciScintillaBase_virtualbase_PaintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_PaintEvent(e);
}

void QsciScintillaBase_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__ResizeEvent = slot;
}

void QsciScintillaBase_virtualbase_ResizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_ResizeEvent(e);
}

void QsciScintillaBase_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__ScrollContentsBy = slot;
}

void QsciScintillaBase_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

void QsciScintillaBase_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QsciScintillaBase_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_MinimumSizeHint();
}

void QsciScintillaBase_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__SizeHint = slot;
}

QSize* QsciScintillaBase_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_SizeHint();
}

void QsciScintillaBase_override_virtual_SetupViewport(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__SetupViewport = slot;
}

void QsciScintillaBase_virtualbase_SetupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_SetupViewport(viewport);
}

void QsciScintillaBase_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__EventFilter = slot;
}

bool QsciScintillaBase_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_EventFilter(param1, param2);
}

void QsciScintillaBase_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__Event = slot;
}

bool QsciScintillaBase_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_Event(param1);
}

void QsciScintillaBase_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__ViewportEvent = slot;
}

bool QsciScintillaBase_virtualbase_ViewportEvent(void* self, QEvent* param1) {
	return ( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_ViewportEvent(param1);
}

void QsciScintillaBase_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__WheelEvent = slot;
}

void QsciScintillaBase_virtualbase_WheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_WheelEvent(param1);
}

void QsciScintillaBase_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) )->handle__ViewportSizeHint = slot;
}

QSize* QsciScintillaBase_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_ViewportSizeHint();
}

void QsciScintillaBase_Delete(QsciScintillaBase* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQsciScintillaBase*>( self );
	} else {
		delete self;
	}
}

