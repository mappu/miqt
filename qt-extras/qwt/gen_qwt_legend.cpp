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
#include <QRectF>
#include <QResizeEvent>
#include <QScrollBar>
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
#include <qwt_legend.h>
#include "gen_qwt_legend.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtLegend_clicked(intptr_t, QVariant*, int);
void miqt_exec_callback_QwtLegend_checked(intptr_t, QVariant*, bool, int);
bool miqt_exec_callback_QwtLegend_eventFilter(QwtLegend*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QwtLegend_sizeHint(const QwtLegend*, intptr_t);
int miqt_exec_callback_QwtLegend_heightForWidth(const QwtLegend*, intptr_t, int);
void miqt_exec_callback_QwtLegend_renderLegend(const QwtLegend*, intptr_t, QPainter*, QRectF*, bool);
void miqt_exec_callback_QwtLegend_renderItem(const QwtLegend*, intptr_t, QPainter*, QWidget*, QRectF*, bool);
bool miqt_exec_callback_QwtLegend_isEmpty(const QwtLegend*, intptr_t);
int miqt_exec_callback_QwtLegend_scrollExtent(const QwtLegend*, intptr_t, int);
void miqt_exec_callback_QwtLegend_updateLegend(QwtLegend*, intptr_t, QVariant*, struct miqt_array /* of QwtLegendData* */ );
QWidget* miqt_exec_callback_QwtLegend_createWidget(const QwtLegend*, intptr_t, QwtLegendData*);
void miqt_exec_callback_QwtLegend_updateWidget(QwtLegend*, intptr_t, QWidget*, QwtLegendData*);
bool miqt_exec_callback_QwtLegend_event(QwtLegend*, intptr_t, QEvent*);
void miqt_exec_callback_QwtLegend_paintEvent(QwtLegend*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QwtLegend_changeEvent(QwtLegend*, intptr_t, QEvent*);
int miqt_exec_callback_QwtLegend_devType(const QwtLegend*, intptr_t);
void miqt_exec_callback_QwtLegend_setVisible(QwtLegend*, intptr_t, bool);
QSize* miqt_exec_callback_QwtLegend_minimumSizeHint(const QwtLegend*, intptr_t);
bool miqt_exec_callback_QwtLegend_hasHeightForWidth(const QwtLegend*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtLegend_paintEngine(const QwtLegend*, intptr_t);
void miqt_exec_callback_QwtLegend_mousePressEvent(QwtLegend*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtLegend_mouseReleaseEvent(QwtLegend*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtLegend_mouseDoubleClickEvent(QwtLegend*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtLegend_mouseMoveEvent(QwtLegend*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtLegend_wheelEvent(QwtLegend*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtLegend_keyPressEvent(QwtLegend*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtLegend_keyReleaseEvent(QwtLegend*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtLegend_focusInEvent(QwtLegend*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtLegend_focusOutEvent(QwtLegend*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtLegend_enterEvent(QwtLegend*, intptr_t, QEvent*);
void miqt_exec_callback_QwtLegend_leaveEvent(QwtLegend*, intptr_t, QEvent*);
void miqt_exec_callback_QwtLegend_moveEvent(QwtLegend*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtLegend_resizeEvent(QwtLegend*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtLegend_closeEvent(QwtLegend*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtLegend_contextMenuEvent(QwtLegend*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtLegend_tabletEvent(QwtLegend*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtLegend_actionEvent(QwtLegend*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtLegend_dragEnterEvent(QwtLegend*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtLegend_dragMoveEvent(QwtLegend*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtLegend_dragLeaveEvent(QwtLegend*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtLegend_dropEvent(QwtLegend*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtLegend_showEvent(QwtLegend*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtLegend_hideEvent(QwtLegend*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtLegend_nativeEvent(QwtLegend*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QwtLegend_metric(const QwtLegend*, intptr_t, int);
void miqt_exec_callback_QwtLegend_initPainter(const QwtLegend*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtLegend_redirected(const QwtLegend*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtLegend_sharedPainter(const QwtLegend*, intptr_t);
void miqt_exec_callback_QwtLegend_inputMethodEvent(QwtLegend*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtLegend_inputMethodQuery(const QwtLegend*, intptr_t, int);
bool miqt_exec_callback_QwtLegend_focusNextPrevChild(QwtLegend*, intptr_t, bool);
void miqt_exec_callback_QwtLegend_timerEvent(QwtLegend*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtLegend_childEvent(QwtLegend*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtLegend_customEvent(QwtLegend*, intptr_t, QEvent*);
void miqt_exec_callback_QwtLegend_connectNotify(QwtLegend*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtLegend_disconnectNotify(QwtLegend*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtLegend final : public QwtLegend {
public:

	MiqtVirtualQwtLegend(QWidget* parent): QwtLegend(parent) {}
	MiqtVirtualQwtLegend(): QwtLegend() {}

	virtual ~MiqtVirtualQwtLegend() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QwtLegend::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QwtLegend_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtLegend_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QwtLegend::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtLegend_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtLegend_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int width) const override {
		if (handle__heightForWidth == 0) {
			return QwtLegend::heightForWidth(width);
		}

		int sigval1 = width;
		int callback_return_value = miqt_exec_callback_QwtLegend_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtLegend_virtualbase_heightForWidth(const void* self, int width);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__renderLegend = 0;

	// Subclass to allow providing a Go implementation
	virtual void renderLegend(QPainter* param1, const QRectF& param2, bool fillBackground) const override {
		if (handle__renderLegend == 0) {
			QwtLegend::renderLegend(param1, param2, fillBackground);
			return;
		}

		QPainter* sigval1 = param1;
		const QRectF& param2_ret = param2;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&param2_ret);
		bool sigval3 = fillBackground;
		miqt_exec_callback_QwtLegend_renderLegend(this, handle__renderLegend, sigval1, sigval2, sigval3);

	}

	friend void QwtLegend_virtualbase_renderLegend(const void* self, QPainter* param1, QRectF* param2, bool fillBackground);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__renderItem = 0;

	// Subclass to allow providing a Go implementation
	virtual void renderItem(QPainter* param1, const QWidget* param2, const QRectF& param3, bool fillBackground) const override {
		if (handle__renderItem == 0) {
			QwtLegend::renderItem(param1, param2, param3, fillBackground);
			return;
		}

		QPainter* sigval1 = param1;
		QWidget* sigval2 = (QWidget*) param2;
		const QRectF& param3_ret = param3;
		// Cast returned reference into pointer
		QRectF* sigval3 = const_cast<QRectF*>(&param3_ret);
		bool sigval4 = fillBackground;
		miqt_exec_callback_QwtLegend_renderItem(this, handle__renderItem, sigval1, sigval2, sigval3, sigval4);

	}

	friend void QwtLegend_virtualbase_renderItem(const void* self, QPainter* param1, QWidget* param2, QRectF* param3, bool fillBackground);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__isEmpty == 0) {
			return QwtLegend::isEmpty();
		}

		bool callback_return_value = miqt_exec_callback_QwtLegend_isEmpty(this, handle__isEmpty);
		return callback_return_value;
	}

	friend bool QwtLegend_virtualbase_isEmpty(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollExtent = 0;

	// Subclass to allow providing a Go implementation
	virtual int scrollExtent(Qt::Orientation param1) const override {
		if (handle__scrollExtent == 0) {
			return QwtLegend::scrollExtent(param1);
		}

		Qt::Orientation param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtLegend_scrollExtent(this, handle__scrollExtent, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtLegend_virtualbase_scrollExtent(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateLegend = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateLegend(const QVariant& param1, const QList<QwtLegendData>& param2) override {
		if (handle__updateLegend == 0) {
			QwtLegend::updateLegend(param1, param2);
			return;
		}

		const QVariant& param1_ret = param1;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&param1_ret);
		const QList<QwtLegendData>& param2_ret = param2;
		// Convert QList<> from C++ memory to manually-managed C memory
		QwtLegendData** param2_arr = static_cast<QwtLegendData**>(malloc(sizeof(QwtLegendData*) * param2_ret.length()));
		for (size_t i = 0, e = param2_ret.length(); i < e; ++i) {
			param2_arr[i] = new QwtLegendData(param2_ret[i]);
		}
		struct miqt_array param2_out;
		param2_out.len = param2_ret.length();
		param2_out.data = static_cast<void*>(param2_arr);
		struct miqt_array /* of QwtLegendData* */  sigval2 = param2_out;
		miqt_exec_callback_QwtLegend_updateLegend(this, handle__updateLegend, sigval1, sigval2);

	}

	friend void QwtLegend_virtualbase_updateLegend(void* self, QVariant* param1, struct miqt_array /* of QwtLegendData* */  param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* createWidget(const QwtLegendData& param1) const override {
		if (handle__createWidget == 0) {
			return QwtLegend::createWidget(param1);
		}

		const QwtLegendData& param1_ret = param1;
		// Cast returned reference into pointer
		QwtLegendData* sigval1 = const_cast<QwtLegendData*>(&param1_ret);
		QWidget* callback_return_value = miqt_exec_callback_QwtLegend_createWidget(this, handle__createWidget, sigval1);
		return callback_return_value;
	}

	friend QWidget* QwtLegend_virtualbase_createWidget(const void* self, QwtLegendData* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateWidget(QWidget* widget, const QwtLegendData& param2) override {
		if (handle__updateWidget == 0) {
			QwtLegend::updateWidget(widget, param2);
			return;
		}

		QWidget* sigval1 = widget;
		const QwtLegendData& param2_ret = param2;
		// Cast returned reference into pointer
		QwtLegendData* sigval2 = const_cast<QwtLegendData*>(&param2_ret);
		miqt_exec_callback_QwtLegend_updateWidget(this, handle__updateWidget, sigval1, sigval2);

	}

	friend void QwtLegend_virtualbase_updateWidget(void* self, QWidget* widget, QwtLegendData* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QwtLegend::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QwtLegend_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QwtLegend_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QwtLegend::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QwtLegend_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QwtLegend::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtLegend_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QwtLegend::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtLegend_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtLegend_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QwtLegend::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtLegend_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QwtLegend_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QwtLegend::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtLegend_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtLegend_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QwtLegend::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtLegend_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QwtLegend_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QwtLegend::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtLegend_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QwtLegend_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QwtLegend::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QwtLegend::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QwtLegend::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QwtLegend::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QwtLegend::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QwtLegend::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QwtLegend::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QwtLegend::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QwtLegend::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QwtLegend::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QwtLegend::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QwtLegend::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QwtLegend::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QwtLegend::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QwtLegend::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QwtLegend::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QwtLegend::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QwtLegend::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QwtLegend::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QwtLegend::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QwtLegend::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QwtLegend::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QwtLegend::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QwtLegend::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtLegend_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtLegend_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QwtLegend::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtLegend_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtLegend_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QwtLegend::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtLegend_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QwtLegend_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QwtLegend::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtLegend_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtLegend_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QwtLegend::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtLegend_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QwtLegend_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QwtLegend::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtLegend_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QwtLegend::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtLegend_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QwtLegend_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QwtLegend::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtLegend_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QwtLegend_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QwtLegend::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QwtLegend::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QwtLegend::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtLegend_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QwtLegend_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QwtLegend::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtLegend_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QwtLegend_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QwtLegend::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtLegend_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QwtLegend_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QwtLegend_protectedbase_itemClicked(bool* _dynamic_cast_ok, void* self);
	friend void QwtLegend_protectedbase_itemChecked(bool* _dynamic_cast_ok, void* self, bool param1);
	friend void QwtLegend_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QwtLegend_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QwtLegend_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtLegend_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtLegend_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtLegend_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtLegend_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtLegend_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtLegend_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtLegend_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtLegend_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtLegend* QwtLegend_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtLegend(parent);
}

QwtLegend* QwtLegend_new2() {
	return new (std::nothrow) MiqtVirtualQwtLegend();
}

void QwtLegend_virtbase(QwtLegend* src, QwtAbstractLegend** outptr_QwtAbstractLegend) {
	*outptr_QwtAbstractLegend = static_cast<QwtAbstractLegend*>(src);
}

QMetaObject* QwtLegend_metaObject(const QwtLegend* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtLegend_metacast(QwtLegend* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtLegend_tr(const char* s) {
	QString _ret = QwtLegend::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtLegend_trUtf8(const char* s) {
	QString _ret = QwtLegend::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtLegend_setMaxColumns(QwtLegend* self, unsigned int numColums) {
	self->setMaxColumns(static_cast<uint>(numColums));
}

unsigned int QwtLegend_maxColumns(const QwtLegend* self) {
	uint _ret = self->maxColumns();
	return static_cast<unsigned int>(_ret);
}

void QwtLegend_setDefaultItemMode(QwtLegend* self, int defaultItemMode) {
	self->setDefaultItemMode(static_cast<QwtLegendData::Mode>(defaultItemMode));
}

int QwtLegend_defaultItemMode(const QwtLegend* self) {
	QwtLegendData::Mode _ret = self->defaultItemMode();
	return static_cast<int>(_ret);
}

QWidget* QwtLegend_contentsWidget(QwtLegend* self) {
	return self->contentsWidget();
}

QWidget* QwtLegend_contentsWidget2(const QwtLegend* self) {
	return (QWidget*) self->contentsWidget();
}

QWidget* QwtLegend_legendWidget(const QwtLegend* self, QVariant* param1) {
	return self->legendWidget(*param1);
}

struct miqt_array /* of QWidget* */  QwtLegend_legendWidgets(const QwtLegend* self, QVariant* param1) {
	QList<QWidget *> _ret = self->legendWidgets(*param1);
	// Convert QList<> from C++ memory to manually-managed C memory
	QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QVariant* QwtLegend_itemInfo(const QwtLegend* self, QWidget* param1) {
	return new QVariant(self->itemInfo(param1));
}

bool QwtLegend_eventFilter(QwtLegend* self, QObject* param1, QEvent* param2) {
	return self->eventFilter(param1, param2);
}

QSize* QwtLegend_sizeHint(const QwtLegend* self) {
	return new QSize(self->sizeHint());
}

int QwtLegend_heightForWidth(const QwtLegend* self, int width) {
	return self->heightForWidth(static_cast<int>(width));
}

QScrollBar* QwtLegend_horizontalScrollBar(const QwtLegend* self) {
	return self->horizontalScrollBar();
}

QScrollBar* QwtLegend_verticalScrollBar(const QwtLegend* self) {
	return self->verticalScrollBar();
}

void QwtLegend_renderLegend(const QwtLegend* self, QPainter* param1, QRectF* param2, bool fillBackground) {
	self->renderLegend(param1, *param2, fillBackground);
}

void QwtLegend_renderItem(const QwtLegend* self, QPainter* param1, QWidget* param2, QRectF* param3, bool fillBackground) {
	self->renderItem(param1, param2, *param3, fillBackground);
}

bool QwtLegend_isEmpty(const QwtLegend* self) {
	return self->isEmpty();
}

int QwtLegend_scrollExtent(const QwtLegend* self, int param1) {
	return self->scrollExtent(static_cast<Qt::Orientation>(param1));
}

void QwtLegend_clicked(QwtLegend* self, QVariant* itemInfo, int index) {
	self->clicked(*itemInfo, static_cast<int>(index));
}

void QwtLegend_connect_clicked(QwtLegend* self, intptr_t slot) {
	QwtLegend::connect(self, static_cast<void (QwtLegend::*)(const QVariant&, int)>(&QwtLegend::clicked), self, [=](const QVariant& itemInfo, int index) {
		const QVariant& itemInfo_ret = itemInfo;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&itemInfo_ret);
		int sigval2 = index;
		miqt_exec_callback_QwtLegend_clicked(slot, sigval1, sigval2);
	});
}

void QwtLegend_checked(QwtLegend* self, QVariant* itemInfo, bool on, int index) {
	self->checked(*itemInfo, on, static_cast<int>(index));
}

void QwtLegend_connect_checked(QwtLegend* self, intptr_t slot) {
	QwtLegend::connect(self, static_cast<void (QwtLegend::*)(const QVariant&, bool, int)>(&QwtLegend::checked), self, [=](const QVariant& itemInfo, bool on, int index) {
		const QVariant& itemInfo_ret = itemInfo;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&itemInfo_ret);
		bool sigval2 = on;
		int sigval3 = index;
		miqt_exec_callback_QwtLegend_checked(slot, sigval1, sigval2, sigval3);
	});
}

void QwtLegend_updateLegend(QwtLegend* self, QVariant* param1, struct miqt_array /* of QwtLegendData* */  param2) {
	QList<QwtLegendData> param2_QList;
	param2_QList.reserve(param2.len);
	QwtLegendData** param2_arr = static_cast<QwtLegendData**>(param2.data);
	for(size_t i = 0; i < param2.len; ++i) {
		param2_QList.push_back(*(param2_arr[i]));
	}
	self->updateLegend(*param1, param2_QList);
}

struct miqt_string QwtLegend_tr2(const char* s, const char* c) {
	QString _ret = QwtLegend::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtLegend_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtLegend::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtLegend_trUtf82(const char* s, const char* c) {
	QString _ret = QwtLegend::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtLegend_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtLegend::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtLegend_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QwtLegend_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::eventFilter(param1, param2);
}

bool QwtLegend_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QwtLegend_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtLegend*>(self)->QwtLegend::sizeHint());
}

bool QwtLegend_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QwtLegend_virtualbase_heightForWidth(const void* self, int width) {
	return static_cast<const MiqtVirtualQwtLegend*>(self)->QwtLegend::heightForWidth(static_cast<int>(width));
}

bool QwtLegend_override_virtual_renderLegend(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__renderLegend = slot;
	return true;
}

void QwtLegend_virtualbase_renderLegend(const void* self, QPainter* param1, QRectF* param2, bool fillBackground) {
	static_cast<const MiqtVirtualQwtLegend*>(self)->QwtLegend::renderLegend(param1, *param2, fillBackground);
}

bool QwtLegend_override_virtual_renderItem(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__renderItem = slot;
	return true;
}

void QwtLegend_virtualbase_renderItem(const void* self, QPainter* param1, QWidget* param2, QRectF* param3, bool fillBackground) {
	static_cast<const MiqtVirtualQwtLegend*>(self)->QwtLegend::renderItem(param1, param2, *param3, fillBackground);
}

bool QwtLegend_override_virtual_isEmpty(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isEmpty = slot;
	return true;
}

bool QwtLegend_virtualbase_isEmpty(const void* self) {
	return static_cast<const MiqtVirtualQwtLegend*>(self)->QwtLegend::isEmpty();
}

bool QwtLegend_override_virtual_scrollExtent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollExtent = slot;
	return true;
}

int QwtLegend_virtualbase_scrollExtent(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtLegend*>(self)->QwtLegend::scrollExtent(static_cast<Qt::Orientation>(param1));
}

bool QwtLegend_override_virtual_updateLegend(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateLegend = slot;
	return true;
}

void QwtLegend_virtualbase_updateLegend(void* self, QVariant* param1, struct miqt_array /* of QwtLegendData* */  param2) {
	QList<QwtLegendData> param2_QList;
	param2_QList.reserve(param2.len);
	QwtLegendData** param2_arr = static_cast<QwtLegendData**>(param2.data);
	for(size_t i = 0; i < param2.len; ++i) {
		param2_QList.push_back(*(param2_arr[i]));
	}
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::updateLegend(*param1, param2_QList);
}

bool QwtLegend_override_virtual_createWidget(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createWidget = slot;
	return true;
}

QWidget* QwtLegend_virtualbase_createWidget(const void* self, QwtLegendData* param1) {
	return static_cast<const MiqtVirtualQwtLegend*>(self)->QwtLegend::createWidget(*param1);
}

bool QwtLegend_override_virtual_updateWidget(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateWidget = slot;
	return true;
}

void QwtLegend_virtualbase_updateWidget(void* self, QWidget* widget, QwtLegendData* param2) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::updateWidget(widget, *param2);
}

bool QwtLegend_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QwtLegend_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::event(e);
}

bool QwtLegend_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QwtLegend_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::paintEvent(param1);
}

bool QwtLegend_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QwtLegend_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::changeEvent(param1);
}

bool QwtLegend_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QwtLegend_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtLegend*>(self)->QwtLegend::devType();
}

bool QwtLegend_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QwtLegend_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::setVisible(visible);
}

bool QwtLegend_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QwtLegend_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtLegend*>(self)->QwtLegend::minimumSizeHint());
}

bool QwtLegend_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QwtLegend_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtLegend*>(self)->QwtLegend::hasHeightForWidth();
}

bool QwtLegend_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QwtLegend_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtLegend*>(self)->QwtLegend::paintEngine();
}

bool QwtLegend_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QwtLegend_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::mousePressEvent(event);
}

bool QwtLegend_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QwtLegend_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::mouseReleaseEvent(event);
}

bool QwtLegend_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QwtLegend_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::mouseDoubleClickEvent(event);
}

bool QwtLegend_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QwtLegend_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::mouseMoveEvent(event);
}

bool QwtLegend_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QwtLegend_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::wheelEvent(event);
}

bool QwtLegend_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QwtLegend_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::keyPressEvent(event);
}

bool QwtLegend_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QwtLegend_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::keyReleaseEvent(event);
}

bool QwtLegend_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QwtLegend_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::focusInEvent(event);
}

bool QwtLegend_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QwtLegend_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::focusOutEvent(event);
}

bool QwtLegend_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QwtLegend_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::enterEvent(event);
}

bool QwtLegend_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QwtLegend_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::leaveEvent(event);
}

bool QwtLegend_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QwtLegend_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::moveEvent(event);
}

bool QwtLegend_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QwtLegend_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::resizeEvent(event);
}

bool QwtLegend_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QwtLegend_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::closeEvent(event);
}

bool QwtLegend_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QwtLegend_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::contextMenuEvent(event);
}

bool QwtLegend_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QwtLegend_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::tabletEvent(event);
}

bool QwtLegend_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QwtLegend_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::actionEvent(event);
}

bool QwtLegend_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QwtLegend_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::dragEnterEvent(event);
}

bool QwtLegend_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QwtLegend_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::dragMoveEvent(event);
}

bool QwtLegend_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QwtLegend_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::dragLeaveEvent(event);
}

bool QwtLegend_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QwtLegend_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::dropEvent(event);
}

bool QwtLegend_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QwtLegend_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::showEvent(event);
}

bool QwtLegend_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QwtLegend_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::hideEvent(event);
}

bool QwtLegend_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QwtLegend_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtLegend_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QwtLegend_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtLegend*>(self)->QwtLegend::metric(static_cast<MiqtVirtualQwtLegend::PaintDeviceMetric>(param1));
}

bool QwtLegend_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QwtLegend_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtLegend*>(self)->QwtLegend::initPainter(painter);
}

bool QwtLegend_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QwtLegend_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtLegend*>(self)->QwtLegend::redirected(offset);
}

