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
#include <QRadioButton>
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
#include <qradiobutton.h>
#include "gen_qradiobutton.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QRadioButton_sizeHint(const QRadioButton*, intptr_t);
QSize* miqt_exec_callback_QRadioButton_minimumSizeHint(const QRadioButton*, intptr_t);
bool miqt_exec_callback_QRadioButton_event(QRadioButton*, intptr_t, QEvent*);
bool miqt_exec_callback_QRadioButton_hitButton(const QRadioButton*, intptr_t, QPoint*);
void miqt_exec_callback_QRadioButton_paintEvent(QRadioButton*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QRadioButton_mouseMoveEvent(QRadioButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRadioButton_initStyleOption(const QRadioButton*, intptr_t, QStyleOptionButton*);
void miqt_exec_callback_QRadioButton_checkStateSet(QRadioButton*, intptr_t);
void miqt_exec_callback_QRadioButton_nextCheckState(QRadioButton*, intptr_t);
void miqt_exec_callback_QRadioButton_keyPressEvent(QRadioButton*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QRadioButton_keyReleaseEvent(QRadioButton*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QRadioButton_mousePressEvent(QRadioButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRadioButton_mouseReleaseEvent(QRadioButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRadioButton_focusInEvent(QRadioButton*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QRadioButton_focusOutEvent(QRadioButton*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QRadioButton_changeEvent(QRadioButton*, intptr_t, QEvent*);
void miqt_exec_callback_QRadioButton_timerEvent(QRadioButton*, intptr_t, QTimerEvent*);
int miqt_exec_callback_QRadioButton_devType(const QRadioButton*, intptr_t);
void miqt_exec_callback_QRadioButton_setVisible(QRadioButton*, intptr_t, bool);
int miqt_exec_callback_QRadioButton_heightForWidth(const QRadioButton*, intptr_t, int);
bool miqt_exec_callback_QRadioButton_hasHeightForWidth(const QRadioButton*, intptr_t);
QPaintEngine* miqt_exec_callback_QRadioButton_paintEngine(const QRadioButton*, intptr_t);
void miqt_exec_callback_QRadioButton_mouseDoubleClickEvent(QRadioButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRadioButton_wheelEvent(QRadioButton*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QRadioButton_enterEvent(QRadioButton*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QRadioButton_leaveEvent(QRadioButton*, intptr_t, QEvent*);
void miqt_exec_callback_QRadioButton_moveEvent(QRadioButton*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QRadioButton_resizeEvent(QRadioButton*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QRadioButton_closeEvent(QRadioButton*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QRadioButton_contextMenuEvent(QRadioButton*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QRadioButton_tabletEvent(QRadioButton*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QRadioButton_actionEvent(QRadioButton*, intptr_t, QActionEvent*);
void miqt_exec_callback_QRadioButton_dragEnterEvent(QRadioButton*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QRadioButton_dragMoveEvent(QRadioButton*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QRadioButton_dragLeaveEvent(QRadioButton*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QRadioButton_dropEvent(QRadioButton*, intptr_t, QDropEvent*);
void miqt_exec_callback_QRadioButton_showEvent(QRadioButton*, intptr_t, QShowEvent*);
void miqt_exec_callback_QRadioButton_hideEvent(QRadioButton*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QRadioButton_nativeEvent(QRadioButton*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QRadioButton_metric(const QRadioButton*, intptr_t, int);
void miqt_exec_callback_QRadioButton_initPainter(const QRadioButton*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QRadioButton_redirected(const QRadioButton*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QRadioButton_sharedPainter(const QRadioButton*, intptr_t);
void miqt_exec_callback_QRadioButton_inputMethodEvent(QRadioButton*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QRadioButton_inputMethodQuery(const QRadioButton*, intptr_t, int);
bool miqt_exec_callback_QRadioButton_focusNextPrevChild(QRadioButton*, intptr_t, bool);
bool miqt_exec_callback_QRadioButton_eventFilter(QRadioButton*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QRadioButton_childEvent(QRadioButton*, intptr_t, QChildEvent*);
void miqt_exec_callback_QRadioButton_customEvent(QRadioButton*, intptr_t, QEvent*);
void miqt_exec_callback_QRadioButton_connectNotify(QRadioButton*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QRadioButton_disconnectNotify(QRadioButton*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQRadioButton final : public QRadioButton {
public:

	MiqtVirtualQRadioButton(QWidget* parent): QRadioButton(parent) {};
	MiqtVirtualQRadioButton(): QRadioButton() {};
	MiqtVirtualQRadioButton(const QString& text): QRadioButton(text) {};
	MiqtVirtualQRadioButton(const QString& text, QWidget* parent): QRadioButton(text, parent) {};

	virtual ~MiqtVirtualQRadioButton() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QRadioButton::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QRadioButton_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QRadioButton::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QRadioButton::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QRadioButton_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QRadioButton::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QRadioButton::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QRadioButton_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QRadioButton::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hitButton = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hitButton(const QPoint& param1) const override {
		if (handle__hitButton == 0) {
			return QRadioButton::hitButton(param1);
		}
		
		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);

		bool callback_return_value = miqt_exec_callback_QRadioButton_hitButton(this, handle__hitButton, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hitButton(QPoint* param1) const {

		return QRadioButton::hitButton(*param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QRadioButton::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QRadioButton_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* param1) {

		QRadioButton::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__mouseMoveEvent == 0) {
			QRadioButton::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QRadioButton_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* param1) {

		QRadioButton::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionButton* button) const override {
		if (handle__initStyleOption == 0) {
			QRadioButton::initStyleOption(button);
			return;
		}
		
		QStyleOptionButton* sigval1 = button;

		miqt_exec_callback_QRadioButton_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initStyleOption(QStyleOptionButton* button) const {

		QRadioButton::initStyleOption(button);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__checkStateSet = 0;

	// Subclass to allow providing a Go implementation
	virtual void checkStateSet() override {
		if (handle__checkStateSet == 0) {
			QRadioButton::checkStateSet();
			return;
		}
		

		miqt_exec_callback_QRadioButton_checkStateSet(this, handle__checkStateSet);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_checkStateSet() {

		QRadioButton::checkStateSet();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nextCheckState = 0;

	// Subclass to allow providing a Go implementation
	virtual void nextCheckState() override {
		if (handle__nextCheckState == 0) {
			QRadioButton::nextCheckState();
			return;
		}
		

		miqt_exec_callback_QRadioButton_nextCheckState(this, handle__nextCheckState);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_nextCheckState() {

		QRadioButton::nextCheckState();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__keyPressEvent == 0) {
			QRadioButton::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QRadioButton_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* e) {

		QRadioButton::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__keyReleaseEvent == 0) {
			QRadioButton::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QRadioButton_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* e) {

		QRadioButton::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__mousePressEvent == 0) {
			QRadioButton::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QRadioButton_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* e) {

		QRadioButton::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__mouseReleaseEvent == 0) {
			QRadioButton::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QRadioButton_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* e) {

		QRadioButton::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__focusInEvent == 0) {
			QRadioButton::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QRadioButton_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* e) {

		QRadioButton::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__focusOutEvent == 0) {
			QRadioButton::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QRadioButton_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* e) {

		QRadioButton::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__changeEvent == 0) {
			QRadioButton::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QRadioButton_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* e) {

		QRadioButton::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__timerEvent == 0) {
			QRadioButton::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QRadioButton_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* e) {

		QRadioButton::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QRadioButton::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QRadioButton_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QRadioButton::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QRadioButton::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QRadioButton_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QRadioButton::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QRadioButton::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QRadioButton_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QRadioButton::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QRadioButton::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QRadioButton_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QRadioButton::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QRadioButton::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QRadioButton_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QRadioButton::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QRadioButton::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QRadioButton::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QRadioButton::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QRadioButton::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QRadioButton::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QRadioButton::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QRadioButton::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QRadioButton::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QRadioButton::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QRadioButton::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QRadioButton::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QRadioButton::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QRadioButton::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QRadioButton::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QRadioButton::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QRadioButton::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QRadioButton::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QRadioButton::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QRadioButton::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QRadioButton::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QRadioButton::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QRadioButton::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QRadioButton::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QRadioButton::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QRadioButton::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QRadioButton::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QRadioButton::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QRadioButton::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QRadioButton::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QRadioButton::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QRadioButton::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QRadioButton::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QRadioButton::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QRadioButton_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QRadioButton::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QRadioButton::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QRadioButton_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QRadioButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QRadioButton::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QRadioButton_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QRadioButton::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QRadioButton::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QRadioButton_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QRadioButton::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QRadioButton::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QRadioButton_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QRadioButton::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QRadioButton::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QRadioButton_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QRadioButton::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QRadioButton::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QRadioButton_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QRadioButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QRadioButton::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QRadioButton_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QRadioButton::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QRadioButton::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QRadioButton_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QRadioButton::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QRadioButton::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QRadioButton::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QRadioButton::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QRadioButton::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QRadioButton::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRadioButton_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QRadioButton::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QRadioButton::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRadioButton_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QRadioButton::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QRadioButton_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QRadioButton_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QRadioButton_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QRadioButton_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QRadioButton_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QRadioButton_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QRadioButton_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QRadioButton_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QRadioButton_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QRadioButton* QRadioButton_new(QWidget* parent) {
	return new MiqtVirtualQRadioButton(parent);
}

QRadioButton* QRadioButton_new2() {
	return new MiqtVirtualQRadioButton();
}

QRadioButton* QRadioButton_new3(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQRadioButton(text_QString);
}

QRadioButton* QRadioButton_new4(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQRadioButton(text_QString, parent);
}

void QRadioButton_virtbase(QRadioButton* src, QAbstractButton** outptr_QAbstractButton) {
	*outptr_QAbstractButton = static_cast<QAbstractButton*>(src);
}

QMetaObject* QRadioButton_metaObject(const QRadioButton* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRadioButton_metacast(QRadioButton* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QRadioButton_tr(const char* s) {
	QString _ret = QRadioButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QRadioButton_sizeHint(const QRadioButton* self) {
	return new QSize(self->sizeHint());
}

QSize* QRadioButton_minimumSizeHint(const QRadioButton* self) {
	return new QSize(self->minimumSizeHint());
}

struct miqt_string QRadioButton_tr2(const char* s, const char* c) {
	QString _ret = QRadioButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioButton_tr3(const char* s, const char* c, int n) {
	QString _ret = QRadioButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QRadioButton_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QRadioButton_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_sizeHint();
}

bool QRadioButton_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QRadioButton_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_minimumSizeHint();
}

bool QRadioButton_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QRadioButton_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQRadioButton*)(self) )->virtualbase_event(e);
}

bool QRadioButton_override_virtual_hitButton(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hitButton = slot;
	return true;
}

bool QRadioButton_virtualbase_hitButton(const void* self, QPoint* param1) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_hitButton(param1);
}

bool QRadioButton_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QRadioButton_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_paintEvent(param1);
}

bool QRadioButton_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QRadioButton_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_mouseMoveEvent(param1);
}

bool QRadioButton_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QRadioButton_virtualbase_initStyleOption(const void* self, QStyleOptionButton* button) {
	( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_initStyleOption(button);
}

bool QRadioButton_override_virtual_checkStateSet(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__checkStateSet = slot;
	return true;
}

void QRadioButton_virtualbase_checkStateSet(void* self) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_checkStateSet();
}

bool QRadioButton_override_virtual_nextCheckState(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nextCheckState = slot;
	return true;
}

void QRadioButton_virtualbase_nextCheckState(void* self) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_nextCheckState();
}

bool QRadioButton_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QRadioButton_virtualbase_keyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_keyPressEvent(e);
}

bool QRadioButton_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QRadioButton_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_keyReleaseEvent(e);
}

bool QRadioButton_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QRadioButton_virtualbase_mousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_mousePressEvent(e);
}

bool QRadioButton_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QRadioButton_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_mouseReleaseEvent(e);
}

bool QRadioButton_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QRadioButton_virtualbase_focusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_focusInEvent(e);
}

bool QRadioButton_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QRadioButton_virtualbase_focusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_focusOutEvent(e);
}

bool QRadioButton_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QRadioButton_virtualbase_changeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_changeEvent(e);
}

bool QRadioButton_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QRadioButton_virtualbase_timerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_timerEvent(e);
}

bool QRadioButton_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QRadioButton_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_devType();
}

bool QRadioButton_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QRadioButton_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_setVisible(visible);
}

bool QRadioButton_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QRadioButton_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_heightForWidth(param1);
}

bool QRadioButton_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QRadioButton_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_hasHeightForWidth();
}

bool QRadioButton_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QRadioButton_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_paintEngine();
}

bool QRadioButton_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QRadioButton_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QRadioButton_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QRadioButton_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_wheelEvent(event);
}

bool QRadioButton_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QRadioButton_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_enterEvent(event);
}

bool QRadioButton_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QRadioButton_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_leaveEvent(event);
}

bool QRadioButton_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QRadioButton_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_moveEvent(event);
}

bool QRadioButton_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QRadioButton_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_resizeEvent(event);
}

bool QRadioButton_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QRadioButton_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_closeEvent(event);
}

bool QRadioButton_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QRadioButton_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QRadioButton_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QRadioButton_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_tabletEvent(event);
}

bool QRadioButton_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QRadioButton_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_actionEvent(event);
}

bool QRadioButton_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QRadioButton_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QRadioButton_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QRadioButton_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QRadioButton_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QRadioButton_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QRadioButton_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QRadioButton_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_dropEvent(event);
}

bool QRadioButton_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QRadioButton_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_showEvent(event);
}

bool QRadioButton_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QRadioButton_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_hideEvent(event);
}

bool QRadioButton_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QRadioButton_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQRadioButton*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QRadioButton_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QRadioButton_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_metric(param1);
}

bool QRadioButton_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QRadioButton_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_initPainter(painter);
}

bool QRadioButton_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QRadioButton_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_redirected(offset);
}

bool QRadioButton_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QRadioButton_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_sharedPainter();
}

bool QRadioButton_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QRadioButton_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QRadioButton_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QRadioButton_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QRadioButton_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QRadioButton_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQRadioButton*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QRadioButton_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QRadioButton_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQRadioButton*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QRadioButton_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QRadioButton_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_childEvent(event);
}

bool QRadioButton_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QRadioButton_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_customEvent(event);
}

bool QRadioButton_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QRadioButton_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_connectNotify(signal);
}

bool QRadioButton_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QRadioButton_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_disconnectNotify(signal);
}

void QRadioButton_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QRadioButton_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QRadioButton_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QRadioButton_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QRadioButton_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QRadioButton_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QRadioButton_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QRadioButton_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QRadioButton_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QRadioButton_delete(QRadioButton* self) {
	delete self;
}

