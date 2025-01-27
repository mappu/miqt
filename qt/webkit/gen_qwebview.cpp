#include <QAction>
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
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QNetworkRequest>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QPrinter>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWebHistory>
#include <QWebPage>
#include <QWebSettings>
#include <QWebView>
#include <QWheelEvent>
#include <QWidget>
#include <qwebview.h>
#include "gen_qwebview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWebView_LoadStarted(intptr_t);
void miqt_exec_callback_QWebView_LoadProgress(intptr_t, int);
void miqt_exec_callback_QWebView_LoadFinished(intptr_t, bool);
void miqt_exec_callback_QWebView_TitleChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QWebView_StatusBarMessage(intptr_t, struct miqt_string);
void miqt_exec_callback_QWebView_LinkClicked(intptr_t, QUrl*);
void miqt_exec_callback_QWebView_SelectionChanged(intptr_t);
void miqt_exec_callback_QWebView_IconChanged(intptr_t);
void miqt_exec_callback_QWebView_UrlChanged(intptr_t, QUrl*);
QVariant* miqt_exec_callback_QWebView_InputMethodQuery(const QWebView*, intptr_t, int);
QSize* miqt_exec_callback_QWebView_SizeHint(const QWebView*, intptr_t);
bool miqt_exec_callback_QWebView_Event(QWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QWebView_ResizeEvent(QWebView*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QWebView_PaintEvent(QWebView*, intptr_t, QPaintEvent*);
QWebView* miqt_exec_callback_QWebView_CreateWindow(QWebView*, intptr_t, int);
void miqt_exec_callback_QWebView_ChangeEvent(QWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QWebView_MouseMoveEvent(QWebView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebView_MousePressEvent(QWebView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebView_MouseDoubleClickEvent(QWebView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebView_MouseReleaseEvent(QWebView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebView_ContextMenuEvent(QWebView*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QWebView_WheelEvent(QWebView*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QWebView_KeyPressEvent(QWebView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWebView_KeyReleaseEvent(QWebView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWebView_DragEnterEvent(QWebView*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QWebView_DragLeaveEvent(QWebView*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QWebView_DragMoveEvent(QWebView*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QWebView_DropEvent(QWebView*, intptr_t, QDropEvent*);
void miqt_exec_callback_QWebView_FocusInEvent(QWebView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWebView_FocusOutEvent(QWebView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWebView_InputMethodEvent(QWebView*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QWebView_FocusNextPrevChild(QWebView*, intptr_t, bool);
int miqt_exec_callback_QWebView_DevType(const QWebView*, intptr_t);
void miqt_exec_callback_QWebView_SetVisible(QWebView*, intptr_t, bool);
QSize* miqt_exec_callback_QWebView_MinimumSizeHint(const QWebView*, intptr_t);
int miqt_exec_callback_QWebView_HeightForWidth(const QWebView*, intptr_t, int);
bool miqt_exec_callback_QWebView_HasHeightForWidth(const QWebView*, intptr_t);
QPaintEngine* miqt_exec_callback_QWebView_PaintEngine(const QWebView*, intptr_t);
void miqt_exec_callback_QWebView_EnterEvent(QWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QWebView_LeaveEvent(QWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QWebView_MoveEvent(QWebView*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QWebView_CloseEvent(QWebView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QWebView_TabletEvent(QWebView*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QWebView_ActionEvent(QWebView*, intptr_t, QActionEvent*);
void miqt_exec_callback_QWebView_ShowEvent(QWebView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QWebView_HideEvent(QWebView*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QWebView_NativeEvent(QWebView*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QWebView_Metric(const QWebView*, intptr_t, int);
void miqt_exec_callback_QWebView_InitPainter(const QWebView*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QWebView_Redirected(const QWebView*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QWebView_SharedPainter(const QWebView*, intptr_t);
bool miqt_exec_callback_QWebView_EventFilter(QWebView*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebView_TimerEvent(QWebView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebView_ChildEvent(QWebView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebView_CustomEvent(QWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QWebView_ConnectNotify(QWebView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebView_DisconnectNotify(QWebView*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebView final : public QWebView {
public:

	MiqtVirtualQWebView(QWidget* parent): QWebView(parent) {};
	MiqtVirtualQWebView(): QWebView() {};

	virtual ~MiqtVirtualQWebView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
		if (handle__InputMethodQuery == 0) {
			return QWebView::inputMethodQuery(property);
		}
		
		Qt::InputMethodQuery property_ret = property;
		int sigval1 = static_cast<int>(property_ret);

		QVariant* callback_return_value = miqt_exec_callback_QWebView_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int property) const {

		return new QVariant(QWebView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QWebView::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWebView_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QWebView::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QWebView::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QWebView_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QWebView::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QWebView::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QWebView_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QWebView::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QWebView::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QWebView_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QWebView::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CreateWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual QWebView* createWindow(QWebPage::WebWindowType typeVal) override {
		if (handle__CreateWindow == 0) {
			return QWebView::createWindow(typeVal);
		}
		
		QWebPage::WebWindowType typeVal_ret = typeVal;
		int sigval1 = static_cast<int>(typeVal_ret);

		QWebView* callback_return_value = miqt_exec_callback_QWebView_CreateWindow(this, handle__CreateWindow, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWebView* virtualbase_CreateWindow(int typeVal) {

		return QWebView::createWindow(static_cast<QWebPage::WebWindowType>(typeVal));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QWebView::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QWebView_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QWebView::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QWebView::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QWebView_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* param1) {

		QWebView::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__MousePressEvent == 0) {
			QWebView::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QWebView_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* param1) {

		QWebView::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QWebView::mouseDoubleClickEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QWebView_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* param1) {

		QWebView::mouseDoubleClickEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__MouseReleaseEvent == 0) {
			QWebView::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QWebView_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* param1) {

		QWebView::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QWebView::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QWebView_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QWebView::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__WheelEvent == 0) {
			QWebView::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QWebView_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* param1) {

		QWebView::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QWebView::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QWebView_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QWebView::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* param1) override {
		if (handle__KeyReleaseEvent == 0) {
			QWebView::keyReleaseEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QWebView_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* param1) {

		QWebView::keyReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* param1) override {
		if (handle__DragEnterEvent == 0) {
			QWebView::dragEnterEvent(param1);
			return;
		}
		
		QDragEnterEvent* sigval1 = param1;

		miqt_exec_callback_QWebView_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* param1) {

		QWebView::dragEnterEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
		if (handle__DragLeaveEvent == 0) {
			QWebView::dragLeaveEvent(param1);
			return;
		}
		
		QDragLeaveEvent* sigval1 = param1;

		miqt_exec_callback_QWebView_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* param1) {

		QWebView::dragLeaveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* param1) override {
		if (handle__DragMoveEvent == 0) {
			QWebView::dragMoveEvent(param1);
			return;
		}
		
		QDragMoveEvent* sigval1 = param1;

		miqt_exec_callback_QWebView_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* param1) {

		QWebView::dragMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* param1) override {
		if (handle__DropEvent == 0) {
			QWebView::dropEvent(param1);
			return;
		}
		
		QDropEvent* sigval1 = param1;

		miqt_exec_callback_QWebView_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* param1) {

		QWebView::dropEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (handle__FocusInEvent == 0) {
			QWebView::focusInEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QWebView_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* param1) {

		QWebView::focusInEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (handle__FocusOutEvent == 0) {
			QWebView::focusOutEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QWebView_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* param1) {

		QWebView::focusOutEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QWebView::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QWebView_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QWebView::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QWebView::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QWebView_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QWebView::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QWebView::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QWebView_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QWebView::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QWebView::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QWebView_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QWebView::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QWebView::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWebView_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QWebView::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QWebView::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QWebView_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QWebView::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QWebView::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QWebView_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QWebView::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QWebView::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QWebView_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QWebView::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QWebView::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebView_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QWebView::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QWebView::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebView_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QWebView::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QWebView::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QWebView_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QWebView::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QWebView::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QWebView_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QWebView::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QWebView::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QWebView_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QWebView::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QWebView::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QWebView_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QWebView::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QWebView::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QWebView_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QWebView::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QWebView::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QWebView_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QWebView::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QWebView::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QWebView_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QWebView::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QWebView::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QWebView_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QWebView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QWebView::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QWebView_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QWebView::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QWebView::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QWebView_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QWebView::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QWebView::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QWebView_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QWebView::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QWebView::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWebView_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QWebView::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QWebView::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWebView_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QWebView::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QWebView::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWebView_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QWebView::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QWebView::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebView_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QWebView::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QWebView::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebView_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QWebView::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QWebView::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebView_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QWebView::disconnectNotify(*signal);

	}

};

QWebView* QWebView_new(QWidget* parent) {
	return new MiqtVirtualQWebView(parent);
}

QWebView* QWebView_new2() {
	return new MiqtVirtualQWebView();
}

void QWebView_virtbase(QWebView* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QWebView_MetaObject(const QWebView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebView_Metacast(QWebView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebView_Tr(const char* s) {
	QString _ret = QWebView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebView_TrUtf8(const char* s) {
	QString _ret = QWebView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebPage* QWebView_Page(const QWebView* self) {
	return self->page();
}

void QWebView_SetPage(QWebView* self, QWebPage* page) {
	self->setPage(page);
}

void QWebView_Load(QWebView* self, QUrl* url) {
	self->load(*url);
}

void QWebView_LoadWithRequest(QWebView* self, QNetworkRequest* request) {
	self->load(*request);
}

void QWebView_SetHtml(QWebView* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString);
}

void QWebView_SetContent(QWebView* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	self->setContent(data_QByteArray);
}

QWebHistory* QWebView_History(const QWebView* self) {
	return self->history();
}

QWebSettings* QWebView_Settings(const QWebView* self) {
	return self->settings();
}

struct miqt_string QWebView_Title(const QWebView* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebView_SetUrl(QWebView* self, QUrl* url) {
	self->setUrl(*url);
}

QUrl* QWebView_Url(const QWebView* self) {
	return new QUrl(self->url());
}

QIcon* QWebView_Icon(const QWebView* self) {
	return new QIcon(self->icon());
}

bool QWebView_HasSelection(const QWebView* self) {
	return self->hasSelection();
}

struct miqt_string QWebView_SelectedText(const QWebView* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebView_SelectedHtml(const QWebView* self) {
	QString _ret = self->selectedHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QWebView_PageAction(const QWebView* self, int action) {
	return self->pageAction(static_cast<QWebPage::WebAction>(action));
}

void QWebView_TriggerPageAction(QWebView* self, int action) {
	self->triggerPageAction(static_cast<QWebPage::WebAction>(action));
}

bool QWebView_IsModified(const QWebView* self) {
	return self->isModified();
}

QVariant* QWebView_InputMethodQuery(const QWebView* self, int property) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

QSize* QWebView_SizeHint(const QWebView* self) {
	return new QSize(self->sizeHint());
}

double QWebView_ZoomFactor(const QWebView* self) {
	qreal _ret = self->zoomFactor();
	return static_cast<double>(_ret);
}

void QWebView_SetZoomFactor(QWebView* self, double factor) {
	self->setZoomFactor(static_cast<qreal>(factor));
}

void QWebView_SetTextSizeMultiplier(QWebView* self, double factor) {
	self->setTextSizeMultiplier(static_cast<qreal>(factor));
}

double QWebView_TextSizeMultiplier(const QWebView* self) {
	qreal _ret = self->textSizeMultiplier();
	return static_cast<double>(_ret);
}

int QWebView_RenderHints(const QWebView* self) {
	QPainter::RenderHints _ret = self->renderHints();
	return static_cast<int>(_ret);
}

void QWebView_SetRenderHints(QWebView* self, int hints) {
	self->setRenderHints(static_cast<QPainter::RenderHints>(hints));
}

void QWebView_SetRenderHint(QWebView* self, int hint) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(hint));
}

bool QWebView_FindText(QWebView* self, struct miqt_string subString) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return self->findText(subString_QString);
}

bool QWebView_Event(QWebView* self, QEvent* param1) {
	return self->event(param1);
}

void QWebView_Stop(QWebView* self) {
	self->stop();
}

void QWebView_Back(QWebView* self) {
	self->back();
}

void QWebView_Forward(QWebView* self) {
	self->forward();
}

void QWebView_Reload(QWebView* self) {
	self->reload();
}

void QWebView_Print(const QWebView* self, QPrinter* param1) {
	self->print(param1);
}

void QWebView_LoadStarted(QWebView* self) {
	self->loadStarted();
}

void QWebView_connect_LoadStarted(QWebView* self, intptr_t slot) {
	MiqtVirtualQWebView::connect(self, static_cast<void (QWebView::*)()>(&QWebView::loadStarted), self, [=]() {
		miqt_exec_callback_QWebView_LoadStarted(slot);
	});
}

void QWebView_LoadProgress(QWebView* self, int progress) {
	self->loadProgress(static_cast<int>(progress));
}

void QWebView_connect_LoadProgress(QWebView* self, intptr_t slot) {
	MiqtVirtualQWebView::connect(self, static_cast<void (QWebView::*)(int)>(&QWebView::loadProgress), self, [=](int progress) {
		int sigval1 = progress;
		miqt_exec_callback_QWebView_LoadProgress(slot, sigval1);
	});
}

void QWebView_LoadFinished(QWebView* self, bool param1) {
	self->loadFinished(param1);
}

void QWebView_connect_LoadFinished(QWebView* self, intptr_t slot) {
	MiqtVirtualQWebView::connect(self, static_cast<void (QWebView::*)(bool)>(&QWebView::loadFinished), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QWebView_LoadFinished(slot, sigval1);
	});
}

void QWebView_TitleChanged(QWebView* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->titleChanged(title_QString);
}

void QWebView_connect_TitleChanged(QWebView* self, intptr_t slot) {
	MiqtVirtualQWebView::connect(self, static_cast<void (QWebView::*)(const QString&)>(&QWebView::titleChanged), self, [=](const QString& title) {
		const QString title_ret = title;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray title_b = title_ret.toUtf8();
		struct miqt_string title_ms;
		title_ms.len = title_b.length();
		title_ms.data = static_cast<char*>(malloc(title_ms.len));
		memcpy(title_ms.data, title_b.data(), title_ms.len);
		struct miqt_string sigval1 = title_ms;
		miqt_exec_callback_QWebView_TitleChanged(slot, sigval1);
	});
}

void QWebView_StatusBarMessage(QWebView* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->statusBarMessage(text_QString);
}

void QWebView_connect_StatusBarMessage(QWebView* self, intptr_t slot) {
	MiqtVirtualQWebView::connect(self, static_cast<void (QWebView::*)(const QString&)>(&QWebView::statusBarMessage), self, [=](const QString& text) {
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		miqt_exec_callback_QWebView_StatusBarMessage(slot, sigval1);
	});
}

void QWebView_LinkClicked(QWebView* self, QUrl* param1) {
	self->linkClicked(*param1);
}

void QWebView_connect_LinkClicked(QWebView* self, intptr_t slot) {
	MiqtVirtualQWebView::connect(self, static_cast<void (QWebView::*)(const QUrl&)>(&QWebView::linkClicked), self, [=](const QUrl& param1) {
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QWebView_LinkClicked(slot, sigval1);
	});
}

void QWebView_SelectionChanged(QWebView* self) {
	self->selectionChanged();
}

void QWebView_connect_SelectionChanged(QWebView* self, intptr_t slot) {
	MiqtVirtualQWebView::connect(self, static_cast<void (QWebView::*)()>(&QWebView::selectionChanged), self, [=]() {
		miqt_exec_callback_QWebView_SelectionChanged(slot);
	});
}

void QWebView_IconChanged(QWebView* self) {
	self->iconChanged();
}

void QWebView_connect_IconChanged(QWebView* self, intptr_t slot) {
	MiqtVirtualQWebView::connect(self, static_cast<void (QWebView::*)()>(&QWebView::iconChanged), self, [=]() {
		miqt_exec_callback_QWebView_IconChanged(slot);
	});
}

void QWebView_UrlChanged(QWebView* self, QUrl* param1) {
	self->urlChanged(*param1);
}

void QWebView_connect_UrlChanged(QWebView* self, intptr_t slot) {
	MiqtVirtualQWebView::connect(self, static_cast<void (QWebView::*)(const QUrl&)>(&QWebView::urlChanged), self, [=](const QUrl& param1) {
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QWebView_UrlChanged(slot, sigval1);
	});
}

struct miqt_string QWebView_Tr2(const char* s, const char* c) {
	QString _ret = QWebView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebView_TrUtf82(const char* s, const char* c) {
	QString _ret = QWebView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebView_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebView_Load2(QWebView* self, QNetworkRequest* request, int operation) {
	self->load(*request, static_cast<QNetworkAccessManager::Operation>(operation));
}

void QWebView_Load3(QWebView* self, QNetworkRequest* request, int operation, struct miqt_string body) {
	QByteArray body_QByteArray(body.data, body.len);
	self->load(*request, static_cast<QNetworkAccessManager::Operation>(operation), body_QByteArray);
}

void QWebView_SetHtml2(QWebView* self, struct miqt_string html, QUrl* baseUrl) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString, *baseUrl);
}

void QWebView_SetContent2(QWebView* self, struct miqt_string data, struct miqt_string mimeType) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString);
}

void QWebView_SetContent3(QWebView* self, struct miqt_string data, struct miqt_string mimeType, QUrl* baseUrl) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString, *baseUrl);
}

void QWebView_TriggerPageAction2(QWebView* self, int action, bool checked) {
	self->triggerPageAction(static_cast<QWebPage::WebAction>(action), checked);
}

void QWebView_SetRenderHint2(QWebView* self, int hint, bool enabled) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(hint), enabled);
}

bool QWebView_FindText2(QWebView* self, struct miqt_string subString, int options) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return self->findText(subString_QString, static_cast<QWebPage::FindFlags>(options));
}

bool QWebView_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QWebView_virtualbase_InputMethodQuery(const void* self, int property) {
	return ( (const MiqtVirtualQWebView*)(self) )->virtualbase_InputMethodQuery(property);
}

bool QWebView_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QWebView_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQWebView*)(self) )->virtualbase_SizeHint();
}

bool QWebView_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QWebView_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQWebView*)(self) )->virtualbase_Event(param1);
}

bool QWebView_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QWebView_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_ResizeEvent(param1);
}

bool QWebView_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QWebView_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_PaintEvent(param1);
}

bool QWebView_override_virtual_CreateWindow(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CreateWindow = slot;
	return true;
}

QWebView* QWebView_virtualbase_CreateWindow(void* self, int typeVal) {
	return ( (MiqtVirtualQWebView*)(self) )->virtualbase_CreateWindow(typeVal);
}

bool QWebView_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QWebView_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QWebView_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QWebView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_MouseMoveEvent(param1);
}

bool QWebView_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QWebView_virtualbase_MousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_MousePressEvent(param1);
}

bool QWebView_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QWebView_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_MouseDoubleClickEvent(param1);
}

bool QWebView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QWebView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_MouseReleaseEvent(param1);
}

bool QWebView_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QWebView_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QWebView_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QWebView_virtualbase_WheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_WheelEvent(param1);
}

bool QWebView_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QWebView_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QWebView_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QWebView_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_KeyReleaseEvent(param1);
}

bool QWebView_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QWebView_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* param1) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_DragEnterEvent(param1);
}

bool QWebView_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QWebView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* param1) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_DragLeaveEvent(param1);
}

bool QWebView_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QWebView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* param1) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_DragMoveEvent(param1);
}

bool QWebView_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QWebView_virtualbase_DropEvent(void* self, QDropEvent* param1) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_DropEvent(param1);
}

bool QWebView_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QWebView_virtualbase_FocusInEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_FocusInEvent(param1);
}

bool QWebView_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QWebView_virtualbase_FocusOutEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_FocusOutEvent(param1);
}

bool QWebView_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QWebView_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QWebView_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QWebView_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQWebView*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QWebView_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QWebView_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQWebView*)(self) )->virtualbase_DevType();
}

bool QWebView_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QWebView_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_SetVisible(visible);
}

bool QWebView_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QWebView_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQWebView*)(self) )->virtualbase_MinimumSizeHint();
}

bool QWebView_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QWebView_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQWebView*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QWebView_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QWebView_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQWebView*)(self) )->virtualbase_HasHeightForWidth();
}

bool QWebView_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QWebView_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQWebView*)(self) )->virtualbase_PaintEngine();
}

