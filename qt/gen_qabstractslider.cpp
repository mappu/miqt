#include <QAbstractSlider>
#include <QActionEvent>
#include <QByteArray>
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
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qabstractslider.h>
#include "gen_qabstractslider.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractSlider_valueChanged(intptr_t, int);
void miqt_exec_callback_QAbstractSlider_sliderPressed(intptr_t);
void miqt_exec_callback_QAbstractSlider_sliderMoved(intptr_t, int);
void miqt_exec_callback_QAbstractSlider_sliderReleased(intptr_t);
void miqt_exec_callback_QAbstractSlider_rangeChanged(intptr_t, int, int);
void miqt_exec_callback_QAbstractSlider_actionTriggered(intptr_t, int);
bool miqt_exec_callback_QAbstractSlider_event(QAbstractSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractSlider_sliderChange(QAbstractSlider*, intptr_t, int);
void miqt_exec_callback_QAbstractSlider_keyPressEvent(QAbstractSlider*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractSlider_timerEvent(QAbstractSlider*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractSlider_wheelEvent(QAbstractSlider*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QAbstractSlider_changeEvent(QAbstractSlider*, intptr_t, QEvent*);
int miqt_exec_callback_QAbstractSlider_devType(const QAbstractSlider*, intptr_t);
void miqt_exec_callback_QAbstractSlider_setVisible(QAbstractSlider*, intptr_t, bool);
QSize* miqt_exec_callback_QAbstractSlider_sizeHint(const QAbstractSlider*, intptr_t);
QSize* miqt_exec_callback_QAbstractSlider_minimumSizeHint(const QAbstractSlider*, intptr_t);
int miqt_exec_callback_QAbstractSlider_heightForWidth(const QAbstractSlider*, intptr_t, int);
bool miqt_exec_callback_QAbstractSlider_hasHeightForWidth(const QAbstractSlider*, intptr_t);
QPaintEngine* miqt_exec_callback_QAbstractSlider_paintEngine(const QAbstractSlider*, intptr_t);
void miqt_exec_callback_QAbstractSlider_mousePressEvent(QAbstractSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractSlider_mouseReleaseEvent(QAbstractSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractSlider_mouseDoubleClickEvent(QAbstractSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractSlider_mouseMoveEvent(QAbstractSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractSlider_keyReleaseEvent(QAbstractSlider*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractSlider_focusInEvent(QAbstractSlider*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractSlider_focusOutEvent(QAbstractSlider*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractSlider_enterEvent(QAbstractSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractSlider_leaveEvent(QAbstractSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractSlider_paintEvent(QAbstractSlider*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QAbstractSlider_moveEvent(QAbstractSlider*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QAbstractSlider_resizeEvent(QAbstractSlider*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QAbstractSlider_closeEvent(QAbstractSlider*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QAbstractSlider_contextMenuEvent(QAbstractSlider*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QAbstractSlider_tabletEvent(QAbstractSlider*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QAbstractSlider_actionEvent(QAbstractSlider*, intptr_t, QActionEvent*);
void miqt_exec_callback_QAbstractSlider_dragEnterEvent(QAbstractSlider*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QAbstractSlider_dragMoveEvent(QAbstractSlider*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QAbstractSlider_dragLeaveEvent(QAbstractSlider*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QAbstractSlider_dropEvent(QAbstractSlider*, intptr_t, QDropEvent*);
void miqt_exec_callback_QAbstractSlider_showEvent(QAbstractSlider*, intptr_t, QShowEvent*);
void miqt_exec_callback_QAbstractSlider_hideEvent(QAbstractSlider*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QAbstractSlider_nativeEvent(QAbstractSlider*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QAbstractSlider_metric(const QAbstractSlider*, intptr_t, int);
void miqt_exec_callback_QAbstractSlider_initPainter(const QAbstractSlider*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QAbstractSlider_redirected(const QAbstractSlider*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QAbstractSlider_sharedPainter(const QAbstractSlider*, intptr_t);
void miqt_exec_callback_QAbstractSlider_inputMethodEvent(QAbstractSlider*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QAbstractSlider_inputMethodQuery(const QAbstractSlider*, intptr_t, int);
bool miqt_exec_callback_QAbstractSlider_focusNextPrevChild(QAbstractSlider*, intptr_t, bool);
bool miqt_exec_callback_QAbstractSlider_eventFilter(QAbstractSlider*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractSlider_childEvent(QAbstractSlider*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractSlider_customEvent(QAbstractSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractSlider_connectNotify(QAbstractSlider*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractSlider_disconnectNotify(QAbstractSlider*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractSlider final : public QAbstractSlider {
public:

	MiqtVirtualQAbstractSlider(QWidget* parent): QAbstractSlider(parent) {};
	MiqtVirtualQAbstractSlider(): QAbstractSlider() {};

	virtual ~MiqtVirtualQAbstractSlider() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QAbstractSlider::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QAbstractSlider_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QAbstractSlider::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sliderChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void sliderChange(QAbstractSlider::SliderChange change) override {
		if (handle__sliderChange == 0) {
			QAbstractSlider::sliderChange(change);
			return;
		}
		
		QAbstractSlider::SliderChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);

		miqt_exec_callback_QAbstractSlider_sliderChange(this, handle__sliderChange, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_sliderChange(int change) {

		QAbstractSlider::sliderChange(static_cast<QAbstractSlider::SliderChange>(change));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* ev) override {
		if (handle__keyPressEvent == 0) {
			QAbstractSlider::keyPressEvent(ev);
			return;
		}
		
		QKeyEvent* sigval1 = ev;

		miqt_exec_callback_QAbstractSlider_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* ev) {

		QAbstractSlider::keyPressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__timerEvent == 0) {
			QAbstractSlider::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractSlider_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* param1) {

		QAbstractSlider::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__wheelEvent == 0) {
			QAbstractSlider::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QAbstractSlider_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* e) {

		QAbstractSlider::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__changeEvent == 0) {
			QAbstractSlider::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QAbstractSlider_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* e) {

		QAbstractSlider::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QAbstractSlider::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractSlider_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QAbstractSlider::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QAbstractSlider::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QAbstractSlider_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QAbstractSlider::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QAbstractSlider::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractSlider_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QAbstractSlider::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QAbstractSlider::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractSlider_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QAbstractSlider::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QAbstractSlider::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QAbstractSlider_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QAbstractSlider::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QAbstractSlider::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractSlider_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QAbstractSlider::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QAbstractSlider::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QAbstractSlider_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QAbstractSlider::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QAbstractSlider::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QAbstractSlider::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QAbstractSlider::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QAbstractSlider::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QAbstractSlider::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QAbstractSlider::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QAbstractSlider::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QAbstractSlider::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QAbstractSlider::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QAbstractSlider::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QAbstractSlider::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QAbstractSlider::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QAbstractSlider::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QAbstractSlider::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QAbstractSlider::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QAbstractSlider::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QAbstractSlider::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QAbstractSlider::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QAbstractSlider::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QAbstractSlider::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QAbstractSlider::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QAbstractSlider::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QAbstractSlider::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QAbstractSlider::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QAbstractSlider::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QAbstractSlider::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QAbstractSlider::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QAbstractSlider::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QAbstractSlider::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QAbstractSlider::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QAbstractSlider::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QAbstractSlider::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QAbstractSlider::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QAbstractSlider::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QAbstractSlider::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QAbstractSlider::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QAbstractSlider::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QAbstractSlider::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QAbstractSlider::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QAbstractSlider::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QAbstractSlider::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QAbstractSlider::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QAbstractSlider::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QAbstractSlider::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QAbstractSlider::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QAbstractSlider_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QAbstractSlider::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QAbstractSlider::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QAbstractSlider_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QAbstractSlider::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QAbstractSlider::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QAbstractSlider_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QAbstractSlider::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QAbstractSlider::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QAbstractSlider_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QAbstractSlider::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QAbstractSlider::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QAbstractSlider_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QAbstractSlider::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QAbstractSlider::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractSlider_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QAbstractSlider::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QAbstractSlider::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QAbstractSlider_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QAbstractSlider::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QAbstractSlider::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QAbstractSlider_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QAbstractSlider::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAbstractSlider::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractSlider_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAbstractSlider::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAbstractSlider::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAbstractSlider::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAbstractSlider::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAbstractSlider::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAbstractSlider::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractSlider_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAbstractSlider::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAbstractSlider::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractSlider_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAbstractSlider::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QAbstractSlider_protectedbase_setRepeatAction(bool* _dynamic_cast_ok, void* self, int action);
	friend int QAbstractSlider_protectedbase_repeatAction(bool* _dynamic_cast_ok, const void* self);
	friend void QAbstractSlider_protectedbase_setRepeatAction2(bool* _dynamic_cast_ok, void* self, int action, int thresholdTime);
	friend void QAbstractSlider_protectedbase_setRepeatAction3(bool* _dynamic_cast_ok, void* self, int action, int thresholdTime, int repeatTime);
	friend void QAbstractSlider_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractSlider_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractSlider_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractSlider_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractSlider_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QAbstractSlider_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractSlider_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractSlider_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractSlider_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAbstractSlider* QAbstractSlider_new(QWidget* parent) {
	return new MiqtVirtualQAbstractSlider(parent);
}

QAbstractSlider* QAbstractSlider_new2() {
	return new MiqtVirtualQAbstractSlider();
}

void QAbstractSlider_virtbase(QAbstractSlider* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QAbstractSlider_metaObject(const QAbstractSlider* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractSlider_metacast(QAbstractSlider* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractSlider_tr(const char* s) {
	QString _ret = QAbstractSlider::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSlider_trUtf8(const char* s) {
	QString _ret = QAbstractSlider::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAbstractSlider_orientation(const QAbstractSlider* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QAbstractSlider_setMinimum(QAbstractSlider* self, int minimum) {
	self->setMinimum(static_cast<int>(minimum));
}

int QAbstractSlider_minimum(const QAbstractSlider* self) {
	return self->minimum();
}

void QAbstractSlider_setMaximum(QAbstractSlider* self, int maximum) {
	self->setMaximum(static_cast<int>(maximum));
}

int QAbstractSlider_maximum(const QAbstractSlider* self) {
	return self->maximum();
}

void QAbstractSlider_setSingleStep(QAbstractSlider* self, int singleStep) {
	self->setSingleStep(static_cast<int>(singleStep));
}

int QAbstractSlider_singleStep(const QAbstractSlider* self) {
	return self->singleStep();
}

void QAbstractSlider_setPageStep(QAbstractSlider* self, int pageStep) {
	self->setPageStep(static_cast<int>(pageStep));
}

int QAbstractSlider_pageStep(const QAbstractSlider* self) {
	return self->pageStep();
}

void QAbstractSlider_setTracking(QAbstractSlider* self, bool enable) {
	self->setTracking(enable);
}

bool QAbstractSlider_hasTracking(const QAbstractSlider* self) {
	return self->hasTracking();
}

void QAbstractSlider_setSliderDown(QAbstractSlider* self, bool sliderDown) {
	self->setSliderDown(sliderDown);
}

bool QAbstractSlider_isSliderDown(const QAbstractSlider* self) {
	return self->isSliderDown();
}

void QAbstractSlider_setSliderPosition(QAbstractSlider* self, int sliderPosition) {
	self->setSliderPosition(static_cast<int>(sliderPosition));
}

int QAbstractSlider_sliderPosition(const QAbstractSlider* self) {
	return self->sliderPosition();
}

void QAbstractSlider_setInvertedAppearance(QAbstractSlider* self, bool invertedAppearance) {
	self->setInvertedAppearance(invertedAppearance);
}

bool QAbstractSlider_invertedAppearance(const QAbstractSlider* self) {
	return self->invertedAppearance();
}

void QAbstractSlider_setInvertedControls(QAbstractSlider* self, bool invertedControls) {
	self->setInvertedControls(invertedControls);
}

bool QAbstractSlider_invertedControls(const QAbstractSlider* self) {
	return self->invertedControls();
}

int QAbstractSlider_value(const QAbstractSlider* self) {
	return self->value();
}

void QAbstractSlider_triggerAction(QAbstractSlider* self, int action) {
	self->triggerAction(static_cast<QAbstractSlider::SliderAction>(action));
}

void QAbstractSlider_setValue(QAbstractSlider* self, int value) {
	self->setValue(static_cast<int>(value));
}

void QAbstractSlider_setOrientation(QAbstractSlider* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

void QAbstractSlider_setRange(QAbstractSlider* self, int min, int max) {
	self->setRange(static_cast<int>(min), static_cast<int>(max));
}

void QAbstractSlider_valueChanged(QAbstractSlider* self, int value) {
	self->valueChanged(static_cast<int>(value));
}

void QAbstractSlider_connect_valueChanged(QAbstractSlider* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)(int)>(&QAbstractSlider::valueChanged), self, [=](int value) {
		int sigval1 = value;
		miqt_exec_callback_QAbstractSlider_valueChanged(slot, sigval1);
	});
}

void QAbstractSlider_sliderPressed(QAbstractSlider* self) {
	self->sliderPressed();
}

void QAbstractSlider_connect_sliderPressed(QAbstractSlider* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)()>(&QAbstractSlider::sliderPressed), self, [=]() {
		miqt_exec_callback_QAbstractSlider_sliderPressed(slot);
	});
}

void QAbstractSlider_sliderMoved(QAbstractSlider* self, int position) {
	self->sliderMoved(static_cast<int>(position));
}

void QAbstractSlider_connect_sliderMoved(QAbstractSlider* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)(int)>(&QAbstractSlider::sliderMoved), self, [=](int position) {
		int sigval1 = position;
		miqt_exec_callback_QAbstractSlider_sliderMoved(slot, sigval1);
	});
}

void QAbstractSlider_sliderReleased(QAbstractSlider* self) {
	self->sliderReleased();
}

void QAbstractSlider_connect_sliderReleased(QAbstractSlider* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)()>(&QAbstractSlider::sliderReleased), self, [=]() {
		miqt_exec_callback_QAbstractSlider_sliderReleased(slot);
	});
}

void QAbstractSlider_rangeChanged(QAbstractSlider* self, int min, int max) {
	self->rangeChanged(static_cast<int>(min), static_cast<int>(max));
}

void QAbstractSlider_connect_rangeChanged(QAbstractSlider* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)(int, int)>(&QAbstractSlider::rangeChanged), self, [=](int min, int max) {
		int sigval1 = min;
		int sigval2 = max;
		miqt_exec_callback_QAbstractSlider_rangeChanged(slot, sigval1, sigval2);
	});
}

void QAbstractSlider_actionTriggered(QAbstractSlider* self, int action) {
	self->actionTriggered(static_cast<int>(action));
}

void QAbstractSlider_connect_actionTriggered(QAbstractSlider* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)(int)>(&QAbstractSlider::actionTriggered), self, [=](int action) {
		int sigval1 = action;
		miqt_exec_callback_QAbstractSlider_actionTriggered(slot, sigval1);
	});
}

struct miqt_string QAbstractSlider_tr2(const char* s, const char* c) {
	QString _ret = QAbstractSlider::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSlider_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractSlider::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSlider_trUtf82(const char* s, const char* c) {
	QString _ret = QAbstractSlider::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSlider_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractSlider::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractSlider_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAbstractSlider_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_event(e);
}

bool QAbstractSlider_override_virtual_sliderChange(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sliderChange = slot;
	return true;
}

void QAbstractSlider_virtualbase_sliderChange(void* self, int change) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_sliderChange(change);
}

bool QAbstractSlider_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_keyPressEvent(void* self, QKeyEvent* ev) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_keyPressEvent(ev);
}

bool QAbstractSlider_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_timerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_timerEvent(param1);
}

bool QAbstractSlider_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_wheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_wheelEvent(e);
}

bool QAbstractSlider_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_changeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_changeEvent(e);
}

bool QAbstractSlider_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QAbstractSlider_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_devType();
}

bool QAbstractSlider_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QAbstractSlider_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_setVisible(visible);
}

bool QAbstractSlider_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QAbstractSlider_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_sizeHint();
}

bool QAbstractSlider_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QAbstractSlider_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_minimumSizeHint();
}

bool QAbstractSlider_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QAbstractSlider_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_heightForWidth(param1);
}

bool QAbstractSlider_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QAbstractSlider_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_hasHeightForWidth();
}

bool QAbstractSlider_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QAbstractSlider_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_paintEngine();
}

bool QAbstractSlider_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_mousePressEvent(event);
}

bool QAbstractSlider_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QAbstractSlider_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QAbstractSlider_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QAbstractSlider_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QAbstractSlider_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_focusInEvent(event);
}

bool QAbstractSlider_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_focusOutEvent(event);
}

bool QAbstractSlider_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_enterEvent(event);
}

bool QAbstractSlider_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_leaveEvent(event);
}

bool QAbstractSlider_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_paintEvent(event);
}

bool QAbstractSlider_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_moveEvent(event);
}

bool QAbstractSlider_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_resizeEvent(event);
}

bool QAbstractSlider_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_closeEvent(event);
}

bool QAbstractSlider_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QAbstractSlider_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_tabletEvent(event);
}

bool QAbstractSlider_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_actionEvent(event);
}

bool QAbstractSlider_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QAbstractSlider_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QAbstractSlider_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QAbstractSlider_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_dropEvent(event);
}

bool QAbstractSlider_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_showEvent(event);
}

bool QAbstractSlider_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_hideEvent(event);
}

bool QAbstractSlider_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QAbstractSlider_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QAbstractSlider_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QAbstractSlider_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_metric(param1);
}

bool QAbstractSlider_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QAbstractSlider_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_initPainter(painter);
}

bool QAbstractSlider_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QAbstractSlider_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_redirected(offset);
}

bool QAbstractSlider_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QAbstractSlider_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_sharedPainter();
}

bool QAbstractSlider_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QAbstractSlider_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QAbstractSlider_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QAbstractSlider_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QAbstractSlider_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QAbstractSlider_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAbstractSlider_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAbstractSlider_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_childEvent(event);
}

