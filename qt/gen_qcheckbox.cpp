#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
#include <QCheckBox>
#include <QChildEvent>
#include <QCloseEvent>
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
#include <qcheckbox.h>
#include "gen_qcheckbox.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCheckBox_stateChanged(intptr_t, int);
QSize* miqt_exec_callback_QCheckBox_sizeHint(const QCheckBox*, intptr_t);
QSize* miqt_exec_callback_QCheckBox_minimumSizeHint(const QCheckBox*, intptr_t);
bool miqt_exec_callback_QCheckBox_event(QCheckBox*, intptr_t, QEvent*);
bool miqt_exec_callback_QCheckBox_hitButton(const QCheckBox*, intptr_t, QPoint*);
void miqt_exec_callback_QCheckBox_checkStateSet(QCheckBox*, intptr_t);
void miqt_exec_callback_QCheckBox_nextCheckState(QCheckBox*, intptr_t);
void miqt_exec_callback_QCheckBox_paintEvent(QCheckBox*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QCheckBox_mouseMoveEvent(QCheckBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCheckBox_keyPressEvent(QCheckBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QCheckBox_keyReleaseEvent(QCheckBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QCheckBox_mousePressEvent(QCheckBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCheckBox_mouseReleaseEvent(QCheckBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCheckBox_focusInEvent(QCheckBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QCheckBox_focusOutEvent(QCheckBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QCheckBox_changeEvent(QCheckBox*, intptr_t, QEvent*);
void miqt_exec_callback_QCheckBox_timerEvent(QCheckBox*, intptr_t, QTimerEvent*);
int miqt_exec_callback_QCheckBox_devType(const QCheckBox*, intptr_t);
void miqt_exec_callback_QCheckBox_setVisible(QCheckBox*, intptr_t, bool);
int miqt_exec_callback_QCheckBox_heightForWidth(const QCheckBox*, intptr_t, int);
bool miqt_exec_callback_QCheckBox_hasHeightForWidth(const QCheckBox*, intptr_t);
QPaintEngine* miqt_exec_callback_QCheckBox_paintEngine(const QCheckBox*, intptr_t);
void miqt_exec_callback_QCheckBox_mouseDoubleClickEvent(QCheckBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCheckBox_wheelEvent(QCheckBox*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QCheckBox_enterEvent(QCheckBox*, intptr_t, QEvent*);
void miqt_exec_callback_QCheckBox_leaveEvent(QCheckBox*, intptr_t, QEvent*);
void miqt_exec_callback_QCheckBox_moveEvent(QCheckBox*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QCheckBox_resizeEvent(QCheckBox*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QCheckBox_closeEvent(QCheckBox*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QCheckBox_contextMenuEvent(QCheckBox*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QCheckBox_tabletEvent(QCheckBox*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QCheckBox_actionEvent(QCheckBox*, intptr_t, QActionEvent*);
void miqt_exec_callback_QCheckBox_dragEnterEvent(QCheckBox*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QCheckBox_dragMoveEvent(QCheckBox*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QCheckBox_dragLeaveEvent(QCheckBox*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QCheckBox_dropEvent(QCheckBox*, intptr_t, QDropEvent*);
void miqt_exec_callback_QCheckBox_showEvent(QCheckBox*, intptr_t, QShowEvent*);
void miqt_exec_callback_QCheckBox_hideEvent(QCheckBox*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QCheckBox_nativeEvent(QCheckBox*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QCheckBox_metric(const QCheckBox*, intptr_t, int);
void miqt_exec_callback_QCheckBox_initPainter(const QCheckBox*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QCheckBox_redirected(const QCheckBox*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QCheckBox_sharedPainter(const QCheckBox*, intptr_t);
void miqt_exec_callback_QCheckBox_inputMethodEvent(QCheckBox*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QCheckBox_inputMethodQuery(const QCheckBox*, intptr_t, int);
bool miqt_exec_callback_QCheckBox_focusNextPrevChild(QCheckBox*, intptr_t, bool);
bool miqt_exec_callback_QCheckBox_eventFilter(QCheckBox*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QCheckBox_childEvent(QCheckBox*, intptr_t, QChildEvent*);
void miqt_exec_callback_QCheckBox_customEvent(QCheckBox*, intptr_t, QEvent*);
void miqt_exec_callback_QCheckBox_connectNotify(QCheckBox*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QCheckBox_disconnectNotify(QCheckBox*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQCheckBox final : public QCheckBox {
public:

	MiqtVirtualQCheckBox(QWidget* parent): QCheckBox(parent) {};
	MiqtVirtualQCheckBox(): QCheckBox() {};
	MiqtVirtualQCheckBox(const QString& text): QCheckBox(text) {};
	MiqtVirtualQCheckBox(const QString& text, QWidget* parent): QCheckBox(text, parent) {};

	virtual ~MiqtVirtualQCheckBox() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QCheckBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QCheckBox_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QCheckBox::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QCheckBox::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QCheckBox_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QCheckBox::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QCheckBox::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QCheckBox_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QCheckBox::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hitButton = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hitButton(const QPoint& pos) const override {
		if (handle__hitButton == 0) {
			return QCheckBox::hitButton(pos);
		}
		
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);

		bool callback_return_value = miqt_exec_callback_QCheckBox_hitButton(this, handle__hitButton, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hitButton(QPoint* pos) const {

		return QCheckBox::hitButton(*pos);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__checkStateSet = 0;

	// Subclass to allow providing a Go implementation
	virtual void checkStateSet() override {
		if (handle__checkStateSet == 0) {
			QCheckBox::checkStateSet();
			return;
		}
		

		miqt_exec_callback_QCheckBox_checkStateSet(this, handle__checkStateSet);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_checkStateSet() {

		QCheckBox::checkStateSet();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nextCheckState = 0;

	// Subclass to allow providing a Go implementation
	virtual void nextCheckState() override {
		if (handle__nextCheckState == 0) {
			QCheckBox::nextCheckState();
			return;
		}
		

		miqt_exec_callback_QCheckBox_nextCheckState(this, handle__nextCheckState);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_nextCheckState() {

		QCheckBox::nextCheckState();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QCheckBox::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QCheckBox_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* param1) {

		QCheckBox::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__mouseMoveEvent == 0) {
			QCheckBox::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QCheckBox_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* param1) {

		QCheckBox::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__keyPressEvent == 0) {
			QCheckBox::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* e) {

		QCheckBox::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__keyReleaseEvent == 0) {
			QCheckBox::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* e) {

		QCheckBox::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__mousePressEvent == 0) {
			QCheckBox::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* e) {

		QCheckBox::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__mouseReleaseEvent == 0) {
			QCheckBox::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* e) {

		QCheckBox::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__focusInEvent == 0) {
			QCheckBox::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* e) {

		QCheckBox::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__focusOutEvent == 0) {
			QCheckBox::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* e) {

		QCheckBox::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__changeEvent == 0) {
			QCheckBox::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* e) {

		QCheckBox::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__timerEvent == 0) {
			QCheckBox::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* e) {

		QCheckBox::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QCheckBox::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QCheckBox_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QCheckBox::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QCheckBox::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QCheckBox_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QCheckBox::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QCheckBox::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QCheckBox_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QCheckBox::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QCheckBox::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QCheckBox_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QCheckBox::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QCheckBox::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QCheckBox_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QCheckBox::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QCheckBox::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QCheckBox::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QCheckBox::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QCheckBox::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QCheckBox::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QCheckBox::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QCheckBox::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QCheckBox::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QCheckBox::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QCheckBox::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QCheckBox::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QCheckBox::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QCheckBox::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QCheckBox::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QCheckBox::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QCheckBox::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QCheckBox::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QCheckBox::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QCheckBox::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QCheckBox::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QCheckBox::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QCheckBox::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QCheckBox::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QCheckBox::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QCheckBox::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QCheckBox::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QCheckBox::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QCheckBox::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QCheckBox::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QCheckBox::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QCheckBox::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QCheckBox::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QCheckBox::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QCheckBox_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QCheckBox::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QCheckBox::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QCheckBox_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QCheckBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QCheckBox::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QCheckBox_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QCheckBox::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QCheckBox::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QCheckBox_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QCheckBox::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QCheckBox::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QCheckBox_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QCheckBox::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QCheckBox::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QCheckBox_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QCheckBox::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QCheckBox::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QCheckBox_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QCheckBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QCheckBox::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QCheckBox_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QCheckBox::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QCheckBox::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QCheckBox_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QCheckBox::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QCheckBox::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QCheckBox::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QCheckBox::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QCheckBox::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QCheckBox::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCheckBox_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QCheckBox::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QCheckBox::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCheckBox_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QCheckBox::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QCheckBox_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionButton* option);
	friend void QCheckBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QCheckBox_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QCheckBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QCheckBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QCheckBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QCheckBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QCheckBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QCheckBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QCheckBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QCheckBox* QCheckBox_new(QWidget* parent) {
	return new MiqtVirtualQCheckBox(parent);
}

QCheckBox* QCheckBox_new2() {
	return new MiqtVirtualQCheckBox();
}

QCheckBox* QCheckBox_new3(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQCheckBox(text_QString);
}

QCheckBox* QCheckBox_new4(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQCheckBox(text_QString, parent);
}

void QCheckBox_virtbase(QCheckBox* src, QAbstractButton** outptr_QAbstractButton) {
	*outptr_QAbstractButton = static_cast<QAbstractButton*>(src);
}

QMetaObject* QCheckBox_metaObject(const QCheckBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCheckBox_metacast(QCheckBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCheckBox_tr(const char* s) {
	QString _ret = QCheckBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCheckBox_trUtf8(const char* s) {
	QString _ret = QCheckBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QCheckBox_sizeHint(const QCheckBox* self) {
	return new QSize(self->sizeHint());
}

QSize* QCheckBox_minimumSizeHint(const QCheckBox* self) {
	return new QSize(self->minimumSizeHint());
}

void QCheckBox_setTristate(QCheckBox* self) {
	self->setTristate();
}

bool QCheckBox_isTristate(const QCheckBox* self) {
	return self->isTristate();
}

int QCheckBox_checkState(const QCheckBox* self) {
	Qt::CheckState _ret = self->checkState();
	return static_cast<int>(_ret);
}

void QCheckBox_setCheckState(QCheckBox* self, int state) {
	self->setCheckState(static_cast<Qt::CheckState>(state));
}

void QCheckBox_stateChanged(QCheckBox* self, int param1) {
	self->stateChanged(static_cast<int>(param1));
}

void QCheckBox_connect_stateChanged(QCheckBox* self, intptr_t slot) {
	MiqtVirtualQCheckBox::connect(self, static_cast<void (QCheckBox::*)(int)>(&QCheckBox::stateChanged), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QCheckBox_stateChanged(slot, sigval1);
	});
}

struct miqt_string QCheckBox_tr2(const char* s, const char* c) {
	QString _ret = QCheckBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCheckBox_tr3(const char* s, const char* c, int n) {
	QString _ret = QCheckBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCheckBox_trUtf82(const char* s, const char* c) {
	QString _ret = QCheckBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCheckBox_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCheckBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCheckBox_setTristate1(QCheckBox* self, bool y) {
	self->setTristate(y);
}

bool QCheckBox_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QCheckBox_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_sizeHint();
}

bool QCheckBox_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QCheckBox_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_minimumSizeHint();
}

bool QCheckBox_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QCheckBox_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQCheckBox*)(self) )->virtualbase_event(e);
}

bool QCheckBox_override_virtual_hitButton(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hitButton = slot;
	return true;
}

bool QCheckBox_virtualbase_hitButton(const void* self, QPoint* pos) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_hitButton(pos);
}

bool QCheckBox_override_virtual_checkStateSet(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__checkStateSet = slot;
	return true;
}

void QCheckBox_virtualbase_checkStateSet(void* self) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_checkStateSet();
}

bool QCheckBox_override_virtual_nextCheckState(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nextCheckState = slot;
	return true;
}

void QCheckBox_virtualbase_nextCheckState(void* self) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_nextCheckState();
}

bool QCheckBox_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QCheckBox_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_paintEvent(param1);
}

bool QCheckBox_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QCheckBox_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_mouseMoveEvent(param1);
}

bool QCheckBox_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QCheckBox_virtualbase_keyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_keyPressEvent(e);
}

bool QCheckBox_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QCheckBox_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_keyReleaseEvent(e);
}

bool QCheckBox_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QCheckBox_virtualbase_mousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_mousePressEvent(e);
}

bool QCheckBox_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QCheckBox_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_mouseReleaseEvent(e);
}

bool QCheckBox_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QCheckBox_virtualbase_focusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_focusInEvent(e);
}

bool QCheckBox_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QCheckBox_virtualbase_focusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_focusOutEvent(e);
}

bool QCheckBox_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QCheckBox_virtualbase_changeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_changeEvent(e);
}

bool QCheckBox_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QCheckBox_virtualbase_timerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_timerEvent(e);
}

bool QCheckBox_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QCheckBox_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_devType();
}

bool QCheckBox_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QCheckBox_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_setVisible(visible);
}

bool QCheckBox_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QCheckBox_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_heightForWidth(param1);
}

bool QCheckBox_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QCheckBox_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_hasHeightForWidth();
}

bool QCheckBox_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QCheckBox_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_paintEngine();
}

bool QCheckBox_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QCheckBox_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QCheckBox_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QCheckBox_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_wheelEvent(event);
}

bool QCheckBox_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QCheckBox_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_enterEvent(event);
}

bool QCheckBox_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QCheckBox_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_leaveEvent(event);
}

bool QCheckBox_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QCheckBox_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_moveEvent(event);
}

bool QCheckBox_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QCheckBox_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_resizeEvent(event);
}

bool QCheckBox_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QCheckBox_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_closeEvent(event);
}

bool QCheckBox_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QCheckBox_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QCheckBox_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QCheckBox_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_tabletEvent(event);
}

bool QCheckBox_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QCheckBox_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_actionEvent(event);
}

bool QCheckBox_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QCheckBox_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QCheckBox_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QCheckBox_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QCheckBox_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QCheckBox_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QCheckBox_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QCheckBox_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_dropEvent(event);
}

bool QCheckBox_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QCheckBox_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_showEvent(event);
}

bool QCheckBox_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QCheckBox_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_hideEvent(event);
}

bool QCheckBox_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QCheckBox_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQCheckBox*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QCheckBox_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QCheckBox_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_metric(param1);
}

bool QCheckBox_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QCheckBox_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_initPainter(painter);
}

bool QCheckBox_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QCheckBox_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_redirected(offset);
}

bool QCheckBox_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QCheckBox_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_sharedPainter();
}

bool QCheckBox_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QCheckBox_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QCheckBox_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QCheckBox_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QCheckBox_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QCheckBox_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQCheckBox*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QCheckBox_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QCheckBox_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQCheckBox*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QCheckBox_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QCheckBox_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_childEvent(event);
}

bool QCheckBox_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QCheckBox_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_customEvent(event);
}

bool QCheckBox_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QCheckBox_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_connectNotify(signal);
}

bool QCheckBox_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QCheckBox_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_disconnectNotify(signal);
}

void QCheckBox_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionButton* option) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

void QCheckBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QCheckBox_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QCheckBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QCheckBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QCheckBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QCheckBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QCheckBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QCheckBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QCheckBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QCheckBox_delete(QCheckBox* self) {
	delete self;
}

