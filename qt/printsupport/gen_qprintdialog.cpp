#include <QAbstractPrintDialog>
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
#include <QPrintDialog>
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
#include <qprintdialog.h>
#include "gen_qprintdialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QPrintDialog_accepted(intptr_t, QPrinter*);
int miqt_exec_callback_QPrintDialog_exec(QPrintDialog*, intptr_t);
void miqt_exec_callback_QPrintDialog_accept(QPrintDialog*, intptr_t);
void miqt_exec_callback_QPrintDialog_done(QPrintDialog*, intptr_t, int);
void miqt_exec_callback_QPrintDialog_setVisible(QPrintDialog*, intptr_t, bool);
QSize* miqt_exec_callback_QPrintDialog_sizeHint(const QPrintDialog*, intptr_t);
QSize* miqt_exec_callback_QPrintDialog_minimumSizeHint(const QPrintDialog*, intptr_t);
void miqt_exec_callback_QPrintDialog_open(QPrintDialog*, intptr_t);
void miqt_exec_callback_QPrintDialog_reject(QPrintDialog*, intptr_t);
void miqt_exec_callback_QPrintDialog_keyPressEvent(QPrintDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPrintDialog_closeEvent(QPrintDialog*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QPrintDialog_showEvent(QPrintDialog*, intptr_t, QShowEvent*);
void miqt_exec_callback_QPrintDialog_resizeEvent(QPrintDialog*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QPrintDialog_contextMenuEvent(QPrintDialog*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QPrintDialog_eventFilter(QPrintDialog*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QPrintDialog_devType(const QPrintDialog*, intptr_t);
int miqt_exec_callback_QPrintDialog_heightForWidth(const QPrintDialog*, intptr_t, int);
bool miqt_exec_callback_QPrintDialog_hasHeightForWidth(const QPrintDialog*, intptr_t);
QPaintEngine* miqt_exec_callback_QPrintDialog_paintEngine(const QPrintDialog*, intptr_t);
bool miqt_exec_callback_QPrintDialog_event(QPrintDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintDialog_mousePressEvent(QPrintDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintDialog_mouseReleaseEvent(QPrintDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintDialog_mouseDoubleClickEvent(QPrintDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintDialog_mouseMoveEvent(QPrintDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintDialog_wheelEvent(QPrintDialog*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QPrintDialog_keyReleaseEvent(QPrintDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPrintDialog_focusInEvent(QPrintDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPrintDialog_focusOutEvent(QPrintDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPrintDialog_enterEvent(QPrintDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintDialog_leaveEvent(QPrintDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintDialog_paintEvent(QPrintDialog*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QPrintDialog_moveEvent(QPrintDialog*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QPrintDialog_tabletEvent(QPrintDialog*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QPrintDialog_actionEvent(QPrintDialog*, intptr_t, QActionEvent*);
void miqt_exec_callback_QPrintDialog_dragEnterEvent(QPrintDialog*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QPrintDialog_dragMoveEvent(QPrintDialog*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QPrintDialog_dragLeaveEvent(QPrintDialog*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QPrintDialog_dropEvent(QPrintDialog*, intptr_t, QDropEvent*);
void miqt_exec_callback_QPrintDialog_hideEvent(QPrintDialog*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QPrintDialog_nativeEvent(QPrintDialog*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QPrintDialog_changeEvent(QPrintDialog*, intptr_t, QEvent*);
int miqt_exec_callback_QPrintDialog_metric(const QPrintDialog*, intptr_t, int);
void miqt_exec_callback_QPrintDialog_initPainter(const QPrintDialog*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPrintDialog_redirected(const QPrintDialog*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPrintDialog_sharedPainter(const QPrintDialog*, intptr_t);
void miqt_exec_callback_QPrintDialog_inputMethodEvent(QPrintDialog*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QPrintDialog_inputMethodQuery(const QPrintDialog*, intptr_t, int);
bool miqt_exec_callback_QPrintDialog_focusNextPrevChild(QPrintDialog*, intptr_t, bool);
void miqt_exec_callback_QPrintDialog_timerEvent(QPrintDialog*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPrintDialog_childEvent(QPrintDialog*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPrintDialog_customEvent(QPrintDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintDialog_connectNotify(QPrintDialog*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPrintDialog_disconnectNotify(QPrintDialog*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPrintDialog final : public QPrintDialog {
public:

	MiqtVirtualQPrintDialog(QWidget* parent): QPrintDialog(parent) {};
	MiqtVirtualQPrintDialog(QPrinter* printer): QPrintDialog(printer) {};
	MiqtVirtualQPrintDialog(): QPrintDialog() {};
	MiqtVirtualQPrintDialog(QPrinter* printer, QWidget* parent): QPrintDialog(printer, parent) {};

	virtual ~MiqtVirtualQPrintDialog() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__exec == 0) {
			return QPrintDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QPrintDialog_exec(this, handle__exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_exec() {

		return QPrintDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__accept == 0) {
			QPrintDialog::accept();
			return;
		}
		

		miqt_exec_callback_QPrintDialog_accept(this, handle__accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_accept() {

		QPrintDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int result) override {
		if (handle__done == 0) {
			QPrintDialog::done(result);
			return;
		}
		
		int sigval1 = result;

		miqt_exec_callback_QPrintDialog_done(this, handle__done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_done(int result) {

		QPrintDialog::done(static_cast<int>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QPrintDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QPrintDialog_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QPrintDialog::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QPrintDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPrintDialog_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QPrintDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QPrintDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPrintDialog_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QPrintDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__open == 0) {
			QPrintDialog::open();
			return;
		}
		

		miqt_exec_callback_QPrintDialog_open(this, handle__open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_open() {

		QPrintDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__reject == 0) {
			QPrintDialog::reject();
			return;
		}
		

		miqt_exec_callback_QPrintDialog_reject(this, handle__reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reject() {

		QPrintDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QPrintDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QPrintDialog_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QPrintDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__closeEvent == 0) {
			QPrintDialog::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QPrintDialog_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* param1) {

		QPrintDialog::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QPrintDialog::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QPrintDialog_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* param1) {

		QPrintDialog::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QPrintDialog::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QPrintDialog_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* param1) {

		QPrintDialog::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QPrintDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QPrintDialog_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QPrintDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QPrintDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QPrintDialog_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* param1, QEvent* param2) {

		return QPrintDialog::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QPrintDialog::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPrintDialog_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QPrintDialog::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QPrintDialog::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QPrintDialog_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QPrintDialog::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QPrintDialog::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QPrintDialog_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QPrintDialog::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QPrintDialog::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPrintDialog_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QPrintDialog::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPrintDialog::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPrintDialog_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QPrintDialog::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QPrintDialog::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QPrintDialog::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QPrintDialog::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QPrintDialog::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QPrintDialog::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QPrintDialog::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QPrintDialog::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QPrintDialog::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QPrintDialog::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QPrintDialog::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QPrintDialog::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QPrintDialog::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QPrintDialog::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QPrintDialog::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QPrintDialog::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QPrintDialog::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QPrintDialog::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QPrintDialog::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QPrintDialog::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QPrintDialog::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QPrintDialog::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QPrintDialog::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QPrintDialog::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QPrintDialog::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QPrintDialog::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QPrintDialog::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QPrintDialog::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QPrintDialog::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QPrintDialog::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QPrintDialog::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QPrintDialog::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QPrintDialog::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QPrintDialog::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QPrintDialog::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QPrintDialog::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QPrintDialog::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QPrintDialog::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QPrintDialog::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QPrintDialog::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QPrintDialog_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QPrintDialog::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QPrintDialog::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QPrintDialog_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QPrintDialog::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QPrintDialog::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QPrintDialog_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QPrintDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QPrintDialog::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPrintDialog_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QPrintDialog::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QPrintDialog::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPrintDialog_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QPrintDialog::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QPrintDialog::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPrintDialog_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QPrintDialog::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QPrintDialog::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QPrintDialog_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QPrintDialog::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QPrintDialog::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QPrintDialog_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QPrintDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QPrintDialog::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QPrintDialog_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QPrintDialog::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPrintDialog::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QPrintDialog::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPrintDialog::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QPrintDialog::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPrintDialog::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QPrintDialog::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPrintDialog::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPrintDialog_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QPrintDialog::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPrintDialog::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPrintDialog_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QPrintDialog::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QPrintDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
	friend void QPrintDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QPrintDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QPrintDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QPrintDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QPrintDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QPrintDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPrintDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPrintDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPrintDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPrintDialog* QPrintDialog_new(QWidget* parent) {
	return new MiqtVirtualQPrintDialog(parent);
}

QPrintDialog* QPrintDialog_new2(QPrinter* printer) {
	return new MiqtVirtualQPrintDialog(printer);
}

QPrintDialog* QPrintDialog_new3() {
	return new MiqtVirtualQPrintDialog();
}

QPrintDialog* QPrintDialog_new4(QPrinter* printer, QWidget* parent) {
	return new MiqtVirtualQPrintDialog(printer, parent);
}

void QPrintDialog_virtbase(QPrintDialog* src, QAbstractPrintDialog** outptr_QAbstractPrintDialog) {
	*outptr_QAbstractPrintDialog = static_cast<QAbstractPrintDialog*>(src);
}

QMetaObject* QPrintDialog_metaObject(const QPrintDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPrintDialog_metacast(QPrintDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPrintDialog_tr(const char* s) {
	QString _ret = QPrintDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintDialog_trUtf8(const char* s) {
	QString _ret = QPrintDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPrintDialog_exec(QPrintDialog* self) {
	return self->exec();
}

void QPrintDialog_accept(QPrintDialog* self) {
	self->accept();
}

void QPrintDialog_done(QPrintDialog* self, int result) {
	self->done(static_cast<int>(result));
}

void QPrintDialog_setOption(QPrintDialog* self, int option) {
	self->setOption(static_cast<QAbstractPrintDialog::PrintDialogOption>(option));
}

bool QPrintDialog_testOption(const QPrintDialog* self, int option) {
	return self->testOption(static_cast<QAbstractPrintDialog::PrintDialogOption>(option));
}

void QPrintDialog_setOptions(QPrintDialog* self, int options) {
	self->setOptions(static_cast<QAbstractPrintDialog::PrintDialogOptions>(options));
}

int QPrintDialog_options(const QPrintDialog* self) {
	QAbstractPrintDialog::PrintDialogOptions _ret = self->options();
	return static_cast<int>(_ret);
}

void QPrintDialog_setVisible(QPrintDialog* self, bool visible) {
	self->setVisible(visible);
}

void QPrintDialog_accepted(QPrintDialog* self, QPrinter* printer) {
	self->accepted(printer);
}

void QPrintDialog_connect_accepted(QPrintDialog* self, intptr_t slot) {
	MiqtVirtualQPrintDialog::connect(self, static_cast<void (QPrintDialog::*)(QPrinter*)>(&QPrintDialog::accepted), self, [=](QPrinter* printer) {
		QPrinter* sigval1 = printer;
		miqt_exec_callback_QPrintDialog_accepted(slot, sigval1);
	});
}

struct miqt_string QPrintDialog_tr2(const char* s, const char* c) {
	QString _ret = QPrintDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintDialog_tr3(const char* s, const char* c, int n) {
	QString _ret = QPrintDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintDialog_trUtf82(const char* s, const char* c) {
	QString _ret = QPrintDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintDialog_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QPrintDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPrintDialog_setOption2(QPrintDialog* self, int option, bool on) {
	self->setOption(static_cast<QAbstractPrintDialog::PrintDialogOption>(option), on);
}

bool QPrintDialog_override_virtual_exec(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__exec = slot;
	return true;
}

int QPrintDialog_virtualbase_exec(void* self) {
	return ( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_exec();
}

bool QPrintDialog_override_virtual_accept(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__accept = slot;
	return true;
}

void QPrintDialog_virtualbase_accept(void* self) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_accept();
}

bool QPrintDialog_override_virtual_done(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__done = slot;
	return true;
}

void QPrintDialog_virtualbase_done(void* self, int result) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_done(result);
}

bool QPrintDialog_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QPrintDialog_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_setVisible(visible);
}

bool QPrintDialog_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QPrintDialog_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_sizeHint();
}

bool QPrintDialog_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QPrintDialog_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_minimumSizeHint();
}

bool QPrintDialog_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__open = slot;
	return true;
}

void QPrintDialog_virtualbase_open(void* self) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_open();
}

bool QPrintDialog_override_virtual_reject(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reject = slot;
	return true;
}

void QPrintDialog_virtualbase_reject(void* self) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_reject();
}

bool QPrintDialog_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QPrintDialog_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_closeEvent(param1);
}

bool QPrintDialog_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_showEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_showEvent(param1);
}

bool QPrintDialog_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_resizeEvent(param1);
}

bool QPrintDialog_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QPrintDialog_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPrintDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_eventFilter(param1, param2);
}

bool QPrintDialog_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QPrintDialog_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_devType();
}

bool QPrintDialog_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QPrintDialog_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_heightForWidth(param1);
}

bool QPrintDialog_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QPrintDialog_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_hasHeightForWidth();
}

bool QPrintDialog_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QPrintDialog_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_paintEngine();
}

bool QPrintDialog_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPrintDialog_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_event(event);
}

bool QPrintDialog_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_mousePressEvent(event);
}

bool QPrintDialog_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QPrintDialog_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QPrintDialog_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QPrintDialog_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_wheelEvent(event);
}

bool QPrintDialog_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QPrintDialog_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_focusInEvent(event);
}

bool QPrintDialog_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_focusOutEvent(event);
}

bool QPrintDialog_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_enterEvent(event);
}

bool QPrintDialog_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_leaveEvent(event);
}

bool QPrintDialog_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_paintEvent(event);
}

bool QPrintDialog_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_moveEvent(event);
}

bool QPrintDialog_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_tabletEvent(event);
}

bool QPrintDialog_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_actionEvent(event);
}

bool QPrintDialog_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QPrintDialog_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QPrintDialog_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QPrintDialog_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_dropEvent(event);
}

bool QPrintDialog_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_hideEvent(event);
}

bool QPrintDialog_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QPrintDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QPrintDialog_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_changeEvent(param1);
}

bool QPrintDialog_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QPrintDialog_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_metric(param1);
}

bool QPrintDialog_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QPrintDialog_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_initPainter(painter);
}

bool QPrintDialog_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QPrintDialog_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_redirected(offset);
}

bool QPrintDialog_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QPrintDialog_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_sharedPainter();
}

bool QPrintDialog_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QPrintDialog_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QPrintDialog_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QPrintDialog_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QPrintDialog_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QPrintDialog_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_timerEvent(event);
}

bool QPrintDialog_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_childEvent(event);
}

bool QPrintDialog_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_customEvent(event);
}

bool QPrintDialog_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPrintDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_connectNotify(signal);
}

bool QPrintDialog_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPrintDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_disconnectNotify(signal);
}

void QPrintDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->adjustPosition(param1);

}

void QPrintDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QPrintDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QPrintDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QPrintDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QPrintDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QPrintDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPrintDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPrintDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPrintDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPrintDialog_delete(QPrintDialog* self) {
	delete self;
}