bool QAbstractSlider_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_customEvent(event);
}

bool QAbstractSlider_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAbstractSlider_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_connectNotify(signal);
}

bool QAbstractSlider_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAbstractSlider_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_disconnectNotify(signal);
}

void QAbstractSlider_protectedbase_setRepeatAction(bool* _dynamic_cast_ok, void* self, int action) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setRepeatAction(static_cast<MiqtVirtualQAbstractSlider::SliderAction>(action));

}

int QAbstractSlider_protectedbase_repeatAction(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	MiqtVirtualQAbstractSlider::SliderAction _ret = self_cast->repeatAction();
	return static_cast<int>(_ret);

}

void QAbstractSlider_protectedbase_setRepeatAction2(bool* _dynamic_cast_ok, void* self, int action, int thresholdTime) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setRepeatAction(static_cast<MiqtVirtualQAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime));

}

void QAbstractSlider_protectedbase_setRepeatAction3(bool* _dynamic_cast_ok, void* self, int action, int thresholdTime, int repeatTime) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setRepeatAction(static_cast<MiqtVirtualQAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime), static_cast<int>(repeatTime));

}

void QAbstractSlider_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QAbstractSlider_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QAbstractSlider_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QAbstractSlider_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QAbstractSlider_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QAbstractSlider_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAbstractSlider_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAbstractSlider_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAbstractSlider_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAbstractSlider_delete(QAbstractSlider* self) {
	delete self;
}

