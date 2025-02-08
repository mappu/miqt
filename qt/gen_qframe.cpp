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
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qframe.h>
#include "gen_qframe.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QFrame_sizeHint(const QFrame*, intptr_t);
bool miqt_exec_callback_QFrame_event(QFrame*, intptr_t, QEvent*);
void miqt_exec_callback_QFrame_paintEvent(QFrame*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QFrame_changeEvent(QFrame*, intptr_t, QEvent*);
int miqt_exec_callback_QFrame_devType(const QFrame*, intptr_t);
void miqt_exec_callback_QFrame_setVisible(QFrame*, intptr_t, bool);
QSize* miqt_exec_callback_QFrame_minimumSizeHint(const QFrame*, intptr_t);
int miqt_exec_callback_QFrame_heightForWidth(const QFrame*, intptr_t, int);
bool miqt_exec_callback_QFrame_hasHeightForWidth(const QFrame*, intptr_t);
QPaintEngine* miqt_exec_callback_QFrame_paintEngine(const QFrame*, intptr_t);
void miqt_exec_callback_QFrame_mousePressEvent(QFrame*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFrame_mouseReleaseEvent(QFrame*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFrame_mouseDoubleClickEvent(QFrame*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFrame_mouseMoveEvent(QFrame*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFrame_wheelEvent(QFrame*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QFrame_keyPressEvent(QFrame*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFrame_keyReleaseEvent(QFrame*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFrame_focusInEvent(QFrame*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFrame_focusOutEvent(QFrame*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFrame_enterEvent(QFrame*, intptr_t, QEvent*);
void miqt_exec_callback_QFrame_leaveEvent(QFrame*, intptr_t, QEvent*);
void miqt_exec_callback_QFrame_moveEvent(QFrame*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QFrame_resizeEvent(QFrame*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QFrame_closeEvent(QFrame*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QFrame_contextMenuEvent(QFrame*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QFrame_tabletEvent(QFrame*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QFrame_actionEvent(QFrame*, intptr_t, QActionEvent*);
void miqt_exec_callback_QFrame_dragEnterEvent(QFrame*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QFrame_dragMoveEvent(QFrame*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QFrame_dragLeaveEvent(QFrame*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QFrame_dropEvent(QFrame*, intptr_t, QDropEvent*);
void miqt_exec_callback_QFrame_showEvent(QFrame*, intptr_t, QShowEvent*);
void miqt_exec_callback_QFrame_hideEvent(QFrame*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QFrame_nativeEvent(QFrame*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QFrame_metric(const QFrame*, intptr_t, int);
void miqt_exec_callback_QFrame_initPainter(const QFrame*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QFrame_redirected(const QFrame*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QFrame_sharedPainter(const QFrame*, intptr_t);
void miqt_exec_callback_QFrame_inputMethodEvent(QFrame*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QFrame_inputMethodQuery(const QFrame*, intptr_t, int);
bool miqt_exec_callback_QFrame_focusNextPrevChild(QFrame*, intptr_t, bool);
bool miqt_exec_callback_QFrame_eventFilter(QFrame*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QFrame_timerEvent(QFrame*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QFrame_childEvent(QFrame*, intptr_t, QChildEvent*);
void miqt_exec_callback_QFrame_customEvent(QFrame*, intptr_t, QEvent*);
void miqt_exec_callback_QFrame_connectNotify(QFrame*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QFrame_disconnectNotify(QFrame*, intptr_t, QMetaMethod*);
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
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QFrame::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFrame_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QFrame::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QFrame::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QFrame_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QFrame::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QFrame::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QFrame_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* param1) {

		QFrame::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QFrame::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QFrame_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QFrame::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QFrame::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QFrame_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QFrame::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QFrame::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QFrame_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QFrame::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QFrame::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFrame_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QFrame::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QFrame::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QFrame_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QFrame::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QFrame::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QFrame_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QFrame::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QFrame::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QFrame_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QFrame::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QFrame::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFrame_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QFrame::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QFrame::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFrame_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QFrame::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QFrame::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFrame_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QFrame::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QFrame::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFrame_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QFrame::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QFrame::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QFrame_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QFrame::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QFrame::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QFrame_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QFrame::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QFrame::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QFrame_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QFrame::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QFrame::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QFrame_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QFrame::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QFrame::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QFrame_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QFrame::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QFrame::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFrame_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QFrame::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QFrame::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFrame_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QFrame::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QFrame::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QFrame_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QFrame::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QFrame::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QFrame_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QFrame::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QFrame::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QFrame_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QFrame::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QFrame::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QFrame_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QFrame::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QFrame::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QFrame_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QFrame::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QFrame::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QFrame_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QFrame::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QFrame::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QFrame_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QFrame::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QFrame::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QFrame_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QFrame::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QFrame::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QFrame_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QFrame::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QFrame::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QFrame_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QFrame::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QFrame::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QFrame_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QFrame::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QFrame::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QFrame_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QFrame::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QFrame::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QFrame_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QFrame::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QFrame::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QFrame_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QFrame::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QFrame::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QFrame_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QFrame::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QFrame::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QFrame_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QFrame::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QFrame::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QFrame_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QFrame::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QFrame::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QFrame_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QFrame::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QFrame::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QFrame_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QFrame::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QFrame::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QFrame_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QFrame::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QFrame::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QFrame_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QFrame::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QFrame::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QFrame_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QFrame::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QFrame::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QFrame_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QFrame::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QFrame::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFrame_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QFrame::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QFrame::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFrame_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QFrame::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QFrame::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFrame_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QFrame::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QFrame_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QFrame_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QFrame_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QFrame_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QFrame_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QFrame_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QFrame_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QFrame_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QFrame_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QFrame_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QFrame_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QFrame_metaObject(const QFrame* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFrame_metacast(QFrame* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFrame_tr(const char* s) {
	QString _ret = QFrame::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFrame_trUtf8(const char* s) {
	QString _ret = QFrame::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QFrame_frameStyle(const QFrame* self) {
	return self->frameStyle();
}

void QFrame_setFrameStyle(QFrame* self, int frameStyle) {
	self->setFrameStyle(static_cast<int>(frameStyle));
}

int QFrame_frameWidth(const QFrame* self) {
	return self->frameWidth();
}

QSize* QFrame_sizeHint(const QFrame* self) {
	return new QSize(self->sizeHint());
}

int QFrame_frameShape(const QFrame* self) {
	QFrame::Shape _ret = self->frameShape();
	return static_cast<int>(_ret);
}

void QFrame_setFrameShape(QFrame* self, int frameShape) {
	self->setFrameShape(static_cast<QFrame::Shape>(frameShape));
}

int QFrame_frameShadow(const QFrame* self) {
	QFrame::Shadow _ret = self->frameShadow();
	return static_cast<int>(_ret);
}

void QFrame_setFrameShadow(QFrame* self, int frameShadow) {
	self->setFrameShadow(static_cast<QFrame::Shadow>(frameShadow));
}

int QFrame_lineWidth(const QFrame* self) {
	return self->lineWidth();
}

void QFrame_setLineWidth(QFrame* self, int lineWidth) {
	self->setLineWidth(static_cast<int>(lineWidth));
}

int QFrame_midLineWidth(const QFrame* self) {
	return self->midLineWidth();
}

void QFrame_setMidLineWidth(QFrame* self, int midLineWidth) {
	self->setMidLineWidth(static_cast<int>(midLineWidth));
}

QRect* QFrame_frameRect(const QFrame* self) {
	return new QRect(self->frameRect());
}

void QFrame_setFrameRect(QFrame* self, QRect* frameRect) {
	self->setFrameRect(*frameRect);
}

struct miqt_string QFrame_tr2(const char* s, const char* c) {
	QString _ret = QFrame::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFrame_tr3(const char* s, const char* c, int n) {
	QString _ret = QFrame::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFrame_trUtf82(const char* s, const char* c) {
	QString _ret = QFrame::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFrame_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QFrame::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFrame_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QFrame_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQFrame*)(self) )->virtualbase_sizeHint();
}

bool QFrame_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QFrame_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQFrame*)(self) )->virtualbase_event(e);
}

bool QFrame_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QFrame_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_paintEvent(param1);
}

bool QFrame_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QFrame_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_changeEvent(param1);
}

bool QFrame_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QFrame_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQFrame*)(self) )->virtualbase_devType();
}

bool QFrame_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QFrame_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_setVisible(visible);
}

bool QFrame_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QFrame_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQFrame*)(self) )->virtualbase_minimumSizeHint();
}

bool QFrame_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QFrame_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQFrame*)(self) )->virtualbase_heightForWidth(param1);
}

bool QFrame_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QFrame_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQFrame*)(self) )->virtualbase_hasHeightForWidth();
}

bool QFrame_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QFrame_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQFrame*)(self) )->virtualbase_paintEngine();
}

bool QFrame_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QFrame_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_mousePressEvent(event);
}

bool QFrame_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QFrame_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QFrame_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QFrame_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QFrame_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QFrame_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QFrame_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QFrame_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_wheelEvent(event);
}

bool QFrame_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QFrame_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_keyPressEvent(event);
}

bool QFrame_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QFrame_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QFrame_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QFrame_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_focusInEvent(event);
}

bool QFrame_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QFrame_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_focusOutEvent(event);
}

bool QFrame_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QFrame_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_enterEvent(event);
}

bool QFrame_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QFrame_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_leaveEvent(event);
}

bool QFrame_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QFrame_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_moveEvent(event);
}

bool QFrame_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QFrame_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_resizeEvent(event);
}

