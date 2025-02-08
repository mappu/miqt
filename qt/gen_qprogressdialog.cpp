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
#include <QLabel>
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
#include <QProgressBar>
#include <QProgressDialog>
#include <QPushButton>
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
#include <qprogressdialog.h>
#include "gen_qprogressdialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QProgressDialog_canceled(intptr_t);
QSize* miqt_exec_callback_QProgressDialog_sizeHint(const QProgressDialog*, intptr_t);
void miqt_exec_callback_QProgressDialog_resizeEvent(QProgressDialog*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QProgressDialog_closeEvent(QProgressDialog*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QProgressDialog_changeEvent(QProgressDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QProgressDialog_showEvent(QProgressDialog*, intptr_t, QShowEvent*);
void miqt_exec_callback_QProgressDialog_setVisible(QProgressDialog*, intptr_t, bool);
QSize* miqt_exec_callback_QProgressDialog_minimumSizeHint(const QProgressDialog*, intptr_t);
void miqt_exec_callback_QProgressDialog_open(QProgressDialog*, intptr_t);
int miqt_exec_callback_QProgressDialog_exec(QProgressDialog*, intptr_t);
void miqt_exec_callback_QProgressDialog_done(QProgressDialog*, intptr_t, int);
void miqt_exec_callback_QProgressDialog_accept(QProgressDialog*, intptr_t);
void miqt_exec_callback_QProgressDialog_reject(QProgressDialog*, intptr_t);
void miqt_exec_callback_QProgressDialog_keyPressEvent(QProgressDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QProgressDialog_contextMenuEvent(QProgressDialog*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QProgressDialog_eventFilter(QProgressDialog*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QProgressDialog_devType(const QProgressDialog*, intptr_t);
int miqt_exec_callback_QProgressDialog_heightForWidth(const QProgressDialog*, intptr_t, int);
bool miqt_exec_callback_QProgressDialog_hasHeightForWidth(const QProgressDialog*, intptr_t);
QPaintEngine* miqt_exec_callback_QProgressDialog_paintEngine(const QProgressDialog*, intptr_t);
bool miqt_exec_callback_QProgressDialog_event(QProgressDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QProgressDialog_mousePressEvent(QProgressDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QProgressDialog_mouseReleaseEvent(QProgressDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QProgressDialog_mouseDoubleClickEvent(QProgressDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QProgressDialog_mouseMoveEvent(QProgressDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QProgressDialog_wheelEvent(QProgressDialog*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QProgressDialog_keyReleaseEvent(QProgressDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QProgressDialog_focusInEvent(QProgressDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QProgressDialog_focusOutEvent(QProgressDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QProgressDialog_enterEvent(QProgressDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QProgressDialog_leaveEvent(QProgressDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QProgressDialog_paintEvent(QProgressDialog*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QProgressDialog_moveEvent(QProgressDialog*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QProgressDialog_tabletEvent(QProgressDialog*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QProgressDialog_actionEvent(QProgressDialog*, intptr_t, QActionEvent*);
void miqt_exec_callback_QProgressDialog_dragEnterEvent(QProgressDialog*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QProgressDialog_dragMoveEvent(QProgressDialog*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QProgressDialog_dragLeaveEvent(QProgressDialog*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QProgressDialog_dropEvent(QProgressDialog*, intptr_t, QDropEvent*);
void miqt_exec_callback_QProgressDialog_hideEvent(QProgressDialog*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QProgressDialog_nativeEvent(QProgressDialog*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QProgressDialog_metric(const QProgressDialog*, intptr_t, int);
void miqt_exec_callback_QProgressDialog_initPainter(const QProgressDialog*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QProgressDialog_redirected(const QProgressDialog*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QProgressDialog_sharedPainter(const QProgressDialog*, intptr_t);
void miqt_exec_callback_QProgressDialog_inputMethodEvent(QProgressDialog*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QProgressDialog_inputMethodQuery(const QProgressDialog*, intptr_t, int);
bool miqt_exec_callback_QProgressDialog_focusNextPrevChild(QProgressDialog*, intptr_t, bool);
void miqt_exec_callback_QProgressDialog_timerEvent(QProgressDialog*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QProgressDialog_childEvent(QProgressDialog*, intptr_t, QChildEvent*);
void miqt_exec_callback_QProgressDialog_customEvent(QProgressDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QProgressDialog_connectNotify(QProgressDialog*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QProgressDialog_disconnectNotify(QProgressDialog*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQProgressDialog final : public QProgressDialog {
public:

	MiqtVirtualQProgressDialog(QWidget* parent): QProgressDialog(parent) {};
	MiqtVirtualQProgressDialog(): QProgressDialog() {};
	MiqtVirtualQProgressDialog(const QString& labelText, const QString& cancelButtonText, int minimum, int maximum): QProgressDialog(labelText, cancelButtonText, minimum, maximum) {};
	MiqtVirtualQProgressDialog(QWidget* parent, Qt::WindowFlags flags): QProgressDialog(parent, flags) {};
	MiqtVirtualQProgressDialog(const QString& labelText, const QString& cancelButtonText, int minimum, int maximum, QWidget* parent): QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent) {};
	MiqtVirtualQProgressDialog(const QString& labelText, const QString& cancelButtonText, int minimum, int maximum, QWidget* parent, Qt::WindowFlags flags): QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent, flags) {};

	virtual ~MiqtVirtualQProgressDialog() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QProgressDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QProgressDialog_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QProgressDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QProgressDialog::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QProgressDialog::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QProgressDialog::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QProgressDialog::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__changeEvent == 0) {
			QProgressDialog::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* event) {

		QProgressDialog::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QProgressDialog::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QProgressDialog::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QProgressDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QProgressDialog_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QProgressDialog::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QProgressDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QProgressDialog_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QProgressDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__open == 0) {
			QProgressDialog::open();
			return;
		}
		

		miqt_exec_callback_QProgressDialog_open(this, handle__open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_open() {

		QProgressDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__exec == 0) {
			return QProgressDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QProgressDialog_exec(this, handle__exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_exec() {

		return QProgressDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int param1) override {
		if (handle__done == 0) {
			QProgressDialog::done(param1);
			return;
		}
		
		int sigval1 = param1;

		miqt_exec_callback_QProgressDialog_done(this, handle__done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_done(int param1) {

		QProgressDialog::done(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__accept == 0) {
			QProgressDialog::accept();
			return;
		}
		

		miqt_exec_callback_QProgressDialog_accept(this, handle__accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_accept() {

		QProgressDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__reject == 0) {
			QProgressDialog::reject();
			return;
		}
		

		miqt_exec_callback_QProgressDialog_reject(this, handle__reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reject() {

		QProgressDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QProgressDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QProgressDialog_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QProgressDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QProgressDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QProgressDialog_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QProgressDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QProgressDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QProgressDialog_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* param1, QEvent* param2) {

		return QProgressDialog::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QProgressDialog::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QProgressDialog_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QProgressDialog::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QProgressDialog::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QProgressDialog_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QProgressDialog::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QProgressDialog::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QProgressDialog_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QProgressDialog::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QProgressDialog::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QProgressDialog_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QProgressDialog::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QProgressDialog::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QProgressDialog_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QProgressDialog::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QProgressDialog::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QProgressDialog::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QProgressDialog::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QProgressDialog::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QProgressDialog::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QProgressDialog::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QProgressDialog::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QProgressDialog::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QProgressDialog::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QProgressDialog::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QProgressDialog::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QProgressDialog::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QProgressDialog::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QProgressDialog::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QProgressDialog::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QProgressDialog::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QProgressDialog::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QProgressDialog::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QProgressDialog::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QProgressDialog::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QProgressDialog::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QProgressDialog::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QProgressDialog::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QProgressDialog::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QProgressDialog::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QProgressDialog::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QProgressDialog::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QProgressDialog::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QProgressDialog::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QProgressDialog::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QProgressDialog::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QProgressDialog::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QProgressDialog::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QProgressDialog::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QProgressDialog::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QProgressDialog::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QProgressDialog::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QProgressDialog::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QProgressDialog::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QProgressDialog_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QProgressDialog::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QProgressDialog::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QProgressDialog_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QProgressDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QProgressDialog::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QProgressDialog_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QProgressDialog::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QProgressDialog::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QProgressDialog_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QProgressDialog::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QProgressDialog::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QProgressDialog_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QProgressDialog::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QProgressDialog::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QProgressDialog_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QProgressDialog::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QProgressDialog::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QProgressDialog_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QProgressDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QProgressDialog::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QProgressDialog_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QProgressDialog::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QProgressDialog::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QProgressDialog::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QProgressDialog::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QProgressDialog::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QProgressDialog::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QProgressDialog::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QProgressDialog::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QProgressDialog_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QProgressDialog::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QProgressDialog::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QProgressDialog_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QProgressDialog::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QProgressDialog_protectedbase_forceShow(bool* _dynamic_cast_ok, void* self);
	friend void QProgressDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
	friend void QProgressDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QProgressDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QProgressDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QProgressDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QProgressDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QProgressDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QProgressDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QProgressDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QProgressDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QProgressDialog* QProgressDialog_new(QWidget* parent) {
	return new MiqtVirtualQProgressDialog(parent);
}

QProgressDialog* QProgressDialog_new2() {
	return new MiqtVirtualQProgressDialog();
}

QProgressDialog* QProgressDialog_new3(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	QString cancelButtonText_QString = QString::fromUtf8(cancelButtonText.data, cancelButtonText.len);
	return new MiqtVirtualQProgressDialog(labelText_QString, cancelButtonText_QString, static_cast<int>(minimum), static_cast<int>(maximum));
}

QProgressDialog* QProgressDialog_new4(QWidget* parent, int flags) {
	return new MiqtVirtualQProgressDialog(parent, static_cast<Qt::WindowFlags>(flags));
}

QProgressDialog* QProgressDialog_new5(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum, QWidget* parent) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	QString cancelButtonText_QString = QString::fromUtf8(cancelButtonText.data, cancelButtonText.len);
	return new MiqtVirtualQProgressDialog(labelText_QString, cancelButtonText_QString, static_cast<int>(minimum), static_cast<int>(maximum), parent);
}

QProgressDialog* QProgressDialog_new6(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum, QWidget* parent, int flags) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	QString cancelButtonText_QString = QString::fromUtf8(cancelButtonText.data, cancelButtonText.len);
	return new MiqtVirtualQProgressDialog(labelText_QString, cancelButtonText_QString, static_cast<int>(minimum), static_cast<int>(maximum), parent, static_cast<Qt::WindowFlags>(flags));
}

void QProgressDialog_virtbase(QProgressDialog* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QProgressDialog_metaObject(const QProgressDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QProgressDialog_metacast(QProgressDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QProgressDialog_tr(const char* s) {
	QString _ret = QProgressDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProgressDialog_trUtf8(const char* s) {
	QString _ret = QProgressDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProgressDialog_setLabel(QProgressDialog* self, QLabel* label) {
	self->setLabel(label);
}

void QProgressDialog_setCancelButton(QProgressDialog* self, QPushButton* button) {
	self->setCancelButton(button);
}

void QProgressDialog_setBar(QProgressDialog* self, QProgressBar* bar) {
	self->setBar(bar);
}

bool QProgressDialog_wasCanceled(const QProgressDialog* self) {
	return self->wasCanceled();
}

int QProgressDialog_minimum(const QProgressDialog* self) {
	return self->minimum();
}

int QProgressDialog_maximum(const QProgressDialog* self) {
	return self->maximum();
}

int QProgressDialog_value(const QProgressDialog* self) {
	return self->value();
}

QSize* QProgressDialog_sizeHint(const QProgressDialog* self) {
	return new QSize(self->sizeHint());
}

struct miqt_string QProgressDialog_labelText(const QProgressDialog* self) {
	QString _ret = self->labelText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QProgressDialog_minimumDuration(const QProgressDialog* self) {
	return self->minimumDuration();
}

void QProgressDialog_setAutoReset(QProgressDialog* self, bool reset) {
	self->setAutoReset(reset);
}

bool QProgressDialog_autoReset(const QProgressDialog* self) {
	return self->autoReset();
}

void QProgressDialog_setAutoClose(QProgressDialog* self, bool close) {
	self->setAutoClose(close);
}

bool QProgressDialog_autoClose(const QProgressDialog* self) {
	return self->autoClose();
}

void QProgressDialog_cancel(QProgressDialog* self) {
	self->cancel();
}

void QProgressDialog_reset(QProgressDialog* self) {
	self->reset();
}

void QProgressDialog_setMaximum(QProgressDialog* self, int maximum) {
	self->setMaximum(static_cast<int>(maximum));
}

void QProgressDialog_setMinimum(QProgressDialog* self, int minimum) {
	self->setMinimum(static_cast<int>(minimum));
}

void QProgressDialog_setRange(QProgressDialog* self, int minimum, int maximum) {
	self->setRange(static_cast<int>(minimum), static_cast<int>(maximum));
}

void QProgressDialog_setValue(QProgressDialog* self, int progress) {
	self->setValue(static_cast<int>(progress));
}

void QProgressDialog_setLabelText(QProgressDialog* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setLabelText(text_QString);
}

void QProgressDialog_setCancelButtonText(QProgressDialog* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setCancelButtonText(text_QString);
}

void QProgressDialog_setMinimumDuration(QProgressDialog* self, int ms) {
	self->setMinimumDuration(static_cast<int>(ms));
}

void QProgressDialog_canceled(QProgressDialog* self) {
	self->canceled();
}

void QProgressDialog_connect_canceled(QProgressDialog* self, intptr_t slot) {
	MiqtVirtualQProgressDialog::connect(self, static_cast<void (QProgressDialog::*)()>(&QProgressDialog::canceled), self, [=]() {
		miqt_exec_callback_QProgressDialog_canceled(slot);
	});
}

struct miqt_string QProgressDialog_tr2(const char* s, const char* c) {
	QString _ret = QProgressDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProgressDialog_tr3(const char* s, const char* c, int n) {
	QString _ret = QProgressDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProgressDialog_trUtf82(const char* s, const char* c) {
	QString _ret = QProgressDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProgressDialog_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QProgressDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QProgressDialog_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QProgressDialog_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_sizeHint();
}

bool QProgressDialog_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_resizeEvent(event);
}

bool QProgressDialog_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_closeEvent(event);
}

bool QProgressDialog_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_changeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_changeEvent(event);
}

bool QProgressDialog_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_showEvent(event);
}

bool QProgressDialog_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QProgressDialog_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_setVisible(visible);
}

bool QProgressDialog_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QProgressDialog_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_minimumSizeHint();
}

bool QProgressDialog_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__open = slot;
	return true;
}

void QProgressDialog_virtualbase_open(void* self) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_open();
}

bool QProgressDialog_override_virtual_exec(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__exec = slot;
	return true;
}

int QProgressDialog_virtualbase_exec(void* self) {
	return ( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_exec();
}

bool QProgressDialog_override_virtual_done(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__done = slot;
	return true;
}

void QProgressDialog_virtualbase_done(void* self, int param1) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_done(param1);
}

bool QProgressDialog_override_virtual_accept(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__accept = slot;
	return true;
}

void QProgressDialog_virtualbase_accept(void* self) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_accept();
}

bool QProgressDialog_override_virtual_reject(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reject = slot;
	return true;
}

void QProgressDialog_virtualbase_reject(void* self) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_reject();
}

bool QProgressDialog_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QProgressDialog_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QProgressDialog_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QProgressDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_eventFilter(param1, param2);
}

bool QProgressDialog_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QProgressDialog_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_devType();
}

bool QProgressDialog_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QProgressDialog_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_heightForWidth(param1);
}

bool QProgressDialog_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QProgressDialog_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_hasHeightForWidth();
}

bool QProgressDialog_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QProgressDialog_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_paintEngine();
}

bool QProgressDialog_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QProgressDialog_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_event(event);
}

bool QProgressDialog_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_mousePressEvent(event);
}

bool QProgressDialog_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QProgressDialog_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QProgressDialog_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QProgressDialog_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_wheelEvent(event);
}

bool QProgressDialog_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QProgressDialog_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_focusInEvent(event);
}

bool QProgressDialog_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_focusOutEvent(event);
}

bool QProgressDialog_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_enterEvent(event);
}

bool QProgressDialog_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_leaveEvent(event);
}

bool QProgressDialog_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_paintEvent(event);
}

bool QProgressDialog_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_moveEvent(event);
}

bool QProgressDialog_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_tabletEvent(event);
}

bool QProgressDialog_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_actionEvent(event);
}

bool QProgressDialog_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QProgressDialog_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QProgressDialog_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QProgressDialog_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_dropEvent(event);
}

bool QProgressDialog_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_hideEvent(event);
}

bool QProgressDialog_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QProgressDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QProgressDialog_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QProgressDialog_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_metric(param1);
}

bool QProgressDialog_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QProgressDialog_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_initPainter(painter);
}

bool QProgressDialog_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QProgressDialog_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_redirected(offset);
}

bool QProgressDialog_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QProgressDialog_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_sharedPainter();
}

bool QProgressDialog_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QProgressDialog_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QProgressDialog_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QProgressDialog_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QProgressDialog_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QProgressDialog_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_timerEvent(event);
}

bool QProgressDialog_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_childEvent(event);
}

bool QProgressDialog_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_customEvent(event);
}

bool QProgressDialog_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QProgressDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_connectNotify(signal);
}

bool QProgressDialog_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QProgressDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_disconnectNotify(signal);
}

void QProgressDialog_protectedbase_forceShow(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->forceShow();

}

void QProgressDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->adjustPosition(param1);

}

void QProgressDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QProgressDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QProgressDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QProgressDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QProgressDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QProgressDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QProgressDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QProgressDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QProgressDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QProgressDialog_delete(QProgressDialog* self) {
	delete self;
}

