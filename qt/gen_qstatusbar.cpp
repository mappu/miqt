#include <QActionEvent>
#include <QByteArray>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QStatusBar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qstatusbar.h>
#include "gen_qstatusbar.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QStatusBar_MessageChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QStatusBar_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QStatusBar_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QStatusBar_ResizeEvent(void*, intptr_t, QResizeEvent*);
bool miqt_exec_callback_QStatusBar_Event(void*, intptr_t, QEvent*);
int miqt_exec_callback_QStatusBar_DevType(void*, intptr_t);
void miqt_exec_callback_QStatusBar_SetVisible(void*, intptr_t, bool);
QSize* miqt_exec_callback_QStatusBar_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QStatusBar_MinimumSizeHint(void*, intptr_t);
int miqt_exec_callback_QStatusBar_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QStatusBar_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QStatusBar_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QStatusBar_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QStatusBar_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QStatusBar_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QStatusBar_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QStatusBar_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QStatusBar_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QStatusBar_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QStatusBar_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QStatusBar_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QStatusBar_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QStatusBar_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QStatusBar_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QStatusBar_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QStatusBar_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QStatusBar_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QStatusBar_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QStatusBar_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QStatusBar_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QStatusBar_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QStatusBar_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QStatusBar_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QStatusBar_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QStatusBar_ChangeEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QStatusBar_Metric(void*, intptr_t, int);
void miqt_exec_callback_QStatusBar_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QStatusBar_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QStatusBar_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QStatusBar_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QStatusBar_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QStatusBar_FocusNextPrevChild(void*, intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQStatusBar final : public QStatusBar {
public:

	MiqtVirtualQStatusBar(QWidget* parent): QStatusBar(parent) {};
	MiqtVirtualQStatusBar(): QStatusBar() {};

	virtual ~MiqtVirtualQStatusBar() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QStatusBar::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QStatusBar_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QStatusBar::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QStatusBar::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QStatusBar_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QStatusBar::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QStatusBar::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QStatusBar_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QStatusBar::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QStatusBar::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QStatusBar_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QStatusBar::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QStatusBar::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QStatusBar_DevType(const_cast<MiqtVirtualQStatusBar*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QStatusBar::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QStatusBar::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QStatusBar_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QStatusBar::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QStatusBar::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QStatusBar_SizeHint(const_cast<MiqtVirtualQStatusBar*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QStatusBar::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QStatusBar::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QStatusBar_MinimumSizeHint(const_cast<MiqtVirtualQStatusBar*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QStatusBar::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QStatusBar::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QStatusBar_HeightForWidth(const_cast<MiqtVirtualQStatusBar*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QStatusBar::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QStatusBar::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QStatusBar_HasHeightForWidth(const_cast<MiqtVirtualQStatusBar*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QStatusBar::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QStatusBar::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QStatusBar_PaintEngine(const_cast<MiqtVirtualQStatusBar*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QStatusBar::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QStatusBar::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QStatusBar::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QStatusBar::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QStatusBar::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QStatusBar::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QStatusBar::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QStatusBar::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QStatusBar::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QStatusBar::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QStatusBar::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QStatusBar::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QStatusBar::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QStatusBar::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QStatusBar::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QStatusBar::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QStatusBar::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QStatusBar::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QStatusBar::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QStatusBar::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QStatusBar::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QStatusBar::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QStatusBar::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QStatusBar::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QStatusBar::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QStatusBar::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QStatusBar::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QStatusBar::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QStatusBar::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QStatusBar::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QStatusBar::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QStatusBar::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QStatusBar::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QStatusBar::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QStatusBar::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QStatusBar::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QStatusBar::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QStatusBar::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QStatusBar::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QStatusBar::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QStatusBar::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QStatusBar::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QStatusBar::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QStatusBar::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QStatusBar_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QStatusBar::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QStatusBar::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QStatusBar_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QStatusBar::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QStatusBar::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QStatusBar_Metric(const_cast<MiqtVirtualQStatusBar*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QStatusBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QStatusBar::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QStatusBar_InitPainter(const_cast<MiqtVirtualQStatusBar*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QStatusBar::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QStatusBar::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QStatusBar_Redirected(const_cast<MiqtVirtualQStatusBar*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QStatusBar::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QStatusBar::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QStatusBar_SharedPainter(const_cast<MiqtVirtualQStatusBar*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QStatusBar::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QStatusBar::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QStatusBar_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QStatusBar::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QStatusBar::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QStatusBar_InputMethodQuery(const_cast<MiqtVirtualQStatusBar*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QStatusBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QStatusBar::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QStatusBar_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QStatusBar::focusNextPrevChild(next);

	}

};

QStatusBar* QStatusBar_new(QWidget* parent) {
	return new MiqtVirtualQStatusBar(parent);
}

QStatusBar* QStatusBar_new2() {
	return new MiqtVirtualQStatusBar();
}

void QStatusBar_virtbase(QStatusBar* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QStatusBar_MetaObject(const QStatusBar* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStatusBar_Metacast(QStatusBar* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStatusBar_Tr(const char* s) {
	QString _ret = QStatusBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStatusBar_TrUtf8(const char* s) {
	QString _ret = QStatusBar::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStatusBar_AddWidget(QStatusBar* self, QWidget* widget) {
	self->addWidget(widget);
}

int QStatusBar_InsertWidget(QStatusBar* self, int index, QWidget* widget) {
	return self->insertWidget(static_cast<int>(index), widget);
}

void QStatusBar_AddPermanentWidget(QStatusBar* self, QWidget* widget) {
	self->addPermanentWidget(widget);
}

int QStatusBar_InsertPermanentWidget(QStatusBar* self, int index, QWidget* widget) {
	return self->insertPermanentWidget(static_cast<int>(index), widget);
}

void QStatusBar_RemoveWidget(QStatusBar* self, QWidget* widget) {
	self->removeWidget(widget);
}

void QStatusBar_SetSizeGripEnabled(QStatusBar* self, bool sizeGripEnabled) {
	self->setSizeGripEnabled(sizeGripEnabled);
}

bool QStatusBar_IsSizeGripEnabled(const QStatusBar* self) {
	return self->isSizeGripEnabled();
}

struct miqt_string QStatusBar_CurrentMessage(const QStatusBar* self) {
	QString _ret = self->currentMessage();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStatusBar_ShowMessage(QStatusBar* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->showMessage(text_QString);
}

void QStatusBar_ClearMessage(QStatusBar* self) {
	self->clearMessage();
}

void QStatusBar_MessageChanged(QStatusBar* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->messageChanged(text_QString);
}

void QStatusBar_connect_MessageChanged(QStatusBar* self, intptr_t slot) {
	MiqtVirtualQStatusBar::connect(self, static_cast<void (QStatusBar::*)(const QString&)>(&QStatusBar::messageChanged), self, [=](const QString& text) {
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		miqt_exec_callback_QStatusBar_MessageChanged(slot, sigval1);
	});
}

struct miqt_string QStatusBar_Tr2(const char* s, const char* c) {
	QString _ret = QStatusBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStatusBar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStatusBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStatusBar_TrUtf82(const char* s, const char* c) {
	QString _ret = QStatusBar::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStatusBar_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QStatusBar::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStatusBar_AddWidget2(QStatusBar* self, QWidget* widget, int stretch) {
	self->addWidget(widget, static_cast<int>(stretch));
}

int QStatusBar_InsertWidget3(QStatusBar* self, int index, QWidget* widget, int stretch) {
	return self->insertWidget(static_cast<int>(index), widget, static_cast<int>(stretch));
}

void QStatusBar_AddPermanentWidget2(QStatusBar* self, QWidget* widget, int stretch) {
	self->addPermanentWidget(widget, static_cast<int>(stretch));
}

int QStatusBar_InsertPermanentWidget3(QStatusBar* self, int index, QWidget* widget, int stretch) {
	return self->insertPermanentWidget(static_cast<int>(index), widget, static_cast<int>(stretch));
}

void QStatusBar_ShowMessage2(QStatusBar* self, struct miqt_string text, int timeout) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->showMessage(text_QString, static_cast<int>(timeout));
}

void QStatusBar_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__ShowEvent = slot;
}

void QStatusBar_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_ShowEvent(param1);
}

void QStatusBar_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__PaintEvent = slot;
}

void QStatusBar_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_PaintEvent(param1);
}

void QStatusBar_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__ResizeEvent = slot;
}

void QStatusBar_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_ResizeEvent(param1);
}

void QStatusBar_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__Event = slot;
}

bool QStatusBar_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQStatusBar*)(self) )->virtualbase_Event(param1);
}

void QStatusBar_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__DevType = slot;
}

int QStatusBar_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_DevType();
}

void QStatusBar_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__SetVisible = slot;
}

void QStatusBar_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_SetVisible(visible);
}

void QStatusBar_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__SizeHint = slot;
}

QSize* QStatusBar_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_SizeHint();
}

void QStatusBar_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QStatusBar_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_MinimumSizeHint();
}

void QStatusBar_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__HeightForWidth = slot;
}

