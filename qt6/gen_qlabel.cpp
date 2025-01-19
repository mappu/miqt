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
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLabel>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QMovie>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPicture>
#include <QPixmap>
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
#include <qlabel.h>
#include "gen_qlabel.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QLabel_LinkActivated(intptr_t, struct miqt_string);
void miqt_exec_callback_QLabel_LinkHovered(intptr_t, struct miqt_string);
QSize* miqt_exec_callback_QLabel_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QLabel_MinimumSizeHint(void*, intptr_t);
int miqt_exec_callback_QLabel_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QLabel_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QLabel_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QLabel_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QLabel_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QLabel_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLabel_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLabel_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLabel_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QLabel_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QLabel_FocusOutEvent(void*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QLabel_FocusNextPrevChild(void*, intptr_t, bool);
void miqt_exec_callback_QLabel_InitStyleOption(void*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QLabel_DevType(void*, intptr_t);
void miqt_exec_callback_QLabel_SetVisible(void*, intptr_t, bool);
bool miqt_exec_callback_QLabel_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QLabel_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QLabel_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLabel_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QLabel_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QLabel_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QLabel_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QLabel_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QLabel_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QLabel_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QLabel_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QLabel_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QLabel_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QLabel_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QLabel_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QLabel_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QLabel_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QLabel_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QLabel_NativeEvent(void*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QLabel_Metric(void*, intptr_t, int);
void miqt_exec_callback_QLabel_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QLabel_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QLabel_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QLabel_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QLabel_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QLabel_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QLabel_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QLabel_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QLabel_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QLabel_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QLabel_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQLabel final : public QLabel {
public:

	MiqtVirtualQLabel(QWidget* parent): QLabel(parent) {};
	MiqtVirtualQLabel(): QLabel() {};
	MiqtVirtualQLabel(const QString& text): QLabel(text) {};
	MiqtVirtualQLabel(QWidget* parent, Qt::WindowFlags f): QLabel(parent, f) {};
	MiqtVirtualQLabel(const QString& text, QWidget* parent): QLabel(text, parent) {};
	MiqtVirtualQLabel(const QString& text, QWidget* parent, Qt::WindowFlags f): QLabel(text, parent, f) {};

	virtual ~MiqtVirtualQLabel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QLabel::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QLabel_SizeHint(const_cast<MiqtVirtualQLabel*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QLabel::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QLabel::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QLabel_MinimumSizeHint(const_cast<MiqtVirtualQLabel*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QLabel::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QLabel::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QLabel_HeightForWidth(const_cast<MiqtVirtualQLabel*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QLabel::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QLabel::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QLabel_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QLabel::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* ev) override {
		if (handle__KeyPressEvent == 0) {
			QLabel::keyPressEvent(ev);
			return;
		}
		
		QKeyEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* ev) {

		QLabel::keyPressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QLabel::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QLabel_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QLabel::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QLabel::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QLabel_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QLabel::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* ev) override {
		if (handle__MousePressEvent == 0) {
			QLabel::mousePressEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* ev) {

		QLabel::mousePressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* ev) override {
		if (handle__MouseMoveEvent == 0) {
			QLabel::mouseMoveEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* ev) {

		QLabel::mouseMoveEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* ev) override {
		if (handle__MouseReleaseEvent == 0) {
			QLabel::mouseReleaseEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* ev) {

		QLabel::mouseReleaseEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* ev) override {
		if (handle__ContextMenuEvent == 0) {
			QLabel::contextMenuEvent(ev);
			return;
		}
		
		QContextMenuEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* ev) {

		QLabel::contextMenuEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* ev) override {
		if (handle__FocusInEvent == 0) {
			QLabel::focusInEvent(ev);
			return;
		}
		
		QFocusEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* ev) {

		QLabel::focusInEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* ev) override {
		if (handle__FocusOutEvent == 0) {
			QLabel::focusOutEvent(ev);
			return;
		}
		
		QFocusEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* ev) {

		QLabel::focusOutEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QLabel::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QLabel_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QLabel::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__InitStyleOption == 0) {
			QLabel::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QLabel_InitStyleOption(const_cast<MiqtVirtualQLabel*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionFrame* option) const {

		QLabel::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QLabel::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QLabel_DevType(const_cast<MiqtVirtualQLabel*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QLabel::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QLabel::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QLabel_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QLabel::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QLabel::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QLabel_HasHeightForWidth(const_cast<MiqtVirtualQLabel*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QLabel::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QLabel::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QLabel_PaintEngine(const_cast<MiqtVirtualQLabel*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QLabel::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QLabel::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QLabel_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QLabel::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QLabel::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QLabel_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QLabel::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QLabel::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QLabel_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QLabel::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QLabel::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QLabel_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QLabel::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QLabel::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QLabel_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QLabel::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QLabel::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QLabel_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QLabel::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QLabel::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QLabel_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QLabel::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QLabel::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QLabel_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QLabel::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QLabel::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QLabel_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QLabel::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QLabel::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QLabel_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QLabel::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QLabel::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QLabel_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QLabel::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QLabel::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QLabel_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QLabel::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QLabel::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QLabel_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QLabel::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QLabel::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QLabel_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QLabel::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QLabel::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QLabel_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QLabel::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QLabel::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QLabel_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QLabel::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QLabel::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QLabel_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QLabel::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QLabel::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QLabel_Metric(const_cast<MiqtVirtualQLabel*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QLabel::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QLabel::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QLabel_InitPainter(const_cast<MiqtVirtualQLabel*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QLabel::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QLabel::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QLabel_Redirected(const_cast<MiqtVirtualQLabel*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QLabel::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QLabel::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QLabel_SharedPainter(const_cast<MiqtVirtualQLabel*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QLabel::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QLabel::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QLabel_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QLabel::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QLabel::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QLabel_InputMethodQuery(const_cast<MiqtVirtualQLabel*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QLabel::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QLabel::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QLabel_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QLabel::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QLabel::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QLabel_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QLabel::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QLabel::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QLabel_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QLabel::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QLabel::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QLabel_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QLabel::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QLabel::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLabel_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QLabel::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QLabel::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLabel_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QLabel::disconnectNotify(*signal);

	}

};

QLabel* QLabel_new(QWidget* parent) {
	return new MiqtVirtualQLabel(parent);
}

QLabel* QLabel_new2() {
	return new MiqtVirtualQLabel();
}

QLabel* QLabel_new3(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQLabel(text_QString);
}

QLabel* QLabel_new4(QWidget* parent, int f) {
	return new MiqtVirtualQLabel(parent, static_cast<Qt::WindowFlags>(f));
}

QLabel* QLabel_new5(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQLabel(text_QString, parent);
}

QLabel* QLabel_new6(struct miqt_string text, QWidget* parent, int f) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQLabel(text_QString, parent, static_cast<Qt::WindowFlags>(f));
}

void QLabel_virtbase(QLabel* src, QFrame** outptr_QFrame) {
	*outptr_QFrame = static_cast<QFrame*>(src);
}

QMetaObject* QLabel_MetaObject(const QLabel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLabel_Metacast(QLabel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QLabel_Tr(const char* s) {
	QString _ret = QLabel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLabel_Text(const QLabel* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPixmap* QLabel_Pixmap(const QLabel* self, int param1) {
	return new QPixmap(self->pixmap(static_cast<Qt::ReturnByValueConstant>(param1)));
}

QPixmap* QLabel_Pixmap2(const QLabel* self) {
	return new QPixmap(self->pixmap());
}

QPicture* QLabel_Picture(const QLabel* self, int param1) {
	return new QPicture(self->picture(static_cast<Qt::ReturnByValueConstant>(param1)));
}

QPicture* QLabel_Picture2(const QLabel* self) {
	return new QPicture(self->picture());
}

QMovie* QLabel_Movie(const QLabel* self) {
	return self->movie();
}

int QLabel_TextFormat(const QLabel* self) {
	Qt::TextFormat _ret = self->textFormat();
	return static_cast<int>(_ret);
}

void QLabel_SetTextFormat(QLabel* self, int textFormat) {
	self->setTextFormat(static_cast<Qt::TextFormat>(textFormat));
}

int QLabel_Alignment(const QLabel* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QLabel_SetAlignment(QLabel* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

void QLabel_SetWordWrap(QLabel* self, bool on) {
	self->setWordWrap(on);
}

bool QLabel_WordWrap(const QLabel* self) {
	return self->wordWrap();
}

int QLabel_Indent(const QLabel* self) {
	return self->indent();
}

void QLabel_SetIndent(QLabel* self, int indent) {
	self->setIndent(static_cast<int>(indent));
}

int QLabel_Margin(const QLabel* self) {
	return self->margin();
}

void QLabel_SetMargin(QLabel* self, int margin) {
	self->setMargin(static_cast<int>(margin));
}

bool QLabel_HasScaledContents(const QLabel* self) {
	return self->hasScaledContents();
}

void QLabel_SetScaledContents(QLabel* self, bool scaledContents) {
	self->setScaledContents(scaledContents);
}

QSize* QLabel_SizeHint(const QLabel* self) {
	return new QSize(self->sizeHint());
}

QSize* QLabel_MinimumSizeHint(const QLabel* self) {
	return new QSize(self->minimumSizeHint());
}

void QLabel_SetBuddy(QLabel* self, QWidget* buddy) {
	self->setBuddy(buddy);
}

QWidget* QLabel_Buddy(const QLabel* self) {
	return self->buddy();
}

int QLabel_HeightForWidth(const QLabel* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

bool QLabel_OpenExternalLinks(const QLabel* self) {
	return self->openExternalLinks();
}

void QLabel_SetOpenExternalLinks(QLabel* self, bool open) {
	self->setOpenExternalLinks(open);
}

void QLabel_SetTextInteractionFlags(QLabel* self, int flags) {
	self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QLabel_TextInteractionFlags(const QLabel* self) {
	Qt::TextInteractionFlags _ret = self->textInteractionFlags();
	return static_cast<int>(_ret);
}

void QLabel_SetSelection(QLabel* self, int param1, int param2) {
	self->setSelection(static_cast<int>(param1), static_cast<int>(param2));
}

bool QLabel_HasSelectedText(const QLabel* self) {
	return self->hasSelectedText();
}

struct miqt_string QLabel_SelectedText(const QLabel* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QLabel_SelectionStart(const QLabel* self) {
	return self->selectionStart();
}

void QLabel_SetText(QLabel* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

void QLabel_SetPixmap(QLabel* self, QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

void QLabel_SetPicture(QLabel* self, QPicture* picture) {
	self->setPicture(*picture);
}

void QLabel_SetMovie(QLabel* self, QMovie* movie) {
	self->setMovie(movie);
}

void QLabel_SetNum(QLabel* self, int num) {
	self->setNum(static_cast<int>(num));
}

void QLabel_SetNumWithNum(QLabel* self, double num) {
	self->setNum(static_cast<double>(num));
}

void QLabel_Clear(QLabel* self) {
	self->clear();
}

void QLabel_LinkActivated(QLabel* self, struct miqt_string link) {
	QString link_QString = QString::fromUtf8(link.data, link.len);
	self->linkActivated(link_QString);
}

void QLabel_connect_LinkActivated(QLabel* self, intptr_t slot) {
	MiqtVirtualQLabel::connect(self, static_cast<void (QLabel::*)(const QString&)>(&QLabel::linkActivated), self, [=](const QString& link) {
		const QString link_ret = link;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray link_b = link_ret.toUtf8();
		struct miqt_string link_ms;
		link_ms.len = link_b.length();
		link_ms.data = static_cast<char*>(malloc(link_ms.len));
		memcpy(link_ms.data, link_b.data(), link_ms.len);
		struct miqt_string sigval1 = link_ms;
		miqt_exec_callback_QLabel_LinkActivated(slot, sigval1);
	});
}

void QLabel_LinkHovered(QLabel* self, struct miqt_string link) {
	QString link_QString = QString::fromUtf8(link.data, link.len);
	self->linkHovered(link_QString);
}

void QLabel_connect_LinkHovered(QLabel* self, intptr_t slot) {
	MiqtVirtualQLabel::connect(self, static_cast<void (QLabel::*)(const QString&)>(&QLabel::linkHovered), self, [=](const QString& link) {
		const QString link_ret = link;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray link_b = link_ret.toUtf8();
		struct miqt_string link_ms;
		link_ms.len = link_b.length();
		link_ms.data = static_cast<char*>(malloc(link_ms.len));
		memcpy(link_ms.data, link_b.data(), link_ms.len);
		struct miqt_string sigval1 = link_ms;
		miqt_exec_callback_QLabel_LinkHovered(slot, sigval1);
	});
}

struct miqt_string QLabel_Tr2(const char* s, const char* c) {
	QString _ret = QLabel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLabel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLabel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QLabel_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QLabel_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_SizeHint();
}

bool QLabel_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QLabel_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_MinimumSizeHint();
}

bool QLabel_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QLabel_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QLabel_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QLabel_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQLabel*)(self) )->virtualbase_Event(e);
}

bool QLabel_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QLabel_virtualbase_KeyPressEvent(void* self, QKeyEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_KeyPressEvent(ev);
}

bool QLabel_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QLabel_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_PaintEvent(param1);
}

bool QLabel_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QLabel_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QLabel_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QLabel_virtualbase_MousePressEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_MousePressEvent(ev);
}

bool QLabel_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QLabel_virtualbase_MouseMoveEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_MouseMoveEvent(ev);
}

bool QLabel_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QLabel_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_MouseReleaseEvent(ev);
}

bool QLabel_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QLabel_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_ContextMenuEvent(ev);
}

bool QLabel_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QLabel_virtualbase_FocusInEvent(void* self, QFocusEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_FocusInEvent(ev);
}

bool QLabel_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QLabel_virtualbase_FocusOutEvent(void* self, QFocusEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_FocusOutEvent(ev);
}

bool QLabel_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QLabel_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQLabel*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QLabel_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QLabel_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQLabel*)(self) )->virtualbase_InitStyleOption(option);
}

bool QLabel_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QLabel_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_DevType();
}

bool QLabel_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QLabel_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_SetVisible(visible);
}

bool QLabel_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QLabel_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_HasHeightForWidth();
}

bool QLabel_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QLabel_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_PaintEngine();
}

bool QLabel_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QLabel_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QLabel_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QLabel_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_WheelEvent(event);
}

bool QLabel_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QLabel_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QLabel_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QLabel_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_EnterEvent(event);
}

bool QLabel_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QLabel_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_LeaveEvent(event);
}

bool QLabel_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QLabel_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_MoveEvent(event);
}

bool QLabel_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QLabel_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_ResizeEvent(event);
}

bool QLabel_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QLabel_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_CloseEvent(event);
}

bool QLabel_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QLabel_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_TabletEvent(event);
}

bool QLabel_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QLabel_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_ActionEvent(event);
}

bool QLabel_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QLabel_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QLabel_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QLabel_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QLabel_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QLabel_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QLabel_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QLabel_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_DropEvent(event);
}

bool QLabel_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QLabel_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_ShowEvent(event);
}

bool QLabel_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QLabel_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_HideEvent(event);
}

bool QLabel_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QLabel_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQLabel*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QLabel_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QLabel_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_Metric(param1);
}

bool QLabel_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QLabel_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQLabel*)(self) )->virtualbase_InitPainter(painter);
}

bool QLabel_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QLabel_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_Redirected(offset);
}

bool QLabel_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QLabel_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_SharedPainter();
}

bool QLabel_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QLabel_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QLabel_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QLabel_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QLabel_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QLabel_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQLabel*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QLabel_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QLabel_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_TimerEvent(event);
}

bool QLabel_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QLabel_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_ChildEvent(event);
}

bool QLabel_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QLabel_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_CustomEvent(event);
}

bool QLabel_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QLabel_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QLabel_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QLabel_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QLabel_Delete(QLabel* self) {
	delete self;
}

