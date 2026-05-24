#include <QActionEvent>
#include <QBrush>
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
#include <QFont>
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
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
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qwt_plot.h>
#include "gen_qwt_plot.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtPlot_itemAttached(intptr_t, QwtPlotItem*, bool);
void miqt_exec_callback_QwtPlot_legendDataChanged(intptr_t, QVariant*, struct miqt_array /* of QwtLegendData* */ );
QSize* miqt_exec_callback_QwtPlot_sizeHint(const QwtPlot*, intptr_t);
QSize* miqt_exec_callback_QwtPlot_minimumSizeHint(const QwtPlot*, intptr_t);
void miqt_exec_callback_QwtPlot_updateLayout(QwtPlot*, intptr_t);
void miqt_exec_callback_QwtPlot_drawCanvas(QwtPlot*, intptr_t, QPainter*);
bool miqt_exec_callback_QwtPlot_event(QwtPlot*, intptr_t, QEvent*);
bool miqt_exec_callback_QwtPlot_eventFilter(QwtPlot*, intptr_t, QObject*, QEvent*);
QVariant* miqt_exec_callback_QwtPlot_itemToInfo(const QwtPlot*, intptr_t, QwtPlotItem*);
QwtPlotItem* miqt_exec_callback_QwtPlot_infoToItem(const QwtPlot*, intptr_t, QVariant*);
void miqt_exec_callback_QwtPlot_replot(QwtPlot*, intptr_t);
void miqt_exec_callback_QwtPlot_resizeEvent(QwtPlot*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtPlot_paintEvent(QwtPlot*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QwtPlot_changeEvent(QwtPlot*, intptr_t, QEvent*);
int miqt_exec_callback_QwtPlot_devType(const QwtPlot*, intptr_t);
void miqt_exec_callback_QwtPlot_setVisible(QwtPlot*, intptr_t, bool);
int miqt_exec_callback_QwtPlot_heightForWidth(const QwtPlot*, intptr_t, int);
bool miqt_exec_callback_QwtPlot_hasHeightForWidth(const QwtPlot*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtPlot_paintEngine(const QwtPlot*, intptr_t);
void miqt_exec_callback_QwtPlot_mousePressEvent(QwtPlot*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlot_mouseReleaseEvent(QwtPlot*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlot_mouseDoubleClickEvent(QwtPlot*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlot_mouseMoveEvent(QwtPlot*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlot_wheelEvent(QwtPlot*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtPlot_keyPressEvent(QwtPlot*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPlot_keyReleaseEvent(QwtPlot*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPlot_focusInEvent(QwtPlot*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtPlot_focusOutEvent(QwtPlot*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtPlot_enterEvent(QwtPlot*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlot_leaveEvent(QwtPlot*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlot_moveEvent(QwtPlot*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtPlot_closeEvent(QwtPlot*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtPlot_contextMenuEvent(QwtPlot*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtPlot_tabletEvent(QwtPlot*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtPlot_actionEvent(QwtPlot*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtPlot_dragEnterEvent(QwtPlot*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtPlot_dragMoveEvent(QwtPlot*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtPlot_dragLeaveEvent(QwtPlot*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtPlot_dropEvent(QwtPlot*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtPlot_showEvent(QwtPlot*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtPlot_hideEvent(QwtPlot*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtPlot_nativeEvent(QwtPlot*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QwtPlot_metric(const QwtPlot*, intptr_t, int);
void miqt_exec_callback_QwtPlot_initPainter(const QwtPlot*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtPlot_redirected(const QwtPlot*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtPlot_sharedPainter(const QwtPlot*, intptr_t);
void miqt_exec_callback_QwtPlot_inputMethodEvent(QwtPlot*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtPlot_inputMethodQuery(const QwtPlot*, intptr_t, int);
bool miqt_exec_callback_QwtPlot_focusNextPrevChild(QwtPlot*, intptr_t, bool);
void miqt_exec_callback_QwtPlot_timerEvent(QwtPlot*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtPlot_childEvent(QwtPlot*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtPlot_customEvent(QwtPlot*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlot_connectNotify(QwtPlot*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtPlot_disconnectNotify(QwtPlot*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtPlot final : public QwtPlot {
public:

	MiqtVirtualQwtPlot(QWidget* param1): QwtPlot(param1) {}
	MiqtVirtualQwtPlot(): QwtPlot() {}
	MiqtVirtualQwtPlot(const QwtText& title): QwtPlot(title) {}
	MiqtVirtualQwtPlot(const QwtText& title, QWidget* param2): QwtPlot(title, param2) {}

	virtual ~MiqtVirtualQwtPlot() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QwtPlot::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtPlot_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtPlot_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QwtPlot::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtPlot_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtPlot_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateLayout() override {
		if (handle__updateLayout == 0) {
			QwtPlot::updateLayout();
			return;
		}

		miqt_exec_callback_QwtPlot_updateLayout(this, handle__updateLayout);

	}

	friend void QwtPlot_virtualbase_updateLayout(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawCanvas = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawCanvas(QPainter* param1) override {
		if (handle__drawCanvas == 0) {
			QwtPlot::drawCanvas(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtPlot_drawCanvas(this, handle__drawCanvas, sigval1);

	}

	friend void QwtPlot_virtualbase_drawCanvas(void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QwtPlot::event(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QwtPlot_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QwtPlot_virtualbase_event(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QwtPlot::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QwtPlot_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtPlot_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemToInfo = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemToInfo(QwtPlotItem* param1) const override {
		if (handle__itemToInfo == 0) {
			return QwtPlot::itemToInfo(param1);
		}

		QwtPlotItem* sigval1 = param1;
		QVariant* callback_return_value = miqt_exec_callback_QwtPlot_itemToInfo(this, handle__itemToInfo, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QwtPlot_virtualbase_itemToInfo(const void* self, QwtPlotItem* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__infoToItem = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtPlotItem* infoToItem(const QVariant& param1) const override {
		if (handle__infoToItem == 0) {
			return QwtPlot::infoToItem(param1);
		}

		const QVariant& param1_ret = param1;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&param1_ret);
		QwtPlotItem* callback_return_value = miqt_exec_callback_QwtPlot_infoToItem(this, handle__infoToItem, sigval1);
		return callback_return_value;
	}

	friend QwtPlotItem* QwtPlot_virtualbase_infoToItem(const void* self, QVariant* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__replot = 0;

	// Subclass to allow providing a Go implementation
	virtual void replot() override {
		if (handle__replot == 0) {
			QwtPlot::replot();
			return;
		}

		miqt_exec_callback_QwtPlot_replot(this, handle__replot);

	}

	friend void QwtPlot_virtualbase_replot(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__resizeEvent == 0) {
			QwtPlot::resizeEvent(e);
			return;
		}

		QResizeEvent* sigval1 = e;
		miqt_exec_callback_QwtPlot_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_resizeEvent(void* self, QResizeEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QwtPlot::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlot_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QwtPlot::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlot_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QwtPlot::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtPlot_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtPlot_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QwtPlot::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtPlot_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QwtPlot_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QwtPlot::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtPlot_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtPlot_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QwtPlot::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtPlot_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QwtPlot_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QwtPlot::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtPlot_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QwtPlot_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QwtPlot::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QwtPlot::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QwtPlot::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QwtPlot::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QwtPlot::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QwtPlot::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QwtPlot::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QwtPlot::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QwtPlot::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QwtPlot::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QwtPlot::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QwtPlot::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QwtPlot::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QwtPlot::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QwtPlot::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QwtPlot::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QwtPlot::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QwtPlot::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QwtPlot::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QwtPlot::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QwtPlot::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QwtPlot::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QwtPlot::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtPlot_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtPlot_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QwtPlot::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtPlot_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtPlot_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QwtPlot::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtPlot_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QwtPlot_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QwtPlot::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtPlot_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtPlot_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QwtPlot::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtPlot_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QwtPlot_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QwtPlot::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlot_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QwtPlot::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtPlot_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QwtPlot_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QwtPlot::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtPlot_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QwtPlot_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QwtPlot::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QwtPlot::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QwtPlot::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPlot_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QwtPlot_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QwtPlot::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPlot_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QwtPlot_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QwtPlot::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPlot_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QwtPlot_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QwtPlot_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QwtPlot_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QwtPlot_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtPlot_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtPlot_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtPlot_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtPlot_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtPlot_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPlot_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPlot_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtPlot_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
	friend void QwtPlot_protectedbase_insertItem(bool* _dynamic_cast_ok, void* self, QwtPlotItem* param1);
	friend void QwtPlot_protectedbase_removeItem(bool* _dynamic_cast_ok, void* self, QwtPlotItem* param1);
};

QwtPlot* QwtPlot_new(QWidget* param1) {
	return new (std::nothrow) MiqtVirtualQwtPlot(param1);
}

QwtPlot* QwtPlot_new2() {
	return new (std::nothrow) MiqtVirtualQwtPlot();
}

QwtPlot* QwtPlot_new3(QwtText* title) {
	return new (std::nothrow) MiqtVirtualQwtPlot(*title);
}

QwtPlot* QwtPlot_new4(QwtText* title, QWidget* param2) {
	return new (std::nothrow) MiqtVirtualQwtPlot(*title, param2);
}

void QwtPlot_virtbase(QwtPlot* src, QFrame** outptr_QFrame, QwtPlotDict** outptr_QwtPlotDict) {
	*outptr_QFrame = static_cast<QFrame*>(src);
	*outptr_QwtPlotDict = static_cast<QwtPlotDict*>(src);
}

QMetaObject* QwtPlot_metaObject(const QwtPlot* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtPlot_metacast(QwtPlot* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtPlot_tr(const char* s) {
	QString _ret = QwtPlot::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlot_trUtf8(const char* s) {
	QString _ret = QwtPlot::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtPlot_applyProperties(QwtPlot* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->applyProperties(param1_QString);
}

struct miqt_string QwtPlot_grabProperties(const QwtPlot* self) {
	QString _ret = self->grabProperties();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtPlot_setAutoReplot(QwtPlot* self) {
	self->setAutoReplot();
}

bool QwtPlot_autoReplot(const QwtPlot* self) {
	return self->autoReplot();
}

void QwtPlot_setPlotLayout(QwtPlot* self, QwtPlotLayout* plotLayout) {
	self->setPlotLayout(plotLayout);
}

QwtPlotLayout* QwtPlot_plotLayout(QwtPlot* self) {
	return self->plotLayout();
}

QwtPlotLayout* QwtPlot_plotLayout2(const QwtPlot* self) {
	return (QwtPlotLayout*) self->plotLayout();
}

void QwtPlot_setTitle(QwtPlot* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setTitle(title_QString);
}

void QwtPlot_setTitleWithTitle(QwtPlot* self, QwtText* title) {
	self->setTitle(*title);
}

QwtText* QwtPlot_title(const QwtPlot* self) {
	return new QwtText(self->title());
}

QwtTextLabel* QwtPlot_titleLabel(QwtPlot* self) {
	return self->titleLabel();
}

QwtTextLabel* QwtPlot_titleLabel2(const QwtPlot* self) {
	return (QwtTextLabel*) self->titleLabel();
}

void QwtPlot_setFooter(QwtPlot* self, struct miqt_string footer) {
	QString footer_QString = QString::fromUtf8(footer.data, footer.len);
	self->setFooter(footer_QString);
}

void QwtPlot_setFooterWithFooter(QwtPlot* self, QwtText* footer) {
	self->setFooter(*footer);
}

QwtText* QwtPlot_footer(const QwtPlot* self) {
	return new QwtText(self->footer());
}

QwtTextLabel* QwtPlot_footerLabel(QwtPlot* self) {
	return self->footerLabel();
}

QwtTextLabel* QwtPlot_footerLabel2(const QwtPlot* self) {
	return (QwtTextLabel*) self->footerLabel();
}

void QwtPlot_setCanvas(QwtPlot* self, QWidget* canvas) {
	self->setCanvas(canvas);
}

QWidget* QwtPlot_canvas(QwtPlot* self) {
	return self->canvas();
}

QWidget* QwtPlot_canvas2(const QwtPlot* self) {
	return (QWidget*) self->canvas();
}

void QwtPlot_setCanvasBackground(QwtPlot* self, QBrush* canvasBackground) {
	self->setCanvasBackground(*canvasBackground);
}

QBrush* QwtPlot_canvasBackground(const QwtPlot* self) {
	return new QBrush(self->canvasBackground());
}

double QwtPlot_invTransform(const QwtPlot* self, int axisId, int pos) {
	return self->invTransform(static_cast<int>(axisId), static_cast<int>(pos));
}

double QwtPlot_transform(const QwtPlot* self, int axisId, double value) {
	return self->transform(static_cast<int>(axisId), static_cast<double>(value));
}

QwtScaleEngine* QwtPlot_axisScaleEngine(QwtPlot* self, int axisId) {
	return self->axisScaleEngine(static_cast<int>(axisId));
}

QwtScaleEngine* QwtPlot_axisScaleEngineWithAxisId(const QwtPlot* self, int axisId) {
	return (QwtScaleEngine*) self->axisScaleEngine(static_cast<int>(axisId));
}

void QwtPlot_setAxisScaleEngine(QwtPlot* self, int axisId, QwtScaleEngine* param2) {
	self->setAxisScaleEngine(static_cast<int>(axisId), param2);
}

void QwtPlot_setAxisAutoScale(QwtPlot* self, int axisId) {
	self->setAxisAutoScale(static_cast<int>(axisId));
}

bool QwtPlot_axisAutoScale(const QwtPlot* self, int axisId) {
	return self->axisAutoScale(static_cast<int>(axisId));
}

void QwtPlot_enableAxis(QwtPlot* self, int axisId) {
	self->enableAxis(static_cast<int>(axisId));
}

bool QwtPlot_axisEnabled(const QwtPlot* self, int axisId) {
	return self->axisEnabled(static_cast<int>(axisId));
}

void QwtPlot_setAxisFont(QwtPlot* self, int axisId, QFont* param2) {
	self->setAxisFont(static_cast<int>(axisId), *param2);
}

QFont* QwtPlot_axisFont(const QwtPlot* self, int axisId) {
	return new QFont(self->axisFont(static_cast<int>(axisId)));
}

void QwtPlot_setAxisScale(QwtPlot* self, int axisId, double min, double max) {
	self->setAxisScale(static_cast<int>(axisId), static_cast<double>(min), static_cast<double>(max));
}

void QwtPlot_setAxisScaleDiv(QwtPlot* self, int axisId, QwtScaleDiv* param2) {
	self->setAxisScaleDiv(static_cast<int>(axisId), *param2);
}

void QwtPlot_setAxisScaleDraw(QwtPlot* self, int axisId, QwtScaleDraw* param2) {
	self->setAxisScaleDraw(static_cast<int>(axisId), param2);
}

double QwtPlot_axisStepSize(const QwtPlot* self, int axisId) {
	return self->axisStepSize(static_cast<int>(axisId));
}

QwtInterval* QwtPlot_axisInterval(const QwtPlot* self, int axisId) {
	return new QwtInterval(self->axisInterval(static_cast<int>(axisId)));
}

QwtScaleDiv* QwtPlot_axisScaleDiv(const QwtPlot* self, int axisId) {
	const QwtScaleDiv& _ret = self->axisScaleDiv(static_cast<int>(axisId));
	// Cast returned reference into pointer
	return const_cast<QwtScaleDiv*>(&_ret);
}

QwtScaleDraw* QwtPlot_axisScaleDraw(const QwtPlot* self, int axisId) {
	return (QwtScaleDraw*) self->axisScaleDraw(static_cast<int>(axisId));
}

QwtScaleDraw* QwtPlot_axisScaleDrawWithAxisId(QwtPlot* self, int axisId) {
	return self->axisScaleDraw(static_cast<int>(axisId));
}

QwtScaleWidget* QwtPlot_axisWidget(const QwtPlot* self, int axisId) {
	return (QwtScaleWidget*) self->axisWidget(static_cast<int>(axisId));
}

QwtScaleWidget* QwtPlot_axisWidgetWithAxisId(QwtPlot* self, int axisId) {
	return self->axisWidget(static_cast<int>(axisId));
}

void QwtPlot_setAxisLabelAlignment(QwtPlot* self, int axisId, int param2) {
	self->setAxisLabelAlignment(static_cast<int>(axisId), static_cast<Qt::Alignment>(param2));
}

void QwtPlot_setAxisLabelRotation(QwtPlot* self, int axisId, double rotation) {
	self->setAxisLabelRotation(static_cast<int>(axisId), static_cast<double>(rotation));
}

void QwtPlot_setAxisTitle(QwtPlot* self, int axisId, struct miqt_string param2) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	self->setAxisTitle(static_cast<int>(axisId), param2_QString);
}

void QwtPlot_setAxisTitle2(QwtPlot* self, int axisId, QwtText* param2) {
	self->setAxisTitle(static_cast<int>(axisId), *param2);
}

QwtText* QwtPlot_axisTitle(const QwtPlot* self, int axisId) {
	return new QwtText(self->axisTitle(static_cast<int>(axisId)));
}

void QwtPlot_setAxisMaxMinor(QwtPlot* self, int axisId, int maxMinor) {
	self->setAxisMaxMinor(static_cast<int>(axisId), static_cast<int>(maxMinor));
}

int QwtPlot_axisMaxMinor(const QwtPlot* self, int axisId) {
	return self->axisMaxMinor(static_cast<int>(axisId));
}

void QwtPlot_setAxisMaxMajor(QwtPlot* self, int axisId, int maxMajor) {
	self->setAxisMaxMajor(static_cast<int>(axisId), static_cast<int>(maxMajor));
}

int QwtPlot_axisMaxMajor(const QwtPlot* self, int axisId) {
	return self->axisMaxMajor(static_cast<int>(axisId));
}

void QwtPlot_insertLegend(QwtPlot* self, QwtAbstractLegend* param1) {
	self->insertLegend(param1);
}

QwtAbstractLegend* QwtPlot_legend(QwtPlot* self) {
	return self->legend();
}

QwtAbstractLegend* QwtPlot_legend2(const QwtPlot* self) {
	return (QwtAbstractLegend*) self->legend();
}

void QwtPlot_updateLegend(QwtPlot* self) {
	self->updateLegend();
}

void QwtPlot_updateLegendWithQwtPlotItem(QwtPlot* self, QwtPlotItem* param1) {
	self->updateLegend(param1);
}

QSize* QwtPlot_sizeHint(const QwtPlot* self) {
	return new QSize(self->sizeHint());
}

QSize* QwtPlot_minimumSizeHint(const QwtPlot* self) {
	return new QSize(self->minimumSizeHint());
}

void QwtPlot_updateLayout(QwtPlot* self) {
	self->updateLayout();
}

void QwtPlot_drawCanvas(QwtPlot* self, QPainter* param1) {
	self->drawCanvas(param1);
}

void QwtPlot_updateAxes(QwtPlot* self) {
	self->updateAxes();
}

void QwtPlot_updateCanvasMargins(QwtPlot* self) {
	self->updateCanvasMargins();
}

bool QwtPlot_event(QwtPlot* self, QEvent* param1) {
	return self->event(param1);
}

bool QwtPlot_eventFilter(QwtPlot* self, QObject* param1, QEvent* param2) {
	return self->eventFilter(param1, param2);
}

QVariant* QwtPlot_itemToInfo(const QwtPlot* self, QwtPlotItem* param1) {
	return new QVariant(self->itemToInfo(param1));
}

QwtPlotItem* QwtPlot_infoToItem(const QwtPlot* self, QVariant* param1) {
	return self->infoToItem(*param1);
}

void QwtPlot_itemAttached(QwtPlot* self, QwtPlotItem* plotItem, bool on) {
	self->itemAttached(plotItem, on);
}

void QwtPlot_connect_itemAttached(QwtPlot* self, intptr_t slot) {
	QwtPlot::connect(self, static_cast<void (QwtPlot::*)(QwtPlotItem*, bool)>(&QwtPlot::itemAttached), self, [=](QwtPlotItem* plotItem, bool on) {
		QwtPlotItem* sigval1 = plotItem;
		bool sigval2 = on;
		miqt_exec_callback_QwtPlot_itemAttached(slot, sigval1, sigval2);
	});
}

void QwtPlot_legendDataChanged(QwtPlot* self, QVariant* itemInfo, struct miqt_array /* of QwtLegendData* */  data) {
	QList<QwtLegendData> data_QList;
	data_QList.reserve(data.len);
	QwtLegendData** data_arr = static_cast<QwtLegendData**>(data.data);
	for(size_t i = 0; i < data.len; ++i) {
		data_QList.push_back(*(data_arr[i]));
	}
	self->legendDataChanged(*itemInfo, data_QList);
}

void QwtPlot_connect_legendDataChanged(QwtPlot* self, intptr_t slot) {
	QwtPlot::connect(self, static_cast<void (QwtPlot::*)(const QVariant&, const QList<QwtLegendData>&)>(&QwtPlot::legendDataChanged), self, [=](const QVariant& itemInfo, const QList<QwtLegendData>& data) {
		const QVariant& itemInfo_ret = itemInfo;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&itemInfo_ret);
		const QList<QwtLegendData>& data_ret = data;
		// Convert QList<> from C++ memory to manually-managed C memory
		QwtLegendData** data_arr = static_cast<QwtLegendData**>(malloc(sizeof(QwtLegendData*) * data_ret.length()));
		for (size_t i = 0, e = data_ret.length(); i < e; ++i) {
			data_arr[i] = new QwtLegendData(data_ret[i]);
		}
		struct miqt_array data_out;
		data_out.len = data_ret.length();
		data_out.data = static_cast<void*>(data_arr);
		struct miqt_array /* of QwtLegendData* */  sigval2 = data_out;
		miqt_exec_callback_QwtPlot_legendDataChanged(slot, sigval1, sigval2);
	});
}

void QwtPlot_replot(QwtPlot* self) {
	self->replot();
}

void QwtPlot_autoRefresh(QwtPlot* self) {
	self->autoRefresh();
}

struct miqt_string QwtPlot_tr2(const char* s, const char* c) {
	QString _ret = QwtPlot::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlot_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtPlot::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlot_trUtf82(const char* s, const char* c) {
	QString _ret = QwtPlot::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlot_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtPlot::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtPlot_setAutoReplotWithAutoReplot(QwtPlot* self, bool autoReplot) {
	self->setAutoReplot(autoReplot);
}

void QwtPlot_setAxisAutoScale2(QwtPlot* self, int axisId, bool on) {
	self->setAxisAutoScale(static_cast<int>(axisId), on);
}

void QwtPlot_enableAxis2(QwtPlot* self, int axisId, bool tf) {
	self->enableAxis(static_cast<int>(axisId), tf);
}

void QwtPlot_setAxisScale2(QwtPlot* self, int axisId, double min, double max, double stepSize) {
	self->setAxisScale(static_cast<int>(axisId), static_cast<double>(min), static_cast<double>(max), static_cast<double>(stepSize));
}

void QwtPlot_insertLegend2(QwtPlot* self, QwtAbstractLegend* param1, int param2) {
	self->insertLegend(param1, static_cast<QwtPlot::LegendPosition>(param2));
}

void QwtPlot_insertLegend3(QwtPlot* self, QwtAbstractLegend* param1, int param2, double ratio) {
	self->insertLegend(param1, static_cast<QwtPlot::LegendPosition>(param2), static_cast<double>(ratio));
}

bool QwtPlot_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QwtPlot_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtPlot*>(self)->QwtPlot::sizeHint());
}

bool QwtPlot_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QwtPlot_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtPlot*>(self)->QwtPlot::minimumSizeHint());
}

bool QwtPlot_override_virtual_updateLayout(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateLayout = slot;
	return true;
}

void QwtPlot_virtualbase_updateLayout(void* self) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::updateLayout();
}

bool QwtPlot_override_virtual_drawCanvas(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawCanvas = slot;
	return true;
}

void QwtPlot_virtualbase_drawCanvas(void* self, QPainter* param1) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::drawCanvas(param1);
}

bool QwtPlot_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QwtPlot_virtualbase_event(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::event(param1);
}

bool QwtPlot_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QwtPlot_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::eventFilter(param1, param2);
}

bool QwtPlot_override_virtual_itemToInfo(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemToInfo = slot;
	return true;
}

QVariant* QwtPlot_virtualbase_itemToInfo(const void* self, QwtPlotItem* param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtPlot*>(self)->QwtPlot::itemToInfo(param1));
}

bool QwtPlot_override_virtual_infoToItem(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__infoToItem = slot;
	return true;
}

QwtPlotItem* QwtPlot_virtualbase_infoToItem(const void* self, QVariant* param1) {
	return static_cast<const MiqtVirtualQwtPlot*>(self)->QwtPlot::infoToItem(*param1);
}

bool QwtPlot_override_virtual_replot(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__replot = slot;
	return true;
}

void QwtPlot_virtualbase_replot(void* self) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::replot();
}

bool QwtPlot_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QwtPlot_virtualbase_resizeEvent(void* self, QResizeEvent* e) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::resizeEvent(e);
}

bool QwtPlot_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QwtPlot_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::paintEvent(param1);
}

bool QwtPlot_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QwtPlot_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::changeEvent(param1);
}

bool QwtPlot_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QwtPlot_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtPlot*>(self)->QwtPlot::devType();
}

bool QwtPlot_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QwtPlot_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::setVisible(visible);
}

bool QwtPlot_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QwtPlot_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtPlot*>(self)->QwtPlot::heightForWidth(static_cast<int>(param1));
}

bool QwtPlot_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QwtPlot_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtPlot*>(self)->QwtPlot::hasHeightForWidth();
}

bool QwtPlot_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QwtPlot_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtPlot*>(self)->QwtPlot::paintEngine();
}

bool QwtPlot_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QwtPlot_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::mousePressEvent(event);
}

bool QwtPlot_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QwtPlot_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::mouseReleaseEvent(event);
}

bool QwtPlot_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QwtPlot_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::mouseDoubleClickEvent(event);
}

bool QwtPlot_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QwtPlot_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::mouseMoveEvent(event);
}

bool QwtPlot_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QwtPlot_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::wheelEvent(event);
}

bool QwtPlot_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QwtPlot_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::keyPressEvent(event);
}

bool QwtPlot_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QwtPlot_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::keyReleaseEvent(event);
}

bool QwtPlot_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QwtPlot_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::focusInEvent(event);
}

bool QwtPlot_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QwtPlot_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::focusOutEvent(event);
}

bool QwtPlot_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QwtPlot_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::enterEvent(event);
}

bool QwtPlot_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QwtPlot_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::leaveEvent(event);
}

bool QwtPlot_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QwtPlot_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::moveEvent(event);
}

bool QwtPlot_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QwtPlot_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::closeEvent(event);
}

bool QwtPlot_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QwtPlot_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::contextMenuEvent(event);
}

bool QwtPlot_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QwtPlot_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::tabletEvent(event);
}

bool QwtPlot_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QwtPlot_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::actionEvent(event);
}

bool QwtPlot_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QwtPlot_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::dragEnterEvent(event);
}

bool QwtPlot_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QwtPlot_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::dragMoveEvent(event);
}

bool QwtPlot_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QwtPlot_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::dragLeaveEvent(event);
}

bool QwtPlot_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QwtPlot_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::dropEvent(event);
}

bool QwtPlot_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QwtPlot_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::showEvent(event);
}

bool QwtPlot_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QwtPlot_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::hideEvent(event);
}

bool QwtPlot_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QwtPlot_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtPlot_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QwtPlot_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtPlot*>(self)->QwtPlot::metric(static_cast<MiqtVirtualQwtPlot::PaintDeviceMetric>(param1));
}

bool QwtPlot_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QwtPlot_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtPlot*>(self)->QwtPlot::initPainter(painter);
}

bool QwtPlot_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QwtPlot_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtPlot*>(self)->QwtPlot::redirected(offset);
}

bool QwtPlot_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QwtPlot_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtPlot*>(self)->QwtPlot::sharedPainter();
}

bool QwtPlot_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QwtPlot_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::inputMethodEvent(param1);
}

bool QwtPlot_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QwtPlot_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtPlot*>(self)->QwtPlot::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtPlot_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QwtPlot_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::focusNextPrevChild(next);
}

bool QwtPlot_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QwtPlot_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::timerEvent(event);
}

bool QwtPlot_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QwtPlot_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::childEvent(event);
}

bool QwtPlot_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QwtPlot_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::customEvent(event);
}

bool QwtPlot_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QwtPlot_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::connectNotify(*signal);
}

bool QwtPlot_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QwtPlot_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPlot*>(self)->QwtPlot::disconnectNotify(*signal);
}

void QwtPlot_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QwtPlot_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QwtPlot_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtPlot_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtPlot_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtPlot_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtPlot_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtPlot_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtPlot_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtPlot_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtPlot_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtPlot_protectedbase_insertItem(bool* _dynamic_cast_ok, void* self, QwtPlotItem* param1) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->insertItem(param1);
}

void QwtPlot_protectedbase_removeItem(bool* _dynamic_cast_ok, void* self, QwtPlotItem* param1) {
	MiqtVirtualQwtPlot* self_cast = dynamic_cast<MiqtVirtualQwtPlot*>( (QwtPlot*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->removeItem(param1);
}

void QwtPlot_delete(QwtPlot* self) {
	delete self;
}