int QStatusBar_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_HeightForWidth(param1);
}

void QStatusBar_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__HasHeightForWidth = slot;
}

bool QStatusBar_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_HasHeightForWidth();
}

void QStatusBar_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QStatusBar_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_PaintEngine();
}

void QStatusBar_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__MousePressEvent = slot;
}

void QStatusBar_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_MousePressEvent(event);
}

void QStatusBar_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__MouseReleaseEvent = slot;
}

void QStatusBar_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void QStatusBar_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QStatusBar_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QStatusBar_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__MouseMoveEvent = slot;
}

void QStatusBar_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_MouseMoveEvent(event);
}

void QStatusBar_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__WheelEvent = slot;
}

void QStatusBar_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_WheelEvent(event);
}

void QStatusBar_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__KeyPressEvent = slot;
}

void QStatusBar_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_KeyPressEvent(event);
}

void QStatusBar_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__KeyReleaseEvent = slot;
}

void QStatusBar_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QStatusBar_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__FocusInEvent = slot;
}

void QStatusBar_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_FocusInEvent(event);
}

void QStatusBar_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__FocusOutEvent = slot;
}

void QStatusBar_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_FocusOutEvent(event);
}

void QStatusBar_override_virtual_EnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__EnterEvent = slot;
}

void QStatusBar_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_EnterEvent(event);
}

