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
#include <QPixmap>
#include <QPoint>
#include <QResizeEvent>
#include <QScreen>
#include <QShowEvent>
#include <QSize>
#include <QSplashScreen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qsplashscreen.h>
#include "gen_qsplashscreen.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSplashScreen_MessageChanged(intptr_t, struct miqt_string);
bool miqt_exec_callback_QSplashScreen_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSplashScreen_DrawContents(void*, intptr_t, QPainter*);
void miqt_exec_callback_QSplashScreen_MousePressEvent(void*, intptr_t, QMouseEvent*);
int miqt_exec_callback_QSplashScreen_DevType(void*, intptr_t);
void miqt_exec_callback_QSplashScreen_SetVisible(void*, intptr_t, bool);
QSize* miqt_exec_callback_QSplashScreen_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QSplashScreen_MinimumSizeHint(void*, intptr_t);
int miqt_exec_callback_QSplashScreen_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QSplashScreen_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QSplashScreen_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QSplashScreen_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplashScreen_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplashScreen_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplashScreen_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QSplashScreen_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSplashScreen_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSplashScreen_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSplashScreen_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSplashScreen_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QSplashScreen_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSplashScreen_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QSplashScreen_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QSplashScreen_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QSplashScreen_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QSplashScreen_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QSplashScreen_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QSplashScreen_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QSplashScreen_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QSplashScreen_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QSplashScreen_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QSplashScreen_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QSplashScreen_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QSplashScreen_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QSplashScreen_NativeEvent(void*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QSplashScreen_ChangeEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QSplashScreen_Metric(void*, intptr_t, int);
void miqt_exec_callback_QSplashScreen_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QSplashScreen_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QSplashScreen_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QSplashScreen_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QSplashScreen_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QSplashScreen_FocusNextPrevChild(void*, intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSplashScreen final : public QSplashScreen {
public:

	MiqtVirtualQSplashScreen(): QSplashScreen() {};
	MiqtVirtualQSplashScreen(QScreen* screen): QSplashScreen(screen) {};
	MiqtVirtualQSplashScreen(const QPixmap& pixmap): QSplashScreen(pixmap) {};
	MiqtVirtualQSplashScreen(const QPixmap& pixmap, Qt::WindowFlags f): QSplashScreen(pixmap, f) {};
	MiqtVirtualQSplashScreen(QScreen* screen, const QPixmap& pixmap): QSplashScreen(screen, pixmap) {};
	MiqtVirtualQSplashScreen(QScreen* screen, const QPixmap& pixmap, Qt::WindowFlags f): QSplashScreen(screen, pixmap, f) {};

	virtual ~MiqtVirtualQSplashScreen() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QSplashScreen::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QSplashScreen_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QSplashScreen::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawContents = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawContents(QPainter* painter) override {
		if (handle__DrawContents == 0) {
			QSplashScreen::drawContents(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QSplashScreen_DrawContents(this, handle__DrawContents, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawContents(QPainter* painter) {

		QSplashScreen::drawContents(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__MousePressEvent == 0) {
			QSplashScreen::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QSplashScreen_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* param1) {

		QSplashScreen::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QSplashScreen::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QSplashScreen_DevType(const_cast<MiqtVirtualQSplashScreen*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QSplashScreen::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QSplashScreen::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QSplashScreen_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QSplashScreen::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QSplashScreen::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSplashScreen_SizeHint(const_cast<MiqtVirtualQSplashScreen*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QSplashScreen::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QSplashScreen::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSplashScreen_MinimumSizeHint(const_cast<MiqtVirtualQSplashScreen*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QSplashScreen::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QSplashScreen::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QSplashScreen_HeightForWidth(const_cast<MiqtVirtualQSplashScreen*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QSplashScreen::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QSplashScreen::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QSplashScreen_HasHeightForWidth(const_cast<MiqtVirtualQSplashScreen*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QSplashScreen::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QSplashScreen::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QSplashScreen_PaintEngine(const_cast<MiqtVirtualQSplashScreen*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QSplashScreen::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QSplashScreen::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QSplashScreen::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QSplashScreen::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QSplashScreen::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QSplashScreen::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QSplashScreen::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QSplashScreen::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QSplashScreen::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QSplashScreen::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QSplashScreen::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QSplashScreen::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QSplashScreen::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QSplashScreen::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QSplashScreen::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QSplashScreen::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QSplashScreen::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QSplashScreen::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QSplashScreen::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QSplashScreen::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QSplashScreen::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QSplashScreen::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QSplashScreen::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QSplashScreen::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QSplashScreen::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QSplashScreen::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QSplashScreen::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QSplashScreen::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QSplashScreen::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QSplashScreen::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QSplashScreen::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QSplashScreen::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QSplashScreen::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QSplashScreen::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QSplashScreen::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QSplashScreen::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QSplashScreen::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QSplashScreen::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QSplashScreen::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QSplashScreen::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QSplashScreen::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QSplashScreen::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QSplashScreen::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QSplashScreen::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QSplashScreen::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QSplashScreen::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QSplashScreen_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QSplashScreen::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QSplashScreen::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QSplashScreen_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QSplashScreen::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QSplashScreen::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QSplashScreen_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QSplashScreen::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QSplashScreen::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QSplashScreen_Metric(const_cast<MiqtVirtualQSplashScreen*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QSplashScreen::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QSplashScreen::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QSplashScreen_InitPainter(const_cast<MiqtVirtualQSplashScreen*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QSplashScreen::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QSplashScreen::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QSplashScreen_Redirected(const_cast<MiqtVirtualQSplashScreen*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QSplashScreen::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QSplashScreen::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QSplashScreen_SharedPainter(const_cast<MiqtVirtualQSplashScreen*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QSplashScreen::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QSplashScreen::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QSplashScreen_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QSplashScreen::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QSplashScreen::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QSplashScreen_InputMethodQuery(const_cast<MiqtVirtualQSplashScreen*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QSplashScreen::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QSplashScreen::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QSplashScreen_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QSplashScreen::focusNextPrevChild(next);

	}

};

QSplashScreen* QSplashScreen_new() {
	return new MiqtVirtualQSplashScreen();
}

QSplashScreen* QSplashScreen_new2(QScreen* screen) {
	return new MiqtVirtualQSplashScreen(screen);
}

QSplashScreen* QSplashScreen_new3(QPixmap* pixmap) {
	return new MiqtVirtualQSplashScreen(*pixmap);
}

QSplashScreen* QSplashScreen_new4(QPixmap* pixmap, int f) {
	return new MiqtVirtualQSplashScreen(*pixmap, static_cast<Qt::WindowFlags>(f));
}

QSplashScreen* QSplashScreen_new5(QScreen* screen, QPixmap* pixmap) {
	return new MiqtVirtualQSplashScreen(screen, *pixmap);
}

QSplashScreen* QSplashScreen_new6(QScreen* screen, QPixmap* pixmap, int f) {
	return new MiqtVirtualQSplashScreen(screen, *pixmap, static_cast<Qt::WindowFlags>(f));
}

void QSplashScreen_virtbase(QSplashScreen* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QSplashScreen_MetaObject(const QSplashScreen* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSplashScreen_Metacast(QSplashScreen* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSplashScreen_Tr(const char* s) {
	QString _ret = QSplashScreen::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSplashScreen_SetPixmap(QSplashScreen* self, QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

QPixmap* QSplashScreen_Pixmap(const QSplashScreen* self) {
	return new QPixmap(self->pixmap());
}

void QSplashScreen_Finish(QSplashScreen* self, QWidget* w) {
	self->finish(w);
}

void QSplashScreen_Repaint(QSplashScreen* self) {
	self->repaint();
}

struct miqt_string QSplashScreen_Message(const QSplashScreen* self) {
	QString _ret = self->message();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSplashScreen_ShowMessage(QSplashScreen* self, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->showMessage(message_QString);
}

void QSplashScreen_ClearMessage(QSplashScreen* self) {
	self->clearMessage();
}

void QSplashScreen_MessageChanged(QSplashScreen* self, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->messageChanged(message_QString);
}

void QSplashScreen_connect_MessageChanged(QSplashScreen* self, intptr_t slot) {
	MiqtVirtualQSplashScreen::connect(self, static_cast<void (QSplashScreen::*)(const QString&)>(&QSplashScreen::messageChanged), self, [=](const QString& message) {
		const QString message_ret = message;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray message_b = message_ret.toUtf8();
		struct miqt_string message_ms;
		message_ms.len = message_b.length();
		message_ms.data = static_cast<char*>(malloc(message_ms.len));
		memcpy(message_ms.data, message_b.data(), message_ms.len);
		struct miqt_string sigval1 = message_ms;
		miqt_exec_callback_QSplashScreen_MessageChanged(slot, sigval1);
	});
}

struct miqt_string QSplashScreen_Tr2(const char* s, const char* c) {
	QString _ret = QSplashScreen::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplashScreen_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSplashScreen::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSplashScreen_ShowMessage2(QSplashScreen* self, struct miqt_string message, int alignment) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->showMessage(message_QString, static_cast<int>(alignment));
}

void QSplashScreen_ShowMessage3(QSplashScreen* self, struct miqt_string message, int alignment, QColor* color) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->showMessage(message_QString, static_cast<int>(alignment), *color);
}

bool QSplashScreen_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QSplashScreen_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_Event(e);
}

bool QSplashScreen_override_virtual_DrawContents(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DrawContents = slot;
	return true;
}

void QSplashScreen_virtualbase_DrawContents(void* self, QPainter* painter) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_DrawContents(painter);
}

bool QSplashScreen_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_MousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_MousePressEvent(param1);
}

bool QSplashScreen_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QSplashScreen_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQSplashScreen*)(self) )->virtualbase_DevType();
}

bool QSplashScreen_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QSplashScreen_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_SetVisible(visible);
}

bool QSplashScreen_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QSplashScreen_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQSplashScreen*)(self) )->virtualbase_SizeHint();
}

bool QSplashScreen_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QSplashScreen_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQSplashScreen*)(self) )->virtualbase_MinimumSizeHint();
}

bool QSplashScreen_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QSplashScreen_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQSplashScreen*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QSplashScreen_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QSplashScreen_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQSplashScreen*)(self) )->virtualbase_HasHeightForWidth();
}

bool QSplashScreen_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QSplashScreen_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQSplashScreen*)(self) )->virtualbase_PaintEngine();
}

bool QSplashScreen_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QSplashScreen_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QSplashScreen_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QSplashScreen_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_WheelEvent(event);
}

bool QSplashScreen_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QSplashScreen_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QSplashScreen_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_FocusInEvent(event);
}

bool QSplashScreen_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QSplashScreen_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_EnterEvent(event);
}

bool QSplashScreen_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_LeaveEvent(event);
}

