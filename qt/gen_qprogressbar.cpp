#include <QActionEvent>
#include <QByteArray>
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
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QProgressBar>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qprogressbar.h>
#include "gen_qprogressbar.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QProgressBar_ValueChanged(intptr_t, int);
struct miqt_string miqt_exec_callback_QProgressBar_Text(void*, intptr_t);
QSize* miqt_exec_callback_QProgressBar_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QProgressBar_MinimumSizeHint(void*, intptr_t);
bool miqt_exec_callback_QProgressBar_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QProgressBar_PaintEvent(void*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QProgressBar_DevType(void*, intptr_t);
void miqt_exec_callback_QProgressBar_SetVisible(void*, intptr_t, bool);
int miqt_exec_callback_QProgressBar_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QProgressBar_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QProgressBar_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QProgressBar_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QProgressBar_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QProgressBar_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QProgressBar_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QProgressBar_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QProgressBar_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QProgressBar_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QProgressBar_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QProgressBar_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QProgressBar_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QProgressBar_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QProgressBar_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QProgressBar_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QProgressBar_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QProgressBar_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QProgressBar_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QProgressBar_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QProgressBar_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QProgressBar_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QProgressBar_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QProgressBar_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QProgressBar_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QProgressBar_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QProgressBar_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QProgressBar_ChangeEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QProgressBar_Metric(void*, intptr_t, int);
void miqt_exec_callback_QProgressBar_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QProgressBar_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QProgressBar_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QProgressBar_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QProgressBar_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QProgressBar_FocusNextPrevChild(void*, intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQProgressBar final : public QProgressBar {
public:

	MiqtVirtualQProgressBar(QWidget* parent): QProgressBar(parent) {};
	MiqtVirtualQProgressBar(): QProgressBar() {};

	virtual ~MiqtVirtualQProgressBar() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Text = 0;

	// Subclass to allow providing a Go implementation
	virtual QString text() const override {
		if (handle__Text == 0) {
			return QProgressBar::text();
		}
		

		struct miqt_string callback_return_value = miqt_exec_callback_QProgressBar_Text(const_cast<MiqtVirtualQProgressBar*>(this), handle__Text);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_Text() const {

		QString _ret = QProgressBar::text();
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _b = _ret.toUtf8();
		struct miqt_string _ms;
		_ms.len = _b.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _b.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QProgressBar::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QProgressBar_SizeHint(const_cast<MiqtVirtualQProgressBar*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QProgressBar::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QProgressBar::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QProgressBar_MinimumSizeHint(const_cast<MiqtVirtualQProgressBar*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QProgressBar::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QProgressBar::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QProgressBar_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QProgressBar::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QProgressBar::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QProgressBar_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QProgressBar::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QProgressBar::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QProgressBar_DevType(const_cast<MiqtVirtualQProgressBar*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QProgressBar::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QProgressBar::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QProgressBar_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QProgressBar::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QProgressBar::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QProgressBar_HeightForWidth(const_cast<MiqtVirtualQProgressBar*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QProgressBar::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QProgressBar::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QProgressBar_HasHeightForWidth(const_cast<MiqtVirtualQProgressBar*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QProgressBar::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QProgressBar::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QProgressBar_PaintEngine(const_cast<MiqtVirtualQProgressBar*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QProgressBar::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QProgressBar::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QProgressBar::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QProgressBar::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QProgressBar::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QProgressBar::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QProgressBar::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QProgressBar::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QProgressBar::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QProgressBar::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QProgressBar::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QProgressBar::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QProgressBar::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QProgressBar::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QProgressBar::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QProgressBar::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QProgressBar::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QProgressBar::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QProgressBar::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QProgressBar::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QProgressBar::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QProgressBar::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QProgressBar::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QProgressBar::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QProgressBar::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QProgressBar::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QProgressBar::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QProgressBar::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QProgressBar::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QProgressBar::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QProgressBar::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QProgressBar::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QProgressBar::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QProgressBar::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QProgressBar::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QProgressBar::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QProgressBar::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QProgressBar::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QProgressBar::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QProgressBar::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QProgressBar::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QProgressBar::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QProgressBar::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QProgressBar::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QProgressBar::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QProgressBar::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QProgressBar::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QProgressBar::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QProgressBar_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QProgressBar::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QProgressBar::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QProgressBar_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QProgressBar::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QProgressBar::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QProgressBar_Metric(const_cast<MiqtVirtualQProgressBar*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QProgressBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QProgressBar::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QProgressBar_InitPainter(const_cast<MiqtVirtualQProgressBar*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QProgressBar::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QProgressBar::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QProgressBar_Redirected(const_cast<MiqtVirtualQProgressBar*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QProgressBar::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QProgressBar::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QProgressBar_SharedPainter(const_cast<MiqtVirtualQProgressBar*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QProgressBar::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QProgressBar::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QProgressBar_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QProgressBar::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QProgressBar::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QProgressBar_InputMethodQuery(const_cast<MiqtVirtualQProgressBar*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QProgressBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QProgressBar::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QProgressBar_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QProgressBar::focusNextPrevChild(next);

	}

};

QProgressBar* QProgressBar_new(QWidget* parent) {
	return new MiqtVirtualQProgressBar(parent);
}

QProgressBar* QProgressBar_new2() {
	return new MiqtVirtualQProgressBar();
}

void QProgressBar_virtbase(QProgressBar* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QProgressBar_MetaObject(const QProgressBar* self) {
	return (QMetaObject*) self->metaObject();
}

void* QProgressBar_Metacast(QProgressBar* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QProgressBar_Tr(const char* s) {
	QString _ret = QProgressBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProgressBar_TrUtf8(const char* s) {
	QString _ret = QProgressBar::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QProgressBar_Minimum(const QProgressBar* self) {
	return self->minimum();
}

int QProgressBar_Maximum(const QProgressBar* self) {
	return self->maximum();
}

int QProgressBar_Value(const QProgressBar* self) {
	return self->value();
}

struct miqt_string QProgressBar_Text(const QProgressBar* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProgressBar_SetTextVisible(QProgressBar* self, bool visible) {
	self->setTextVisible(visible);
}

bool QProgressBar_IsTextVisible(const QProgressBar* self) {
	return self->isTextVisible();
}

int QProgressBar_Alignment(const QProgressBar* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QProgressBar_SetAlignment(QProgressBar* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

QSize* QProgressBar_SizeHint(const QProgressBar* self) {
	return new QSize(self->sizeHint());
}

QSize* QProgressBar_MinimumSizeHint(const QProgressBar* self) {
	return new QSize(self->minimumSizeHint());
}

int QProgressBar_Orientation(const QProgressBar* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QProgressBar_SetInvertedAppearance(QProgressBar* self, bool invert) {
	self->setInvertedAppearance(invert);
}

bool QProgressBar_InvertedAppearance(const QProgressBar* self) {
	return self->invertedAppearance();
}

void QProgressBar_SetTextDirection(QProgressBar* self, int textDirection) {
	self->setTextDirection(static_cast<QProgressBar::Direction>(textDirection));
}

int QProgressBar_TextDirection(const QProgressBar* self) {
	QProgressBar::Direction _ret = self->textDirection();
	return static_cast<int>(_ret);
}

void QProgressBar_SetFormat(QProgressBar* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	self->setFormat(format_QString);
}

void QProgressBar_ResetFormat(QProgressBar* self) {
	self->resetFormat();
}

struct miqt_string QProgressBar_Format(const QProgressBar* self) {
	QString _ret = self->format();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProgressBar_Reset(QProgressBar* self) {
	self->reset();
}

void QProgressBar_SetRange(QProgressBar* self, int minimum, int maximum) {
	self->setRange(static_cast<int>(minimum), static_cast<int>(maximum));
}

void QProgressBar_SetMinimum(QProgressBar* self, int minimum) {
	self->setMinimum(static_cast<int>(minimum));
}

void QProgressBar_SetMaximum(QProgressBar* self, int maximum) {
	self->setMaximum(static_cast<int>(maximum));
}

void QProgressBar_SetValue(QProgressBar* self, int value) {
	self->setValue(static_cast<int>(value));
}

void QProgressBar_SetOrientation(QProgressBar* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

void QProgressBar_ValueChanged(QProgressBar* self, int value) {
	self->valueChanged(static_cast<int>(value));
}

void QProgressBar_connect_ValueChanged(QProgressBar* self, intptr_t slot) {
	MiqtVirtualQProgressBar::connect(self, static_cast<void (QProgressBar::*)(int)>(&QProgressBar::valueChanged), self, [=](int value) {
		int sigval1 = value;
		miqt_exec_callback_QProgressBar_ValueChanged(slot, sigval1);
	});
}

struct miqt_string QProgressBar_Tr2(const char* s, const char* c) {
	QString _ret = QProgressBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProgressBar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QProgressBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProgressBar_TrUtf82(const char* s, const char* c) {
	QString _ret = QProgressBar::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProgressBar_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QProgressBar::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProgressBar_override_virtual_Text(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__Text = slot;
}

struct miqt_string QProgressBar_virtualbase_Text(const void* self) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_Text();
}

void QProgressBar_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__SizeHint = slot;
}

QSize* QProgressBar_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_SizeHint();
}

void QProgressBar_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QProgressBar_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_MinimumSizeHint();
}

void QProgressBar_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__Event = slot;
}

bool QProgressBar_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQProgressBar*)(self) )->virtualbase_Event(e);
}

void QProgressBar_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__PaintEvent = slot;
}

void QProgressBar_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_PaintEvent(param1);
}

void QProgressBar_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__DevType = slot;
}

int QProgressBar_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_DevType();
}

void QProgressBar_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__SetVisible = slot;
}

void QProgressBar_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_SetVisible(visible);
}

void QProgressBar_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__HeightForWidth = slot;
}

int QProgressBar_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_HeightForWidth(param1);
}

void QProgressBar_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__HasHeightForWidth = slot;
}

bool QProgressBar_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_HasHeightForWidth();
}

void QProgressBar_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QProgressBar_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_PaintEngine();
}

void QProgressBar_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__MousePressEvent = slot;
}

void QProgressBar_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_MousePressEvent(event);
}

void QProgressBar_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__MouseReleaseEvent = slot;
}

void QProgressBar_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void QProgressBar_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QProgressBar_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QProgressBar_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__MouseMoveEvent = slot;
}

void QProgressBar_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_MouseMoveEvent(event);
}

void QProgressBar_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__WheelEvent = slot;
}

void QProgressBar_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_WheelEvent(event);
}

