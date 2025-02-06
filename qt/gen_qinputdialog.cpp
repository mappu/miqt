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
#include <QInputDialog>
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
#include <qinputdialog.h>
#include "gen_qinputdialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QInputDialog_textValueChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QInputDialog_textValueSelected(intptr_t, struct miqt_string);
void miqt_exec_callback_QInputDialog_intValueChanged(intptr_t, int);
void miqt_exec_callback_QInputDialog_intValueSelected(intptr_t, int);
void miqt_exec_callback_QInputDialog_doubleValueChanged(intptr_t, double);
void miqt_exec_callback_QInputDialog_doubleValueSelected(intptr_t, double);
QSize* miqt_exec_callback_QInputDialog_minimumSizeHint(const QInputDialog*, intptr_t);
QSize* miqt_exec_callback_QInputDialog_sizeHint(const QInputDialog*, intptr_t);
void miqt_exec_callback_QInputDialog_setVisible(QInputDialog*, intptr_t, bool);
void miqt_exec_callback_QInputDialog_done(QInputDialog*, intptr_t, int);
void miqt_exec_callback_QInputDialog_open(QInputDialog*, intptr_t);
int miqt_exec_callback_QInputDialog_exec(QInputDialog*, intptr_t);
void miqt_exec_callback_QInputDialog_accept(QInputDialog*, intptr_t);
void miqt_exec_callback_QInputDialog_reject(QInputDialog*, intptr_t);
void miqt_exec_callback_QInputDialog_keyPressEvent(QInputDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QInputDialog_closeEvent(QInputDialog*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QInputDialog_showEvent(QInputDialog*, intptr_t, QShowEvent*);
void miqt_exec_callback_QInputDialog_resizeEvent(QInputDialog*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QInputDialog_contextMenuEvent(QInputDialog*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QInputDialog_eventFilter(QInputDialog*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QInputDialog_devType(const QInputDialog*, intptr_t);
int miqt_exec_callback_QInputDialog_heightForWidth(const QInputDialog*, intptr_t, int);
bool miqt_exec_callback_QInputDialog_hasHeightForWidth(const QInputDialog*, intptr_t);
QPaintEngine* miqt_exec_callback_QInputDialog_paintEngine(const QInputDialog*, intptr_t);
bool miqt_exec_callback_QInputDialog_event(QInputDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QInputDialog_mousePressEvent(QInputDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QInputDialog_mouseReleaseEvent(QInputDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QInputDialog_mouseDoubleClickEvent(QInputDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QInputDialog_mouseMoveEvent(QInputDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QInputDialog_wheelEvent(QInputDialog*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QInputDialog_keyReleaseEvent(QInputDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QInputDialog_focusInEvent(QInputDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QInputDialog_focusOutEvent(QInputDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QInputDialog_enterEvent(QInputDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QInputDialog_leaveEvent(QInputDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QInputDialog_paintEvent(QInputDialog*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QInputDialog_moveEvent(QInputDialog*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QInputDialog_tabletEvent(QInputDialog*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QInputDialog_actionEvent(QInputDialog*, intptr_t, QActionEvent*);
void miqt_exec_callback_QInputDialog_dragEnterEvent(QInputDialog*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QInputDialog_dragMoveEvent(QInputDialog*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QInputDialog_dragLeaveEvent(QInputDialog*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QInputDialog_dropEvent(QInputDialog*, intptr_t, QDropEvent*);
void miqt_exec_callback_QInputDialog_hideEvent(QInputDialog*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QInputDialog_nativeEvent(QInputDialog*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QInputDialog_changeEvent(QInputDialog*, intptr_t, QEvent*);
int miqt_exec_callback_QInputDialog_metric(const QInputDialog*, intptr_t, int);
void miqt_exec_callback_QInputDialog_initPainter(const QInputDialog*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QInputDialog_redirected(const QInputDialog*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QInputDialog_sharedPainter(const QInputDialog*, intptr_t);
void miqt_exec_callback_QInputDialog_inputMethodEvent(QInputDialog*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QInputDialog_inputMethodQuery(const QInputDialog*, intptr_t, int);
bool miqt_exec_callback_QInputDialog_focusNextPrevChild(QInputDialog*, intptr_t, bool);
void miqt_exec_callback_QInputDialog_timerEvent(QInputDialog*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QInputDialog_childEvent(QInputDialog*, intptr_t, QChildEvent*);
void miqt_exec_callback_QInputDialog_customEvent(QInputDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QInputDialog_connectNotify(QInputDialog*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QInputDialog_disconnectNotify(QInputDialog*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQInputDialog final : public QInputDialog {
public:

	MiqtVirtualQInputDialog(QWidget* parent): QInputDialog(parent) {};
	MiqtVirtualQInputDialog(): QInputDialog() {};
	MiqtVirtualQInputDialog(QWidget* parent, Qt::WindowFlags flags): QInputDialog(parent, flags) {};

	virtual ~MiqtVirtualQInputDialog() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QInputDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QInputDialog_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QInputDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QInputDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QInputDialog_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QInputDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QInputDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QInputDialog_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QInputDialog::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int result) override {
		if (handle__done == 0) {
			QInputDialog::done(result);
			return;
		}
		
		int sigval1 = result;

		miqt_exec_callback_QInputDialog_done(this, handle__done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_done(int result) {

		QInputDialog::done(static_cast<int>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__open == 0) {
			QInputDialog::open();
			return;
		}
		

		miqt_exec_callback_QInputDialog_open(this, handle__open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_open() {

		QInputDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__exec == 0) {
			return QInputDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QInputDialog_exec(this, handle__exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_exec() {

		return QInputDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__accept == 0) {
			QInputDialog::accept();
			return;
		}
		

		miqt_exec_callback_QInputDialog_accept(this, handle__accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_accept() {

		QInputDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__reject == 0) {
			QInputDialog::reject();
			return;
		}
		

		miqt_exec_callback_QInputDialog_reject(this, handle__reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reject() {

		QInputDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QInputDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QInputDialog_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QInputDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__closeEvent == 0) {
			QInputDialog::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QInputDialog_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* param1) {

		QInputDialog::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QInputDialog::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QInputDialog_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* param1) {

		QInputDialog::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QInputDialog::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QInputDialog_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* param1) {

		QInputDialog::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QInputDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QInputDialog_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QInputDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QInputDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QInputDialog_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* param1, QEvent* param2) {

		return QInputDialog::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QInputDialog::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QInputDialog_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QInputDialog::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QInputDialog::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QInputDialog_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QInputDialog::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QInputDialog::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QInputDialog_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QInputDialog::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QInputDialog::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QInputDialog_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QInputDialog::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QInputDialog::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QInputDialog_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QInputDialog::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QInputDialog::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QInputDialog::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QInputDialog::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QInputDialog::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QInputDialog::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QInputDialog::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QInputDialog::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QInputDialog::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QInputDialog::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QInputDialog::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QInputDialog::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QInputDialog::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QInputDialog::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QInputDialog::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QInputDialog::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QInputDialog::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QInputDialog::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QInputDialog::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QInputDialog::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QInputDialog::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QInputDialog::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QInputDialog::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QInputDialog::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QInputDialog::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QInputDialog::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QInputDialog::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QInputDialog::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QInputDialog::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QInputDialog::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QInputDialog::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QInputDialog::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QInputDialog::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QInputDialog::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QInputDialog::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QInputDialog::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QInputDialog::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QInputDialog::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QInputDialog::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QInputDialog::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QInputDialog_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QInputDialog::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QInputDialog::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QInputDialog_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QInputDialog::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QInputDialog::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QInputDialog_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QInputDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QInputDialog::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QInputDialog_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QInputDialog::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QInputDialog::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QInputDialog_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QInputDialog::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QInputDialog::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QInputDialog_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QInputDialog::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QInputDialog::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QInputDialog_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QInputDialog::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QInputDialog::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QInputDialog_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QInputDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QInputDialog::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QInputDialog_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QInputDialog::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QInputDialog::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QInputDialog::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QInputDialog::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QInputDialog::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QInputDialog::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QInputDialog::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QInputDialog::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QInputDialog_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QInputDialog::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QInputDialog::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QInputDialog_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QInputDialog::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QInputDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
	friend void QInputDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QInputDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QInputDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QInputDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QInputDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QInputDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QInputDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QInputDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QInputDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QInputDialog* QInputDialog_new(QWidget* parent) {
	return new MiqtVirtualQInputDialog(parent);
}

QInputDialog* QInputDialog_new2() {
	return new MiqtVirtualQInputDialog();
}

QInputDialog* QInputDialog_new3(QWidget* parent, int flags) {
	return new MiqtVirtualQInputDialog(parent, static_cast<Qt::WindowFlags>(flags));
}

void QInputDialog_virtbase(QInputDialog* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QInputDialog_metaObject(const QInputDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QInputDialog_metacast(QInputDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QInputDialog_tr(const char* s) {
	QString _ret = QInputDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_trUtf8(const char* s) {
	QString _ret = QInputDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QInputDialog_setInputMode(QInputDialog* self, int mode) {
	self->setInputMode(static_cast<QInputDialog::InputMode>(mode));
}

int QInputDialog_inputMode(const QInputDialog* self) {
	QInputDialog::InputMode _ret = self->inputMode();
	return static_cast<int>(_ret);
}

void QInputDialog_setLabelText(QInputDialog* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setLabelText(text_QString);
}

struct miqt_string QInputDialog_labelText(const QInputDialog* self) {
	QString _ret = self->labelText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QInputDialog_setOption(QInputDialog* self, int option) {
	self->setOption(static_cast<QInputDialog::InputDialogOption>(option));
}

bool QInputDialog_testOption(const QInputDialog* self, int option) {
	return self->testOption(static_cast<QInputDialog::InputDialogOption>(option));
}

void QInputDialog_setOptions(QInputDialog* self, int options) {
	self->setOptions(static_cast<QInputDialog::InputDialogOptions>(options));
}

int QInputDialog_options(const QInputDialog* self) {
	QInputDialog::InputDialogOptions _ret = self->options();
	return static_cast<int>(_ret);
}

void QInputDialog_setTextValue(QInputDialog* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setTextValue(text_QString);
}

struct miqt_string QInputDialog_textValue(const QInputDialog* self) {
	QString _ret = self->textValue();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QInputDialog_setTextEchoMode(QInputDialog* self, int mode) {
	self->setTextEchoMode(static_cast<QLineEdit::EchoMode>(mode));
}

int QInputDialog_textEchoMode(const QInputDialog* self) {
	QLineEdit::EchoMode _ret = self->textEchoMode();
	return static_cast<int>(_ret);
}

void QInputDialog_setComboBoxEditable(QInputDialog* self, bool editable) {
	self->setComboBoxEditable(editable);
}

bool QInputDialog_isComboBoxEditable(const QInputDialog* self) {
	return self->isComboBoxEditable();
}

void QInputDialog_setComboBoxItems(QInputDialog* self, struct miqt_array /* of struct miqt_string */  items) {
	QStringList items_QList;
	items_QList.reserve(items.len);
	struct miqt_string* items_arr = static_cast<struct miqt_string*>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
		items_QList.push_back(items_arr_i_QString);
	}
	self->setComboBoxItems(items_QList);
}

struct miqt_array /* of struct miqt_string */  QInputDialog_comboBoxItems(const QInputDialog* self) {
	QStringList _ret = self->comboBoxItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QInputDialog_setIntValue(QInputDialog* self, int value) {
	self->setIntValue(static_cast<int>(value));
}

int QInputDialog_intValue(const QInputDialog* self) {
	return self->intValue();
}

void QInputDialog_setIntMinimum(QInputDialog* self, int min) {
	self->setIntMinimum(static_cast<int>(min));
}

int QInputDialog_intMinimum(const QInputDialog* self) {
	return self->intMinimum();
}

void QInputDialog_setIntMaximum(QInputDialog* self, int max) {
	self->setIntMaximum(static_cast<int>(max));
}

int QInputDialog_intMaximum(const QInputDialog* self) {
	return self->intMaximum();
}

void QInputDialog_setIntRange(QInputDialog* self, int min, int max) {
	self->setIntRange(static_cast<int>(min), static_cast<int>(max));
}

void QInputDialog_setIntStep(QInputDialog* self, int step) {
	self->setIntStep(static_cast<int>(step));
}

int QInputDialog_intStep(const QInputDialog* self) {
	return self->intStep();
}

void QInputDialog_setDoubleValue(QInputDialog* self, double value) {
	self->setDoubleValue(static_cast<double>(value));
}

double QInputDialog_doubleValue(const QInputDialog* self) {
	return self->doubleValue();
}

void QInputDialog_setDoubleMinimum(QInputDialog* self, double min) {
	self->setDoubleMinimum(static_cast<double>(min));
}

double QInputDialog_doubleMinimum(const QInputDialog* self) {
	return self->doubleMinimum();
}

void QInputDialog_setDoubleMaximum(QInputDialog* self, double max) {
	self->setDoubleMaximum(static_cast<double>(max));
}

double QInputDialog_doubleMaximum(const QInputDialog* self) {
	return self->doubleMaximum();
}

void QInputDialog_setDoubleRange(QInputDialog* self, double min, double max) {
	self->setDoubleRange(static_cast<double>(min), static_cast<double>(max));
}

void QInputDialog_setDoubleDecimals(QInputDialog* self, int decimals) {
	self->setDoubleDecimals(static_cast<int>(decimals));
}

int QInputDialog_doubleDecimals(const QInputDialog* self) {
	return self->doubleDecimals();
}

void QInputDialog_setOkButtonText(QInputDialog* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setOkButtonText(text_QString);
}

struct miqt_string QInputDialog_okButtonText(const QInputDialog* self) {
	QString _ret = self->okButtonText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QInputDialog_setCancelButtonText(QInputDialog* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setCancelButtonText(text_QString);
}

struct miqt_string QInputDialog_cancelButtonText(const QInputDialog* self) {
	QString _ret = self->cancelButtonText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QInputDialog_minimumSizeHint(const QInputDialog* self) {
	return new QSize(self->minimumSizeHint());
}

QSize* QInputDialog_sizeHint(const QInputDialog* self) {
	return new QSize(self->sizeHint());
}

void QInputDialog_setVisible(QInputDialog* self, bool visible) {
	self->setVisible(visible);
}

struct miqt_string QInputDialog_getText(QWidget* parent, struct miqt_string title, struct miqt_string label) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString _ret = QInputDialog::getText(parent, title_QString, label_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_getMultiLineText(QWidget* parent, struct miqt_string title, struct miqt_string label) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_getItem(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */  items) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QStringList items_QList;
	items_QList.reserve(items.len);
	struct miqt_string* items_arr = static_cast<struct miqt_string*>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
		items_QList.push_back(items_arr_i_QString);
	}
	QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QInputDialog_getInt(QWidget* parent, struct miqt_string title, struct miqt_string label) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getInt(parent, title_QString, label_QString);
}

double QInputDialog_getDouble(QWidget* parent, struct miqt_string title, struct miqt_string label) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getDouble(parent, title_QString, label_QString);
}

double QInputDialog_getDouble2(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags, double step) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<int>(decimals), ok, static_cast<Qt::WindowFlags>(flags), static_cast<double>(step));
}

void QInputDialog_setDoubleStep(QInputDialog* self, double step) {
	self->setDoubleStep(static_cast<double>(step));
}

double QInputDialog_doubleStep(const QInputDialog* self) {
	return self->doubleStep();
}

void QInputDialog_textValueChanged(QInputDialog* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->textValueChanged(text_QString);
}

void QInputDialog_connect_textValueChanged(QInputDialog* self, intptr_t slot) {
	MiqtVirtualQInputDialog::connect(self, static_cast<void (QInputDialog::*)(const QString&)>(&QInputDialog::textValueChanged), self, [=](const QString& text) {
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		miqt_exec_callback_QInputDialog_textValueChanged(slot, sigval1);
	});
}

void QInputDialog_textValueSelected(QInputDialog* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->textValueSelected(text_QString);
}

void QInputDialog_connect_textValueSelected(QInputDialog* self, intptr_t slot) {
	MiqtVirtualQInputDialog::connect(self, static_cast<void (QInputDialog::*)(const QString&)>(&QInputDialog::textValueSelected), self, [=](const QString& text) {
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		miqt_exec_callback_QInputDialog_textValueSelected(slot, sigval1);
	});
}

void QInputDialog_intValueChanged(QInputDialog* self, int value) {
	self->intValueChanged(static_cast<int>(value));
}

void QInputDialog_connect_intValueChanged(QInputDialog* self, intptr_t slot) {
	MiqtVirtualQInputDialog::connect(self, static_cast<void (QInputDialog::*)(int)>(&QInputDialog::intValueChanged), self, [=](int value) {
		int sigval1 = value;
		miqt_exec_callback_QInputDialog_intValueChanged(slot, sigval1);
	});
}

void QInputDialog_intValueSelected(QInputDialog* self, int value) {
	self->intValueSelected(static_cast<int>(value));
}

void QInputDialog_connect_intValueSelected(QInputDialog* self, intptr_t slot) {
	MiqtVirtualQInputDialog::connect(self, static_cast<void (QInputDialog::*)(int)>(&QInputDialog::intValueSelected), self, [=](int value) {
		int sigval1 = value;
		miqt_exec_callback_QInputDialog_intValueSelected(slot, sigval1);
	});
}

void QInputDialog_doubleValueChanged(QInputDialog* self, double value) {
	self->doubleValueChanged(static_cast<double>(value));
}

void QInputDialog_connect_doubleValueChanged(QInputDialog* self, intptr_t slot) {
	MiqtVirtualQInputDialog::connect(self, static_cast<void (QInputDialog::*)(double)>(&QInputDialog::doubleValueChanged), self, [=](double value) {
		double sigval1 = value;
		miqt_exec_callback_QInputDialog_doubleValueChanged(slot, sigval1);
	});
}

void QInputDialog_doubleValueSelected(QInputDialog* self, double value) {
	self->doubleValueSelected(static_cast<double>(value));
}

void QInputDialog_connect_doubleValueSelected(QInputDialog* self, intptr_t slot) {
	MiqtVirtualQInputDialog::connect(self, static_cast<void (QInputDialog::*)(double)>(&QInputDialog::doubleValueSelected), self, [=](double value) {
		double sigval1 = value;
		miqt_exec_callback_QInputDialog_doubleValueSelected(slot, sigval1);
	});
}

void QInputDialog_done(QInputDialog* self, int result) {
	self->done(static_cast<int>(result));
}

struct miqt_string QInputDialog_tr2(const char* s, const char* c) {
	QString _ret = QInputDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_tr3(const char* s, const char* c, int n) {
	QString _ret = QInputDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_trUtf82(const char* s, const char* c) {
	QString _ret = QInputDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QInputDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QInputDialog_setOption2(QInputDialog* self, int option, bool on) {
	self->setOption(static_cast<QInputDialog::InputDialogOption>(option), on);
}

struct miqt_string QInputDialog_getText4(QWidget* parent, struct miqt_string title, struct miqt_string label, int echo) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_getText5(QWidget* parent, struct miqt_string title, struct miqt_string label, int echo, struct miqt_string text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_getText6(QWidget* parent, struct miqt_string title, struct miqt_string label, int echo, struct miqt_string text, bool* ok) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString, ok);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_getText7(QWidget* parent, struct miqt_string title, struct miqt_string label, int echo, struct miqt_string text, bool* ok, int flags) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString, ok, static_cast<Qt::WindowFlags>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_getText8(QWidget* parent, struct miqt_string title, struct miqt_string label, int echo, struct miqt_string text, bool* ok, int flags, int inputMethodHints) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString, ok, static_cast<Qt::WindowFlags>(flags), static_cast<Qt::InputMethodHints>(inputMethodHints));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_getMultiLineText4(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_string text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_getMultiLineText5(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_string text, bool* ok) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString, ok);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_getMultiLineText6(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_string text, bool* ok, int flags) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString, ok, static_cast<Qt::WindowFlags>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_getMultiLineText7(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_string text, bool* ok, int flags, int inputMethodHints) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString, ok, static_cast<Qt::WindowFlags>(flags), static_cast<Qt::InputMethodHints>(inputMethodHints));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_getItem5(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */  items, int current) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QStringList items_QList;
	items_QList.reserve(items.len);
	struct miqt_string* items_arr = static_cast<struct miqt_string*>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
		items_QList.push_back(items_arr_i_QString);
	}
	QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_getItem6(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */  items, int current, bool editable) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QStringList items_QList;
	items_QList.reserve(items.len);
	struct miqt_string* items_arr = static_cast<struct miqt_string*>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
		items_QList.push_back(items_arr_i_QString);
	}
	QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_getItem7(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */  items, int current, bool editable, bool* ok) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QStringList items_QList;
	items_QList.reserve(items.len);
	struct miqt_string* items_arr = static_cast<struct miqt_string*>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
		items_QList.push_back(items_arr_i_QString);
	}
	QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable, ok);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_getItem8(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */  items, int current, bool editable, bool* ok, int flags) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QStringList items_QList;
	items_QList.reserve(items.len);
	struct miqt_string* items_arr = static_cast<struct miqt_string*>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
		items_QList.push_back(items_arr_i_QString);
	}
	QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable, ok, static_cast<Qt::WindowFlags>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_getItem9(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */  items, int current, bool editable, bool* ok, int flags, int inputMethodHints) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QStringList items_QList;
	items_QList.reserve(items.len);
	struct miqt_string* items_arr = static_cast<struct miqt_string*>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
		items_QList.push_back(items_arr_i_QString);
	}
	QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable, ok, static_cast<Qt::WindowFlags>(flags), static_cast<Qt::InputMethodHints>(inputMethodHints));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QInputDialog_getInt4(QWidget* parent, struct miqt_string title, struct miqt_string label, int value) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value));
}

int QInputDialog_getInt5(QWidget* parent, struct miqt_string title, struct miqt_string label, int value, int minValue) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue));
}

int QInputDialog_getInt6(QWidget* parent, struct miqt_string title, struct miqt_string label, int value, int minValue, int maxValue) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue), static_cast<int>(maxValue));
}

int QInputDialog_getInt7(QWidget* parent, struct miqt_string title, struct miqt_string label, int value, int minValue, int maxValue, int step) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue), static_cast<int>(maxValue), static_cast<int>(step));
}

int QInputDialog_getInt8(QWidget* parent, struct miqt_string title, struct miqt_string label, int value, int minValue, int maxValue, int step, bool* ok) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue), static_cast<int>(maxValue), static_cast<int>(step), ok);
}

int QInputDialog_getInt9(QWidget* parent, struct miqt_string title, struct miqt_string label, int value, int minValue, int maxValue, int step, bool* ok, int flags) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue), static_cast<int>(maxValue), static_cast<int>(step), ok, static_cast<Qt::WindowFlags>(flags));
}

double QInputDialog_getDouble4(QWidget* parent, struct miqt_string title, struct miqt_string label, double value) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value));
}

double QInputDialog_getDouble5(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue));
}

double QInputDialog_getDouble6(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue, double maxValue) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue));
}

double QInputDialog_getDouble7(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue, double maxValue, int decimals) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<int>(decimals));
}

double QInputDialog_getDouble8(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<int>(decimals), ok);
}

double QInputDialog_getDouble9(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<int>(decimals), ok, static_cast<Qt::WindowFlags>(flags));
}

bool QInputDialog_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QInputDialog_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_minimumSizeHint();
}

bool QInputDialog_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QInputDialog_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_sizeHint();
}

bool QInputDialog_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QInputDialog_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_setVisible(visible);
}

bool QInputDialog_override_virtual_done(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__done = slot;
	return true;
}

void QInputDialog_virtualbase_done(void* self, int result) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_done(result);
}

bool QInputDialog_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__open = slot;
	return true;
}

void QInputDialog_virtualbase_open(void* self) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_open();
}

bool QInputDialog_override_virtual_exec(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__exec = slot;
	return true;
}

int QInputDialog_virtualbase_exec(void* self) {
	return ( (MiqtVirtualQInputDialog*)(self) )->virtualbase_exec();
}

bool QInputDialog_override_virtual_accept(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__accept = slot;
	return true;
}

void QInputDialog_virtualbase_accept(void* self) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_accept();
}

bool QInputDialog_override_virtual_reject(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reject = slot;
	return true;
}

void QInputDialog_virtualbase_reject(void* self) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_reject();
}

bool QInputDialog_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QInputDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QInputDialog_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QInputDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_closeEvent(param1);
}