bool QWebView_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QWebView_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_EnterEvent(event);
}

bool QWebView_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QWebView_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_LeaveEvent(event);
}

bool QWebView_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QWebView_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_MoveEvent(event);
}

bool QWebView_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QWebView_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_CloseEvent(event);
}

bool QWebView_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QWebView_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_TabletEvent(event);
}

bool QWebView_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QWebView_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_ActionEvent(event);
}

bool QWebView_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QWebView_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_ShowEvent(event);
}

bool QWebView_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QWebView_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_HideEvent(event);
}

bool QWebView_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QWebView_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQWebView*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QWebView_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QWebView_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQWebView*)(self) )->virtualbase_Metric(param1);
}

bool QWebView_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QWebView_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQWebView*)(self) )->virtualbase_InitPainter(painter);
}

bool QWebView_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QWebView_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQWebView*)(self) )->virtualbase_Redirected(offset);
}

bool QWebView_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QWebView_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQWebView*)(self) )->virtualbase_SharedPainter();
}

bool QWebView_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QWebView_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWebView*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QWebView_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QWebView_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_TimerEvent(event);
}

bool QWebView_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QWebView_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_ChildEvent(event);
}

bool QWebView_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QWebView_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_CustomEvent(event);
}

bool QWebView_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QWebView_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QWebView_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebView* self_cast = dynamic_cast<MiqtVirtualQWebView*>( (QWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QWebView_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebView*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QWebView_Delete(QWebView* self) {
	delete self;
}

