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
#include <QList>
#include <QMenu>
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
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionMenuItem>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qmenu.h>
#include "gen_qmenu.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMenu_aboutToShow(intptr_t);
void miqt_exec_callback_QMenu_aboutToHide(intptr_t);
void miqt_exec_callback_QMenu_triggered(intptr_t, QAction*);
void miqt_exec_callback_QMenu_hovered(intptr_t, QAction*);
QSize* miqt_exec_callback_QMenu_sizeHint(const QMenu*, intptr_t);
void miqt_exec_callback_QMenu_changeEvent(QMenu*, intptr_t, QEvent*);
void miqt_exec_callback_QMenu_keyPressEvent(QMenu*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QMenu_mouseReleaseEvent(QMenu*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMenu_mousePressEvent(QMenu*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMenu_mouseMoveEvent(QMenu*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMenu_wheelEvent(QMenu*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QMenu_enterEvent(QMenu*, intptr_t, QEvent*);
void miqt_exec_callback_QMenu_leaveEvent(QMenu*, intptr_t, QEvent*);
void miqt_exec_callback_QMenu_hideEvent(QMenu*, intptr_t, QHideEvent*);
void miqt_exec_callback_QMenu_paintEvent(QMenu*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QMenu_actionEvent(QMenu*, intptr_t, QActionEvent*);
void miqt_exec_callback_QMenu_timerEvent(QMenu*, intptr_t, QTimerEvent*);
bool miqt_exec_callback_QMenu_event(QMenu*, intptr_t, QEvent*);
bool miqt_exec_callback_QMenu_focusNextPrevChild(QMenu*, intptr_t, bool);
int miqt_exec_callback_QMenu_devType(const QMenu*, intptr_t);
void miqt_exec_callback_QMenu_setVisible(QMenu*, intptr_t, bool);
QSize* miqt_exec_callback_QMenu_minimumSizeHint(const QMenu*, intptr_t);
int miqt_exec_callback_QMenu_heightForWidth(const QMenu*, intptr_t, int);
bool miqt_exec_callback_QMenu_hasHeightForWidth(const QMenu*, intptr_t);
QPaintEngine* miqt_exec_callback_QMenu_paintEngine(const QMenu*, intptr_t);
void miqt_exec_callback_QMenu_mouseDoubleClickEvent(QMenu*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMenu_keyReleaseEvent(QMenu*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QMenu_focusInEvent(QMenu*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QMenu_focusOutEvent(QMenu*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QMenu_moveEvent(QMenu*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QMenu_resizeEvent(QMenu*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QMenu_closeEvent(QMenu*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QMenu_contextMenuEvent(QMenu*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QMenu_tabletEvent(QMenu*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QMenu_dragEnterEvent(QMenu*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QMenu_dragMoveEvent(QMenu*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QMenu_dragLeaveEvent(QMenu*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QMenu_dropEvent(QMenu*, intptr_t, QDropEvent*);
void miqt_exec_callback_QMenu_showEvent(QMenu*, intptr_t, QShowEvent*);
bool miqt_exec_callback_QMenu_nativeEvent(QMenu*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QMenu_metric(const QMenu*, intptr_t, int);
void miqt_exec_callback_QMenu_initPainter(const QMenu*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QMenu_redirected(const QMenu*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QMenu_sharedPainter(const QMenu*, intptr_t);
void miqt_exec_callback_QMenu_inputMethodEvent(QMenu*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QMenu_inputMethodQuery(const QMenu*, intptr_t, int);
bool miqt_exec_callback_QMenu_eventFilter(QMenu*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMenu_childEvent(QMenu*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMenu_customEvent(QMenu*, intptr_t, QEvent*);
void miqt_exec_callback_QMenu_connectNotify(QMenu*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMenu_disconnectNotify(QMenu*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMenu final : public QMenu {
public:

	MiqtVirtualQMenu(QWidget* parent): QMenu(parent) {};
	MiqtVirtualQMenu(): QMenu() {};
	MiqtVirtualQMenu(const QString& title): QMenu(title) {};
	MiqtVirtualQMenu(const QString& title, QWidget* parent): QMenu(title, parent) {};

	virtual ~MiqtVirtualQMenu() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QMenu::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMenu_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QMenu::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QMenu::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QMenu::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QMenu::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QMenu::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__mouseReleaseEvent == 0) {
			QMenu::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* param1) {

		QMenu::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__mousePressEvent == 0) {
			QMenu::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* param1) {

		QMenu::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__mouseMoveEvent == 0) {
			QMenu::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* param1) {

		QMenu::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__wheelEvent == 0) {
			QMenu::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* param1) {

		QMenu::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* param1) override {
		if (handle__enterEvent == 0) {
			QMenu::enterEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* param1) {

		QMenu::enterEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* param1) override {
		if (handle__leaveEvent == 0) {
			QMenu::leaveEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* param1) {

		QMenu::leaveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* param1) override {
		if (handle__hideEvent == 0) {
			QMenu::hideEvent(param1);
			return;
		}
		
		QHideEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* param1) {

		QMenu::hideEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QMenu::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* param1) {

		QMenu::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* param1) override {
		if (handle__actionEvent == 0) {
			QMenu::actionEvent(param1);
			return;
		}
		
		QActionEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* param1) {

		QMenu::actionEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__timerEvent == 0) {
			QMenu::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* param1) {

		QMenu::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QMenu::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QMenu_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* param1) {

		return QMenu::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QMenu::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QMenu_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QMenu::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QMenu::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QMenu_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QMenu::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QMenu::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QMenu_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QMenu::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QMenu::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMenu_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QMenu::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QMenu::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QMenu_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QMenu::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QMenu::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QMenu_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QMenu::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QMenu::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QMenu_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QMenu::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QMenu::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QMenu_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QMenu::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QMenu::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QMenu_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QMenu::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QMenu::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QMenu_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QMenu::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QMenu::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QMenu_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QMenu::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QMenu::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QMenu_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QMenu::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QMenu::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QMenu_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QMenu::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QMenu::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QMenu_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QMenu::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QMenu::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QMenu_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QMenu::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QMenu::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QMenu_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QMenu::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QMenu::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QMenu_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QMenu::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QMenu::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QMenu_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QMenu::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QMenu::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QMenu_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QMenu::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QMenu::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QMenu_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QMenu::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QMenu::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QMenu_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QMenu::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QMenu::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QMenu_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QMenu::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QMenu::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QMenu_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QMenu::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QMenu::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QMenu_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QMenu::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QMenu::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QMenu_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QMenu::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QMenu::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QMenu_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QMenu::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QMenu::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QMenu::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QMenu::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QMenu_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QMenu::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QMenu::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMenu_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QMenu::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QMenu::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMenu_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QMenu::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QMenu::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMenu_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QMenu::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QMenu::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMenu_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QMenu::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QMenu::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMenu_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QMenu::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend int QMenu_protectedbase_columnCount(bool* _dynamic_cast_ok, const void* self);
	friend void QMenu_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionMenuItem* option, QAction* action);
	friend void QMenu_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QMenu_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QMenu_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QMenu_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QMenu_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QMenu_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QMenu_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QMenu_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QMenu_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QMenu* QMenu_new(QWidget* parent) {
	return new MiqtVirtualQMenu(parent);
}

QMenu* QMenu_new2() {
	return new MiqtVirtualQMenu();
}

QMenu* QMenu_new3(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new MiqtVirtualQMenu(title_QString);
}

QMenu* QMenu_new4(struct miqt_string title, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new MiqtVirtualQMenu(title_QString, parent);
}

void QMenu_virtbase(QMenu* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QMenu_metaObject(const QMenu* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMenu_metacast(QMenu* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMenu_tr(const char* s) {
	QString _ret = QMenu::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMenu_trUtf8(const char* s) {
	QString _ret = QMenu::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QMenu_addAction(QMenu* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(text_QString);
}

QAction* QMenu_addAction2(QMenu* self, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(*icon, text_QString);
}

QAction* QMenu_addMenu(QMenu* self, QMenu* menu) {
	return self->addMenu(menu);
}

QMenu* QMenu_addMenuWithTitle(QMenu* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return self->addMenu(title_QString);
}

QMenu* QMenu_addMenu2(QMenu* self, QIcon* icon, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return self->addMenu(*icon, title_QString);
}

QAction* QMenu_addSeparator(QMenu* self) {
	return self->addSeparator();
}

QAction* QMenu_addSection(QMenu* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addSection(text_QString);
}

QAction* QMenu_addSection2(QMenu* self, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addSection(*icon, text_QString);
}

QAction* QMenu_insertMenu(QMenu* self, QAction* before, QMenu* menu) {
	return self->insertMenu(before, menu);
}

QAction* QMenu_insertSeparator(QMenu* self, QAction* before) {
	return self->insertSeparator(before);
}

QAction* QMenu_insertSection(QMenu* self, QAction* before, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->insertSection(before, text_QString);
}

QAction* QMenu_insertSection2(QMenu* self, QAction* before, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->insertSection(before, *icon, text_QString);
}

bool QMenu_isEmpty(const QMenu* self) {
	return self->isEmpty();
}

void QMenu_clear(QMenu* self) {
	self->clear();
}

void QMenu_setTearOffEnabled(QMenu* self, bool tearOffEnabled) {
	self->setTearOffEnabled(tearOffEnabled);
}

bool QMenu_isTearOffEnabled(const QMenu* self) {
	return self->isTearOffEnabled();
}

bool QMenu_isTearOffMenuVisible(const QMenu* self) {
	return self->isTearOffMenuVisible();
}

void QMenu_showTearOffMenu(QMenu* self) {
	self->showTearOffMenu();
}

void QMenu_showTearOffMenuWithPos(QMenu* self, QPoint* pos) {
	self->showTearOffMenu(*pos);
}

void QMenu_hideTearOffMenu(QMenu* self) {
	self->hideTearOffMenu();
}

void QMenu_setDefaultAction(QMenu* self, QAction* defaultAction) {
	self->setDefaultAction(defaultAction);
}

QAction* QMenu_defaultAction(const QMenu* self) {
	return self->defaultAction();
}

void QMenu_setActiveAction(QMenu* self, QAction* act) {
	self->setActiveAction(act);
}

QAction* QMenu_activeAction(const QMenu* self) {
	return self->activeAction();
}

void QMenu_popup(QMenu* self, QPoint* pos) {
	self->popup(*pos);
}

QAction* QMenu_exec(QMenu* self) {
	return self->exec();
}

QAction* QMenu_execWithPos(QMenu* self, QPoint* pos) {
	return self->exec(*pos);
}

QAction* QMenu_exec2(struct miqt_array /* of QAction* */  actions, QPoint* pos) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions.len);
	QAction** actions_arr = static_cast<QAction**>(actions.data);
	for(size_t i = 0; i < actions.len; ++i) {
		actions_QList.push_back(actions_arr[i]);
	}
	return QMenu::exec(actions_QList, *pos);
}

QSize* QMenu_sizeHint(const QMenu* self) {
	return new QSize(self->sizeHint());
}

QRect* QMenu_actionGeometry(const QMenu* self, QAction* param1) {
	return new QRect(self->actionGeometry(param1));
}

QAction* QMenu_actionAt(const QMenu* self, QPoint* param1) {
	return self->actionAt(*param1);
}

QAction* QMenu_menuAction(const QMenu* self) {
	return self->menuAction();
}

struct miqt_string QMenu_title(const QMenu* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMenu_setTitle(QMenu* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setTitle(title_QString);
}

QIcon* QMenu_icon(const QMenu* self) {
	return new QIcon(self->icon());
}

void QMenu_setIcon(QMenu* self, QIcon* icon) {
	self->setIcon(*icon);
}

void QMenu_setNoReplayFor(QMenu* self, QWidget* widget) {
	self->setNoReplayFor(widget);
}

bool QMenu_separatorsCollapsible(const QMenu* self) {
	return self->separatorsCollapsible();
}

void QMenu_setSeparatorsCollapsible(QMenu* self, bool collapse) {
	self->setSeparatorsCollapsible(collapse);
}

bool QMenu_toolTipsVisible(const QMenu* self) {
	return self->toolTipsVisible();
}

void QMenu_setToolTipsVisible(QMenu* self, bool visible) {
	self->setToolTipsVisible(visible);
}

void QMenu_aboutToShow(QMenu* self) {
	self->aboutToShow();
}

void QMenu_connect_aboutToShow(QMenu* self, intptr_t slot) {
	MiqtVirtualQMenu::connect(self, static_cast<void (QMenu::*)()>(&QMenu::aboutToShow), self, [=]() {
		miqt_exec_callback_QMenu_aboutToShow(slot);
	});
}

void QMenu_aboutToHide(QMenu* self) {
	self->aboutToHide();
}

void QMenu_connect_aboutToHide(QMenu* self, intptr_t slot) {
	MiqtVirtualQMenu::connect(self, static_cast<void (QMenu::*)()>(&QMenu::aboutToHide), self, [=]() {
		miqt_exec_callback_QMenu_aboutToHide(slot);
	});
}

void QMenu_triggered(QMenu* self, QAction* action) {
	self->triggered(action);
}

void QMenu_connect_triggered(QMenu* self, intptr_t slot) {
	MiqtVirtualQMenu::connect(self, static_cast<void (QMenu::*)(QAction*)>(&QMenu::triggered), self, [=](QAction* action) {
		QAction* sigval1 = action;
		miqt_exec_callback_QMenu_triggered(slot, sigval1);
	});
}

void QMenu_hovered(QMenu* self, QAction* action) {
	self->hovered(action);
}

void QMenu_connect_hovered(QMenu* self, intptr_t slot) {
	MiqtVirtualQMenu::connect(self, static_cast<void (QMenu::*)(QAction*)>(&QMenu::hovered), self, [=](QAction* action) {
		QAction* sigval1 = action;
		miqt_exec_callback_QMenu_hovered(slot, sigval1);
	});
}

struct miqt_string QMenu_tr2(const char* s, const char* c) {
	QString _ret = QMenu::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMenu_tr3(const char* s, const char* c, int n) {
	QString _ret = QMenu::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMenu_trUtf82(const char* s, const char* c) {
	QString _ret = QMenu::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMenu_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QMenu::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMenu_popup2(QMenu* self, QPoint* pos, QAction* at) {
	self->popup(*pos, at);
}

QAction* QMenu_exec22(QMenu* self, QPoint* pos, QAction* at) {
	return self->exec(*pos, at);
}

QAction* QMenu_exec3(struct miqt_array /* of QAction* */  actions, QPoint* pos, QAction* at) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions.len);
	QAction** actions_arr = static_cast<QAction**>(actions.data);
	for(size_t i = 0; i < actions.len; ++i) {
		actions_QList.push_back(actions_arr[i]);
	}
	return QMenu::exec(actions_QList, *pos, at);
}

QAction* QMenu_exec4(struct miqt_array /* of QAction* */  actions, QPoint* pos, QAction* at, QWidget* parent) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions.len);
	QAction** actions_arr = static_cast<QAction**>(actions.data);
	for(size_t i = 0; i < actions.len; ++i) {
		actions_QList.push_back(actions_arr[i]);
	}
	return QMenu::exec(actions_QList, *pos, at, parent);
}

bool QMenu_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QMenu_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQMenu*)(self) )->virtualbase_sizeHint();
}

bool QMenu_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QMenu_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_changeEvent(param1);
}

bool QMenu_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QMenu_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QMenu_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QMenu_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_mouseReleaseEvent(param1);
}

bool QMenu_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QMenu_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_mousePressEvent(param1);
}

bool QMenu_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QMenu_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_mouseMoveEvent(param1);
}

bool QMenu_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QMenu_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_wheelEvent(param1);
}

bool QMenu_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QMenu_virtualbase_enterEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_enterEvent(param1);
}

bool QMenu_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QMenu_virtualbase_leaveEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_leaveEvent(param1);
}

bool QMenu_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QMenu_virtualbase_hideEvent(void* self, QHideEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_hideEvent(param1);
}

bool QMenu_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QMenu_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_paintEvent(param1);
}

bool QMenu_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QMenu_virtualbase_actionEvent(void* self, QActionEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_actionEvent(param1);
}

bool QMenu_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QMenu_virtualbase_timerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_timerEvent(param1);
}

bool QMenu_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QMenu_virtualbase_event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQMenu*)(self) )->virtualbase_event(param1);
}

bool QMenu_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QMenu_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQMenu*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QMenu_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QMenu_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQMenu*)(self) )->virtualbase_devType();
}

bool QMenu_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QMenu_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_setVisible(visible);
}

bool QMenu_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QMenu_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQMenu*)(self) )->virtualbase_minimumSizeHint();
}

bool QMenu_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QMenu_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQMenu*)(self) )->virtualbase_heightForWidth(param1);
}

bool QMenu_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QMenu_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQMenu*)(self) )->virtualbase_hasHeightForWidth();
}

bool QMenu_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QMenu_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQMenu*)(self) )->virtualbase_paintEngine();
}

