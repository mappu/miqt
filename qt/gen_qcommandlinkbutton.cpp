#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QCommandLinkButton>
#include <QContextMenuEvent>
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
#include <qcommandlinkbutton.h>
#include "gen_qcommandlinkbutton.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QCommandLinkButton_sizeHint(const QCommandLinkButton*, intptr_t);
int miqt_exec_callback_QCommandLinkButton_heightForWidth(const QCommandLinkButton*, intptr_t, int);
QSize* miqt_exec_callback_QCommandLinkButton_minimumSizeHint(const QCommandLinkButton*, intptr_t);
bool miqt_exec_callback_QCommandLinkButton_event(QCommandLinkButton*, intptr_t, QEvent*);
void miqt_exec_callback_QCommandLinkButton_paintEvent(QCommandLinkButton*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QCommandLinkButton_keyPressEvent(QCommandLinkButton*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QCommandLinkButton_focusInEvent(QCommandLinkButton*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QCommandLinkButton_focusOutEvent(QCommandLinkButton*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QCommandLinkButton_hitButton(const QCommandLinkButton*, intptr_t, QPoint*);
void miqt_exec_callback_QCommandLinkButton_checkStateSet(QCommandLinkButton*, intptr_t);
void miqt_exec_callback_QCommandLinkButton_nextCheckState(QCommandLinkButton*, intptr_t);
void miqt_exec_callback_QCommandLinkButton_keyReleaseEvent(QCommandLinkButton*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QCommandLinkButton_mousePressEvent(QCommandLinkButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCommandLinkButton_mouseReleaseEvent(QCommandLinkButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCommandLinkButton_mouseMoveEvent(QCommandLinkButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCommandLinkButton_changeEvent(QCommandLinkButton*, intptr_t, QEvent*);
void miqt_exec_callback_QCommandLinkButton_timerEvent(QCommandLinkButton*, intptr_t, QTimerEvent*);
int miqt_exec_callback_QCommandLinkButton_devType(const QCommandLinkButton*, intptr_t);
void miqt_exec_callback_QCommandLinkButton_setVisible(QCommandLinkButton*, intptr_t, bool);
bool miqt_exec_callback_QCommandLinkButton_hasHeightForWidth(const QCommandLinkButton*, intptr_t);
QPaintEngine* miqt_exec_callback_QCommandLinkButton_paintEngine(const QCommandLinkButton*, intptr_t);
void miqt_exec_callback_QCommandLinkButton_mouseDoubleClickEvent(QCommandLinkButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCommandLinkButton_wheelEvent(QCommandLinkButton*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QCommandLinkButton_enterEvent(QCommandLinkButton*, intptr_t, QEvent*);
void miqt_exec_callback_QCommandLinkButton_leaveEvent(QCommandLinkButton*, intptr_t, QEvent*);
void miqt_exec_callback_QCommandLinkButton_moveEvent(QCommandLinkButton*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QCommandLinkButton_resizeEvent(QCommandLinkButton*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QCommandLinkButton_closeEvent(QCommandLinkButton*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QCommandLinkButton_contextMenuEvent(QCommandLinkButton*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QCommandLinkButton_tabletEvent(QCommandLinkButton*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QCommandLinkButton_actionEvent(QCommandLinkButton*, intptr_t, QActionEvent*);
void miqt_exec_callback_QCommandLinkButton_dragEnterEvent(QCommandLinkButton*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QCommandLinkButton_dragMoveEvent(QCommandLinkButton*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QCommandLinkButton_dragLeaveEvent(QCommandLinkButton*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QCommandLinkButton_dropEvent(QCommandLinkButton*, intptr_t, QDropEvent*);
void miqt_exec_callback_QCommandLinkButton_showEvent(QCommandLinkButton*, intptr_t, QShowEvent*);
void miqt_exec_callback_QCommandLinkButton_hideEvent(QCommandLinkButton*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QCommandLinkButton_nativeEvent(QCommandLinkButton*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QCommandLinkButton_metric(const QCommandLinkButton*, intptr_t, int);
void miqt_exec_callback_QCommandLinkButton_initPainter(const QCommandLinkButton*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QCommandLinkButton_redirected(const QCommandLinkButton*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QCommandLinkButton_sharedPainter(const QCommandLinkButton*, intptr_t);
void miqt_exec_callback_QCommandLinkButton_inputMethodEvent(QCommandLinkButton*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QCommandLinkButton_inputMethodQuery(const QCommandLinkButton*, intptr_t, int);
bool miqt_exec_callback_QCommandLinkButton_focusNextPrevChild(QCommandLinkButton*, intptr_t, bool);
bool miqt_exec_callback_QCommandLinkButton_eventFilter(QCommandLinkButton*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QCommandLinkButton_childEvent(QCommandLinkButton*, intptr_t, QChildEvent*);
void miqt_exec_callback_QCommandLinkButton_customEvent(QCommandLinkButton*, intptr_t, QEvent*);
void miqt_exec_callback_QCommandLinkButton_connectNotify(QCommandLinkButton*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QCommandLinkButton_disconnectNotify(QCommandLinkButton*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQCommandLinkButton final : public QCommandLinkButton {
public:

	MiqtVirtualQCommandLinkButton(QWidget* parent): QCommandLinkButton(parent) {};
	MiqtVirtualQCommandLinkButton(): QCommandLinkButton() {};
	MiqtVirtualQCommandLinkButton(const QString& text): QCommandLinkButton(text) {};
	MiqtVirtualQCommandLinkButton(const QString& text, const QString& description): QCommandLinkButton(text, description) {};
	MiqtVirtualQCommandLinkButton(const QString& text, QWidget* parent): QCommandLinkButton(text, parent) {};
	MiqtVirtualQCommandLinkButton(const QString& text, const QString& description, QWidget* parent): QCommandLinkButton(text, description, parent) {};

	virtual ~MiqtVirtualQCommandLinkButton() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QCommandLinkButton::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QCommandLinkButton_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QCommandLinkButton::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QCommandLinkButton::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QCommandLinkButton_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QCommandLinkButton::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QCommandLinkButton::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QCommandLinkButton_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QCommandLinkButton::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QCommandLinkButton::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QCommandLinkButton_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QCommandLinkButton::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QCommandLinkButton::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QCommandLinkButton_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* param1) {

		QCommandLinkButton::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QCommandLinkButton::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QCommandLinkButton_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QCommandLinkButton::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (handle__focusInEvent == 0) {
			QCommandLinkButton::focusInEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QCommandLinkButton_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* param1) {

		QCommandLinkButton::focusInEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (handle__focusOutEvent == 0) {
			QCommandLinkButton::focusOutEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QCommandLinkButton_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* param1) {

		QCommandLinkButton::focusOutEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hitButton = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hitButton(const QPoint& pos) const override {
		if (handle__hitButton == 0) {
			return QCommandLinkButton::hitButton(pos);
		}
		
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);

		bool callback_return_value = miqt_exec_callback_QCommandLinkButton_hitButton(this, handle__hitButton, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hitButton(QPoint* pos) const {

		return QCommandLinkButton::hitButton(*pos);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__checkStateSet = 0;

	// Subclass to allow providing a Go implementation
	virtual void checkStateSet() override {
		if (handle__checkStateSet == 0) {
			QCommandLinkButton::checkStateSet();
			return;
		}
		

		miqt_exec_callback_QCommandLinkButton_checkStateSet(this, handle__checkStateSet);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_checkStateSet() {

		QCommandLinkButton::checkStateSet();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nextCheckState = 0;

	// Subclass to allow providing a Go implementation
	virtual void nextCheckState() override {
		if (handle__nextCheckState == 0) {
			QCommandLinkButton::nextCheckState();
			return;
		}
		

		miqt_exec_callback_QCommandLinkButton_nextCheckState(this, handle__nextCheckState);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_nextCheckState() {

		QCommandLinkButton::nextCheckState();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__keyReleaseEvent == 0) {
			QCommandLinkButton::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QCommandLinkButton_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* e) {

		QCommandLinkButton::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__mousePressEvent == 0) {
			QCommandLinkButton::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QCommandLinkButton_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* e) {

		QCommandLinkButton::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__mouseReleaseEvent == 0) {
			QCommandLinkButton::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QCommandLinkButton_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* e) {

		QCommandLinkButton::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__mouseMoveEvent == 0) {
			QCommandLinkButton::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QCommandLinkButton_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* e) {

		QCommandLinkButton::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__changeEvent == 0) {
			QCommandLinkButton::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QCommandLinkButton_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* e) {

		QCommandLinkButton::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__timerEvent == 0) {
			QCommandLinkButton::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QCommandLinkButton_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* e) {

		QCommandLinkButton::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QCommandLinkButton::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QCommandLinkButton_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QCommandLinkButton::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QCommandLinkButton::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QCommandLinkButton_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QCommandLinkButton::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QCommandLinkButton::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QCommandLinkButton_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QCommandLinkButton::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QCommandLinkButton::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QCommandLinkButton_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QCommandLinkButton::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QCommandLinkButton::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QCommandLinkButton::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QCommandLinkButton::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QCommandLinkButton::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QCommandLinkButton::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QCommandLinkButton::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QCommandLinkButton::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QCommandLinkButton::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QCommandLinkButton::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QCommandLinkButton::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QCommandLinkButton::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QCommandLinkButton::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QCommandLinkButton::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QCommandLinkButton::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QCommandLinkButton::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QCommandLinkButton::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QCommandLinkButton::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QCommandLinkButton::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QCommandLinkButton::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QCommandLinkButton::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QCommandLinkButton::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QCommandLinkButton::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QCommandLinkButton::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QCommandLinkButton::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QCommandLinkButton::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QCommandLinkButton::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QCommandLinkButton::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QCommandLinkButton::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QCommandLinkButton::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QCommandLinkButton::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QCommandLinkButton::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QCommandLinkButton::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QCommandLinkButton::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QCommandLinkButton_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QCommandLinkButton::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QCommandLinkButton::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QCommandLinkButton_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QCommandLinkButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QCommandLinkButton::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QCommandLinkButton_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QCommandLinkButton::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QCommandLinkButton::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QCommandLinkButton_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QCommandLinkButton::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QCommandLinkButton::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QCommandLinkButton_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QCommandLinkButton::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QCommandLinkButton::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QCommandLinkButton_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QCommandLinkButton::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QCommandLinkButton::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QCommandLinkButton_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QCommandLinkButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QCommandLinkButton::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QCommandLinkButton_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QCommandLinkButton::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QCommandLinkButton::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QCommandLinkButton_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QCommandLinkButton::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QCommandLinkButton::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QCommandLinkButton::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QCommandLinkButton::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QCommandLinkButton::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QCommandLinkButton::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCommandLinkButton_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QCommandLinkButton::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QCommandLinkButton::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCommandLinkButton_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QCommandLinkButton::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QCommandLinkButton_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionButton* option);
	friend void QCommandLinkButton_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QCommandLinkButton_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QCommandLinkButton_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QCommandLinkButton_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QCommandLinkButton_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QCommandLinkButton_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QCommandLinkButton_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QCommandLinkButton_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QCommandLinkButton_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QCommandLinkButton* QCommandLinkButton_new(QWidget* parent) {
	return new MiqtVirtualQCommandLinkButton(parent);
}

QCommandLinkButton* QCommandLinkButton_new2() {
	return new MiqtVirtualQCommandLinkButton();
}

QCommandLinkButton* QCommandLinkButton_new3(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQCommandLinkButton(text_QString);
}

QCommandLinkButton* QCommandLinkButton_new4(struct miqt_string text, struct miqt_string description) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString description_QString = QString::fromUtf8(description.data, description.len);
	return new MiqtVirtualQCommandLinkButton(text_QString, description_QString);
}

QCommandLinkButton* QCommandLinkButton_new5(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQCommandLinkButton(text_QString, parent);
}

QCommandLinkButton* QCommandLinkButton_new6(struct miqt_string text, struct miqt_string description, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString description_QString = QString::fromUtf8(description.data, description.len);
	return new MiqtVirtualQCommandLinkButton(text_QString, description_QString, parent);
}

void QCommandLinkButton_virtbase(QCommandLinkButton* src, QPushButton** outptr_QPushButton) {
	*outptr_QPushButton = static_cast<QPushButton*>(src);
}

QMetaObject* QCommandLinkButton_metaObject(const QCommandLinkButton* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCommandLinkButton_metacast(QCommandLinkButton* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCommandLinkButton_tr(const char* s) {
	QString _ret = QCommandLinkButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCommandLinkButton_trUtf8(const char* s) {
	QString _ret = QCommandLinkButton::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCommandLinkButton_description(const QCommandLinkButton* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCommandLinkButton_setDescription(QCommandLinkButton* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->setDescription(description_QString);
}

struct miqt_string QCommandLinkButton_tr2(const char* s, const char* c) {
	QString _ret = QCommandLinkButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCommandLinkButton_tr3(const char* s, const char* c, int n) {
	QString _ret = QCommandLinkButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCommandLinkButton_trUtf82(const char* s, const char* c) {
	QString _ret = QCommandLinkButton::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCommandLinkButton_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCommandLinkButton::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCommandLinkButton_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QCommandLinkButton_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_sizeHint();
}

bool QCommandLinkButton_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QCommandLinkButton_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_heightForWidth(param1);
}

bool QCommandLinkButton_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QCommandLinkButton_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_minimumSizeHint();
}

bool QCommandLinkButton_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QCommandLinkButton_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_event(e);
}

bool QCommandLinkButton_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_paintEvent(param1);
}

bool QCommandLinkButton_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QCommandLinkButton_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_focusInEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_focusInEvent(param1);
}

bool QCommandLinkButton_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_focusOutEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_focusOutEvent(param1);
}

bool QCommandLinkButton_override_virtual_hitButton(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hitButton = slot;
	return true;
}

bool QCommandLinkButton_virtualbase_hitButton(const void* self, QPoint* pos) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_hitButton(pos);
}

bool QCommandLinkButton_override_virtual_checkStateSet(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__checkStateSet = slot;
	return true;
}

void QCommandLinkButton_virtualbase_checkStateSet(void* self) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_checkStateSet();
}

bool QCommandLinkButton_override_virtual_nextCheckState(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nextCheckState = slot;
	return true;
}

void QCommandLinkButton_virtualbase_nextCheckState(void* self) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_nextCheckState();
}

bool QCommandLinkButton_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_keyReleaseEvent(e);
}

bool QCommandLinkButton_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_mousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_mousePressEvent(e);
}

bool QCommandLinkButton_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_mouseReleaseEvent(e);
}

bool QCommandLinkButton_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_mouseMoveEvent(e);
}

bool QCommandLinkButton_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_changeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_changeEvent(e);
}

bool QCommandLinkButton_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_timerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_timerEvent(e);
}

bool QCommandLinkButton_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QCommandLinkButton_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_devType();
}

bool QCommandLinkButton_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QCommandLinkButton_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_setVisible(visible);
}

bool QCommandLinkButton_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QCommandLinkButton_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_hasHeightForWidth();
}

bool QCommandLinkButton_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QCommandLinkButton_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_paintEngine();
}

bool QCommandLinkButton_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QCommandLinkButton_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_wheelEvent(event);
}

bool QCommandLinkButton_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_enterEvent(event);
}

bool QCommandLinkButton_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_leaveEvent(event);
}

bool QCommandLinkButton_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_moveEvent(event);
}

bool QCommandLinkButton_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_resizeEvent(event);
}

bool QCommandLinkButton_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_closeEvent(event);
}

bool QCommandLinkButton_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QCommandLinkButton_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_tabletEvent(event);
}

bool QCommandLinkButton_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_actionEvent(event);
}

bool QCommandLinkButton_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QCommandLinkButton_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QCommandLinkButton_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QCommandLinkButton_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_dropEvent(event);
}

bool QCommandLinkButton_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_showEvent(event);
}

bool QCommandLinkButton_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_hideEvent(event);
}

bool QCommandLinkButton_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QCommandLinkButton_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QCommandLinkButton_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QCommandLinkButton_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_metric(param1);
}

bool QCommandLinkButton_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QCommandLinkButton_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_initPainter(painter);
}

bool QCommandLinkButton_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QCommandLinkButton_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_redirected(offset);
}

bool QCommandLinkButton_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QCommandLinkButton_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_sharedPainter();
}

bool QCommandLinkButton_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QCommandLinkButton_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QCommandLinkButton_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QCommandLinkButton_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QCommandLinkButton_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QCommandLinkButton_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QCommandLinkButton_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QCommandLinkButton_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_childEvent(event);
}

bool QCommandLinkButton_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_customEvent(event);
}

bool QCommandLinkButton_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QCommandLinkButton_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_connectNotify(signal);
}

bool QCommandLinkButton_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QCommandLinkButton_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_disconnectNotify(signal);
}

void QCommandLinkButton_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionButton* option) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

void QCommandLinkButton_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QCommandLinkButton_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QCommandLinkButton_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QCommandLinkButton_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QCommandLinkButton_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QCommandLinkButton_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QCommandLinkButton_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QCommandLinkButton_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QCommandLinkButton_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QCommandLinkButton_delete(QCommandLinkButton* self) {
	delete self;
}

