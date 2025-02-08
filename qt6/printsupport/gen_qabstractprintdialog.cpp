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
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
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
#include <qabstractprintdialog.h>
#include "gen_qabstractprintdialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractPrintDialog_setVisible(QAbstractPrintDialog*, intptr_t, bool);
QSize* miqt_exec_callback_QAbstractPrintDialog_sizeHint(const QAbstractPrintDialog*, intptr_t);
QSize* miqt_exec_callback_QAbstractPrintDialog_minimumSizeHint(const QAbstractPrintDialog*, intptr_t);
void miqt_exec_callback_QAbstractPrintDialog_open(QAbstractPrintDialog*, intptr_t);
int miqt_exec_callback_QAbstractPrintDialog_exec(QAbstractPrintDialog*, intptr_t);
void miqt_exec_callback_QAbstractPrintDialog_done(QAbstractPrintDialog*, intptr_t, int);
void miqt_exec_callback_QAbstractPrintDialog_accept(QAbstractPrintDialog*, intptr_t);
void miqt_exec_callback_QAbstractPrintDialog_reject(QAbstractPrintDialog*, intptr_t);
void miqt_exec_callback_QAbstractPrintDialog_keyPressEvent(QAbstractPrintDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractPrintDialog_closeEvent(QAbstractPrintDialog*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QAbstractPrintDialog_showEvent(QAbstractPrintDialog*, intptr_t, QShowEvent*);
void miqt_exec_callback_QAbstractPrintDialog_resizeEvent(QAbstractPrintDialog*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QAbstractPrintDialog_contextMenuEvent(QAbstractPrintDialog*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QAbstractPrintDialog_eventFilter(QAbstractPrintDialog*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QAbstractPrintDialog_devType(const QAbstractPrintDialog*, intptr_t);
int miqt_exec_callback_QAbstractPrintDialog_heightForWidth(const QAbstractPrintDialog*, intptr_t, int);
bool miqt_exec_callback_QAbstractPrintDialog_hasHeightForWidth(const QAbstractPrintDialog*, intptr_t);
QPaintEngine* miqt_exec_callback_QAbstractPrintDialog_paintEngine(const QAbstractPrintDialog*, intptr_t);
bool miqt_exec_callback_QAbstractPrintDialog_event(QAbstractPrintDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractPrintDialog_mousePressEvent(QAbstractPrintDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractPrintDialog_mouseReleaseEvent(QAbstractPrintDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractPrintDialog_mouseDoubleClickEvent(QAbstractPrintDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractPrintDialog_mouseMoveEvent(QAbstractPrintDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractPrintDialog_wheelEvent(QAbstractPrintDialog*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QAbstractPrintDialog_keyReleaseEvent(QAbstractPrintDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractPrintDialog_focusInEvent(QAbstractPrintDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractPrintDialog_focusOutEvent(QAbstractPrintDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractPrintDialog_enterEvent(QAbstractPrintDialog*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QAbstractPrintDialog_leaveEvent(QAbstractPrintDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractPrintDialog_paintEvent(QAbstractPrintDialog*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QAbstractPrintDialog_moveEvent(QAbstractPrintDialog*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QAbstractPrintDialog_tabletEvent(QAbstractPrintDialog*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QAbstractPrintDialog_actionEvent(QAbstractPrintDialog*, intptr_t, QActionEvent*);
void miqt_exec_callback_QAbstractPrintDialog_dragEnterEvent(QAbstractPrintDialog*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QAbstractPrintDialog_dragMoveEvent(QAbstractPrintDialog*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QAbstractPrintDialog_dragLeaveEvent(QAbstractPrintDialog*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QAbstractPrintDialog_dropEvent(QAbstractPrintDialog*, intptr_t, QDropEvent*);
void miqt_exec_callback_QAbstractPrintDialog_hideEvent(QAbstractPrintDialog*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QAbstractPrintDialog_nativeEvent(QAbstractPrintDialog*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QAbstractPrintDialog_changeEvent(QAbstractPrintDialog*, intptr_t, QEvent*);
int miqt_exec_callback_QAbstractPrintDialog_metric(const QAbstractPrintDialog*, intptr_t, int);
void miqt_exec_callback_QAbstractPrintDialog_initPainter(const QAbstractPrintDialog*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QAbstractPrintDialog_redirected(const QAbstractPrintDialog*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QAbstractPrintDialog_sharedPainter(const QAbstractPrintDialog*, intptr_t);
void miqt_exec_callback_QAbstractPrintDialog_inputMethodEvent(QAbstractPrintDialog*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QAbstractPrintDialog_inputMethodQuery(const QAbstractPrintDialog*, intptr_t, int);
bool miqt_exec_callback_QAbstractPrintDialog_focusNextPrevChild(QAbstractPrintDialog*, intptr_t, bool);
void miqt_exec_callback_QAbstractPrintDialog_timerEvent(QAbstractPrintDialog*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractPrintDialog_childEvent(QAbstractPrintDialog*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractPrintDialog_customEvent(QAbstractPrintDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractPrintDialog_connectNotify(QAbstractPrintDialog*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractPrintDialog_disconnectNotify(QAbstractPrintDialog*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractPrintDialog final : public QAbstractPrintDialog {
public:

	MiqtVirtualQAbstractPrintDialog(QPrinter* printer): QAbstractPrintDialog(printer) {};
	MiqtVirtualQAbstractPrintDialog(QPrinter* printer, QWidget* parent): QAbstractPrintDialog(printer, parent) {};

	virtual ~MiqtVirtualQAbstractPrintDialog() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QAbstractPrintDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QAbstractPrintDialog_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QAbstractPrintDialog::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QAbstractPrintDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractPrintDialog_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QAbstractPrintDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QAbstractPrintDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractPrintDialog_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QAbstractPrintDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__open == 0) {
			QAbstractPrintDialog::open();
			return;
		}
		

		miqt_exec_callback_QAbstractPrintDialog_open(this, handle__open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_open() {

		QAbstractPrintDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__exec == 0) {
			return QAbstractPrintDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractPrintDialog_exec(this, handle__exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_exec() {

		return QAbstractPrintDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int param1) override {
		if (handle__done == 0) {
			QAbstractPrintDialog::done(param1);
			return;
		}
		
		int sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_done(this, handle__done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_done(int param1) {

		QAbstractPrintDialog::done(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__accept == 0) {
			QAbstractPrintDialog::accept();
			return;
		}
		

		miqt_exec_callback_QAbstractPrintDialog_accept(this, handle__accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_accept() {

		QAbstractPrintDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__reject == 0) {
			QAbstractPrintDialog::reject();
			return;
		}
		

		miqt_exec_callback_QAbstractPrintDialog_reject(this, handle__reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reject() {

		QAbstractPrintDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QAbstractPrintDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QAbstractPrintDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__closeEvent == 0) {
			QAbstractPrintDialog::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* param1) {

		QAbstractPrintDialog::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QAbstractPrintDialog::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* param1) {

		QAbstractPrintDialog::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QAbstractPrintDialog::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* param1) {

		QAbstractPrintDialog::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QAbstractPrintDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QAbstractPrintDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QAbstractPrintDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QAbstractPrintDialog_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* param1, QEvent* param2) {

		return QAbstractPrintDialog::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QAbstractPrintDialog::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractPrintDialog_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QAbstractPrintDialog::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QAbstractPrintDialog::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QAbstractPrintDialog_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QAbstractPrintDialog::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QAbstractPrintDialog::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractPrintDialog_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QAbstractPrintDialog::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QAbstractPrintDialog::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QAbstractPrintDialog_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QAbstractPrintDialog::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAbstractPrintDialog::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractPrintDialog_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAbstractPrintDialog::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QAbstractPrintDialog::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QAbstractPrintDialog::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QAbstractPrintDialog::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QAbstractPrintDialog::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QAbstractPrintDialog::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QAbstractPrintDialog::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QAbstractPrintDialog::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QAbstractPrintDialog::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QAbstractPrintDialog::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QAbstractPrintDialog::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QAbstractPrintDialog::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QAbstractPrintDialog::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QAbstractPrintDialog::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QAbstractPrintDialog::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QAbstractPrintDialog::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QAbstractPrintDialog::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QAbstractPrintDialog::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QAbstractPrintDialog::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QAbstractPrintDialog::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QAbstractPrintDialog::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QAbstractPrintDialog::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QAbstractPrintDialog::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QAbstractPrintDialog::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QAbstractPrintDialog::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QAbstractPrintDialog::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QAbstractPrintDialog::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QAbstractPrintDialog::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QAbstractPrintDialog::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QAbstractPrintDialog::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QAbstractPrintDialog::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QAbstractPrintDialog::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QAbstractPrintDialog::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QAbstractPrintDialog::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QAbstractPrintDialog::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QAbstractPrintDialog::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QAbstractPrintDialog::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QAbstractPrintDialog::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QAbstractPrintDialog::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QAbstractPrintDialog::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QAbstractPrintDialog_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QAbstractPrintDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QAbstractPrintDialog::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QAbstractPrintDialog::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QAbstractPrintDialog::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QAbstractPrintDialog_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QAbstractPrintDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QAbstractPrintDialog::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QAbstractPrintDialog_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QAbstractPrintDialog::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QAbstractPrintDialog::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QAbstractPrintDialog_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QAbstractPrintDialog::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QAbstractPrintDialog::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QAbstractPrintDialog_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QAbstractPrintDialog::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QAbstractPrintDialog::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QAbstractPrintDialog::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QAbstractPrintDialog::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QAbstractPrintDialog_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QAbstractPrintDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QAbstractPrintDialog::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QAbstractPrintDialog_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QAbstractPrintDialog::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAbstractPrintDialog::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAbstractPrintDialog::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAbstractPrintDialog::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAbstractPrintDialog::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAbstractPrintDialog::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAbstractPrintDialog::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAbstractPrintDialog::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractPrintDialog_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAbstractPrintDialog::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAbstractPrintDialog::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractPrintDialog_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAbstractPrintDialog::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QAbstractPrintDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
	friend void QAbstractPrintDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractPrintDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractPrintDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractPrintDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractPrintDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QAbstractPrintDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractPrintDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractPrintDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractPrintDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAbstractPrintDialog* QAbstractPrintDialog_new(QPrinter* printer) {
	return new MiqtVirtualQAbstractPrintDialog(printer);
}

QAbstractPrintDialog* QAbstractPrintDialog_new2(QPrinter* printer, QWidget* parent) {
	return new MiqtVirtualQAbstractPrintDialog(printer, parent);
}

void QAbstractPrintDialog_virtbase(QAbstractPrintDialog* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QAbstractPrintDialog_metaObject(const QAbstractPrintDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractPrintDialog_metacast(QAbstractPrintDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractPrintDialog_tr(const char* s) {
	QString _ret = QAbstractPrintDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractPrintDialog_setOptionTabs(QAbstractPrintDialog* self, struct miqt_array /* of QWidget* */  tabs) {
	QList<QWidget *> tabs_QList;
	tabs_QList.reserve(tabs.len);
	QWidget** tabs_arr = static_cast<QWidget**>(tabs.data);
	for(size_t i = 0; i < tabs.len; ++i) {
		tabs_QList.push_back(tabs_arr[i]);
	}
	self->setOptionTabs(tabs_QList);
}

void QAbstractPrintDialog_setPrintRange(QAbstractPrintDialog* self, int range) {
	self->setPrintRange(static_cast<QAbstractPrintDialog::PrintRange>(range));
}

int QAbstractPrintDialog_printRange(const QAbstractPrintDialog* self) {
	QAbstractPrintDialog::PrintRange _ret = self->printRange();
	return static_cast<int>(_ret);
}

void QAbstractPrintDialog_setMinMax(QAbstractPrintDialog* self, int min, int max) {
	self->setMinMax(static_cast<int>(min), static_cast<int>(max));
}

int QAbstractPrintDialog_minPage(const QAbstractPrintDialog* self) {
	return self->minPage();
}

int QAbstractPrintDialog_maxPage(const QAbstractPrintDialog* self) {
	return self->maxPage();
}

void QAbstractPrintDialog_setFromTo(QAbstractPrintDialog* self, int fromPage, int toPage) {
	self->setFromTo(static_cast<int>(fromPage), static_cast<int>(toPage));
}

int QAbstractPrintDialog_fromPage(const QAbstractPrintDialog* self) {
	return self->fromPage();
}

int QAbstractPrintDialog_toPage(const QAbstractPrintDialog* self) {
	return self->toPage();
}

QPrinter* QAbstractPrintDialog_printer(const QAbstractPrintDialog* self) {
	return self->printer();
}

struct miqt_string QAbstractPrintDialog_tr2(const char* s, const char* c) {
	QString _ret = QAbstractPrintDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractPrintDialog_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractPrintDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractPrintDialog_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_setVisible(visible);
}

bool QAbstractPrintDialog_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QAbstractPrintDialog_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_sizeHint();
}

bool QAbstractPrintDialog_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QAbstractPrintDialog_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_minimumSizeHint();
}

bool QAbstractPrintDialog_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__open = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_open(void* self) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_open();
}

bool QAbstractPrintDialog_override_virtual_exec(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__exec = slot;
	return true;
}

int QAbstractPrintDialog_virtualbase_exec(void* self) {
	return ( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_exec();
}

bool QAbstractPrintDialog_override_virtual_done(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__done = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_done(void* self, int param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_done(param1);
}

bool QAbstractPrintDialog_override_virtual_accept(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__accept = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_accept(void* self) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_accept();
}

bool QAbstractPrintDialog_override_virtual_reject(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reject = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_reject(void* self) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_reject();
}

bool QAbstractPrintDialog_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QAbstractPrintDialog_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_closeEvent(param1);
}

bool QAbstractPrintDialog_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_showEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_showEvent(param1);
}

bool QAbstractPrintDialog_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_resizeEvent(param1);
}

bool QAbstractPrintDialog_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QAbstractPrintDialog_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAbstractPrintDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_eventFilter(param1, param2);
}

bool QAbstractPrintDialog_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QAbstractPrintDialog_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_devType();
}

bool QAbstractPrintDialog_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QAbstractPrintDialog_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_heightForWidth(param1);
}

bool QAbstractPrintDialog_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QAbstractPrintDialog_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_hasHeightForWidth();
}

bool QAbstractPrintDialog_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QAbstractPrintDialog_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_paintEngine();
}

bool QAbstractPrintDialog_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAbstractPrintDialog_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_event(event);
}

bool QAbstractPrintDialog_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_mousePressEvent(event);
}

bool QAbstractPrintDialog_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QAbstractPrintDialog_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QAbstractPrintDialog_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QAbstractPrintDialog_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_wheelEvent(event);
}

bool QAbstractPrintDialog_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QAbstractPrintDialog_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_focusInEvent(event);
}

bool QAbstractPrintDialog_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_focusOutEvent(event);
}

bool QAbstractPrintDialog_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_enterEvent(event);
}

bool QAbstractPrintDialog_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_leaveEvent(event);
}

bool QAbstractPrintDialog_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_paintEvent(event);
}

bool QAbstractPrintDialog_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_moveEvent(event);
}

bool QAbstractPrintDialog_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_tabletEvent(event);
}

bool QAbstractPrintDialog_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_actionEvent(event);
}

bool QAbstractPrintDialog_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QAbstractPrintDialog_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QAbstractPrintDialog_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QAbstractPrintDialog_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_dropEvent(event);
}

bool QAbstractPrintDialog_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_hideEvent(event);
}

bool QAbstractPrintDialog_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QAbstractPrintDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QAbstractPrintDialog_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_changeEvent(param1);
}

bool QAbstractPrintDialog_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QAbstractPrintDialog_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_metric(param1);
}

bool QAbstractPrintDialog_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_initPainter(painter);
}

bool QAbstractPrintDialog_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QAbstractPrintDialog_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_redirected(offset);
}

bool QAbstractPrintDialog_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QAbstractPrintDialog_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_sharedPainter();
}

bool QAbstractPrintDialog_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QAbstractPrintDialog_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QAbstractPrintDialog_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QAbstractPrintDialog_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QAbstractPrintDialog_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QAbstractPrintDialog_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_timerEvent(event);
}

bool QAbstractPrintDialog_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_childEvent(event);
}

bool QAbstractPrintDialog_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_customEvent(event);
}

bool QAbstractPrintDialog_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_connectNotify(signal);
}

bool QAbstractPrintDialog_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_disconnectNotify(signal);
}

void QAbstractPrintDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->adjustPosition(param1);

}

void QAbstractPrintDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QAbstractPrintDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QAbstractPrintDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QAbstractPrintDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QAbstractPrintDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QAbstractPrintDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAbstractPrintDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAbstractPrintDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAbstractPrintDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAbstractPrintDialog_delete(QAbstractPrintDialog* self) {
	delete self;
}

