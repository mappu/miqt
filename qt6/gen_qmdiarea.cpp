#include <QAbstractScrollArea>
#include <QBrush>
#include <QChildEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFrame>
#include <QKeyEvent>
#include <QList>
#include <QMdiArea>
#include <QMdiSubWindow>
#include <QMetaObject>
#include <QMouseEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWheelEvent>
#include <QWidget>
#include <qmdiarea.h>
#include "gen_qmdiarea.h"
#include "_cgo_export.h"

class MiqtVirtualQMdiArea : public virtual QMdiArea {
public:

	MiqtVirtualQMdiArea(QWidget* parent): QMdiArea(parent) {};
	MiqtVirtualQMdiArea(): QMdiArea() {};

	virtual ~MiqtVirtualQMdiArea() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QMdiArea::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMdiArea_SizeHint(const_cast<MiqtVirtualQMdiArea*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QMdiArea::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QMdiArea::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMdiArea_MinimumSizeHint(const_cast<MiqtVirtualQMdiArea*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QMdiArea::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__SetupViewport == 0) {
			QMdiArea::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QMdiArea_SetupViewport(this, handle__SetupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetupViewport(QWidget* viewport) {

		QMdiArea::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QMdiArea::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMdiArea_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QMdiArea::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QMdiArea::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMdiArea_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* object, QEvent* event) {

		return QMdiArea::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* paintEvent) override {
		if (handle__PaintEvent == 0) {
			QMdiArea::paintEvent(paintEvent);
			return;
		}
		
		QPaintEvent* sigval1 = paintEvent;

		miqt_exec_callback_QMdiArea_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* paintEvent) {

		QMdiArea::paintEvent(paintEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* childEvent) override {
		if (handle__ChildEvent == 0) {
			QMdiArea::childEvent(childEvent);
			return;
		}
		
		QChildEvent* sigval1 = childEvent;

		miqt_exec_callback_QMdiArea_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* childEvent) {

		QMdiArea::childEvent(childEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* resizeEvent) override {
		if (handle__ResizeEvent == 0) {
			QMdiArea::resizeEvent(resizeEvent);
			return;
		}
		
		QResizeEvent* sigval1 = resizeEvent;

		miqt_exec_callback_QMdiArea_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* resizeEvent) {

		QMdiArea::resizeEvent(resizeEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* timerEvent) override {
		if (handle__TimerEvent == 0) {
			QMdiArea::timerEvent(timerEvent);
			return;
		}
		
		QTimerEvent* sigval1 = timerEvent;

		miqt_exec_callback_QMdiArea_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* timerEvent) {

		QMdiArea::timerEvent(timerEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* showEvent) override {
		if (handle__ShowEvent == 0) {
			QMdiArea::showEvent(showEvent);
			return;
		}
		
		QShowEvent* sigval1 = showEvent;

		miqt_exec_callback_QMdiArea_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* showEvent) {

		QMdiArea::showEvent(showEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__ViewportEvent == 0) {
			return QMdiArea::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMdiArea_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* event) {

		return QMdiArea::viewportEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QMdiArea::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QMdiArea_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QMdiArea::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__MousePressEvent == 0) {
			QMdiArea::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* param1) {

		QMdiArea::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__MouseReleaseEvent == 0) {
			QMdiArea::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* param1) {

		QMdiArea::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QMdiArea::mouseDoubleClickEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* param1) {

		QMdiArea::mouseDoubleClickEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QMdiArea::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* param1) {

		QMdiArea::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__WheelEvent == 0) {
			QMdiArea::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* param1) {

		QMdiArea::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QMdiArea::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QMdiArea::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* param1) override {
		if (handle__DragEnterEvent == 0) {
			QMdiArea::dragEnterEvent(param1);
			return;
		}
		
		QDragEnterEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* param1) {

		QMdiArea::dragEnterEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* param1) override {
		if (handle__DragMoveEvent == 0) {
			QMdiArea::dragMoveEvent(param1);
			return;
		}
		
		QDragMoveEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* param1) {

		QMdiArea::dragMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
		if (handle__DragLeaveEvent == 0) {
			QMdiArea::dragLeaveEvent(param1);
			return;
		}
		
		QDragLeaveEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* param1) {

		QMdiArea::dragLeaveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* param1) override {
		if (handle__DropEvent == 0) {
			QMdiArea::dropEvent(param1);
			return;
		}
		
		QDropEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* param1) {

		QMdiArea::dropEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QMdiArea::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QMdiArea::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QMdiArea::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMdiArea_ViewportSizeHint(const_cast<MiqtVirtualQMdiArea*>(this), handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QMdiArea::viewportSizeHint());

	}

};

QMdiArea* QMdiArea_new(QWidget* parent) {
	return new MiqtVirtualQMdiArea(parent);
}

QMdiArea* QMdiArea_new2() {
	return new MiqtVirtualQMdiArea();
}

void QMdiArea_virtbase(QMdiArea* src, QAbstractScrollArea** outptr_QAbstractScrollArea) {
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(src);
}

QMetaObject* QMdiArea_MetaObject(const QMdiArea* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMdiArea_Metacast(QMdiArea* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMdiArea_Tr(const char* s) {
	QString _ret = QMdiArea::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QMdiArea_SizeHint(const QMdiArea* self) {
	return new QSize(self->sizeHint());
}

QSize* QMdiArea_MinimumSizeHint(const QMdiArea* self) {
	return new QSize(self->minimumSizeHint());
}

QMdiSubWindow* QMdiArea_CurrentSubWindow(const QMdiArea* self) {
	return self->currentSubWindow();
}

QMdiSubWindow* QMdiArea_ActiveSubWindow(const QMdiArea* self) {
	return self->activeSubWindow();
}

struct miqt_array /* of QMdiSubWindow* */  QMdiArea_SubWindowList(const QMdiArea* self) {
	QList<QMdiSubWindow *> _ret = self->subWindowList();
	// Convert QList<> from C++ memory to manually-managed C memory
	QMdiSubWindow** _arr = static_cast<QMdiSubWindow**>(malloc(sizeof(QMdiSubWindow*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QMdiSubWindow* QMdiArea_AddSubWindow(QMdiArea* self, QWidget* widget) {
	return self->addSubWindow(widget);
}

void QMdiArea_RemoveSubWindow(QMdiArea* self, QWidget* widget) {
	self->removeSubWindow(widget);
}

QBrush* QMdiArea_Background(const QMdiArea* self) {
	return new QBrush(self->background());
}

void QMdiArea_SetBackground(QMdiArea* self, QBrush* background) {
	self->setBackground(*background);
}

int QMdiArea_ActivationOrder(const QMdiArea* self) {
	QMdiArea::WindowOrder _ret = self->activationOrder();
	return static_cast<int>(_ret);
}

void QMdiArea_SetActivationOrder(QMdiArea* self, int order) {
	self->setActivationOrder(static_cast<QMdiArea::WindowOrder>(order));
}

void QMdiArea_SetOption(QMdiArea* self, int option) {
	self->setOption(static_cast<QMdiArea::AreaOption>(option));
}

bool QMdiArea_TestOption(const QMdiArea* self, int opton) {
	return self->testOption(static_cast<QMdiArea::AreaOption>(opton));
}

void QMdiArea_SetViewMode(QMdiArea* self, int mode) {
	self->setViewMode(static_cast<QMdiArea::ViewMode>(mode));
}

int QMdiArea_ViewMode(const QMdiArea* self) {
	QMdiArea::ViewMode _ret = self->viewMode();
	return static_cast<int>(_ret);
}

bool QMdiArea_DocumentMode(const QMdiArea* self) {
	return self->documentMode();
}

void QMdiArea_SetDocumentMode(QMdiArea* self, bool enabled) {
	self->setDocumentMode(enabled);
}

void QMdiArea_SetTabsClosable(QMdiArea* self, bool closable) {
	self->setTabsClosable(closable);
}

bool QMdiArea_TabsClosable(const QMdiArea* self) {
	return self->tabsClosable();
}

void QMdiArea_SetTabsMovable(QMdiArea* self, bool movable) {
	self->setTabsMovable(movable);
}

bool QMdiArea_TabsMovable(const QMdiArea* self) {
	return self->tabsMovable();
}

void QMdiArea_SetTabShape(QMdiArea* self, int shape) {
	self->setTabShape(static_cast<QTabWidget::TabShape>(shape));
}

int QMdiArea_TabShape(const QMdiArea* self) {
	QTabWidget::TabShape _ret = self->tabShape();
	return static_cast<int>(_ret);
}

void QMdiArea_SetTabPosition(QMdiArea* self, int position) {
	self->setTabPosition(static_cast<QTabWidget::TabPosition>(position));
}

int QMdiArea_TabPosition(const QMdiArea* self) {
	QTabWidget::TabPosition _ret = self->tabPosition();
	return static_cast<int>(_ret);
}

void QMdiArea_SubWindowActivated(QMdiArea* self, QMdiSubWindow* param1) {
	self->subWindowActivated(param1);
}

void QMdiArea_connect_SubWindowActivated(QMdiArea* self, intptr_t slot) {
	MiqtVirtualQMdiArea::connect(self, static_cast<void (QMdiArea::*)(QMdiSubWindow*)>(&QMdiArea::subWindowActivated), self, [=](QMdiSubWindow* param1) {
		QMdiSubWindow* sigval1 = param1;
		miqt_exec_callback_QMdiArea_SubWindowActivated(slot, sigval1);
	});
}

void QMdiArea_SetActiveSubWindow(QMdiArea* self, QMdiSubWindow* window) {
	self->setActiveSubWindow(window);
}

void QMdiArea_TileSubWindows(QMdiArea* self) {
	self->tileSubWindows();
}

void QMdiArea_CascadeSubWindows(QMdiArea* self) {
	self->cascadeSubWindows();
}

void QMdiArea_CloseActiveSubWindow(QMdiArea* self) {
	self->closeActiveSubWindow();
}

void QMdiArea_CloseAllSubWindows(QMdiArea* self) {
	self->closeAllSubWindows();
}

void QMdiArea_ActivateNextSubWindow(QMdiArea* self) {
	self->activateNextSubWindow();
}

void QMdiArea_ActivatePreviousSubWindow(QMdiArea* self) {
	self->activatePreviousSubWindow();
}

struct miqt_string QMdiArea_Tr2(const char* s, const char* c) {
	QString _ret = QMdiArea::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMdiArea_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMdiArea::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QMdiSubWindow* */  QMdiArea_SubWindowList1(const QMdiArea* self, int order) {
	QList<QMdiSubWindow *> _ret = self->subWindowList(static_cast<QMdiArea::WindowOrder>(order));
	// Convert QList<> from C++ memory to manually-managed C memory
	QMdiSubWindow** _arr = static_cast<QMdiSubWindow**>(malloc(sizeof(QMdiSubWindow*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QMdiSubWindow* QMdiArea_AddSubWindow2(QMdiArea* self, QWidget* widget, int flags) {
	return self->addSubWindow(widget, static_cast<Qt::WindowFlags>(flags));
}

void QMdiArea_SetOption2(QMdiArea* self, int option, bool on) {
	self->setOption(static_cast<QMdiArea::AreaOption>(option), on);
}

void QMdiArea_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__SizeHint = slot;
}

QSize* QMdiArea_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQMdiArea*)(self) )->virtualbase_SizeHint();
}

void QMdiArea_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QMdiArea_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQMdiArea*)(self) )->virtualbase_MinimumSizeHint();
}

void QMdiArea_override_virtual_SetupViewport(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__SetupViewport = slot;
}

void QMdiArea_virtualbase_SetupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_SetupViewport(viewport);
}

void QMdiArea_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__Event = slot;
}

bool QMdiArea_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQMdiArea*)(self) )->virtualbase_Event(event);
}

void QMdiArea_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__EventFilter = slot;
}

bool QMdiArea_virtualbase_EventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQMdiArea*)(self) )->virtualbase_EventFilter(object, event);
}

void QMdiArea_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__PaintEvent = slot;
}

void QMdiArea_virtualbase_PaintEvent(void* self, QPaintEvent* paintEvent) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_PaintEvent(paintEvent);
}

void QMdiArea_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__ChildEvent = slot;
}

void QMdiArea_virtualbase_ChildEvent(void* self, QChildEvent* childEvent) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_ChildEvent(childEvent);
}

