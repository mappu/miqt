#include <QAbstractButton>
#include <QActionEvent>
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
#include <QMenu>
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
#include <QPushButton>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionButton>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qpushbutton.h>
#include "gen_qpushbutton.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QPushButton_sizeHint(const QPushButton*, intptr_t);
QSize* miqt_exec_callback_QPushButton_minimumSizeHint(const QPushButton*, intptr_t);
bool miqt_exec_callback_QPushButton_event(QPushButton*, intptr_t, QEvent*);
void miqt_exec_callback_QPushButton_paintEvent(QPushButton*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QPushButton_keyPressEvent(QPushButton*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPushButton_focusInEvent(QPushButton*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPushButton_focusOutEvent(QPushButton*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPushButton_mouseMoveEvent(QPushButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPushButton_initStyleOption(const QPushButton*, intptr_t, QStyleOptionButton*);
bool miqt_exec_callback_QPushButton_hitButton(const QPushButton*, intptr_t, QPoint*);
void miqt_exec_callback_QPushButton_checkStateSet(QPushButton*, intptr_t);
void miqt_exec_callback_QPushButton_nextCheckState(QPushButton*, intptr_t);
void miqt_exec_callback_QPushButton_keyReleaseEvent(QPushButton*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPushButton_mousePressEvent(QPushButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPushButton_mouseReleaseEvent(QPushButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPushButton_changeEvent(QPushButton*, intptr_t, QEvent*);
void miqt_exec_callback_QPushButton_timerEvent(QPushButton*, intptr_t, QTimerEvent*);
int miqt_exec_callback_QPushButton_devType(const QPushButton*, intptr_t);
void miqt_exec_callback_QPushButton_setVisible(QPushButton*, intptr_t, bool);
int miqt_exec_callback_QPushButton_heightForWidth(const QPushButton*, intptr_t, int);
bool miqt_exec_callback_QPushButton_hasHeightForWidth(const QPushButton*, intptr_t);
QPaintEngine* miqt_exec_callback_QPushButton_paintEngine(const QPushButton*, intptr_t);
void miqt_exec_callback_QPushButton_mouseDoubleClickEvent(QPushButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPushButton_wheelEvent(QPushButton*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QPushButton_enterEvent(QPushButton*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QPushButton_leaveEvent(QPushButton*, intptr_t, QEvent*);
void miqt_exec_callback_QPushButton_moveEvent(QPushButton*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QPushButton_resizeEvent(QPushButton*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QPushButton_closeEvent(QPushButton*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QPushButton_contextMenuEvent(QPushButton*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QPushButton_tabletEvent(QPushButton*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QPushButton_actionEvent(QPushButton*, intptr_t, QActionEvent*);
void miqt_exec_callback_QPushButton_dragEnterEvent(QPushButton*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QPushButton_dragMoveEvent(QPushButton*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QPushButton_dragLeaveEvent(QPushButton*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QPushButton_dropEvent(QPushButton*, intptr_t, QDropEvent*);
void miqt_exec_callback_QPushButton_showEvent(QPushButton*, intptr_t, QShowEvent*);
void miqt_exec_callback_QPushButton_hideEvent(QPushButton*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QPushButton_nativeEvent(QPushButton*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QPushButton_metric(const QPushButton*, intptr_t, int);
void miqt_exec_callback_QPushButton_initPainter(const QPushButton*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPushButton_redirected(const QPushButton*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPushButton_sharedPainter(const QPushButton*, intptr_t);
void miqt_exec_callback_QPushButton_inputMethodEvent(QPushButton*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QPushButton_inputMethodQuery(const QPushButton*, intptr_t, int);
bool miqt_exec_callback_QPushButton_focusNextPrevChild(QPushButton*, intptr_t, bool);
bool miqt_exec_callback_QPushButton_eventFilter(QPushButton*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPushButton_childEvent(QPushButton*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPushButton_customEvent(QPushButton*, intptr_t, QEvent*);
void miqt_exec_callback_QPushButton_connectNotify(QPushButton*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPushButton_disconnectNotify(QPushButton*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPushButton final : public QPushButton {
public:

	MiqtVirtualQPushButton(QWidget* parent): QPushButton(parent) {};
	MiqtVirtualQPushButton(): QPushButton() {};
	MiqtVirtualQPushButton(const QString& text): QPushButton(text) {};
	MiqtVirtualQPushButton(const QIcon& icon, const QString& text): QPushButton(icon, text) {};
	MiqtVirtualQPushButton(const QString& text, QWidget* parent): QPushButton(text, parent) {};
	MiqtVirtualQPushButton(const QIcon& icon, const QString& text, QWidget* parent): QPushButton(icon, text, parent) {};

	virtual ~MiqtVirtualQPushButton() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QPushButton::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPushButton_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QPushButton::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QPushButton::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPushButton_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QPushButton::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QPushButton::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QPushButton_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QPushButton::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QPushButton::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QPushButton_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* param1) {

		QPushButton::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QPushButton::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QPushButton_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QPushButton::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (handle__focusInEvent == 0) {
			QPushButton::focusInEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QPushButton_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* param1) {

		QPushButton::focusInEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (handle__focusOutEvent == 0) {
			QPushButton::focusOutEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QPushButton_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* param1) {

		QPushButton::focusOutEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__mouseMoveEvent == 0) {
			QPushButton::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QPushButton_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* param1) {

		QPushButton::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionButton* option) const override {
		if (handle__initStyleOption == 0) {
			QPushButton::initStyleOption(option);
			return;
		}
		
		QStyleOptionButton* sigval1 = option;

		miqt_exec_callback_QPushButton_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initStyleOption(QStyleOptionButton* option) const {

		QPushButton::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hitButton = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hitButton(const QPoint& pos) const override {
		if (handle__hitButton == 0) {
			return QPushButton::hitButton(pos);
		}
		
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);

		bool callback_return_value = miqt_exec_callback_QPushButton_hitButton(this, handle__hitButton, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hitButton(QPoint* pos) const {

		return QPushButton::hitButton(*pos);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__checkStateSet = 0;

	// Subclass to allow providing a Go implementation
	virtual void checkStateSet() override {
		if (handle__checkStateSet == 0) {
			QPushButton::checkStateSet();
			return;
		}
		

		miqt_exec_callback_QPushButton_checkStateSet(this, handle__checkStateSet);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_checkStateSet() {

		QPushButton::checkStateSet();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nextCheckState = 0;

	// Subclass to allow providing a Go implementation
	virtual void nextCheckState() override {
		if (handle__nextCheckState == 0) {
			QPushButton::nextCheckState();
			return;
		}
		

		miqt_exec_callback_QPushButton_nextCheckState(this, handle__nextCheckState);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_nextCheckState() {

		QPushButton::nextCheckState();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__keyReleaseEvent == 0) {
			QPushButton::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QPushButton_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* e) {

		QPushButton::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__mousePressEvent == 0) {
			QPushButton::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QPushButton_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* e) {

		QPushButton::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__mouseReleaseEvent == 0) {
			QPushButton::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QPushButton_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* e) {

		QPushButton::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__changeEvent == 0) {
			QPushButton::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QPushButton_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* e) {

		QPushButton::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__timerEvent == 0) {
			QPushButton::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QPushButton_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* e) {

		QPushButton::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QPushButton::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPushButton_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QPushButton::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QPushButton::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QPushButton_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QPushButton::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QPushButton::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QPushButton_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QPushButton::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QPushButton::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QPushButton_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QPushButton::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QPushButton::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPushButton_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QPushButton::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QPushButton::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QPushButton::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QPushButton::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QPushButton::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QPushButton::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QPushButton::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QPushButton::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QPushButton::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QPushButton::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QPushButton::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QPushButton::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QPushButton::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QPushButton::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QPushButton::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QPushButton::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QPushButton::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QPushButton::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QPushButton::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QPushButton::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QPushButton::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QPushButton::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QPushButton::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QPushButton::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QPushButton::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QPushButton::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QPushButton::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QPushButton::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QPushButton::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QPushButton::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QPushButton::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QPushButton::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QPushButton::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QPushButton::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QPushButton_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QPushButton::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QPushButton::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QPushButton_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QPushButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QPushButton::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPushButton_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QPushButton::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QPushButton::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPushButton_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QPushButton::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QPushButton::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPushButton_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QPushButton::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QPushButton::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QPushButton_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QPushButton::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QPushButton::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QPushButton_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QPushButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QPushButton::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QPushButton_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QPushButton::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QPushButton::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPushButton_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QPushButton::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPushButton::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QPushButton::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPushButton::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QPushButton::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPushButton::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPushButton_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QPushButton::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPushButton::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPushButton_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QPushButton::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QPushButton_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QPushButton_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QPushButton_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QPushButton_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QPushButton_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QPushButton_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPushButton_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPushButton_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPushButton_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPushButton* QPushButton_new(QWidget* parent) {
	return new MiqtVirtualQPushButton(parent);
}

QPushButton* QPushButton_new2() {
	return new MiqtVirtualQPushButton();
}

QPushButton* QPushButton_new3(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQPushButton(text_QString);
}

QPushButton* QPushButton_new4(QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQPushButton(*icon, text_QString);
}

QPushButton* QPushButton_new5(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQPushButton(text_QString, parent);
}

QPushButton* QPushButton_new6(QIcon* icon, struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQPushButton(*icon, text_QString, parent);
}

void QPushButton_virtbase(QPushButton* src, QAbstractButton** outptr_QAbstractButton) {
	*outptr_QAbstractButton = static_cast<QAbstractButton*>(src);
}

QMetaObject* QPushButton_metaObject(const QPushButton* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPushButton_metacast(QPushButton* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPushButton_tr(const char* s) {
	QString _ret = QPushButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QPushButton_sizeHint(const QPushButton* self) {
	return new QSize(self->sizeHint());
}

QSize* QPushButton_minimumSizeHint(const QPushButton* self) {
	return new QSize(self->minimumSizeHint());
}

bool QPushButton_autoDefault(const QPushButton* self) {
	return self->autoDefault();
}

void QPushButton_setAutoDefault(QPushButton* self, bool autoDefault) {
	self->setAutoDefault(autoDefault);
}

bool QPushButton_isDefault(const QPushButton* self) {
	return self->isDefault();
}

void QPushButton_setDefault(QPushButton* self, bool defaultVal) {
	self->setDefault(defaultVal);
}

void QPushButton_setMenu(QPushButton* self, QMenu* menu) {
	self->setMenu(menu);
}

QMenu* QPushButton_menu(const QPushButton* self) {
	return self->menu();
}

void QPushButton_setFlat(QPushButton* self, bool flat) {
	self->setFlat(flat);
}

bool QPushButton_isFlat(const QPushButton* self) {
	return self->isFlat();
}

void QPushButton_showMenu(QPushButton* self) {
	self->showMenu();
}

struct miqt_string QPushButton_tr2(const char* s, const char* c) {
	QString _ret = QPushButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPushButton_tr3(const char* s, const char* c, int n) {
	QString _ret = QPushButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPushButton_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QPushButton_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_sizeHint();
}

bool QPushButton_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QPushButton_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_minimumSizeHint();
}

bool QPushButton_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPushButton_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQPushButton*)(self) )->virtualbase_event(e);
}

bool QPushButton_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QPushButton_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_paintEvent(param1);
}

bool QPushButton_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QPushButton_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QPushButton_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QPushButton_virtualbase_focusInEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_focusInEvent(param1);
}

bool QPushButton_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QPushButton_virtualbase_focusOutEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_focusOutEvent(param1);
}

bool QPushButton_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QPushButton_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_mouseMoveEvent(param1);
}

bool QPushButton_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QPushButton_virtualbase_initStyleOption(const void* self, QStyleOptionButton* option) {
	( (const MiqtVirtualQPushButton*)(self) )->virtualbase_initStyleOption(option);
}

bool QPushButton_override_virtual_hitButton(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hitButton = slot;
	return true;
}

bool QPushButton_virtualbase_hitButton(const void* self, QPoint* pos) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_hitButton(pos);
}

bool QPushButton_override_virtual_checkStateSet(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__checkStateSet = slot;
	return true;
}

void QPushButton_virtualbase_checkStateSet(void* self) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_checkStateSet();
}

bool QPushButton_override_virtual_nextCheckState(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nextCheckState = slot;
	return true;
}

void QPushButton_virtualbase_nextCheckState(void* self) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_nextCheckState();
}

bool QPushButton_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QPushButton_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_keyReleaseEvent(e);
}

bool QPushButton_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QPushButton_virtualbase_mousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_mousePressEvent(e);
}

bool QPushButton_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QPushButton_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_mouseReleaseEvent(e);
}

bool QPushButton_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QPushButton_virtualbase_changeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_changeEvent(e);
}

bool QPushButton_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPushButton_virtualbase_timerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_timerEvent(e);
}

bool QPushButton_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QPushButton_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_devType();
}

bool QPushButton_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QPushButton_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_setVisible(visible);
}

bool QPushButton_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QPushButton_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_heightForWidth(param1);
}

bool QPushButton_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QPushButton_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_hasHeightForWidth();
}

bool QPushButton_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QPushButton_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_paintEngine();
}

bool QPushButton_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QPushButton_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QPushButton_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QPushButton_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_wheelEvent(event);
}

bool QPushButton_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QPushButton_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_enterEvent(event);
}

bool QPushButton_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QPushButton_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_leaveEvent(event);
}

bool QPushButton_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QPushButton_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_moveEvent(event);
}

bool QPushButton_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QPushButton_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_resizeEvent(event);
}

bool QPushButton_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QPushButton_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_closeEvent(event);
}

bool QPushButton_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QPushButton_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QPushButton_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QPushButton_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_tabletEvent(event);
}

bool QPushButton_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QPushButton_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_actionEvent(event);
}

bool QPushButton_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QPushButton_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QPushButton_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QPushButton_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QPushButton_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QPushButton_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QPushButton_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QPushButton_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_dropEvent(event);
}

bool QPushButton_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QPushButton_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_showEvent(event);
}

bool QPushButton_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QPushButton_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_hideEvent(event);
}

bool QPushButton_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QPushButton_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQPushButton*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QPushButton_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QPushButton_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_metric(param1);
}

bool QPushButton_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QPushButton_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPushButton*)(self) )->virtualbase_initPainter(painter);
}

bool QPushButton_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QPushButton_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_redirected(offset);
}

bool QPushButton_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QPushButton_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_sharedPainter();
}

bool QPushButton_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QPushButton_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QPushButton_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QPushButton_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QPushButton_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QPushButton_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQPushButton*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QPushButton_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPushButton_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQPushButton*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QPushButton_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPushButton_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_childEvent(event);
}

bool QPushButton_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPushButton_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_customEvent(event);
}

bool QPushButton_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPushButton_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_connectNotify(signal);
}

bool QPushButton_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPushButton_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_disconnectNotify(signal);
}

void QPushButton_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QPushButton_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QPushButton_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QPushButton_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QPushButton_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QPushButton_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPushButton_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPushButton_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPushButton_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPushButton_delete(QPushButton* self) {
	delete self;
}

