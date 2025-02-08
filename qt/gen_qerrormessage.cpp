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
#include <QErrorMessage>
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
#include <qerrormessage.h>
#include "gen_qerrormessage.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QErrorMessage_done(QErrorMessage*, intptr_t, int);
void miqt_exec_callback_QErrorMessage_changeEvent(QErrorMessage*, intptr_t, QEvent*);
void miqt_exec_callback_QErrorMessage_setVisible(QErrorMessage*, intptr_t, bool);
QSize* miqt_exec_callback_QErrorMessage_sizeHint(const QErrorMessage*, intptr_t);
QSize* miqt_exec_callback_QErrorMessage_minimumSizeHint(const QErrorMessage*, intptr_t);
void miqt_exec_callback_QErrorMessage_open(QErrorMessage*, intptr_t);
int miqt_exec_callback_QErrorMessage_exec(QErrorMessage*, intptr_t);
void miqt_exec_callback_QErrorMessage_accept(QErrorMessage*, intptr_t);
void miqt_exec_callback_QErrorMessage_reject(QErrorMessage*, intptr_t);
void miqt_exec_callback_QErrorMessage_keyPressEvent(QErrorMessage*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QErrorMessage_closeEvent(QErrorMessage*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QErrorMessage_showEvent(QErrorMessage*, intptr_t, QShowEvent*);
void miqt_exec_callback_QErrorMessage_resizeEvent(QErrorMessage*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QErrorMessage_contextMenuEvent(QErrorMessage*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QErrorMessage_eventFilter(QErrorMessage*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QErrorMessage_devType(const QErrorMessage*, intptr_t);
int miqt_exec_callback_QErrorMessage_heightForWidth(const QErrorMessage*, intptr_t, int);
bool miqt_exec_callback_QErrorMessage_hasHeightForWidth(const QErrorMessage*, intptr_t);
QPaintEngine* miqt_exec_callback_QErrorMessage_paintEngine(const QErrorMessage*, intptr_t);
bool miqt_exec_callback_QErrorMessage_event(QErrorMessage*, intptr_t, QEvent*);
void miqt_exec_callback_QErrorMessage_mousePressEvent(QErrorMessage*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QErrorMessage_mouseReleaseEvent(QErrorMessage*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QErrorMessage_mouseDoubleClickEvent(QErrorMessage*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QErrorMessage_mouseMoveEvent(QErrorMessage*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QErrorMessage_wheelEvent(QErrorMessage*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QErrorMessage_keyReleaseEvent(QErrorMessage*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QErrorMessage_focusInEvent(QErrorMessage*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QErrorMessage_focusOutEvent(QErrorMessage*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QErrorMessage_enterEvent(QErrorMessage*, intptr_t, QEvent*);
void miqt_exec_callback_QErrorMessage_leaveEvent(QErrorMessage*, intptr_t, QEvent*);
void miqt_exec_callback_QErrorMessage_paintEvent(QErrorMessage*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QErrorMessage_moveEvent(QErrorMessage*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QErrorMessage_tabletEvent(QErrorMessage*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QErrorMessage_actionEvent(QErrorMessage*, intptr_t, QActionEvent*);
void miqt_exec_callback_QErrorMessage_dragEnterEvent(QErrorMessage*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QErrorMessage_dragMoveEvent(QErrorMessage*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QErrorMessage_dragLeaveEvent(QErrorMessage*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QErrorMessage_dropEvent(QErrorMessage*, intptr_t, QDropEvent*);
void miqt_exec_callback_QErrorMessage_hideEvent(QErrorMessage*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QErrorMessage_nativeEvent(QErrorMessage*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QErrorMessage_metric(const QErrorMessage*, intptr_t, int);
void miqt_exec_callback_QErrorMessage_initPainter(const QErrorMessage*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QErrorMessage_redirected(const QErrorMessage*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QErrorMessage_sharedPainter(const QErrorMessage*, intptr_t);
void miqt_exec_callback_QErrorMessage_inputMethodEvent(QErrorMessage*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QErrorMessage_inputMethodQuery(const QErrorMessage*, intptr_t, int);
bool miqt_exec_callback_QErrorMessage_focusNextPrevChild(QErrorMessage*, intptr_t, bool);
void miqt_exec_callback_QErrorMessage_timerEvent(QErrorMessage*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QErrorMessage_childEvent(QErrorMessage*, intptr_t, QChildEvent*);
void miqt_exec_callback_QErrorMessage_customEvent(QErrorMessage*, intptr_t, QEvent*);
void miqt_exec_callback_QErrorMessage_connectNotify(QErrorMessage*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QErrorMessage_disconnectNotify(QErrorMessage*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQErrorMessage final : public QErrorMessage {
public:

	MiqtVirtualQErrorMessage(QWidget* parent): QErrorMessage(parent) {};
	MiqtVirtualQErrorMessage(): QErrorMessage() {};

	virtual ~MiqtVirtualQErrorMessage() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int param1) override {
		if (handle__done == 0) {
			QErrorMessage::done(param1);
			return;
		}
		
		int sigval1 = param1;

		miqt_exec_callback_QErrorMessage_done(this, handle__done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_done(int param1) {

		QErrorMessage::done(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__changeEvent == 0) {
			QErrorMessage::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QErrorMessage_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* e) {

		QErrorMessage::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QErrorMessage::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QErrorMessage_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QErrorMessage::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QErrorMessage::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QErrorMessage_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QErrorMessage::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QErrorMessage::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QErrorMessage_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QErrorMessage::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__open == 0) {
			QErrorMessage::open();
			return;
		}
		

		miqt_exec_callback_QErrorMessage_open(this, handle__open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_open() {

		QErrorMessage::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__exec == 0) {
			return QErrorMessage::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QErrorMessage_exec(this, handle__exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_exec() {

		return QErrorMessage::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__accept == 0) {
			QErrorMessage::accept();
			return;
		}
		

		miqt_exec_callback_QErrorMessage_accept(this, handle__accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_accept() {

		QErrorMessage::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__reject == 0) {
			QErrorMessage::reject();
			return;
		}
		

		miqt_exec_callback_QErrorMessage_reject(this, handle__reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reject() {

		QErrorMessage::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QErrorMessage::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QErrorMessage_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QErrorMessage::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__closeEvent == 0) {
			QErrorMessage::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QErrorMessage_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* param1) {

		QErrorMessage::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QErrorMessage::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QErrorMessage_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* param1) {

		QErrorMessage::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QErrorMessage::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QErrorMessage_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* param1) {

		QErrorMessage::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QErrorMessage::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QErrorMessage_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QErrorMessage::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QErrorMessage::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QErrorMessage_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* param1, QEvent* param2) {

		return QErrorMessage::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QErrorMessage::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QErrorMessage_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QErrorMessage::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QErrorMessage::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QErrorMessage_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QErrorMessage::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QErrorMessage::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QErrorMessage_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QErrorMessage::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QErrorMessage::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QErrorMessage_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QErrorMessage::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QErrorMessage::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QErrorMessage_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QErrorMessage::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QErrorMessage::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QErrorMessage::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QErrorMessage::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QErrorMessage::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QErrorMessage::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QErrorMessage::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QErrorMessage::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QErrorMessage::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QErrorMessage::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QErrorMessage::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QErrorMessage::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QErrorMessage::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QErrorMessage::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QErrorMessage::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QErrorMessage::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QErrorMessage::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QErrorMessage::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QErrorMessage::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QErrorMessage::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QErrorMessage::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QErrorMessage::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QErrorMessage::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QErrorMessage::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QErrorMessage::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QErrorMessage::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QErrorMessage::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QErrorMessage::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QErrorMessage::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QErrorMessage::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QErrorMessage::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QErrorMessage::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QErrorMessage::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QErrorMessage::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QErrorMessage::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QErrorMessage::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QErrorMessage::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QErrorMessage::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QErrorMessage::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QErrorMessage::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QErrorMessage_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QErrorMessage::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QErrorMessage::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QErrorMessage_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QErrorMessage::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QErrorMessage::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QErrorMessage_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QErrorMessage::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QErrorMessage::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QErrorMessage_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QErrorMessage::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QErrorMessage::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QErrorMessage_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QErrorMessage::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QErrorMessage::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QErrorMessage_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QErrorMessage::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QErrorMessage::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QErrorMessage_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QErrorMessage::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QErrorMessage::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QErrorMessage_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QErrorMessage::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QErrorMessage::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QErrorMessage::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QErrorMessage::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QErrorMessage::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QErrorMessage::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QErrorMessage::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QErrorMessage::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QErrorMessage_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QErrorMessage::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QErrorMessage::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QErrorMessage_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QErrorMessage::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QErrorMessage_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
	friend void QErrorMessage_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QErrorMessage_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QErrorMessage_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QErrorMessage_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QErrorMessage_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QErrorMessage_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QErrorMessage_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QErrorMessage_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QErrorMessage_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QErrorMessage* QErrorMessage_new(QWidget* parent) {
	return new MiqtVirtualQErrorMessage(parent);
}

QErrorMessage* QErrorMessage_new2() {
	return new MiqtVirtualQErrorMessage();
}

void QErrorMessage_virtbase(QErrorMessage* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QErrorMessage_metaObject(const QErrorMessage* self) {
	return (QMetaObject*) self->metaObject();
}

void* QErrorMessage_metacast(QErrorMessage* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QErrorMessage_tr(const char* s) {
	QString _ret = QErrorMessage::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QErrorMessage_trUtf8(const char* s) {
	QString _ret = QErrorMessage::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QErrorMessage* QErrorMessage_qtHandler() {
	return QErrorMessage::qtHandler();
}

void QErrorMessage_showMessage(QErrorMessage* self, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->showMessage(message_QString);
}

void QErrorMessage_showMessage2(QErrorMessage* self, struct miqt_string message, struct miqt_string type) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	QString type_QString = QString::fromUtf8(type.data, type.len);
	self->showMessage(message_QString, type_QString);
}

struct miqt_string QErrorMessage_tr2(const char* s, const char* c) {
	QString _ret = QErrorMessage::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QErrorMessage_tr3(const char* s, const char* c, int n) {
	QString _ret = QErrorMessage::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QErrorMessage_trUtf82(const char* s, const char* c) {
	QString _ret = QErrorMessage::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QErrorMessage_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QErrorMessage::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QErrorMessage_override_virtual_done(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__done = slot;
	return true;
}

void QErrorMessage_virtualbase_done(void* self, int param1) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_done(param1);
}

bool QErrorMessage_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_changeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_changeEvent(e);
}

bool QErrorMessage_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QErrorMessage_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_setVisible(visible);
}

bool QErrorMessage_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QErrorMessage_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_sizeHint();
}

bool QErrorMessage_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QErrorMessage_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_minimumSizeHint();
}

bool QErrorMessage_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__open = slot;
	return true;
}

void QErrorMessage_virtualbase_open(void* self) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_open();
}

bool QErrorMessage_override_virtual_exec(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__exec = slot;
	return true;
}

int QErrorMessage_virtualbase_exec(void* self) {
	return ( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_exec();
}

bool QErrorMessage_override_virtual_accept(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__accept = slot;
	return true;
}

void QErrorMessage_virtualbase_accept(void* self) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_accept();
}

bool QErrorMessage_override_virtual_reject(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reject = slot;
	return true;
}

void QErrorMessage_virtualbase_reject(void* self) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_reject();
}

bool QErrorMessage_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QErrorMessage_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_closeEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_closeEvent(param1);
}

bool QErrorMessage_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_showEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_showEvent(param1);
}

bool QErrorMessage_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_resizeEvent(param1);
}

bool QErrorMessage_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QErrorMessage_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QErrorMessage_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_eventFilter(param1, param2);
}

bool QErrorMessage_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QErrorMessage_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_devType();
}

bool QErrorMessage_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QErrorMessage_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_heightForWidth(param1);
}

bool QErrorMessage_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QErrorMessage_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_hasHeightForWidth();
}

bool QErrorMessage_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QErrorMessage_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_paintEngine();
}

bool QErrorMessage_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QErrorMessage_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_event(event);
}

bool QErrorMessage_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_mousePressEvent(event);
}

bool QErrorMessage_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QErrorMessage_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QErrorMessage_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QErrorMessage_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_wheelEvent(event);
}

bool QErrorMessage_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QErrorMessage_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_focusInEvent(event);
}

bool QErrorMessage_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_focusOutEvent(event);
}

bool QErrorMessage_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_enterEvent(event);
}

bool QErrorMessage_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_leaveEvent(event);
}

bool QErrorMessage_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_paintEvent(event);
}

bool QErrorMessage_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_moveEvent(event);
}

bool QErrorMessage_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_tabletEvent(event);
}

bool QErrorMessage_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_actionEvent(event);
}

bool QErrorMessage_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QErrorMessage_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QErrorMessage_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QErrorMessage_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_dropEvent(event);
}

bool QErrorMessage_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_hideEvent(event);
}

bool QErrorMessage_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QErrorMessage_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QErrorMessage_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QErrorMessage_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_metric(param1);
}

bool QErrorMessage_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QErrorMessage_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_initPainter(painter);
}

bool QErrorMessage_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QErrorMessage_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_redirected(offset);
}

bool QErrorMessage_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QErrorMessage_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_sharedPainter();
}

bool QErrorMessage_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QErrorMessage_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QErrorMessage_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QErrorMessage_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QErrorMessage_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QErrorMessage_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_timerEvent(event);
}

bool QErrorMessage_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_childEvent(event);
}

bool QErrorMessage_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_customEvent(event);
}

bool QErrorMessage_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QErrorMessage_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_connectNotify(signal);
}

bool QErrorMessage_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QErrorMessage_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_disconnectNotify(signal);
}

void QErrorMessage_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->adjustPosition(param1);

}

void QErrorMessage_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QErrorMessage_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QErrorMessage_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QErrorMessage_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QErrorMessage_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QErrorMessage_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QErrorMessage_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QErrorMessage_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QErrorMessage_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QErrorMessage_delete(QErrorMessage* self) {
	delete self;
}

