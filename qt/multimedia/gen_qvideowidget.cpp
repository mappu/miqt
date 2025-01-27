#include <QAbstractVideoSurface>
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
#include <QMediaBindableInterface>
#include <QMediaObject>
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
#include <QVideoWidget>
#include <QWheelEvent>
#include <QWidget>
#include <qvideowidget.h>
#include "gen_qvideowidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QVideoWidget_FullScreenChanged(intptr_t, bool);
void miqt_exec_callback_QVideoWidget_BrightnessChanged(intptr_t, int);
void miqt_exec_callback_QVideoWidget_ContrastChanged(intptr_t, int);
void miqt_exec_callback_QVideoWidget_HueChanged(intptr_t, int);
void miqt_exec_callback_QVideoWidget_SaturationChanged(intptr_t, int);
QMediaObject* miqt_exec_callback_QVideoWidget_MediaObject(const QVideoWidget*, intptr_t);
QSize* miqt_exec_callback_QVideoWidget_SizeHint(const QVideoWidget*, intptr_t);
bool miqt_exec_callback_QVideoWidget_Event(QVideoWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QVideoWidget_ShowEvent(QVideoWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QVideoWidget_HideEvent(QVideoWidget*, intptr_t, QHideEvent*);
void miqt_exec_callback_QVideoWidget_ResizeEvent(QVideoWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QVideoWidget_MoveEvent(QVideoWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QVideoWidget_PaintEvent(QVideoWidget*, intptr_t, QPaintEvent*);
bool miqt_exec_callback_QVideoWidget_SetMediaObject(QVideoWidget*, intptr_t, QMediaObject*);
int miqt_exec_callback_QVideoWidget_DevType(const QVideoWidget*, intptr_t);
void miqt_exec_callback_QVideoWidget_SetVisible(QVideoWidget*, intptr_t, bool);
QSize* miqt_exec_callback_QVideoWidget_MinimumSizeHint(const QVideoWidget*, intptr_t);
int miqt_exec_callback_QVideoWidget_HeightForWidth(const QVideoWidget*, intptr_t, int);
bool miqt_exec_callback_QVideoWidget_HasHeightForWidth(const QVideoWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QVideoWidget_PaintEngine(const QVideoWidget*, intptr_t);
void miqt_exec_callback_QVideoWidget_MousePressEvent(QVideoWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QVideoWidget_MouseReleaseEvent(QVideoWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QVideoWidget_MouseDoubleClickEvent(QVideoWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QVideoWidget_MouseMoveEvent(QVideoWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QVideoWidget_WheelEvent(QVideoWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QVideoWidget_KeyPressEvent(QVideoWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QVideoWidget_KeyReleaseEvent(QVideoWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QVideoWidget_FocusInEvent(QVideoWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QVideoWidget_FocusOutEvent(QVideoWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QVideoWidget_EnterEvent(QVideoWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QVideoWidget_LeaveEvent(QVideoWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QVideoWidget_CloseEvent(QVideoWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QVideoWidget_ContextMenuEvent(QVideoWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QVideoWidget_TabletEvent(QVideoWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QVideoWidget_ActionEvent(QVideoWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QVideoWidget_DragEnterEvent(QVideoWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QVideoWidget_DragMoveEvent(QVideoWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QVideoWidget_DragLeaveEvent(QVideoWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QVideoWidget_DropEvent(QVideoWidget*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QVideoWidget_NativeEvent(QVideoWidget*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QVideoWidget_ChangeEvent(QVideoWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QVideoWidget_Metric(const QVideoWidget*, intptr_t, int);
void miqt_exec_callback_QVideoWidget_InitPainter(const QVideoWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QVideoWidget_Redirected(const QVideoWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QVideoWidget_SharedPainter(const QVideoWidget*, intptr_t);
void miqt_exec_callback_QVideoWidget_InputMethodEvent(QVideoWidget*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QVideoWidget_InputMethodQuery(const QVideoWidget*, intptr_t, int);
bool miqt_exec_callback_QVideoWidget_FocusNextPrevChild(QVideoWidget*, intptr_t, bool);
bool miqt_exec_callback_QVideoWidget_EventFilter(QVideoWidget*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QVideoWidget_TimerEvent(QVideoWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QVideoWidget_ChildEvent(QVideoWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QVideoWidget_CustomEvent(QVideoWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QVideoWidget_ConnectNotify(QVideoWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QVideoWidget_DisconnectNotify(QVideoWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQVideoWidget final : public QVideoWidget {
public:

	MiqtVirtualQVideoWidget(QWidget* parent): QVideoWidget(parent) {};
	MiqtVirtualQVideoWidget(): QVideoWidget() {};

	virtual ~MiqtVirtualQVideoWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual QMediaObject* mediaObject() const override {
		if (handle__MediaObject == 0) {
			return QVideoWidget::mediaObject();
		}
		

		QMediaObject* callback_return_value = miqt_exec_callback_QVideoWidget_MediaObject(this, handle__MediaObject);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMediaObject* virtualbase_MediaObject() const {

		return QVideoWidget::mediaObject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QVideoWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QVideoWidget_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QVideoWidget::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QVideoWidget::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QVideoWidget_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QVideoWidget::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QVideoWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QVideoWidget::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QVideoWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QVideoWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QVideoWidget::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QVideoWidget::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QVideoWidget::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QVideoWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QVideoWidget::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QVideoWidget::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setMediaObject(QMediaObject* object) override {
		if (handle__SetMediaObject == 0) {
			return QVideoWidget::setMediaObject(object);
		}
		
		QMediaObject* sigval1 = object;

		bool callback_return_value = miqt_exec_callback_QVideoWidget_SetMediaObject(this, handle__SetMediaObject, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetMediaObject(QMediaObject* object) {

		return QVideoWidget::setMediaObject(object);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QVideoWidget::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QVideoWidget_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QVideoWidget::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QVideoWidget::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QVideoWidget_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QVideoWidget::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QVideoWidget::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QVideoWidget_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QVideoWidget::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QVideoWidget::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QVideoWidget_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QVideoWidget::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QVideoWidget::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QVideoWidget_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QVideoWidget::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QVideoWidget::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QVideoWidget_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QVideoWidget::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QVideoWidget::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QVideoWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QVideoWidget::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QVideoWidget::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QVideoWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QVideoWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QVideoWidget::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QVideoWidget::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QVideoWidget::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QVideoWidget::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QVideoWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QVideoWidget::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QVideoWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QVideoWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QVideoWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QVideoWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QVideoWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QVideoWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QVideoWidget::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QVideoWidget::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QVideoWidget::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QVideoWidget::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QVideoWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QVideoWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QVideoWidget::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QVideoWidget::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QVideoWidget::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QVideoWidget::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QVideoWidget::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QVideoWidget::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QVideoWidget::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QVideoWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QVideoWidget::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QVideoWidget::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QVideoWidget::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QVideoWidget::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QVideoWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QVideoWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QVideoWidget::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QVideoWidget_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QVideoWidget::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QVideoWidget::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QVideoWidget_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QVideoWidget::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QVideoWidget::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QVideoWidget_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QVideoWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QVideoWidget::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QVideoWidget_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QVideoWidget::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QVideoWidget::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QVideoWidget_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QVideoWidget::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QVideoWidget::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QVideoWidget_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QVideoWidget::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QVideoWidget::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QVideoWidget_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QVideoWidget::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QVideoWidget::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QVideoWidget_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QVideoWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QVideoWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QVideoWidget_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QVideoWidget::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QVideoWidget::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QVideoWidget_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QVideoWidget::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QVideoWidget::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QVideoWidget::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QVideoWidget::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QVideoWidget::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QVideoWidget::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QVideoWidget::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QVideoWidget::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVideoWidget_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QVideoWidget::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QVideoWidget::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVideoWidget_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QVideoWidget::disconnectNotify(*signal);

	}

};

QVideoWidget* QVideoWidget_new(QWidget* parent) {
	return new MiqtVirtualQVideoWidget(parent);
}

QVideoWidget* QVideoWidget_new2() {
	return new MiqtVirtualQVideoWidget();
}

void QVideoWidget_virtbase(QVideoWidget* src, QWidget** outptr_QWidget, QMediaBindableInterface** outptr_QMediaBindableInterface) {
	*outptr_QWidget = static_cast<QWidget*>(src);
	*outptr_QMediaBindableInterface = static_cast<QMediaBindableInterface*>(src);
}

QMetaObject* QVideoWidget_MetaObject(const QVideoWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVideoWidget_Metacast(QVideoWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVideoWidget_Tr(const char* s) {
	QString _ret = QVideoWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWidget_TrUtf8(const char* s) {
	QString _ret = QVideoWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMediaObject* QVideoWidget_MediaObject(const QVideoWidget* self) {
	return self->mediaObject();
}

QAbstractVideoSurface* QVideoWidget_VideoSurface(const QVideoWidget* self) {
	return self->videoSurface();
}

int QVideoWidget_AspectRatioMode(const QVideoWidget* self) {
	Qt::AspectRatioMode _ret = self->aspectRatioMode();
	return static_cast<int>(_ret);
}

int QVideoWidget_Brightness(const QVideoWidget* self) {
	return self->brightness();
}

int QVideoWidget_Contrast(const QVideoWidget* self) {
	return self->contrast();
}

int QVideoWidget_Hue(const QVideoWidget* self) {
	return self->hue();
}

int QVideoWidget_Saturation(const QVideoWidget* self) {
	return self->saturation();
}

QSize* QVideoWidget_SizeHint(const QVideoWidget* self) {
	return new QSize(self->sizeHint());
}

void QVideoWidget_SetFullScreen(QVideoWidget* self, bool fullScreen) {
	self->setFullScreen(fullScreen);
}

void QVideoWidget_SetAspectRatioMode(QVideoWidget* self, int mode) {
	self->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

void QVideoWidget_SetBrightness(QVideoWidget* self, int brightness) {
	self->setBrightness(static_cast<int>(brightness));
}

void QVideoWidget_SetContrast(QVideoWidget* self, int contrast) {
	self->setContrast(static_cast<int>(contrast));
}

void QVideoWidget_SetHue(QVideoWidget* self, int hue) {
	self->setHue(static_cast<int>(hue));
}

void QVideoWidget_SetSaturation(QVideoWidget* self, int saturation) {
	self->setSaturation(static_cast<int>(saturation));
}

void QVideoWidget_FullScreenChanged(QVideoWidget* self, bool fullScreen) {
	self->fullScreenChanged(fullScreen);
}

void QVideoWidget_connect_FullScreenChanged(QVideoWidget* self, intptr_t slot) {
	MiqtVirtualQVideoWidget::connect(self, static_cast<void (QVideoWidget::*)(bool)>(&QVideoWidget::fullScreenChanged), self, [=](bool fullScreen) {
		bool sigval1 = fullScreen;
		miqt_exec_callback_QVideoWidget_FullScreenChanged(slot, sigval1);
	});
}

void QVideoWidget_BrightnessChanged(QVideoWidget* self, int brightness) {
	self->brightnessChanged(static_cast<int>(brightness));
}

void QVideoWidget_connect_BrightnessChanged(QVideoWidget* self, intptr_t slot) {
	MiqtVirtualQVideoWidget::connect(self, static_cast<void (QVideoWidget::*)(int)>(&QVideoWidget::brightnessChanged), self, [=](int brightness) {
		int sigval1 = brightness;
		miqt_exec_callback_QVideoWidget_BrightnessChanged(slot, sigval1);
	});
}

void QVideoWidget_ContrastChanged(QVideoWidget* self, int contrast) {
	self->contrastChanged(static_cast<int>(contrast));
}

void QVideoWidget_connect_ContrastChanged(QVideoWidget* self, intptr_t slot) {
	MiqtVirtualQVideoWidget::connect(self, static_cast<void (QVideoWidget::*)(int)>(&QVideoWidget::contrastChanged), self, [=](int contrast) {
		int sigval1 = contrast;
		miqt_exec_callback_QVideoWidget_ContrastChanged(slot, sigval1);
	});
}

void QVideoWidget_HueChanged(QVideoWidget* self, int hue) {
	self->hueChanged(static_cast<int>(hue));
}

void QVideoWidget_connect_HueChanged(QVideoWidget* self, intptr_t slot) {
	MiqtVirtualQVideoWidget::connect(self, static_cast<void (QVideoWidget::*)(int)>(&QVideoWidget::hueChanged), self, [=](int hue) {
		int sigval1 = hue;
		miqt_exec_callback_QVideoWidget_HueChanged(slot, sigval1);
	});
}

void QVideoWidget_SaturationChanged(QVideoWidget* self, int saturation) {
	self->saturationChanged(static_cast<int>(saturation));
}

void QVideoWidget_connect_SaturationChanged(QVideoWidget* self, intptr_t slot) {
	MiqtVirtualQVideoWidget::connect(self, static_cast<void (QVideoWidget::*)(int)>(&QVideoWidget::saturationChanged), self, [=](int saturation) {
		int sigval1 = saturation;
		miqt_exec_callback_QVideoWidget_SaturationChanged(slot, sigval1);
	});
}

struct miqt_string QVideoWidget_Tr2(const char* s, const char* c) {
	QString _ret = QVideoWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVideoWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWidget_TrUtf82(const char* s, const char* c) {
	QString _ret = QVideoWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWidget_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QVideoWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QVideoWidget_override_virtual_MediaObject(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MediaObject = slot;
	return true;
}

QMediaObject* QVideoWidget_virtualbase_MediaObject(const void* self) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_MediaObject();
}

bool QVideoWidget_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QVideoWidget_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_SizeHint();
}

bool QVideoWidget_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QVideoWidget_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_Event(event);
}

bool QVideoWidget_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_ShowEvent(event);
}

bool QVideoWidget_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_HideEvent(event);
}

bool QVideoWidget_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_ResizeEvent(event);
}

bool QVideoWidget_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_MoveEvent(event);
}

bool QVideoWidget_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_PaintEvent(event);
}

bool QVideoWidget_override_virtual_SetMediaObject(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetMediaObject = slot;
	return true;
}

bool QVideoWidget_virtualbase_SetMediaObject(void* self, QMediaObject* object) {
	return ( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_SetMediaObject(object);
}

bool QVideoWidget_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QVideoWidget_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_DevType();
}

bool QVideoWidget_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QVideoWidget_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_SetVisible(visible);
}

bool QVideoWidget_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QVideoWidget_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_MinimumSizeHint();
}

bool QVideoWidget_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QVideoWidget_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QVideoWidget_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QVideoWidget_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_HasHeightForWidth();
}

bool QVideoWidget_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QVideoWidget_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_PaintEngine();
}

bool QVideoWidget_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_MousePressEvent(event);
}

bool QVideoWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QVideoWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QVideoWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QVideoWidget_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_WheelEvent(event);
}

bool QVideoWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QVideoWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QVideoWidget_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_FocusInEvent(event);
}

bool QVideoWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QVideoWidget_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_EnterEvent(event);
}

bool QVideoWidget_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_LeaveEvent(event);
}

bool QVideoWidget_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_CloseEvent(event);
}

bool QVideoWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QVideoWidget_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_TabletEvent(event);
}

bool QVideoWidget_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_ActionEvent(event);
}

bool QVideoWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QVideoWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QVideoWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QVideoWidget_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_DropEvent(event);
}

bool QVideoWidget_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QVideoWidget_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QVideoWidget_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QVideoWidget_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QVideoWidget_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_Metric(param1);
}

bool QVideoWidget_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QVideoWidget_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_InitPainter(painter);
}

bool QVideoWidget_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QVideoWidget_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_Redirected(offset);
}

bool QVideoWidget_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QVideoWidget_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_SharedPainter();
}

bool QVideoWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QVideoWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QVideoWidget_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QVideoWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QVideoWidget_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QVideoWidget_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QVideoWidget_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QVideoWidget_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_TimerEvent(event);
}

bool QVideoWidget_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_ChildEvent(event);
}

bool QVideoWidget_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_CustomEvent(event);
}

bool QVideoWidget_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QVideoWidget_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QVideoWidget_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QVideoWidget_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QVideoWidget_Delete(QVideoWidget* self) {
	delete self;
}