bool QFrame_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QFrame_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_closeEvent(event);
}

bool QFrame_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QFrame_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QFrame_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QFrame_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_tabletEvent(event);
}

bool QFrame_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QFrame_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_actionEvent(event);
}

bool QFrame_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QFrame_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QFrame_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QFrame_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QFrame_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QFrame_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QFrame_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QFrame_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_dropEvent(event);
}

bool QFrame_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QFrame_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_showEvent(event);
}

bool QFrame_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QFrame_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_hideEvent(event);
}

bool QFrame_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QFrame_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQFrame*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QFrame_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QFrame_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQFrame*)(self) )->virtualbase_metric(param1);
}

bool QFrame_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QFrame_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQFrame*)(self) )->virtualbase_initPainter(painter);
}

bool QFrame_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QFrame_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQFrame*)(self) )->virtualbase_redirected(offset);
}

bool QFrame_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QFrame_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQFrame*)(self) )->virtualbase_sharedPainter();
}

bool QFrame_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QFrame_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QFrame_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QFrame_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQFrame*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QFrame_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QFrame_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQFrame*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QFrame_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QFrame_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQFrame*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QFrame_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QFrame_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_timerEvent(event);
}

bool QFrame_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QFrame_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_childEvent(event);
}

bool QFrame_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QFrame_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_customEvent(event);
}

bool QFrame_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QFrame_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_connectNotify(signal);
}

bool QFrame_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QFrame_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFrame*)(self) )->virtualbase_disconnectNotify(signal);
}

void QFrame_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawFrame(param1);

}

void QFrame_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

void QFrame_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QFrame_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QFrame_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QFrame_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QFrame_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QFrame_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QFrame_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QFrame_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QFrame_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQFrame* self_cast = dynamic_cast<MiqtVirtualQFrame*>( (QFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QFrame_delete(QFrame* self) {
	delete self;
}

