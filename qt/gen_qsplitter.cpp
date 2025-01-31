#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
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
#include <QSplitter>
#include <QSplitterHandle>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qsplitter.h>
#include "gen_qsplitter.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSplitter_SplitterMoved(intptr_t, int, int);
QSize* miqt_exec_callback_QSplitter_SizeHint(const QSplitter*, intptr_t);
QSize* miqt_exec_callback_QSplitter_MinimumSizeHint(const QSplitter*, intptr_t);
QSplitterHandle* miqt_exec_callback_QSplitter_CreateHandle(QSplitter*, intptr_t);
void miqt_exec_callback_QSplitter_ChildEvent(QSplitter*, intptr_t, QChildEvent*);
bool miqt_exec_callback_QSplitter_Event(QSplitter*, intptr_t, QEvent*);
void miqt_exec_callback_QSplitter_ResizeEvent(QSplitter*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QSplitter_ChangeEvent(QSplitter*, intptr_t, QEvent*);
void miqt_exec_callback_QSplitter_PaintEvent(QSplitter*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QSplitter_DevType(const QSplitter*, intptr_t);
void miqt_exec_callback_QSplitter_SetVisible(QSplitter*, intptr_t, bool);
int miqt_exec_callback_QSplitter_HeightForWidth(const QSplitter*, intptr_t, int);
bool miqt_exec_callback_QSplitter_HasHeightForWidth(const QSplitter*, intptr_t);
QPaintEngine* miqt_exec_callback_QSplitter_PaintEngine(const QSplitter*, intptr_t);
void miqt_exec_callback_QSplitter_MousePressEvent(QSplitter*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplitter_MouseReleaseEvent(QSplitter*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplitter_MouseDoubleClickEvent(QSplitter*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplitter_MouseMoveEvent(QSplitter*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplitter_WheelEvent(QSplitter*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QSplitter_KeyPressEvent(QSplitter*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSplitter_KeyReleaseEvent(QSplitter*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSplitter_FocusInEvent(QSplitter*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSplitter_FocusOutEvent(QSplitter*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSplitter_EnterEvent(QSplitter*, intptr_t, QEvent*);
void miqt_exec_callback_QSplitter_LeaveEvent(QSplitter*, intptr_t, QEvent*);
void miqt_exec_callback_QSplitter_MoveEvent(QSplitter*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QSplitter_CloseEvent(QSplitter*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QSplitter_ContextMenuEvent(QSplitter*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QSplitter_TabletEvent(QSplitter*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QSplitter_ActionEvent(QSplitter*, intptr_t, QActionEvent*);
void miqt_exec_callback_QSplitter_DragEnterEvent(QSplitter*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QSplitter_DragMoveEvent(QSplitter*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QSplitter_DragLeaveEvent(QSplitter*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QSplitter_DropEvent(QSplitter*, intptr_t, QDropEvent*);
void miqt_exec_callback_QSplitter_ShowEvent(QSplitter*, intptr_t, QShowEvent*);
void miqt_exec_callback_QSplitter_HideEvent(QSplitter*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QSplitter_NativeEvent(QSplitter*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QSplitter_Metric(const QSplitter*, intptr_t, int);
void miqt_exec_callback_QSplitter_InitPainter(const QSplitter*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QSplitter_Redirected(const QSplitter*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QSplitter_SharedPainter(const QSplitter*, intptr_t);
void miqt_exec_callback_QSplitter_InputMethodEvent(QSplitter*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QSplitter_InputMethodQuery(const QSplitter*, intptr_t, int);
bool miqt_exec_callback_QSplitter_FocusNextPrevChild(QSplitter*, intptr_t, bool);
bool miqt_exec_callback_QSplitter_EventFilter(QSplitter*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSplitter_TimerEvent(QSplitter*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSplitter_CustomEvent(QSplitter*, intptr_t, QEvent*);
void miqt_exec_callback_QSplitter_ConnectNotify(QSplitter*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSplitter_DisconnectNotify(QSplitter*, intptr_t, QMetaMethod*);
QSize* miqt_exec_callback_QSplitterHandle_SizeHint(const QSplitterHandle*, intptr_t);
void miqt_exec_callback_QSplitterHandle_PaintEvent(QSplitterHandle*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QSplitterHandle_MouseMoveEvent(QSplitterHandle*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplitterHandle_MousePressEvent(QSplitterHandle*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplitterHandle_MouseReleaseEvent(QSplitterHandle*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplitterHandle_ResizeEvent(QSplitterHandle*, intptr_t, QResizeEvent*);
bool miqt_exec_callback_QSplitterHandle_Event(QSplitterHandle*, intptr_t, QEvent*);
int miqt_exec_callback_QSplitterHandle_DevType(const QSplitterHandle*, intptr_t);
void miqt_exec_callback_QSplitterHandle_SetVisible(QSplitterHandle*, intptr_t, bool);
QSize* miqt_exec_callback_QSplitterHandle_MinimumSizeHint(const QSplitterHandle*, intptr_t);
int miqt_exec_callback_QSplitterHandle_HeightForWidth(const QSplitterHandle*, intptr_t, int);
bool miqt_exec_callback_QSplitterHandle_HasHeightForWidth(const QSplitterHandle*, intptr_t);
QPaintEngine* miqt_exec_callback_QSplitterHandle_PaintEngine(const QSplitterHandle*, intptr_t);
void miqt_exec_callback_QSplitterHandle_MouseDoubleClickEvent(QSplitterHandle*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplitterHandle_WheelEvent(QSplitterHandle*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QSplitterHandle_KeyPressEvent(QSplitterHandle*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSplitterHandle_KeyReleaseEvent(QSplitterHandle*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSplitterHandle_FocusInEvent(QSplitterHandle*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSplitterHandle_FocusOutEvent(QSplitterHandle*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSplitterHandle_EnterEvent(QSplitterHandle*, intptr_t, QEvent*);
void miqt_exec_callback_QSplitterHandle_LeaveEvent(QSplitterHandle*, intptr_t, QEvent*);
void miqt_exec_callback_QSplitterHandle_MoveEvent(QSplitterHandle*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QSplitterHandle_CloseEvent(QSplitterHandle*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QSplitterHandle_ContextMenuEvent(QSplitterHandle*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QSplitterHandle_TabletEvent(QSplitterHandle*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QSplitterHandle_ActionEvent(QSplitterHandle*, intptr_t, QActionEvent*);
void miqt_exec_callback_QSplitterHandle_DragEnterEvent(QSplitterHandle*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QSplitterHandle_DragMoveEvent(QSplitterHandle*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QSplitterHandle_DragLeaveEvent(QSplitterHandle*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QSplitterHandle_DropEvent(QSplitterHandle*, intptr_t, QDropEvent*);
void miqt_exec_callback_QSplitterHandle_ShowEvent(QSplitterHandle*, intptr_t, QShowEvent*);
void miqt_exec_callback_QSplitterHandle_HideEvent(QSplitterHandle*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QSplitterHandle_NativeEvent(QSplitterHandle*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QSplitterHandle_ChangeEvent(QSplitterHandle*, intptr_t, QEvent*);
int miqt_exec_callback_QSplitterHandle_Metric(const QSplitterHandle*, intptr_t, int);
void miqt_exec_callback_QSplitterHandle_InitPainter(const QSplitterHandle*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QSplitterHandle_Redirected(const QSplitterHandle*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QSplitterHandle_SharedPainter(const QSplitterHandle*, intptr_t);
void miqt_exec_callback_QSplitterHandle_InputMethodEvent(QSplitterHandle*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QSplitterHandle_InputMethodQuery(const QSplitterHandle*, intptr_t, int);
bool miqt_exec_callback_QSplitterHandle_FocusNextPrevChild(QSplitterHandle*, intptr_t, bool);
bool miqt_exec_callback_QSplitterHandle_EventFilter(QSplitterHandle*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSplitterHandle_TimerEvent(QSplitterHandle*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSplitterHandle_ChildEvent(QSplitterHandle*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSplitterHandle_CustomEvent(QSplitterHandle*, intptr_t, QEvent*);
void miqt_exec_callback_QSplitterHandle_ConnectNotify(QSplitterHandle*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSplitterHandle_DisconnectNotify(QSplitterHandle*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSplitter final : public QSplitter {
public:

	MiqtVirtualQSplitter(QWidget* parent): QSplitter(parent) {};
	MiqtVirtualQSplitter(): QSplitter() {};
	MiqtVirtualQSplitter(Qt::Orientation param1): QSplitter(param1) {};
	MiqtVirtualQSplitter(Qt::Orientation param1, QWidget* parent): QSplitter(param1, parent) {};

	virtual ~MiqtVirtualQSplitter() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QSplitter::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSplitter_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QSplitter::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QSplitter::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSplitter_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QSplitter::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CreateHandle = 0;

	// Subclass to allow providing a Go implementation
	virtual QSplitterHandle* createHandle() override {
		if (handle__CreateHandle == 0) {
			return QSplitter::createHandle();
		}
		

		QSplitterHandle* callback_return_value = miqt_exec_callback_QSplitter_CreateHandle(this, handle__CreateHandle);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSplitterHandle* virtualbase_CreateHandle() {

		return QSplitter::createHandle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* param1) override {
		if (handle__ChildEvent == 0) {
			QSplitter::childEvent(param1);
			return;
		}
		
		QChildEvent* sigval1 = param1;

		miqt_exec_callback_QSplitter_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* param1) {

		QSplitter::childEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QSplitter::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QSplitter_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QSplitter::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QSplitter::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QSplitter_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QSplitter::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QSplitter::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QSplitter_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QSplitter::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QSplitter::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QSplitter_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QSplitter::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QSplitter::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QSplitter_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QSplitter::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QSplitter::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QSplitter_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QSplitter::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QSplitter::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QSplitter_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QSplitter::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QSplitter::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QSplitter_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QSplitter::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QSplitter::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QSplitter_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QSplitter::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QSplitter::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QSplitter::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QSplitter::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QSplitter::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QSplitter::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QSplitter::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QSplitter::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QSplitter::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QSplitter::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QSplitter::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QSplitter::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QSplitter::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QSplitter::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QSplitter::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QSplitter::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QSplitter::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QSplitter::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QSplitter::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QSplitter::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QSplitter::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QSplitter::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QSplitter::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QSplitter::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QSplitter::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QSplitter::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QSplitter::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QSplitter::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QSplitter::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QSplitter::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QSplitter::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QSplitter::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QSplitter::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QSplitter::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QSplitter::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QSplitter::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QSplitter::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QSplitter::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QSplitter::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QSplitter::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QSplitter::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QSplitter::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QSplitter::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QSplitter::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QSplitter::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QSplitter::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QSplitter_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QSplitter::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QSplitter::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QSplitter_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QSplitter::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QSplitter::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QSplitter_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QSplitter::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QSplitter::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QSplitter_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QSplitter::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QSplitter::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QSplitter_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QSplitter::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QSplitter::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QSplitter_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QSplitter::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QSplitter::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QSplitter_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QSplitter::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QSplitter::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QSplitter_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QSplitter::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QSplitter::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSplitter_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QSplitter::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QSplitter::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QSplitter::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QSplitter::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSplitter_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QSplitter::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QSplitter::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSplitter_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QSplitter::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QSplitter::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSplitter_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QSplitter::disconnectNotify(*signal);

	}

};

QSplitter* QSplitter_new(QWidget* parent) {
	return new MiqtVirtualQSplitter(parent);
}

QSplitter* QSplitter_new2() {
	return new MiqtVirtualQSplitter();
}

QSplitter* QSplitter_new3(int param1) {
	return new MiqtVirtualQSplitter(static_cast<Qt::Orientation>(param1));
}

QSplitter* QSplitter_new4(int param1, QWidget* parent) {
	return new MiqtVirtualQSplitter(static_cast<Qt::Orientation>(param1), parent);
}

void QSplitter_virtbase(QSplitter* src, QFrame** outptr_QFrame) {
	*outptr_QFrame = static_cast<QFrame*>(src);
}

QMetaObject* QSplitter_MetaObject(const QSplitter* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSplitter_Metacast(QSplitter* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSplitter_Tr(const char* s) {
	QString _ret = QSplitter::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplitter_TrUtf8(const char* s) {
	QString _ret = QSplitter::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSplitter_AddWidget(QSplitter* self, QWidget* widget) {
	self->addWidget(widget);
}

void QSplitter_InsertWidget(QSplitter* self, int index, QWidget* widget) {
	self->insertWidget(static_cast<int>(index), widget);
}

QWidget* QSplitter_ReplaceWidget(QSplitter* self, int index, QWidget* widget) {
	return self->replaceWidget(static_cast<int>(index), widget);
}

void QSplitter_SetOrientation(QSplitter* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QSplitter_Orientation(const QSplitter* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QSplitter_SetChildrenCollapsible(QSplitter* self, bool childrenCollapsible) {
	self->setChildrenCollapsible(childrenCollapsible);
}

bool QSplitter_ChildrenCollapsible(const QSplitter* self) {
	return self->childrenCollapsible();
}

void QSplitter_SetCollapsible(QSplitter* self, int index, bool param2) {
	self->setCollapsible(static_cast<int>(index), param2);
}

bool QSplitter_IsCollapsible(const QSplitter* self, int index) {
	return self->isCollapsible(static_cast<int>(index));
}

void QSplitter_SetOpaqueResize(QSplitter* self) {
	self->setOpaqueResize();
}

bool QSplitter_OpaqueResize(const QSplitter* self) {
	return self->opaqueResize();
}

void QSplitter_Refresh(QSplitter* self) {
	self->refresh();
}

QSize* QSplitter_SizeHint(const QSplitter* self) {
	return new QSize(self->sizeHint());
}

QSize* QSplitter_MinimumSizeHint(const QSplitter* self) {
	return new QSize(self->minimumSizeHint());
}

struct miqt_array /* of int */  QSplitter_Sizes(const QSplitter* self) {
	QList<int> _ret = self->sizes();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QSplitter_SetSizes(QSplitter* self, struct miqt_array /* of int */  list) {
	QList<int> list_QList;
	list_QList.reserve(list.len);
	int* list_arr = static_cast<int*>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		list_QList.push_back(static_cast<int>(list_arr[i]));
	}
	self->setSizes(list_QList);
}

struct miqt_string QSplitter_SaveState(const QSplitter* self) {
	QByteArray _qb = self->saveState();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QSplitter_RestoreState(QSplitter* self, struct miqt_string state) {
	QByteArray state_QByteArray(state.data, state.len);
	return self->restoreState(state_QByteArray);
}

int QSplitter_HandleWidth(const QSplitter* self) {
	return self->handleWidth();
}

void QSplitter_SetHandleWidth(QSplitter* self, int handleWidth) {
	self->setHandleWidth(static_cast<int>(handleWidth));
}

int QSplitter_IndexOf(const QSplitter* self, QWidget* w) {
	return self->indexOf(w);
}

QWidget* QSplitter_Widget(const QSplitter* self, int index) {
	return self->widget(static_cast<int>(index));
}

int QSplitter_Count(const QSplitter* self) {
	return self->count();
}

void QSplitter_GetRange(const QSplitter* self, int index, int* param2, int* param3) {
	self->getRange(static_cast<int>(index), static_cast<int*>(param2), static_cast<int*>(param3));
}

QSplitterHandle* QSplitter_Handle(const QSplitter* self, int index) {
	return self->handle(static_cast<int>(index));
}

void QSplitter_SetStretchFactor(QSplitter* self, int index, int stretch) {
	self->setStretchFactor(static_cast<int>(index), static_cast<int>(stretch));
}

void QSplitter_SplitterMoved(QSplitter* self, int pos, int index) {
	self->splitterMoved(static_cast<int>(pos), static_cast<int>(index));
}

void QSplitter_connect_SplitterMoved(QSplitter* self, intptr_t slot) {
	MiqtVirtualQSplitter::connect(self, static_cast<void (QSplitter::*)(int, int)>(&QSplitter::splitterMoved), self, [=](int pos, int index) {
		int sigval1 = pos;
		int sigval2 = index;
		miqt_exec_callback_QSplitter_SplitterMoved(slot, sigval1, sigval2);
	});
}

struct miqt_string QSplitter_Tr2(const char* s, const char* c) {
	QString _ret = QSplitter::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplitter_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSplitter::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplitter_TrUtf82(const char* s, const char* c) {
	QString _ret = QSplitter::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplitter_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSplitter::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSplitter_SetOpaqueResize1(QSplitter* self, bool opaque) {
	self->setOpaqueResize(opaque);
}

bool QSplitter_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QSplitter_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQSplitter*)(self) )->virtualbase_SizeHint();
}

bool QSplitter_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QSplitter_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQSplitter*)(self) )->virtualbase_MinimumSizeHint();
}

bool QSplitter_override_virtual_CreateHandle(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CreateHandle = slot;
	return true;
}

QSplitterHandle* QSplitter_virtualbase_CreateHandle(void* self) {
	return ( (MiqtVirtualQSplitter*)(self) )->virtualbase_CreateHandle();
}

bool QSplitter_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QSplitter_virtualbase_ChildEvent(void* self, QChildEvent* param1) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_ChildEvent(param1);
}

bool QSplitter_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QSplitter_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQSplitter*)(self) )->virtualbase_Event(param1);
}

bool QSplitter_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QSplitter_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_ResizeEvent(param1);
}

bool QSplitter_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QSplitter_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QSplitter_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QSplitter_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_PaintEvent(param1);
}

bool QSplitter_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QSplitter_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQSplitter*)(self) )->virtualbase_DevType();
}

bool QSplitter_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QSplitter_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_SetVisible(visible);
}

bool QSplitter_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QSplitter_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQSplitter*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QSplitter_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QSplitter_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQSplitter*)(self) )->virtualbase_HasHeightForWidth();
}

bool QSplitter_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QSplitter_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQSplitter*)(self) )->virtualbase_PaintEngine();
}

bool QSplitter_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QSplitter_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_MousePressEvent(event);
}

bool QSplitter_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QSplitter_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QSplitter_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QSplitter_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QSplitter_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QSplitter_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QSplitter_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QSplitter_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_WheelEvent(event);
}

bool QSplitter_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QSplitter_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QSplitter_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QSplitter_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QSplitter_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QSplitter_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_FocusInEvent(event);
}

bool QSplitter_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QSplitter_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QSplitter_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QSplitter_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_EnterEvent(event);
}

bool QSplitter_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QSplitter_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_LeaveEvent(event);
}

bool QSplitter_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QSplitter_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_MoveEvent(event);
}

bool QSplitter_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QSplitter_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_CloseEvent(event);
}

bool QSplitter_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QSplitter_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QSplitter_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QSplitter_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_TabletEvent(event);
}

bool QSplitter_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QSplitter_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_ActionEvent(event);
}

bool QSplitter_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QSplitter_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QSplitter_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QSplitter_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QSplitter_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QSplitter_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QSplitter_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QSplitter_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_DropEvent(event);
}

bool QSplitter_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QSplitter_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_ShowEvent(event);
}

bool QSplitter_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QSplitter_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_HideEvent(event);
}

bool QSplitter_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QSplitter_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQSplitter*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QSplitter_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QSplitter_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQSplitter*)(self) )->virtualbase_Metric(param1);
}

bool QSplitter_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QSplitter_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQSplitter*)(self) )->virtualbase_InitPainter(painter);
}

bool QSplitter_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QSplitter_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQSplitter*)(self) )->virtualbase_Redirected(offset);
}

bool QSplitter_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QSplitter_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQSplitter*)(self) )->virtualbase_SharedPainter();
}

bool QSplitter_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QSplitter_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QSplitter_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QSplitter_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQSplitter*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QSplitter_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QSplitter_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQSplitter*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QSplitter_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QSplitter_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSplitter*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QSplitter_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QSplitter_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_TimerEvent(event);
}

bool QSplitter_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QSplitter_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_CustomEvent(event);
}

bool QSplitter_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QSplitter_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QSplitter_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QSplitter_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QSplitter_Delete(QSplitter* self) {
	delete self;
}

class MiqtVirtualQSplitterHandle final : public QSplitterHandle {
public:

	MiqtVirtualQSplitterHandle(Qt::Orientation o, QSplitter* parent): QSplitterHandle(o, parent) {};

	virtual ~MiqtVirtualQSplitterHandle() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QSplitterHandle::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSplitterHandle_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QSplitterHandle::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QSplitterHandle::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QSplitterHandle_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QSplitterHandle::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QSplitterHandle::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QSplitterHandle_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* param1) {

		QSplitterHandle::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__MousePressEvent == 0) {
			QSplitterHandle::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QSplitterHandle_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* param1) {

		QSplitterHandle::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__MouseReleaseEvent == 0) {
			QSplitterHandle::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QSplitterHandle_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* param1) {

		QSplitterHandle::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QSplitterHandle::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QSplitterHandle_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QSplitterHandle::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QSplitterHandle::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QSplitterHandle_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QSplitterHandle::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QSplitterHandle::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QSplitterHandle_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QSplitterHandle::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QSplitterHandle::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QSplitterHandle_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QSplitterHandle::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QSplitterHandle::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSplitterHandle_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QSplitterHandle::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QSplitterHandle::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QSplitterHandle_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QSplitterHandle::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QSplitterHandle::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QSplitterHandle_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QSplitterHandle::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QSplitterHandle::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QSplitterHandle_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QSplitterHandle::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QSplitterHandle::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QSplitterHandle::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QSplitterHandle::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QSplitterHandle::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QSplitterHandle::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QSplitterHandle::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QSplitterHandle::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QSplitterHandle::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QSplitterHandle::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QSplitterHandle::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QSplitterHandle::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QSplitterHandle::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QSplitterHandle::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QSplitterHandle::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QSplitterHandle::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QSplitterHandle::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QSplitterHandle::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QSplitterHandle::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QSplitterHandle::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QSplitterHandle::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QSplitterHandle::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QSplitterHandle::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QSplitterHandle::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QSplitterHandle::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QSplitterHandle::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QSplitterHandle::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QSplitterHandle::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QSplitterHandle::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QSplitterHandle::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QSplitterHandle::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QSplitterHandle::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QSplitterHandle::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QSplitterHandle::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QSplitterHandle::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QSplitterHandle::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QSplitterHandle::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QSplitterHandle::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QSplitterHandle::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QSplitterHandle::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QSplitterHandle_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QSplitterHandle::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QSplitterHandle::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QSplitterHandle_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QSplitterHandle::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QSplitterHandle::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QSplitterHandle_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QSplitterHandle::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QSplitterHandle::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QSplitterHandle_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QSplitterHandle::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QSplitterHandle::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QSplitterHandle_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QSplitterHandle::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QSplitterHandle::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QSplitterHandle_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QSplitterHandle::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QSplitterHandle::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QSplitterHandle_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QSplitterHandle::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QSplitterHandle::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QSplitterHandle_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QSplitterHandle::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QSplitterHandle::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QSplitterHandle_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QSplitterHandle::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QSplitterHandle::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSplitterHandle_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QSplitterHandle::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QSplitterHandle::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QSplitterHandle::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QSplitterHandle::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QSplitterHandle::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QSplitterHandle::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QSplitterHandle::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QSplitterHandle::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSplitterHandle_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QSplitterHandle::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QSplitterHandle::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSplitterHandle_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QSplitterHandle::disconnectNotify(*signal);

	}

};

QSplitterHandle* QSplitterHandle_new(int o, QSplitter* parent) {
	return new MiqtVirtualQSplitterHandle(static_cast<Qt::Orientation>(o), parent);
}

void QSplitterHandle_virtbase(QSplitterHandle* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QSplitterHandle_MetaObject(const QSplitterHandle* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSplitterHandle_Metacast(QSplitterHandle* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSplitterHandle_Tr(const char* s) {
	QString _ret = QSplitterHandle::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplitterHandle_TrUtf8(const char* s) {
	QString _ret = QSplitterHandle::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSplitterHandle_SetOrientation(QSplitterHandle* self, int o) {
	self->setOrientation(static_cast<Qt::Orientation>(o));
}

int QSplitterHandle_Orientation(const QSplitterHandle* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

bool QSplitterHandle_OpaqueResize(const QSplitterHandle* self) {
	return self->opaqueResize();
}

QSplitter* QSplitterHandle_Splitter(const QSplitterHandle* self) {
	return self->splitter();
}

QSize* QSplitterHandle_SizeHint(const QSplitterHandle* self) {
	return new QSize(self->sizeHint());
}

struct miqt_string QSplitterHandle_Tr2(const char* s, const char* c) {
	QString _ret = QSplitterHandle::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplitterHandle_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSplitterHandle::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplitterHandle_TrUtf82(const char* s, const char* c) {
	QString _ret = QSplitterHandle::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplitterHandle_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSplitterHandle::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSplitterHandle_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QSplitterHandle_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_SizeHint();
}

bool QSplitterHandle_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_PaintEvent(param1);
}

bool QSplitterHandle_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_MouseMoveEvent(param1);
}

bool QSplitterHandle_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_MousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_MousePressEvent(param1);
}

bool QSplitterHandle_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_MouseReleaseEvent(param1);
}

bool QSplitterHandle_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_ResizeEvent(param1);
}

bool QSplitterHandle_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QSplitterHandle_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_Event(param1);
}

bool QSplitterHandle_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QSplitterHandle_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_DevType();
}

bool QSplitterHandle_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QSplitterHandle_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_SetVisible(visible);
}

bool QSplitterHandle_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QSplitterHandle_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_MinimumSizeHint();
}

bool QSplitterHandle_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QSplitterHandle_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QSplitterHandle_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QSplitterHandle_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_HasHeightForWidth();
}

bool QSplitterHandle_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QSplitterHandle_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_PaintEngine();
}

bool QSplitterHandle_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QSplitterHandle_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_WheelEvent(event);
}

bool QSplitterHandle_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QSplitterHandle_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QSplitterHandle_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_FocusInEvent(event);
}

bool QSplitterHandle_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QSplitterHandle_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_EnterEvent(event);
}

bool QSplitterHandle_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_LeaveEvent(event);
}

bool QSplitterHandle_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_MoveEvent(event);
}

bool QSplitterHandle_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_CloseEvent(event);
}

bool QSplitterHandle_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QSplitterHandle_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_TabletEvent(event);
}

bool QSplitterHandle_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_ActionEvent(event);
}

bool QSplitterHandle_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QSplitterHandle_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QSplitterHandle_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QSplitterHandle_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_DropEvent(event);
}

bool QSplitterHandle_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_ShowEvent(event);
}

bool QSplitterHandle_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_HideEvent(event);
}

bool QSplitterHandle_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QSplitterHandle_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QSplitterHandle_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QSplitterHandle_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QSplitterHandle_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_Metric(param1);
}

bool QSplitterHandle_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QSplitterHandle_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_InitPainter(painter);
}

bool QSplitterHandle_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QSplitterHandle_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_Redirected(offset);
}

bool QSplitterHandle_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QSplitterHandle_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_SharedPainter();
}

bool QSplitterHandle_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QSplitterHandle_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QSplitterHandle_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QSplitterHandle_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QSplitterHandle_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QSplitterHandle_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QSplitterHandle_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QSplitterHandle_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_TimerEvent(event);
}

bool QSplitterHandle_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_ChildEvent(event);
}

bool QSplitterHandle_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_CustomEvent(event);
}

bool QSplitterHandle_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QSplitterHandle_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QSplitterHandle_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QSplitterHandle_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QSplitterHandle_Delete(QSplitterHandle* self) {
	delete self;
}

