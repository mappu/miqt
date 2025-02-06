#include <QAbstractButton>
#include <QAction>
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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionToolButton>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QToolButton>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtoolbutton.h>
#include "gen_qtoolbutton.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QToolButton_triggered(intptr_t, QAction*);
QSize* miqt_exec_callback_QToolButton_sizeHint(const QToolButton*, intptr_t);
QSize* miqt_exec_callback_QToolButton_minimumSizeHint(const QToolButton*, intptr_t);
bool miqt_exec_callback_QToolButton_event(QToolButton*, intptr_t, QEvent*);
void miqt_exec_callback_QToolButton_mousePressEvent(QToolButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolButton_mouseReleaseEvent(QToolButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolButton_paintEvent(QToolButton*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QToolButton_actionEvent(QToolButton*, intptr_t, QActionEvent*);
void miqt_exec_callback_QToolButton_enterEvent(QToolButton*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QToolButton_leaveEvent(QToolButton*, intptr_t, QEvent*);
void miqt_exec_callback_QToolButton_timerEvent(QToolButton*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QToolButton_changeEvent(QToolButton*, intptr_t, QEvent*);
bool miqt_exec_callback_QToolButton_hitButton(const QToolButton*, intptr_t, QPoint*);
void miqt_exec_callback_QToolButton_checkStateSet(QToolButton*, intptr_t);
void miqt_exec_callback_QToolButton_nextCheckState(QToolButton*, intptr_t);
void miqt_exec_callback_QToolButton_initStyleOption(const QToolButton*, intptr_t, QStyleOptionToolButton*);
void miqt_exec_callback_QToolButton_keyPressEvent(QToolButton*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QToolButton_keyReleaseEvent(QToolButton*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QToolButton_mouseMoveEvent(QToolButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolButton_focusInEvent(QToolButton*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QToolButton_focusOutEvent(QToolButton*, intptr_t, QFocusEvent*);
int miqt_exec_callback_QToolButton_devType(const QToolButton*, intptr_t);
void miqt_exec_callback_QToolButton_setVisible(QToolButton*, intptr_t, bool);
int miqt_exec_callback_QToolButton_heightForWidth(const QToolButton*, intptr_t, int);
bool miqt_exec_callback_QToolButton_hasHeightForWidth(const QToolButton*, intptr_t);
QPaintEngine* miqt_exec_callback_QToolButton_paintEngine(const QToolButton*, intptr_t);
void miqt_exec_callback_QToolButton_mouseDoubleClickEvent(QToolButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolButton_wheelEvent(QToolButton*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QToolButton_moveEvent(QToolButton*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QToolButton_resizeEvent(QToolButton*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QToolButton_closeEvent(QToolButton*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QToolButton_contextMenuEvent(QToolButton*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QToolButton_tabletEvent(QToolButton*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QToolButton_dragEnterEvent(QToolButton*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QToolButton_dragMoveEvent(QToolButton*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QToolButton_dragLeaveEvent(QToolButton*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QToolButton_dropEvent(QToolButton*, intptr_t, QDropEvent*);
void miqt_exec_callback_QToolButton_showEvent(QToolButton*, intptr_t, QShowEvent*);
void miqt_exec_callback_QToolButton_hideEvent(QToolButton*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QToolButton_nativeEvent(QToolButton*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QToolButton_metric(const QToolButton*, intptr_t, int);
void miqt_exec_callback_QToolButton_initPainter(const QToolButton*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QToolButton_redirected(const QToolButton*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QToolButton_sharedPainter(const QToolButton*, intptr_t);
void miqt_exec_callback_QToolButton_inputMethodEvent(QToolButton*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QToolButton_inputMethodQuery(const QToolButton*, intptr_t, int);
bool miqt_exec_callback_QToolButton_focusNextPrevChild(QToolButton*, intptr_t, bool);
bool miqt_exec_callback_QToolButton_eventFilter(QToolButton*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QToolButton_childEvent(QToolButton*, intptr_t, QChildEvent*);
void miqt_exec_callback_QToolButton_customEvent(QToolButton*, intptr_t, QEvent*);
void miqt_exec_callback_QToolButton_connectNotify(QToolButton*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QToolButton_disconnectNotify(QToolButton*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQToolButton final : public QToolButton {
public:

	MiqtVirtualQToolButton(QWidget* parent): QToolButton(parent) {};
	MiqtVirtualQToolButton(): QToolButton() {};

	virtual ~MiqtVirtualQToolButton() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QToolButton::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QToolButton_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QToolButton::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QToolButton::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QToolButton_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QToolButton::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QToolButton::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QToolButton_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QToolButton::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__mousePressEvent == 0) {
			QToolButton::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* param1) {

		QToolButton::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__mouseReleaseEvent == 0) {
			QToolButton::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* param1) {

		QToolButton::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QToolButton::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* param1) {

		QToolButton::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* param1) override {
		if (handle__actionEvent == 0) {
			QToolButton::actionEvent(param1);
			return;
		}
		
		QActionEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* param1) {

		QToolButton::actionEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* param1) override {
		if (handle__enterEvent == 0) {
			QToolButton::enterEvent(param1);
			return;
		}
		
		QEnterEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* param1) {

		QToolButton::enterEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* param1) override {
		if (handle__leaveEvent == 0) {
			QToolButton::leaveEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* param1) {

		QToolButton::leaveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__timerEvent == 0) {
			QToolButton::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* param1) {

		QToolButton::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QToolButton::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QToolButton::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hitButton = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hitButton(const QPoint& pos) const override {
		if (handle__hitButton == 0) {
			return QToolButton::hitButton(pos);
		}
		
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);

		bool callback_return_value = miqt_exec_callback_QToolButton_hitButton(this, handle__hitButton, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hitButton(QPoint* pos) const {

		return QToolButton::hitButton(*pos);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__checkStateSet = 0;

	// Subclass to allow providing a Go implementation
	virtual void checkStateSet() override {
		if (handle__checkStateSet == 0) {
			QToolButton::checkStateSet();
			return;
		}
		

		miqt_exec_callback_QToolButton_checkStateSet(this, handle__checkStateSet);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_checkStateSet() {

		QToolButton::checkStateSet();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nextCheckState = 0;

	// Subclass to allow providing a Go implementation
	virtual void nextCheckState() override {
		if (handle__nextCheckState == 0) {
			QToolButton::nextCheckState();
			return;
		}
		

		miqt_exec_callback_QToolButton_nextCheckState(this, handle__nextCheckState);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_nextCheckState() {

		QToolButton::nextCheckState();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionToolButton* option) const override {
		if (handle__initStyleOption == 0) {
			QToolButton::initStyleOption(option);
			return;
		}
		
		QStyleOptionToolButton* sigval1 = option;

		miqt_exec_callback_QToolButton_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initStyleOption(QStyleOptionToolButton* option) const {

		QToolButton::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__keyPressEvent == 0) {
			QToolButton::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QToolButton_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* e) {

		QToolButton::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__keyReleaseEvent == 0) {
			QToolButton::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QToolButton_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* e) {

		QToolButton::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__mouseMoveEvent == 0) {
			QToolButton::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QToolButton_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* e) {

		QToolButton::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__focusInEvent == 0) {
			QToolButton::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QToolButton_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* e) {

		QToolButton::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__focusOutEvent == 0) {
			QToolButton::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QToolButton_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* e) {

		QToolButton::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QToolButton::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QToolButton_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QToolButton::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QToolButton::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QToolButton_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QToolButton::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QToolButton::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QToolButton_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QToolButton::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QToolButton::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QToolButton_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QToolButton::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QToolButton::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QToolButton_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QToolButton::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QToolButton::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QToolButton::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QToolButton::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QToolButton::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QToolButton::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QToolButton::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QToolButton::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QToolButton::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QToolButton::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QToolButton::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QToolButton::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QToolButton::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QToolButton::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QToolButton::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QToolButton::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QToolButton::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QToolButton::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QToolButton::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QToolButton::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QToolButton::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QToolButton::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QToolButton::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QToolButton::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QToolButton::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QToolButton::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QToolButton::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QToolButton::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QToolButton_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QToolButton::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QToolButton::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QToolButton_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QToolButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QToolButton::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QToolButton_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QToolButton::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QToolButton::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QToolButton_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QToolButton::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QToolButton::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QToolButton_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QToolButton::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QToolButton::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QToolButton::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QToolButton::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QToolButton_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QToolButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QToolButton::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QToolButton_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QToolButton::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QToolButton::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QToolButton_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QToolButton::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QToolButton::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QToolButton::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QToolButton::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QToolButton::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QToolButton::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QToolButton_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QToolButton::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QToolButton::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QToolButton_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QToolButton::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QToolButton_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QToolButton_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QToolButton_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QToolButton_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QToolButton_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QToolButton_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QToolButton_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QToolButton_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QToolButton_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QToolButton* QToolButton_new(QWidget* parent) {
	return new MiqtVirtualQToolButton(parent);
}

QToolButton* QToolButton_new2() {
	return new MiqtVirtualQToolButton();
}

void QToolButton_virtbase(QToolButton* src, QAbstractButton** outptr_QAbstractButton) {
	*outptr_QAbstractButton = static_cast<QAbstractButton*>(src);
}

QMetaObject* QToolButton_metaObject(const QToolButton* self) {
	return (QMetaObject*) self->metaObject();
}

void* QToolButton_metacast(QToolButton* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QToolButton_tr(const char* s) {
	QString _ret = QToolButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QToolButton_sizeHint(const QToolButton* self) {
	return new QSize(self->sizeHint());
}

QSize* QToolButton_minimumSizeHint(const QToolButton* self) {
	return new QSize(self->minimumSizeHint());
}

int QToolButton_toolButtonStyle(const QToolButton* self) {
	Qt::ToolButtonStyle _ret = self->toolButtonStyle();
	return static_cast<int>(_ret);
}

int QToolButton_arrowType(const QToolButton* self) {
	Qt::ArrowType _ret = self->arrowType();
	return static_cast<int>(_ret);
}

void QToolButton_setArrowType(QToolButton* self, int type) {
	self->setArrowType(static_cast<Qt::ArrowType>(type));
}

void QToolButton_setMenu(QToolButton* self, QMenu* menu) {
	self->setMenu(menu);
}

QMenu* QToolButton_menu(const QToolButton* self) {
	return self->menu();
}

void QToolButton_setPopupMode(QToolButton* self, int mode) {
	self->setPopupMode(static_cast<QToolButton::ToolButtonPopupMode>(mode));
}

int QToolButton_popupMode(const QToolButton* self) {
	QToolButton::ToolButtonPopupMode _ret = self->popupMode();
	return static_cast<int>(_ret);
}

QAction* QToolButton_defaultAction(const QToolButton* self) {
	return self->defaultAction();
}

void QToolButton_setAutoRaise(QToolButton* self, bool enable) {
	self->setAutoRaise(enable);
}

bool QToolButton_autoRaise(const QToolButton* self) {
	return self->autoRaise();
}

void QToolButton_showMenu(QToolButton* self) {
	self->showMenu();
}

void QToolButton_setToolButtonStyle(QToolButton* self, int style) {
	self->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(style));
}

void QToolButton_setDefaultAction(QToolButton* self, QAction* defaultAction) {
	self->setDefaultAction(defaultAction);
}

void QToolButton_triggered(QToolButton* self, QAction* param1) {
	self->triggered(param1);
}

void QToolButton_connect_triggered(QToolButton* self, intptr_t slot) {
	MiqtVirtualQToolButton::connect(self, static_cast<void (QToolButton::*)(QAction*)>(&QToolButton::triggered), self, [=](QAction* param1) {
		QAction* sigval1 = param1;
		miqt_exec_callback_QToolButton_triggered(slot, sigval1);
	});
}

struct miqt_string QToolButton_tr2(const char* s, const char* c) {
	QString _ret = QToolButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolButton_tr3(const char* s, const char* c, int n) {
	QString _ret = QToolButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QToolButton_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QToolButton_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_sizeHint();
}

bool QToolButton_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QToolButton_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_minimumSizeHint();
}

bool QToolButton_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QToolButton_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQToolButton*)(self) )->virtualbase_event(e);
}

bool QToolButton_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QToolButton_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_mousePressEvent(param1);
}

bool QToolButton_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QToolButton_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_mouseReleaseEvent(param1);
}

bool QToolButton_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QToolButton_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_paintEvent(param1);
}

bool QToolButton_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QToolButton_virtualbase_actionEvent(void* self, QActionEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_actionEvent(param1);
}

bool QToolButton_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QToolButton_virtualbase_enterEvent(void* self, QEnterEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_enterEvent(param1);
}

bool QToolButton_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QToolButton_virtualbase_leaveEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_leaveEvent(param1);
}

bool QToolButton_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QToolButton_virtualbase_timerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_timerEvent(param1);
}

bool QToolButton_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QToolButton_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_changeEvent(param1);
}

bool QToolButton_override_virtual_hitButton(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hitButton = slot;
	return true;
}

bool QToolButton_virtualbase_hitButton(const void* self, QPoint* pos) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_hitButton(pos);
}

bool QToolButton_override_virtual_checkStateSet(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__checkStateSet = slot;
	return true;
}

void QToolButton_virtualbase_checkStateSet(void* self) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_checkStateSet();
}

bool QToolButton_override_virtual_nextCheckState(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nextCheckState = slot;
	return true;
}

void QToolButton_virtualbase_nextCheckState(void* self) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_nextCheckState();
}

bool QToolButton_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QToolButton_virtualbase_initStyleOption(const void* self, QStyleOptionToolButton* option) {
	( (const MiqtVirtualQToolButton*)(self) )->virtualbase_initStyleOption(option);
}

bool QToolButton_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QToolButton_virtualbase_keyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_keyPressEvent(e);
}

bool QToolButton_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QToolButton_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_keyReleaseEvent(e);
}

bool QToolButton_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QToolButton_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_mouseMoveEvent(e);
}

bool QToolButton_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QToolButton_virtualbase_focusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_focusInEvent(e);
}

bool QToolButton_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QToolButton_virtualbase_focusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_focusOutEvent(e);
}

bool QToolButton_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QToolButton_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_devType();
}

bool QToolButton_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QToolButton_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_setVisible(visible);
}

bool QToolButton_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QToolButton_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_heightForWidth(param1);
}

bool QToolButton_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QToolButton_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_hasHeightForWidth();
}

bool QToolButton_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QToolButton_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_paintEngine();
}

bool QToolButton_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QToolButton_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QToolButton_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QToolButton_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_wheelEvent(event);
}

bool QToolButton_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QToolButton_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_moveEvent(event);
}

bool QToolButton_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QToolButton_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_resizeEvent(event);
}

bool QToolButton_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QToolButton_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_closeEvent(event);
}

bool QToolButton_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QToolButton_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QToolButton_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QToolButton_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_tabletEvent(event);
}

bool QToolButton_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QToolButton_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QToolButton_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QToolButton_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QToolButton_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QToolButton_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QToolButton_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QToolButton_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_dropEvent(event);
}

bool QToolButton_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QToolButton_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_showEvent(event);
}

bool QToolButton_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QToolButton_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_hideEvent(event);
}

bool QToolButton_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QToolButton_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQToolButton*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QToolButton_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QToolButton_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_metric(param1);
}

bool QToolButton_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QToolButton_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQToolButton*)(self) )->virtualbase_initPainter(painter);
}

bool QToolButton_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QToolButton_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_redirected(offset);
}

bool QToolButton_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QToolButton_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_sharedPainter();
}

bool QToolButton_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QToolButton_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QToolButton_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QToolButton_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QToolButton_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QToolButton_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQToolButton*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QToolButton_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QToolButton_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQToolButton*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QToolButton_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QToolButton_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_childEvent(event);
}

bool QToolButton_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QToolButton_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_customEvent(event);
}

bool QToolButton_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QToolButton_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_connectNotify(signal);
}

bool QToolButton_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QToolButton_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_disconnectNotify(signal);
}

void QToolButton_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QToolButton_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QToolButton_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QToolButton_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QToolButton_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QToolButton_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QToolButton_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QToolButton_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QToolButton_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QToolButton_delete(QToolButton* self) {
	delete self;
}

