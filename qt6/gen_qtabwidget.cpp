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
#include <QStyleOptionTabWidgetFrame>
#include <QTabBar>
#include <QTabWidget>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtabwidget.h>
#include "gen_qtabwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QTabWidget_currentChanged(intptr_t, int);
void miqt_exec_callback_QTabWidget_tabCloseRequested(intptr_t, int);
void miqt_exec_callback_QTabWidget_tabBarClicked(intptr_t, int);
void miqt_exec_callback_QTabWidget_tabBarDoubleClicked(intptr_t, int);
QSize* miqt_exec_callback_QTabWidget_sizeHint(const QTabWidget*, intptr_t);
QSize* miqt_exec_callback_QTabWidget_minimumSizeHint(const QTabWidget*, intptr_t);
int miqt_exec_callback_QTabWidget_heightForWidth(const QTabWidget*, intptr_t, int);
bool miqt_exec_callback_QTabWidget_hasHeightForWidth(const QTabWidget*, intptr_t);
void miqt_exec_callback_QTabWidget_tabInserted(QTabWidget*, intptr_t, int);
void miqt_exec_callback_QTabWidget_tabRemoved(QTabWidget*, intptr_t, int);
void miqt_exec_callback_QTabWidget_showEvent(QTabWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QTabWidget_resizeEvent(QTabWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QTabWidget_keyPressEvent(QTabWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTabWidget_paintEvent(QTabWidget*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QTabWidget_changeEvent(QTabWidget*, intptr_t, QEvent*);
bool miqt_exec_callback_QTabWidget_event(QTabWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTabWidget_initStyleOption(const QTabWidget*, intptr_t, QStyleOptionTabWidgetFrame*);
int miqt_exec_callback_QTabWidget_devType(const QTabWidget*, intptr_t);
void miqt_exec_callback_QTabWidget_setVisible(QTabWidget*, intptr_t, bool);
QPaintEngine* miqt_exec_callback_QTabWidget_paintEngine(const QTabWidget*, intptr_t);
void miqt_exec_callback_QTabWidget_mousePressEvent(QTabWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTabWidget_mouseReleaseEvent(QTabWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTabWidget_mouseDoubleClickEvent(QTabWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTabWidget_mouseMoveEvent(QTabWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTabWidget_wheelEvent(QTabWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QTabWidget_keyReleaseEvent(QTabWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTabWidget_focusInEvent(QTabWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTabWidget_focusOutEvent(QTabWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTabWidget_enterEvent(QTabWidget*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QTabWidget_leaveEvent(QTabWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTabWidget_moveEvent(QTabWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QTabWidget_closeEvent(QTabWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QTabWidget_contextMenuEvent(QTabWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QTabWidget_tabletEvent(QTabWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QTabWidget_actionEvent(QTabWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QTabWidget_dragEnterEvent(QTabWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QTabWidget_dragMoveEvent(QTabWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QTabWidget_dragLeaveEvent(QTabWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QTabWidget_dropEvent(QTabWidget*, intptr_t, QDropEvent*);
void miqt_exec_callback_QTabWidget_hideEvent(QTabWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QTabWidget_nativeEvent(QTabWidget*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QTabWidget_metric(const QTabWidget*, intptr_t, int);
void miqt_exec_callback_QTabWidget_initPainter(const QTabWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QTabWidget_redirected(const QTabWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QTabWidget_sharedPainter(const QTabWidget*, intptr_t);
void miqt_exec_callback_QTabWidget_inputMethodEvent(QTabWidget*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QTabWidget_inputMethodQuery(const QTabWidget*, intptr_t, int);
bool miqt_exec_callback_QTabWidget_focusNextPrevChild(QTabWidget*, intptr_t, bool);
bool miqt_exec_callback_QTabWidget_eventFilter(QTabWidget*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTabWidget_timerEvent(QTabWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTabWidget_childEvent(QTabWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTabWidget_customEvent(QTabWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTabWidget_connectNotify(QTabWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTabWidget_disconnectNotify(QTabWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTabWidget final : public QTabWidget {
public:

	MiqtVirtualQTabWidget(QWidget* parent): QTabWidget(parent) {};
	MiqtVirtualQTabWidget(): QTabWidget() {};

	virtual ~MiqtVirtualQTabWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QTabWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTabWidget_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QTabWidget::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QTabWidget::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTabWidget_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QTabWidget::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int width) const override {
		if (handle__heightForWidth == 0) {
			return QTabWidget::heightForWidth(width);
		}
		
		int sigval1 = width;

		int callback_return_value = miqt_exec_callback_QTabWidget_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int width) const {

		return QTabWidget::heightForWidth(static_cast<int>(width));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QTabWidget::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QTabWidget_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QTabWidget::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabInserted(int index) override {
		if (handle__tabInserted == 0) {
			QTabWidget::tabInserted(index);
			return;
		}
		
		int sigval1 = index;

		miqt_exec_callback_QTabWidget_tabInserted(this, handle__tabInserted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabInserted(int index) {

		QTabWidget::tabInserted(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabRemoved(int index) override {
		if (handle__tabRemoved == 0) {
			QTabWidget::tabRemoved(index);
			return;
		}
		
		int sigval1 = index;

		miqt_exec_callback_QTabWidget_tabRemoved(this, handle__tabRemoved, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabRemoved(int index) {

		QTabWidget::tabRemoved(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QTabWidget::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QTabWidget_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* param1) {

		QTabWidget::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QTabWidget::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QTabWidget_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* param1) {

		QTabWidget::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QTabWidget::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QTabWidget_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QTabWidget::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QTabWidget::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QTabWidget_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* param1) {

		QTabWidget::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QTabWidget::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QTabWidget_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QTabWidget::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QTabWidget::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QTabWidget_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* param1) {

		return QTabWidget::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionTabWidgetFrame* option) const override {
		if (handle__initStyleOption == 0) {
			QTabWidget::initStyleOption(option);
			return;
		}
		
		QStyleOptionTabWidgetFrame* sigval1 = option;

		miqt_exec_callback_QTabWidget_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initStyleOption(QStyleOptionTabWidgetFrame* option) const {

		QTabWidget::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QTabWidget::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QTabWidget_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QTabWidget::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QTabWidget::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QTabWidget_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QTabWidget::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QTabWidget::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QTabWidget_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QTabWidget::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QTabWidget::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QTabWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QTabWidget::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QTabWidget::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QTabWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QTabWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QTabWidget::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QTabWidget::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QTabWidget::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QTabWidget::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QTabWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QTabWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QTabWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QTabWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QTabWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QTabWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QTabWidget::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QTabWidget::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QTabWidget::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QTabWidget::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QTabWidget::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QTabWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QTabWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QTabWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QTabWidget::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QTabWidget::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QTabWidget::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QTabWidget::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QTabWidget::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QTabWidget::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QTabWidget::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QTabWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QTabWidget::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QTabWidget::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QTabWidget::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QTabWidget::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QTabWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QTabWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QTabWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QTabWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QTabWidget::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QTabWidget_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QTabWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QTabWidget::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QTabWidget_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QTabWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QTabWidget::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QTabWidget_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QTabWidget::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QTabWidget::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QTabWidget_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QTabWidget::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QTabWidget::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QTabWidget_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QTabWidget::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QTabWidget::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QTabWidget_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QTabWidget::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QTabWidget::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTabWidget_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QTabWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QTabWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QTabWidget_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QTabWidget::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTabWidget::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTabWidget_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QTabWidget::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QTabWidget::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QTabWidget::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTabWidget::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QTabWidget::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTabWidget::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QTabWidget::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTabWidget::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTabWidget_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QTabWidget::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTabWidget::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTabWidget_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QTabWidget::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QTabWidget_protectedbase_setTabBar(bool* _dynamic_cast_ok, void* self, QTabBar* tabBar);
	friend void QTabWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QTabWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QTabWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QTabWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QTabWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QTabWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTabWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTabWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTabWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTabWidget* QTabWidget_new(QWidget* parent) {
	return new MiqtVirtualQTabWidget(parent);
}

QTabWidget* QTabWidget_new2() {
	return new MiqtVirtualQTabWidget();
}

void QTabWidget_virtbase(QTabWidget* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QTabWidget_metaObject(const QTabWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTabWidget_metacast(QTabWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTabWidget_tr(const char* s) {
	QString _ret = QTabWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTabWidget_addTab(QTabWidget* self, QWidget* widget, struct miqt_string param2) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	return self->addTab(widget, param2_QString);
}

int QTabWidget_addTab2(QTabWidget* self, QWidget* widget, QIcon* icon, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return self->addTab(widget, *icon, label_QString);
}

int QTabWidget_insertTab(QTabWidget* self, int index, QWidget* widget, struct miqt_string param3) {
	QString param3_QString = QString::fromUtf8(param3.data, param3.len);
	return self->insertTab(static_cast<int>(index), widget, param3_QString);
}

int QTabWidget_insertTab2(QTabWidget* self, int index, QWidget* widget, QIcon* icon, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return self->insertTab(static_cast<int>(index), widget, *icon, label_QString);
}

void QTabWidget_removeTab(QTabWidget* self, int index) {
	self->removeTab(static_cast<int>(index));
}

bool QTabWidget_isTabEnabled(const QTabWidget* self, int index) {
	return self->isTabEnabled(static_cast<int>(index));
}

void QTabWidget_setTabEnabled(QTabWidget* self, int index, bool enabled) {
	self->setTabEnabled(static_cast<int>(index), enabled);
}

bool QTabWidget_isTabVisible(const QTabWidget* self, int index) {
	return self->isTabVisible(static_cast<int>(index));
}

void QTabWidget_setTabVisible(QTabWidget* self, int index, bool visible) {
	self->setTabVisible(static_cast<int>(index), visible);
}

struct miqt_string QTabWidget_tabText(const QTabWidget* self, int index) {
	QString _ret = self->tabText(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTabWidget_setTabText(QTabWidget* self, int index, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setTabText(static_cast<int>(index), text_QString);
}

QIcon* QTabWidget_tabIcon(const QTabWidget* self, int index) {
	return new QIcon(self->tabIcon(static_cast<int>(index)));
}

void QTabWidget_setTabIcon(QTabWidget* self, int index, QIcon* icon) {
	self->setTabIcon(static_cast<int>(index), *icon);
}

void QTabWidget_setTabToolTip(QTabWidget* self, int index, struct miqt_string tip) {
	QString tip_QString = QString::fromUtf8(tip.data, tip.len);
	self->setTabToolTip(static_cast<int>(index), tip_QString);
}

struct miqt_string QTabWidget_tabToolTip(const QTabWidget* self, int index) {
	QString _ret = self->tabToolTip(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTabWidget_setTabWhatsThis(QTabWidget* self, int index, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setTabWhatsThis(static_cast<int>(index), text_QString);
}

struct miqt_string QTabWidget_tabWhatsThis(const QTabWidget* self, int index) {
	QString _ret = self->tabWhatsThis(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTabWidget_currentIndex(const QTabWidget* self) {
	return self->currentIndex();
}

QWidget* QTabWidget_currentWidget(const QTabWidget* self) {
	return self->currentWidget();
}

QWidget* QTabWidget_widget(const QTabWidget* self, int index) {
	return self->widget(static_cast<int>(index));
}

int QTabWidget_indexOf(const QTabWidget* self, QWidget* widget) {
	return self->indexOf(widget);
}

int QTabWidget_count(const QTabWidget* self) {
	return self->count();
}

int QTabWidget_tabPosition(const QTabWidget* self) {
	QTabWidget::TabPosition _ret = self->tabPosition();
	return static_cast<int>(_ret);
}

void QTabWidget_setTabPosition(QTabWidget* self, int position) {
	self->setTabPosition(static_cast<QTabWidget::TabPosition>(position));
}

bool QTabWidget_tabsClosable(const QTabWidget* self) {
	return self->tabsClosable();
}

void QTabWidget_setTabsClosable(QTabWidget* self, bool closeable) {
	self->setTabsClosable(closeable);
}

bool QTabWidget_isMovable(const QTabWidget* self) {
	return self->isMovable();
}

void QTabWidget_setMovable(QTabWidget* self, bool movable) {
	self->setMovable(movable);
}

int QTabWidget_tabShape(const QTabWidget* self) {
	QTabWidget::TabShape _ret = self->tabShape();
	return static_cast<int>(_ret);
}

void QTabWidget_setTabShape(QTabWidget* self, int s) {
	self->setTabShape(static_cast<QTabWidget::TabShape>(s));
}

QSize* QTabWidget_sizeHint(const QTabWidget* self) {
	return new QSize(self->sizeHint());
}

QSize* QTabWidget_minimumSizeHint(const QTabWidget* self) {
	return new QSize(self->minimumSizeHint());
}

int QTabWidget_heightForWidth(const QTabWidget* self, int width) {
	return self->heightForWidth(static_cast<int>(width));
}

bool QTabWidget_hasHeightForWidth(const QTabWidget* self) {
	return self->hasHeightForWidth();
}

void QTabWidget_setCornerWidget(QTabWidget* self, QWidget* w) {
	self->setCornerWidget(w);
}

QWidget* QTabWidget_cornerWidget(const QTabWidget* self) {
	return self->cornerWidget();
}

int QTabWidget_elideMode(const QTabWidget* self) {
	Qt::TextElideMode _ret = self->elideMode();
	return static_cast<int>(_ret);
}

void QTabWidget_setElideMode(QTabWidget* self, int mode) {
	self->setElideMode(static_cast<Qt::TextElideMode>(mode));
}

QSize* QTabWidget_iconSize(const QTabWidget* self) {
	return new QSize(self->iconSize());
}

void QTabWidget_setIconSize(QTabWidget* self, QSize* size) {
	self->setIconSize(*size);
}

bool QTabWidget_usesScrollButtons(const QTabWidget* self) {
	return self->usesScrollButtons();
}

void QTabWidget_setUsesScrollButtons(QTabWidget* self, bool useButtons) {
	self->setUsesScrollButtons(useButtons);
}

bool QTabWidget_documentMode(const QTabWidget* self) {
	return self->documentMode();
}

void QTabWidget_setDocumentMode(QTabWidget* self, bool set) {
	self->setDocumentMode(set);
}

bool QTabWidget_tabBarAutoHide(const QTabWidget* self) {
	return self->tabBarAutoHide();
}

void QTabWidget_setTabBarAutoHide(QTabWidget* self, bool enabled) {
	self->setTabBarAutoHide(enabled);
}

void QTabWidget_clear(QTabWidget* self) {
	self->clear();
}

QTabBar* QTabWidget_tabBar(const QTabWidget* self) {
	return self->tabBar();
}

void QTabWidget_setCurrentIndex(QTabWidget* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QTabWidget_setCurrentWidget(QTabWidget* self, QWidget* widget) {
	self->setCurrentWidget(widget);
}

void QTabWidget_currentChanged(QTabWidget* self, int index) {
	self->currentChanged(static_cast<int>(index));
}

void QTabWidget_connect_currentChanged(QTabWidget* self, intptr_t slot) {
	MiqtVirtualQTabWidget::connect(self, static_cast<void (QTabWidget::*)(int)>(&QTabWidget::currentChanged), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QTabWidget_currentChanged(slot, sigval1);
	});
}

void QTabWidget_tabCloseRequested(QTabWidget* self, int index) {
	self->tabCloseRequested(static_cast<int>(index));
}

void QTabWidget_connect_tabCloseRequested(QTabWidget* self, intptr_t slot) {
	MiqtVirtualQTabWidget::connect(self, static_cast<void (QTabWidget::*)(int)>(&QTabWidget::tabCloseRequested), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QTabWidget_tabCloseRequested(slot, sigval1);
	});
}

void QTabWidget_tabBarClicked(QTabWidget* self, int index) {
	self->tabBarClicked(static_cast<int>(index));
}

void QTabWidget_connect_tabBarClicked(QTabWidget* self, intptr_t slot) {
	MiqtVirtualQTabWidget::connect(self, static_cast<void (QTabWidget::*)(int)>(&QTabWidget::tabBarClicked), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QTabWidget_tabBarClicked(slot, sigval1);
	});
}

void QTabWidget_tabBarDoubleClicked(QTabWidget* self, int index) {
	self->tabBarDoubleClicked(static_cast<int>(index));
}

void QTabWidget_connect_tabBarDoubleClicked(QTabWidget* self, intptr_t slot) {
	MiqtVirtualQTabWidget::connect(self, static_cast<void (QTabWidget::*)(int)>(&QTabWidget::tabBarDoubleClicked), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QTabWidget_tabBarDoubleClicked(slot, sigval1);
	});
}

struct miqt_string QTabWidget_tr2(const char* s, const char* c) {
	QString _ret = QTabWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTabWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QTabWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTabWidget_setCornerWidget2(QTabWidget* self, QWidget* w, int corner) {
	self->setCornerWidget(w, static_cast<Qt::Corner>(corner));
}

QWidget* QTabWidget_cornerWidget1(const QTabWidget* self, int corner) {
	return self->cornerWidget(static_cast<Qt::Corner>(corner));
}

bool QTabWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QTabWidget_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_sizeHint();
}

bool QTabWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QTabWidget_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_minimumSizeHint();
}

bool QTabWidget_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QTabWidget_virtualbase_heightForWidth(const void* self, int width) {
	return ( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_heightForWidth(width);
}

bool QTabWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QTabWidget_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_hasHeightForWidth();
}

bool QTabWidget_override_virtual_tabInserted(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabInserted = slot;
	return true;
}

void QTabWidget_virtualbase_tabInserted(void* self, int index) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_tabInserted(index);
}

bool QTabWidget_override_virtual_tabRemoved(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabRemoved = slot;
	return true;
}

void QTabWidget_virtualbase_tabRemoved(void* self, int index) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_tabRemoved(index);
}

bool QTabWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QTabWidget_virtualbase_showEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_showEvent(param1);
}

bool QTabWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QTabWidget_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_resizeEvent(param1);
}

bool QTabWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QTabWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QTabWidget_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QTabWidget_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_paintEvent(param1);
}

bool QTabWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QTabWidget_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_changeEvent(param1);
}

bool QTabWidget_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QTabWidget_virtualbase_event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQTabWidget*)(self) )->virtualbase_event(param1);
}

bool QTabWidget_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QTabWidget_virtualbase_initStyleOption(const void* self, QStyleOptionTabWidgetFrame* option) {
	( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_initStyleOption(option);
}

bool QTabWidget_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QTabWidget_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_devType();
}

bool QTabWidget_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QTabWidget_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_setVisible(visible);
}

bool QTabWidget_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QTabWidget_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_paintEngine();
}

bool QTabWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QTabWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_mousePressEvent(event);
}

bool QTabWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QTabWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QTabWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QTabWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QTabWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QTabWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QTabWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QTabWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_wheelEvent(event);
}

bool QTabWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QTabWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QTabWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QTabWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_focusInEvent(event);
}

bool QTabWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QTabWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_focusOutEvent(event);
}

bool QTabWidget_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QTabWidget_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_enterEvent(event);
}

bool QTabWidget_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QTabWidget_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_leaveEvent(event);
}

bool QTabWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QTabWidget_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_moveEvent(event);
}

bool QTabWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QTabWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_closeEvent(event);
}

bool QTabWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QTabWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QTabWidget_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QTabWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_tabletEvent(event);
}

bool QTabWidget_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QTabWidget_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_actionEvent(event);
}

bool QTabWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QTabWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QTabWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QTabWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QTabWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QTabWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QTabWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QTabWidget_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_dropEvent(event);
}

bool QTabWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QTabWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_hideEvent(event);
}

bool QTabWidget_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QTabWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQTabWidget*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QTabWidget_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QTabWidget_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_metric(param1);
}

bool QTabWidget_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QTabWidget_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_initPainter(painter);
}

bool QTabWidget_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QTabWidget_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_redirected(offset);
}

bool QTabWidget_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QTabWidget_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_sharedPainter();
}

bool QTabWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QTabWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QTabWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QTabWidget_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QTabWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QTabWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQTabWidget*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QTabWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTabWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQTabWidget*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QTabWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QTabWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_timerEvent(event);
}

bool QTabWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QTabWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_childEvent(event);
}

bool QTabWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QTabWidget_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_customEvent(event);
}

bool QTabWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QTabWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_connectNotify(signal);
}

bool QTabWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTabWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_disconnectNotify(signal);
}

void QTabWidget_protectedbase_setTabBar(bool* _dynamic_cast_ok, void* self, QTabBar* tabBar) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setTabBar(tabBar);

}

void QTabWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QTabWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QTabWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QTabWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QTabWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QTabWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QTabWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QTabWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QTabWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QTabWidget_delete(QTabWidget* self) {
	delete self;
}

