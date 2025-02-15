#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
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
#include <QWheelEvent>
#include <QWidget>
#include <qdialog.h>
#include "gen_qdialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QDialog_finished(intptr_t, int);
void miqt_exec_callback_QDialog_accepted(intptr_t);
void miqt_exec_callback_QDialog_rejected(intptr_t);
void miqt_exec_callback_QDialog_setVisible(QDialog*, intptr_t, bool);
QSize* miqt_exec_callback_QDialog_sizeHint(const QDialog*, intptr_t);
QSize* miqt_exec_callback_QDialog_minimumSizeHint(const QDialog*, intptr_t);
void miqt_exec_callback_QDialog_open(QDialog*, intptr_t);
int miqt_exec_callback_QDialog_exec(QDialog*, intptr_t);
void miqt_exec_callback_QDialog_done(QDialog*, intptr_t, int);
void miqt_exec_callback_QDialog_accept(QDialog*, intptr_t);
void miqt_exec_callback_QDialog_reject(QDialog*, intptr_t);
void miqt_exec_callback_QDialog_keyPressEvent(QDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDialog_closeEvent(QDialog*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QDialog_showEvent(QDialog*, intptr_t, QShowEvent*);
void miqt_exec_callback_QDialog_resizeEvent(QDialog*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QDialog_contextMenuEvent(QDialog*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QDialog_eventFilter(QDialog*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QDialog_devType(const QDialog*, intptr_t);
int miqt_exec_callback_QDialog_heightForWidth(const QDialog*, intptr_t, int);
bool miqt_exec_callback_QDialog_hasHeightForWidth(const QDialog*, intptr_t);
QPaintEngine* miqt_exec_callback_QDialog_paintEngine(const QDialog*, intptr_t);
bool miqt_exec_callback_QDialog_event(QDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QDialog_mousePressEvent(QDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDialog_mouseReleaseEvent(QDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDialog_mouseDoubleClickEvent(QDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDialog_mouseMoveEvent(QDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDialog_wheelEvent(QDialog*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDialog_keyReleaseEvent(QDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDialog_focusInEvent(QDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDialog_focusOutEvent(QDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDialog_enterEvent(QDialog*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QDialog_leaveEvent(QDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QDialog_paintEvent(QDialog*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QDialog_moveEvent(QDialog*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QDialog_tabletEvent(QDialog*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QDialog_actionEvent(QDialog*, intptr_t, QActionEvent*);
void miqt_exec_callback_QDialog_dragEnterEvent(QDialog*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QDialog_dragMoveEvent(QDialog*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QDialog_dragLeaveEvent(QDialog*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QDialog_dropEvent(QDialog*, intptr_t, QDropEvent*);
void miqt_exec_callback_QDialog_hideEvent(QDialog*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QDialog_nativeEvent(QDialog*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QDialog_changeEvent(QDialog*, intptr_t, QEvent*);
int miqt_exec_callback_QDialog_metric(const QDialog*, intptr_t, int);
void miqt_exec_callback_QDialog_initPainter(const QDialog*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QDialog_redirected(const QDialog*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QDialog_sharedPainter(const QDialog*, intptr_t);
void miqt_exec_callback_QDialog_inputMethodEvent(QDialog*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QDialog_inputMethodQuery(const QDialog*, intptr_t, int);
bool miqt_exec_callback_QDialog_focusNextPrevChild(QDialog*, intptr_t, bool);
void miqt_exec_callback_QDialog_timerEvent(QDialog*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDialog_childEvent(QDialog*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDialog_customEvent(QDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QDialog_connectNotify(QDialog*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDialog_disconnectNotify(QDialog*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDialog final : public QDialog {
public:

	MiqtVirtualQDialog(QWidget* parent): QDialog(parent) {};
	MiqtVirtualQDialog(): QDialog() {};
	MiqtVirtualQDialog(QWidget* parent, Qt::WindowFlags f): QDialog(parent, f) {};

	virtual ~MiqtVirtualQDialog() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QDialog_setVisible(this, handle__setVisible, sigval1);

		
	}

	friend void QDialog_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDialog_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	friend QSize* QDialog_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDialog_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	friend QSize* QDialog_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__open == 0) {
			QDialog::open();
			return;
		}
		

		miqt_exec_callback_QDialog_open(this, handle__open);

		
	}

	friend void QDialog_virtualbase_open(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__exec == 0) {
			return QDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QDialog_exec(this, handle__exec);

		return static_cast<int>(callback_return_value);
	}

	friend int QDialog_virtualbase_exec(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int param1) override {
		if (handle__done == 0) {
			QDialog::done(param1);
			return;
		}
		
		int sigval1 = param1;

		miqt_exec_callback_QDialog_done(this, handle__done, sigval1);

		
	}

	friend void QDialog_virtualbase_done(void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__accept == 0) {
			QDialog::accept();
			return;
		}
		

		miqt_exec_callback_QDialog_accept(this, handle__accept);

		
	}

	friend void QDialog_virtualbase_accept(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__reject == 0) {
			QDialog::reject();
			return;
		}
		

		miqt_exec_callback_QDialog_reject(this, handle__reject);

		
	}

	friend void QDialog_virtualbase_reject(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QDialog_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__closeEvent == 0) {
			QDialog::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QDialog_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QDialog::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QDialog_showEvent(this, handle__showEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_showEvent(void* self, QShowEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QDialog::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QDialog_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QDialog_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QDialog_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QDialog::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QDialog_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	friend int QDialog_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QDialog::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QDialog_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int QDialog_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QDialog::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QDialog_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	friend bool QDialog_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QDialog::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QDialog_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	friend QPaintEngine* QDialog_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDialog::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDialog_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QDialog_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QDialog::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDialog_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QDialog::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDialog_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QDialog::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDialog_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QDialog::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDialog_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QDialog::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QDialog_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QDialog::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDialog_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QDialog::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDialog_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QDialog::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDialog_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QDialog::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QDialog_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QDialog::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDialog_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QDialog::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QDialog_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QDialog::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QDialog_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QDialog::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QDialog_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QDialog::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QDialog_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QDialog::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QDialog_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QDialog::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QDialog_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QDialog::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QDialog_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QDialog::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QDialog_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QDialog::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QDialog_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QDialog::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QDialog_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	friend bool QDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QDialog::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QDialog_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QDialog::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QDialog_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int QDialog_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QDialog::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QDialog_initPainter(this, handle__initPainter, sigval1);

		
	}

	friend void QDialog_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QDialog::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QDialog_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	friend QPaintDevice* QDialog_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QDialog::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QDialog_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	friend QPainter* QDialog_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QDialog::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QDialog_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QDialog::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QDialog_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	friend QVariant* QDialog_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QDialog::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QDialog_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	friend bool QDialog_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDialog::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDialog_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDialog::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDialog_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDialog::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDialog_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QDialog_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDialog::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDialog_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDialog::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDialog_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
	friend void QDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDialog* QDialog_new(QWidget* parent) {
	return new MiqtVirtualQDialog(parent);
}

QDialog* QDialog_new2() {
	return new MiqtVirtualQDialog();
}

QDialog* QDialog_new3(QWidget* parent, int f) {
	return new MiqtVirtualQDialog(parent, static_cast<Qt::WindowFlags>(f));
}

void QDialog_virtbase(QDialog* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QDialog_metaObject(const QDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDialog_metacast(QDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDialog_tr(const char* s) {
	QString _ret = QDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QDialog_result(const QDialog* self) {
	return self->result();
}

void QDialog_setVisible(QDialog* self, bool visible) {
	self->setVisible(visible);
}

QSize* QDialog_sizeHint(const QDialog* self) {
	return new QSize(self->sizeHint());
}

QSize* QDialog_minimumSizeHint(const QDialog* self) {
	return new QSize(self->minimumSizeHint());
}

void QDialog_setSizeGripEnabled(QDialog* self, bool sizeGripEnabled) {
	self->setSizeGripEnabled(sizeGripEnabled);
}

bool QDialog_isSizeGripEnabled(const QDialog* self) {
	return self->isSizeGripEnabled();
}

void QDialog_setModal(QDialog* self, bool modal) {
	self->setModal(modal);
}

void QDialog_setResult(QDialog* self, int r) {
	self->setResult(static_cast<int>(r));
}

void QDialog_finished(QDialog* self, int result) {
	self->finished(static_cast<int>(result));
}

void QDialog_connect_finished(QDialog* self, intptr_t slot) {
	MiqtVirtualQDialog::connect(self, static_cast<void (QDialog::*)(int)>(&QDialog::finished), self, [=](int result) {
		int sigval1 = result;
		miqt_exec_callback_QDialog_finished(slot, sigval1);
	});
}

void QDialog_accepted(QDialog* self) {
	self->accepted();
}

void QDialog_connect_accepted(QDialog* self, intptr_t slot) {
	MiqtVirtualQDialog::connect(self, static_cast<void (QDialog::*)()>(&QDialog::accepted), self, [=]() {
		miqt_exec_callback_QDialog_accepted(slot);
	});
}

void QDialog_rejected(QDialog* self) {
	self->rejected();
}

void QDialog_connect_rejected(QDialog* self, intptr_t slot) {
	MiqtVirtualQDialog::connect(self, static_cast<void (QDialog::*)()>(&QDialog::rejected), self, [=]() {
		miqt_exec_callback_QDialog_rejected(slot);
	});
}

void QDialog_open(QDialog* self) {
	self->open();
}

int QDialog_exec(QDialog* self) {
	return self->exec();
}

void QDialog_done(QDialog* self, int param1) {
	self->done(static_cast<int>(param1));
}

void QDialog_accept(QDialog* self) {
	self->accept();
}

void QDialog_reject(QDialog* self) {
	self->reject();
}

struct miqt_string QDialog_tr2(const char* s, const char* c) {
	QString _ret = QDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDialog_tr3(const char* s, const char* c, int n) {
	QString _ret = QDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDialog_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QDialog_virtualbase_setVisible(void* self, bool visible) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::setVisible(visible);

}

bool QDialog_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QDialog_virtualbase_sizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualQDialog*)(self) )->QDialog::sizeHint());

}

bool QDialog_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QDialog_virtualbase_minimumSizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualQDialog*)(self) )->QDialog::minimumSizeHint());

}

bool QDialog_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__open = slot;
	return true;
}

void QDialog_virtualbase_open(void* self) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::open();

}

bool QDialog_override_virtual_exec(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__exec = slot;
	return true;
}

int QDialog_virtualbase_exec(void* self) {

	return ( (MiqtVirtualQDialog*)(self) )->QDialog::exec();

}

bool QDialog_override_virtual_done(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__done = slot;
	return true;
}

void QDialog_virtualbase_done(void* self, int param1) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::done(static_cast<int>(param1));

}

bool QDialog_override_virtual_accept(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__accept = slot;
	return true;
}

void QDialog_virtualbase_accept(void* self) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::accept();

}

bool QDialog_override_virtual_reject(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reject = slot;
	return true;
}

void QDialog_virtualbase_reject(void* self) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::reject();

}

bool QDialog_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::keyPressEvent(param1);

}

bool QDialog_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::closeEvent(param1);

}

bool QDialog_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QDialog_virtualbase_showEvent(void* self, QShowEvent* param1) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::showEvent(param1);

}

bool QDialog_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::resizeEvent(param1);

}

bool QDialog_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::contextMenuEvent(param1);

}

bool QDialog_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {

	return ( (MiqtVirtualQDialog*)(self) )->QDialog::eventFilter(param1, param2);

}

bool QDialog_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QDialog_virtualbase_devType(const void* self) {

	return ( (const MiqtVirtualQDialog*)(self) )->QDialog::devType();

}

bool QDialog_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QDialog_virtualbase_heightForWidth(const void* self, int param1) {

	return ( (const MiqtVirtualQDialog*)(self) )->QDialog::heightForWidth(static_cast<int>(param1));

}

bool QDialog_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QDialog_virtualbase_hasHeightForWidth(const void* self) {

	return ( (const MiqtVirtualQDialog*)(self) )->QDialog::hasHeightForWidth();

}

bool QDialog_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QDialog_virtualbase_paintEngine(const void* self) {

	return ( (const MiqtVirtualQDialog*)(self) )->QDialog::paintEngine();

}

bool QDialog_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QDialog_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQDialog*)(self) )->QDialog::event(event);

}

bool QDialog_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::mousePressEvent(event);

}

bool QDialog_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::mouseReleaseEvent(event);

}

bool QDialog_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::mouseDoubleClickEvent(event);

}

bool QDialog_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::mouseMoveEvent(event);

}

bool QDialog_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::wheelEvent(event);

}

bool QDialog_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::keyReleaseEvent(event);

}

bool QDialog_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::focusInEvent(event);

}

bool QDialog_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::focusOutEvent(event);

}

bool QDialog_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QDialog_virtualbase_enterEvent(void* self, QEnterEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::enterEvent(event);

}

bool QDialog_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QDialog_virtualbase_leaveEvent(void* self, QEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::leaveEvent(event);

}

bool QDialog_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QDialog_virtualbase_paintEvent(void* self, QPaintEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::paintEvent(event);

}

bool QDialog_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QDialog_virtualbase_moveEvent(void* self, QMoveEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::moveEvent(event);

}

bool QDialog_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::tabletEvent(event);

}

bool QDialog_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QDialog_virtualbase_actionEvent(void* self, QActionEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::actionEvent(event);

}

bool QDialog_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::dragEnterEvent(event);

}

bool QDialog_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::dragMoveEvent(event);

}

bool QDialog_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::dragLeaveEvent(event);

}

bool QDialog_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QDialog_virtualbase_dropEvent(void* self, QDropEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::dropEvent(event);

}

bool QDialog_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QDialog_virtualbase_hideEvent(void* self, QHideEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::hideEvent(event);

}

bool QDialog_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);

	return ( (MiqtVirtualQDialog*)(self) )->QDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

}