void QMdiArea_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__ResizeEvent = slot;
}

void QMdiArea_virtualbase_ResizeEvent(void* self, QResizeEvent* resizeEvent) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_ResizeEvent(resizeEvent);
}

void QMdiArea_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__TimerEvent = slot;
}

void QMdiArea_virtualbase_TimerEvent(void* self, QTimerEvent* timerEvent) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_TimerEvent(timerEvent);
}

void QMdiArea_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__ShowEvent = slot;
}

void QMdiArea_virtualbase_ShowEvent(void* self, QShowEvent* showEvent) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_ShowEvent(showEvent);
}

void QMdiArea_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__ViewportEvent = slot;
}

bool QMdiArea_virtualbase_ViewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQMdiArea*)(self) )->virtualbase_ViewportEvent(event);
}

void QMdiArea_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__ScrollContentsBy = slot;
}

void QMdiArea_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

void QMdiArea_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__MousePressEvent = slot;
}

void QMdiArea_virtualbase_MousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_MousePressEvent(param1);
}

void QMdiArea_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__MouseReleaseEvent = slot;
}

void QMdiArea_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_MouseReleaseEvent(param1);
}

void QMdiArea_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QMdiArea_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_MouseDoubleClickEvent(param1);
}

void QMdiArea_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__MouseMoveEvent = slot;
}