bool QSplashScreen_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_PaintEvent(event);
}

bool QSplashScreen_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_MoveEvent(event);
}

bool QSplashScreen_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_ResizeEvent(event);
}

bool QSplashScreen_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_CloseEvent(event);
}

bool QSplashScreen_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QSplashScreen_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_TabletEvent(event);
}

bool QSplashScreen_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_ActionEvent(event);
}

bool QSplashScreen_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QSplashScreen_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QSplashScreen_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QSplashScreen_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_DropEvent(event);
}

bool QSplashScreen_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_ShowEvent(event);
}

bool QSplashScreen_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_HideEvent(event);
}

bool QSplashScreen_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QSplashScreen_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QSplashScreen_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QSplashScreen_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QSplashScreen_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQSplashScreen*)(self) )->virtualbase_Metric(param1);
}

bool QSplashScreen_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QSplashScreen_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQSplashScreen*)(self) )->virtualbase_InitPainter(painter);
}

bool QSplashScreen_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QSplashScreen_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQSplashScreen*)(self) )->virtualbase_Redirected(offset);
}

bool QSplashScreen_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QSplashScreen_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQSplashScreen*)(self) )->virtualbase_SharedPainter();
}

bool QSplashScreen_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QSplashScreen_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QSplashScreen_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQSplashScreen*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QSplashScreen_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QSplashScreen_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQSplashScreen*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QSplashScreen_Delete(QSplashScreen* self) {
	delete self;
}

