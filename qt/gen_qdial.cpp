#include <QAbstractSlider>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDial>
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
#include <QStyleOptionSlider>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qdial.h>
#include "gen_qdial.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QDial_sizeHint(const QDial*, intptr_t);
QSize* miqt_exec_callback_QDial_minimumSizeHint(const QDial*, intptr_t);
bool miqt_exec_callback_QDial_event(QDial*, intptr_t, QEvent*);
void miqt_exec_callback_QDial_resizeEvent(QDial*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QDial_paintEvent(QDial*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QDial_mousePressEvent(QDial*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDial_mouseReleaseEvent(QDial*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDial_mouseMoveEvent(QDial*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDial_sliderChange(QDial*, intptr_t, int);
void miqt_exec_callback_QDial_keyPressEvent(QDial*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDial_timerEvent(QDial*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDial_wheelEvent(QDial*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDial_changeEvent(QDial*, intptr_t, QEvent*);
int miqt_exec_callback_QDial_devType(const QDial*, intptr_t);
void miqt_exec_callback_QDial_setVisible(QDial*, intptr_t, bool);
int miqt_exec_callback_QDial_heightForWidth(const QDial*, intptr_t, int);
bool miqt_exec_callback_QDial_hasHeightForWidth(const QDial*, intptr_t);
QPaintEngine* miqt_exec_callback_QDial_paintEngine(const QDial*, intptr_t);
void miqt_exec_callback_QDial_mouseDoubleClickEvent(QDial*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDial_keyReleaseEvent(QDial*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDial_focusInEvent(QDial*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDial_focusOutEvent(QDial*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDial_enterEvent(QDial*, intptr_t, QEvent*);
void miqt_exec_callback_QDial_leaveEvent(QDial*, intptr_t, QEvent*);
void miqt_exec_callback_QDial_moveEvent(QDial*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QDial_closeEvent(QDial*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QDial_contextMenuEvent(QDial*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QDial_tabletEvent(QDial*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QDial_actionEvent(QDial*, intptr_t, QActionEvent*);
void miqt_exec_callback_QDial_dragEnterEvent(QDial*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QDial_dragMoveEvent(QDial*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QDial_dragLeaveEvent(QDial*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QDial_dropEvent(QDial*, intptr_t, QDropEvent*);
void miqt_exec_callback_QDial_showEvent(QDial*, intptr_t, QShowEvent*);
void miqt_exec_callback_QDial_hideEvent(QDial*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QDial_nativeEvent(QDial*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QDial_metric(const QDial*, intptr_t, int);
void miqt_exec_callback_QDial_initPainter(const QDial*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QDial_redirected(const QDial*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QDial_sharedPainter(const QDial*, intptr_t);
void miqt_exec_callback_QDial_inputMethodEvent(QDial*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QDial_inputMethodQuery(const QDial*, intptr_t, int);
bool miqt_exec_callback_QDial_focusNextPrevChild(QDial*, intptr_t, bool);
bool miqt_exec_callback_QDial_eventFilter(QDial*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDial_childEvent(QDial*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDial_customEvent(QDial*, intptr_t, QEvent*);
void miqt_exec_callback_QDial_connectNotify(QDial*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDial_disconnectNotify(QDial*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDial final : public QDial {
public:

	MiqtVirtualQDial(QWidget* parent): QDial(parent) {};
	MiqtVirtualQDial(): QDial() {};

	virtual ~MiqtVirtualQDial() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QDial::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDial_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QDial::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QDial::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDial_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QDial::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QDial::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QDial_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QDial::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* re) override {
		if (handle__resizeEvent == 0) {
			QDial::resizeEvent(re);
			return;
		}
		
		QResizeEvent* sigval1 = re;

		miqt_exec_callback_QDial_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* re) {

		QDial::resizeEvent(re);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* pe) override {
		if (handle__paintEvent == 0) {
			QDial::paintEvent(pe);
			return;
		}
		
		QPaintEvent* sigval1 = pe;

		miqt_exec_callback_QDial_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* pe) {

		QDial::paintEvent(pe);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* me) override {
		if (handle__mousePressEvent == 0) {
			QDial::mousePressEvent(me);
			return;
		}
		
		QMouseEvent* sigval1 = me;

		miqt_exec_callback_QDial_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* me) {

		QDial::mousePressEvent(me);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* me) override {
		if (handle__mouseReleaseEvent == 0) {
			QDial::mouseReleaseEvent(me);
			return;
		}
		
		QMouseEvent* sigval1 = me;

		miqt_exec_callback_QDial_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* me) {

		QDial::mouseReleaseEvent(me);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* me) override {
		if (handle__mouseMoveEvent == 0) {
			QDial::mouseMoveEvent(me);
			return;
		}
		
		QMouseEvent* sigval1 = me;

		miqt_exec_callback_QDial_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* me) {

		QDial::mouseMoveEvent(me);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sliderChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void sliderChange(QAbstractSlider::SliderChange change) override {
		if (handle__sliderChange == 0) {
			QDial::sliderChange(change);
			return;
		}
		
		QAbstractSlider::SliderChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);

		miqt_exec_callback_QDial_sliderChange(this, handle__sliderChange, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_sliderChange(int change) {

		QDial::sliderChange(static_cast<QAbstractSlider::SliderChange>(change));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* ev) override {
		if (handle__keyPressEvent == 0) {
			QDial::keyPressEvent(ev);
			return;
		}
		
		QKeyEvent* sigval1 = ev;

		miqt_exec_callback_QDial_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* ev) {

		QDial::keyPressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__timerEvent == 0) {
			QDial::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QDial_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* param1) {

		QDial::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__wheelEvent == 0) {
			QDial::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QDial_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* e) {

		QDial::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__changeEvent == 0) {
			QDial::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QDial_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* e) {

		QDial::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QDial::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QDial_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QDial::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QDial::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QDial_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QDial::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QDial::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QDial_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QDial::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QDial::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QDial_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QDial::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QDial::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QDial_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QDial::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QDial::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDial_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QDial::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QDial::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDial_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QDial::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QDial::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDial_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QDial::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QDial::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDial_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QDial::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QDial::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDial_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QDial::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QDial::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDial_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QDial::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QDial::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QDial_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QDial::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QDial::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QDial_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QDial::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QDial::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QDial_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QDial::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QDial::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QDial_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QDial::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QDial::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QDial_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QDial::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QDial::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QDial_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QDial::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QDial::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QDial_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QDial::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QDial::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QDial_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QDial::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QDial::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QDial_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QDial::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QDial::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QDial_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QDial::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QDial::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QDial_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QDial::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QDial::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QDial_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QDial::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QDial::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QDial_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QDial::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QDial::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QDial_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QDial::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QDial::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QDial_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QDial::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QDial::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QDial_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QDial::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QDial::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QDial_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QDial::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QDial::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QDial_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QDial::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QDial::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QDial_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QDial::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDial::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDial_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QDial::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDial::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDial_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QDial::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDial::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDial_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QDial::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDial::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDial_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QDial::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDial::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDial_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QDial::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QDial_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionSlider* option);
	friend void QDial_protectedbase_setRepeatAction(bool* _dynamic_cast_ok, void* self, int action);
	friend int QDial_protectedbase_repeatAction(bool* _dynamic_cast_ok, const void* self);
	friend void QDial_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QDial_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QDial_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QDial_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QDial_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QDial_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDial_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDial_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDial_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDial* QDial_new(QWidget* parent) {
	return new MiqtVirtualQDial(parent);
}

QDial* QDial_new2() {
	return new MiqtVirtualQDial();
}

void QDial_virtbase(QDial* src, QAbstractSlider** outptr_QAbstractSlider) {
	*outptr_QAbstractSlider = static_cast<QAbstractSlider*>(src);
}

QMetaObject* QDial_metaObject(const QDial* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDial_metacast(QDial* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDial_tr(const char* s) {
	QString _ret = QDial::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDial_trUtf8(const char* s) {
	QString _ret = QDial::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDial_wrapping(const QDial* self) {
	return self->wrapping();
}

int QDial_notchSize(const QDial* self) {
	return self->notchSize();
}

void QDial_setNotchTarget(QDial* self, double target) {
	self->setNotchTarget(static_cast<double>(target));
}

double QDial_notchTarget(const QDial* self) {
	qreal _ret = self->notchTarget();
	return static_cast<double>(_ret);
}

bool QDial_notchesVisible(const QDial* self) {
	return self->notchesVisible();
}

QSize* QDial_sizeHint(const QDial* self) {
	return new QSize(self->sizeHint());
}

QSize* QDial_minimumSizeHint(const QDial* self) {
	return new QSize(self->minimumSizeHint());
}

void QDial_setNotchesVisible(QDial* self, bool visible) {
	self->setNotchesVisible(visible);
}

void QDial_setWrapping(QDial* self, bool on) {
	self->setWrapping(on);
}

struct miqt_string QDial_tr2(const char* s, const char* c) {
	QString _ret = QDial::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDial_tr3(const char* s, const char* c, int n) {
	QString _ret = QDial::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDial_trUtf82(const char* s, const char* c) {
	QString _ret = QDial::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDial_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QDial::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDial_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QDial_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_sizeHint();
}

bool QDial_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QDial_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_minimumSizeHint();
}

bool QDial_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QDial_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQDial*)(self) )->virtualbase_event(e);
}

bool QDial_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QDial_virtualbase_resizeEvent(void* self, QResizeEvent* re) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_resizeEvent(re);
}

bool QDial_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QDial_virtualbase_paintEvent(void* self, QPaintEvent* pe) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_paintEvent(pe);
}

bool QDial_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QDial_virtualbase_mousePressEvent(void* self, QMouseEvent* me) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_mousePressEvent(me);
}

bool QDial_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QDial_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* me) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_mouseReleaseEvent(me);
}

bool QDial_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QDial_virtualbase_mouseMoveEvent(void* self, QMouseEvent* me) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_mouseMoveEvent(me);
}

bool QDial_override_virtual_sliderChange(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sliderChange = slot;
	return true;
}

void QDial_virtualbase_sliderChange(void* self, int change) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_sliderChange(change);
}

bool QDial_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QDial_virtualbase_keyPressEvent(void* self, QKeyEvent* ev) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_keyPressEvent(ev);
}

bool QDial_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QDial_virtualbase_timerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_timerEvent(param1);
}

bool QDial_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QDial_virtualbase_wheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_wheelEvent(e);
}

bool QDial_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QDial_virtualbase_changeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_changeEvent(e);
}

bool QDial_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QDial_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_devType();
}

bool QDial_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QDial_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_setVisible(visible);
}

bool QDial_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QDial_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_heightForWidth(param1);
}

bool QDial_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QDial_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_hasHeightForWidth();
}

bool QDial_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QDial_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_paintEngine();
}

bool QDial_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QDial_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QDial_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QDial_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QDial_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QDial_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_focusInEvent(event);
}

bool QDial_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QDial_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_focusOutEvent(event);
}

bool QDial_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QDial_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_enterEvent(event);
}

bool QDial_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QDial_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_leaveEvent(event);
}

bool QDial_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QDial_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_moveEvent(event);
}

bool QDial_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QDial_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_closeEvent(event);
}

bool QDial_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QDial_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QDial_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QDial_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_tabletEvent(event);
}

bool QDial_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QDial_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_actionEvent(event);
}

bool QDial_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QDial_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QDial_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QDial_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QDial_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QDial_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QDial_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QDial_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_dropEvent(event);
}

bool QDial_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QDial_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_showEvent(event);
}

bool QDial_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QDial_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_hideEvent(event);
}

bool QDial_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QDial_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQDial*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QDial_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QDial_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_metric(param1);
}

bool QDial_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QDial_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQDial*)(self) )->virtualbase_initPainter(painter);
}

bool QDial_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QDial_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_redirected(offset);
}

bool QDial_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QDial_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_sharedPainter();
}

bool QDial_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QDial_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QDial_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QDial_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QDial_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QDial_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQDial*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QDial_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDial_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQDial*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QDial_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QDial_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_childEvent(event);
}

bool QDial_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QDial_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_customEvent(event);
}

bool QDial_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QDial_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_connectNotify(signal);
}

bool QDial_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDial_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_disconnectNotify(signal);
}

void QDial_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionSlider* option) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

void QDial_protectedbase_setRepeatAction(bool* _dynamic_cast_ok, void* self, int action) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setRepeatAction(static_cast<MiqtVirtualQDial::SliderAction>(action));

}

int QDial_protectedbase_repeatAction(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	MiqtVirtualQDial::SliderAction _ret = self_cast->repeatAction();
	return static_cast<int>(_ret);

}

void QDial_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QDial_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QDial_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QDial_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QDial_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QDial_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QDial_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QDial_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QDial_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QDial_delete(QDial* self) {
	delete self;
}

