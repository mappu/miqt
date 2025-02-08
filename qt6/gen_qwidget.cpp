#include <QAction>
#include <QActionEvent>
#include <QBackingStore>
#include <QBitmap>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QCursor>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFontInfo>
#include <QFontMetrics>
#include <QGraphicsEffect>
#include <QGraphicsProxyWidget>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLayout>
#include <QList>
#include <QLocale>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QScreen>
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWidgetData>
#include <QWindow>
#include <qwidget.h>
#include "gen_qwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWidget_windowTitleChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QWidget_windowIconChanged(intptr_t, QIcon*);
void miqt_exec_callback_QWidget_windowIconTextChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QWidget_customContextMenuRequested(intptr_t, QPoint*);
int miqt_exec_callback_QWidget_devType(const QWidget*, intptr_t);
void miqt_exec_callback_QWidget_setVisible(QWidget*, intptr_t, bool);
QSize* miqt_exec_callback_QWidget_sizeHint(const QWidget*, intptr_t);
QSize* miqt_exec_callback_QWidget_minimumSizeHint(const QWidget*, intptr_t);
int miqt_exec_callback_QWidget_heightForWidth(const QWidget*, intptr_t, int);
bool miqt_exec_callback_QWidget_hasHeightForWidth(const QWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QWidget_paintEngine(const QWidget*, intptr_t);
bool miqt_exec_callback_QWidget_event(QWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QWidget_mousePressEvent(QWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWidget_mouseReleaseEvent(QWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWidget_mouseDoubleClickEvent(QWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWidget_mouseMoveEvent(QWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWidget_wheelEvent(QWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QWidget_keyPressEvent(QWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWidget_keyReleaseEvent(QWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWidget_focusInEvent(QWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWidget_focusOutEvent(QWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWidget_enterEvent(QWidget*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QWidget_leaveEvent(QWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QWidget_paintEvent(QWidget*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QWidget_moveEvent(QWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QWidget_resizeEvent(QWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QWidget_closeEvent(QWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QWidget_contextMenuEvent(QWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QWidget_tabletEvent(QWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QWidget_actionEvent(QWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QWidget_dragEnterEvent(QWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QWidget_dragMoveEvent(QWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QWidget_dragLeaveEvent(QWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QWidget_dropEvent(QWidget*, intptr_t, QDropEvent*);
void miqt_exec_callback_QWidget_showEvent(QWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QWidget_hideEvent(QWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QWidget_nativeEvent(QWidget*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QWidget_changeEvent(QWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QWidget_metric(const QWidget*, intptr_t, int);
void miqt_exec_callback_QWidget_initPainter(const QWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QWidget_redirected(const QWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QWidget_sharedPainter(const QWidget*, intptr_t);
void miqt_exec_callback_QWidget_inputMethodEvent(QWidget*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QWidget_inputMethodQuery(const QWidget*, intptr_t, int);
bool miqt_exec_callback_QWidget_focusNextPrevChild(QWidget*, intptr_t, bool);
bool miqt_exec_callback_QWidget_eventFilter(QWidget*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWidget_timerEvent(QWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWidget_childEvent(QWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWidget_customEvent(QWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QWidget_connectNotify(QWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWidget_disconnectNotify(QWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QWidgetData* QWidgetData_new(QWidgetData* param1) {
	return new QWidgetData(*param1);
}

void QWidgetData_operatorAssign(QWidgetData* self, QWidgetData* param1) {
	self->operator=(*param1);
}

void QWidgetData_delete(QWidgetData* self) {
	delete self;
}

class MiqtVirtualQWidget final : public QWidget {
public:

	MiqtVirtualQWidget(QWidget* parent): QWidget(parent) {};
	MiqtVirtualQWidget(): QWidget() {};
	MiqtVirtualQWidget(QWidget* parent, Qt::WindowFlags f): QWidget(parent, f) {};

	virtual ~MiqtVirtualQWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QWidget::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QWidget_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QWidget::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QWidget::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QWidget_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QWidget::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWidget_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QWidget::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QWidget::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWidget_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QWidget::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QWidget::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QWidget_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QWidget::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QWidget::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QWidget_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QWidget::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QWidget::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QWidget_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QWidget::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QWidget::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QWidget_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QWidget::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QWidget::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWidget_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QWidget::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QWidget::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QWidget::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWidget_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QWidget::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QWidget::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QWidget_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QWidget::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QWidget_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QWidget::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QWidget_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWidget_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWidget_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QWidget::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QWidget_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QWidget::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QWidget::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWidget_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QWidget::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QWidget::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QWidget_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QWidget::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QWidget::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QWidget_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QWidget::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QWidget_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QWidget::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QWidget_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QWidget::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QWidget_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QWidget::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QWidget::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QWidget_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QWidget::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QWidget::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QWidget_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QWidget::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QWidget::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QWidget_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QWidget::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QWidget_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QWidget::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QWidget::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QWidget_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QWidget::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QWidget_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QWidget_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QWidget::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QWidget_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QWidget::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QWidget_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QWidget::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QWidget_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QWidget::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QWidget::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QWidget_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QWidget::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QWidget_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QWidget::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QWidget::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QWidget_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QWidget::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QWidget::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QWidget_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QWidget::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QWidget::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QWidget_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QWidget::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QWidget::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QWidget_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QWidget_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QWidget::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QWidget::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWidget_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QWidget::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QWidget::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWidget_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QWidget::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QWidget::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWidget_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QWidget::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QWidget::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWidget_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QWidget::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QWidget::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWidget_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QWidget::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QWidget::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWidget_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QWidget::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend void QWidget_protectedbase_updateMicroFocus1(bool* _dynamic_cast_ok, void* self, int query);
	friend void QWidget_protectedbase_create1(bool* _dynamic_cast_ok, void* self, uintptr_t param1);
	friend void QWidget_protectedbase_create2(bool* _dynamic_cast_ok, void* self, uintptr_t param1, bool initializeWindow);
	friend void QWidget_protectedbase_create3(bool* _dynamic_cast_ok, void* self, uintptr_t param1, bool initializeWindow, bool destroyOldWindow);
	friend void QWidget_protectedbase_destroy1(bool* _dynamic_cast_ok, void* self, bool destroyWindow);
	friend void QWidget_protectedbase_destroy2(bool* _dynamic_cast_ok, void* self, bool destroyWindow, bool destroySubWindows);
	friend QObject* QWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QWidget* QWidget_new(QWidget* parent) {
	return new MiqtVirtualQWidget(parent);
}

QWidget* QWidget_new2() {
	return new MiqtVirtualQWidget();
}

QWidget* QWidget_new3(QWidget* parent, int f) {
	return new MiqtVirtualQWidget(parent, static_cast<Qt::WindowFlags>(f));
}

void QWidget_virtbase(QWidget* src, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(src);
}

QMetaObject* QWidget_metaObject(const QWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWidget_metacast(QWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWidget_tr(const char* s) {
	QString _ret = QWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QWidget_devType(const QWidget* self) {
	return self->devType();
}

uintptr_t QWidget_winId(const QWidget* self) {
	WId _ret = self->winId();
	return static_cast<uintptr_t>(_ret);
}

void QWidget_createWinId(QWidget* self) {
	self->createWinId();
}

uintptr_t QWidget_internalWinId(const QWidget* self) {
	WId _ret = self->internalWinId();
	return static_cast<uintptr_t>(_ret);
}

uintptr_t QWidget_effectiveWinId(const QWidget* self) {
	WId _ret = self->effectiveWinId();
	return static_cast<uintptr_t>(_ret);
}

QStyle* QWidget_style(const QWidget* self) {
	return self->style();
}

void QWidget_setStyle(QWidget* self, QStyle* style) {
	self->setStyle(style);
}

bool QWidget_isTopLevel(const QWidget* self) {
	return self->isTopLevel();
}

bool QWidget_isWindow(const QWidget* self) {
	return self->isWindow();
}

bool QWidget_isModal(const QWidget* self) {
	return self->isModal();
}

int QWidget_windowModality(const QWidget* self) {
	Qt::WindowModality _ret = self->windowModality();
	return static_cast<int>(_ret);
}

void QWidget_setWindowModality(QWidget* self, int windowModality) {
	self->setWindowModality(static_cast<Qt::WindowModality>(windowModality));
}

bool QWidget_isEnabled(const QWidget* self) {
	return self->isEnabled();
}

bool QWidget_isEnabledTo(const QWidget* self, QWidget* param1) {
	return self->isEnabledTo(param1);
}

void QWidget_setEnabled(QWidget* self, bool enabled) {
	self->setEnabled(enabled);
}

void QWidget_setDisabled(QWidget* self, bool disabled) {
	self->setDisabled(disabled);
}

void QWidget_setWindowModified(QWidget* self, bool windowModified) {
	self->setWindowModified(windowModified);
}

QRect* QWidget_frameGeometry(const QWidget* self) {
	return new QRect(self->frameGeometry());
}

QRect* QWidget_geometry(const QWidget* self) {
	const QRect& _ret = self->geometry();
	// Cast returned reference into pointer
	return const_cast<QRect*>(&_ret);
}

QRect* QWidget_normalGeometry(const QWidget* self) {
	return new QRect(self->normalGeometry());
}

int QWidget_x(const QWidget* self) {
	return self->x();
}

int QWidget_y(const QWidget* self) {
	return self->y();
}

QPoint* QWidget_pos(const QWidget* self) {
	return new QPoint(self->pos());
}

QSize* QWidget_frameSize(const QWidget* self) {
	return new QSize(self->frameSize());
}

QSize* QWidget_size(const QWidget* self) {
	return new QSize(self->size());
}

int QWidget_width(const QWidget* self) {
	return self->width();
}

int QWidget_height(const QWidget* self) {
	return self->height();
}

QRect* QWidget_rect(const QWidget* self) {
	return new QRect(self->rect());
}

QRect* QWidget_childrenRect(const QWidget* self) {
	return new QRect(self->childrenRect());
}

QRegion* QWidget_childrenRegion(const QWidget* self) {
	return new QRegion(self->childrenRegion());
}

QSize* QWidget_minimumSize(const QWidget* self) {
	return new QSize(self->minimumSize());
}

QSize* QWidget_maximumSize(const QWidget* self) {
	return new QSize(self->maximumSize());
}

int QWidget_minimumWidth(const QWidget* self) {
	return self->minimumWidth();
}

int QWidget_minimumHeight(const QWidget* self) {
	return self->minimumHeight();
}

int QWidget_maximumWidth(const QWidget* self) {
	return self->maximumWidth();
}

int QWidget_maximumHeight(const QWidget* self) {
	return self->maximumHeight();
}

void QWidget_setMinimumSize(QWidget* self, QSize* minimumSize) {
	self->setMinimumSize(*minimumSize);
}

void QWidget_setMinimumSize2(QWidget* self, int minw, int minh) {
	self->setMinimumSize(static_cast<int>(minw), static_cast<int>(minh));
}

void QWidget_setMaximumSize(QWidget* self, QSize* maximumSize) {
	self->setMaximumSize(*maximumSize);
}

void QWidget_setMaximumSize2(QWidget* self, int maxw, int maxh) {
	self->setMaximumSize(static_cast<int>(maxw), static_cast<int>(maxh));
}

void QWidget_setMinimumWidth(QWidget* self, int minw) {
	self->setMinimumWidth(static_cast<int>(minw));
}

void QWidget_setMinimumHeight(QWidget* self, int minh) {
	self->setMinimumHeight(static_cast<int>(minh));
}

void QWidget_setMaximumWidth(QWidget* self, int maxw) {
	self->setMaximumWidth(static_cast<int>(maxw));
}

void QWidget_setMaximumHeight(QWidget* self, int maxh) {
	self->setMaximumHeight(static_cast<int>(maxh));
}

QSize* QWidget_sizeIncrement(const QWidget* self) {
	return new QSize(self->sizeIncrement());
}

void QWidget_setSizeIncrement(QWidget* self, QSize* sizeIncrement) {
	self->setSizeIncrement(*sizeIncrement);
}

void QWidget_setSizeIncrement2(QWidget* self, int w, int h) {
	self->setSizeIncrement(static_cast<int>(w), static_cast<int>(h));
}

QSize* QWidget_baseSize(const QWidget* self) {
	return new QSize(self->baseSize());
}

void QWidget_setBaseSize(QWidget* self, QSize* baseSize) {
	self->setBaseSize(*baseSize);
}

void QWidget_setBaseSize2(QWidget* self, int basew, int baseh) {
	self->setBaseSize(static_cast<int>(basew), static_cast<int>(baseh));
}

void QWidget_setFixedSize(QWidget* self, QSize* fixedSize) {
	self->setFixedSize(*fixedSize);
}

void QWidget_setFixedSize2(QWidget* self, int w, int h) {
	self->setFixedSize(static_cast<int>(w), static_cast<int>(h));
}

void QWidget_setFixedWidth(QWidget* self, int w) {
	self->setFixedWidth(static_cast<int>(w));
}

void QWidget_setFixedHeight(QWidget* self, int h) {
	self->setFixedHeight(static_cast<int>(h));
}

QPointF* QWidget_mapToGlobal(const QWidget* self, QPointF* param1) {
	return new QPointF(self->mapToGlobal(*param1));
}

QPoint* QWidget_mapToGlobalWithQPoint(const QWidget* self, QPoint* param1) {
	return new QPoint(self->mapToGlobal(*param1));
}

QPointF* QWidget_mapFromGlobal(const QWidget* self, QPointF* param1) {
	return new QPointF(self->mapFromGlobal(*param1));
}

QPoint* QWidget_mapFromGlobalWithQPoint(const QWidget* self, QPoint* param1) {
	return new QPoint(self->mapFromGlobal(*param1));
}

QPointF* QWidget_mapToParent(const QWidget* self, QPointF* param1) {
	return new QPointF(self->mapToParent(*param1));
}

QPoint* QWidget_mapToParentWithQPoint(const QWidget* self, QPoint* param1) {
	return new QPoint(self->mapToParent(*param1));
}

QPointF* QWidget_mapFromParent(const QWidget* self, QPointF* param1) {
	return new QPointF(self->mapFromParent(*param1));
}

QPoint* QWidget_mapFromParentWithQPoint(const QWidget* self, QPoint* param1) {
	return new QPoint(self->mapFromParent(*param1));
}

QPointF* QWidget_mapTo(const QWidget* self, QWidget* param1, QPointF* param2) {
	return new QPointF(self->mapTo(param1, *param2));
}

QPoint* QWidget_mapTo2(const QWidget* self, QWidget* param1, QPoint* param2) {
	return new QPoint(self->mapTo(param1, *param2));
}

QPointF* QWidget_mapFrom(const QWidget* self, QWidget* param1, QPointF* param2) {
	return new QPointF(self->mapFrom(param1, *param2));
}

QPoint* QWidget_mapFrom2(const QWidget* self, QWidget* param1, QPoint* param2) {
	return new QPoint(self->mapFrom(param1, *param2));
}

QWidget* QWidget_window(const QWidget* self) {
	return self->window();
}

QWidget* QWidget_nativeParentWidget(const QWidget* self) {
	return self->nativeParentWidget();
}

QWidget* QWidget_topLevelWidget(const QWidget* self) {
	return self->topLevelWidget();
}

QPalette* QWidget_palette(const QWidget* self) {
	const QPalette& _ret = self->palette();
	// Cast returned reference into pointer
	return const_cast<QPalette*>(&_ret);
}

void QWidget_setPalette(QWidget* self, QPalette* palette) {
	self->setPalette(*palette);
}

void QWidget_setBackgroundRole(QWidget* self, int backgroundRole) {
	self->setBackgroundRole(static_cast<QPalette::ColorRole>(backgroundRole));
}

int QWidget_backgroundRole(const QWidget* self) {
	QPalette::ColorRole _ret = self->backgroundRole();
	return static_cast<int>(_ret);
}

void QWidget_setForegroundRole(QWidget* self, int foregroundRole) {
	self->setForegroundRole(static_cast<QPalette::ColorRole>(foregroundRole));
}

int QWidget_foregroundRole(const QWidget* self) {
	QPalette::ColorRole _ret = self->foregroundRole();
	return static_cast<int>(_ret);
}

QFont* QWidget_font(const QWidget* self) {
	const QFont& _ret = self->font();
	// Cast returned reference into pointer
	return const_cast<QFont*>(&_ret);
}

void QWidget_setFont(QWidget* self, QFont* font) {
	self->setFont(*font);
}

QFontMetrics* QWidget_fontMetrics(const QWidget* self) {
	return new QFontMetrics(self->fontMetrics());
}

QFontInfo* QWidget_fontInfo(const QWidget* self) {
	return new QFontInfo(self->fontInfo());
}

QCursor* QWidget_cursor(const QWidget* self) {
	return new QCursor(self->cursor());
}

void QWidget_setCursor(QWidget* self, QCursor* cursor) {
	self->setCursor(*cursor);
}

void QWidget_unsetCursor(QWidget* self) {
	self->unsetCursor();
}

void QWidget_setMouseTracking(QWidget* self, bool enable) {
	self->setMouseTracking(enable);
}

bool QWidget_hasMouseTracking(const QWidget* self) {
	return self->hasMouseTracking();
}

bool QWidget_underMouse(const QWidget* self) {
	return self->underMouse();
}

void QWidget_setTabletTracking(QWidget* self, bool enable) {
	self->setTabletTracking(enable);
}

bool QWidget_hasTabletTracking(const QWidget* self) {
	return self->hasTabletTracking();
}

void QWidget_setMask(QWidget* self, QBitmap* mask) {
	self->setMask(*mask);
}

void QWidget_setMaskWithMask(QWidget* self, QRegion* mask) {
	self->setMask(*mask);
}

QRegion* QWidget_mask(const QWidget* self) {
	return new QRegion(self->mask());
}

void QWidget_clearMask(QWidget* self) {
	self->clearMask();
}

void QWidget_render(QWidget* self, QPaintDevice* target) {
	self->render(target);
}

void QWidget_renderWithPainter(QWidget* self, QPainter* painter) {
	self->render(painter);
}

QPixmap* QWidget_grab(QWidget* self) {
	return new QPixmap(self->grab());
}

QGraphicsEffect* QWidget_graphicsEffect(const QWidget* self) {
	return self->graphicsEffect();
}

void QWidget_setGraphicsEffect(QWidget* self, QGraphicsEffect* effect) {
	self->setGraphicsEffect(effect);
}

void QWidget_grabGesture(QWidget* self, int type) {
	self->grabGesture(static_cast<Qt::GestureType>(type));
}

void QWidget_ungrabGesture(QWidget* self, int type) {
	self->ungrabGesture(static_cast<Qt::GestureType>(type));
}

void QWidget_setWindowTitle(QWidget* self, struct miqt_string windowTitle) {
	QString windowTitle_QString = QString::fromUtf8(windowTitle.data, windowTitle.len);
	self->setWindowTitle(windowTitle_QString);
}

void QWidget_setStyleSheet(QWidget* self, struct miqt_string styleSheet) {
	QString styleSheet_QString = QString::fromUtf8(styleSheet.data, styleSheet.len);
	self->setStyleSheet(styleSheet_QString);
}

struct miqt_string QWidget_styleSheet(const QWidget* self) {
	QString _ret = self->styleSheet();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWidget_windowTitle(const QWidget* self) {
	QString _ret = self->windowTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidget_setWindowIcon(QWidget* self, QIcon* icon) {
	self->setWindowIcon(*icon);
}

QIcon* QWidget_windowIcon(const QWidget* self) {
	return new QIcon(self->windowIcon());
}

void QWidget_setWindowIconText(QWidget* self, struct miqt_string windowIconText) {
	QString windowIconText_QString = QString::fromUtf8(windowIconText.data, windowIconText.len);
	self->setWindowIconText(windowIconText_QString);
}

struct miqt_string QWidget_windowIconText(const QWidget* self) {
	QString _ret = self->windowIconText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidget_setWindowRole(QWidget* self, struct miqt_string windowRole) {
	QString windowRole_QString = QString::fromUtf8(windowRole.data, windowRole.len);
	self->setWindowRole(windowRole_QString);
}

struct miqt_string QWidget_windowRole(const QWidget* self) {
	QString _ret = self->windowRole();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidget_setWindowFilePath(QWidget* self, struct miqt_string filePath) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->setWindowFilePath(filePath_QString);
}

struct miqt_string QWidget_windowFilePath(const QWidget* self) {
	QString _ret = self->windowFilePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidget_setWindowOpacity(QWidget* self, double level) {
	self->setWindowOpacity(static_cast<qreal>(level));
}

double QWidget_windowOpacity(const QWidget* self) {
	qreal _ret = self->windowOpacity();
	return static_cast<double>(_ret);
}

bool QWidget_isWindowModified(const QWidget* self) {
	return self->isWindowModified();
}

void QWidget_setToolTip(QWidget* self, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setToolTip(toolTip_QString);
}

struct miqt_string QWidget_toolTip(const QWidget* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidget_setToolTipDuration(QWidget* self, int msec) {
	self->setToolTipDuration(static_cast<int>(msec));
}

int QWidget_toolTipDuration(const QWidget* self) {
	return self->toolTipDuration();
}

void QWidget_setStatusTip(QWidget* self, struct miqt_string statusTip) {
	QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
	self->setStatusTip(statusTip_QString);
}

struct miqt_string QWidget_statusTip(const QWidget* self) {
	QString _ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidget_setWhatsThis(QWidget* self, struct miqt_string whatsThis) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
	self->setWhatsThis(whatsThis_QString);
}

struct miqt_string QWidget_whatsThis(const QWidget* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWidget_accessibleName(const QWidget* self) {
	QString _ret = self->accessibleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidget_setAccessibleName(QWidget* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setAccessibleName(name_QString);
}

struct miqt_string QWidget_accessibleDescription(const QWidget* self) {
	QString _ret = self->accessibleDescription();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidget_setAccessibleDescription(QWidget* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->setAccessibleDescription(description_QString);
}

void QWidget_setLayoutDirection(QWidget* self, int direction) {
	self->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

int QWidget_layoutDirection(const QWidget* self) {
	Qt::LayoutDirection _ret = self->layoutDirection();
	return static_cast<int>(_ret);
}

void QWidget_unsetLayoutDirection(QWidget* self) {
	self->unsetLayoutDirection();
}

void QWidget_setLocale(QWidget* self, QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QWidget_locale(const QWidget* self) {
	return new QLocale(self->locale());
}

void QWidget_unsetLocale(QWidget* self) {
	self->unsetLocale();
}

bool QWidget_isRightToLeft(const QWidget* self) {
	return self->isRightToLeft();
}

bool QWidget_isLeftToRight(const QWidget* self) {
	return self->isLeftToRight();
}

void QWidget_setFocus(QWidget* self) {
	self->setFocus();
}

bool QWidget_isActiveWindow(const QWidget* self) {
	return self->isActiveWindow();
}

void QWidget_activateWindow(QWidget* self) {
	self->activateWindow();
}

void QWidget_clearFocus(QWidget* self) {
	self->clearFocus();
}

void QWidget_setFocusWithReason(QWidget* self, int reason) {
	self->setFocus(static_cast<Qt::FocusReason>(reason));
}

int QWidget_focusPolicy(const QWidget* self) {
	Qt::FocusPolicy _ret = self->focusPolicy();
	return static_cast<int>(_ret);
}

void QWidget_setFocusPolicy(QWidget* self, int policy) {
	self->setFocusPolicy(static_cast<Qt::FocusPolicy>(policy));
}

bool QWidget_hasFocus(const QWidget* self) {
	return self->hasFocus();
}

void QWidget_setTabOrder(QWidget* param1, QWidget* param2) {
	QWidget::setTabOrder(param1, param2);
}

void QWidget_setFocusProxy(QWidget* self, QWidget* focusProxy) {
	self->setFocusProxy(focusProxy);
}

QWidget* QWidget_focusProxy(const QWidget* self) {
	return self->focusProxy();
}

int QWidget_contextMenuPolicy(const QWidget* self) {
	Qt::ContextMenuPolicy _ret = self->contextMenuPolicy();
	return static_cast<int>(_ret);
}

void QWidget_setContextMenuPolicy(QWidget* self, int policy) {
	self->setContextMenuPolicy(static_cast<Qt::ContextMenuPolicy>(policy));
}

void QWidget_grabMouse(QWidget* self) {
	self->grabMouse();
}

void QWidget_grabMouseWithQCursor(QWidget* self, QCursor* param1) {
	self->grabMouse(*param1);
}

void QWidget_releaseMouse(QWidget* self) {
	self->releaseMouse();
}

void QWidget_grabKeyboard(QWidget* self) {
	self->grabKeyboard();
}

void QWidget_releaseKeyboard(QWidget* self) {
	self->releaseKeyboard();
}

int QWidget_grabShortcut(QWidget* self, QKeySequence* key) {
	return self->grabShortcut(*key);
}

void QWidget_releaseShortcut(QWidget* self, int id) {
	self->releaseShortcut(static_cast<int>(id));
}

void QWidget_setShortcutEnabled(QWidget* self, int id) {
	self->setShortcutEnabled(static_cast<int>(id));
}

void QWidget_setShortcutAutoRepeat(QWidget* self, int id) {
	self->setShortcutAutoRepeat(static_cast<int>(id));
}

QWidget* QWidget_mouseGrabber() {
	return QWidget::mouseGrabber();
}

QWidget* QWidget_keyboardGrabber() {
	return QWidget::keyboardGrabber();
}

bool QWidget_updatesEnabled(const QWidget* self) {
	return self->updatesEnabled();
}

void QWidget_setUpdatesEnabled(QWidget* self, bool enable) {
	self->setUpdatesEnabled(enable);
}

QGraphicsProxyWidget* QWidget_graphicsProxyWidget(const QWidget* self) {
	return self->graphicsProxyWidget();
}

void QWidget_update(QWidget* self) {
	self->update();
}

void QWidget_repaint(QWidget* self) {
	self->repaint();
}

void QWidget_update2(QWidget* self, int x, int y, int w, int h) {
	self->update(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QWidget_updateWithQRect(QWidget* self, QRect* param1) {
	self->update(*param1);
}

void QWidget_updateWithQRegion(QWidget* self, QRegion* param1) {
	self->update(*param1);
}

void QWidget_repaint2(QWidget* self, int x, int y, int w, int h) {
	self->repaint(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QWidget_repaintWithQRect(QWidget* self, QRect* param1) {
	self->repaint(*param1);
}

void QWidget_repaintWithQRegion(QWidget* self, QRegion* param1) {
	self->repaint(*param1);
}

void QWidget_setVisible(QWidget* self, bool visible) {
	self->setVisible(visible);
}

void QWidget_setHidden(QWidget* self, bool hidden) {
	self->setHidden(hidden);
}

void QWidget_show(QWidget* self) {
	self->show();
}

void QWidget_hide(QWidget* self) {
	self->hide();
}

void QWidget_showMinimized(QWidget* self) {
	self->showMinimized();
}

void QWidget_showMaximized(QWidget* self) {
	self->showMaximized();
}

void QWidget_showFullScreen(QWidget* self) {
	self->showFullScreen();
}

void QWidget_showNormal(QWidget* self) {
	self->showNormal();
}

bool QWidget_close(QWidget* self) {
	return self->close();
}

void QWidget_raise(QWidget* self) {
	self->raise();
}

void QWidget_lower(QWidget* self) {
	self->lower();
}

void QWidget_stackUnder(QWidget* self, QWidget* param1) {
	self->stackUnder(param1);
}

void QWidget_move(QWidget* self, int x, int y) {
	self->move(static_cast<int>(x), static_cast<int>(y));
}

void QWidget_moveWithQPoint(QWidget* self, QPoint* param1) {
	self->move(*param1);
}

void QWidget_resize(QWidget* self, int w, int h) {
	self->resize(static_cast<int>(w), static_cast<int>(h));
}

void QWidget_resizeWithQSize(QWidget* self, QSize* param1) {
	self->resize(*param1);
}

void QWidget_setGeometry(QWidget* self, int x, int y, int w, int h) {
	self->setGeometry(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QWidget_setGeometryWithGeometry(QWidget* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

struct miqt_string QWidget_saveGeometry(const QWidget* self) {
	QByteArray _qb = self->saveGeometry();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QWidget_restoreGeometry(QWidget* self, struct miqt_string geometry) {
	QByteArray geometry_QByteArray(geometry.data, geometry.len);
	return self->restoreGeometry(geometry_QByteArray);
}

void QWidget_adjustSize(QWidget* self) {
	self->adjustSize();
}

bool QWidget_isVisible(const QWidget* self) {
	return self->isVisible();
}

bool QWidget_isVisibleTo(const QWidget* self, QWidget* param1) {
	return self->isVisibleTo(param1);
}

bool QWidget_isHidden(const QWidget* self) {
	return self->isHidden();
}

bool QWidget_isMinimized(const QWidget* self) {
	return self->isMinimized();
}

bool QWidget_isMaximized(const QWidget* self) {
	return self->isMaximized();
}

bool QWidget_isFullScreen(const QWidget* self) {
	return self->isFullScreen();
}

int QWidget_windowState(const QWidget* self) {
	Qt::WindowStates _ret = self->windowState();
	return static_cast<int>(_ret);
}

void QWidget_setWindowState(QWidget* self, int state) {
	self->setWindowState(static_cast<Qt::WindowStates>(state));
}

void QWidget_overrideWindowState(QWidget* self, int state) {
	self->overrideWindowState(static_cast<Qt::WindowStates>(state));
}

QSize* QWidget_sizeHint(const QWidget* self) {
	return new QSize(self->sizeHint());
}

QSize* QWidget_minimumSizeHint(const QWidget* self) {
	return new QSize(self->minimumSizeHint());
}

QSizePolicy* QWidget_sizePolicy(const QWidget* self) {
	return new QSizePolicy(self->sizePolicy());
}

void QWidget_setSizePolicy(QWidget* self, QSizePolicy* sizePolicy) {
	self->setSizePolicy(*sizePolicy);
}

void QWidget_setSizePolicy2(QWidget* self, int horizontal, int vertical) {
	self->setSizePolicy(static_cast<QSizePolicy::Policy>(horizontal), static_cast<QSizePolicy::Policy>(vertical));
}

int QWidget_heightForWidth(const QWidget* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

bool QWidget_hasHeightForWidth(const QWidget* self) {
	return self->hasHeightForWidth();
}

QRegion* QWidget_visibleRegion(const QWidget* self) {
	return new QRegion(self->visibleRegion());
}

void QWidget_setContentsMargins(QWidget* self, int left, int top, int right, int bottom) {
	self->setContentsMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

void QWidget_setContentsMarginsWithMargins(QWidget* self, QMargins* margins) {
	self->setContentsMargins(*margins);
}

QMargins* QWidget_contentsMargins(const QWidget* self) {
	return new QMargins(self->contentsMargins());
}

QRect* QWidget_contentsRect(const QWidget* self) {
	return new QRect(self->contentsRect());
}

QLayout* QWidget_layout(const QWidget* self) {
	return self->layout();
}

void QWidget_setLayout(QWidget* self, QLayout* layout) {
	self->setLayout(layout);
}

void QWidget_updateGeometry(QWidget* self) {
	self->updateGeometry();
}

void QWidget_setParent(QWidget* self, QWidget* parent) {
	self->setParent(parent);
}

void QWidget_setParent2(QWidget* self, QWidget* parent, int f) {
	self->setParent(parent, static_cast<Qt::WindowFlags>(f));
}

void QWidget_scroll(QWidget* self, int dx, int dy) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy));
}

void QWidget_scroll2(QWidget* self, int dx, int dy, QRect* param3) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy), *param3);
}

QWidget* QWidget_focusWidget(const QWidget* self) {
	return self->focusWidget();
}

QWidget* QWidget_nextInFocusChain(const QWidget* self) {
	return self->nextInFocusChain();
}

QWidget* QWidget_previousInFocusChain(const QWidget* self) {
	return self->previousInFocusChain();
}

bool QWidget_acceptDrops(const QWidget* self) {
	return self->acceptDrops();
}

void QWidget_setAcceptDrops(QWidget* self, bool on) {
	self->setAcceptDrops(on);
}

void QWidget_addAction(QWidget* self, QAction* action) {
	self->addAction(action);
}

void QWidget_addActions(QWidget* self, struct miqt_array /* of QAction* */  actions) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions.len);
	QAction** actions_arr = static_cast<QAction**>(actions.data);
	for(size_t i = 0; i < actions.len; ++i) {
		actions_QList.push_back(actions_arr[i]);
	}
	self->addActions(actions_QList);
}

void QWidget_insertActions(QWidget* self, QAction* before, struct miqt_array /* of QAction* */  actions) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions.len);
	QAction** actions_arr = static_cast<QAction**>(actions.data);
	for(size_t i = 0; i < actions.len; ++i) {
		actions_QList.push_back(actions_arr[i]);
	}
	self->insertActions(before, actions_QList);
}

void QWidget_insertAction(QWidget* self, QAction* before, QAction* action) {
	self->insertAction(before, action);
}

void QWidget_removeAction(QWidget* self, QAction* action) {
	self->removeAction(action);
}

struct miqt_array /* of QAction* */  QWidget_actions(const QWidget* self) {
	QList<QAction *> _ret = self->actions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QAction* QWidget_addActionWithText(QWidget* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(text_QString);
}

QAction* QWidget_addAction2(QWidget* self, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(*icon, text_QString);
}

QAction* QWidget_addAction3(QWidget* self, struct miqt_string text, QKeySequence* shortcut) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(text_QString, *shortcut);
}

QAction* QWidget_addAction4(QWidget* self, QIcon* icon, struct miqt_string text, QKeySequence* shortcut) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(*icon, text_QString, *shortcut);
}

QWidget* QWidget_parentWidget(const QWidget* self) {
	return self->parentWidget();
}

void QWidget_setWindowFlags(QWidget* self, int type) {
	self->setWindowFlags(static_cast<Qt::WindowFlags>(type));
}

int QWidget_windowFlags(const QWidget* self) {
	Qt::WindowFlags _ret = self->windowFlags();
	return static_cast<int>(_ret);
}

void QWidget_setWindowFlag(QWidget* self, int param1) {
	self->setWindowFlag(static_cast<Qt::WindowType>(param1));
}

void QWidget_overrideWindowFlags(QWidget* self, int type) {
	self->overrideWindowFlags(static_cast<Qt::WindowFlags>(type));
}

int QWidget_windowType(const QWidget* self) {
	Qt::WindowType _ret = self->windowType();
	return static_cast<int>(_ret);
}

QWidget* QWidget_find(uintptr_t param1) {
	return QWidget::find(static_cast<WId>(param1));
}

QWidget* QWidget_childAt(const QWidget* self, int x, int y) {
	return self->childAt(static_cast<int>(x), static_cast<int>(y));
}

QWidget* QWidget_childAtWithQPoint(const QWidget* self, QPoint* p) {
	return self->childAt(*p);
}

void QWidget_setAttribute(QWidget* self, int param1) {
	self->setAttribute(static_cast<Qt::WidgetAttribute>(param1));
}

bool QWidget_testAttribute(const QWidget* self, int param1) {
	return self->testAttribute(static_cast<Qt::WidgetAttribute>(param1));
}

QPaintEngine* QWidget_paintEngine(const QWidget* self) {
	return self->paintEngine();
}

void QWidget_ensurePolished(const QWidget* self) {
	self->ensurePolished();
}

bool QWidget_isAncestorOf(const QWidget* self, QWidget* child) {
	return self->isAncestorOf(child);
}

bool QWidget_autoFillBackground(const QWidget* self) {
	return self->autoFillBackground();
}

void QWidget_setAutoFillBackground(QWidget* self, bool enabled) {
	self->setAutoFillBackground(enabled);
}

QBackingStore* QWidget_backingStore(const QWidget* self) {
	return self->backingStore();
}

QWindow* QWidget_windowHandle(const QWidget* self) {
	return self->windowHandle();
}

QScreen* QWidget_screen(const QWidget* self) {
	return self->screen();
}

void QWidget_setScreen(QWidget* self, QScreen* screen) {
	self->setScreen(screen);
}

QWidget* QWidget_createWindowContainer(QWindow* window) {
	return QWidget::createWindowContainer(window);
}

void QWidget_windowTitleChanged(QWidget* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->windowTitleChanged(title_QString);
}

void QWidget_connect_windowTitleChanged(QWidget* self, intptr_t slot) {
	MiqtVirtualQWidget::connect(self, static_cast<void (QWidget::*)(const QString&)>(&QWidget::windowTitleChanged), self, [=](const QString& title) {
		const QString title_ret = title;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray title_b = title_ret.toUtf8();
		struct miqt_string title_ms;
		title_ms.len = title_b.length();
		title_ms.data = static_cast<char*>(malloc(title_ms.len));
		memcpy(title_ms.data, title_b.data(), title_ms.len);
		struct miqt_string sigval1 = title_ms;
		miqt_exec_callback_QWidget_windowTitleChanged(slot, sigval1);
	});
}

void QWidget_windowIconChanged(QWidget* self, QIcon* icon) {
	self->windowIconChanged(*icon);
}

void QWidget_connect_windowIconChanged(QWidget* self, intptr_t slot) {
	MiqtVirtualQWidget::connect(self, static_cast<void (QWidget::*)(const QIcon&)>(&QWidget::windowIconChanged), self, [=](const QIcon& icon) {
		const QIcon& icon_ret = icon;
		// Cast returned reference into pointer
		QIcon* sigval1 = const_cast<QIcon*>(&icon_ret);
		miqt_exec_callback_QWidget_windowIconChanged(slot, sigval1);
	});
}

void QWidget_windowIconTextChanged(QWidget* self, struct miqt_string iconText) {
	QString iconText_QString = QString::fromUtf8(iconText.data, iconText.len);
	self->windowIconTextChanged(iconText_QString);
}

void QWidget_connect_windowIconTextChanged(QWidget* self, intptr_t slot) {
	MiqtVirtualQWidget::connect(self, static_cast<void (QWidget::*)(const QString&)>(&QWidget::windowIconTextChanged), self, [=](const QString& iconText) {
		const QString iconText_ret = iconText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray iconText_b = iconText_ret.toUtf8();
		struct miqt_string iconText_ms;
		iconText_ms.len = iconText_b.length();
		iconText_ms.data = static_cast<char*>(malloc(iconText_ms.len));
		memcpy(iconText_ms.data, iconText_b.data(), iconText_ms.len);
		struct miqt_string sigval1 = iconText_ms;
		miqt_exec_callback_QWidget_windowIconTextChanged(slot, sigval1);
	});
}

void QWidget_customContextMenuRequested(QWidget* self, QPoint* pos) {
	self->customContextMenuRequested(*pos);
}

void QWidget_connect_customContextMenuRequested(QWidget* self, intptr_t slot) {
	MiqtVirtualQWidget::connect(self, static_cast<void (QWidget::*)(const QPoint&)>(&QWidget::customContextMenuRequested), self, [=](const QPoint& pos) {
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);
		miqt_exec_callback_QWidget_customContextMenuRequested(slot, sigval1);
	});
}

QVariant* QWidget_inputMethodQuery(const QWidget* self, int param1) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

int QWidget_inputMethodHints(const QWidget* self) {
	Qt::InputMethodHints _ret = self->inputMethodHints();
	return static_cast<int>(_ret);
}

void QWidget_setInputMethodHints(QWidget* self, int hints) {
	self->setInputMethodHints(static_cast<Qt::InputMethodHints>(hints));
}

struct miqt_string QWidget_tr2(const char* s, const char* c) {
	QString _ret = QWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidget_render2(QWidget* self, QPaintDevice* target, QPoint* targetOffset) {
	self->render(target, *targetOffset);
}

void QWidget_render3(QWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion) {
	self->render(target, *targetOffset, *sourceRegion);
}

void QWidget_render4(QWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags) {
	self->render(target, *targetOffset, *sourceRegion, static_cast<QWidget::RenderFlags>(renderFlags));
}

void QWidget_render22(QWidget* self, QPainter* painter, QPoint* targetOffset) {
	self->render(painter, *targetOffset);
}

void QWidget_render32(QWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion) {
	self->render(painter, *targetOffset, *sourceRegion);
}

void QWidget_render42(QWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags) {
	self->render(painter, *targetOffset, *sourceRegion, static_cast<QWidget::RenderFlags>(renderFlags));
}

QPixmap* QWidget_grab1(QWidget* self, QRect* rectangle) {
	return new QPixmap(self->grab(*rectangle));
}

void QWidget_grabGesture2(QWidget* self, int type, int flags) {
	self->grabGesture(static_cast<Qt::GestureType>(type), static_cast<Qt::GestureFlags>(flags));
}

int QWidget_grabShortcut2(QWidget* self, QKeySequence* key, int context) {
	return self->grabShortcut(*key, static_cast<Qt::ShortcutContext>(context));
}

void QWidget_setShortcutEnabled2(QWidget* self, int id, bool enable) {
	self->setShortcutEnabled(static_cast<int>(id), enable);
}

void QWidget_setShortcutAutoRepeat2(QWidget* self, int id, bool enable) {
	self->setShortcutAutoRepeat(static_cast<int>(id), enable);
}

void QWidget_setWindowFlag2(QWidget* self, int param1, bool on) {
	self->setWindowFlag(static_cast<Qt::WindowType>(param1), on);
}

void QWidget_setAttribute2(QWidget* self, int param1, bool on) {
	self->setAttribute(static_cast<Qt::WidgetAttribute>(param1), on);
}

QWidget* QWidget_createWindowContainer2(QWindow* window, QWidget* parent) {
	return QWidget::createWindowContainer(window, parent);
}

QWidget* QWidget_createWindowContainer3(QWindow* window, QWidget* parent, int flags) {
	return QWidget::createWindowContainer(window, parent, static_cast<Qt::WindowFlags>(flags));
}

bool QWidget_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QWidget_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQWidget*)(self) )->virtualbase_devType();
}

bool QWidget_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QWidget_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_setVisible(visible);
}

bool QWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QWidget_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQWidget*)(self) )->virtualbase_sizeHint();
}

bool QWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QWidget_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQWidget*)(self) )->virtualbase_minimumSizeHint();
}

bool QWidget_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QWidget_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQWidget*)(self) )->virtualbase_heightForWidth(param1);
}

bool QWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QWidget_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQWidget*)(self) )->virtualbase_hasHeightForWidth();
}

bool QWidget_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QWidget_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQWidget*)(self) )->virtualbase_paintEngine();
}

bool QWidget_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QWidget_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQWidget*)(self) )->virtualbase_event(event);
}

bool QWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_mousePressEvent(event);
}

bool QWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_wheelEvent(event);
}

bool QWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_keyPressEvent(event);
}

bool QWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_focusInEvent(event);
}

bool QWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_focusOutEvent(event);
}

bool QWidget_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QWidget_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_enterEvent(event);
}

bool QWidget_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QWidget_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_leaveEvent(event);
}

bool QWidget_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QWidget_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_paintEvent(event);
}

bool QWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QWidget_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_moveEvent(event);
}

bool QWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_resizeEvent(event);
}

bool QWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_closeEvent(event);
}

bool QWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QWidget_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_tabletEvent(event);
}

bool QWidget_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QWidget_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_actionEvent(event);
}

bool QWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QWidget_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_dropEvent(event);
}

bool QWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QWidget_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_showEvent(event);
}

bool QWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_hideEvent(event);
}

bool QWidget_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQWidget*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QWidget_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_changeEvent(param1);
}

bool QWidget_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QWidget_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQWidget*)(self) )->virtualbase_metric(param1);
}

bool QWidget_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QWidget_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQWidget*)(self) )->virtualbase_initPainter(painter);
}

bool QWidget_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QWidget_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQWidget*)(self) )->virtualbase_redirected(offset);
}

bool QWidget_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QWidget_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQWidget*)(self) )->virtualbase_sharedPainter();
}

