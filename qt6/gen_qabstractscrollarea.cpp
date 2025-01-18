#include <QAbstractScrollArea>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFrame>
#include <QKeyEvent>
#include <QList>
#include <QMetaObject>
#include <QMouseEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QScrollBar>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QWheelEvent>
#include <QWidget>
#include <qabstractscrollarea.h>
#include "gen_qabstractscrollarea.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QAbstractScrollArea_MinimumSizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QAbstractScrollArea_SizeHint(void*, intptr_t);
void miqt_exec_callback_QAbstractScrollArea_SetupViewport(void*, intptr_t, QWidget*);
bool miqt_exec_callback_QAbstractScrollArea_EventFilter(void*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QAbstractScrollArea_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractScrollArea_ViewportEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractScrollArea_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QAbstractScrollArea_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QAbstractScrollArea_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractScrollArea_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractScrollArea_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractScrollArea_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractScrollArea_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QAbstractScrollArea_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QAbstractScrollArea_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QAbstractScrollArea_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QAbstractScrollArea_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QAbstractScrollArea_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QAbstractScrollArea_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractScrollArea_ScrollContentsBy(void*, intptr_t, int, int);
QSize* miqt_exec_callback_QAbstractScrollArea_ViewportSizeHint(void*, intptr_t);
void miqt_exec_callback_QAbstractScrollArea_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractScrollArea_InitStyleOption(void*, intptr_t, QStyleOptionFrame*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractScrollArea final : public QAbstractScrollArea {
public:

	MiqtVirtualQAbstractScrollArea(QWidget* parent): QAbstractScrollArea(parent) {};
	MiqtVirtualQAbstractScrollArea(): QAbstractScrollArea() {};

	virtual ~MiqtVirtualQAbstractScrollArea() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QAbstractScrollArea::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractScrollArea_MinimumSizeHint(const_cast<MiqtVirtualQAbstractScrollArea*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QAbstractScrollArea::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QAbstractScrollArea::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractScrollArea_SizeHint(const_cast<MiqtVirtualQAbstractScrollArea*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QAbstractScrollArea::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__SetupViewport == 0) {
			QAbstractScrollArea::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QAbstractScrollArea_SetupViewport(this, handle__SetupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetupViewport(QWidget* viewport) {

		QAbstractScrollArea::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QAbstractScrollArea::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QAbstractScrollArea_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QAbstractScrollArea::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QAbstractScrollArea::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QAbstractScrollArea_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QAbstractScrollArea::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* param1) override {
		if (handle__ViewportEvent == 0) {
			return QAbstractScrollArea::viewportEvent(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QAbstractScrollArea_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* param1) {

		return QAbstractScrollArea::viewportEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QAbstractScrollArea::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QAbstractScrollArea::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QAbstractScrollArea::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QAbstractScrollArea::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__MousePressEvent == 0) {
			QAbstractScrollArea::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* param1) {

		QAbstractScrollArea::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__MouseReleaseEvent == 0) {
			QAbstractScrollArea::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* param1) {

		QAbstractScrollArea::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QAbstractScrollArea::mouseDoubleClickEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* param1) {

		QAbstractScrollArea::mouseDoubleClickEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QAbstractScrollArea::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* param1) {

		QAbstractScrollArea::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__WheelEvent == 0) {
			QAbstractScrollArea::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* param1) {

		QAbstractScrollArea::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QAbstractScrollArea::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QAbstractScrollArea::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* param1) override {
		if (handle__DragEnterEvent == 0) {
			QAbstractScrollArea::dragEnterEvent(param1);
			return;
		}
		
		QDragEnterEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* param1) {

		QAbstractScrollArea::dragEnterEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* param1) override {
		if (handle__DragMoveEvent == 0) {
			QAbstractScrollArea::dragMoveEvent(param1);
			return;
		}
		
		QDragMoveEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* param1) {

		QAbstractScrollArea::dragMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
		if (handle__DragLeaveEvent == 0) {
			QAbstractScrollArea::dragLeaveEvent(param1);
			return;
		}
		
		QDragLeaveEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* param1) {

		QAbstractScrollArea::dragLeaveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* param1) override {
		if (handle__DropEvent == 0) {
			QAbstractScrollArea::dropEvent(param1);
			return;
		}
		
		QDropEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* param1) {

		QAbstractScrollArea::dropEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QAbstractScrollArea::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QAbstractScrollArea::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QAbstractScrollArea::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QAbstractScrollArea_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QAbstractScrollArea::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QAbstractScrollArea::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractScrollArea_ViewportSizeHint(const_cast<MiqtVirtualQAbstractScrollArea*>(this), handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QAbstractScrollArea::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QAbstractScrollArea::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QAbstractScrollArea::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__InitStyleOption == 0) {
			QAbstractScrollArea::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QAbstractScrollArea_InitStyleOption(const_cast<MiqtVirtualQAbstractScrollArea*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionFrame* option) const {

		QAbstractScrollArea::initStyleOption(option);

	}

};

QAbstractScrollArea* QAbstractScrollArea_new(QWidget* parent) {
	return new MiqtVirtualQAbstractScrollArea(parent);
}

QAbstractScrollArea* QAbstractScrollArea_new2() {
	return new MiqtVirtualQAbstractScrollArea();
}

void QAbstractScrollArea_virtbase(QAbstractScrollArea* src, QFrame** outptr_QFrame) {
	*outptr_QFrame = static_cast<QFrame*>(src);
}

QMetaObject* QAbstractScrollArea_MetaObject(const QAbstractScrollArea* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractScrollArea_Metacast(QAbstractScrollArea* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractScrollArea_Tr(const char* s) {
	QString _ret = QAbstractScrollArea::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAbstractScrollArea_VerticalScrollBarPolicy(const QAbstractScrollArea* self) {
	Qt::ScrollBarPolicy _ret = self->verticalScrollBarPolicy();
	return static_cast<int>(_ret);
}

void QAbstractScrollArea_SetVerticalScrollBarPolicy(QAbstractScrollArea* self, int verticalScrollBarPolicy) {
	self->setVerticalScrollBarPolicy(static_cast<Qt::ScrollBarPolicy>(verticalScrollBarPolicy));
}

QScrollBar* QAbstractScrollArea_VerticalScrollBar(const QAbstractScrollArea* self) {
	return self->verticalScrollBar();
}

void QAbstractScrollArea_SetVerticalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar) {
	self->setVerticalScrollBar(scrollbar);
}

int QAbstractScrollArea_HorizontalScrollBarPolicy(const QAbstractScrollArea* self) {
	Qt::ScrollBarPolicy _ret = self->horizontalScrollBarPolicy();
	return static_cast<int>(_ret);
}

void QAbstractScrollArea_SetHorizontalScrollBarPolicy(QAbstractScrollArea* self, int horizontalScrollBarPolicy) {
	self->setHorizontalScrollBarPolicy(static_cast<Qt::ScrollBarPolicy>(horizontalScrollBarPolicy));
}

QScrollBar* QAbstractScrollArea_HorizontalScrollBar(const QAbstractScrollArea* self) {
	return self->horizontalScrollBar();
}

void QAbstractScrollArea_SetHorizontalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar) {
	self->setHorizontalScrollBar(scrollbar);
}

QWidget* QAbstractScrollArea_CornerWidget(const QAbstractScrollArea* self) {
	return self->cornerWidget();
}

void QAbstractScrollArea_SetCornerWidget(QAbstractScrollArea* self, QWidget* widget) {
	self->setCornerWidget(widget);
}

void QAbstractScrollArea_AddScrollBarWidget(QAbstractScrollArea* self, QWidget* widget, int alignment) {
	self->addScrollBarWidget(widget, static_cast<Qt::Alignment>(alignment));
}

struct miqt_array /* of QWidget* */  QAbstractScrollArea_ScrollBarWidgets(QAbstractScrollArea* self, int alignment) {
	QWidgetList _ret = self->scrollBarWidgets(static_cast<Qt::Alignment>(alignment));
	// Convert QList<> from C++ memory to manually-managed C memory
	QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QWidget* QAbstractScrollArea_Viewport(const QAbstractScrollArea* self) {
	return self->viewport();
}

void QAbstractScrollArea_SetViewport(QAbstractScrollArea* self, QWidget* widget) {
	self->setViewport(widget);
}

QSize* QAbstractScrollArea_MaximumViewportSize(const QAbstractScrollArea* self) {
	return new QSize(self->maximumViewportSize());
}

QSize* QAbstractScrollArea_MinimumSizeHint(const QAbstractScrollArea* self) {
	return new QSize(self->minimumSizeHint());
}

QSize* QAbstractScrollArea_SizeHint(const QAbstractScrollArea* self) {
	return new QSize(self->sizeHint());
}

void QAbstractScrollArea_SetupViewport(QAbstractScrollArea* self, QWidget* viewport) {
	self->setupViewport(viewport);
}

int QAbstractScrollArea_SizeAdjustPolicy(const QAbstractScrollArea* self) {
	QAbstractScrollArea::SizeAdjustPolicy _ret = self->sizeAdjustPolicy();
	return static_cast<int>(_ret);
}

void QAbstractScrollArea_SetSizeAdjustPolicy(QAbstractScrollArea* self, int policy) {
	self->setSizeAdjustPolicy(static_cast<QAbstractScrollArea::SizeAdjustPolicy>(policy));
}

struct miqt_string QAbstractScrollArea_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractScrollArea::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractScrollArea_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractScrollArea::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractScrollArea_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QAbstractScrollArea_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_MinimumSizeHint();
}

bool QAbstractScrollArea_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QAbstractScrollArea_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_SizeHint();
}

bool QAbstractScrollArea_override_virtual_SetupViewport(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetupViewport = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_SetupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_SetupViewport(viewport);
}

bool QAbstractScrollArea_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QAbstractScrollArea_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QAbstractScrollArea_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QAbstractScrollArea_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_Event(param1);
}

bool QAbstractScrollArea_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportEvent = slot;
	return true;
}

bool QAbstractScrollArea_virtualbase_ViewportEvent(void* self, QEvent* param1) {
	return ( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_ViewportEvent(param1);
}

bool QAbstractScrollArea_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_ResizeEvent(param1);
}

bool QAbstractScrollArea_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_PaintEvent(param1);
}

bool QAbstractScrollArea_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_MousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_MousePressEvent(param1);
}

bool QAbstractScrollArea_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_MouseReleaseEvent(param1);
}

bool QAbstractScrollArea_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_MouseDoubleClickEvent(param1);
}

bool QAbstractScrollArea_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_MouseMoveEvent(param1);
}

bool QAbstractScrollArea_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_WheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_WheelEvent(param1);
}

bool QAbstractScrollArea_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QAbstractScrollArea_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_DragEnterEvent(param1);
}

bool QAbstractScrollArea_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_DragMoveEvent(param1);
}

bool QAbstractScrollArea_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_DragLeaveEvent(param1);
}

bool QAbstractScrollArea_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_DropEvent(void* self, QDropEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_DropEvent(param1);
}

bool QAbstractScrollArea_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QAbstractScrollArea_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollContentsBy = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

bool QAbstractScrollArea_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportSizeHint = slot;
	return true;
}

QSize* QAbstractScrollArea_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_ViewportSizeHint();
}

bool QAbstractScrollArea_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QAbstractScrollArea_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_InitStyleOption(option);
}

void QAbstractScrollArea_Delete(QAbstractScrollArea* self) {
	delete self;
}