void QProgressBar_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__KeyPressEvent = slot;
}

void QProgressBar_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_KeyPressEvent(event);
}

void QProgressBar_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__KeyReleaseEvent = slot;
}

void QProgressBar_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QProgressBar_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__FocusInEvent = slot;
}

void QProgressBar_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_FocusInEvent(event);
}

void QProgressBar_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__FocusOutEvent = slot;
}

void QProgressBar_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_FocusOutEvent(event);
}

void QProgressBar_override_virtual_EnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__EnterEvent = slot;
}

void QProgressBar_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_EnterEvent(event);
}

void QProgressBar_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__LeaveEvent = slot;
}

void QProgressBar_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_LeaveEvent(event);
}

void QProgressBar_override_virtual_MoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__MoveEvent = slot;
}

void QProgressBar_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_MoveEvent(event);
}

void QProgressBar_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__ResizeEvent = slot;
}

void QProgressBar_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_ResizeEvent(event);
}

void QProgressBar_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__CloseEvent = slot;
}

void QProgressBar_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_CloseEvent(event);
}

void QProgressBar_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__ContextMenuEvent = slot;
}

void QProgressBar_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QProgressBar_override_virtual_TabletEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__TabletEvent = slot;
}

void QProgressBar_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_TabletEvent(event);
}

