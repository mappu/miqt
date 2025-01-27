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
#include <QProgressBar>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionProgressBar>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qprogressbar.h>
#include "gen_qprogressbar.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QProgressBar_ValueChanged(intptr_t, int);
struct miqt_string miqt_exec_callback_QProgressBar_Text(const QProgressBar*, intptr_t);
QSize* miqt_exec_callback_QProgressBar_SizeHint(const QProgressBar*, intptr_t);
QSize* miqt_exec_callback_QProgressBar_MinimumSizeHint(const QProgressBar*, intptr_t);
bool miqt_exec_callback_QProgressBar_Event(QProgressBar*, intptr_t, QEvent*);
void miqt_exec_callback_QProgressBar_PaintEvent(QProgressBar*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QProgressBar_InitStyleOption(const QProgressBar*, intptr_t, QStyleOptionProgressBar*);
int miqt_exec_callback_QProgressBar_DevType(const QProgressBar*, intptr_t);
void miqt_exec_callback_QProgressBar_SetVisible(QProgressBar*, intptr_t, bool);
int miqt_exec_callback_QProgressBar_HeightForWidth(const QProgressBar*, intptr_t, int);
bool miqt_exec_callback_QProgressBar_HasHeightForWidth(const QProgressBar*, intptr_t);
QPaintEngine* miqt_exec_callback_QProgressBar_PaintEngine(const QProgressBar*, intptr_t);
void miqt_exec_callback_QProgressBar_MousePressEvent(QProgressBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QProgressBar_MouseReleaseEvent(QProgressBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QProgressBar_MouseDoubleClickEvent(QProgressBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QProgressBar_MouseMoveEvent(QProgressBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QProgressBar_WheelEvent(QProgressBar*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QProgressBar_KeyPressEvent(QProgressBar*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QProgressBar_KeyReleaseEvent(QProgressBar*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QProgressBar_FocusInEvent(QProgressBar*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QProgressBar_FocusOutEvent(QProgressBar*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QProgressBar_EnterEvent(QProgressBar*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QProgressBar_LeaveEvent(QProgressBar*, intptr_t, QEvent*);
void miqt_exec_callback_QProgressBar_MoveEvent(QProgressBar*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QProgressBar_ResizeEvent(QProgressBar*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QProgressBar_CloseEvent(QProgressBar*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QProgressBar_ContextMenuEvent(QProgressBar*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QProgressBar_TabletEvent(QProgressBar*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QProgressBar_ActionEvent(QProgressBar*, intptr_t, QActionEvent*);
void miqt_exec_callback_QProgressBar_DragEnterEvent(QProgressBar*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QProgressBar_DragMoveEvent(QProgressBar*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QProgressBar_DragLeaveEvent(QProgressBar*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QProgressBar_DropEvent(QProgressBar*, intptr_t, QDropEvent*);
void miqt_exec_callback_QProgressBar_ShowEvent(QProgressBar*, intptr_t, QShowEvent*);
void miqt_exec_callback_QProgressBar_HideEvent(QProgressBar*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QProgressBar_NativeEvent(QProgressBar*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QProgressBar_ChangeEvent(QProgressBar*, intptr_t, QEvent*);
int miqt_exec_callback_QProgressBar_Metric(const QProgressBar*, intptr_t, int);
void miqt_exec_callback_QProgressBar_InitPainter(const QProgressBar*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QProgressBar_Redirected(const QProgressBar*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QProgressBar_SharedPainter(const QProgressBar*, intptr_t);
void miqt_exec_callback_QProgressBar_InputMethodEvent(QProgressBar*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QProgressBar_InputMethodQuery(const QProgressBar*, intptr_t, int);
bool miqt_exec_callback_QProgressBar_FocusNextPrevChild(QProgressBar*, intptr_t, bool);
bool miqt_exec_callback_QProgressBar_EventFilter(QProgressBar*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QProgressBar_TimerEvent(QProgressBar*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QProgressBar_ChildEvent(QProgressBar*, intptr_t, QChildEvent*);
void miqt_exec_callback_QProgressBar_CustomEvent(QProgressBar*, intptr_t, QEvent*);
void miqt_exec_callback_QProgressBar_ConnectNotify(QProgressBar*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QProgressBar_DisconnectNotify(QProgressBar*, intptr_t, QMetaMethod*);
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
		

		struct miqt_string callback_return_value = miqt_exec_callback_QProgressBar_Text(this, handle__Text);
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
		

		QSize* callback_return_value = miqt_exec_callback_QProgressBar_SizeHint(this, handle__SizeHint);

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
		

		QSize* callback_return_value = miqt_exec_callback_QProgressBar_MinimumSizeHint(this, handle__MinimumSizeHint);

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
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionProgressBar* option) const override {
		if (handle__InitStyleOption == 0) {
			QProgressBar::initStyleOption(option);
			return;
		}
		
		QStyleOptionProgressBar* sigval1 = option;

		miqt_exec_callback_QProgressBar_InitStyleOption(this, handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionProgressBar* option) const {

		QProgressBar::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QProgressBar::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QProgressBar_DevType(this, handle__DevType);

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

		int callback_return_value = miqt_exec_callback_QProgressBar_HeightForWidth(this, handle__HeightForWidth, sigval1);

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
		

		bool callback_return_value = miqt_exec_callback_QProgressBar_HasHeightForWidth(this, handle__HasHeightForWidth);

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
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QProgressBar_PaintEngine(this, handle__PaintEngine);

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
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QProgressBar::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

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
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
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
		qintptr* result_ret = result;
		intptr_t* sigval3 = (intptr_t*)(result_ret);

		bool callback_return_value = miqt_exec_callback_QProgressBar_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QProgressBar::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

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

		int callback_return_value = miqt_exec_callback_QProgressBar_Metric(this, handle__Metric, sigval1);

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

		miqt_exec_callback_QProgressBar_InitPainter(this, handle__InitPainter, sigval1);

		
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

		QPaintDevice* callback_return_value = miqt_exec_callback_QProgressBar_Redirected(this, handle__Redirected, sigval1);

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
		

		QPainter* callback_return_value = miqt_exec_callback_QProgressBar_SharedPainter(this, handle__SharedPainter);

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

		QVariant* callback_return_value = miqt_exec_callback_QProgressBar_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QProgressBar::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QProgressBar_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QProgressBar::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QProgressBar::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QProgressBar::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QProgressBar::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QProgressBar::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QProgressBar::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QProgressBar_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QProgressBar::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QProgressBar::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QProgressBar_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QProgressBar::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QProgressBar::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QProgressBar_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QProgressBar::disconnectNotify(*signal);

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

bool QProgressBar_override_virtual_Text(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Text = slot;
	return true;
}

struct miqt_string QProgressBar_virtualbase_Text(const void* self) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_Text();
}

bool QProgressBar_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QProgressBar_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_SizeHint();
}

bool QProgressBar_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QProgressBar_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_MinimumSizeHint();
}

bool QProgressBar_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QProgressBar_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQProgressBar*)(self) )->virtualbase_Event(e);
}

bool QProgressBar_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QProgressBar_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_PaintEvent(param1);
}

bool QProgressBar_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QProgressBar_virtualbase_InitStyleOption(const void* self, QStyleOptionProgressBar* option) {
	( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_InitStyleOption(option);
}

bool QProgressBar_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QProgressBar_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_DevType();
}

bool QProgressBar_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QProgressBar_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_SetVisible(visible);
}

bool QProgressBar_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QProgressBar_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QProgressBar_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QProgressBar_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_HasHeightForWidth();
}

bool QProgressBar_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QProgressBar_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_PaintEngine();
}

bool QProgressBar_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QProgressBar_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_MousePressEvent(event);
}

bool QProgressBar_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QProgressBar_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QProgressBar_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QProgressBar_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QProgressBar_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QProgressBar_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QProgressBar_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QProgressBar_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_WheelEvent(event);
}

bool QProgressBar_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QProgressBar_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QProgressBar_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QProgressBar_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QProgressBar_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QProgressBar_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_FocusInEvent(event);
}

bool QProgressBar_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QProgressBar_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QProgressBar_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QProgressBar_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_EnterEvent(event);
}

bool QProgressBar_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QProgressBar_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_LeaveEvent(event);
}

bool QProgressBar_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QProgressBar_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_MoveEvent(event);
}

bool QProgressBar_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QProgressBar_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_ResizeEvent(event);
}

bool QProgressBar_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QProgressBar_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_CloseEvent(event);
}

bool QProgressBar_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QProgressBar_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QProgressBar_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QProgressBar_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_TabletEvent(event);
}

bool QProgressBar_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QProgressBar_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_ActionEvent(event);
}

bool QProgressBar_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QProgressBar_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QProgressBar_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QProgressBar_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QProgressBar_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QProgressBar_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QProgressBar_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QProgressBar_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_DropEvent(event);
}

bool QProgressBar_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QProgressBar_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_ShowEvent(event);
}

bool QProgressBar_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QProgressBar_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_HideEvent(event);
}

bool QProgressBar_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QProgressBar_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQProgressBar*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QProgressBar_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QProgressBar_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QProgressBar_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QProgressBar_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_Metric(param1);
}

bool QProgressBar_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QProgressBar_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_InitPainter(painter);
}

bool QProgressBar_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QProgressBar_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_Redirected(offset);
}

bool QProgressBar_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QProgressBar_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_SharedPainter();
}

bool QProgressBar_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QProgressBar_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QProgressBar_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QProgressBar_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQProgressBar*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QProgressBar_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QProgressBar_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQProgressBar*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QProgressBar_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QProgressBar_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQProgressBar*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QProgressBar_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QProgressBar_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_TimerEvent(event);
}

bool QProgressBar_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QProgressBar_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_ChildEvent(event);
}

bool QProgressBar_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QProgressBar_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_CustomEvent(event);
}

bool QProgressBar_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QProgressBar_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QProgressBar_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QProgressBar_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQProgressBar*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QProgressBar_Delete(QProgressBar* self) {
	delete self;
}

