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
#include <QStatusBar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qstatusbar.h>
#include "gen_qstatusbar.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QStatusBar_messageChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QStatusBar_showEvent(QStatusBar*, intptr_t, QShowEvent*);
void miqt_exec_callback_QStatusBar_paintEvent(QStatusBar*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QStatusBar_resizeEvent(QStatusBar*, intptr_t, QResizeEvent*);
bool miqt_exec_callback_QStatusBar_event(QStatusBar*, intptr_t, QEvent*);
int miqt_exec_callback_QStatusBar_devType(const QStatusBar*, intptr_t);
void miqt_exec_callback_QStatusBar_setVisible(QStatusBar*, intptr_t, bool);
QSize* miqt_exec_callback_QStatusBar_sizeHint(const QStatusBar*, intptr_t);
QSize* miqt_exec_callback_QStatusBar_minimumSizeHint(const QStatusBar*, intptr_t);
int miqt_exec_callback_QStatusBar_heightForWidth(const QStatusBar*, intptr_t, int);
bool miqt_exec_callback_QStatusBar_hasHeightForWidth(const QStatusBar*, intptr_t);
QPaintEngine* miqt_exec_callback_QStatusBar_paintEngine(const QStatusBar*, intptr_t);
void miqt_exec_callback_QStatusBar_mousePressEvent(QStatusBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QStatusBar_mouseReleaseEvent(QStatusBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QStatusBar_mouseDoubleClickEvent(QStatusBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QStatusBar_mouseMoveEvent(QStatusBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QStatusBar_wheelEvent(QStatusBar*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QStatusBar_keyPressEvent(QStatusBar*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QStatusBar_keyReleaseEvent(QStatusBar*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QStatusBar_focusInEvent(QStatusBar*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QStatusBar_focusOutEvent(QStatusBar*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QStatusBar_enterEvent(QStatusBar*, intptr_t, QEvent*);
void miqt_exec_callback_QStatusBar_leaveEvent(QStatusBar*, intptr_t, QEvent*);
void miqt_exec_callback_QStatusBar_moveEvent(QStatusBar*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QStatusBar_closeEvent(QStatusBar*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QStatusBar_contextMenuEvent(QStatusBar*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QStatusBar_tabletEvent(QStatusBar*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QStatusBar_actionEvent(QStatusBar*, intptr_t, QActionEvent*);
void miqt_exec_callback_QStatusBar_dragEnterEvent(QStatusBar*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QStatusBar_dragMoveEvent(QStatusBar*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QStatusBar_dragLeaveEvent(QStatusBar*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QStatusBar_dropEvent(QStatusBar*, intptr_t, QDropEvent*);
void miqt_exec_callback_QStatusBar_hideEvent(QStatusBar*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QStatusBar_nativeEvent(QStatusBar*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QStatusBar_changeEvent(QStatusBar*, intptr_t, QEvent*);
int miqt_exec_callback_QStatusBar_metric(const QStatusBar*, intptr_t, int);
void miqt_exec_callback_QStatusBar_initPainter(const QStatusBar*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QStatusBar_redirected(const QStatusBar*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QStatusBar_sharedPainter(const QStatusBar*, intptr_t);
void miqt_exec_callback_QStatusBar_inputMethodEvent(QStatusBar*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QStatusBar_inputMethodQuery(const QStatusBar*, intptr_t, int);
bool miqt_exec_callback_QStatusBar_focusNextPrevChild(QStatusBar*, intptr_t, bool);
bool miqt_exec_callback_QStatusBar_eventFilter(QStatusBar*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QStatusBar_timerEvent(QStatusBar*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QStatusBar_childEvent(QStatusBar*, intptr_t, QChildEvent*);
void miqt_exec_callback_QStatusBar_customEvent(QStatusBar*, intptr_t, QEvent*);
void miqt_exec_callback_QStatusBar_connectNotify(QStatusBar*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QStatusBar_disconnectNotify(QStatusBar*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQStatusBar final : public QStatusBar {
public:

	MiqtVirtualQStatusBar(QWidget* parent): QStatusBar(parent) {};
	MiqtVirtualQStatusBar(): QStatusBar() {};

	virtual ~MiqtVirtualQStatusBar() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QStatusBar::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QStatusBar_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* param1) {

		QStatusBar::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QStatusBar::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QStatusBar_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* param1) {

		QStatusBar::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QStatusBar::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QStatusBar_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* param1) {

		QStatusBar::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QStatusBar::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QStatusBar_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* param1) {

		return QStatusBar::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QStatusBar::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QStatusBar_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QStatusBar::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QStatusBar::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QStatusBar_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QStatusBar::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QStatusBar::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QStatusBar_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QStatusBar::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QStatusBar::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QStatusBar_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QStatusBar::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QStatusBar::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QStatusBar_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QStatusBar::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QStatusBar::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QStatusBar_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QStatusBar::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QStatusBar::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QStatusBar_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QStatusBar::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QStatusBar::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QStatusBar::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QStatusBar::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QStatusBar::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QStatusBar::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QStatusBar::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QStatusBar::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QStatusBar::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QStatusBar::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QStatusBar::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QStatusBar::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QStatusBar::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QStatusBar::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QStatusBar::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QStatusBar::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QStatusBar::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QStatusBar::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QStatusBar::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QStatusBar::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QStatusBar::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QStatusBar::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QStatusBar::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QStatusBar::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QStatusBar::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QStatusBar::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QStatusBar::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QStatusBar::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QStatusBar::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QStatusBar::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QStatusBar::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QStatusBar::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QStatusBar::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QStatusBar::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QStatusBar::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QStatusBar::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QStatusBar::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QStatusBar::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QStatusBar::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QStatusBar::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QStatusBar::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QStatusBar::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QStatusBar::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
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

		bool callback_return_value = miqt_exec_callback_QStatusBar_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QStatusBar::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QStatusBar::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QStatusBar_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QStatusBar::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QStatusBar::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QStatusBar_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QStatusBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QStatusBar::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QStatusBar_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QStatusBar::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QStatusBar::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QStatusBar_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QStatusBar::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QStatusBar::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QStatusBar_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QStatusBar::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QStatusBar::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QStatusBar_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QStatusBar::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QStatusBar::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QStatusBar_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QStatusBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QStatusBar::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QStatusBar_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QStatusBar::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QStatusBar::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QStatusBar_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QStatusBar::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QStatusBar::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QStatusBar::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QStatusBar::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QStatusBar::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QStatusBar::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStatusBar_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QStatusBar::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QStatusBar::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStatusBar_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QStatusBar::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QStatusBar::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStatusBar_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QStatusBar::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QStatusBar_protectedbase_reformat(bool* _dynamic_cast_ok, void* self);
	friend void QStatusBar_protectedbase_hideOrShow(bool* _dynamic_cast_ok, void* self);
	friend void QStatusBar_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QStatusBar_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QStatusBar_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QStatusBar_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QStatusBar_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QStatusBar_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QStatusBar_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QStatusBar_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QStatusBar_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QStatusBar_metaObject(const QStatusBar* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStatusBar_metacast(QStatusBar* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStatusBar_tr(const char* s) {
	QString _ret = QStatusBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStatusBar_trUtf8(const char* s) {
	QString _ret = QStatusBar::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStatusBar_addWidget(QStatusBar* self, QWidget* widget) {
	self->addWidget(widget);
}

int QStatusBar_insertWidget(QStatusBar* self, int index, QWidget* widget) {
	return self->insertWidget(static_cast<int>(index), widget);
}

void QStatusBar_addPermanentWidget(QStatusBar* self, QWidget* widget) {
	self->addPermanentWidget(widget);
}

int QStatusBar_insertPermanentWidget(QStatusBar* self, int index, QWidget* widget) {
	return self->insertPermanentWidget(static_cast<int>(index), widget);
}

void QStatusBar_removeWidget(QStatusBar* self, QWidget* widget) {
	self->removeWidget(widget);
}

void QStatusBar_setSizeGripEnabled(QStatusBar* self, bool sizeGripEnabled) {
	self->setSizeGripEnabled(sizeGripEnabled);
}

bool QStatusBar_isSizeGripEnabled(const QStatusBar* self) {
	return self->isSizeGripEnabled();
}

struct miqt_string QStatusBar_currentMessage(const QStatusBar* self) {
	QString _ret = self->currentMessage();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStatusBar_showMessage(QStatusBar* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->showMessage(text_QString);
}

void QStatusBar_clearMessage(QStatusBar* self) {
	self->clearMessage();
}

void QStatusBar_messageChanged(QStatusBar* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->messageChanged(text_QString);
}

void QStatusBar_connect_messageChanged(QStatusBar* self, intptr_t slot) {
	MiqtVirtualQStatusBar::connect(self, static_cast<void (QStatusBar::*)(const QString&)>(&QStatusBar::messageChanged), self, [=](const QString& text) {
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		miqt_exec_callback_QStatusBar_messageChanged(slot, sigval1);
	});
}

struct miqt_string QStatusBar_tr2(const char* s, const char* c) {
	QString _ret = QStatusBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStatusBar_tr3(const char* s, const char* c, int n) {
	QString _ret = QStatusBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStatusBar_trUtf82(const char* s, const char* c) {
	QString _ret = QStatusBar::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStatusBar_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QStatusBar::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStatusBar_addWidget2(QStatusBar* self, QWidget* widget, int stretch) {
	self->addWidget(widget, static_cast<int>(stretch));
}

int QStatusBar_insertWidget3(QStatusBar* self, int index, QWidget* widget, int stretch) {
	return self->insertWidget(static_cast<int>(index), widget, static_cast<int>(stretch));
}

void QStatusBar_addPermanentWidget2(QStatusBar* self, QWidget* widget, int stretch) {
	self->addPermanentWidget(widget, static_cast<int>(stretch));
}

int QStatusBar_insertPermanentWidget3(QStatusBar* self, int index, QWidget* widget, int stretch) {
	return self->insertPermanentWidget(static_cast<int>(index), widget, static_cast<int>(stretch));
}

void QStatusBar_showMessage2(QStatusBar* self, struct miqt_string text, int timeout) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->showMessage(text_QString, static_cast<int>(timeout));
}

bool QStatusBar_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QStatusBar_virtualbase_showEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_showEvent(param1);
}

bool QStatusBar_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QStatusBar_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_paintEvent(param1);
}

bool QStatusBar_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QStatusBar_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_resizeEvent(param1);
}

bool QStatusBar_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QStatusBar_virtualbase_event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQStatusBar*)(self) )->virtualbase_event(param1);
}

bool QStatusBar_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QStatusBar_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_devType();
}

bool QStatusBar_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QStatusBar_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_setVisible(visible);
}

bool QStatusBar_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QStatusBar_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_sizeHint();
}

bool QStatusBar_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QStatusBar_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_minimumSizeHint();
}

bool QStatusBar_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QStatusBar_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_heightForWidth(param1);
}

bool QStatusBar_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QStatusBar_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_hasHeightForWidth();
}

bool QStatusBar_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QStatusBar_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_paintEngine();
}

bool QStatusBar_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QStatusBar_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_mousePressEvent(event);
}

bool QStatusBar_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QStatusBar_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QStatusBar_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QStatusBar_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QStatusBar_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QStatusBar_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QStatusBar_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QStatusBar_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_wheelEvent(event);
}

bool QStatusBar_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QStatusBar_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_keyPressEvent(event);
}

bool QStatusBar_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QStatusBar_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QStatusBar_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QStatusBar_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_focusInEvent(event);
}

bool QStatusBar_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QStatusBar_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_focusOutEvent(event);
}

bool QStatusBar_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QStatusBar_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_enterEvent(event);
}

bool QStatusBar_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QStatusBar_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_leaveEvent(event);
}

bool QStatusBar_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QStatusBar_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_moveEvent(event);
}

bool QStatusBar_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QStatusBar_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_closeEvent(event);
}

bool QStatusBar_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QStatusBar_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QStatusBar_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QStatusBar_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_tabletEvent(event);
}

bool QStatusBar_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QStatusBar_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_actionEvent(event);
}

bool QStatusBar_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QStatusBar_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QStatusBar_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QStatusBar_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QStatusBar_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QStatusBar_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QStatusBar_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QStatusBar_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_dropEvent(event);
}

bool QStatusBar_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QStatusBar_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_hideEvent(event);
}

bool QStatusBar_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QStatusBar_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQStatusBar*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QStatusBar_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QStatusBar_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_changeEvent(param1);
}

bool QStatusBar_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QStatusBar_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_metric(param1);
}

bool QStatusBar_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QStatusBar_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_initPainter(painter);
}

bool QStatusBar_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QStatusBar_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_redirected(offset);
}

bool QStatusBar_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QStatusBar_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_sharedPainter();
}

bool QStatusBar_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QStatusBar_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QStatusBar_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QStatusBar_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQStatusBar*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QStatusBar_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QStatusBar_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQStatusBar*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QStatusBar_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QStatusBar_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQStatusBar*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QStatusBar_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QStatusBar_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_timerEvent(event);
}

bool QStatusBar_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QStatusBar_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_childEvent(event);
}

bool QStatusBar_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QStatusBar_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_customEvent(event);
}

bool QStatusBar_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QStatusBar_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_connectNotify(signal);
}

bool QStatusBar_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QStatusBar_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStatusBar*)(self) )->virtualbase_disconnectNotify(signal);
}

void QStatusBar_protectedbase_reformat(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->reformat();

}

void QStatusBar_protectedbase_hideOrShow(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->hideOrShow();

}

void QStatusBar_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QStatusBar_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QStatusBar_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QStatusBar_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QStatusBar_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QStatusBar_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QStatusBar_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QStatusBar_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QStatusBar_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQStatusBar* self_cast = dynamic_cast<MiqtVirtualQStatusBar*>( (QStatusBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QStatusBar_delete(QStatusBar* self) {
	delete self;
}