void QProgressBar_override_virtual_ActionEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__ActionEvent = slot;
}

void QProgressBar_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_ActionEvent(event);
}

void QProgressBar_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__DragEnterEvent = slot;
}

void QProgressBar_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_DragEnterEvent(event);
}

void QProgressBar_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__DragMoveEvent = slot;
}

void QProgressBar_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_DragMoveEvent(event);
}

void QProgressBar_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__DragLeaveEvent = slot;
}

void QProgressBar_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QProgressBar_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__DropEvent = slot;
}

void QProgressBar_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_DropEvent(event);
}

void QProgressBar_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__ShowEvent = slot;
}

void QProgressBar_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_ShowEvent(event);
}

void QProgressBar_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__HideEvent = slot;
}

void QProgressBar_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_HideEvent(event);
}

void QProgressBar_override_virtual_NativeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__NativeEvent = slot;
}

bool QProgressBar_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQProgressBar*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

void QProgressBar_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__ChangeEvent = slot;
}

void QProgressBar_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_ChangeEvent(param1);
}

void QProgressBar_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__Metric = slot;
}

int QProgressBar_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_Metric(param1);
}

void QProgressBar_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__InitPainter = slot;
}

void QProgressBar_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_InitPainter(painter);
}

void QProgressBar_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QProgressBar_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_Redirected(offset);
}

void QProgressBar_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__SharedPainter = slot;
}

QPainter* QProgressBar_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_SharedPainter();
}

void QProgressBar_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__InputMethodEvent = slot;
}

void QProgressBar_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QProgressBar_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QProgressBar_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_InputMethodQuery(param1);
}

void QProgressBar_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QProgressBar_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQProgressBar*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QProgressBar_Delete(QProgressBar* self) {
	delete self;
}