void QMdiArea_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_MouseMoveEvent(param1);
}

void QMdiArea_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__WheelEvent = slot;
}

void QMdiArea_virtualbase_WheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_WheelEvent(param1);
}

void QMdiArea_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__ContextMenuEvent = slot;
}

void QMdiArea_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_ContextMenuEvent(param1);
}

void QMdiArea_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__DragEnterEvent = slot;
}

void QMdiArea_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_DragEnterEvent(param1);
}

void QMdiArea_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__DragMoveEvent = slot;
}

void QMdiArea_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_DragMoveEvent(param1);
}

void QMdiArea_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__DragLeaveEvent = slot;
}

void QMdiArea_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_DragLeaveEvent(param1);
}

void QMdiArea_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__DropEvent = slot;
}

void QMdiArea_virtualbase_DropEvent(void* self, QDropEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_DropEvent(param1);
}

void QMdiArea_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__KeyPressEvent = slot;
}

void QMdiArea_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_KeyPressEvent(param1);
}

void QMdiArea_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) )->handle__ViewportSizeHint = slot;
}

QSize* QMdiArea_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQMdiArea*)(self) )->virtualbase_ViewportSizeHint();
}

void QMdiArea_Delete(QMdiArea* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQMdiArea*>( self );
	} else {
		delete self;
	}
}

