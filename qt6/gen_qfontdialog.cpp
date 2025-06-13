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
#include <QFont>
#include <QFontDialog>
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
#include <qfontdialog.h>
#include "gen_qfontdialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QFontDialog_currentFontChanged(intptr_t, QFont*);
void miqt_exec_callback_QFontDialog_fontSelected(intptr_t, QFont*);
void miqt_exec_callback_QFontDialog_setVisible(QFontDialog*, intptr_t, bool);
void miqt_exec_callback_QFontDialog_changeEvent(QFontDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QFontDialog_done(QFontDialog*, intptr_t, int);
bool miqt_exec_callback_QFontDialog_eventFilter(QFontDialog*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QFontDialog_sizeHint(const QFontDialog*, intptr_t);
QSize* miqt_exec_callback_QFontDialog_minimumSizeHint(const QFontDialog*, intptr_t);
void miqt_exec_callback_QFontDialog_open(QFontDialog*, intptr_t);
int miqt_exec_callback_QFontDialog_exec(QFontDialog*, intptr_t);
void miqt_exec_callback_QFontDialog_accept(QFontDialog*, intptr_t);
void miqt_exec_callback_QFontDialog_reject(QFontDialog*, intptr_t);
void miqt_exec_callback_QFontDialog_keyPressEvent(QFontDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFontDialog_closeEvent(QFontDialog*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QFontDialog_showEvent(QFontDialog*, intptr_t, QShowEvent*);
void miqt_exec_callback_QFontDialog_resizeEvent(QFontDialog*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QFontDialog_contextMenuEvent(QFontDialog*, intptr_t, QContextMenuEvent*);
int miqt_exec_callback_QFontDialog_devType(const QFontDialog*, intptr_t);
int miqt_exec_callback_QFontDialog_heightForWidth(const QFontDialog*, intptr_t, int);
bool miqt_exec_callback_QFontDialog_hasHeightForWidth(const QFontDialog*, intptr_t);
QPaintEngine* miqt_exec_callback_QFontDialog_paintEngine(const QFontDialog*, intptr_t);
bool miqt_exec_callback_QFontDialog_event(QFontDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QFontDialog_mousePressEvent(QFontDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFontDialog_mouseReleaseEvent(QFontDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFontDialog_mouseDoubleClickEvent(QFontDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFontDialog_mouseMoveEvent(QFontDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFontDialog_wheelEvent(QFontDialog*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QFontDialog_keyReleaseEvent(QFontDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFontDialog_focusInEvent(QFontDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFontDialog_focusOutEvent(QFontDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFontDialog_enterEvent(QFontDialog*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QFontDialog_leaveEvent(QFontDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QFontDialog_paintEvent(QFontDialog*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QFontDialog_moveEvent(QFontDialog*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QFontDialog_tabletEvent(QFontDialog*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QFontDialog_actionEvent(QFontDialog*, intptr_t, QActionEvent*);
void miqt_exec_callback_QFontDialog_dragEnterEvent(QFontDialog*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QFontDialog_dragMoveEvent(QFontDialog*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QFontDialog_dragLeaveEvent(QFontDialog*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QFontDialog_dropEvent(QFontDialog*, intptr_t, QDropEvent*);
void miqt_exec_callback_QFontDialog_hideEvent(QFontDialog*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QFontDialog_nativeEvent(QFontDialog*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QFontDialog_metric(const QFontDialog*, intptr_t, int);
void miqt_exec_callback_QFontDialog_initPainter(const QFontDialog*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QFontDialog_redirected(const QFontDialog*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QFontDialog_sharedPainter(const QFontDialog*, intptr_t);
void miqt_exec_callback_QFontDialog_inputMethodEvent(QFontDialog*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QFontDialog_inputMethodQuery(const QFontDialog*, intptr_t, int);
bool miqt_exec_callback_QFontDialog_focusNextPrevChild(QFontDialog*, intptr_t, bool);
void miqt_exec_callback_QFontDialog_timerEvent(QFontDialog*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QFontDialog_childEvent(QFontDialog*, intptr_t, QChildEvent*);
void miqt_exec_callback_QFontDialog_customEvent(QFontDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QFontDialog_connectNotify(QFontDialog*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QFontDialog_disconnectNotify(QFontDialog*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFontDialog final : public QFontDialog {
public:

	MiqtVirtualQFontDialog(QWidget* parent): QFontDialog(parent) {}
	MiqtVirtualQFontDialog(): QFontDialog() {}
	MiqtVirtualQFontDialog(const QFont& initial): QFontDialog(initial) {}
	MiqtVirtualQFontDialog(const QFont& initial, QWidget* parent): QFontDialog(initial, parent) {}

	virtual ~MiqtVirtualQFontDialog() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QFontDialog::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QFontDialog_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QFontDialog_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__changeEvent == 0) {
			QFontDialog::changeEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_changeEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int result) override {
		if (handle__done == 0) {
			QFontDialog::done(result);
			return;
		}

		int sigval1 = result;
		miqt_exec_callback_QFontDialog_done(this, handle__done, sigval1);

	}

	friend void QFontDialog_virtualbase_done(void* self, int result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QFontDialog::eventFilter(object, event);
		}

		QObject* sigval1 = object;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QFontDialog_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QFontDialog_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QFontDialog::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QFontDialog_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QFontDialog_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QFontDialog::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QFontDialog_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QFontDialog_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__open == 0) {
			QFontDialog::open();
			return;
		}

		miqt_exec_callback_QFontDialog_open(this, handle__open);

	}

	friend void QFontDialog_virtualbase_open(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__exec == 0) {
			return QFontDialog::exec();
		}

		int callback_return_value = miqt_exec_callback_QFontDialog_exec(this, handle__exec);
		return static_cast<int>(callback_return_value);
	}

	friend int QFontDialog_virtualbase_exec(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__accept == 0) {
			QFontDialog::accept();
			return;
		}

		miqt_exec_callback_QFontDialog_accept(this, handle__accept);

	}

	friend void QFontDialog_virtualbase_accept(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__reject == 0) {
			QFontDialog::reject();
			return;
		}

		miqt_exec_callback_QFontDialog_reject(this, handle__reject);

	}

	friend void QFontDialog_virtualbase_reject(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QFontDialog::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QFontDialog_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__closeEvent == 0) {
			QFontDialog::closeEvent(param1);
			return;
		}

		QCloseEvent* sigval1 = param1;
		miqt_exec_callback_QFontDialog_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QFontDialog::showEvent(param1);
			return;
		}

		QShowEvent* sigval1 = param1;
		miqt_exec_callback_QFontDialog_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_showEvent(void* self, QShowEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QFontDialog::resizeEvent(param1);
			return;
		}

		QResizeEvent* sigval1 = param1;
		miqt_exec_callback_QFontDialog_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QFontDialog::contextMenuEvent(param1);
			return;
		}

		QContextMenuEvent* sigval1 = param1;
		miqt_exec_callback_QFontDialog_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QFontDialog::devType();
		}

		int callback_return_value = miqt_exec_callback_QFontDialog_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QFontDialog_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QFontDialog::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QFontDialog_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QFontDialog_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QFontDialog::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QFontDialog_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QFontDialog_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QFontDialog::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QFontDialog_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QFontDialog_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QFontDialog::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QFontDialog_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QFontDialog_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QFontDialog::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QFontDialog::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QFontDialog::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QFontDialog::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QFontDialog::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QFontDialog::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QFontDialog::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QFontDialog::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QFontDialog::enterEvent(event);
			return;
		}

		QEnterEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QFontDialog::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QFontDialog::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QFontDialog::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QFontDialog::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QFontDialog::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QFontDialog::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QFontDialog::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QFontDialog::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QFontDialog::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QFontDialog::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QFontDialog::nativeEvent(eventType, message, result);
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
		bool callback_return_value = miqt_exec_callback_QFontDialog_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QFontDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QFontDialog::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QFontDialog_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QFontDialog_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QFontDialog::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QFontDialog_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QFontDialog_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QFontDialog::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QFontDialog_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QFontDialog_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QFontDialog::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QFontDialog_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QFontDialog_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QFontDialog::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QFontDialog_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QFontDialog::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QFontDialog_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QFontDialog_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QFontDialog::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QFontDialog_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QFontDialog_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QFontDialog::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QFontDialog::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QFontDialog::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QFontDialog_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QFontDialog_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QFontDialog::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QFontDialog_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QFontDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QFontDialog::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QFontDialog_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QFontDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QFontDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
	friend void QFontDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QFontDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QFontDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QFontDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QFontDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QFontDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QFontDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QFontDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QFontDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QFontDialog* QFontDialog_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQFontDialog(parent);
}

QFontDialog* QFontDialog_new2() {
	return new (std::nothrow) MiqtVirtualQFontDialog();
}

QFontDialog* QFontDialog_new3(QFont* initial) {
	return new (std::nothrow) MiqtVirtualQFontDialog(*initial);
}

QFontDialog* QFontDialog_new4(QFont* initial, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQFontDialog(*initial, parent);
}

void QFontDialog_virtbase(QFontDialog* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QFontDialog_metaObject(const QFontDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFontDialog_metacast(QFontDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFontDialog_tr(const char* s) {
	QString _ret = QFontDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontDialog_setCurrentFont(QFontDialog* self, QFont* font) {
	self->setCurrentFont(*font);
}

QFont* QFontDialog_currentFont(const QFontDialog* self) {
	return new QFont(self->currentFont());
}

QFont* QFontDialog_selectedFont(const QFontDialog* self) {
	return new QFont(self->selectedFont());
}

void QFontDialog_setOption(QFontDialog* self, int option) {
	self->setOption(static_cast<QFontDialog::FontDialogOption>(option));
}

bool QFontDialog_testOption(const QFontDialog* self, int option) {
	return self->testOption(static_cast<QFontDialog::FontDialogOption>(option));
}

void QFontDialog_setOptions(QFontDialog* self, int options) {
	self->setOptions(static_cast<QFontDialog::FontDialogOptions>(options));
}

int QFontDialog_options(const QFontDialog* self) {
	QFontDialog::FontDialogOptions _ret = self->options();
	return static_cast<int>(_ret);
}

void QFontDialog_setVisible(QFontDialog* self, bool visible) {
	self->setVisible(visible);
}

QFont* QFontDialog_getFont(bool* ok) {
	return new QFont(QFontDialog::getFont(ok));
}

QFont* QFontDialog_getFont2(bool* ok, QFont* initial) {
	return new QFont(QFontDialog::getFont(ok, *initial));
}

void QFontDialog_currentFontChanged(QFontDialog* self, QFont* font) {
	self->currentFontChanged(*font);
}

void QFontDialog_connect_currentFontChanged(QFontDialog* self, intptr_t slot) {
	QFontDialog::connect(self, static_cast<void (QFontDialog::*)(const QFont&)>(&QFontDialog::currentFontChanged), self, [=](const QFont& font) {
		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		miqt_exec_callback_QFontDialog_currentFontChanged(slot, sigval1);
	});
}

void QFontDialog_fontSelected(QFontDialog* self, QFont* font) {
	self->fontSelected(*font);
}

void QFontDialog_connect_fontSelected(QFontDialog* self, intptr_t slot) {
	QFontDialog::connect(self, static_cast<void (QFontDialog::*)(const QFont&)>(&QFontDialog::fontSelected), self, [=](const QFont& font) {
		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		miqt_exec_callback_QFontDialog_fontSelected(slot, sigval1);
	});
}

struct miqt_string QFontDialog_tr2(const char* s, const char* c) {
	QString _ret = QFontDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFontDialog_tr3(const char* s, const char* c, int n) {
	QString _ret = QFontDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontDialog_setOption2(QFontDialog* self, int option, bool on) {
	self->setOption(static_cast<QFontDialog::FontDialogOption>(option), on);
}

QFont* QFontDialog_getFont3(bool* ok, QWidget* parent) {
	return new QFont(QFontDialog::getFont(ok, parent));
}

QFont* QFontDialog_getFont4(bool* ok, QFont* initial, QWidget* parent) {
	return new QFont(QFontDialog::getFont(ok, *initial, parent));
}

QFont* QFontDialog_getFont5(bool* ok, QFont* initial, QWidget* parent, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new QFont(QFontDialog::getFont(ok, *initial, parent, title_QString));
}

QFont* QFontDialog_getFont6(bool* ok, QFont* initial, QWidget* parent, struct miqt_string title, int options) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new QFont(QFontDialog::getFont(ok, *initial, parent, title_QString, static_cast<QFontDialog::FontDialogOptions>(options)));
}

bool QFontDialog_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QFontDialog_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::setVisible(visible);
}

bool QFontDialog_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QFontDialog_virtualbase_changeEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::changeEvent(event);
}

bool QFontDialog_override_virtual_done(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__done = slot;
	return true;
}

void QFontDialog_virtualbase_done(void* self, int result) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::done(static_cast<int>(result));
}

bool QFontDialog_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QFontDialog_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::eventFilter(object, event);
}

bool QFontDialog_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QFontDialog_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQFontDialog*>(self)->QFontDialog::sizeHint());
}

bool QFontDialog_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QFontDialog_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQFontDialog*>(self)->QFontDialog::minimumSizeHint());
}

bool QFontDialog_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__open = slot;
	return true;
}

void QFontDialog_virtualbase_open(void* self) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::open();
}

bool QFontDialog_override_virtual_exec(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__exec = slot;
	return true;
}

int QFontDialog_virtualbase_exec(void* self) {
	return static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::exec();
}

bool QFontDialog_override_virtual_accept(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__accept = slot;
	return true;
}

void QFontDialog_virtualbase_accept(void* self) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::accept();
}

bool QFontDialog_override_virtual_reject(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reject = slot;
	return true;
}

void QFontDialog_virtualbase_reject(void* self) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::reject();
}

bool QFontDialog_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QFontDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::keyPressEvent(param1);
}

bool QFontDialog_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QFontDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::closeEvent(param1);
}

bool QFontDialog_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QFontDialog_virtualbase_showEvent(void* self, QShowEvent* param1) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::showEvent(param1);
}

bool QFontDialog_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QFontDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::resizeEvent(param1);
}

bool QFontDialog_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QFontDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::contextMenuEvent(param1);
}

bool QFontDialog_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QFontDialog_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQFontDialog*>(self)->QFontDialog::devType();
}

bool QFontDialog_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QFontDialog_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQFontDialog*>(self)->QFontDialog::heightForWidth(static_cast<int>(param1));
}

bool QFontDialog_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QFontDialog_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQFontDialog*>(self)->QFontDialog::hasHeightForWidth();
}

bool QFontDialog_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QFontDialog_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQFontDialog*>(self)->QFontDialog::paintEngine();
}

bool QFontDialog_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QFontDialog_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::event(event);
}

bool QFontDialog_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QFontDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::mousePressEvent(event);
}

bool QFontDialog_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QFontDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::mouseReleaseEvent(event);
}

bool QFontDialog_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QFontDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::mouseDoubleClickEvent(event);
}

bool QFontDialog_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QFontDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::mouseMoveEvent(event);
}

