#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QColorDialog>
#include <QContextMenuEvent>
#include <QDialog>
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
#include <QWheelEvent>
#include <QWidget>
#include <qcolordialog.h>
#include "gen_qcolordialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QColorDialog_currentColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QColorDialog_colorSelected(intptr_t, QColor*);
void miqt_exec_callback_QColorDialog_setVisible(QColorDialog*, intptr_t, bool);
void miqt_exec_callback_QColorDialog_changeEvent(QColorDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QColorDialog_done(QColorDialog*, intptr_t, int);
QSize* miqt_exec_callback_QColorDialog_sizeHint(const QColorDialog*, intptr_t);
QSize* miqt_exec_callback_QColorDialog_minimumSizeHint(const QColorDialog*, intptr_t);
void miqt_exec_callback_QColorDialog_open(QColorDialog*, intptr_t);
int miqt_exec_callback_QColorDialog_exec(QColorDialog*, intptr_t);
void miqt_exec_callback_QColorDialog_accept(QColorDialog*, intptr_t);
void miqt_exec_callback_QColorDialog_reject(QColorDialog*, intptr_t);
void miqt_exec_callback_QColorDialog_keyPressEvent(QColorDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QColorDialog_closeEvent(QColorDialog*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QColorDialog_showEvent(QColorDialog*, intptr_t, QShowEvent*);
void miqt_exec_callback_QColorDialog_resizeEvent(QColorDialog*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QColorDialog_contextMenuEvent(QColorDialog*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QColorDialog_eventFilter(QColorDialog*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QColorDialog_devType(const QColorDialog*, intptr_t);
int miqt_exec_callback_QColorDialog_heightForWidth(const QColorDialog*, intptr_t, int);
bool miqt_exec_callback_QColorDialog_hasHeightForWidth(const QColorDialog*, intptr_t);
QPaintEngine* miqt_exec_callback_QColorDialog_paintEngine(const QColorDialog*, intptr_t);
bool miqt_exec_callback_QColorDialog_event(QColorDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QColorDialog_mousePressEvent(QColorDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColorDialog_mouseReleaseEvent(QColorDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColorDialog_mouseDoubleClickEvent(QColorDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColorDialog_mouseMoveEvent(QColorDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColorDialog_wheelEvent(QColorDialog*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QColorDialog_keyReleaseEvent(QColorDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QColorDialog_focusInEvent(QColorDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QColorDialog_focusOutEvent(QColorDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QColorDialog_enterEvent(QColorDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QColorDialog_leaveEvent(QColorDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QColorDialog_paintEvent(QColorDialog*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QColorDialog_moveEvent(QColorDialog*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QColorDialog_tabletEvent(QColorDialog*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QColorDialog_actionEvent(QColorDialog*, intptr_t, QActionEvent*);
void miqt_exec_callback_QColorDialog_dragEnterEvent(QColorDialog*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QColorDialog_dragMoveEvent(QColorDialog*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QColorDialog_dragLeaveEvent(QColorDialog*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QColorDialog_dropEvent(QColorDialog*, intptr_t, QDropEvent*);
void miqt_exec_callback_QColorDialog_hideEvent(QColorDialog*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QColorDialog_nativeEvent(QColorDialog*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QColorDialog_metric(const QColorDialog*, intptr_t, int);
void miqt_exec_callback_QColorDialog_initPainter(const QColorDialog*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QColorDialog_redirected(const QColorDialog*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QColorDialog_sharedPainter(const QColorDialog*, intptr_t);
void miqt_exec_callback_QColorDialog_inputMethodEvent(QColorDialog*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QColorDialog_inputMethodQuery(const QColorDialog*, intptr_t, int);
bool miqt_exec_callback_QColorDialog_focusNextPrevChild(QColorDialog*, intptr_t, bool);
void miqt_exec_callback_QColorDialog_timerEvent(QColorDialog*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QColorDialog_childEvent(QColorDialog*, intptr_t, QChildEvent*);
void miqt_exec_callback_QColorDialog_customEvent(QColorDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QColorDialog_connectNotify(QColorDialog*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QColorDialog_disconnectNotify(QColorDialog*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQColorDialog final : public QColorDialog {
public:

	MiqtVirtualQColorDialog(QWidget* parent): QColorDialog(parent) {}
	MiqtVirtualQColorDialog(): QColorDialog() {}
	MiqtVirtualQColorDialog(const QColor& initial): QColorDialog(initial) {}
	MiqtVirtualQColorDialog(const QColor& initial, QWidget* parent): QColorDialog(initial, parent) {}

	virtual ~MiqtVirtualQColorDialog() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QColorDialog::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QColorDialog_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QColorDialog_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__changeEvent == 0) {
			QColorDialog::changeEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_changeEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int result) override {
		if (handle__done == 0) {
			QColorDialog::done(result);
			return;
		}

		int sigval1 = result;
		miqt_exec_callback_QColorDialog_done(this, handle__done, sigval1);

	}

	friend void QColorDialog_virtualbase_done(void* self, int result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QColorDialog::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QColorDialog_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QColorDialog_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QColorDialog::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QColorDialog_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QColorDialog_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__open == 0) {
			QColorDialog::open();
			return;
		}

		miqt_exec_callback_QColorDialog_open(this, handle__open);

	}

	friend void QColorDialog_virtualbase_open(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__exec == 0) {
			return QColorDialog::exec();
		}

		int callback_return_value = miqt_exec_callback_QColorDialog_exec(this, handle__exec);
		return static_cast<int>(callback_return_value);
	}

	friend int QColorDialog_virtualbase_exec(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__accept == 0) {
			QColorDialog::accept();
			return;
		}

		miqt_exec_callback_QColorDialog_accept(this, handle__accept);

	}

	friend void QColorDialog_virtualbase_accept(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__reject == 0) {
			QColorDialog::reject();
			return;
		}

		miqt_exec_callback_QColorDialog_reject(this, handle__reject);

	}

	friend void QColorDialog_virtualbase_reject(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QColorDialog::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QColorDialog_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__closeEvent == 0) {
			QColorDialog::closeEvent(param1);
			return;
		}

		QCloseEvent* sigval1 = param1;
		miqt_exec_callback_QColorDialog_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QColorDialog::showEvent(param1);
			return;
		}

		QShowEvent* sigval1 = param1;
		miqt_exec_callback_QColorDialog_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_showEvent(void* self, QShowEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QColorDialog::resizeEvent(param1);
			return;
		}

		QResizeEvent* sigval1 = param1;
		miqt_exec_callback_QColorDialog_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QColorDialog::contextMenuEvent(param1);
			return;
		}

		QContextMenuEvent* sigval1 = param1;
		miqt_exec_callback_QColorDialog_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QColorDialog::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QColorDialog_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QColorDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QColorDialog::devType();
		}

		int callback_return_value = miqt_exec_callback_QColorDialog_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QColorDialog_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QColorDialog::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QColorDialog_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QColorDialog_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QColorDialog::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QColorDialog_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QColorDialog_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QColorDialog::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QColorDialog_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QColorDialog_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QColorDialog::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QColorDialog_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QColorDialog_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QColorDialog::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QColorDialog::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QColorDialog::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QColorDialog::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QColorDialog::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QColorDialog::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QColorDialog::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QColorDialog::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QColorDialog::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QColorDialog::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QColorDialog::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QColorDialog::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QColorDialog::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QColorDialog::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QColorDialog::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QColorDialog::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QColorDialog::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QColorDialog::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QColorDialog::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QColorDialog::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QColorDialog_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QColorDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QColorDialog::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QColorDialog_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QColorDialog_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QColorDialog::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QColorDialog_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QColorDialog_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QColorDialog::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QColorDialog_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QColorDialog_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QColorDialog::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QColorDialog_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QColorDialog_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QColorDialog::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QColorDialog_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QColorDialog::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QColorDialog_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QColorDialog_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QColorDialog::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QColorDialog_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QColorDialog_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QColorDialog::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QColorDialog::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QColorDialog::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QColorDialog_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QColorDialog_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QColorDialog::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QColorDialog_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QColorDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QColorDialog::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QColorDialog_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QColorDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QColorDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
	friend void QColorDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QColorDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QColorDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QColorDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QColorDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QColorDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QColorDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QColorDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QColorDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QColorDialog* QColorDialog_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQColorDialog(parent);
}

QColorDialog* QColorDialog_new2() {
	return new (std::nothrow) MiqtVirtualQColorDialog();
}

QColorDialog* QColorDialog_new3(QColor* initial) {
	return new (std::nothrow) MiqtVirtualQColorDialog(*initial);
}

QColorDialog* QColorDialog_new4(QColor* initial, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQColorDialog(*initial, parent);
}

void QColorDialog_virtbase(QColorDialog* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QColorDialog_metaObject(const QColorDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QColorDialog_metacast(QColorDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QColorDialog_tr(const char* s) {
	QString _ret = QColorDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColorDialog_trUtf8(const char* s) {
	QString _ret = QColorDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QColorDialog_setCurrentColor(QColorDialog* self, QColor* color) {
	self->setCurrentColor(*color);
}

QColor* QColorDialog_currentColor(const QColorDialog* self) {
	return new QColor(self->currentColor());
}

QColor* QColorDialog_selectedColor(const QColorDialog* self) {
	return new QColor(self->selectedColor());
}

void QColorDialog_setOption(QColorDialog* self, int option) {
	self->setOption(static_cast<QColorDialog::ColorDialogOption>(option));
}

bool QColorDialog_testOption(const QColorDialog* self, int option) {
	return self->testOption(static_cast<QColorDialog::ColorDialogOption>(option));
}

void QColorDialog_setOptions(QColorDialog* self, int options) {
	self->setOptions(static_cast<QColorDialog::ColorDialogOptions>(options));
}

int QColorDialog_options(const QColorDialog* self) {
	QColorDialog::ColorDialogOptions _ret = self->options();
	return static_cast<int>(_ret);
}

void QColorDialog_setVisible(QColorDialog* self, bool visible) {
	self->setVisible(visible);
}

QColor* QColorDialog_getColor() {
	return new QColor(QColorDialog::getColor());
}

unsigned int QColorDialog_getRgba() {
	QRgb _ret = QColorDialog::getRgba();
	return static_cast<unsigned int>(_ret);
}

int QColorDialog_customCount() {
	return QColorDialog::customCount();
}

QColor* QColorDialog_customColor(int index) {
	return new QColor(QColorDialog::customColor(static_cast<int>(index)));
}

void QColorDialog_setCustomColor(int index, QColor* color) {
	QColorDialog::setCustomColor(static_cast<int>(index), *color);
}

QColor* QColorDialog_standardColor(int index) {
	return new QColor(QColorDialog::standardColor(static_cast<int>(index)));
}

void QColorDialog_setStandardColor(int index, QColor* color) {
	QColorDialog::setStandardColor(static_cast<int>(index), *color);
}

void QColorDialog_currentColorChanged(QColorDialog* self, QColor* color) {
	self->currentColorChanged(*color);
}

void QColorDialog_connect_currentColorChanged(QColorDialog* self, intptr_t slot) {
	QColorDialog::connect(self, static_cast<void (QColorDialog::*)(const QColor&)>(&QColorDialog::currentColorChanged), self, [=](const QColor& color) {
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QColorDialog_currentColorChanged(slot, sigval1);
	});
}

void QColorDialog_colorSelected(QColorDialog* self, QColor* color) {
	self->colorSelected(*color);
}

void QColorDialog_connect_colorSelected(QColorDialog* self, intptr_t slot) {
	QColorDialog::connect(self, static_cast<void (QColorDialog::*)(const QColor&)>(&QColorDialog::colorSelected), self, [=](const QColor& color) {
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QColorDialog_colorSelected(slot, sigval1);
	});
}

struct miqt_string QColorDialog_tr2(const char* s, const char* c) {
	QString _ret = QColorDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColorDialog_tr3(const char* s, const char* c, int n) {
	QString _ret = QColorDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColorDialog_trUtf82(const char* s, const char* c) {
	QString _ret = QColorDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColorDialog_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QColorDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QColorDialog_setOption2(QColorDialog* self, int option, bool on) {
	self->setOption(static_cast<QColorDialog::ColorDialogOption>(option), on);
}

QColor* QColorDialog_getColorWithInitial(QColor* initial) {
	return new QColor(QColorDialog::getColor(*initial));
}

QColor* QColorDialog_getColor2(QColor* initial, QWidget* parent) {
	return new QColor(QColorDialog::getColor(*initial, parent));
}

QColor* QColorDialog_getColor3(QColor* initial, QWidget* parent, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new QColor(QColorDialog::getColor(*initial, parent, title_QString));
}

QColor* QColorDialog_getColor4(QColor* initial, QWidget* parent, struct miqt_string title, int options) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new QColor(QColorDialog::getColor(*initial, parent, title_QString, static_cast<QColorDialog::ColorDialogOptions>(options)));
}

unsigned int QColorDialog_getRgbaWithRgba(unsigned int rgba) {
	QRgb _ret = QColorDialog::getRgba(static_cast<QRgb>(rgba));
	return static_cast<unsigned int>(_ret);
}

unsigned int QColorDialog_getRgba2(unsigned int rgba, bool* ok) {
	QRgb _ret = QColorDialog::getRgba(static_cast<QRgb>(rgba), ok);
	return static_cast<unsigned int>(_ret);
}

unsigned int QColorDialog_getRgba3(unsigned int rgba, bool* ok, QWidget* parent) {
	QRgb _ret = QColorDialog::getRgba(static_cast<QRgb>(rgba), ok, parent);
	return static_cast<unsigned int>(_ret);
}

bool QColorDialog_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QColorDialog_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::setVisible(visible);
}

bool QColorDialog_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QColorDialog_virtualbase_changeEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::changeEvent(event);
}

bool QColorDialog_override_virtual_done(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__done = slot;
	return true;
}

void QColorDialog_virtualbase_done(void* self, int result) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::done(static_cast<int>(result));
}

bool QColorDialog_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QColorDialog_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQColorDialog*>(self)->QColorDialog::sizeHint());
}

bool QColorDialog_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QColorDialog_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQColorDialog*>(self)->QColorDialog::minimumSizeHint());
}

bool QColorDialog_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__open = slot;
	return true;
}

void QColorDialog_virtualbase_open(void* self) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::open();
}

bool QColorDialog_override_virtual_exec(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__exec = slot;
	return true;
}

int QColorDialog_virtualbase_exec(void* self) {
	return static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::exec();
}

bool QColorDialog_override_virtual_accept(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__accept = slot;
	return true;
}

void QColorDialog_virtualbase_accept(void* self) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::accept();
}

bool QColorDialog_override_virtual_reject(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reject = slot;
	return true;
}

void QColorDialog_virtualbase_reject(void* self) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::reject();
}

bool QColorDialog_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QColorDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::keyPressEvent(param1);
}

bool QColorDialog_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QColorDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::closeEvent(param1);
}

bool QColorDialog_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QColorDialog_virtualbase_showEvent(void* self, QShowEvent* param1) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::showEvent(param1);
}

bool QColorDialog_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QColorDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::resizeEvent(param1);
}

bool QColorDialog_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QColorDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::contextMenuEvent(param1);
}

bool QColorDialog_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QColorDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::eventFilter(param1, param2);
}

bool QColorDialog_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QColorDialog_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQColorDialog*>(self)->QColorDialog::devType();
}

bool QColorDialog_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QColorDialog_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQColorDialog*>(self)->QColorDialog::heightForWidth(static_cast<int>(param1));
}

bool QColorDialog_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QColorDialog_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQColorDialog*>(self)->QColorDialog::hasHeightForWidth();
}

bool QColorDialog_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QColorDialog_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQColorDialog*>(self)->QColorDialog::paintEngine();
}

bool QColorDialog_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QColorDialog_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::event(event);
}

bool QColorDialog_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QColorDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::mousePressEvent(event);
}

bool QColorDialog_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QColorDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::mouseReleaseEvent(event);
}

bool QColorDialog_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QColorDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::mouseDoubleClickEvent(event);
}

bool QColorDialog_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QColorDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::mouseMoveEvent(event);
}

bool QColorDialog_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QColorDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::wheelEvent(event);
}

bool QColorDialog_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QColorDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::keyReleaseEvent(event);
}

bool QColorDialog_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QColorDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::focusInEvent(event);
}

bool QColorDialog_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QColorDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::focusOutEvent(event);
}

bool QColorDialog_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QColorDialog_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::enterEvent(event);
}