void QStatusBar_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__LeaveEvent = slot;
}

void QStatusBar_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_LeaveEvent(event);
}

void QStatusBar_override_virtual_MoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__MoveEvent = slot;
}

void QStatusBar_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_MoveEvent(event);
}

void QStatusBar_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__CloseEvent = slot;
}

void QStatusBar_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_CloseEvent(event);
}

void QStatusBar_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__ContextMenuEvent = slot;
}

void QStatusBar_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QStatusBar_override_virtual_TabletEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__TabletEvent = slot;
}

void QStatusBar_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_TabletEvent(event);
}

void QStatusBar_override_virtual_ActionEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__ActionEvent = slot;
}

void QStatusBar_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_ActionEvent(event);
}

void QStatusBar_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__DragEnterEvent = slot;
}

void QStatusBar_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_DragEnterEvent(event);
}

void QStatusBar_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__DragMoveEvent = slot;
}

void QStatusBar_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_DragMoveEvent(event);
}

void QStatusBar_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__DragLeaveEvent = slot;
}

void QStatusBar_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QStatusBar_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__DropEvent = slot;
}

void QStatusBar_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_DropEvent(event);
}

void QStatusBar_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__HideEvent = slot;
}

void QStatusBar_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_HideEvent(event);
}

void QStatusBar_override_virtual_NativeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__NativeEvent = slot;
}

bool QStatusBar_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQStatusBar*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

void QStatusBar_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__ChangeEvent = slot;
}

void QStatusBar_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_ChangeEvent(param1);
}

void QStatusBar_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__Metric = slot;
}

int QStatusBar_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_Metric(param1);
}

void QStatusBar_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__InitPainter = slot;
}

void QStatusBar_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_InitPainter(painter);
}

void QStatusBar_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QStatusBar_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_Redirected(offset);
}

void QStatusBar_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__SharedPainter = slot;
}

QPainter* QStatusBar_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_SharedPainter();
}

void QStatusBar_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__InputMethodEvent = slot;
}

void QStatusBar_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QStatusBar_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QStatusBar_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_InputMethodQuery(param1);
}

void QStatusBar_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QStatusBar_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQStatusBar*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QStatusBar_Delete(QStatusBar* self) {
	delete self;
}

