#include <QActionEvent>
#include <QByteArray>
#include <QCloseEvent>
#include <QColor>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionTab>
#include <QTabBar>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtabbar.h>
#include "gen_qtabbar.h"
#include "_cgo_export.h"

class MiqtVirtualQTabBar : public virtual QTabBar {
public:

	MiqtVirtualQTabBar(QWidget* parent): QTabBar(parent) {};
	MiqtVirtualQTabBar(): QTabBar() {};

	virtual ~MiqtVirtualQTabBar() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QTabBar::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTabBar_SizeHint(const_cast<MiqtVirtualQTabBar*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QTabBar::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QTabBar::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTabBar_MinimumSizeHint(const_cast<MiqtVirtualQTabBar*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QTabBar::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize tabSizeHint(int index) const override {
		if (handle__TabSizeHint == 0) {
			return QTabBar::tabSizeHint(index);
		}
		
		int sigval1 = index;

		QSize* callback_return_value = miqt_exec_callback_QTabBar_TabSizeHint(const_cast<MiqtVirtualQTabBar*>(this), handle__TabSizeHint, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_TabSizeHint(int index) const {

		return new QSize(QTabBar::tabSizeHint(static_cast<int>(index)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumTabSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumTabSizeHint(int index) const override {
		if (handle__MinimumTabSizeHint == 0) {
			return QTabBar::minimumTabSizeHint(index);
		}
		
		int sigval1 = index;

		QSize* callback_return_value = miqt_exec_callback_QTabBar_MinimumTabSizeHint(const_cast<MiqtVirtualQTabBar*>(this), handle__MinimumTabSizeHint, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumTabSizeHint(int index) const {

		return new QSize(QTabBar::minimumTabSizeHint(static_cast<int>(index)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabInserted(int index) override {
		if (handle__TabInserted == 0) {
			QTabBar::tabInserted(index);
			return;
		}
		
		int sigval1 = index;

		miqt_exec_callback_QTabBar_TabInserted(this, handle__TabInserted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabInserted(int index) {

		QTabBar::tabInserted(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabRemoved(int index) override {
		if (handle__TabRemoved == 0) {
			QTabBar::tabRemoved(index);
			return;
		}
		
		int sigval1 = index;

		miqt_exec_callback_QTabBar_TabRemoved(this, handle__TabRemoved, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabRemoved(int index) {

		QTabBar::tabRemoved(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabLayoutChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabLayoutChange() override {
		if (handle__TabLayoutChange == 0) {
			QTabBar::tabLayoutChange();
			return;
		}
		

		miqt_exec_callback_QTabBar_TabLayoutChange(this, handle__TabLayoutChange);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabLayoutChange() {

		QTabBar::tabLayoutChange();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QTabBar::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QTabBar_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QTabBar::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QTabBar::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QTabBar_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QTabBar::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QTabBar::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QTabBar_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QTabBar::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* param1) override {
		if (handle__HideEvent == 0) {
			QTabBar::hideEvent(param1);
			return;
		}
		
		QHideEvent* sigval1 = param1;

		miqt_exec_callback_QTabBar_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* param1) {

		QTabBar::hideEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QTabBar::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QTabBar_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QTabBar::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__MousePressEvent == 0) {
			QTabBar::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QTabBar_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* param1) {

		QTabBar::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QTabBar::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QTabBar_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* param1) {

		QTabBar::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__MouseReleaseEvent == 0) {
			QTabBar::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QTabBar_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* param1) {

		QTabBar::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QTabBar::mouseDoubleClickEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QTabBar_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* param1) {

		QTabBar::mouseDoubleClickEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QTabBar::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QTabBar_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QTabBar::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QTabBar::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QTabBar_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QTabBar::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QTabBar::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QTabBar_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QTabBar::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QTabBar::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTabBar_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QTabBar::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionTab* option, int tabIndex) const override {
		if (handle__InitStyleOption == 0) {
			QTabBar::initStyleOption(option, tabIndex);
			return;
		}
		
		QStyleOptionTab* sigval1 = option;
		int sigval2 = tabIndex;

		miqt_exec_callback_QTabBar_InitStyleOption(const_cast<MiqtVirtualQTabBar*>(this), handle__InitStyleOption, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionTab* option, int tabIndex) const {

		QTabBar::initStyleOption(option, static_cast<int>(tabIndex));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QTabBar::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QTabBar_DevType(const_cast<MiqtVirtualQTabBar*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QTabBar::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QTabBar::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QTabBar_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QTabBar::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QTabBar::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QTabBar_HeightForWidth(const_cast<MiqtVirtualQTabBar*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QTabBar::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QTabBar::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QTabBar_HasHeightForWidth(const_cast<MiqtVirtualQTabBar*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QTabBar::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QTabBar::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QTabBar_PaintEngine(const_cast<MiqtVirtualQTabBar*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QTabBar::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QTabBar::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTabBar_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QTabBar::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QTabBar::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTabBar_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QTabBar::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QTabBar::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTabBar_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QTabBar::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QTabBar::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QTabBar_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QTabBar::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QTabBar::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTabBar_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QTabBar::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QTabBar::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QTabBar_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QTabBar::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QTabBar::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QTabBar_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QTabBar::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QTabBar::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QTabBar_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QTabBar::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QTabBar::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QTabBar_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QTabBar::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QTabBar::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QTabBar_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QTabBar::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QTabBar::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QTabBar_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QTabBar::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QTabBar::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QTabBar_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QTabBar::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QTabBar::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QTabBar_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QTabBar::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QTabBar::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QTabBar_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QTabBar::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QTabBar::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		qintptr* result_ret = result;
		intptr_t* sigval3 = (intptr_t*)(result_ret);

		bool callback_return_value = miqt_exec_callback_QTabBar_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QTabBar::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QTabBar::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QTabBar_Metric(const_cast<MiqtVirtualQTabBar*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QTabBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QTabBar::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QTabBar_InitPainter(const_cast<MiqtVirtualQTabBar*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QTabBar::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QTabBar::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QTabBar_Redirected(const_cast<MiqtVirtualQTabBar*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QTabBar::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QTabBar::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QTabBar_SharedPainter(const_cast<MiqtVirtualQTabBar*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QTabBar::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QTabBar::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QTabBar_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QTabBar::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QTabBar::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTabBar_InputMethodQuery(const_cast<MiqtVirtualQTabBar*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QTabBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QTabBar::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QTabBar_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QTabBar::focusNextPrevChild(next);

	}

};

void QTabBar_new(QWidget* parent, QTabBar** outptr_QTabBar, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQTabBar* ret = new MiqtVirtualQTabBar(parent);
	*outptr_QTabBar = ret;
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QTabBar_new2(QTabBar** outptr_QTabBar, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQTabBar* ret = new MiqtVirtualQTabBar();
	*outptr_QTabBar = ret;
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

QMetaObject* QTabBar_MetaObject(const QTabBar* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTabBar_Metacast(QTabBar* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTabBar_Tr(const char* s) {
	QString _ret = QTabBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTabBar_Shape(const QTabBar* self) {
	QTabBar::Shape _ret = self->shape();
	return static_cast<int>(_ret);
}

void QTabBar_SetShape(QTabBar* self, int shape) {
	self->setShape(static_cast<QTabBar::Shape>(shape));
}

int QTabBar_AddTab(QTabBar* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addTab(text_QString);
}

int QTabBar_AddTab2(QTabBar* self, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addTab(*icon, text_QString);
}

int QTabBar_InsertTab(QTabBar* self, int index, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->insertTab(static_cast<int>(index), text_QString);
}

int QTabBar_InsertTab2(QTabBar* self, int index, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->insertTab(static_cast<int>(index), *icon, text_QString);
}

void QTabBar_RemoveTab(QTabBar* self, int index) {
	self->removeTab(static_cast<int>(index));
}

void QTabBar_MoveTab(QTabBar* self, int from, int to) {
	self->moveTab(static_cast<int>(from), static_cast<int>(to));
}

bool QTabBar_IsTabEnabled(const QTabBar* self, int index) {
	return self->isTabEnabled(static_cast<int>(index));
}

void QTabBar_SetTabEnabled(QTabBar* self, int index, bool enabled) {
	self->setTabEnabled(static_cast<int>(index), enabled);
}

bool QTabBar_IsTabVisible(const QTabBar* self, int index) {
	return self->isTabVisible(static_cast<int>(index));
}

void QTabBar_SetTabVisible(QTabBar* self, int index, bool visible) {
	self->setTabVisible(static_cast<int>(index), visible);
}

struct miqt_string QTabBar_TabText(const QTabBar* self, int index) {
	QString _ret = self->tabText(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTabBar_SetTabText(QTabBar* self, int index, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setTabText(static_cast<int>(index), text_QString);
}

QColor* QTabBar_TabTextColor(const QTabBar* self, int index) {
	return new QColor(self->tabTextColor(static_cast<int>(index)));
}

void QTabBar_SetTabTextColor(QTabBar* self, int index, QColor* color) {
	self->setTabTextColor(static_cast<int>(index), *color);
}

QIcon* QTabBar_TabIcon(const QTabBar* self, int index) {
	return new QIcon(self->tabIcon(static_cast<int>(index)));
}

void QTabBar_SetTabIcon(QTabBar* self, int index, QIcon* icon) {
	self->setTabIcon(static_cast<int>(index), *icon);
}

int QTabBar_ElideMode(const QTabBar* self) {
	Qt::TextElideMode _ret = self->elideMode();
	return static_cast<int>(_ret);
}

void QTabBar_SetElideMode(QTabBar* self, int mode) {
	self->setElideMode(static_cast<Qt::TextElideMode>(mode));
}

void QTabBar_SetTabToolTip(QTabBar* self, int index, struct miqt_string tip) {
	QString tip_QString = QString::fromUtf8(tip.data, tip.len);
	self->setTabToolTip(static_cast<int>(index), tip_QString);
}

struct miqt_string QTabBar_TabToolTip(const QTabBar* self, int index) {
	QString _ret = self->tabToolTip(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTabBar_SetTabWhatsThis(QTabBar* self, int index, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setTabWhatsThis(static_cast<int>(index), text_QString);
}

struct miqt_string QTabBar_TabWhatsThis(const QTabBar* self, int index) {
	QString _ret = self->tabWhatsThis(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTabBar_SetTabData(QTabBar* self, int index, QVariant* data) {
	self->setTabData(static_cast<int>(index), *data);
}

QVariant* QTabBar_TabData(const QTabBar* self, int index) {
	return new QVariant(self->tabData(static_cast<int>(index)));
}

QRect* QTabBar_TabRect(const QTabBar* self, int index) {
	return new QRect(self->tabRect(static_cast<int>(index)));
}

int QTabBar_TabAt(const QTabBar* self, QPoint* pos) {
	return self->tabAt(*pos);
}

int QTabBar_CurrentIndex(const QTabBar* self) {
	return self->currentIndex();
}

int QTabBar_Count(const QTabBar* self) {
	return self->count();
}

QSize* QTabBar_SizeHint(const QTabBar* self) {
	return new QSize(self->sizeHint());
}

QSize* QTabBar_MinimumSizeHint(const QTabBar* self) {
	return new QSize(self->minimumSizeHint());
}

void QTabBar_SetDrawBase(QTabBar* self, bool drawTheBase) {
	self->setDrawBase(drawTheBase);
}

bool QTabBar_DrawBase(const QTabBar* self) {
	return self->drawBase();
}

QSize* QTabBar_IconSize(const QTabBar* self) {
	return new QSize(self->iconSize());
}

void QTabBar_SetIconSize(QTabBar* self, QSize* size) {
	self->setIconSize(*size);
}

bool QTabBar_UsesScrollButtons(const QTabBar* self) {
	return self->usesScrollButtons();
}

void QTabBar_SetUsesScrollButtons(QTabBar* self, bool useButtons) {
	self->setUsesScrollButtons(useButtons);
}

bool QTabBar_TabsClosable(const QTabBar* self) {
	return self->tabsClosable();
}

void QTabBar_SetTabsClosable(QTabBar* self, bool closable) {
	self->setTabsClosable(closable);
}

void QTabBar_SetTabButton(QTabBar* self, int index, int position, QWidget* widget) {
	self->setTabButton(static_cast<int>(index), static_cast<QTabBar::ButtonPosition>(position), widget);
}

QWidget* QTabBar_TabButton(const QTabBar* self, int index, int position) {
	return self->tabButton(static_cast<int>(index), static_cast<QTabBar::ButtonPosition>(position));
}

int QTabBar_SelectionBehaviorOnRemove(const QTabBar* self) {
	QTabBar::SelectionBehavior _ret = self->selectionBehaviorOnRemove();
	return static_cast<int>(_ret);
}

void QTabBar_SetSelectionBehaviorOnRemove(QTabBar* self, int behavior) {
	self->setSelectionBehaviorOnRemove(static_cast<QTabBar::SelectionBehavior>(behavior));
}

bool QTabBar_Expanding(const QTabBar* self) {
	return self->expanding();
}

void QTabBar_SetExpanding(QTabBar* self, bool enabled) {
	self->setExpanding(enabled);
}

bool QTabBar_IsMovable(const QTabBar* self) {
	return self->isMovable();
}

void QTabBar_SetMovable(QTabBar* self, bool movable) {
	self->setMovable(movable);
}

bool QTabBar_DocumentMode(const QTabBar* self) {
	return self->documentMode();
}

void QTabBar_SetDocumentMode(QTabBar* self, bool set) {
	self->setDocumentMode(set);
}

bool QTabBar_AutoHide(const QTabBar* self) {
	return self->autoHide();
}

void QTabBar_SetAutoHide(QTabBar* self, bool hide) {
	self->setAutoHide(hide);
}

bool QTabBar_ChangeCurrentOnDrag(const QTabBar* self) {
	return self->changeCurrentOnDrag();
}

void QTabBar_SetChangeCurrentOnDrag(QTabBar* self, bool change) {
	self->setChangeCurrentOnDrag(change);
}

struct miqt_string QTabBar_AccessibleTabName(const QTabBar* self, int index) {
	QString _ret = self->accessibleTabName(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTabBar_SetAccessibleTabName(QTabBar* self, int index, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setAccessibleTabName(static_cast<int>(index), name_QString);
}

void QTabBar_SetCurrentIndex(QTabBar* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QTabBar_CurrentChanged(QTabBar* self, int index) {
	self->currentChanged(static_cast<int>(index));
}

void QTabBar_connect_CurrentChanged(QTabBar* self, intptr_t slot) {
	MiqtVirtualQTabBar::connect(self, static_cast<void (QTabBar::*)(int)>(&QTabBar::currentChanged), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QTabBar_CurrentChanged(slot, sigval1);
	});
}

void QTabBar_TabCloseRequested(QTabBar* self, int index) {
	self->tabCloseRequested(static_cast<int>(index));
}

void QTabBar_connect_TabCloseRequested(QTabBar* self, intptr_t slot) {
	MiqtVirtualQTabBar::connect(self, static_cast<void (QTabBar::*)(int)>(&QTabBar::tabCloseRequested), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QTabBar_TabCloseRequested(slot, sigval1);
	});
}

void QTabBar_TabMoved(QTabBar* self, int from, int to) {
	self->tabMoved(static_cast<int>(from), static_cast<int>(to));
}

void QTabBar_connect_TabMoved(QTabBar* self, intptr_t slot) {
	MiqtVirtualQTabBar::connect(self, static_cast<void (QTabBar::*)(int, int)>(&QTabBar::tabMoved), self, [=](int from, int to) {
		int sigval1 = from;
		int sigval2 = to;
		miqt_exec_callback_QTabBar_TabMoved(slot, sigval1, sigval2);
	});
}

void QTabBar_TabBarClicked(QTabBar* self, int index) {
	self->tabBarClicked(static_cast<int>(index));
}

void QTabBar_connect_TabBarClicked(QTabBar* self, intptr_t slot) {
	MiqtVirtualQTabBar::connect(self, static_cast<void (QTabBar::*)(int)>(&QTabBar::tabBarClicked), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QTabBar_TabBarClicked(slot, sigval1);
	});
}

void QTabBar_TabBarDoubleClicked(QTabBar* self, int index) {
	self->tabBarDoubleClicked(static_cast<int>(index));
}

void QTabBar_connect_TabBarDoubleClicked(QTabBar* self, intptr_t slot) {
	MiqtVirtualQTabBar::connect(self, static_cast<void (QTabBar::*)(int)>(&QTabBar::tabBarDoubleClicked), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QTabBar_TabBarDoubleClicked(slot, sigval1);
	});
}

struct miqt_string QTabBar_Tr2(const char* s, const char* c) {
	QString _ret = QTabBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTabBar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTabBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTabBar_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__SizeHint = slot;
}

QSize* QTabBar_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQTabBar*)(self) )->virtualbase_SizeHint();
}

void QTabBar_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QTabBar_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQTabBar*)(self) )->virtualbase_MinimumSizeHint();
}

void QTabBar_override_virtual_TabSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__TabSizeHint = slot;
}

QSize* QTabBar_virtualbase_TabSizeHint(const void* self, int index) {
	return ( (const MiqtVirtualQTabBar*)(self) )->virtualbase_TabSizeHint(index);
}

void QTabBar_override_virtual_MinimumTabSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__MinimumTabSizeHint = slot;
}

QSize* QTabBar_virtualbase_MinimumTabSizeHint(const void* self, int index) {
	return ( (const MiqtVirtualQTabBar*)(self) )->virtualbase_MinimumTabSizeHint(index);
}

void QTabBar_override_virtual_TabInserted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__TabInserted = slot;
}

void QTabBar_virtualbase_TabInserted(void* self, int index) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_TabInserted(index);
}

void QTabBar_override_virtual_TabRemoved(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__TabRemoved = slot;
}

void QTabBar_virtualbase_TabRemoved(void* self, int index) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_TabRemoved(index);
}

void QTabBar_override_virtual_TabLayoutChange(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__TabLayoutChange = slot;
}

void QTabBar_virtualbase_TabLayoutChange(void* self) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_TabLayoutChange();
}

void QTabBar_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__Event = slot;
}

bool QTabBar_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQTabBar*)(self) )->virtualbase_Event(param1);
}

void QTabBar_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__ResizeEvent = slot;
}

void QTabBar_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_ResizeEvent(param1);
}

void QTabBar_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__ShowEvent = slot;
}

void QTabBar_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_ShowEvent(param1);
}

void QTabBar_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__HideEvent = slot;
}

void QTabBar_virtualbase_HideEvent(void* self, QHideEvent* param1) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_HideEvent(param1);
}

void QTabBar_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__PaintEvent = slot;
}

void QTabBar_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_PaintEvent(param1);
}

void QTabBar_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__MousePressEvent = slot;
}

void QTabBar_virtualbase_MousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_MousePressEvent(param1);
}

void QTabBar_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__MouseMoveEvent = slot;
}

void QTabBar_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_MouseMoveEvent(param1);
}

void QTabBar_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__MouseReleaseEvent = slot;
}

void QTabBar_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_MouseReleaseEvent(param1);
}

void QTabBar_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QTabBar_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_MouseDoubleClickEvent(param1);
}

void QTabBar_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__WheelEvent = slot;
}

void QTabBar_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_WheelEvent(event);
}

void QTabBar_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__KeyPressEvent = slot;
}

void QTabBar_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_KeyPressEvent(param1);
}

void QTabBar_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__ChangeEvent = slot;
}

void QTabBar_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_ChangeEvent(param1);
}

void QTabBar_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__TimerEvent = slot;
}

void QTabBar_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_TimerEvent(event);
}

void QTabBar_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__InitStyleOption = slot;
}

void QTabBar_virtualbase_InitStyleOption(const void* self, QStyleOptionTab* option, int tabIndex) {
	( (const MiqtVirtualQTabBar*)(self) )->virtualbase_InitStyleOption(option, tabIndex);
}

void QTabBar_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__DevType = slot;
}