bool QDialog_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QDialog_virtualbase_changeEvent(void* self, QEvent* param1) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::changeEvent(param1);

}

bool QDialog_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QDialog_virtualbase_metric(const void* self, int param1) {

	return ( (const MiqtVirtualQDialog*)(self) )->QDialog::metric(static_cast<MiqtVirtualQDialog::PaintDeviceMetric>(param1));

}

bool QDialog_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QDialog_virtualbase_initPainter(const void* self, QPainter* painter) {

	( (const MiqtVirtualQDialog*)(self) )->QDialog::initPainter(painter);

}

bool QDialog_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QDialog_virtualbase_redirected(const void* self, QPoint* offset) {

	return ( (const MiqtVirtualQDialog*)(self) )->QDialog::redirected(offset);

}

bool QDialog_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QDialog_virtualbase_sharedPainter(const void* self) {

	return ( (const MiqtVirtualQDialog*)(self) )->QDialog::sharedPainter();

}

bool QDialog_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::inputMethodEvent(param1);

}

bool QDialog_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QDialog_virtualbase_inputMethodQuery(const void* self, int param1) {

	return new QVariant(( (const MiqtVirtualQDialog*)(self) )->QDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

}

bool QDialog_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QDialog_virtualbase_focusNextPrevChild(void* self, bool next) {

	return ( (MiqtVirtualQDialog*)(self) )->QDialog::focusNextPrevChild(next);

}

bool QDialog_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QDialog_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::timerEvent(event);

}

bool QDialog_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QDialog_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::childEvent(event);

}

bool QDialog_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QDialog_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::customEvent(event);

}

bool QDialog_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::connectNotify(*signal);

}

bool QDialog_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQDialog*)(self) )->QDialog::disconnectNotify(*signal);

}

void QDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->adjustPosition(param1);

}

void QDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QDialog_delete(QDialog* self) {
	delete self;
}

