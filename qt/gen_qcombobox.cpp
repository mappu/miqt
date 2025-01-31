#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QComboBox>
#include <QCompleter>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLineEdit>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
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
#include <QValidator>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qcombobox.h>
#include "gen_qcombobox.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QComboBox_EditTextChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QComboBox_Activated(intptr_t, int);
void miqt_exec_callback_QComboBox_TextActivated(intptr_t, struct miqt_string);
void miqt_exec_callback_QComboBox_Highlighted(intptr_t, int);
void miqt_exec_callback_QComboBox_TextHighlighted(intptr_t, struct miqt_string);
void miqt_exec_callback_QComboBox_CurrentIndexChanged(intptr_t, int);
void miqt_exec_callback_QComboBox_CurrentIndexChangedWithQString(intptr_t, struct miqt_string);
void miqt_exec_callback_QComboBox_CurrentTextChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QComboBox_ActivatedWithQString(intptr_t, struct miqt_string);
void miqt_exec_callback_QComboBox_HighlightedWithQString(intptr_t, struct miqt_string);
QSize* miqt_exec_callback_QComboBox_SizeHint(const QComboBox*, intptr_t);
QSize* miqt_exec_callback_QComboBox_MinimumSizeHint(const QComboBox*, intptr_t);
void miqt_exec_callback_QComboBox_ShowPopup(QComboBox*, intptr_t);
void miqt_exec_callback_QComboBox_HidePopup(QComboBox*, intptr_t);
bool miqt_exec_callback_QComboBox_Event(QComboBox*, intptr_t, QEvent*);
QVariant* miqt_exec_callback_QComboBox_InputMethodQuery(const QComboBox*, intptr_t, int);
void miqt_exec_callback_QComboBox_FocusInEvent(QComboBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QComboBox_FocusOutEvent(QComboBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QComboBox_ChangeEvent(QComboBox*, intptr_t, QEvent*);
void miqt_exec_callback_QComboBox_ResizeEvent(QComboBox*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QComboBox_PaintEvent(QComboBox*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QComboBox_ShowEvent(QComboBox*, intptr_t, QShowEvent*);
void miqt_exec_callback_QComboBox_HideEvent(QComboBox*, intptr_t, QHideEvent*);
void miqt_exec_callback_QComboBox_MousePressEvent(QComboBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QComboBox_MouseReleaseEvent(QComboBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QComboBox_KeyPressEvent(QComboBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QComboBox_KeyReleaseEvent(QComboBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QComboBox_WheelEvent(QComboBox*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QComboBox_ContextMenuEvent(QComboBox*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QComboBox_InputMethodEvent(QComboBox*, intptr_t, QInputMethodEvent*);
int miqt_exec_callback_QComboBox_DevType(const QComboBox*, intptr_t);
void miqt_exec_callback_QComboBox_SetVisible(QComboBox*, intptr_t, bool);
int miqt_exec_callback_QComboBox_HeightForWidth(const QComboBox*, intptr_t, int);
bool miqt_exec_callback_QComboBox_HasHeightForWidth(const QComboBox*, intptr_t);
QPaintEngine* miqt_exec_callback_QComboBox_PaintEngine(const QComboBox*, intptr_t);
void miqt_exec_callback_QComboBox_MouseDoubleClickEvent(QComboBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QComboBox_MouseMoveEvent(QComboBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QComboBox_EnterEvent(QComboBox*, intptr_t, QEvent*);
void miqt_exec_callback_QComboBox_LeaveEvent(QComboBox*, intptr_t, QEvent*);
void miqt_exec_callback_QComboBox_MoveEvent(QComboBox*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QComboBox_CloseEvent(QComboBox*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QComboBox_TabletEvent(QComboBox*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QComboBox_ActionEvent(QComboBox*, intptr_t, QActionEvent*);
void miqt_exec_callback_QComboBox_DragEnterEvent(QComboBox*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QComboBox_DragMoveEvent(QComboBox*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QComboBox_DragLeaveEvent(QComboBox*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QComboBox_DropEvent(QComboBox*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QComboBox_NativeEvent(QComboBox*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QComboBox_Metric(const QComboBox*, intptr_t, int);
void miqt_exec_callback_QComboBox_InitPainter(const QComboBox*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QComboBox_Redirected(const QComboBox*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QComboBox_SharedPainter(const QComboBox*, intptr_t);
bool miqt_exec_callback_QComboBox_FocusNextPrevChild(QComboBox*, intptr_t, bool);
bool miqt_exec_callback_QComboBox_EventFilter(QComboBox*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QComboBox_TimerEvent(QComboBox*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QComboBox_ChildEvent(QComboBox*, intptr_t, QChildEvent*);
void miqt_exec_callback_QComboBox_CustomEvent(QComboBox*, intptr_t, QEvent*);
void miqt_exec_callback_QComboBox_ConnectNotify(QComboBox*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QComboBox_DisconnectNotify(QComboBox*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQComboBox final : public QComboBox {
public:

	MiqtVirtualQComboBox(QWidget* parent): QComboBox(parent) {};
	MiqtVirtualQComboBox(): QComboBox() {};

	virtual ~MiqtVirtualQComboBox() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QComboBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QComboBox_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QComboBox::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QComboBox::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QComboBox_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QComboBox::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowPopup = 0;

	// Subclass to allow providing a Go implementation
	virtual void showPopup() override {
		if (handle__ShowPopup == 0) {
			QComboBox::showPopup();
			return;
		}
		

		miqt_exec_callback_QComboBox_ShowPopup(this, handle__ShowPopup);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowPopup() {

		QComboBox::showPopup();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HidePopup = 0;

	// Subclass to allow providing a Go implementation
	virtual void hidePopup() override {
		if (handle__HidePopup == 0) {
			QComboBox::hidePopup();
			return;
		}
		

		miqt_exec_callback_QComboBox_HidePopup(this, handle__HidePopup);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HidePopup() {

		QComboBox::hidePopup();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QComboBox::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QComboBox_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QComboBox::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QComboBox::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QComboBox_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QComboBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__FocusInEvent == 0) {
			QComboBox::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* e) {

		QComboBox::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__FocusOutEvent == 0) {
			QComboBox::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* e) {

		QComboBox::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QComboBox::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QComboBox::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__ResizeEvent == 0) {
			QComboBox::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* e) {

		QComboBox::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__PaintEvent == 0) {
			QComboBox::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* e) {

		QComboBox::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* e) override {
		if (handle__ShowEvent == 0) {
			QComboBox::showEvent(e);
			return;
		}
		
		QShowEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* e) {

		QComboBox::showEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* e) override {
		if (handle__HideEvent == 0) {
			QComboBox::hideEvent(e);
			return;
		}
		
		QHideEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* e) {

		QComboBox::hideEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__MousePressEvent == 0) {
			QComboBox::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* e) {

		QComboBox::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__MouseReleaseEvent == 0) {
			QComboBox::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* e) {

		QComboBox::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__KeyPressEvent == 0) {
			QComboBox::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* e) {

		QComboBox::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__KeyReleaseEvent == 0) {
			QComboBox::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* e) {

		QComboBox::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__WheelEvent == 0) {
			QComboBox::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* e) {

		QComboBox::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* e) override {
		if (handle__ContextMenuEvent == 0) {
			QComboBox::contextMenuEvent(e);
			return;
		}
		
		QContextMenuEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* e) {

		QComboBox::contextMenuEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QComboBox::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QComboBox_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QComboBox::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QComboBox::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QComboBox_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QComboBox::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QComboBox::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QComboBox_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QComboBox::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QComboBox::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QComboBox_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QComboBox::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QComboBox::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QComboBox_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QComboBox::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QComboBox::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QComboBox_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QComboBox::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QComboBox::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QComboBox::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QComboBox::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QComboBox::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QComboBox::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QComboBox::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QComboBox::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QComboBox::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QComboBox::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QComboBox::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QComboBox::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QComboBox::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QComboBox::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QComboBox::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QComboBox::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QComboBox::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QComboBox::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QComboBox::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QComboBox::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QComboBox::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QComboBox::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QComboBox::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QComboBox::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QComboBox::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QComboBox::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QComboBox_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QComboBox::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QComboBox::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QComboBox_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QComboBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QComboBox::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QComboBox_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QComboBox::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QComboBox::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QComboBox_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QComboBox::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QComboBox::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QComboBox_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QComboBox::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QComboBox::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QComboBox_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QComboBox::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QComboBox::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QComboBox_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QComboBox::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QComboBox::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QComboBox::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QComboBox::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QComboBox::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QComboBox::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QComboBox::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QComboBox::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QComboBox_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QComboBox::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QComboBox::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QComboBox_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QComboBox::disconnectNotify(*signal);

	}

};

QComboBox* QComboBox_new(QWidget* parent) {
	return new MiqtVirtualQComboBox(parent);
}

QComboBox* QComboBox_new2() {
	return new MiqtVirtualQComboBox();
}

void QComboBox_virtbase(QComboBox* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QComboBox_MetaObject(const QComboBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QComboBox_Metacast(QComboBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QComboBox_Tr(const char* s) {
	QString _ret = QComboBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QComboBox_TrUtf8(const char* s) {
	QString _ret = QComboBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QComboBox_MaxVisibleItems(const QComboBox* self) {
	return self->maxVisibleItems();
}

void QComboBox_SetMaxVisibleItems(QComboBox* self, int maxItems) {
	self->setMaxVisibleItems(static_cast<int>(maxItems));
}

int QComboBox_Count(const QComboBox* self) {
	return self->count();
}

void QComboBox_SetMaxCount(QComboBox* self, int max) {
	self->setMaxCount(static_cast<int>(max));
}

int QComboBox_MaxCount(const QComboBox* self) {
	return self->maxCount();
}

bool QComboBox_AutoCompletion(const QComboBox* self) {
	return self->autoCompletion();
}

void QComboBox_SetAutoCompletion(QComboBox* self, bool enable) {
	self->setAutoCompletion(enable);
}

int QComboBox_AutoCompletionCaseSensitivity(const QComboBox* self) {
	Qt::CaseSensitivity _ret = self->autoCompletionCaseSensitivity();
	return static_cast<int>(_ret);
}

void QComboBox_SetAutoCompletionCaseSensitivity(QComboBox* self, int sensitivity) {
	self->setAutoCompletionCaseSensitivity(static_cast<Qt::CaseSensitivity>(sensitivity));
}

bool QComboBox_DuplicatesEnabled(const QComboBox* self) {
	return self->duplicatesEnabled();
}

void QComboBox_SetDuplicatesEnabled(QComboBox* self, bool enable) {
	self->setDuplicatesEnabled(enable);
}

void QComboBox_SetFrame(QComboBox* self, bool frame) {
	self->setFrame(frame);
}

bool QComboBox_HasFrame(const QComboBox* self) {
	return self->hasFrame();
}

int QComboBox_FindText(const QComboBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->findText(text_QString);
}

int QComboBox_FindData(const QComboBox* self, QVariant* data) {
	return self->findData(*data);
}

int QComboBox_InsertPolicy(const QComboBox* self) {
	QComboBox::InsertPolicy _ret = self->insertPolicy();
	return static_cast<int>(_ret);
}

void QComboBox_SetInsertPolicy(QComboBox* self, int policy) {
	self->setInsertPolicy(static_cast<QComboBox::InsertPolicy>(policy));
}

int QComboBox_SizeAdjustPolicy(const QComboBox* self) {
	QComboBox::SizeAdjustPolicy _ret = self->sizeAdjustPolicy();
	return static_cast<int>(_ret);
}

void QComboBox_SetSizeAdjustPolicy(QComboBox* self, int policy) {
	self->setSizeAdjustPolicy(static_cast<QComboBox::SizeAdjustPolicy>(policy));
}

int QComboBox_MinimumContentsLength(const QComboBox* self) {
	return self->minimumContentsLength();
}

void QComboBox_SetMinimumContentsLength(QComboBox* self, int characters) {
	self->setMinimumContentsLength(static_cast<int>(characters));
}

QSize* QComboBox_IconSize(const QComboBox* self) {
	return new QSize(self->iconSize());
}

void QComboBox_SetIconSize(QComboBox* self, QSize* size) {
	self->setIconSize(*size);
}

void QComboBox_SetPlaceholderText(QComboBox* self, struct miqt_string placeholderText) {
	QString placeholderText_QString = QString::fromUtf8(placeholderText.data, placeholderText.len);
	self->setPlaceholderText(placeholderText_QString);
}

struct miqt_string QComboBox_PlaceholderText(const QComboBox* self) {
	QString _ret = self->placeholderText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QComboBox_IsEditable(const QComboBox* self) {
	return self->isEditable();
}

void QComboBox_SetEditable(QComboBox* self, bool editable) {
	self->setEditable(editable);
}

void QComboBox_SetLineEdit(QComboBox* self, QLineEdit* edit) {
	self->setLineEdit(edit);
}

QLineEdit* QComboBox_LineEdit(const QComboBox* self) {
	return self->lineEdit();
}

void QComboBox_SetValidator(QComboBox* self, QValidator* v) {
	self->setValidator(v);
}

QValidator* QComboBox_Validator(const QComboBox* self) {
	return (QValidator*) self->validator();
}

void QComboBox_SetCompleter(QComboBox* self, QCompleter* c) {
	self->setCompleter(c);
}

QCompleter* QComboBox_Completer(const QComboBox* self) {
	return self->completer();
}

QAbstractItemDelegate* QComboBox_ItemDelegate(const QComboBox* self) {
	return self->itemDelegate();
}

void QComboBox_SetItemDelegate(QComboBox* self, QAbstractItemDelegate* delegate) {
	self->setItemDelegate(delegate);
}

QAbstractItemModel* QComboBox_Model(const QComboBox* self) {
	return self->model();
}

void QComboBox_SetModel(QComboBox* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QModelIndex* QComboBox_RootModelIndex(const QComboBox* self) {
	return new QModelIndex(self->rootModelIndex());
}

void QComboBox_SetRootModelIndex(QComboBox* self, QModelIndex* index) {
	self->setRootModelIndex(*index);
}

int QComboBox_ModelColumn(const QComboBox* self) {
	return self->modelColumn();
}

void QComboBox_SetModelColumn(QComboBox* self, int visibleColumn) {
	self->setModelColumn(static_cast<int>(visibleColumn));
}

int QComboBox_CurrentIndex(const QComboBox* self) {
	return self->currentIndex();
}

struct miqt_string QComboBox_CurrentText(const QComboBox* self) {
	QString _ret = self->currentText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVariant* QComboBox_CurrentData(const QComboBox* self) {
	return new QVariant(self->currentData());
}

struct miqt_string QComboBox_ItemText(const QComboBox* self, int index) {
	QString _ret = self->itemText(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QIcon* QComboBox_ItemIcon(const QComboBox* self, int index) {
	return new QIcon(self->itemIcon(static_cast<int>(index)));
}

QVariant* QComboBox_ItemData(const QComboBox* self, int index) {
	return new QVariant(self->itemData(static_cast<int>(index)));
}

void QComboBox_AddItem(QComboBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->addItem(text_QString);
}

void QComboBox_AddItem2(QComboBox* self, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->addItem(*icon, text_QString);
}

void QComboBox_AddItems(QComboBox* self, struct miqt_array /* of struct miqt_string */  texts) {
	QStringList texts_QList;
	texts_QList.reserve(texts.len);
	struct miqt_string* texts_arr = static_cast<struct miqt_string*>(texts.data);
	for(size_t i = 0; i < texts.len; ++i) {
		QString texts_arr_i_QString = QString::fromUtf8(texts_arr[i].data, texts_arr[i].len);
		texts_QList.push_back(texts_arr_i_QString);
	}
	self->addItems(texts_QList);
}

void QComboBox_InsertItem(QComboBox* self, int index, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertItem(static_cast<int>(index), text_QString);
}

void QComboBox_InsertItem2(QComboBox* self, int index, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertItem(static_cast<int>(index), *icon, text_QString);
}

void QComboBox_InsertItems(QComboBox* self, int index, struct miqt_array /* of struct miqt_string */  texts) {
	QStringList texts_QList;
	texts_QList.reserve(texts.len);
	struct miqt_string* texts_arr = static_cast<struct miqt_string*>(texts.data);
	for(size_t i = 0; i < texts.len; ++i) {
		QString texts_arr_i_QString = QString::fromUtf8(texts_arr[i].data, texts_arr[i].len);
		texts_QList.push_back(texts_arr_i_QString);
	}
	self->insertItems(static_cast<int>(index), texts_QList);
}

void QComboBox_InsertSeparator(QComboBox* self, int index) {
	self->insertSeparator(static_cast<int>(index));
}

void QComboBox_RemoveItem(QComboBox* self, int index) {
	self->removeItem(static_cast<int>(index));
}

void QComboBox_SetItemText(QComboBox* self, int index, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setItemText(static_cast<int>(index), text_QString);
}

void QComboBox_SetItemIcon(QComboBox* self, int index, QIcon* icon) {
	self->setItemIcon(static_cast<int>(index), *icon);
}

void QComboBox_SetItemData(QComboBox* self, int index, QVariant* value) {
	self->setItemData(static_cast<int>(index), *value);
}

QAbstractItemView* QComboBox_View(const QComboBox* self) {
	return self->view();
}

void QComboBox_SetView(QComboBox* self, QAbstractItemView* itemView) {
	self->setView(itemView);
}

QSize* QComboBox_SizeHint(const QComboBox* self) {
	return new QSize(self->sizeHint());
}

QSize* QComboBox_MinimumSizeHint(const QComboBox* self) {
	return new QSize(self->minimumSizeHint());
}

void QComboBox_ShowPopup(QComboBox* self) {
	self->showPopup();
}

void QComboBox_HidePopup(QComboBox* self) {
	self->hidePopup();
}

bool QComboBox_Event(QComboBox* self, QEvent* event) {
	return self->event(event);
}

QVariant* QComboBox_InputMethodQuery(const QComboBox* self, int param1) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

QVariant* QComboBox_InputMethodQuery2(const QComboBox* self, int query, QVariant* argument) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QComboBox_Clear(QComboBox* self) {
	self->clear();
}

void QComboBox_ClearEditText(QComboBox* self) {
	self->clearEditText();
}

void QComboBox_SetEditText(QComboBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setEditText(text_QString);
}

void QComboBox_SetCurrentIndex(QComboBox* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QComboBox_SetCurrentText(QComboBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setCurrentText(text_QString);
}

void QComboBox_EditTextChanged(QComboBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->editTextChanged(param1_QString);
}

void QComboBox_connect_EditTextChanged(QComboBox* self, intptr_t slot) {
	MiqtVirtualQComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::editTextChanged), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QComboBox_EditTextChanged(slot, sigval1);
	});
}

void QComboBox_Activated(QComboBox* self, int index) {
	self->activated(static_cast<int>(index));
}

void QComboBox_connect_Activated(QComboBox* self, intptr_t slot) {
	MiqtVirtualQComboBox::connect(self, static_cast<void (QComboBox::*)(int)>(&QComboBox::activated), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QComboBox_Activated(slot, sigval1);
	});
}

void QComboBox_TextActivated(QComboBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->textActivated(param1_QString);
}

void QComboBox_connect_TextActivated(QComboBox* self, intptr_t slot) {
	MiqtVirtualQComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::textActivated), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QComboBox_TextActivated(slot, sigval1);
	});
}

void QComboBox_Highlighted(QComboBox* self, int index) {
	self->highlighted(static_cast<int>(index));
}

void QComboBox_connect_Highlighted(QComboBox* self, intptr_t slot) {
	MiqtVirtualQComboBox::connect(self, static_cast<void (QComboBox::*)(int)>(&QComboBox::highlighted), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QComboBox_Highlighted(slot, sigval1);
	});
}

void QComboBox_TextHighlighted(QComboBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->textHighlighted(param1_QString);
}

void QComboBox_connect_TextHighlighted(QComboBox* self, intptr_t slot) {
	MiqtVirtualQComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::textHighlighted), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QComboBox_TextHighlighted(slot, sigval1);
	});
}

void QComboBox_CurrentIndexChanged(QComboBox* self, int index) {
	self->currentIndexChanged(static_cast<int>(index));
}

void QComboBox_connect_CurrentIndexChanged(QComboBox* self, intptr_t slot) {
	MiqtVirtualQComboBox::connect(self, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QComboBox_CurrentIndexChanged(slot, sigval1);
	});
}

void QComboBox_CurrentIndexChangedWithQString(QComboBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->currentIndexChanged(param1_QString);
}

void QComboBox_connect_CurrentIndexChangedWithQString(QComboBox* self, intptr_t slot) {
	MiqtVirtualQComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::currentIndexChanged), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QComboBox_CurrentIndexChangedWithQString(slot, sigval1);
	});
}

void QComboBox_CurrentTextChanged(QComboBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->currentTextChanged(param1_QString);
}

void QComboBox_connect_CurrentTextChanged(QComboBox* self, intptr_t slot) {
	MiqtVirtualQComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::currentTextChanged), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QComboBox_CurrentTextChanged(slot, sigval1);
	});
}

void QComboBox_ActivatedWithQString(QComboBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->activated(param1_QString);
}

void QComboBox_connect_ActivatedWithQString(QComboBox* self, intptr_t slot) {
	MiqtVirtualQComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::activated), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QComboBox_ActivatedWithQString(slot, sigval1);
	});
}

void QComboBox_HighlightedWithQString(QComboBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->highlighted(param1_QString);
}

void QComboBox_connect_HighlightedWithQString(QComboBox* self, intptr_t slot) {
	MiqtVirtualQComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::highlighted), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QComboBox_HighlightedWithQString(slot, sigval1);
	});
}

struct miqt_string QComboBox_Tr2(const char* s, const char* c) {
	QString _ret = QComboBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QComboBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QComboBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QComboBox_TrUtf82(const char* s, const char* c) {
	QString _ret = QComboBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QComboBox_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QComboBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QComboBox_FindText2(const QComboBox* self, struct miqt_string text, int flags) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->findText(text_QString, static_cast<Qt::MatchFlags>(flags));
}

int QComboBox_FindData2(const QComboBox* self, QVariant* data, int role) {
	return self->findData(*data, static_cast<int>(role));
}

int QComboBox_FindData3(const QComboBox* self, QVariant* data, int role, int flags) {
	return self->findData(*data, static_cast<int>(role), static_cast<Qt::MatchFlags>(flags));
}

QVariant* QComboBox_CurrentData1(const QComboBox* self, int role) {
	return new QVariant(self->currentData(static_cast<int>(role)));
}

QVariant* QComboBox_ItemData2(const QComboBox* self, int index, int role) {
	return new QVariant(self->itemData(static_cast<int>(index), static_cast<int>(role)));
}

void QComboBox_AddItem22(QComboBox* self, struct miqt_string text, QVariant* userData) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->addItem(text_QString, *userData);
}

void QComboBox_AddItem3(QComboBox* self, QIcon* icon, struct miqt_string text, QVariant* userData) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->addItem(*icon, text_QString, *userData);
}

void QComboBox_InsertItem3(QComboBox* self, int index, struct miqt_string text, QVariant* userData) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertItem(static_cast<int>(index), text_QString, *userData);
}

void QComboBox_InsertItem4(QComboBox* self, int index, QIcon* icon, struct miqt_string text, QVariant* userData) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertItem(static_cast<int>(index), *icon, text_QString, *userData);
}

void QComboBox_SetItemData3(QComboBox* self, int index, QVariant* value, int role) {
	self->setItemData(static_cast<int>(index), *value, static_cast<int>(role));
}

bool QComboBox_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QComboBox_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQComboBox*)(self) )->virtualbase_SizeHint();
}

bool QComboBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QComboBox_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQComboBox*)(self) )->virtualbase_MinimumSizeHint();
}

bool QComboBox_override_virtual_ShowPopup(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowPopup = slot;
	return true;
}

void QComboBox_virtualbase_ShowPopup(void* self) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_ShowPopup();
}

bool QComboBox_override_virtual_HidePopup(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HidePopup = slot;
	return true;
}

void QComboBox_virtualbase_HidePopup(void* self) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_HidePopup();
}

bool QComboBox_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QComboBox_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQComboBox*)(self) )->virtualbase_Event(event);
}

bool QComboBox_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QComboBox_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQComboBox*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QComboBox_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QComboBox_virtualbase_FocusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_FocusInEvent(e);
}

bool QComboBox_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QComboBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_FocusOutEvent(e);
}