bool QColorDialog_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QColorDialog_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::leaveEvent(event);
}

bool QColorDialog_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QColorDialog_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::paintEvent(event);
}

bool QColorDialog_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QColorDialog_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::moveEvent(event);
}

bool QColorDialog_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QColorDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::tabletEvent(event);
}

bool QColorDialog_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QColorDialog_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::actionEvent(event);
}

bool QColorDialog_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QColorDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::dragEnterEvent(event);
}

bool QColorDialog_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QColorDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::dragMoveEvent(event);
}

bool QColorDialog_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QColorDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::dragLeaveEvent(event);
}

bool QColorDialog_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QColorDialog_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::dropEvent(event);
}

bool QColorDialog_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QColorDialog_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::hideEvent(event);
}

bool QColorDialog_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QColorDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QColorDialog_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QColorDialog_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQColorDialog*>(self)->QColorDialog::metric(static_cast<MiqtVirtualQColorDialog::PaintDeviceMetric>(param1));
}

bool QColorDialog_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QColorDialog_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQColorDialog*>(self)->QColorDialog::initPainter(painter);
}

bool QColorDialog_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QColorDialog_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQColorDialog*>(self)->QColorDialog::redirected(offset);
}

bool QColorDialog_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QColorDialog_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQColorDialog*>(self)->QColorDialog::sharedPainter();
}

bool QColorDialog_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QColorDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::inputMethodEvent(param1);
}

bool QColorDialog_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QColorDialog_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQColorDialog*>(self)->QColorDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QColorDialog_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QColorDialog_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::focusNextPrevChild(next);
}

bool QColorDialog_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QColorDialog_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::timerEvent(event);
}

bool QColorDialog_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QColorDialog_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::childEvent(event);
}

bool QColorDialog_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QColorDialog_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::customEvent(event);
}

bool QColorDialog_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QColorDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::connectNotify(*signal);
}

bool QColorDialog_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QColorDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQColorDialog*>(self)->QColorDialog::disconnectNotify(*signal);
}

void QColorDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->adjustPosition(param1);
}

void QColorDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QColorDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QColorDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QColorDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QColorDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QColorDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QColorDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QColorDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QColorDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QColorDialog_delete(QColorDialog* self) {
	delete self;
}