int QTabBar_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQTabBar*)(self) )->virtualbase_DevType();
}

void QTabBar_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__SetVisible = slot;
}

void QTabBar_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_SetVisible(visible);
}

void QTabBar_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__HeightForWidth = slot;
}

int QTabBar_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQTabBar*)(self) )->virtualbase_HeightForWidth(param1);
}

void QTabBar_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__HasHeightForWidth = slot;
}

bool QTabBar_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQTabBar*)(self) )->virtualbase_HasHeightForWidth();
}

void QTabBar_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QTabBar_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQTabBar*)(self) )->virtualbase_PaintEngine();
}

void QTabBar_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__KeyReleaseEvent = slot;
}

void QTabBar_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QTabBar_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__FocusInEvent = slot;
}

void QTabBar_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_FocusInEvent(event);
}

void QTabBar_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__FocusOutEvent = slot;
}

void QTabBar_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_FocusOutEvent(event);
}

void QTabBar_override_virtual_EnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__EnterEvent = slot;
}

void QTabBar_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_EnterEvent(event);
}

void QTabBar_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__LeaveEvent = slot;
}

void QTabBar_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_LeaveEvent(event);
}

void QTabBar_override_virtual_MoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__MoveEvent = slot;
}

void QTabBar_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_MoveEvent(event);
}