bool QComboBox_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QComboBox_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_ChangeEvent(e);
}

bool QComboBox_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QComboBox_virtualbase_ResizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_ResizeEvent(e);
}

bool QComboBox_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QComboBox_virtualbase_PaintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_PaintEvent(e);
}

bool QComboBox_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QComboBox_virtualbase_ShowEvent(void* self, QShowEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_ShowEvent(e);
}

bool QComboBox_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QComboBox_virtualbase_HideEvent(void* self, QHideEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_HideEvent(e);
}

bool QComboBox_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QComboBox_virtualbase_MousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_MousePressEvent(e);
}

bool QComboBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QComboBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_MouseReleaseEvent(e);
}

bool QComboBox_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QComboBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_KeyPressEvent(e);
}

bool QComboBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QComboBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_KeyReleaseEvent(e);
}

bool QComboBox_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QComboBox_virtualbase_WheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_WheelEvent(e);
}

bool QComboBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QComboBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_ContextMenuEvent(e);
}

bool QComboBox_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QComboBox_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QComboBox_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QComboBox_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQComboBox*)(self) )->virtualbase_DevType();
}

bool QComboBox_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QComboBox_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_SetVisible(visible);
}

bool QComboBox_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QComboBox_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQComboBox*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QComboBox_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QComboBox_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQComboBox*)(self) )->virtualbase_HasHeightForWidth();
}

