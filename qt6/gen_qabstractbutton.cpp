#include <QAbstractButton>
#include <QActionEvent>
#include <QButtonGroup>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
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
#include <qabstractbutton.h>
#include "gen_qabstractbutton.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractButton_pressed(intptr_t);
void miqt_exec_callback_QAbstractButton_released(intptr_t);
void miqt_exec_callback_QAbstractButton_clicked(intptr_t);
void miqt_exec_callback_QAbstractButton_toggled(intptr_t, bool);
void miqt_exec_callback_QAbstractButton_clicked1(intptr_t, bool);
void miqt_exec_callback_QAbstractButton_paintEvent(QAbstractButton*, intptr_t, QPaintEvent*);
bool miqt_exec_callback_QAbstractButton_hitButton(const QAbstractButton*, intptr_t, QPoint*);
void miqt_exec_callback_QAbstractButton_checkStateSet(QAbstractButton*, intptr_t);
void miqt_exec_callback_QAbstractButton_nextCheckState(QAbstractButton*, intptr_t);
bool miqt_exec_callback_QAbstractButton_event(QAbstractButton*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractButton_keyPressEvent(QAbstractButton*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractButton_keyReleaseEvent(QAbstractButton*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractButton_mousePressEvent(QAbstractButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractButton_mouseReleaseEvent(QAbstractButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractButton_mouseMoveEvent(QAbstractButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractButton_focusInEvent(QAbstractButton*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractButton_focusOutEvent(QAbstractButton*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractButton_changeEvent(QAbstractButton*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractButton_timerEvent(QAbstractButton*, intptr_t, QTimerEvent*);
int miqt_exec_callback_QAbstractButton_devType(const QAbstractButton*, intptr_t);
void miqt_exec_callback_QAbstractButton_setVisible(QAbstractButton*, intptr_t, bool);
QSize* miqt_exec_callback_QAbstractButton_sizeHint(const QAbstractButton*, intptr_t);
QSize* miqt_exec_callback_QAbstractButton_minimumSizeHint(const QAbstractButton*, intptr_t);
int miqt_exec_callback_QAbstractButton_heightForWidth(const QAbstractButton*, intptr_t, int);
bool miqt_exec_callback_QAbstractButton_hasHeightForWidth(const QAbstractButton*, intptr_t);
QPaintEngine* miqt_exec_callback_QAbstractButton_paintEngine(const QAbstractButton*, intptr_t);
void miqt_exec_callback_QAbstractButton_mouseDoubleClickEvent(QAbstractButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractButton_wheelEvent(QAbstractButton*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QAbstractButton_enterEvent(QAbstractButton*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QAbstractButton_leaveEvent(QAbstractButton*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractButton_moveEvent(QAbstractButton*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QAbstractButton_resizeEvent(QAbstractButton*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QAbstractButton_closeEvent(QAbstractButton*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QAbstractButton_contextMenuEvent(QAbstractButton*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QAbstractButton_tabletEvent(QAbstractButton*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QAbstractButton_actionEvent(QAbstractButton*, intptr_t, QActionEvent*);
void miqt_exec_callback_QAbstractButton_dragEnterEvent(QAbstractButton*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QAbstractButton_dragMoveEvent(QAbstractButton*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QAbstractButton_dragLeaveEvent(QAbstractButton*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QAbstractButton_dropEvent(QAbstractButton*, intptr_t, QDropEvent*);
void miqt_exec_callback_QAbstractButton_showEvent(QAbstractButton*, intptr_t, QShowEvent*);
void miqt_exec_callback_QAbstractButton_hideEvent(QAbstractButton*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QAbstractButton_nativeEvent(QAbstractButton*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QAbstractButton_metric(const QAbstractButton*, intptr_t, int);
void miqt_exec_callback_QAbstractButton_initPainter(const QAbstractButton*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QAbstractButton_redirected(const QAbstractButton*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QAbstractButton_sharedPainter(const QAbstractButton*, intptr_t);
void miqt_exec_callback_QAbstractButton_inputMethodEvent(QAbstractButton*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QAbstractButton_inputMethodQuery(const QAbstractButton*, intptr_t, int);
bool miqt_exec_callback_QAbstractButton_focusNextPrevChild(QAbstractButton*, intptr_t, bool);
bool miqt_exec_callback_QAbstractButton_eventFilter(QAbstractButton*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractButton_childEvent(QAbstractButton*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractButton_customEvent(QAbstractButton*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractButton_connectNotify(QAbstractButton*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractButton_disconnectNotify(QAbstractButton*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractButton final : public QAbstractButton {
public:

	MiqtVirtualQAbstractButton(QWidget* parent): QAbstractButton(parent) {};
	MiqtVirtualQAbstractButton(): QAbstractButton() {};

	virtual ~MiqtVirtualQAbstractButton() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__paintEvent == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QAbstractButton_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hitButton = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hitButton(const QPoint& pos) const override {
		if (handle__hitButton == 0) {
			return QAbstractButton::hitButton(pos);
		}
		
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractButton_hitButton(this, handle__hitButton, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hitButton(QPoint* pos) const {

		return QAbstractButton::hitButton(*pos);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__checkStateSet = 0;

	// Subclass to allow providing a Go implementation
	virtual void checkStateSet() override {
		if (handle__checkStateSet == 0) {
			QAbstractButton::checkStateSet();
			return;
		}
		

		miqt_exec_callback_QAbstractButton_checkStateSet(this, handle__checkStateSet);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_checkStateSet() {

		QAbstractButton::checkStateSet();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nextCheckState = 0;

	// Subclass to allow providing a Go implementation
	virtual void nextCheckState() override {
		if (handle__nextCheckState == 0) {
			QAbstractButton::nextCheckState();
			return;
		}
		

		miqt_exec_callback_QAbstractButton_nextCheckState(this, handle__nextCheckState);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_nextCheckState() {

		QAbstractButton::nextCheckState();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QAbstractButton::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QAbstractButton_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QAbstractButton::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__keyPressEvent == 0) {
			QAbstractButton::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QAbstractButton_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* e) {

		QAbstractButton::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__keyReleaseEvent == 0) {
			QAbstractButton::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QAbstractButton_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* e) {

		QAbstractButton::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__mousePressEvent == 0) {
			QAbstractButton::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QAbstractButton_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* e) {

		QAbstractButton::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__mouseReleaseEvent == 0) {
			QAbstractButton::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QAbstractButton_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* e) {

		QAbstractButton::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__mouseMoveEvent == 0) {
			QAbstractButton::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QAbstractButton_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* e) {

		QAbstractButton::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__focusInEvent == 0) {
			QAbstractButton::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QAbstractButton_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* e) {

		QAbstractButton::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__focusOutEvent == 0) {
			QAbstractButton::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QAbstractButton_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* e) {

		QAbstractButton::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__changeEvent == 0) {
			QAbstractButton::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QAbstractButton_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* e) {

		QAbstractButton::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__timerEvent == 0) {
			QAbstractButton::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QAbstractButton_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* e) {

		QAbstractButton::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QAbstractButton::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractButton_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QAbstractButton::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QAbstractButton::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QAbstractButton_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QAbstractButton::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QAbstractButton::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractButton_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QAbstractButton::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QAbstractButton::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractButton_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QAbstractButton::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QAbstractButton::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QAbstractButton_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QAbstractButton::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QAbstractButton::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractButton_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QAbstractButton::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QAbstractButton::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QAbstractButton_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QAbstractButton::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QAbstractButton::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QAbstractButton::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QAbstractButton::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QAbstractButton::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QAbstractButton::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QAbstractButton::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QAbstractButton::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QAbstractButton::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QAbstractButton::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QAbstractButton::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QAbstractButton::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QAbstractButton::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QAbstractButton::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QAbstractButton::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QAbstractButton::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QAbstractButton::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QAbstractButton::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QAbstractButton::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QAbstractButton::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QAbstractButton::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QAbstractButton::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QAbstractButton::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QAbstractButton::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QAbstractButton::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QAbstractButton::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QAbstractButton::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QAbstractButton::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QAbstractButton::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QAbstractButton::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QAbstractButton::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QAbstractButton::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QAbstractButton::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QAbstractButton::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QAbstractButton_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QAbstractButton::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QAbstractButton::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QAbstractButton_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QAbstractButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QAbstractButton::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QAbstractButton_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QAbstractButton::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QAbstractButton::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QAbstractButton_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QAbstractButton::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QAbstractButton::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QAbstractButton_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QAbstractButton::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QAbstractButton::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractButton_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QAbstractButton::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QAbstractButton::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QAbstractButton_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QAbstractButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QAbstractButton::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QAbstractButton_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QAbstractButton::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAbstractButton::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractButton_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAbstractButton::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAbstractButton::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAbstractButton::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAbstractButton::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAbstractButton::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAbstractButton::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractButton_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAbstractButton::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAbstractButton::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractButton_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAbstractButton::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QAbstractButton_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractButton_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractButton_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractButton_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractButton_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QAbstractButton_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractButton_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractButton_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractButton_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAbstractButton* QAbstractButton_new(QWidget* parent) {
	return new MiqtVirtualQAbstractButton(parent);
}

QAbstractButton* QAbstractButton_new2() {
	return new MiqtVirtualQAbstractButton();
}

void QAbstractButton_virtbase(QAbstractButton* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QAbstractButton_metaObject(const QAbstractButton* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractButton_metacast(QAbstractButton* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractButton_tr(const char* s) {
	QString _ret = QAbstractButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractButton_setText(QAbstractButton* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

struct miqt_string QAbstractButton_text(const QAbstractButton* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractButton_setIcon(QAbstractButton* self, QIcon* icon) {
	self->setIcon(*icon);
}

QIcon* QAbstractButton_icon(const QAbstractButton* self) {
	return new QIcon(self->icon());
}

QSize* QAbstractButton_iconSize(const QAbstractButton* self) {
	return new QSize(self->iconSize());
}

void QAbstractButton_setShortcut(QAbstractButton* self, QKeySequence* key) {
	self->setShortcut(*key);
}

QKeySequence* QAbstractButton_shortcut(const QAbstractButton* self) {
	return new QKeySequence(self->shortcut());
}

void QAbstractButton_setCheckable(QAbstractButton* self, bool checkable) {
	self->setCheckable(checkable);
}

bool QAbstractButton_isCheckable(const QAbstractButton* self) {
	return self->isCheckable();
}

bool QAbstractButton_isChecked(const QAbstractButton* self) {
	return self->isChecked();
}

void QAbstractButton_setDown(QAbstractButton* self, bool down) {
	self->setDown(down);
}

bool QAbstractButton_isDown(const QAbstractButton* self) {
	return self->isDown();
}

void QAbstractButton_setAutoRepeat(QAbstractButton* self, bool autoRepeat) {
	self->setAutoRepeat(autoRepeat);
}

bool QAbstractButton_autoRepeat(const QAbstractButton* self) {
	return self->autoRepeat();
}

void QAbstractButton_setAutoRepeatDelay(QAbstractButton* self, int autoRepeatDelay) {
	self->setAutoRepeatDelay(static_cast<int>(autoRepeatDelay));
}

int QAbstractButton_autoRepeatDelay(const QAbstractButton* self) {
	return self->autoRepeatDelay();
}

void QAbstractButton_setAutoRepeatInterval(QAbstractButton* self, int autoRepeatInterval) {
	self->setAutoRepeatInterval(static_cast<int>(autoRepeatInterval));
}

int QAbstractButton_autoRepeatInterval(const QAbstractButton* self) {
	return self->autoRepeatInterval();
}

void QAbstractButton_setAutoExclusive(QAbstractButton* self, bool autoExclusive) {
	self->setAutoExclusive(autoExclusive);
}

bool QAbstractButton_autoExclusive(const QAbstractButton* self) {
	return self->autoExclusive();
}

QButtonGroup* QAbstractButton_group(const QAbstractButton* self) {
	return self->group();
}

void QAbstractButton_setIconSize(QAbstractButton* self, QSize* size) {
	self->setIconSize(*size);
}

void QAbstractButton_animateClick(QAbstractButton* self) {
	self->animateClick();
}

void QAbstractButton_click(QAbstractButton* self) {
	self->click();
}

void QAbstractButton_toggle(QAbstractButton* self) {
	self->toggle();
}

void QAbstractButton_setChecked(QAbstractButton* self, bool checked) {
	self->setChecked(checked);
}

void QAbstractButton_pressed(QAbstractButton* self) {
	self->pressed();
}

void QAbstractButton_connect_pressed(QAbstractButton* self, intptr_t slot) {
	MiqtVirtualQAbstractButton::connect(self, static_cast<void (QAbstractButton::*)()>(&QAbstractButton::pressed), self, [=]() {
		miqt_exec_callback_QAbstractButton_pressed(slot);
	});
}

void QAbstractButton_released(QAbstractButton* self) {
	self->released();
}

void QAbstractButton_connect_released(QAbstractButton* self, intptr_t slot) {
	MiqtVirtualQAbstractButton::connect(self, static_cast<void (QAbstractButton::*)()>(&QAbstractButton::released), self, [=]() {
		miqt_exec_callback_QAbstractButton_released(slot);
	});
}

void QAbstractButton_clicked(QAbstractButton* self) {
	self->clicked();
}

void QAbstractButton_connect_clicked(QAbstractButton* self, intptr_t slot) {
	MiqtVirtualQAbstractButton::connect(self, static_cast<void (QAbstractButton::*)(bool)>(&QAbstractButton::clicked), self, [=]() {
		miqt_exec_callback_QAbstractButton_clicked(slot);
	});
}

void QAbstractButton_toggled(QAbstractButton* self, bool checked) {
	self->toggled(checked);
}

void QAbstractButton_connect_toggled(QAbstractButton* self, intptr_t slot) {
	MiqtVirtualQAbstractButton::connect(self, static_cast<void (QAbstractButton::*)(bool)>(&QAbstractButton::toggled), self, [=](bool checked) {
		bool sigval1 = checked;
		miqt_exec_callback_QAbstractButton_toggled(slot, sigval1);
	});
}

struct miqt_string QAbstractButton_tr2(const char* s, const char* c) {
	QString _ret = QAbstractButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractButton_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractButton_clicked1(QAbstractButton* self, bool checked) {
	self->clicked(checked);
}

void QAbstractButton_connect_clicked1(QAbstractButton* self, intptr_t slot) {
	MiqtVirtualQAbstractButton::connect(self, static_cast<void (QAbstractButton::*)(bool)>(&QAbstractButton::clicked), self, [=](bool checked) {
		bool sigval1 = checked;
		miqt_exec_callback_QAbstractButton_clicked1(slot, sigval1);
	});
}

bool QAbstractButton_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

bool QAbstractButton_override_virtual_hitButton(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hitButton = slot;
	return true;
}

bool QAbstractButton_virtualbase_hitButton(const void* self, QPoint* pos) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_hitButton(pos);
}

bool QAbstractButton_override_virtual_checkStateSet(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__checkStateSet = slot;
	return true;
}

void QAbstractButton_virtualbase_checkStateSet(void* self) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_checkStateSet();
}

bool QAbstractButton_override_virtual_nextCheckState(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nextCheckState = slot;
	return true;
}

void QAbstractButton_virtualbase_nextCheckState(void* self) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_nextCheckState();
}

bool QAbstractButton_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAbstractButton_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_event(e);
}

bool QAbstractButton_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_keyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_keyPressEvent(e);
}

bool QAbstractButton_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_keyReleaseEvent(e);
}

bool QAbstractButton_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_mousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_mousePressEvent(e);
}

bool QAbstractButton_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_mouseReleaseEvent(e);
}

bool QAbstractButton_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_mouseMoveEvent(e);
}

bool QAbstractButton_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_focusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_focusInEvent(e);
}

bool QAbstractButton_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_focusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_focusOutEvent(e);
}

bool QAbstractButton_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_changeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_changeEvent(e);
}

bool QAbstractButton_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_timerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_timerEvent(e);
}

bool QAbstractButton_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QAbstractButton_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_devType();
}

bool QAbstractButton_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QAbstractButton_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_setVisible(visible);
}

bool QAbstractButton_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QAbstractButton_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_sizeHint();
}

bool QAbstractButton_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QAbstractButton_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_minimumSizeHint();
}

bool QAbstractButton_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QAbstractButton_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_heightForWidth(param1);
}

bool QAbstractButton_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QAbstractButton_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_hasHeightForWidth();
}

bool QAbstractButton_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QAbstractButton_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_paintEngine();
}

bool QAbstractButton_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QAbstractButton_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_wheelEvent(event);
}

bool QAbstractButton_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_enterEvent(event);
}

bool QAbstractButton_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_leaveEvent(event);
}

bool QAbstractButton_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_moveEvent(event);
}

bool QAbstractButton_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_resizeEvent(event);
}

bool QAbstractButton_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_closeEvent(event);
}

bool QAbstractButton_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QAbstractButton_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_tabletEvent(event);
}

bool QAbstractButton_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_actionEvent(event);
}

bool QAbstractButton_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QAbstractButton_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QAbstractButton_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QAbstractButton_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_dropEvent(event);
}

bool QAbstractButton_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_showEvent(event);
}

bool QAbstractButton_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_hideEvent(event);
}

bool QAbstractButton_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QAbstractButton_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QAbstractButton_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QAbstractButton_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_metric(param1);
}

bool QAbstractButton_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QAbstractButton_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_initPainter(painter);
}

bool QAbstractButton_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QAbstractButton_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_redirected(offset);
}

bool QAbstractButton_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QAbstractButton_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_sharedPainter();
}

bool QAbstractButton_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QAbstractButton_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QAbstractButton_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QAbstractButton_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QAbstractButton_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QAbstractButton_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAbstractButton_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAbstractButton_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_childEvent(event);
}

bool QAbstractButton_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAbstractButton_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_customEvent(event);
}

bool QAbstractButton_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAbstractButton_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_connectNotify(signal);
}

bool QAbstractButton_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAbstractButton_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_disconnectNotify(signal);
}

void QAbstractButton_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QAbstractButton_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QAbstractButton_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QAbstractButton_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QAbstractButton_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QAbstractButton_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAbstractButton_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAbstractButton_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAbstractButton_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractButton* self_cast = dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAbstractButton_delete(QAbstractButton* self) {
	delete self;
}