bool QInputDialog_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QInputDialog_virtualbase_showEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_showEvent(param1);
}

bool QInputDialog_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QInputDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_resizeEvent(param1);
}

bool QInputDialog_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QInputDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QInputDialog_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QInputDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQInputDialog*)(self) )->virtualbase_eventFilter(param1, param2);
}

bool QInputDialog_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QInputDialog_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_devType();
}

bool QInputDialog_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QInputDialog_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_heightForWidth(param1);
}

bool QInputDialog_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QInputDialog_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_hasHeightForWidth();
}

bool QInputDialog_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QInputDialog_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_paintEngine();
}

bool QInputDialog_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QInputDialog_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQInputDialog*)(self) )->virtualbase_event(event);
}

bool QInputDialog_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QInputDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_mousePressEvent(event);
}

bool QInputDialog_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QInputDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QInputDialog_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QInputDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QInputDialog_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QInputDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QInputDialog_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QInputDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_wheelEvent(event);
}

bool QInputDialog_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QInputDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QInputDialog_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QInputDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_focusInEvent(event);
}

bool QInputDialog_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QInputDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_focusOutEvent(event);
}

bool QInputDialog_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QInputDialog_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_enterEvent(event);
}

bool QInputDialog_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QInputDialog_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_leaveEvent(event);
}