bool QComboBox_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QComboBox_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQComboBox*)(self) )->virtualbase_PaintEngine();
}

bool QComboBox_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QComboBox_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QComboBox_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QComboBox_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QComboBox_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QComboBox_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_EnterEvent(event);
}

bool QComboBox_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QComboBox_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_LeaveEvent(event);
}

bool QComboBox_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QComboBox_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_MoveEvent(event);
}

bool QComboBox_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QComboBox_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_CloseEvent(event);
}

bool QComboBox_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QComboBox_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_TabletEvent(event);
}

bool QComboBox_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QComboBox_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_ActionEvent(event);
}

bool QComboBox_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QComboBox_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QComboBox_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QComboBox_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QComboBox_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QComboBox_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QComboBox_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QComboBox_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_DropEvent(event);
}

bool QComboBox_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QComboBox_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQComboBox*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QComboBox_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QComboBox_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQComboBox*)(self) )->virtualbase_Metric(param1);
}

bool QComboBox_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QComboBox_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQComboBox*)(self) )->virtualbase_InitPainter(painter);
}

bool QComboBox_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QComboBox_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQComboBox*)(self) )->virtualbase_Redirected(offset);
}

bool QComboBox_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QComboBox_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQComboBox*)(self) )->virtualbase_SharedPainter();
}

bool QComboBox_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QComboBox_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQComboBox*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QComboBox_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QComboBox_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQComboBox*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QComboBox_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QComboBox_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_TimerEvent(event);
}

bool QComboBox_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QComboBox_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_ChildEvent(event);
}

bool QComboBox_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QComboBox_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_CustomEvent(event);
}

bool QComboBox_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QComboBox_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QComboBox_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QComboBox_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QComboBox_Delete(QComboBox* self) {
	delete self;
}