bool QMenu_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QMenu_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QMenu_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QMenu_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QMenu_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QMenu_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_focusInEvent(event);
}

bool QMenu_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QMenu_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_focusOutEvent(event);
}

bool QMenu_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QMenu_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_moveEvent(event);
}

bool QMenu_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QMenu_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_resizeEvent(event);
}

bool QMenu_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QMenu_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_closeEvent(event);
}

bool QMenu_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QMenu_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QMenu_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QMenu_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_tabletEvent(event);
}

bool QMenu_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QMenu_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QMenu_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QMenu_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QMenu_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QMenu_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QMenu_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QMenu_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_dropEvent(event);
}

bool QMenu_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QMenu_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_showEvent(event);
}

bool QMenu_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QMenu_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQMenu*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QMenu_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QMenu_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQMenu*)(self) )->virtualbase_metric(param1);
}

bool QMenu_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QMenu_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQMenu*)(self) )->virtualbase_initPainter(painter);
}

bool QMenu_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QMenu_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQMenu*)(self) )->virtualbase_redirected(offset);
}

bool QMenu_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QMenu_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQMenu*)(self) )->virtualbase_sharedPainter();
}

bool QMenu_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QMenu_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QMenu_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QMenu_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQMenu*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QMenu_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QMenu_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQMenu*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QMenu_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QMenu_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_childEvent(event);
}

bool QMenu_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QMenu_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_customEvent(event);
}

bool QMenu_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QMenu_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_connectNotify(signal);
}

bool QMenu_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QMenu_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_disconnectNotify(signal);
}

int QMenu_protectedbase_columnCount(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->columnCount();

}

void QMenu_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionMenuItem* option, QAction* action) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option, action);

}

void QMenu_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QMenu_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QMenu_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QMenu_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QMenu_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QMenu_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QMenu_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QMenu_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QMenu_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QMenu_delete(QMenu* self) {
	delete self;
}

