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
#include <QPrintPreviewDialog>
#include <QPrinter>
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
#include <qprintpreviewdialog.h>
#include "gen_qprintpreviewdialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QPrintPreviewDialog_paintRequested(intptr_t, QPrinter*);
void miqt_exec_callback_QPrintPreviewDialog_setVisible(QPrintPreviewDialog*, intptr_t, bool);
void miqt_exec_callback_QPrintPreviewDialog_done(QPrintPreviewDialog*, intptr_t, int);
QSize* miqt_exec_callback_QPrintPreviewDialog_sizeHint(const QPrintPreviewDialog*, intptr_t);
QSize* miqt_exec_callback_QPrintPreviewDialog_minimumSizeHint(const QPrintPreviewDialog*, intptr_t);
void miqt_exec_callback_QPrintPreviewDialog_open(QPrintPreviewDialog*, intptr_t);
int miqt_exec_callback_QPrintPreviewDialog_exec(QPrintPreviewDialog*, intptr_t);
void miqt_exec_callback_QPrintPreviewDialog_accept(QPrintPreviewDialog*, intptr_t);
void miqt_exec_callback_QPrintPreviewDialog_reject(QPrintPreviewDialog*, intptr_t);
void miqt_exec_callback_QPrintPreviewDialog_keyPressEvent(QPrintPreviewDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPrintPreviewDialog_closeEvent(QPrintPreviewDialog*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QPrintPreviewDialog_showEvent(QPrintPreviewDialog*, intptr_t, QShowEvent*);
void miqt_exec_callback_QPrintPreviewDialog_resizeEvent(QPrintPreviewDialog*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QPrintPreviewDialog_contextMenuEvent(QPrintPreviewDialog*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QPrintPreviewDialog_eventFilter(QPrintPreviewDialog*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QPrintPreviewDialog_devType(const QPrintPreviewDialog*, intptr_t);
int miqt_exec_callback_QPrintPreviewDialog_heightForWidth(const QPrintPreviewDialog*, intptr_t, int);
bool miqt_exec_callback_QPrintPreviewDialog_hasHeightForWidth(const QPrintPreviewDialog*, intptr_t);
QPaintEngine* miqt_exec_callback_QPrintPreviewDialog_paintEngine(const QPrintPreviewDialog*, intptr_t);
bool miqt_exec_callback_QPrintPreviewDialog_event(QPrintPreviewDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintPreviewDialog_mousePressEvent(QPrintPreviewDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintPreviewDialog_mouseReleaseEvent(QPrintPreviewDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintPreviewDialog_mouseDoubleClickEvent(QPrintPreviewDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintPreviewDialog_mouseMoveEvent(QPrintPreviewDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintPreviewDialog_wheelEvent(QPrintPreviewDialog*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QPrintPreviewDialog_keyReleaseEvent(QPrintPreviewDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPrintPreviewDialog_focusInEvent(QPrintPreviewDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPrintPreviewDialog_focusOutEvent(QPrintPreviewDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPrintPreviewDialog_enterEvent(QPrintPreviewDialog*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QPrintPreviewDialog_leaveEvent(QPrintPreviewDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintPreviewDialog_paintEvent(QPrintPreviewDialog*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QPrintPreviewDialog_moveEvent(QPrintPreviewDialog*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QPrintPreviewDialog_tabletEvent(QPrintPreviewDialog*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QPrintPreviewDialog_actionEvent(QPrintPreviewDialog*, intptr_t, QActionEvent*);
void miqt_exec_callback_QPrintPreviewDialog_dragEnterEvent(QPrintPreviewDialog*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QPrintPreviewDialog_dragMoveEvent(QPrintPreviewDialog*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QPrintPreviewDialog_dragLeaveEvent(QPrintPreviewDialog*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QPrintPreviewDialog_dropEvent(QPrintPreviewDialog*, intptr_t, QDropEvent*);
void miqt_exec_callback_QPrintPreviewDialog_hideEvent(QPrintPreviewDialog*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QPrintPreviewDialog_nativeEvent(QPrintPreviewDialog*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QPrintPreviewDialog_changeEvent(QPrintPreviewDialog*, intptr_t, QEvent*);
int miqt_exec_callback_QPrintPreviewDialog_metric(const QPrintPreviewDialog*, intptr_t, int);
void miqt_exec_callback_QPrintPreviewDialog_initPainter(const QPrintPreviewDialog*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPrintPreviewDialog_redirected(const QPrintPreviewDialog*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPrintPreviewDialog_sharedPainter(const QPrintPreviewDialog*, intptr_t);
void miqt_exec_callback_QPrintPreviewDialog_inputMethodEvent(QPrintPreviewDialog*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QPrintPreviewDialog_inputMethodQuery(const QPrintPreviewDialog*, intptr_t, int);
bool miqt_exec_callback_QPrintPreviewDialog_focusNextPrevChild(QPrintPreviewDialog*, intptr_t, bool);
void miqt_exec_callback_QPrintPreviewDialog_timerEvent(QPrintPreviewDialog*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPrintPreviewDialog_childEvent(QPrintPreviewDialog*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPrintPreviewDialog_customEvent(QPrintPreviewDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintPreviewDialog_connectNotify(QPrintPreviewDialog*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPrintPreviewDialog_disconnectNotify(QPrintPreviewDialog*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPrintPreviewDialog final : public QPrintPreviewDialog {
public:

	MiqtVirtualQPrintPreviewDialog(QWidget* parent): QPrintPreviewDialog(parent) {};
	MiqtVirtualQPrintPreviewDialog(): QPrintPreviewDialog() {};
	MiqtVirtualQPrintPreviewDialog(QPrinter* printer): QPrintPreviewDialog(printer) {};
	MiqtVirtualQPrintPreviewDialog(QWidget* parent, Qt::WindowFlags flags): QPrintPreviewDialog(parent, flags) {};
	MiqtVirtualQPrintPreviewDialog(QPrinter* printer, QWidget* parent): QPrintPreviewDialog(printer, parent) {};
	MiqtVirtualQPrintPreviewDialog(QPrinter* printer, QWidget* parent, Qt::WindowFlags flags): QPrintPreviewDialog(printer, parent, flags) {};

	virtual ~MiqtVirtualQPrintPreviewDialog() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QPrintPreviewDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QPrintPreviewDialog_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QPrintPreviewDialog::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int result) override {
		if (handle__done == 0) {
			QPrintPreviewDialog::done(result);
			return;
		}
		
		int sigval1 = result;

		miqt_exec_callback_QPrintPreviewDialog_done(this, handle__done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_done(int result) {

		QPrintPreviewDialog::done(static_cast<int>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QPrintPreviewDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPrintPreviewDialog_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QPrintPreviewDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QPrintPreviewDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPrintPreviewDialog_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QPrintPreviewDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__open == 0) {
			QPrintPreviewDialog::open();
			return;
		}
		

		miqt_exec_callback_QPrintPreviewDialog_open(this, handle__open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_open() {

		QPrintPreviewDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__exec == 0) {
			return QPrintPreviewDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QPrintPreviewDialog_exec(this, handle__exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_exec() {

		return QPrintPreviewDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__accept == 0) {
			QPrintPreviewDialog::accept();
			return;
		}
		

		miqt_exec_callback_QPrintPreviewDialog_accept(this, handle__accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_accept() {

		QPrintPreviewDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__reject == 0) {
			QPrintPreviewDialog::reject();
			return;
		}
		

		miqt_exec_callback_QPrintPreviewDialog_reject(this, handle__reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reject() {

		QPrintPreviewDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QPrintPreviewDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QPrintPreviewDialog_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QPrintPreviewDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__closeEvent == 0) {
			QPrintPreviewDialog::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QPrintPreviewDialog_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* param1) {

		QPrintPreviewDialog::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QPrintPreviewDialog::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QPrintPreviewDialog_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* param1) {

		QPrintPreviewDialog::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QPrintPreviewDialog::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QPrintPreviewDialog_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* param1) {

		QPrintPreviewDialog::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QPrintPreviewDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QPrintPreviewDialog_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QPrintPreviewDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QPrintPreviewDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QPrintPreviewDialog_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* param1, QEvent* param2) {

		return QPrintPreviewDialog::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QPrintPreviewDialog::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPrintPreviewDialog_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QPrintPreviewDialog::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QPrintPreviewDialog::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QPrintPreviewDialog_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QPrintPreviewDialog::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QPrintPreviewDialog::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QPrintPreviewDialog_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QPrintPreviewDialog::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QPrintPreviewDialog::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPrintPreviewDialog_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QPrintPreviewDialog::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPrintPreviewDialog::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPrintPreviewDialog_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QPrintPreviewDialog::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QPrintPreviewDialog::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QPrintPreviewDialog::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QPrintPreviewDialog::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QPrintPreviewDialog::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QPrintPreviewDialog::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QPrintPreviewDialog::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QPrintPreviewDialog::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QPrintPreviewDialog::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QPrintPreviewDialog::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QPrintPreviewDialog::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QPrintPreviewDialog::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QPrintPreviewDialog::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QPrintPreviewDialog::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QPrintPreviewDialog::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QPrintPreviewDialog::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QPrintPreviewDialog::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QPrintPreviewDialog::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QPrintPreviewDialog::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QPrintPreviewDialog::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QPrintPreviewDialog::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QPrintPreviewDialog::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QPrintPreviewDialog::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QPrintPreviewDialog::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QPrintPreviewDialog::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QPrintPreviewDialog::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QPrintPreviewDialog::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QPrintPreviewDialog::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QPrintPreviewDialog::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QPrintPreviewDialog::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QPrintPreviewDialog::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QPrintPreviewDialog::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QPrintPreviewDialog::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QPrintPreviewDialog::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QPrintPreviewDialog::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QPrintPreviewDialog::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QPrintPreviewDialog::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QPrintPreviewDialog::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QPrintPreviewDialog::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QPrintPreviewDialog::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QPrintPreviewDialog_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QPrintPreviewDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QPrintPreviewDialog::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QPrintPreviewDialog_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QPrintPreviewDialog::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QPrintPreviewDialog::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QPrintPreviewDialog_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QPrintPreviewDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QPrintPreviewDialog::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPrintPreviewDialog_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QPrintPreviewDialog::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QPrintPreviewDialog::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPrintPreviewDialog_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QPrintPreviewDialog::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QPrintPreviewDialog::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPrintPreviewDialog_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QPrintPreviewDialog::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QPrintPreviewDialog::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QPrintPreviewDialog_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QPrintPreviewDialog::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QPrintPreviewDialog::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QPrintPreviewDialog_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QPrintPreviewDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QPrintPreviewDialog::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QPrintPreviewDialog_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QPrintPreviewDialog::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPrintPreviewDialog::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QPrintPreviewDialog::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPrintPreviewDialog::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QPrintPreviewDialog::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPrintPreviewDialog::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QPrintPreviewDialog::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPrintPreviewDialog::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPrintPreviewDialog_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QPrintPreviewDialog::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPrintPreviewDialog::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPrintPreviewDialog_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QPrintPreviewDialog::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QPrintPreviewDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
	friend void QPrintPreviewDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QPrintPreviewDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QPrintPreviewDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QPrintPreviewDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QPrintPreviewDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QPrintPreviewDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPrintPreviewDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPrintPreviewDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPrintPreviewDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPrintPreviewDialog* QPrintPreviewDialog_new(QWidget* parent) {
	return new MiqtVirtualQPrintPreviewDialog(parent);
}

QPrintPreviewDialog* QPrintPreviewDialog_new2() {
	return new MiqtVirtualQPrintPreviewDialog();
}

QPrintPreviewDialog* QPrintPreviewDialog_new3(QPrinter* printer) {
	return new MiqtVirtualQPrintPreviewDialog(printer);
}

QPrintPreviewDialog* QPrintPreviewDialog_new4(QWidget* parent, int flags) {
	return new MiqtVirtualQPrintPreviewDialog(parent, static_cast<Qt::WindowFlags>(flags));
}

QPrintPreviewDialog* QPrintPreviewDialog_new5(QPrinter* printer, QWidget* parent) {
	return new MiqtVirtualQPrintPreviewDialog(printer, parent);
}

QPrintPreviewDialog* QPrintPreviewDialog_new6(QPrinter* printer, QWidget* parent, int flags) {
	return new MiqtVirtualQPrintPreviewDialog(printer, parent, static_cast<Qt::WindowFlags>(flags));
}

void QPrintPreviewDialog_virtbase(QPrintPreviewDialog* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QPrintPreviewDialog_metaObject(const QPrintPreviewDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPrintPreviewDialog_metacast(QPrintPreviewDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPrintPreviewDialog_tr(const char* s) {
	QString _ret = QPrintPreviewDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPrinter* QPrintPreviewDialog_printer(QPrintPreviewDialog* self) {
	return self->printer();
}

void QPrintPreviewDialog_setVisible(QPrintPreviewDialog* self, bool visible) {
	self->setVisible(visible);
}

void QPrintPreviewDialog_done(QPrintPreviewDialog* self, int result) {
	self->done(static_cast<int>(result));
}

void QPrintPreviewDialog_paintRequested(QPrintPreviewDialog* self, QPrinter* printer) {
	self->paintRequested(printer);
}

void QPrintPreviewDialog_connect_paintRequested(QPrintPreviewDialog* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog::connect(self, static_cast<void (QPrintPreviewDialog::*)(QPrinter*)>(&QPrintPreviewDialog::paintRequested), self, [=](QPrinter* printer) {
		QPrinter* sigval1 = printer;
		miqt_exec_callback_QPrintPreviewDialog_paintRequested(slot, sigval1);
	});
}

struct miqt_string QPrintPreviewDialog_tr2(const char* s, const char* c) {
	QString _ret = QPrintPreviewDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintPreviewDialog_tr3(const char* s, const char* c, int n) {
	QString _ret = QPrintPreviewDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPrintPreviewDialog_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_setVisible(visible);
}

bool QPrintPreviewDialog_override_virtual_done(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__done = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_done(void* self, int result) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_done(result);
}

bool QPrintPreviewDialog_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QPrintPreviewDialog_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_sizeHint();
}

bool QPrintPreviewDialog_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QPrintPreviewDialog_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_minimumSizeHint();
}

bool QPrintPreviewDialog_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__open = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_open(void* self) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_open();
}

bool QPrintPreviewDialog_override_virtual_exec(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__exec = slot;
	return true;
}

int QPrintPreviewDialog_virtualbase_exec(void* self) {
	return ( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_exec();
}

bool QPrintPreviewDialog_override_virtual_accept(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__accept = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_accept(void* self) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_accept();
}

bool QPrintPreviewDialog_override_virtual_reject(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reject = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_reject(void* self) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_reject();
}

bool QPrintPreviewDialog_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QPrintPreviewDialog_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_closeEvent(param1);
}

bool QPrintPreviewDialog_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_showEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_showEvent(param1);
}

bool QPrintPreviewDialog_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_resizeEvent(param1);
}

bool QPrintPreviewDialog_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QPrintPreviewDialog_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPrintPreviewDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_eventFilter(param1, param2);
}

bool QPrintPreviewDialog_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QPrintPreviewDialog_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_devType();
}

bool QPrintPreviewDialog_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QPrintPreviewDialog_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_heightForWidth(param1);
}

bool QPrintPreviewDialog_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QPrintPreviewDialog_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_hasHeightForWidth();
}

bool QPrintPreviewDialog_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QPrintPreviewDialog_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_paintEngine();
}

bool QPrintPreviewDialog_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPrintPreviewDialog_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_event(event);
}

bool QPrintPreviewDialog_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_mousePressEvent(event);
}

bool QPrintPreviewDialog_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QPrintPreviewDialog_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QPrintPreviewDialog_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QPrintPreviewDialog_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_wheelEvent(event);
}

bool QPrintPreviewDialog_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QPrintPreviewDialog_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_focusInEvent(event);
}

bool QPrintPreviewDialog_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_focusOutEvent(event);
}

bool QPrintPreviewDialog_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_enterEvent(event);
}

bool QPrintPreviewDialog_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_leaveEvent(event);
}

bool QPrintPreviewDialog_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_paintEvent(event);
}

bool QPrintPreviewDialog_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_moveEvent(event);
}

bool QPrintPreviewDialog_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_tabletEvent(event);
}

bool QPrintPreviewDialog_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_actionEvent(event);
}

bool QPrintPreviewDialog_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QPrintPreviewDialog_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QPrintPreviewDialog_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QPrintPreviewDialog_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_dropEvent(event);
}

bool QPrintPreviewDialog_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_hideEvent(event);
}

bool QPrintPreviewDialog_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QPrintPreviewDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QPrintPreviewDialog_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_changeEvent(param1);
}

bool QPrintPreviewDialog_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QPrintPreviewDialog_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_metric(param1);
}

bool QPrintPreviewDialog_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_initPainter(painter);
}

bool QPrintPreviewDialog_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QPrintPreviewDialog_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_redirected(offset);
}

bool QPrintPreviewDialog_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QPrintPreviewDialog_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_sharedPainter();
}

bool QPrintPreviewDialog_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QPrintPreviewDialog_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QPrintPreviewDialog_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QPrintPreviewDialog_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QPrintPreviewDialog_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QPrintPreviewDialog_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_timerEvent(event);
}

bool QPrintPreviewDialog_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_childEvent(event);
}

bool QPrintPreviewDialog_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_customEvent(event);
}

bool QPrintPreviewDialog_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_connectNotify(signal);
}

bool QPrintPreviewDialog_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_disconnectNotify(signal);
}

void QPrintPreviewDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->adjustPosition(param1);

}

void QPrintPreviewDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QPrintPreviewDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QPrintPreviewDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QPrintPreviewDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QPrintPreviewDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QPrintPreviewDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPrintPreviewDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPrintPreviewDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPrintPreviewDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPrintPreviewDialog_delete(QPrintPreviewDialog* self) {
	delete self;
}