bool QWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QWidget_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQWidget*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQWidget*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWidget*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_timerEvent(event);
}

bool QWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_childEvent(event);
}

bool QWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QWidget_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_customEvent(event);
}

bool QWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_connectNotify(signal);
}

bool QWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_disconnectNotify(signal);
}

void QWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

void QWidget_protectedbase_updateMicroFocus1(bool* _dynamic_cast_ok, void* self, int query) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus(static_cast<Qt::InputMethodQuery>(query));

}

void QWidget_protectedbase_create1(bool* _dynamic_cast_ok, void* self, uintptr_t param1) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create(static_cast<WId>(param1));

}

void QWidget_protectedbase_create2(bool* _dynamic_cast_ok, void* self, uintptr_t param1, bool initializeWindow) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create(static_cast<WId>(param1), initializeWindow);

}

void QWidget_protectedbase_create3(bool* _dynamic_cast_ok, void* self, uintptr_t param1, bool initializeWindow, bool destroyOldWindow) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create(static_cast<WId>(param1), initializeWindow, destroyOldWindow);

}

void QWidget_protectedbase_destroy1(bool* _dynamic_cast_ok, void* self, bool destroyWindow) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy(destroyWindow);

}

void QWidget_protectedbase_destroy2(bool* _dynamic_cast_ok, void* self, bool destroyWindow, bool destroySubWindows) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy(destroyWindow, destroySubWindows);

}

QObject* QWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWidget* self_cast = dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QWidget_delete(QWidget* self) {
	delete self;
}

