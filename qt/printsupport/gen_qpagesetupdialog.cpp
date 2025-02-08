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
#include <QPageSetupDialog>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
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
#include <qpagesetupdialog.h>
#include "gen_qpagesetupdialog.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QPageSetupDialog_exec(QPageSetupDialog*, intptr_t);
void miqt_exec_callback_QPageSetupDialog_done(QPageSetupDialog*, intptr_t, int);
void miqt_exec_callback_QPageSetupDialog_setVisible(QPageSetupDialog*, intptr_t, bool);
QSize* miqt_exec_callback_QPageSetupDialog_sizeHint(const QPageSetupDialog*, intptr_t);
QSize* miqt_exec_callback_QPageSetupDialog_minimumSizeHint(const QPageSetupDialog*, intptr_t);
void miqt_exec_callback_QPageSetupDialog_open(QPageSetupDialog*, intptr_t);
void miqt_exec_callback_QPageSetupDialog_accept(QPageSetupDialog*, intptr_t);
void miqt_exec_callback_QPageSetupDialog_reject(QPageSetupDialog*, intptr_t);
void miqt_exec_callback_QPageSetupDialog_keyPressEvent(QPageSetupDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPageSetupDialog_closeEvent(QPageSetupDialog*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QPageSetupDialog_showEvent(QPageSetupDialog*, intptr_t, QShowEvent*);
void miqt_exec_callback_QPageSetupDialog_resizeEvent(QPageSetupDialog*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QPageSetupDialog_contextMenuEvent(QPageSetupDialog*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QPageSetupDialog_eventFilter(QPageSetupDialog*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QPageSetupDialog_devType(const QPageSetupDialog*, intptr_t);
int miqt_exec_callback_QPageSetupDialog_heightForWidth(const QPageSetupDialog*, intptr_t, int);
bool miqt_exec_callback_QPageSetupDialog_hasHeightForWidth(const QPageSetupDialog*, intptr_t);
QPaintEngine* miqt_exec_callback_QPageSetupDialog_paintEngine(const QPageSetupDialog*, intptr_t);
bool miqt_exec_callback_QPageSetupDialog_event(QPageSetupDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QPageSetupDialog_mousePressEvent(QPageSetupDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPageSetupDialog_mouseReleaseEvent(QPageSetupDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPageSetupDialog_mouseDoubleClickEvent(QPageSetupDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPageSetupDialog_mouseMoveEvent(QPageSetupDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPageSetupDialog_wheelEvent(QPageSetupDialog*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QPageSetupDialog_keyReleaseEvent(QPageSetupDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPageSetupDialog_focusInEvent(QPageSetupDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPageSetupDialog_focusOutEvent(QPageSetupDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPageSetupDialog_enterEvent(QPageSetupDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QPageSetupDialog_leaveEvent(QPageSetupDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QPageSetupDialog_paintEvent(QPageSetupDialog*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QPageSetupDialog_moveEvent(QPageSetupDialog*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QPageSetupDialog_tabletEvent(QPageSetupDialog*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QPageSetupDialog_actionEvent(QPageSetupDialog*, intptr_t, QActionEvent*);
void miqt_exec_callback_QPageSetupDialog_dragEnterEvent(QPageSetupDialog*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QPageSetupDialog_dragMoveEvent(QPageSetupDialog*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QPageSetupDialog_dragLeaveEvent(QPageSetupDialog*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QPageSetupDialog_dropEvent(QPageSetupDialog*, intptr_t, QDropEvent*);
void miqt_exec_callback_QPageSetupDialog_hideEvent(QPageSetupDialog*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QPageSetupDialog_nativeEvent(QPageSetupDialog*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QPageSetupDialog_changeEvent(QPageSetupDialog*, intptr_t, QEvent*);
int miqt_exec_callback_QPageSetupDialog_metric(const QPageSetupDialog*, intptr_t, int);
void miqt_exec_callback_QPageSetupDialog_initPainter(const QPageSetupDialog*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPageSetupDialog_redirected(const QPageSetupDialog*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPageSetupDialog_sharedPainter(const QPageSetupDialog*, intptr_t);
void miqt_exec_callback_QPageSetupDialog_inputMethodEvent(QPageSetupDialog*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QPageSetupDialog_inputMethodQuery(const QPageSetupDialog*, intptr_t, int);
bool miqt_exec_callback_QPageSetupDialog_focusNextPrevChild(QPageSetupDialog*, intptr_t, bool);
void miqt_exec_callback_QPageSetupDialog_timerEvent(QPageSetupDialog*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPageSetupDialog_childEvent(QPageSetupDialog*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPageSetupDialog_customEvent(QPageSetupDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QPageSetupDialog_connectNotify(QPageSetupDialog*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPageSetupDialog_disconnectNotify(QPageSetupDialog*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPageSetupDialog final : public QPageSetupDialog {
public:

	MiqtVirtualQPageSetupDialog(QWidget* parent): QPageSetupDialog(parent) {};
	MiqtVirtualQPageSetupDialog(QPrinter* printer): QPageSetupDialog(printer) {};
	MiqtVirtualQPageSetupDialog(): QPageSetupDialog() {};
	MiqtVirtualQPageSetupDialog(QPrinter* printer, QWidget* parent): QPageSetupDialog(printer, parent) {};

	virtual ~MiqtVirtualQPageSetupDialog() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__exec == 0) {
			return QPageSetupDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QPageSetupDialog_exec(this, handle__exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_exec() {

		return QPageSetupDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int result) override {
		if (handle__done == 0) {
			QPageSetupDialog::done(result);
			return;
		}
		
		int sigval1 = result;

		miqt_exec_callback_QPageSetupDialog_done(this, handle__done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_done(int result) {

		QPageSetupDialog::done(static_cast<int>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QPageSetupDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QPageSetupDialog_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QPageSetupDialog::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QPageSetupDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPageSetupDialog_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QPageSetupDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QPageSetupDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPageSetupDialog_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QPageSetupDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__open == 0) {
			QPageSetupDialog::open();
			return;
		}
		

		miqt_exec_callback_QPageSetupDialog_open(this, handle__open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_open() {

		QPageSetupDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__accept == 0) {
			QPageSetupDialog::accept();
			return;
		}
		

		miqt_exec_callback_QPageSetupDialog_accept(this, handle__accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_accept() {

		QPageSetupDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__reject == 0) {
			QPageSetupDialog::reject();
			return;
		}
		

		miqt_exec_callback_QPageSetupDialog_reject(this, handle__reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reject() {

		QPageSetupDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QPageSetupDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QPageSetupDialog_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QPageSetupDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__closeEvent == 0) {
			QPageSetupDialog::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QPageSetupDialog_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* param1) {

		QPageSetupDialog::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QPageSetupDialog::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QPageSetupDialog_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* param1) {

		QPageSetupDialog::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QPageSetupDialog::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QPageSetupDialog_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* param1) {

		QPageSetupDialog::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QPageSetupDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QPageSetupDialog_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QPageSetupDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QPageSetupDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QPageSetupDialog_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* param1, QEvent* param2) {

		return QPageSetupDialog::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QPageSetupDialog::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPageSetupDialog_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QPageSetupDialog::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QPageSetupDialog::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QPageSetupDialog_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QPageSetupDialog::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QPageSetupDialog::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QPageSetupDialog_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QPageSetupDialog::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QPageSetupDialog::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPageSetupDialog_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QPageSetupDialog::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPageSetupDialog::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPageSetupDialog_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QPageSetupDialog::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QPageSetupDialog::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QPageSetupDialog::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QPageSetupDialog::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QPageSetupDialog::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QPageSetupDialog::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QPageSetupDialog::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QPageSetupDialog::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QPageSetupDialog::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QPageSetupDialog::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QPageSetupDialog::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QPageSetupDialog::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QPageSetupDialog::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QPageSetupDialog::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QPageSetupDialog::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QPageSetupDialog::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QPageSetupDialog::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QPageSetupDialog::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QPageSetupDialog::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QPageSetupDialog::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QPageSetupDialog::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QPageSetupDialog::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QPageSetupDialog::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QPageSetupDialog::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QPageSetupDialog::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QPageSetupDialog::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QPageSetupDialog::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QPageSetupDialog::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QPageSetupDialog::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QPageSetupDialog::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QPageSetupDialog::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QPageSetupDialog::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QPageSetupDialog::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QPageSetupDialog::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QPageSetupDialog::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QPageSetupDialog::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QPageSetupDialog::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QPageSetupDialog::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QPageSetupDialog::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QPageSetupDialog::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QPageSetupDialog_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QPageSetupDialog::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QPageSetupDialog::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QPageSetupDialog_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QPageSetupDialog::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QPageSetupDialog::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QPageSetupDialog_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QPageSetupDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QPageSetupDialog::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPageSetupDialog_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QPageSetupDialog::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QPageSetupDialog::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPageSetupDialog_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QPageSetupDialog::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QPageSetupDialog::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPageSetupDialog_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QPageSetupDialog::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QPageSetupDialog::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QPageSetupDialog_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QPageSetupDialog::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QPageSetupDialog::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QPageSetupDialog_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QPageSetupDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QPageSetupDialog::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QPageSetupDialog_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QPageSetupDialog::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPageSetupDialog::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QPageSetupDialog::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPageSetupDialog::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QPageSetupDialog::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPageSetupDialog::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QPageSetupDialog::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPageSetupDialog::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPageSetupDialog_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QPageSetupDialog::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPageSetupDialog::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPageSetupDialog_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QPageSetupDialog::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QPageSetupDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
	friend void QPageSetupDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QPageSetupDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QPageSetupDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QPageSetupDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QPageSetupDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QPageSetupDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPageSetupDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPageSetupDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPageSetupDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPageSetupDialog* QPageSetupDialog_new(QWidget* parent) {
	return new MiqtVirtualQPageSetupDialog(parent);
}

QPageSetupDialog* QPageSetupDialog_new2(QPrinter* printer) {
	return new MiqtVirtualQPageSetupDialog(printer);
}

QPageSetupDialog* QPageSetupDialog_new3() {
	return new MiqtVirtualQPageSetupDialog();
}

QPageSetupDialog* QPageSetupDialog_new4(QPrinter* printer, QWidget* parent) {
	return new MiqtVirtualQPageSetupDialog(printer, parent);
}

void QPageSetupDialog_virtbase(QPageSetupDialog* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QPageSetupDialog_metaObject(const QPageSetupDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPageSetupDialog_metacast(QPageSetupDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPageSetupDialog_tr(const char* s) {
	QString _ret = QPageSetupDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSetupDialog_trUtf8(const char* s) {
	QString _ret = QPageSetupDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPageSetupDialog_exec(QPageSetupDialog* self) {
	return self->exec();
}

void QPageSetupDialog_done(QPageSetupDialog* self, int result) {
	self->done(static_cast<int>(result));
}

QPrinter* QPageSetupDialog_printer(QPageSetupDialog* self) {
	return self->printer();
}

struct miqt_string QPageSetupDialog_tr2(const char* s, const char* c) {
	QString _ret = QPageSetupDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSetupDialog_tr3(const char* s, const char* c, int n) {
	QString _ret = QPageSetupDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSetupDialog_trUtf82(const char* s, const char* c) {
	QString _ret = QPageSetupDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSetupDialog_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QPageSetupDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPageSetupDialog_override_virtual_exec(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__exec = slot;
	return true;
}

int QPageSetupDialog_virtualbase_exec(void* self) {
	return ( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_exec();
}

bool QPageSetupDialog_override_virtual_done(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__done = slot;
	return true;
}

void QPageSetupDialog_virtualbase_done(void* self, int result) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_done(result);
}

bool QPageSetupDialog_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QPageSetupDialog_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_setVisible(visible);
}

bool QPageSetupDialog_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QPageSetupDialog_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_sizeHint();
}

bool QPageSetupDialog_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QPageSetupDialog_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_minimumSizeHint();
}

bool QPageSetupDialog_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__open = slot;
	return true;
}

void QPageSetupDialog_virtualbase_open(void* self) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_open();
}

bool QPageSetupDialog_override_virtual_accept(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__accept = slot;
	return true;
}

void QPageSetupDialog_virtualbase_accept(void* self) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_accept();
}

bool QPageSetupDialog_override_virtual_reject(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reject = slot;
	return true;
}

void QPageSetupDialog_virtualbase_reject(void* self) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_reject();
}

bool QPageSetupDialog_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QPageSetupDialog_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_closeEvent(param1);
}

bool QPageSetupDialog_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_showEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_showEvent(param1);
}

bool QPageSetupDialog_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_resizeEvent(param1);
}

bool QPageSetupDialog_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QPageSetupDialog_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPageSetupDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_eventFilter(param1, param2);
}

bool QPageSetupDialog_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QPageSetupDialog_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_devType();
}

bool QPageSetupDialog_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QPageSetupDialog_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_heightForWidth(param1);
}

bool QPageSetupDialog_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QPageSetupDialog_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_hasHeightForWidth();
}

bool QPageSetupDialog_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QPageSetupDialog_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_paintEngine();
}

bool QPageSetupDialog_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPageSetupDialog_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_event(event);
}

bool QPageSetupDialog_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_mousePressEvent(event);
}

bool QPageSetupDialog_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QPageSetupDialog_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QPageSetupDialog_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QPageSetupDialog_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_wheelEvent(event);
}

bool QPageSetupDialog_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QPageSetupDialog_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_focusInEvent(event);
}

bool QPageSetupDialog_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_focusOutEvent(event);
}

bool QPageSetupDialog_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_enterEvent(event);
}

bool QPageSetupDialog_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_leaveEvent(event);
}

bool QPageSetupDialog_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_paintEvent(event);
}

bool QPageSetupDialog_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_moveEvent(event);
}

bool QPageSetupDialog_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_tabletEvent(event);
}

bool QPageSetupDialog_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_actionEvent(event);
}

bool QPageSetupDialog_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QPageSetupDialog_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QPageSetupDialog_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QPageSetupDialog_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_dropEvent(event);
}

bool QPageSetupDialog_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_hideEvent(event);
}

bool QPageSetupDialog_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QPageSetupDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QPageSetupDialog_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_changeEvent(param1);
}

bool QPageSetupDialog_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QPageSetupDialog_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_metric(param1);
}

bool QPageSetupDialog_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QPageSetupDialog_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_initPainter(painter);
}

bool QPageSetupDialog_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QPageSetupDialog_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_redirected(offset);
}

bool QPageSetupDialog_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QPageSetupDialog_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_sharedPainter();
}

bool QPageSetupDialog_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QPageSetupDialog_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QPageSetupDialog_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QPageSetupDialog_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QPageSetupDialog_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QPageSetupDialog_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_timerEvent(event);
}

bool QPageSetupDialog_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_childEvent(event);
}

bool QPageSetupDialog_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_customEvent(event);
}

bool QPageSetupDialog_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPageSetupDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_connectNotify(signal);
}

bool QPageSetupDialog_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPageSetupDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_disconnectNotify(signal);
}

void QPageSetupDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->adjustPosition(param1);

}

void QPageSetupDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QPageSetupDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QPageSetupDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QPageSetupDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QPageSetupDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QPageSetupDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPageSetupDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPageSetupDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPageSetupDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPageSetupDialog_delete(QPageSetupDialog* self) {
	delete self;
}

