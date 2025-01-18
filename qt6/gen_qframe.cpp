#include <QActionEvent>
#include <QByteArray>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
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
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qframe.h>
#include "gen_qframe.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QFrame_SizeHint(void*, intptr_t);
bool miqt_exec_callback_QFrame_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QFrame_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QFrame_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QFrame_InitStyleOption(void*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QFrame_DevType(void*, intptr_t);
void miqt_exec_callback_QFrame_SetVisible(void*, intptr_t, bool);
QSize* miqt_exec_callback_QFrame_MinimumSizeHint(void*, intptr_t);
int miqt_exec_callback_QFrame_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QFrame_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QFrame_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QFrame_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFrame_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFrame_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFrame_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFrame_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QFrame_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFrame_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFrame_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFrame_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFrame_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QFrame_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QFrame_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QFrame_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QFrame_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QFrame_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QFrame_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QFrame_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QFrame_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QFrame_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QFrame_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QFrame_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QFrame_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QFrame_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QFrame_NativeEvent(void*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QFrame_Metric(void*, intptr_t, int);
void miqt_exec_callback_QFrame_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QFrame_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QFrame_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QFrame_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QFrame_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QFrame_FocusNextPrevChild(void*, intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFrame final : public QFrame {
public:

	MiqtVirtualQFrame(QWidget* parent): QFrame(parent) {};
	MiqtVirtualQFrame(): QFrame() {};
	MiqtVirtualQFrame(QWidget* parent, Qt::WindowFlags f): QFrame(parent, f) {};

	virtual ~MiqtVirtualQFrame() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QFrame::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFrame_SizeHint(const_cast<MiqtVirtualQFrame*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QFrame::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QFrame::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QFrame_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QFrame::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QFrame::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QFrame_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QFrame::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QFrame::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QFrame_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QFrame::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__InitStyleOption == 0) {
			QFrame::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QFrame_InitStyleOption(const_cast<MiqtVirtualQFrame*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionFrame* option) const {

		QFrame::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QFrame::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QFrame_DevType(const_cast<MiqtVirtualQFrame*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QFrame::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QFrame::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QFrame_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QFrame::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QFrame::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFrame_MinimumSizeHint(const_cast<MiqtVirtualQFrame*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QFrame::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QFrame::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QFrame_HeightForWidth(const_cast<MiqtVirtualQFrame*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QFrame::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QFrame::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QFrame_HasHeightForWidth(const_cast<MiqtVirtualQFrame*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QFrame::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QFrame::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QFrame_PaintEngine(const_cast<MiqtVirtualQFrame*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QFrame::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QFrame::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFrame_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QFrame::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QFrame::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFrame_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QFrame::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QFrame::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFrame_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QFrame::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QFrame::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFrame_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QFrame::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QFrame::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QFrame_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QFrame::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QFrame::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QFrame_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QFrame::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QFrame::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QFrame_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QFrame::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QFrame::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QFrame_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QFrame::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QFrame::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QFrame_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QFrame::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QFrame::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QFrame_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QFrame::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QFrame::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFrame_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QFrame::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QFrame::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QFrame_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QFrame::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QFrame::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QFrame_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QFrame::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QFrame::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QFrame_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QFrame::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QFrame::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QFrame_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QFrame::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QFrame::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QFrame_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QFrame::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QFrame::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QFrame_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QFrame::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QFrame::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QFrame_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QFrame::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QFrame::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QFrame_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QFrame::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QFrame::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QFrame_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QFrame::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QFrame::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QFrame_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QFrame::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QFrame::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QFrame_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QFrame::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QFrame::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QFrame_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QFrame::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QFrame::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QFrame_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QFrame::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QFrame::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QFrame_Metric(const_cast<MiqtVirtualQFrame*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QFrame::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QFrame::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QFrame_InitPainter(const_cast<MiqtVirtualQFrame*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QFrame::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QFrame::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QFrame_Redirected(const_cast<MiqtVirtualQFrame*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QFrame::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QFrame::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QFrame_SharedPainter(const_cast<MiqtVirtualQFrame*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QFrame::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QFrame::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QFrame_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QFrame::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QFrame::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QFrame_InputMethodQuery(const_cast<MiqtVirtualQFrame*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QFrame::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QFrame::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QFrame_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QFrame::focusNextPrevChild(next);

	}

};

QFrame* QFrame_new(QWidget* parent) {
	return new MiqtVirtualQFrame(parent);
}

QFrame* QFrame_new2() {
	return new MiqtVirtualQFrame();
}

QFrame* QFrame_new3(QWidget* parent, int f) {
	return new MiqtVirtualQFrame(parent, static_cast<Qt::WindowFlags>(f));
}

void QFrame_virtbase(QFrame* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QFrame_MetaObject(const QFrame* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFrame_Metacast(QFrame* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFrame_Tr(const char* s) {
	QString _ret = QFrame::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QFrame_FrameStyle(const QFrame* self) {
	return self->frameStyle();
}

void QFrame_SetFrameStyle(QFrame* self, int frameStyle) {
	self->setFrameStyle(static_cast<int>(frameStyle));
}

int QFrame_FrameWidth(const QFrame* self) {
	return self->frameWidth();
}

QSize* QFrame_SizeHint(const QFrame* self) {
	return new QSize(self->sizeHint());
}

int QFrame_FrameShape(const QFrame* self) {
	QFrame::Shape _ret = self->frameShape();
	return static_cast<int>(_ret);
}

void QFrame_SetFrameShape(QFrame* self, int frameShape) {
	self->setFrameShape(static_cast<QFrame::Shape>(frameShape));
}

int QFrame_FrameShadow(const QFrame* self) {
	QFrame::Shadow _ret = self->frameShadow();
	return static_cast<int>(_ret);
}

void QFrame_SetFrameShadow(QFrame* self, int frameShadow) {
	self->setFrameShadow(static_cast<QFrame::Shadow>(frameShadow));
}

int QFrame_LineWidth(const QFrame* self) {
	return self->lineWidth();
}

void QFrame_SetLineWidth(QFrame* self, int lineWidth) {
	self->setLineWidth(static_cast<int>(lineWidth));
}

int QFrame_MidLineWidth(const QFrame* self) {
	return self->midLineWidth();
}

void QFrame_SetMidLineWidth(QFrame* self, int midLineWidth) {
	self->setMidLineWidth(static_cast<int>(midLineWidth));
}

QRect* QFrame_FrameRect(const QFrame* self) {
	return new QRect(self->frameRect());
}

void QFrame_SetFrameRect(QFrame* self, QRect* frameRect) {
	self->setFrameRect(*frameRect);
}

struct miqt_string QFrame_Tr2(const char* s, const char* c) {
	QString _ret = QFrame::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFrame_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFrame::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFrame_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QFrame_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQFrame*)(self) )->virtualbase_SizeHint();
}

bool QFrame_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QFrame_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQFrame*)(self) )->virtualbase_Event(e);
}

bool QFrame_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QFrame_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_PaintEvent(param1);
}

bool QFrame_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QFrame_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QFrame_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QFrame_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQFrame*)(self) )->virtualbase_InitStyleOption(option);
}

bool QFrame_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QFrame_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQFrame*)(self) )->virtualbase_DevType();
}

bool QFrame_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QFrame_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_SetVisible(visible);
}

bool QFrame_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QFrame_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQFrame*)(self) )->virtualbase_MinimumSizeHint();
}

bool QFrame_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QFrame_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQFrame*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QFrame_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QFrame_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQFrame*)(self) )->virtualbase_HasHeightForWidth();
}

