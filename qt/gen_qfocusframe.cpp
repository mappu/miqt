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
#include <QFocusFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
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
#include <QStyleOption>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qfocusframe.h>
#include "gen_qfocusframe.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QFocusFrame_event(QFocusFrame*, intptr_t, QEvent*);
bool miqt_exec_callback_QFocusFrame_eventFilter(QFocusFrame*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QFocusFrame_paintEvent(QFocusFrame*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QFocusFrame_devType(const QFocusFrame*, intptr_t);
void miqt_exec_callback_QFocusFrame_setVisible(QFocusFrame*, intptr_t, bool);
QSize* miqt_exec_callback_QFocusFrame_sizeHint(const QFocusFrame*, intptr_t);
QSize* miqt_exec_callback_QFocusFrame_minimumSizeHint(const QFocusFrame*, intptr_t);
int miqt_exec_callback_QFocusFrame_heightForWidth(const QFocusFrame*, intptr_t, int);
bool miqt_exec_callback_QFocusFrame_hasHeightForWidth(const QFocusFrame*, intptr_t);
QPaintEngine* miqt_exec_callback_QFocusFrame_paintEngine(const QFocusFrame*, intptr_t);
void miqt_exec_callback_QFocusFrame_mousePressEvent(QFocusFrame*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFocusFrame_mouseReleaseEvent(QFocusFrame*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFocusFrame_mouseDoubleClickEvent(QFocusFrame*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFocusFrame_mouseMoveEvent(QFocusFrame*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFocusFrame_wheelEvent(QFocusFrame*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QFocusFrame_keyPressEvent(QFocusFrame*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFocusFrame_keyReleaseEvent(QFocusFrame*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFocusFrame_focusInEvent(QFocusFrame*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFocusFrame_focusOutEvent(QFocusFrame*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFocusFrame_enterEvent(QFocusFrame*, intptr_t, QEvent*);
void miqt_exec_callback_QFocusFrame_leaveEvent(QFocusFrame*, intptr_t, QEvent*);
void miqt_exec_callback_QFocusFrame_moveEvent(QFocusFrame*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QFocusFrame_resizeEvent(QFocusFrame*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QFocusFrame_closeEvent(QFocusFrame*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QFocusFrame_contextMenuEvent(QFocusFrame*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QFocusFrame_tabletEvent(QFocusFrame*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QFocusFrame_actionEvent(QFocusFrame*, intptr_t, QActionEvent*);
void miqt_exec_callback_QFocusFrame_dragEnterEvent(QFocusFrame*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QFocusFrame_dragMoveEvent(QFocusFrame*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QFocusFrame_dragLeaveEvent(QFocusFrame*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QFocusFrame_dropEvent(QFocusFrame*, intptr_t, QDropEvent*);
void miqt_exec_callback_QFocusFrame_showEvent(QFocusFrame*, intptr_t, QShowEvent*);
void miqt_exec_callback_QFocusFrame_hideEvent(QFocusFrame*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QFocusFrame_nativeEvent(QFocusFrame*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QFocusFrame_changeEvent(QFocusFrame*, intptr_t, QEvent*);
int miqt_exec_callback_QFocusFrame_metric(const QFocusFrame*, intptr_t, int);
void miqt_exec_callback_QFocusFrame_initPainter(const QFocusFrame*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QFocusFrame_redirected(const QFocusFrame*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QFocusFrame_sharedPainter(const QFocusFrame*, intptr_t);
void miqt_exec_callback_QFocusFrame_inputMethodEvent(QFocusFrame*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QFocusFrame_inputMethodQuery(const QFocusFrame*, intptr_t, int);
bool miqt_exec_callback_QFocusFrame_focusNextPrevChild(QFocusFrame*, intptr_t, bool);
void miqt_exec_callback_QFocusFrame_timerEvent(QFocusFrame*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QFocusFrame_childEvent(QFocusFrame*, intptr_t, QChildEvent*);
void miqt_exec_callback_QFocusFrame_customEvent(QFocusFrame*, intptr_t, QEvent*);
void miqt_exec_callback_QFocusFrame_connectNotify(QFocusFrame*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QFocusFrame_disconnectNotify(QFocusFrame*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFocusFrame final : public QFocusFrame {
public:

	MiqtVirtualQFocusFrame(QWidget* parent): QFocusFrame(parent) {};
	MiqtVirtualQFocusFrame(): QFocusFrame() {};

	virtual ~MiqtVirtualQFocusFrame() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QFocusFrame::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QFocusFrame_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QFocusFrame::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QFocusFrame::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QFocusFrame_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* param1, QEvent* param2) {

		return QFocusFrame::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QFocusFrame::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QFocusFrame_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* param1) {

		QFocusFrame::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QFocusFrame::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QFocusFrame_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QFocusFrame::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QFocusFrame::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QFocusFrame_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QFocusFrame::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QFocusFrame::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFocusFrame_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QFocusFrame::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QFocusFrame::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFocusFrame_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QFocusFrame::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QFocusFrame::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QFocusFrame_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QFocusFrame::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QFocusFrame::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QFocusFrame_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QFocusFrame::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QFocusFrame::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QFocusFrame_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QFocusFrame::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QFocusFrame::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QFocusFrame::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QFocusFrame::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QFocusFrame::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QFocusFrame::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QFocusFrame::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QFocusFrame::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QFocusFrame::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QFocusFrame::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QFocusFrame::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QFocusFrame::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QFocusFrame::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QFocusFrame::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QFocusFrame::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QFocusFrame::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QFocusFrame::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QFocusFrame::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QFocusFrame::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QFocusFrame::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QFocusFrame::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QFocusFrame::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QFocusFrame::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QFocusFrame::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QFocusFrame::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QFocusFrame::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QFocusFrame::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QFocusFrame::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QFocusFrame::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QFocusFrame::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QFocusFrame::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QFocusFrame::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QFocusFrame::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QFocusFrame::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QFocusFrame::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QFocusFrame::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QFocusFrame::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QFocusFrame::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QFocusFrame::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QFocusFrame::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QFocusFrame::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QFocusFrame::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QFocusFrame::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QFocusFrame::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QFocusFrame::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QFocusFrame::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QFocusFrame::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QFocusFrame::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QFocusFrame_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QFocusFrame::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QFocusFrame::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QFocusFrame_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QFocusFrame::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QFocusFrame::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QFocusFrame_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QFocusFrame::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QFocusFrame::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QFocusFrame_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QFocusFrame::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QFocusFrame::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QFocusFrame_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QFocusFrame::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QFocusFrame::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QFocusFrame_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QFocusFrame::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QFocusFrame::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QFocusFrame_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QFocusFrame::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QFocusFrame::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QFocusFrame_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QFocusFrame::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QFocusFrame::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QFocusFrame_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QFocusFrame::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QFocusFrame::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QFocusFrame::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QFocusFrame::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QFocusFrame::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QFocusFrame::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QFocusFrame::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QFocusFrame::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFocusFrame_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QFocusFrame::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QFocusFrame::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFocusFrame_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QFocusFrame::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QFocusFrame_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOption* option);
	friend void QFocusFrame_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QFocusFrame_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QFocusFrame_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QFocusFrame_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QFocusFrame_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QFocusFrame_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QFocusFrame_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QFocusFrame_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QFocusFrame_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QFocusFrame* QFocusFrame_new(QWidget* parent) {
	return new MiqtVirtualQFocusFrame(parent);
}

QFocusFrame* QFocusFrame_new2() {
	return new MiqtVirtualQFocusFrame();
}

void QFocusFrame_virtbase(QFocusFrame* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QFocusFrame_metaObject(const QFocusFrame* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFocusFrame_metacast(QFocusFrame* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFocusFrame_tr(const char* s) {
	QString _ret = QFocusFrame::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFocusFrame_trUtf8(const char* s) {
	QString _ret = QFocusFrame::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFocusFrame_setWidget(QFocusFrame* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QFocusFrame_widget(const QFocusFrame* self) {
	return self->widget();
}

struct miqt_string QFocusFrame_tr2(const char* s, const char* c) {
	QString _ret = QFocusFrame::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFocusFrame_tr3(const char* s, const char* c, int n) {
	QString _ret = QFocusFrame::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFocusFrame_trUtf82(const char* s, const char* c) {
	QString _ret = QFocusFrame::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFocusFrame_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QFocusFrame::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFocusFrame_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QFocusFrame_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_event(e);
}

bool QFocusFrame_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QFocusFrame_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_eventFilter(param1, param2);
}

bool QFocusFrame_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_paintEvent(param1);
}

bool QFocusFrame_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QFocusFrame_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_devType();
}

bool QFocusFrame_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QFocusFrame_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_setVisible(visible);
}

bool QFocusFrame_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QFocusFrame_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_sizeHint();
}

bool QFocusFrame_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QFocusFrame_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_minimumSizeHint();
}

bool QFocusFrame_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QFocusFrame_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_heightForWidth(param1);
}

bool QFocusFrame_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QFocusFrame_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_hasHeightForWidth();
}

bool QFocusFrame_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QFocusFrame_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_paintEngine();
}

bool QFocusFrame_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_mousePressEvent(event);
}

bool QFocusFrame_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QFocusFrame_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QFocusFrame_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QFocusFrame_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_wheelEvent(event);
}

bool QFocusFrame_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_keyPressEvent(event);
}

bool QFocusFrame_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QFocusFrame_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_focusInEvent(event);
}

bool QFocusFrame_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_focusOutEvent(event);
}

bool QFocusFrame_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_enterEvent(event);
}

bool QFocusFrame_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_leaveEvent(event);
}

bool QFocusFrame_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_moveEvent(event);
}

bool QFocusFrame_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_resizeEvent(event);
}

bool QFocusFrame_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_closeEvent(event);
}

bool QFocusFrame_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QFocusFrame_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_tabletEvent(event);
}

bool QFocusFrame_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_actionEvent(event);
}

bool QFocusFrame_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QFocusFrame_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QFocusFrame_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QFocusFrame_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_dropEvent(event);
}

bool QFocusFrame_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_showEvent(event);
}

bool QFocusFrame_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_hideEvent(event);
}

bool QFocusFrame_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QFocusFrame_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QFocusFrame_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_changeEvent(param1);
}

bool QFocusFrame_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QFocusFrame_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_metric(param1);
}

bool QFocusFrame_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QFocusFrame_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_initPainter(painter);
}

bool QFocusFrame_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QFocusFrame_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_redirected(offset);
}

bool QFocusFrame_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QFocusFrame_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_sharedPainter();
}

bool QFocusFrame_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QFocusFrame_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QFocusFrame_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QFocusFrame_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QFocusFrame_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QFocusFrame_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_timerEvent(event);
}

bool QFocusFrame_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_childEvent(event);
}

bool QFocusFrame_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QFocusFrame_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_customEvent(event);
}

bool QFocusFrame_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QFocusFrame_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_connectNotify(signal);
}

bool QFocusFrame_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QFocusFrame_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_disconnectNotify(signal);
}

void QFocusFrame_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOption* option) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

void QFocusFrame_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QFocusFrame_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QFocusFrame_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QFocusFrame_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QFocusFrame_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QFocusFrame_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QFocusFrame_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QFocusFrame_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QFocusFrame_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QFocusFrame_delete(QFocusFrame* self) {
	delete self;
}

