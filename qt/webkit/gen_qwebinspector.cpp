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
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWebInspector>
#include <QWebPage>
#include <QWheelEvent>
#include <QWidget>
#include <qwebinspector.h>
#include "gen_qwebinspector.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QWebInspector_sizeHint(const QWebInspector*, intptr_t);
bool miqt_exec_callback_QWebInspector_event(QWebInspector*, intptr_t, QEvent*);
void miqt_exec_callback_QWebInspector_resizeEvent(QWebInspector*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QWebInspector_showEvent(QWebInspector*, intptr_t, QShowEvent*);
void miqt_exec_callback_QWebInspector_hideEvent(QWebInspector*, intptr_t, QHideEvent*);
void miqt_exec_callback_QWebInspector_closeEvent(QWebInspector*, intptr_t, QCloseEvent*);
int miqt_exec_callback_QWebInspector_devType(const QWebInspector*, intptr_t);
void miqt_exec_callback_QWebInspector_setVisible(QWebInspector*, intptr_t, bool);
QSize* miqt_exec_callback_QWebInspector_minimumSizeHint(const QWebInspector*, intptr_t);
int miqt_exec_callback_QWebInspector_heightForWidth(const QWebInspector*, intptr_t, int);
bool miqt_exec_callback_QWebInspector_hasHeightForWidth(const QWebInspector*, intptr_t);
QPaintEngine* miqt_exec_callback_QWebInspector_paintEngine(const QWebInspector*, intptr_t);
void miqt_exec_callback_QWebInspector_mousePressEvent(QWebInspector*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebInspector_mouseReleaseEvent(QWebInspector*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebInspector_mouseDoubleClickEvent(QWebInspector*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebInspector_mouseMoveEvent(QWebInspector*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebInspector_wheelEvent(QWebInspector*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QWebInspector_keyPressEvent(QWebInspector*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWebInspector_keyReleaseEvent(QWebInspector*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWebInspector_focusInEvent(QWebInspector*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWebInspector_focusOutEvent(QWebInspector*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWebInspector_enterEvent(QWebInspector*, intptr_t, QEvent*);
void miqt_exec_callback_QWebInspector_leaveEvent(QWebInspector*, intptr_t, QEvent*);
void miqt_exec_callback_QWebInspector_paintEvent(QWebInspector*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QWebInspector_moveEvent(QWebInspector*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QWebInspector_contextMenuEvent(QWebInspector*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QWebInspector_tabletEvent(QWebInspector*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QWebInspector_actionEvent(QWebInspector*, intptr_t, QActionEvent*);
void miqt_exec_callback_QWebInspector_dragEnterEvent(QWebInspector*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QWebInspector_dragMoveEvent(QWebInspector*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QWebInspector_dragLeaveEvent(QWebInspector*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QWebInspector_dropEvent(QWebInspector*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QWebInspector_nativeEvent(QWebInspector*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QWebInspector_changeEvent(QWebInspector*, intptr_t, QEvent*);
int miqt_exec_callback_QWebInspector_metric(const QWebInspector*, intptr_t, int);
void miqt_exec_callback_QWebInspector_initPainter(const QWebInspector*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QWebInspector_redirected(const QWebInspector*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QWebInspector_sharedPainter(const QWebInspector*, intptr_t);
void miqt_exec_callback_QWebInspector_inputMethodEvent(QWebInspector*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QWebInspector_inputMethodQuery(const QWebInspector*, intptr_t, int);
bool miqt_exec_callback_QWebInspector_focusNextPrevChild(QWebInspector*, intptr_t, bool);
bool miqt_exec_callback_QWebInspector_eventFilter(QWebInspector*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebInspector_timerEvent(QWebInspector*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebInspector_childEvent(QWebInspector*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebInspector_customEvent(QWebInspector*, intptr_t, QEvent*);
void miqt_exec_callback_QWebInspector_connectNotify(QWebInspector*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebInspector_disconnectNotify(QWebInspector*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebInspector final : public QWebInspector {
public:

	MiqtVirtualQWebInspector(QWidget* parent): QWebInspector(parent) {};
	MiqtVirtualQWebInspector(): QWebInspector() {};

	virtual ~MiqtVirtualQWebInspector() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QWebInspector::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWebInspector_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QWebInspector::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QWebInspector::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QWebInspector_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* param1) {

		return QWebInspector::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QWebInspector::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QWebInspector::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QWebInspector::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QWebInspector::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QWebInspector::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QWebInspector::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QWebInspector::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QWebInspector::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QWebInspector::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QWebInspector_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QWebInspector::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QWebInspector::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QWebInspector_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QWebInspector::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QWebInspector::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWebInspector_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QWebInspector::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QWebInspector::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QWebInspector_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QWebInspector::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QWebInspector::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QWebInspector_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QWebInspector::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QWebInspector::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QWebInspector_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QWebInspector::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QWebInspector::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QWebInspector::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QWebInspector::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QWebInspector::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QWebInspector::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QWebInspector::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QWebInspector::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QWebInspector::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QWebInspector::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QWebInspector::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QWebInspector::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QWebInspector::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QWebInspector::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QWebInspector::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QWebInspector::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QWebInspector::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QWebInspector::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QWebInspector::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QWebInspector::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QWebInspector::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QWebInspector::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QWebInspector::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QWebInspector::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QWebInspector::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QWebInspector::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QWebInspector::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QWebInspector::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QWebInspector::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QWebInspector::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QWebInspector::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QWebInspector::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QWebInspector::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QWebInspector::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QWebInspector::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QWebInspector::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QWebInspector::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QWebInspector::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QWebInspector::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QWebInspector::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QWebInspector::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QWebInspector::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QWebInspector_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QWebInspector::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QWebInspector::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QWebInspector_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QWebInspector::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QWebInspector::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QWebInspector_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QWebInspector::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QWebInspector::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QWebInspector_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QWebInspector::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QWebInspector::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QWebInspector_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QWebInspector::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QWebInspector::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QWebInspector_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QWebInspector::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QWebInspector::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QWebInspector_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QWebInspector::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QWebInspector::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QWebInspector_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QWebInspector::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QWebInspector::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QWebInspector_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QWebInspector::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QWebInspector::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWebInspector_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QWebInspector::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QWebInspector::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QWebInspector::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QWebInspector::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QWebInspector::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QWebInspector::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QWebInspector::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QWebInspector::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebInspector_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QWebInspector::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QWebInspector::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebInspector_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QWebInspector::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QWebInspector_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QWebInspector_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QWebInspector_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QWebInspector_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QWebInspector_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QWebInspector_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWebInspector_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWebInspector_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWebInspector_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QWebInspector* QWebInspector_new(QWidget* parent) {
	return new MiqtVirtualQWebInspector(parent);
}

QWebInspector* QWebInspector_new2() {
	return new MiqtVirtualQWebInspector();
}

void QWebInspector_virtbase(QWebInspector* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QWebInspector_metaObject(const QWebInspector* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebInspector_metacast(QWebInspector* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebInspector_tr(const char* s) {
	QString _ret = QWebInspector::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebInspector_trUtf8(const char* s) {
	QString _ret = QWebInspector::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebInspector_setPage(QWebInspector* self, QWebPage* page) {
	self->setPage(page);
}

QWebPage* QWebInspector_page(const QWebInspector* self) {
	return self->page();
}

QSize* QWebInspector_sizeHint(const QWebInspector* self) {
	return new QSize(self->sizeHint());
}

bool QWebInspector_event(QWebInspector* self, QEvent* param1) {
	return self->event(param1);
}

struct miqt_string QWebInspector_tr2(const char* s, const char* c) {
	QString _ret = QWebInspector::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebInspector_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebInspector::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebInspector_trUtf82(const char* s, const char* c) {
	QString _ret = QWebInspector::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebInspector_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebInspector::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebInspector_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QWebInspector_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_sizeHint();
}

bool QWebInspector_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QWebInspector_virtualbase_event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQWebInspector*)(self) )->virtualbase_event(param1);
}

bool QWebInspector_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QWebInspector_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_resizeEvent(event);
}

bool QWebInspector_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QWebInspector_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_showEvent(event);
}

bool QWebInspector_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QWebInspector_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_hideEvent(event);
}

bool QWebInspector_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QWebInspector_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_closeEvent(event);
}

bool QWebInspector_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QWebInspector_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_devType();
}

bool QWebInspector_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QWebInspector_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_setVisible(visible);
}

bool QWebInspector_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QWebInspector_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_minimumSizeHint();
}

bool QWebInspector_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QWebInspector_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_heightForWidth(param1);
}

bool QWebInspector_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QWebInspector_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_hasHeightForWidth();
}

bool QWebInspector_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QWebInspector_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_paintEngine();
}

bool QWebInspector_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QWebInspector_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_mousePressEvent(event);
}

bool QWebInspector_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QWebInspector_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QWebInspector_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QWebInspector_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QWebInspector_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QWebInspector_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QWebInspector_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QWebInspector_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_wheelEvent(event);
}

bool QWebInspector_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QWebInspector_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_keyPressEvent(event);
}

bool QWebInspector_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QWebInspector_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QWebInspector_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QWebInspector_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_focusInEvent(event);
}

bool QWebInspector_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QWebInspector_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_focusOutEvent(event);
}

bool QWebInspector_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QWebInspector_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_enterEvent(event);
}

bool QWebInspector_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QWebInspector_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_leaveEvent(event);
}

bool QWebInspector_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QWebInspector_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_paintEvent(event);
}

bool QWebInspector_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QWebInspector_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_moveEvent(event);
}

bool QWebInspector_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QWebInspector_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QWebInspector_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QWebInspector_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_tabletEvent(event);
}

bool QWebInspector_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QWebInspector_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_actionEvent(event);
}

bool QWebInspector_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QWebInspector_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QWebInspector_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QWebInspector_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QWebInspector_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QWebInspector_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QWebInspector_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QWebInspector_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_dropEvent(event);
}

bool QWebInspector_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QWebInspector_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQWebInspector*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QWebInspector_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QWebInspector_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_changeEvent(param1);
}

bool QWebInspector_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QWebInspector_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_metric(param1);
}

bool QWebInspector_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QWebInspector_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_initPainter(painter);
}

bool QWebInspector_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QWebInspector_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_redirected(offset);
}

bool QWebInspector_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QWebInspector_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_sharedPainter();
}

bool QWebInspector_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QWebInspector_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QWebInspector_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QWebInspector_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QWebInspector_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QWebInspector_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQWebInspector*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QWebInspector_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QWebInspector_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWebInspector*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QWebInspector_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QWebInspector_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_timerEvent(event);
}

bool QWebInspector_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QWebInspector_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_childEvent(event);
}

bool QWebInspector_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QWebInspector_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_customEvent(event);
}

bool QWebInspector_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QWebInspector_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_connectNotify(signal);
}

bool QWebInspector_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QWebInspector_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_disconnectNotify(signal);
}

void QWebInspector_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QWebInspector_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QWebInspector_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QWebInspector_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QWebInspector_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QWebInspector_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QWebInspector_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QWebInspector_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QWebInspector_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QWebInspector_delete(QWebInspector* self) {
	delete self;
}

