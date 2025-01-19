#include <QActionEvent>
#include <QByteArray>
#include <QCameraViewfinder>
#include <QChildEvent>
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
#include <QMediaBindableInterface>
#include <QMediaObject>
#include <QMetaMethod>
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
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QVideoWidget>
#include <QWheelEvent>
#include <QWidget>
#include <qcameraviewfinder.h>
#include "gen_qcameraviewfinder.h"

#ifdef __cplusplus
extern "C" {
#endif

QMediaObject* miqt_exec_callback_QCameraViewfinder_MediaObject(void*, intptr_t);
bool miqt_exec_callback_QCameraViewfinder_SetMediaObject(void*, intptr_t, QMediaObject*);
QSize* miqt_exec_callback_QCameraViewfinder_SizeHint(void*, intptr_t);
bool miqt_exec_callback_QCameraViewfinder_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QCameraViewfinder_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QCameraViewfinder_HideEvent(void*, intptr_t, QHideEvent*);
void miqt_exec_callback_QCameraViewfinder_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QCameraViewfinder_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QCameraViewfinder_PaintEvent(void*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QCameraViewfinder_DevType(void*, intptr_t);
void miqt_exec_callback_QCameraViewfinder_SetVisible(void*, intptr_t, bool);
QSize* miqt_exec_callback_QCameraViewfinder_MinimumSizeHint(void*, intptr_t);
int miqt_exec_callback_QCameraViewfinder_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QCameraViewfinder_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QCameraViewfinder_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QCameraViewfinder_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCameraViewfinder_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCameraViewfinder_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCameraViewfinder_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCameraViewfinder_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QCameraViewfinder_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QCameraViewfinder_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QCameraViewfinder_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QCameraViewfinder_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QCameraViewfinder_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QCameraViewfinder_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QCameraViewfinder_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QCameraViewfinder_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QCameraViewfinder_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QCameraViewfinder_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QCameraViewfinder_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QCameraViewfinder_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QCameraViewfinder_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QCameraViewfinder_DropEvent(void*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QCameraViewfinder_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QCameraViewfinder_ChangeEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QCameraViewfinder_Metric(void*, intptr_t, int);
void miqt_exec_callback_QCameraViewfinder_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QCameraViewfinder_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QCameraViewfinder_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QCameraViewfinder_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QCameraViewfinder_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QCameraViewfinder_FocusNextPrevChild(void*, intptr_t, bool);
bool miqt_exec_callback_QCameraViewfinder_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QCameraViewfinder_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QCameraViewfinder_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QCameraViewfinder_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QCameraViewfinder_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QCameraViewfinder_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQCameraViewfinder final : public QCameraViewfinder {
public:

	MiqtVirtualQCameraViewfinder(QWidget* parent): QCameraViewfinder(parent) {};
	MiqtVirtualQCameraViewfinder(): QCameraViewfinder() {};

	virtual ~MiqtVirtualQCameraViewfinder() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual QMediaObject* mediaObject() const override {
		if (handle__MediaObject == 0) {
			return QCameraViewfinder::mediaObject();
		}
		

		QMediaObject* callback_return_value = miqt_exec_callback_QCameraViewfinder_MediaObject(const_cast<MiqtVirtualQCameraViewfinder*>(this), handle__MediaObject);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMediaObject* virtualbase_MediaObject() const {

		return QCameraViewfinder::mediaObject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setMediaObject(QMediaObject* object) override {
		if (handle__SetMediaObject == 0) {
			return QCameraViewfinder::setMediaObject(object);
		}
		
		QMediaObject* sigval1 = object;

		bool callback_return_value = miqt_exec_callback_QCameraViewfinder_SetMediaObject(this, handle__SetMediaObject, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetMediaObject(QMediaObject* object) {

		return QCameraViewfinder::setMediaObject(object);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QCameraViewfinder::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QCameraViewfinder_SizeHint(const_cast<MiqtVirtualQCameraViewfinder*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QCameraViewfinder::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QCameraViewfinder::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QCameraViewfinder_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QCameraViewfinder::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QCameraViewfinder::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QCameraViewfinder::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QCameraViewfinder::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QCameraViewfinder::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QCameraViewfinder::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QCameraViewfinder::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QCameraViewfinder::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QCameraViewfinder::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QCameraViewfinder::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QCameraViewfinder::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QCameraViewfinder::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QCameraViewfinder_DevType(const_cast<MiqtVirtualQCameraViewfinder*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QCameraViewfinder::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QCameraViewfinder::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QCameraViewfinder_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QCameraViewfinder::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QCameraViewfinder::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QCameraViewfinder_MinimumSizeHint(const_cast<MiqtVirtualQCameraViewfinder*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QCameraViewfinder::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QCameraViewfinder::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QCameraViewfinder_HeightForWidth(const_cast<MiqtVirtualQCameraViewfinder*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QCameraViewfinder::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QCameraViewfinder::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QCameraViewfinder_HasHeightForWidth(const_cast<MiqtVirtualQCameraViewfinder*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QCameraViewfinder::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QCameraViewfinder::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QCameraViewfinder_PaintEngine(const_cast<MiqtVirtualQCameraViewfinder*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QCameraViewfinder::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QCameraViewfinder::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QCameraViewfinder::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QCameraViewfinder::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QCameraViewfinder::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QCameraViewfinder::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QCameraViewfinder::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QCameraViewfinder::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QCameraViewfinder::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QCameraViewfinder::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QCameraViewfinder::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QCameraViewfinder::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QCameraViewfinder::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QCameraViewfinder::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QCameraViewfinder::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QCameraViewfinder::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QCameraViewfinder::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QCameraViewfinder::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QCameraViewfinder::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QCameraViewfinder::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QCameraViewfinder::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QCameraViewfinder::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QCameraViewfinder::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QCameraViewfinder::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QCameraViewfinder::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QCameraViewfinder::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QCameraViewfinder::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QCameraViewfinder::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QCameraViewfinder::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QCameraViewfinder::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QCameraViewfinder::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QCameraViewfinder::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QCameraViewfinder::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QCameraViewfinder::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QCameraViewfinder::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QCameraViewfinder::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QCameraViewfinder::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QCameraViewfinder::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QCameraViewfinder::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QCameraViewfinder::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QCameraViewfinder_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QCameraViewfinder::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QCameraViewfinder::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QCameraViewfinder_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QCameraViewfinder::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QCameraViewfinder::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QCameraViewfinder_Metric(const_cast<MiqtVirtualQCameraViewfinder*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QCameraViewfinder::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QCameraViewfinder::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QCameraViewfinder_InitPainter(const_cast<MiqtVirtualQCameraViewfinder*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QCameraViewfinder::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QCameraViewfinder::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QCameraViewfinder_Redirected(const_cast<MiqtVirtualQCameraViewfinder*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QCameraViewfinder::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QCameraViewfinder::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QCameraViewfinder_SharedPainter(const_cast<MiqtVirtualQCameraViewfinder*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QCameraViewfinder::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QCameraViewfinder::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QCameraViewfinder_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QCameraViewfinder::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QCameraViewfinder::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QCameraViewfinder_InputMethodQuery(const_cast<MiqtVirtualQCameraViewfinder*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QCameraViewfinder::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QCameraViewfinder::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QCameraViewfinder_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QCameraViewfinder::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QCameraViewfinder::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QCameraViewfinder_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QCameraViewfinder::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QCameraViewfinder::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QCameraViewfinder::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QCameraViewfinder::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QCameraViewfinder::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QCameraViewfinder::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QCameraViewfinder::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QCameraViewfinder::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCameraViewfinder_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QCameraViewfinder::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QCameraViewfinder::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCameraViewfinder_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QCameraViewfinder::disconnectNotify(*signal);

	}

};

QCameraViewfinder* QCameraViewfinder_new(QWidget* parent) {
	return new MiqtVirtualQCameraViewfinder(parent);
}

QCameraViewfinder* QCameraViewfinder_new2() {
	return new MiqtVirtualQCameraViewfinder();
}

void QCameraViewfinder_virtbase(QCameraViewfinder* src, QVideoWidget** outptr_QVideoWidget) {
	*outptr_QVideoWidget = static_cast<QVideoWidget*>(src);
}

QMetaObject* QCameraViewfinder_MetaObject(const QCameraViewfinder* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraViewfinder_Metacast(QCameraViewfinder* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraViewfinder_Tr(const char* s) {
	QString _ret = QCameraViewfinder::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinder_TrUtf8(const char* s) {
	QString _ret = QCameraViewfinder::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMediaObject* QCameraViewfinder_MediaObject(const QCameraViewfinder* self) {
	return self->mediaObject();
}

struct miqt_string QCameraViewfinder_Tr2(const char* s, const char* c) {
	QString _ret = QCameraViewfinder::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinder_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraViewfinder::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinder_TrUtf82(const char* s, const char* c) {
	QString _ret = QCameraViewfinder::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinder_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraViewfinder::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraViewfinder_override_virtual_MediaObject(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MediaObject = slot;
	return true;
}

QMediaObject* QCameraViewfinder_virtualbase_MediaObject(const void* self) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_MediaObject();
}

bool QCameraViewfinder_override_virtual_SetMediaObject(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetMediaObject = slot;
	return true;
}

bool QCameraViewfinder_virtualbase_SetMediaObject(void* self, QMediaObject* object) {
	return ( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_SetMediaObject(object);
}

bool QCameraViewfinder_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QCameraViewfinder_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_SizeHint();
}

bool QCameraViewfinder_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QCameraViewfinder_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_Event(event);
}

bool QCameraViewfinder_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_ShowEvent(event);
}

bool QCameraViewfinder_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_HideEvent(event);
}

bool QCameraViewfinder_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_ResizeEvent(event);
}

bool QCameraViewfinder_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_MoveEvent(event);
}

bool QCameraViewfinder_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_PaintEvent(event);
}

bool QCameraViewfinder_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QCameraViewfinder_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_DevType();
}

bool QCameraViewfinder_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QCameraViewfinder_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_SetVisible(visible);
}

bool QCameraViewfinder_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QCameraViewfinder_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_MinimumSizeHint();
}

bool QCameraViewfinder_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QCameraViewfinder_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QCameraViewfinder_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QCameraViewfinder_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_HasHeightForWidth();
}

bool QCameraViewfinder_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QCameraViewfinder_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_PaintEngine();
}

bool QCameraViewfinder_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_MousePressEvent(event);
}

bool QCameraViewfinder_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QCameraViewfinder_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QCameraViewfinder_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QCameraViewfinder_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_WheelEvent(event);
}

bool QCameraViewfinder_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QCameraViewfinder_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QCameraViewfinder_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_FocusInEvent(event);
}

bool QCameraViewfinder_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QCameraViewfinder_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_EnterEvent(event);
}

bool QCameraViewfinder_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_LeaveEvent(event);
}

bool QCameraViewfinder_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_CloseEvent(event);
}

bool QCameraViewfinder_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QCameraViewfinder_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_TabletEvent(event);
}

bool QCameraViewfinder_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_ActionEvent(event);
}

bool QCameraViewfinder_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QCameraViewfinder_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QCameraViewfinder_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QCameraViewfinder_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_DropEvent(event);
}

bool QCameraViewfinder_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QCameraViewfinder_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QCameraViewfinder_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QCameraViewfinder_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QCameraViewfinder_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_Metric(param1);
}

bool QCameraViewfinder_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QCameraViewfinder_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_InitPainter(painter);
}

bool QCameraViewfinder_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QCameraViewfinder_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_Redirected(offset);
}

bool QCameraViewfinder_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QCameraViewfinder_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_SharedPainter();
}

bool QCameraViewfinder_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QCameraViewfinder_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QCameraViewfinder_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QCameraViewfinder_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QCameraViewfinder_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QCameraViewfinder_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QCameraViewfinder_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QCameraViewfinder_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_TimerEvent(event);
}

bool QCameraViewfinder_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_ChildEvent(event);
}

bool QCameraViewfinder_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_CustomEvent(event);
}

bool QCameraViewfinder_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QCameraViewfinder_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QCameraViewfinder_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QCameraViewfinder_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QCameraViewfinder_Delete(QCameraViewfinder* self) {
	delete self;
}

