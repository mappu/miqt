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
#include <QResizeEvent>
#include <QScrollBar>
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
#include <qscrollbar.h>
#include "gen_qscrollbar.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QScrollBar_sizeHint(const QScrollBar*, intptr_t);
bool miqt_exec_callback_QScrollBar_event(QScrollBar*, intptr_t, QEvent*);
void miqt_exec_callback_QScrollBar_wheelEvent(QScrollBar*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QScrollBar_paintEvent(QScrollBar*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QScrollBar_mousePressEvent(QScrollBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QScrollBar_mouseReleaseEvent(QScrollBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QScrollBar_mouseMoveEvent(QScrollBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QScrollBar_hideEvent(QScrollBar*, intptr_t, QHideEvent*);
void miqt_exec_callback_QScrollBar_sliderChange(QScrollBar*, intptr_t, int);
void miqt_exec_callback_QScrollBar_contextMenuEvent(QScrollBar*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QScrollBar_initStyleOption(const QScrollBar*, intptr_t, QStyleOptionSlider*);
void miqt_exec_callback_QScrollBar_keyPressEvent(QScrollBar*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QScrollBar_timerEvent(QScrollBar*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QScrollBar_changeEvent(QScrollBar*, intptr_t, QEvent*);
int miqt_exec_callback_QScrollBar_devType(const QScrollBar*, intptr_t);
void miqt_exec_callback_QScrollBar_setVisible(QScrollBar*, intptr_t, bool);
QSize* miqt_exec_callback_QScrollBar_minimumSizeHint(const QScrollBar*, intptr_t);
int miqt_exec_callback_QScrollBar_heightForWidth(const QScrollBar*, intptr_t, int);
bool miqt_exec_callback_QScrollBar_hasHeightForWidth(const QScrollBar*, intptr_t);
QPaintEngine* miqt_exec_callback_QScrollBar_paintEngine(const QScrollBar*, intptr_t);
void miqt_exec_callback_QScrollBar_mouseDoubleClickEvent(QScrollBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QScrollBar_keyReleaseEvent(QScrollBar*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QScrollBar_focusInEvent(QScrollBar*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QScrollBar_focusOutEvent(QScrollBar*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QScrollBar_enterEvent(QScrollBar*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QScrollBar_leaveEvent(QScrollBar*, intptr_t, QEvent*);
void miqt_exec_callback_QScrollBar_moveEvent(QScrollBar*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QScrollBar_resizeEvent(QScrollBar*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QScrollBar_closeEvent(QScrollBar*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QScrollBar_tabletEvent(QScrollBar*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QScrollBar_actionEvent(QScrollBar*, intptr_t, QActionEvent*);
void miqt_exec_callback_QScrollBar_dragEnterEvent(QScrollBar*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QScrollBar_dragMoveEvent(QScrollBar*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QScrollBar_dragLeaveEvent(QScrollBar*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QScrollBar_dropEvent(QScrollBar*, intptr_t, QDropEvent*);
void miqt_exec_callback_QScrollBar_showEvent(QScrollBar*, intptr_t, QShowEvent*);
bool miqt_exec_callback_QScrollBar_nativeEvent(QScrollBar*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QScrollBar_metric(const QScrollBar*, intptr_t, int);
void miqt_exec_callback_QScrollBar_initPainter(const QScrollBar*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QScrollBar_redirected(const QScrollBar*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QScrollBar_sharedPainter(const QScrollBar*, intptr_t);
void miqt_exec_callback_QScrollBar_inputMethodEvent(QScrollBar*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QScrollBar_inputMethodQuery(const QScrollBar*, intptr_t, int);
bool miqt_exec_callback_QScrollBar_focusNextPrevChild(QScrollBar*, intptr_t, bool);
bool miqt_exec_callback_QScrollBar_eventFilter(QScrollBar*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QScrollBar_childEvent(QScrollBar*, intptr_t, QChildEvent*);
void miqt_exec_callback_QScrollBar_customEvent(QScrollBar*, intptr_t, QEvent*);
void miqt_exec_callback_QScrollBar_connectNotify(QScrollBar*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QScrollBar_disconnectNotify(QScrollBar*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQScrollBar final : public QScrollBar {
public:

	MiqtVirtualQScrollBar(QWidget* parent): QScrollBar(parent) {};
	MiqtVirtualQScrollBar(): QScrollBar() {};
	MiqtVirtualQScrollBar(Qt::Orientation param1): QScrollBar(param1) {};
	MiqtVirtualQScrollBar(Qt::Orientation param1, QWidget* parent): QScrollBar(param1, parent) {};

	virtual ~MiqtVirtualQScrollBar() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QScrollBar::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QScrollBar_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QScrollBar::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QScrollBar::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QScrollBar_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QScrollBar::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__wheelEvent == 0) {
			QScrollBar::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* param1) {

		QScrollBar::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QScrollBar::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* param1) {

		QScrollBar::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__mousePressEvent == 0) {
			QScrollBar::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* param1) {

		QScrollBar::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__mouseReleaseEvent == 0) {
			QScrollBar::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* param1) {

		QScrollBar::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__mouseMoveEvent == 0) {
			QScrollBar::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* param1) {

		QScrollBar::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* param1) override {
		if (handle__hideEvent == 0) {
			QScrollBar::hideEvent(param1);
			return;
		}
		
		QHideEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* param1) {

		QScrollBar::hideEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sliderChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void sliderChange(QAbstractSlider::SliderChange change) override {
		if (handle__sliderChange == 0) {
			QScrollBar::sliderChange(change);
			return;
		}
		
		QAbstractSlider::SliderChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);

		miqt_exec_callback_QScrollBar_sliderChange(this, handle__sliderChange, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_sliderChange(int change) {

		QScrollBar::sliderChange(static_cast<QAbstractSlider::SliderChange>(change));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QScrollBar::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QScrollBar::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionSlider* option) const override {
		if (handle__initStyleOption == 0) {
			QScrollBar::initStyleOption(option);
			return;
		}
		
		QStyleOptionSlider* sigval1 = option;

		miqt_exec_callback_QScrollBar_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initStyleOption(QStyleOptionSlider* option) const {

		QScrollBar::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* ev) override {
		if (handle__keyPressEvent == 0) {
			QScrollBar::keyPressEvent(ev);
			return;
		}
		
		QKeyEvent* sigval1 = ev;

		miqt_exec_callback_QScrollBar_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* ev) {

		QScrollBar::keyPressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__timerEvent == 0) {
			QScrollBar::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* param1) {

		QScrollBar::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__changeEvent == 0) {
			QScrollBar::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QScrollBar_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* e) {

		QScrollBar::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QScrollBar::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QScrollBar_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QScrollBar::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QScrollBar::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QScrollBar_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QScrollBar::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QScrollBar::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QScrollBar_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QScrollBar::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QScrollBar::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QScrollBar_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QScrollBar::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QScrollBar::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QScrollBar_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QScrollBar::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QScrollBar::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QScrollBar_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QScrollBar::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QScrollBar::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QScrollBar::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QScrollBar::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QScrollBar::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QScrollBar::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QScrollBar::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QScrollBar::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QScrollBar::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QScrollBar::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QScrollBar::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QScrollBar::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QScrollBar::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QScrollBar::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QScrollBar::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QScrollBar::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QScrollBar::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QScrollBar::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QScrollBar::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QScrollBar::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QScrollBar::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QScrollBar::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QScrollBar::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QScrollBar::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QScrollBar::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QScrollBar::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QScrollBar::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QScrollBar::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QScrollBar::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QScrollBar::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QScrollBar::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QScrollBar::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QScrollBar::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QScrollBar::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QScrollBar_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QScrollBar::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QScrollBar::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QScrollBar_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QScrollBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QScrollBar::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QScrollBar_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QScrollBar::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QScrollBar::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QScrollBar_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QScrollBar::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QScrollBar::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QScrollBar_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QScrollBar::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QScrollBar::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QScrollBar::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QScrollBar::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QScrollBar_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QScrollBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QScrollBar::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QScrollBar_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QScrollBar::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QScrollBar::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QScrollBar_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QScrollBar::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QScrollBar::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QScrollBar::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QScrollBar::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QScrollBar::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QScrollBar::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QScrollBar_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QScrollBar::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QScrollBar::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QScrollBar_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QScrollBar::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QScrollBar_protectedbase_setRepeatAction(bool* _dynamic_cast_ok, void* self, int action);
	friend int QScrollBar_protectedbase_repeatAction(bool* _dynamic_cast_ok, const void* self);
	friend void QScrollBar_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QScrollBar_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QScrollBar_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QScrollBar_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QScrollBar_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QScrollBar_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QScrollBar_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QScrollBar_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QScrollBar_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QScrollBar* QScrollBar_new(QWidget* parent) {
	return new MiqtVirtualQScrollBar(parent);
}

QScrollBar* QScrollBar_new2() {
	return new MiqtVirtualQScrollBar();
}

QScrollBar* QScrollBar_new3(int param1) {
	return new MiqtVirtualQScrollBar(static_cast<Qt::Orientation>(param1));
}

QScrollBar* QScrollBar_new4(int param1, QWidget* parent) {
	return new MiqtVirtualQScrollBar(static_cast<Qt::Orientation>(param1), parent);
}

void QScrollBar_virtbase(QScrollBar* src, QAbstractSlider** outptr_QAbstractSlider) {
	*outptr_QAbstractSlider = static_cast<QAbstractSlider*>(src);
}

QMetaObject* QScrollBar_metaObject(const QScrollBar* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScrollBar_metacast(QScrollBar* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScrollBar_tr(const char* s) {
	QString _ret = QScrollBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QScrollBar_sizeHint(const QScrollBar* self) {
	return new QSize(self->sizeHint());
}

bool QScrollBar_event(QScrollBar* self, QEvent* event) {
	return self->event(event);
}

struct miqt_string QScrollBar_tr2(const char* s, const char* c) {
	QString _ret = QScrollBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScrollBar_tr3(const char* s, const char* c, int n) {
	QString _ret = QScrollBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScrollBar_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QScrollBar_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_sizeHint();
}

bool QScrollBar_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QScrollBar_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQScrollBar*)(self) )->virtualbase_event(event);
}

bool QScrollBar_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QScrollBar_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_wheelEvent(param1);
}

bool QScrollBar_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QScrollBar_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_paintEvent(param1);
}

bool QScrollBar_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QScrollBar_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_mousePressEvent(param1);
}

bool QScrollBar_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QScrollBar_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_mouseReleaseEvent(param1);
}

bool QScrollBar_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QScrollBar_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_mouseMoveEvent(param1);
}

bool QScrollBar_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QScrollBar_virtualbase_hideEvent(void* self, QHideEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_hideEvent(param1);
}

bool QScrollBar_override_virtual_sliderChange(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sliderChange = slot;
	return true;
}

void QScrollBar_virtualbase_sliderChange(void* self, int change) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_sliderChange(change);
}

bool QScrollBar_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QScrollBar_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QScrollBar_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QScrollBar_virtualbase_initStyleOption(const void* self, QStyleOptionSlider* option) {
	( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_initStyleOption(option);
}

bool QScrollBar_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QScrollBar_virtualbase_keyPressEvent(void* self, QKeyEvent* ev) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_keyPressEvent(ev);
}

bool QScrollBar_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QScrollBar_virtualbase_timerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_timerEvent(param1);
}

bool QScrollBar_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QScrollBar_virtualbase_changeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_changeEvent(e);
}

bool QScrollBar_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QScrollBar_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_devType();
}

bool QScrollBar_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QScrollBar_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_setVisible(visible);
}

bool QScrollBar_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QScrollBar_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_minimumSizeHint();
}

bool QScrollBar_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QScrollBar_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_heightForWidth(param1);
}

bool QScrollBar_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QScrollBar_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_hasHeightForWidth();
}

bool QScrollBar_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QScrollBar_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_paintEngine();
}

bool QScrollBar_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QScrollBar_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QScrollBar_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QScrollBar_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QScrollBar_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QScrollBar_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_focusInEvent(event);
}

bool QScrollBar_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QScrollBar_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_focusOutEvent(event);
}

bool QScrollBar_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QScrollBar_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_enterEvent(event);
}

bool QScrollBar_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QScrollBar_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_leaveEvent(event);
}

bool QScrollBar_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QScrollBar_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_moveEvent(event);
}

bool QScrollBar_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QScrollBar_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_resizeEvent(event);
}

bool QScrollBar_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QScrollBar_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_closeEvent(event);
}

bool QScrollBar_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QScrollBar_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_tabletEvent(event);
}

bool QScrollBar_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QScrollBar_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_actionEvent(event);
}

bool QScrollBar_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QScrollBar_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QScrollBar_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QScrollBar_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QScrollBar_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QScrollBar_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QScrollBar_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QScrollBar_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_dropEvent(event);
}

bool QScrollBar_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QScrollBar_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_showEvent(event);
}

bool QScrollBar_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QScrollBar_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQScrollBar*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QScrollBar_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QScrollBar_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_metric(param1);
}

bool QScrollBar_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QScrollBar_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_initPainter(painter);
}

bool QScrollBar_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QScrollBar_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_redirected(offset);
}

bool QScrollBar_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QScrollBar_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_sharedPainter();
}

bool QScrollBar_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QScrollBar_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QScrollBar_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QScrollBar_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QScrollBar_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QScrollBar_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQScrollBar*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QScrollBar_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QScrollBar_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQScrollBar*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QScrollBar_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QScrollBar_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_childEvent(event);
}

bool QScrollBar_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QScrollBar_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_customEvent(event);
}

bool QScrollBar_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QScrollBar_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_connectNotify(signal);
}

bool QScrollBar_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QScrollBar_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_disconnectNotify(signal);
}

void QScrollBar_protectedbase_setRepeatAction(bool* _dynamic_cast_ok, void* self, int action) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setRepeatAction(static_cast<MiqtVirtualQScrollBar::SliderAction>(action));

}

int QScrollBar_protectedbase_repeatAction(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	MiqtVirtualQScrollBar::SliderAction _ret = self_cast->repeatAction();
	return static_cast<int>(_ret);

}

void QScrollBar_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QScrollBar_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QScrollBar_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QScrollBar_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QScrollBar_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QScrollBar_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QScrollBar_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QScrollBar_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QScrollBar_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QScrollBar_delete(QScrollBar* self) {
	delete self;
}