bool QInputDialog_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QInputDialog_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_paintEvent(event);
}

bool QInputDialog_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QInputDialog_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_moveEvent(event);
}

bool QInputDialog_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QInputDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_tabletEvent(event);
}

bool QInputDialog_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QInputDialog_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_actionEvent(event);
}

bool QInputDialog_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QInputDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QInputDialog_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QInputDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QInputDialog_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QInputDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QInputDialog_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QInputDialog_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_dropEvent(event);
}

bool QInputDialog_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QInputDialog_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_hideEvent(event);
}

bool QInputDialog_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QInputDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQInputDialog*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QInputDialog_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QInputDialog_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_changeEvent(param1);
}

bool QInputDialog_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QInputDialog_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_metric(param1);
}

bool QInputDialog_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QInputDialog_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_initPainter(painter);
}

bool QInputDialog_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QInputDialog_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_redirected(offset);
}

bool QInputDialog_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QInputDialog_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_sharedPainter();
}

bool QInputDialog_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QInputDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QInputDialog_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QInputDialog_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QInputDialog_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QInputDialog_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQInputDialog*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QInputDialog_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QInputDialog_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_timerEvent(event);
}

bool QInputDialog_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QInputDialog_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_childEvent(event);
}

bool QInputDialog_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QInputDialog_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_customEvent(event);
}

bool QInputDialog_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QInputDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_connectNotify(signal);
}

bool QInputDialog_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QInputDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_disconnectNotify(signal);
}

void QInputDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->adjustPosition(param1);

}

void QInputDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QInputDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QInputDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QInputDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QInputDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QInputDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QInputDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QInputDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QInputDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QInputDialog_delete(QInputDialog* self) {
	delete self;
}

