#include <QAbstractItemModel>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QComboBox>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFontComboBox>
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
#include <QStyleOptionComboBox>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qfontcombobox.h>
#include "gen_qfontcombobox.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QFontComboBox_CurrentFontChanged(intptr_t, QFont*);
QSize* miqt_exec_callback_QFontComboBox_SizeHint(void*, intptr_t);
bool miqt_exec_callback_QFontComboBox_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QFontComboBox_SetModel(void*, intptr_t, QAbstractItemModel*);
QSize* miqt_exec_callback_QFontComboBox_MinimumSizeHint(void*, intptr_t);
void miqt_exec_callback_QFontComboBox_ShowPopup(void*, intptr_t);
void miqt_exec_callback_QFontComboBox_HidePopup(void*, intptr_t);
QVariant* miqt_exec_callback_QFontComboBox_InputMethodQuery(void*, intptr_t, int);
void miqt_exec_callback_QFontComboBox_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFontComboBox_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFontComboBox_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QFontComboBox_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QFontComboBox_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QFontComboBox_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QFontComboBox_HideEvent(void*, intptr_t, QHideEvent*);
void miqt_exec_callback_QFontComboBox_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFontComboBox_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFontComboBox_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFontComboBox_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFontComboBox_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QFontComboBox_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QFontComboBox_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QFontComboBox_InitStyleOption(void*, intptr_t, QStyleOptionComboBox*);
int miqt_exec_callback_QFontComboBox_DevType(void*, intptr_t);
void miqt_exec_callback_QFontComboBox_SetVisible(void*, intptr_t, bool);
int miqt_exec_callback_QFontComboBox_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QFontComboBox_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QFontComboBox_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QFontComboBox_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFontComboBox_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFontComboBox_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QFontComboBox_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QFontComboBox_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QFontComboBox_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QFontComboBox_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QFontComboBox_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QFontComboBox_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QFontComboBox_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QFontComboBox_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QFontComboBox_DropEvent(void*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QFontComboBox_NativeEvent(void*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QFontComboBox_Metric(void*, intptr_t, int);
void miqt_exec_callback_QFontComboBox_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QFontComboBox_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QFontComboBox_SharedPainter(void*, intptr_t);
bool miqt_exec_callback_QFontComboBox_FocusNextPrevChild(void*, intptr_t, bool);
bool miqt_exec_callback_QFontComboBox_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QFontComboBox_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QFontComboBox_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QFontComboBox_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QFontComboBox_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QFontComboBox_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFontComboBox final : public QFontComboBox {
public:

	MiqtVirtualQFontComboBox(QWidget* parent): QFontComboBox(parent) {};
	MiqtVirtualQFontComboBox(): QFontComboBox() {};

	virtual ~MiqtVirtualQFontComboBox() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QFontComboBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFontComboBox_SizeHint(const_cast<MiqtVirtualQFontComboBox*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QFontComboBox::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QFontComboBox::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QFontComboBox_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QFontComboBox::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (handle__SetModel == 0) {
			QFontComboBox::setModel(model);
			return;
		}
		
		QAbstractItemModel* sigval1 = model;

		miqt_exec_callback_QFontComboBox_SetModel(this, handle__SetModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetModel(QAbstractItemModel* model) {

		QFontComboBox::setModel(model);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QFontComboBox::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFontComboBox_MinimumSizeHint(const_cast<MiqtVirtualQFontComboBox*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QFontComboBox::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowPopup = 0;

	// Subclass to allow providing a Go implementation
	virtual void showPopup() override {
		if (handle__ShowPopup == 0) {
			QFontComboBox::showPopup();
			return;
		}
		

		miqt_exec_callback_QFontComboBox_ShowPopup(this, handle__ShowPopup);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowPopup() {

		QFontComboBox::showPopup();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HidePopup = 0;

	// Subclass to allow providing a Go implementation
	virtual void hidePopup() override {
		if (handle__HidePopup == 0) {
			QFontComboBox::hidePopup();
			return;
		}
		

		miqt_exec_callback_QFontComboBox_HidePopup(this, handle__HidePopup);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HidePopup() {

		QFontComboBox::hidePopup();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QFontComboBox::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QFontComboBox_InputMethodQuery(const_cast<MiqtVirtualQFontComboBox*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QFontComboBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__FocusInEvent == 0) {
			QFontComboBox::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* e) {

		QFontComboBox::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__FocusOutEvent == 0) {
			QFontComboBox::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* e) {

		QFontComboBox::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QFontComboBox::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QFontComboBox::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__ResizeEvent == 0) {
			QFontComboBox::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* e) {

		QFontComboBox::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__PaintEvent == 0) {
			QFontComboBox::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* e) {

		QFontComboBox::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* e) override {
		if (handle__ShowEvent == 0) {
			QFontComboBox::showEvent(e);
			return;
		}
		
		QShowEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* e) {

		QFontComboBox::showEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* e) override {
		if (handle__HideEvent == 0) {
			QFontComboBox::hideEvent(e);
			return;
		}
		
		QHideEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* e) {

		QFontComboBox::hideEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__MousePressEvent == 0) {
			QFontComboBox::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* e) {

		QFontComboBox::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__MouseReleaseEvent == 0) {
			QFontComboBox::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* e) {

		QFontComboBox::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__KeyPressEvent == 0) {
			QFontComboBox::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* e) {

		QFontComboBox::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__KeyReleaseEvent == 0) {
			QFontComboBox::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* e) {

		QFontComboBox::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__WheelEvent == 0) {
			QFontComboBox::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* e) {

		QFontComboBox::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* e) override {
		if (handle__ContextMenuEvent == 0) {
			QFontComboBox::contextMenuEvent(e);
			return;
		}
		
		QContextMenuEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* e) {

		QFontComboBox::contextMenuEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QFontComboBox::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QFontComboBox_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QFontComboBox::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionComboBox* option) const override {
		if (handle__InitStyleOption == 0) {
			QFontComboBox::initStyleOption(option);
			return;
		}
		
		QStyleOptionComboBox* sigval1 = option;

		miqt_exec_callback_QFontComboBox_InitStyleOption(const_cast<MiqtVirtualQFontComboBox*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionComboBox* option) const {

		QFontComboBox::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QFontComboBox::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QFontComboBox_DevType(const_cast<MiqtVirtualQFontComboBox*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QFontComboBox::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QFontComboBox::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QFontComboBox_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QFontComboBox::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QFontComboBox::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QFontComboBox_HeightForWidth(const_cast<MiqtVirtualQFontComboBox*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QFontComboBox::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QFontComboBox::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QFontComboBox_HasHeightForWidth(const_cast<MiqtVirtualQFontComboBox*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QFontComboBox::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QFontComboBox::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QFontComboBox_PaintEngine(const_cast<MiqtVirtualQFontComboBox*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QFontComboBox::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QFontComboBox::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QFontComboBox::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QFontComboBox::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QFontComboBox::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QFontComboBox::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QFontComboBox::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QFontComboBox::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QFontComboBox::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QFontComboBox::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QFontComboBox::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QFontComboBox::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QFontComboBox::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QFontComboBox::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QFontComboBox::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QFontComboBox::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QFontComboBox::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QFontComboBox::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QFontComboBox::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QFontComboBox::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QFontComboBox::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QFontComboBox::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QFontComboBox::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QFontComboBox::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QFontComboBox::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QFontComboBox::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QFontComboBox_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QFontComboBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QFontComboBox::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QFontComboBox_Metric(const_cast<MiqtVirtualQFontComboBox*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QFontComboBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QFontComboBox::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QFontComboBox_InitPainter(const_cast<MiqtVirtualQFontComboBox*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QFontComboBox::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QFontComboBox::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QFontComboBox_Redirected(const_cast<MiqtVirtualQFontComboBox*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QFontComboBox::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QFontComboBox::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QFontComboBox_SharedPainter(const_cast<MiqtVirtualQFontComboBox*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QFontComboBox::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QFontComboBox::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QFontComboBox_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QFontComboBox::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QFontComboBox::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QFontComboBox_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QFontComboBox::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QFontComboBox::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QFontComboBox::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QFontComboBox::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QFontComboBox::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QFontComboBox::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QFontComboBox::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QFontComboBox::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFontComboBox_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QFontComboBox::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QFontComboBox::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFontComboBox_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QFontComboBox::disconnectNotify(*signal);

	}

};

QFontComboBox* QFontComboBox_new(QWidget* parent) {
	return new MiqtVirtualQFontComboBox(parent);
}

QFontComboBox* QFontComboBox_new2() {
	return new MiqtVirtualQFontComboBox();
}

void QFontComboBox_virtbase(QFontComboBox* src, QComboBox** outptr_QComboBox) {
	*outptr_QComboBox = static_cast<QComboBox*>(src);
}

QMetaObject* QFontComboBox_MetaObject(const QFontComboBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFontComboBox_Metacast(QFontComboBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFontComboBox_Tr(const char* s) {
	QString _ret = QFontComboBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontComboBox_SetWritingSystem(QFontComboBox* self, int writingSystem) {
	self->setWritingSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem));
}

int QFontComboBox_WritingSystem(const QFontComboBox* self) {
	QFontDatabase::WritingSystem _ret = self->writingSystem();
	return static_cast<int>(_ret);
}

void QFontComboBox_SetFontFilters(QFontComboBox* self, int filters) {
	self->setFontFilters(static_cast<QFontComboBox::FontFilters>(filters));
}

int QFontComboBox_FontFilters(const QFontComboBox* self) {
	QFontComboBox::FontFilters _ret = self->fontFilters();
	return static_cast<int>(_ret);
}

QFont* QFontComboBox_CurrentFont(const QFontComboBox* self) {
	return new QFont(self->currentFont());
}

QSize* QFontComboBox_SizeHint(const QFontComboBox* self) {
	return new QSize(self->sizeHint());
}

void QFontComboBox_SetSampleTextForSystem(QFontComboBox* self, int writingSystem, struct miqt_string sampleText) {
	QString sampleText_QString = QString::fromUtf8(sampleText.data, sampleText.len);
	self->setSampleTextForSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem), sampleText_QString);
}

struct miqt_string QFontComboBox_SampleTextForSystem(const QFontComboBox* self, int writingSystem) {
	QString _ret = self->sampleTextForSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontComboBox_SetSampleTextForFont(QFontComboBox* self, struct miqt_string fontFamily, struct miqt_string sampleText) {
	QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
	QString sampleText_QString = QString::fromUtf8(sampleText.data, sampleText.len);
	self->setSampleTextForFont(fontFamily_QString, sampleText_QString);
}

struct miqt_string QFontComboBox_SampleTextForFont(const QFontComboBox* self, struct miqt_string fontFamily) {
	QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
	QString _ret = self->sampleTextForFont(fontFamily_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontComboBox_SetDisplayFont(QFontComboBox* self, struct miqt_string fontFamily, QFont* font) {
	QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
	self->setDisplayFont(fontFamily_QString, *font);
}

void QFontComboBox_SetCurrentFont(QFontComboBox* self, QFont* f) {
	self->setCurrentFont(*f);
}

void QFontComboBox_CurrentFontChanged(QFontComboBox* self, QFont* f) {
	self->currentFontChanged(*f);
}

void QFontComboBox_connect_CurrentFontChanged(QFontComboBox* self, intptr_t slot) {
	MiqtVirtualQFontComboBox::connect(self, static_cast<void (QFontComboBox::*)(const QFont&)>(&QFontComboBox::currentFontChanged), self, [=](const QFont& f) {
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		miqt_exec_callback_QFontComboBox_CurrentFontChanged(slot, sigval1);
	});
}

struct miqt_string QFontComboBox_Tr2(const char* s, const char* c) {
	QString _ret = QFontComboBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFontComboBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFontComboBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFontComboBox_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QFontComboBox_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_SizeHint();
}

bool QFontComboBox_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QFontComboBox_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_Event(e);
}

bool QFontComboBox_override_virtual_SetModel(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetModel = slot;
	return true;
}

void QFontComboBox_virtualbase_SetModel(void* self, QAbstractItemModel* model) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_SetModel(model);
}

bool QFontComboBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QFontComboBox_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_MinimumSizeHint();
}

bool QFontComboBox_override_virtual_ShowPopup(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowPopup = slot;
	return true;
}

void QFontComboBox_virtualbase_ShowPopup(void* self) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_ShowPopup();
}

bool QFontComboBox_override_virtual_HidePopup(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HidePopup = slot;
	return true;
}

void QFontComboBox_virtualbase_HidePopup(void* self) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_HidePopup();
}

bool QFontComboBox_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QFontComboBox_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QFontComboBox_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_FocusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_FocusInEvent(e);
}

bool QFontComboBox_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_FocusOutEvent(e);
}

bool QFontComboBox_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_ChangeEvent(e);
}

bool QFontComboBox_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_ResizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_ResizeEvent(e);
}

bool QFontComboBox_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_PaintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_PaintEvent(e);
}

bool QFontComboBox_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_ShowEvent(void* self, QShowEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_ShowEvent(e);
}

bool QFontComboBox_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_HideEvent(void* self, QHideEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_HideEvent(e);
}

bool QFontComboBox_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_MousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_MousePressEvent(e);
}

bool QFontComboBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_MouseReleaseEvent(e);
}

bool QFontComboBox_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_KeyPressEvent(e);
}

bool QFontComboBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_KeyReleaseEvent(e);
}

bool QFontComboBox_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_WheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_WheelEvent(e);
}

bool QFontComboBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_ContextMenuEvent(e);
}

bool QFontComboBox_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QFontComboBox_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QFontComboBox_virtualbase_InitStyleOption(const void* self, QStyleOptionComboBox* option) {
	( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_InitStyleOption(option);
}

bool QFontComboBox_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QFontComboBox_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_DevType();
}

bool QFontComboBox_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QFontComboBox_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_SetVisible(visible);
}

bool QFontComboBox_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QFontComboBox_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QFontComboBox_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QFontComboBox_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_HasHeightForWidth();
}

bool QFontComboBox_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QFontComboBox_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_PaintEngine();
}

bool QFontComboBox_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QFontComboBox_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QFontComboBox_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_EnterEvent(event);
}

bool QFontComboBox_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_LeaveEvent(event);
}

bool QFontComboBox_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_MoveEvent(event);
}

bool QFontComboBox_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_CloseEvent(event);
}

bool QFontComboBox_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_TabletEvent(event);
}

bool QFontComboBox_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_ActionEvent(event);
}

bool QFontComboBox_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QFontComboBox_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QFontComboBox_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QFontComboBox_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_DropEvent(event);
}

bool QFontComboBox_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QFontComboBox_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QFontComboBox_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QFontComboBox_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_Metric(param1);
}

bool QFontComboBox_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QFontComboBox_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_InitPainter(painter);
}

bool QFontComboBox_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QFontComboBox_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_Redirected(offset);
}

bool QFontComboBox_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QFontComboBox_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_SharedPainter();
}

bool QFontComboBox_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QFontComboBox_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QFontComboBox_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QFontComboBox_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QFontComboBox_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_TimerEvent(event);
}

bool QFontComboBox_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_ChildEvent(event);
}

bool QFontComboBox_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_CustomEvent(event);
}

bool QFontComboBox_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QFontComboBox_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QFontComboBox_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QFontComboBox_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QFontComboBox_Delete(QFontComboBox* self) {
	delete self;
}