void QTabBar_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__CloseEvent = slot;
}

void QTabBar_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_CloseEvent(event);
}

void QTabBar_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__ContextMenuEvent = slot;
}

void QTabBar_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QTabBar_override_virtual_TabletEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__TabletEvent = slot;
}

void QTabBar_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_TabletEvent(event);
}

void QTabBar_override_virtual_ActionEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__ActionEvent = slot;
}

void QTabBar_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_ActionEvent(event);
}

void QTabBar_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__DragEnterEvent = slot;
}

void QTabBar_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_DragEnterEvent(event);
}

void QTabBar_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__DragMoveEvent = slot;
}

void QTabBar_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_DragMoveEvent(event);
}

void QTabBar_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__DragLeaveEvent = slot;
}

void QTabBar_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QTabBar_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__DropEvent = slot;
}

void QTabBar_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_DropEvent(event);
}

void QTabBar_override_virtual_NativeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__NativeEvent = slot;
}

bool QTabBar_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQTabBar*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

void QTabBar_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__Metric = slot;
}

int QTabBar_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQTabBar*)(self) )->virtualbase_Metric(param1);
}

void QTabBar_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__InitPainter = slot;
}

void QTabBar_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQTabBar*)(self) )->virtualbase_InitPainter(painter);
}

void QTabBar_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QTabBar_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQTabBar*)(self) )->virtualbase_Redirected(offset);
}

void QTabBar_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__SharedPainter = slot;
}

QPainter* QTabBar_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQTabBar*)(self) )->virtualbase_SharedPainter();
}

void QTabBar_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__InputMethodEvent = slot;
}

void QTabBar_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQTabBar*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QTabBar_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QTabBar_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQTabBar*)(self) )->virtualbase_InputMethodQuery(param1);
}

void QTabBar_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabBar*>( (QTabBar*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QTabBar_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQTabBar*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QTabBar_Delete(QTabBar* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQTabBar*>( self );
	} else {
		delete self;
	}
}