bool QFontDialog_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QFontDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::wheelEvent(event);
}

bool QFontDialog_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QFontDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::keyReleaseEvent(event);
}

bool QFontDialog_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QFontDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::focusInEvent(event);
}

bool QFontDialog_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QFontDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::focusOutEvent(event);
}

bool QFontDialog_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QFontDialog_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::enterEvent(event);
}

bool QFontDialog_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QFontDialog_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::leaveEvent(event);
}

bool QFontDialog_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QFontDialog_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::paintEvent(event);
}

bool QFontDialog_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QFontDialog_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::moveEvent(event);
}

bool QFontDialog_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QFontDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::tabletEvent(event);
}

bool QFontDialog_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QFontDialog_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::actionEvent(event);
}

bool QFontDialog_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QFontDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::dragEnterEvent(event);
}

bool QFontDialog_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QFontDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::dragMoveEvent(event);
}

bool QFontDialog_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QFontDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::dragLeaveEvent(event);
}

bool QFontDialog_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QFontDialog_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::dropEvent(event);
}

bool QFontDialog_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QFontDialog_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::hideEvent(event);
}

bool QFontDialog_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QFontDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
}

bool QFontDialog_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QFontDialog_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQFontDialog*>(self)->QFontDialog::metric(static_cast<MiqtVirtualQFontDialog::PaintDeviceMetric>(param1));
}

bool QFontDialog_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QFontDialog_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQFontDialog*>(self)->QFontDialog::initPainter(painter);
}

bool QFontDialog_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QFontDialog_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQFontDialog*>(self)->QFontDialog::redirected(offset);
}

bool QFontDialog_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QFontDialog_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQFontDialog*>(self)->QFontDialog::sharedPainter();
}

bool QFontDialog_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QFontDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::inputMethodEvent(param1);
}

bool QFontDialog_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QFontDialog_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQFontDialog*>(self)->QFontDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QFontDialog_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QFontDialog_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::focusNextPrevChild(next);
}

bool QFontDialog_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QFontDialog_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::timerEvent(event);
}

bool QFontDialog_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QFontDialog_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::childEvent(event);
}

bool QFontDialog_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QFontDialog_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::customEvent(event);
}

bool QFontDialog_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QFontDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::connectNotify(*signal);
}

bool QFontDialog_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QFontDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQFontDialog*>(self)->QFontDialog::disconnectNotify(*signal);
}

void QFontDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->adjustPosition(param1);
}

void QFontDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QFontDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QFontDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QFontDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QFontDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QFontDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QFontDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QFontDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QFontDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QFontDialog_delete(QFontDialog* self) {
	delete self;
}