bool QwtLegend_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QwtLegend_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtLegend*>(self)->QwtLegend::sharedPainter();
}

bool QwtLegend_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QwtLegend_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::inputMethodEvent(param1);
}

bool QwtLegend_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QwtLegend_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtLegend*>(self)->QwtLegend::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtLegend_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QwtLegend_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::focusNextPrevChild(next);
}

bool QwtLegend_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QwtLegend_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::timerEvent(event);
}

bool QwtLegend_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QwtLegend_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::childEvent(event);
}

bool QwtLegend_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QwtLegend_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::customEvent(event);
}

bool QwtLegend_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QwtLegend_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::connectNotify(*signal);
}

bool QwtLegend_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QwtLegend_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtLegend*>(self)->QwtLegend::disconnectNotify(*signal);
}

void QwtLegend_protectedbase_itemClicked(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->itemClicked();
}

void QwtLegend_protectedbase_itemChecked(bool* _dynamic_cast_ok, void* self, bool param1) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->itemChecked(param1);
}

void QwtLegend_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QwtLegend_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QwtLegend_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtLegend_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtLegend_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtLegend_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtLegend_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtLegend_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtLegend_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtLegend_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtLegend_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtLegend* self_cast = dynamic_cast<MiqtVirtualQwtLegend*>( (QwtLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtLegend_delete(QwtLegend* self) {
	delete self;
}