bool QFrame_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QFrame_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQFrame*)(self) )->virtualbase_PaintEngine();
}

bool QFrame_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QFrame_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_MousePressEvent(event);
}

bool QFrame_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QFrame_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QFrame_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QFrame_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QFrame_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QFrame_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QFrame_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QFrame_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_WheelEvent(event);
}

bool QFrame_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QFrame_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QFrame_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QFrame_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QFrame_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QFrame_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_FocusInEvent(event);
}

bool QFrame_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QFrame_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QFrame_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QFrame_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_EnterEvent(event);
}

bool QFrame_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QFrame_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_LeaveEvent(event);
}

bool QFrame_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QFrame_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_MoveEvent(event);
}

bool QFrame_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QFrame_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_ResizeEvent(event);
}

bool QFrame_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QFrame_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_CloseEvent(event);
}

bool QFrame_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QFrame_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QFrame_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QFrame_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_TabletEvent(event);
}

bool QFrame_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QFrame_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_ActionEvent(event);
}

bool QFrame_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QFrame_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QFrame_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QFrame_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QFrame_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QFrame_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QFrame_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QFrame_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_DropEvent(event);
}

bool QFrame_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QFrame_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_ShowEvent(event);
}

bool QFrame_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QFrame_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_HideEvent(event);
}

bool QFrame_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QFrame_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQFrame*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QFrame_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QFrame_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQFrame*)(self) )->virtualbase_Metric(param1);
}

bool QFrame_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QFrame_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQFrame*)(self) )->virtualbase_InitPainter(painter);
}

bool QFrame_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QFrame_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQFrame*)(self) )->virtualbase_Redirected(offset);
}

bool QFrame_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QFrame_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQFrame*)(self) )->virtualbase_SharedPainter();
}

bool QFrame_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QFrame_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QFrame_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QFrame_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQFrame*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QFrame_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QFrame_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQFrame*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QFrame_Delete(QFrame* self) {
	delete self;
}

