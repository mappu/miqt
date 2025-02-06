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
#include <QMenu>
#include <QMenuBar>
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
#include <qmenubar.h>
#include "gen_qmenubar.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMenuBar_triggered(intptr_t, QAction*);
void miqt_exec_callback_QMenuBar_hovered(intptr_t, QAction*);
QSize* miqt_exec_callback_QMenuBar_sizeHint(const QMenuBar*, intptr_t);
QSize* miqt_exec_callback_QMenuBar_minimumSizeHint(const QMenuBar*, intptr_t);
int miqt_exec_callback_QMenuBar_heightForWidth(const QMenuBar*, intptr_t, int);
void miqt_exec_callback_QMenuBar_setVisible(QMenuBar*, intptr_t, bool);
void miqt_exec_callback_QMenuBar_changeEvent(QMenuBar*, intptr_t, QEvent*);
void miqt_exec_callback_QMenuBar_keyPressEvent(QMenuBar*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QMenuBar_mouseReleaseEvent(QMenuBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMenuBar_mousePressEvent(QMenuBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMenuBar_mouseMoveEvent(QMenuBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMenuBar_leaveEvent(QMenuBar*, intptr_t, QEvent*);
void miqt_exec_callback_QMenuBar_paintEvent(QMenuBar*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QMenuBar_resizeEvent(QMenuBar*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QMenuBar_actionEvent(QMenuBar*, intptr_t, QActionEvent*);
void miqt_exec_callback_QMenuBar_focusOutEvent(QMenuBar*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QMenuBar_focusInEvent(QMenuBar*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QMenuBar_timerEvent(QMenuBar*, intptr_t, QTimerEvent*);
bool miqt_exec_callback_QMenuBar_eventFilter(QMenuBar*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QMenuBar_event(QMenuBar*, intptr_t, QEvent*);
int miqt_exec_callback_QMenuBar_devType(const QMenuBar*, intptr_t);
bool miqt_exec_callback_QMenuBar_hasHeightForWidth(const QMenuBar*, intptr_t);
QPaintEngine* miqt_exec_callback_QMenuBar_paintEngine(const QMenuBar*, intptr_t);
void miqt_exec_callback_QMenuBar_mouseDoubleClickEvent(QMenuBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMenuBar_wheelEvent(QMenuBar*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QMenuBar_keyReleaseEvent(QMenuBar*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QMenuBar_enterEvent(QMenuBar*, intptr_t, QEvent*);
void miqt_exec_callback_QMenuBar_moveEvent(QMenuBar*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QMenuBar_closeEvent(QMenuBar*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QMenuBar_contextMenuEvent(QMenuBar*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QMenuBar_tabletEvent(QMenuBar*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QMenuBar_dragEnterEvent(QMenuBar*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QMenuBar_dragMoveEvent(QMenuBar*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QMenuBar_dragLeaveEvent(QMenuBar*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QMenuBar_dropEvent(QMenuBar*, intptr_t, QDropEvent*);
void miqt_exec_callback_QMenuBar_showEvent(QMenuBar*, intptr_t, QShowEvent*);
void miqt_exec_callback_QMenuBar_hideEvent(QMenuBar*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QMenuBar_nativeEvent(QMenuBar*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QMenuBar_metric(const QMenuBar*, intptr_t, int);
void miqt_exec_callback_QMenuBar_initPainter(const QMenuBar*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QMenuBar_redirected(const QMenuBar*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QMenuBar_sharedPainter(const QMenuBar*, intptr_t);
void miqt_exec_callback_QMenuBar_inputMethodEvent(QMenuBar*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QMenuBar_inputMethodQuery(const QMenuBar*, intptr_t, int);
bool miqt_exec_callback_QMenuBar_focusNextPrevChild(QMenuBar*, intptr_t, bool);
void miqt_exec_callback_QMenuBar_childEvent(QMenuBar*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMenuBar_customEvent(QMenuBar*, intptr_t, QEvent*);
void miqt_exec_callback_QMenuBar_connectNotify(QMenuBar*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMenuBar_disconnectNotify(QMenuBar*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMenuBar final : public QMenuBar {
public:

	MiqtVirtualQMenuBar(QWidget* parent): QMenuBar(parent) {};
	MiqtVirtualQMenuBar(): QMenuBar() {};

	virtual ~MiqtVirtualQMenuBar() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QMenuBar::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMenuBar_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QMenuBar::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QMenuBar::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMenuBar_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QMenuBar::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QMenuBar::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QMenuBar_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QMenuBar::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QMenuBar::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QMenuBar_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QMenuBar::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QMenuBar::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QMenuBar::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QMenuBar::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QMenuBar::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__mouseReleaseEvent == 0) {
			QMenuBar::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* param1) {

		QMenuBar::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__mousePressEvent == 0) {
			QMenuBar::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* param1) {

		QMenuBar::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__mouseMoveEvent == 0) {
			QMenuBar::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* param1) {

		QMenuBar::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* param1) override {
		if (handle__leaveEvent == 0) {
			QMenuBar::leaveEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* param1) {

		QMenuBar::leaveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QMenuBar::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* param1) {

		QMenuBar::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QMenuBar::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* param1) {

		QMenuBar::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* param1) override {
		if (handle__actionEvent == 0) {
			QMenuBar::actionEvent(param1);
			return;
		}
		
		QActionEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* param1) {

		QMenuBar::actionEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (handle__focusOutEvent == 0) {
			QMenuBar::focusOutEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* param1) {

		QMenuBar::focusOutEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (handle__focusInEvent == 0) {
			QMenuBar::focusInEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* param1) {

		QMenuBar::focusInEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__timerEvent == 0) {
			QMenuBar::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* param1) {

		QMenuBar::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QMenuBar::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QMenuBar_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* param1, QEvent* param2) {

		return QMenuBar::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QMenuBar::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QMenuBar_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* param1) {

		return QMenuBar::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QMenuBar::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QMenuBar_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QMenuBar::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QMenuBar::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QMenuBar_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QMenuBar::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QMenuBar::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QMenuBar_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QMenuBar::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QMenuBar::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QMenuBar::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QMenuBar::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QMenuBar::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QMenuBar::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QMenuBar::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QMenuBar::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QMenuBar::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QMenuBar::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QMenuBar::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QMenuBar::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QMenuBar::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QMenuBar::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QMenuBar::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QMenuBar::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QMenuBar::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QMenuBar::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QMenuBar::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QMenuBar::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QMenuBar::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QMenuBar::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QMenuBar::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QMenuBar::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QMenuBar::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QMenuBar::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QMenuBar::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QMenuBar::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QMenuBar::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QMenuBar::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QMenuBar_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QMenuBar::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QMenuBar::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QMenuBar_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QMenuBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QMenuBar::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QMenuBar_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QMenuBar::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QMenuBar::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QMenuBar_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QMenuBar::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QMenuBar::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QMenuBar_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QMenuBar::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QMenuBar::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QMenuBar::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QMenuBar::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QMenuBar_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QMenuBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QMenuBar::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QMenuBar_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QMenuBar::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QMenuBar::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QMenuBar::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QMenuBar::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QMenuBar::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QMenuBar::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMenuBar_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QMenuBar::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QMenuBar::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMenuBar_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QMenuBar::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QMenuBar_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionMenuItem* option, QAction* action);
	friend void QMenuBar_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QMenuBar_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QMenuBar_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QMenuBar_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QMenuBar_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QMenuBar_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QMenuBar_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QMenuBar_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QMenuBar_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QMenuBar* QMenuBar_new(QWidget* parent) {
	return new MiqtVirtualQMenuBar(parent);
}

QMenuBar* QMenuBar_new2() {
	return new MiqtVirtualQMenuBar();
}

void QMenuBar_virtbase(QMenuBar* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QMenuBar_metaObject(const QMenuBar* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMenuBar_metacast(QMenuBar* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMenuBar_tr(const char* s) {
	QString _ret = QMenuBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMenuBar_trUtf8(const char* s) {
	QString _ret = QMenuBar::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QMenuBar_addAction(QMenuBar* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(text_QString);
}

QAction* QMenuBar_addMenu(QMenuBar* self, QMenu* menu) {
	return self->addMenu(menu);
}

QMenu* QMenuBar_addMenuWithTitle(QMenuBar* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return self->addMenu(title_QString);
}

QMenu* QMenuBar_addMenu2(QMenuBar* self, QIcon* icon, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return self->addMenu(*icon, title_QString);
}

QAction* QMenuBar_addSeparator(QMenuBar* self) {
	return self->addSeparator();
}

QAction* QMenuBar_insertSeparator(QMenuBar* self, QAction* before) {
	return self->insertSeparator(before);
}

QAction* QMenuBar_insertMenu(QMenuBar* self, QAction* before, QMenu* menu) {
	return self->insertMenu(before, menu);
}

void QMenuBar_clear(QMenuBar* self) {
	self->clear();
}

QAction* QMenuBar_activeAction(const QMenuBar* self) {
	return self->activeAction();
}

void QMenuBar_setActiveAction(QMenuBar* self, QAction* action) {
	self->setActiveAction(action);
}

void QMenuBar_setDefaultUp(QMenuBar* self, bool defaultUp) {
	self->setDefaultUp(defaultUp);
}

bool QMenuBar_isDefaultUp(const QMenuBar* self) {
	return self->isDefaultUp();
}

QSize* QMenuBar_sizeHint(const QMenuBar* self) {
	return new QSize(self->sizeHint());
}

QSize* QMenuBar_minimumSizeHint(const QMenuBar* self) {
	return new QSize(self->minimumSizeHint());
}

int QMenuBar_heightForWidth(const QMenuBar* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

QRect* QMenuBar_actionGeometry(const QMenuBar* self, QAction* param1) {
	return new QRect(self->actionGeometry(param1));
}

QAction* QMenuBar_actionAt(const QMenuBar* self, QPoint* param1) {
	return self->actionAt(*param1);
}

void QMenuBar_setCornerWidget(QMenuBar* self, QWidget* w) {
	self->setCornerWidget(w);
}

QWidget* QMenuBar_cornerWidget(const QMenuBar* self) {
	return self->cornerWidget();
}

bool QMenuBar_isNativeMenuBar(const QMenuBar* self) {
	return self->isNativeMenuBar();
}

void QMenuBar_setNativeMenuBar(QMenuBar* self, bool nativeMenuBar) {
	self->setNativeMenuBar(nativeMenuBar);
}

void QMenuBar_setVisible(QMenuBar* self, bool visible) {
	self->setVisible(visible);
}

void QMenuBar_triggered(QMenuBar* self, QAction* action) {
	self->triggered(action);
}

void QMenuBar_connect_triggered(QMenuBar* self, intptr_t slot) {
	MiqtVirtualQMenuBar::connect(self, static_cast<void (QMenuBar::*)(QAction*)>(&QMenuBar::triggered), self, [=](QAction* action) {
		QAction* sigval1 = action;
		miqt_exec_callback_QMenuBar_triggered(slot, sigval1);
	});
}

void QMenuBar_hovered(QMenuBar* self, QAction* action) {
	self->hovered(action);
}

void QMenuBar_connect_hovered(QMenuBar* self, intptr_t slot) {
	MiqtVirtualQMenuBar::connect(self, static_cast<void (QMenuBar::*)(QAction*)>(&QMenuBar::hovered), self, [=](QAction* action) {
		QAction* sigval1 = action;
		miqt_exec_callback_QMenuBar_hovered(slot, sigval1);
	});
}

struct miqt_string QMenuBar_tr2(const char* s, const char* c) {
	QString _ret = QMenuBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMenuBar_tr3(const char* s, const char* c, int n) {
	QString _ret = QMenuBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMenuBar_trUtf82(const char* s, const char* c) {
	QString _ret = QMenuBar::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMenuBar_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QMenuBar::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMenuBar_setCornerWidget2(QMenuBar* self, QWidget* w, int corner) {
	self->setCornerWidget(w, static_cast<Qt::Corner>(corner));
}

QWidget* QMenuBar_cornerWidget1(const QMenuBar* self, int corner) {
	return self->cornerWidget(static_cast<Qt::Corner>(corner));
}

bool QMenuBar_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QMenuBar_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_sizeHint();
}

bool QMenuBar_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QMenuBar_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_minimumSizeHint();
}

bool QMenuBar_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QMenuBar_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_heightForWidth(param1);
}

bool QMenuBar_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QMenuBar_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_setVisible(visible);
}

bool QMenuBar_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QMenuBar_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_changeEvent(param1);
}

bool QMenuBar_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QMenuBar_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QMenuBar_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QMenuBar_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_mouseReleaseEvent(param1);
}

bool QMenuBar_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QMenuBar_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_mousePressEvent(param1);
}

bool QMenuBar_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QMenuBar_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_mouseMoveEvent(param1);
}

bool QMenuBar_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QMenuBar_virtualbase_leaveEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_leaveEvent(param1);
}

bool QMenuBar_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QMenuBar_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_paintEvent(param1);
}

bool QMenuBar_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QMenuBar_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_resizeEvent(param1);
}

bool QMenuBar_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QMenuBar_virtualbase_actionEvent(void* self, QActionEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_actionEvent(param1);
}

bool QMenuBar_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QMenuBar_virtualbase_focusOutEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_focusOutEvent(param1);
}

bool QMenuBar_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QMenuBar_virtualbase_focusInEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_focusInEvent(param1);
}

bool QMenuBar_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QMenuBar_virtualbase_timerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_timerEvent(param1);
}

bool QMenuBar_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QMenuBar_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQMenuBar*)(self) )->virtualbase_eventFilter(param1, param2);
}

bool QMenuBar_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QMenuBar_virtualbase_event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQMenuBar*)(self) )->virtualbase_event(param1);
}

bool QMenuBar_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QMenuBar_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_devType();
}

bool QMenuBar_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QMenuBar_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_hasHeightForWidth();
}

bool QMenuBar_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QMenuBar_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_paintEngine();
}

bool QMenuBar_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QMenuBar_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QMenuBar_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QMenuBar_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_wheelEvent(event);
}

bool QMenuBar_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QMenuBar_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QMenuBar_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QMenuBar_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_enterEvent(event);
}

bool QMenuBar_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QMenuBar_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_moveEvent(event);
}

bool QMenuBar_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QMenuBar_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_closeEvent(event);
}

bool QMenuBar_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QMenuBar_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QMenuBar_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QMenuBar_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_tabletEvent(event);
}

bool QMenuBar_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QMenuBar_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QMenuBar_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QMenuBar_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QMenuBar_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QMenuBar_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QMenuBar_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QMenuBar_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_dropEvent(event);
}

bool QMenuBar_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QMenuBar_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_showEvent(event);
}

bool QMenuBar_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QMenuBar_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_hideEvent(event);
}

bool QMenuBar_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QMenuBar_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQMenuBar*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QMenuBar_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QMenuBar_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_metric(param1);
}

bool QMenuBar_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QMenuBar_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_initPainter(painter);
}

bool QMenuBar_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QMenuBar_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_redirected(offset);
}

bool QMenuBar_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QMenuBar_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_sharedPainter();
}

bool QMenuBar_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QMenuBar_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QMenuBar_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QMenuBar_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QMenuBar_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QMenuBar_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQMenuBar*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QMenuBar_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QMenuBar_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_childEvent(event);
}

bool QMenuBar_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QMenuBar_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_customEvent(event);
}

bool QMenuBar_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QMenuBar_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_connectNotify(signal);
}

bool QMenuBar_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QMenuBar_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_disconnectNotify(signal);
}

void QMenuBar_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionMenuItem* option, QAction* action) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option, action);

}

void QMenuBar_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QMenuBar_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QMenuBar_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QMenuBar_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QMenuBar_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QMenuBar_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QMenuBar_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QMenuBar_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QMenuBar_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QMenuBar_delete(QMenuBar* self) {
	delete self;
}

