#include <QAbstractSpinBox>
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
#include <QWheelEvent>
#include <QWidget>
#include <qabstractspinbox.h>
#include "gen_qabstractspinbox.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractSpinBox_EditingFinished(intptr_t);
QSize* miqt_exec_callback_QAbstractSpinBox_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QAbstractSpinBox_MinimumSizeHint(void*, intptr_t);
bool miqt_exec_callback_QAbstractSpinBox_Event(void*, intptr_t, QEvent*);
QVariant* miqt_exec_callback_QAbstractSpinBox_InputMethodQuery(void*, intptr_t, int);
int miqt_exec_callback_QAbstractSpinBox_Validate(void*, intptr_t, struct miqt_string, int*);
void miqt_exec_callback_QAbstractSpinBox_Fixup(void*, intptr_t, struct miqt_string);
void miqt_exec_callback_QAbstractSpinBox_StepBy(void*, intptr_t, int);
void miqt_exec_callback_QAbstractSpinBox_Clear(void*, intptr_t);
void miqt_exec_callback_QAbstractSpinBox_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QAbstractSpinBox_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractSpinBox_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractSpinBox_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QAbstractSpinBox_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractSpinBox_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractSpinBox_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QAbstractSpinBox_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractSpinBox_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QAbstractSpinBox_HideEvent(void*, intptr_t, QHideEvent*);
void miqt_exec_callback_QAbstractSpinBox_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractSpinBox_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractSpinBox_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractSpinBox_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractSpinBox_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QAbstractSpinBox_ShowEvent(void*, intptr_t, QShowEvent*);
int miqt_exec_callback_QAbstractSpinBox_StepEnabled(void*, intptr_t);
int miqt_exec_callback_QAbstractSpinBox_DevType(void*, intptr_t);
void miqt_exec_callback_QAbstractSpinBox_SetVisible(void*, intptr_t, bool);
int miqt_exec_callback_QAbstractSpinBox_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QAbstractSpinBox_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QAbstractSpinBox_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QAbstractSpinBox_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractSpinBox_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractSpinBox_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractSpinBox_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QAbstractSpinBox_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QAbstractSpinBox_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QAbstractSpinBox_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QAbstractSpinBox_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QAbstractSpinBox_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QAbstractSpinBox_DropEvent(void*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QAbstractSpinBox_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QAbstractSpinBox_Metric(void*, intptr_t, int);
void miqt_exec_callback_QAbstractSpinBox_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QAbstractSpinBox_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QAbstractSpinBox_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QAbstractSpinBox_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QAbstractSpinBox_FocusNextPrevChild(void*, intptr_t, bool);
bool miqt_exec_callback_QAbstractSpinBox_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractSpinBox_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractSpinBox_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractSpinBox_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractSpinBox_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractSpinBox final : public QAbstractSpinBox {
public:

	MiqtVirtualQAbstractSpinBox(QWidget* parent): QAbstractSpinBox(parent) {};
	MiqtVirtualQAbstractSpinBox(): QAbstractSpinBox() {};

	virtual ~MiqtVirtualQAbstractSpinBox() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QAbstractSpinBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractSpinBox_SizeHint(const_cast<MiqtVirtualQAbstractSpinBox*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QAbstractSpinBox::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QAbstractSpinBox::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractSpinBox_MinimumSizeHint(const_cast<MiqtVirtualQAbstractSpinBox*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QAbstractSpinBox::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAbstractSpinBox::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractSpinBox_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAbstractSpinBox::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QAbstractSpinBox::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QAbstractSpinBox_InputMethodQuery(const_cast<MiqtVirtualQAbstractSpinBox*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QAbstractSpinBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (handle__Validate == 0) {
			return QAbstractSpinBox::validate(input, pos);
		}
		
		QString input_ret = input;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray input_b = input_ret.toUtf8();
		struct miqt_string input_ms;
		input_ms.len = input_b.length();
		input_ms.data = static_cast<char*>(malloc(input_ms.len));
		memcpy(input_ms.data, input_b.data(), input_ms.len);
		struct miqt_string sigval1 = input_ms;
		int* sigval2 = &pos;

		int callback_return_value = miqt_exec_callback_QAbstractSpinBox_Validate(const_cast<MiqtVirtualQAbstractSpinBox*>(this), handle__Validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Validate(struct miqt_string input, int* pos) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QValidator::State _ret = QAbstractSpinBox::validate(input_QString, static_cast<int&>(*pos));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& input) const override {
		if (handle__Fixup == 0) {
			QAbstractSpinBox::fixup(input);
			return;
		}
		
		QString input_ret = input;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray input_b = input_ret.toUtf8();
		struct miqt_string input_ms;
		input_ms.len = input_b.length();
		input_ms.data = static_cast<char*>(malloc(input_ms.len));
		memcpy(input_ms.data, input_b.data(), input_ms.len);
		struct miqt_string sigval1 = input_ms;

		miqt_exec_callback_QAbstractSpinBox_Fixup(const_cast<MiqtVirtualQAbstractSpinBox*>(this), handle__Fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Fixup(struct miqt_string input) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QAbstractSpinBox::fixup(input_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StepBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void stepBy(int steps) override {
		if (handle__StepBy == 0) {
			QAbstractSpinBox::stepBy(steps);
			return;
		}
		
		int sigval1 = steps;

		miqt_exec_callback_QAbstractSpinBox_StepBy(this, handle__StepBy, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_StepBy(int steps) {

		QAbstractSpinBox::stepBy(static_cast<int>(steps));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__Clear == 0) {
			QAbstractSpinBox::clear();
			return;
		}
		

		miqt_exec_callback_QAbstractSpinBox_Clear(this, handle__Clear);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Clear() {

		QAbstractSpinBox::clear();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QAbstractSpinBox::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QAbstractSpinBox::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QAbstractSpinBox::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QAbstractSpinBox::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QAbstractSpinBox::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QAbstractSpinBox::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QAbstractSpinBox::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QAbstractSpinBox::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QAbstractSpinBox::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QAbstractSpinBox::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QAbstractSpinBox::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QAbstractSpinBox::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QAbstractSpinBox::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QAbstractSpinBox::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__ChangeEvent == 0) {
			QAbstractSpinBox::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* event) {

		QAbstractSpinBox::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QAbstractSpinBox::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QAbstractSpinBox::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QAbstractSpinBox::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QAbstractSpinBox::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QAbstractSpinBox::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QAbstractSpinBox::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QAbstractSpinBox::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QAbstractSpinBox::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QAbstractSpinBox::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QAbstractSpinBox::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAbstractSpinBox::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAbstractSpinBox::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QAbstractSpinBox::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QAbstractSpinBox::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QAbstractSpinBox::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QAbstractSpinBox::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StepEnabled = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
		if (handle__StepEnabled == 0) {
			return QAbstractSpinBox::stepEnabled();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractSpinBox_StepEnabled(const_cast<MiqtVirtualQAbstractSpinBox*>(this), handle__StepEnabled);

		return static_cast<QAbstractSpinBox::StepEnabled>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StepEnabled() const {

		QAbstractSpinBox::StepEnabled _ret = QAbstractSpinBox::stepEnabled();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QAbstractSpinBox::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractSpinBox_DevType(const_cast<MiqtVirtualQAbstractSpinBox*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QAbstractSpinBox::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QAbstractSpinBox::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QAbstractSpinBox_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QAbstractSpinBox::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QAbstractSpinBox::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QAbstractSpinBox_HeightForWidth(const_cast<MiqtVirtualQAbstractSpinBox*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QAbstractSpinBox::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QAbstractSpinBox::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractSpinBox_HasHeightForWidth(const_cast<MiqtVirtualQAbstractSpinBox*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QAbstractSpinBox::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QAbstractSpinBox::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QAbstractSpinBox_PaintEngine(const_cast<MiqtVirtualQAbstractSpinBox*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QAbstractSpinBox::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QAbstractSpinBox::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QAbstractSpinBox::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QAbstractSpinBox::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QAbstractSpinBox::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QAbstractSpinBox::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QAbstractSpinBox::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QAbstractSpinBox::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QAbstractSpinBox::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QAbstractSpinBox::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QAbstractSpinBox::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QAbstractSpinBox::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QAbstractSpinBox::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QAbstractSpinBox::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QAbstractSpinBox::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QAbstractSpinBox::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QAbstractSpinBox::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QAbstractSpinBox::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QAbstractSpinBox::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QAbstractSpinBox::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QAbstractSpinBox::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QAbstractSpinBox::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QAbstractSpinBox_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QAbstractSpinBox::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QAbstractSpinBox::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QAbstractSpinBox_Metric(const_cast<MiqtVirtualQAbstractSpinBox*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QAbstractSpinBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QAbstractSpinBox::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QAbstractSpinBox_InitPainter(const_cast<MiqtVirtualQAbstractSpinBox*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QAbstractSpinBox::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QAbstractSpinBox::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QAbstractSpinBox_Redirected(const_cast<MiqtVirtualQAbstractSpinBox*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QAbstractSpinBox::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QAbstractSpinBox::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QAbstractSpinBox_SharedPainter(const_cast<MiqtVirtualQAbstractSpinBox*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QAbstractSpinBox::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QAbstractSpinBox::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractSpinBox_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QAbstractSpinBox::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QAbstractSpinBox::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QAbstractSpinBox_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QAbstractSpinBox::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAbstractSpinBox::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractSpinBox_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAbstractSpinBox::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAbstractSpinBox::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAbstractSpinBox::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAbstractSpinBox::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAbstractSpinBox::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAbstractSpinBox::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractSpinBox_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAbstractSpinBox::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAbstractSpinBox::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractSpinBox_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAbstractSpinBox::disconnectNotify(*signal);

	}

};

QAbstractSpinBox* QAbstractSpinBox_new(QWidget* parent) {
	return new MiqtVirtualQAbstractSpinBox(parent);
}

QAbstractSpinBox* QAbstractSpinBox_new2() {
	return new MiqtVirtualQAbstractSpinBox();
}

void QAbstractSpinBox_virtbase(QAbstractSpinBox* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QAbstractSpinBox_MetaObject(const QAbstractSpinBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractSpinBox_Metacast(QAbstractSpinBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractSpinBox_Tr(const char* s) {
	QString _ret = QAbstractSpinBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSpinBox_TrUtf8(const char* s) {
	QString _ret = QAbstractSpinBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAbstractSpinBox_ButtonSymbols(const QAbstractSpinBox* self) {
	QAbstractSpinBox::ButtonSymbols _ret = self->buttonSymbols();
	return static_cast<int>(_ret);
}

void QAbstractSpinBox_SetButtonSymbols(QAbstractSpinBox* self, int bs) {
	self->setButtonSymbols(static_cast<QAbstractSpinBox::ButtonSymbols>(bs));
}

void QAbstractSpinBox_SetCorrectionMode(QAbstractSpinBox* self, int cm) {
	self->setCorrectionMode(static_cast<QAbstractSpinBox::CorrectionMode>(cm));
}

int QAbstractSpinBox_CorrectionMode(const QAbstractSpinBox* self) {
	QAbstractSpinBox::CorrectionMode _ret = self->correctionMode();
	return static_cast<int>(_ret);
}

bool QAbstractSpinBox_HasAcceptableInput(const QAbstractSpinBox* self) {
	return self->hasAcceptableInput();
}

struct miqt_string QAbstractSpinBox_Text(const QAbstractSpinBox* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSpinBox_SpecialValueText(const QAbstractSpinBox* self) {
	QString _ret = self->specialValueText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractSpinBox_SetSpecialValueText(QAbstractSpinBox* self, struct miqt_string txt) {
	QString txt_QString = QString::fromUtf8(txt.data, txt.len);
	self->setSpecialValueText(txt_QString);
}

bool QAbstractSpinBox_Wrapping(const QAbstractSpinBox* self) {
	return self->wrapping();
}

void QAbstractSpinBox_SetWrapping(QAbstractSpinBox* self, bool w) {
	self->setWrapping(w);
}

void QAbstractSpinBox_SetReadOnly(QAbstractSpinBox* self, bool r) {
	self->setReadOnly(r);
}

bool QAbstractSpinBox_IsReadOnly(const QAbstractSpinBox* self) {
	return self->isReadOnly();
}

void QAbstractSpinBox_SetKeyboardTracking(QAbstractSpinBox* self, bool kt) {
	self->setKeyboardTracking(kt);
}

bool QAbstractSpinBox_KeyboardTracking(const QAbstractSpinBox* self) {
	return self->keyboardTracking();
}

void QAbstractSpinBox_SetAlignment(QAbstractSpinBox* self, int flag) {
	self->setAlignment(static_cast<Qt::Alignment>(flag));
}

int QAbstractSpinBox_Alignment(const QAbstractSpinBox* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QAbstractSpinBox_SetFrame(QAbstractSpinBox* self, bool frame) {
	self->setFrame(frame);
}

bool QAbstractSpinBox_HasFrame(const QAbstractSpinBox* self) {
	return self->hasFrame();
}

void QAbstractSpinBox_SetAccelerated(QAbstractSpinBox* self, bool on) {
	self->setAccelerated(on);
}

bool QAbstractSpinBox_IsAccelerated(const QAbstractSpinBox* self) {
	return self->isAccelerated();
}

void QAbstractSpinBox_SetGroupSeparatorShown(QAbstractSpinBox* self, bool shown) {
	self->setGroupSeparatorShown(shown);
}

bool QAbstractSpinBox_IsGroupSeparatorShown(const QAbstractSpinBox* self) {
	return self->isGroupSeparatorShown();
}

QSize* QAbstractSpinBox_SizeHint(const QAbstractSpinBox* self) {
	return new QSize(self->sizeHint());
}

QSize* QAbstractSpinBox_MinimumSizeHint(const QAbstractSpinBox* self) {
	return new QSize(self->minimumSizeHint());
}

void QAbstractSpinBox_InterpretText(QAbstractSpinBox* self) {
	self->interpretText();
}

bool QAbstractSpinBox_Event(QAbstractSpinBox* self, QEvent* event) {
	return self->event(event);
}

QVariant* QAbstractSpinBox_InputMethodQuery(const QAbstractSpinBox* self, int param1) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

int QAbstractSpinBox_Validate(const QAbstractSpinBox* self, struct miqt_string input, int* pos) {
	QString input_QString = QString::fromUtf8(input.data, input.len);
	QValidator::State _ret = self->validate(input_QString, static_cast<int&>(*pos));
	return static_cast<int>(_ret);
}

void QAbstractSpinBox_Fixup(const QAbstractSpinBox* self, struct miqt_string input) {
	QString input_QString = QString::fromUtf8(input.data, input.len);
	self->fixup(input_QString);
}

void QAbstractSpinBox_StepBy(QAbstractSpinBox* self, int steps) {
	self->stepBy(static_cast<int>(steps));
}

void QAbstractSpinBox_StepUp(QAbstractSpinBox* self) {
	self->stepUp();
}

void QAbstractSpinBox_StepDown(QAbstractSpinBox* self) {
	self->stepDown();
}

void QAbstractSpinBox_SelectAll(QAbstractSpinBox* self) {
	self->selectAll();
}

void QAbstractSpinBox_Clear(QAbstractSpinBox* self) {
	self->clear();
}

void QAbstractSpinBox_EditingFinished(QAbstractSpinBox* self) {
	self->editingFinished();
}

void QAbstractSpinBox_connect_EditingFinished(QAbstractSpinBox* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox::connect(self, static_cast<void (QAbstractSpinBox::*)()>(&QAbstractSpinBox::editingFinished), self, [=]() {
		miqt_exec_callback_QAbstractSpinBox_EditingFinished(slot);
	});
}

struct miqt_string QAbstractSpinBox_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractSpinBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSpinBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractSpinBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSpinBox_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractSpinBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSpinBox_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractSpinBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractSpinBox_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QAbstractSpinBox_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_SizeHint();
}

bool QAbstractSpinBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QAbstractSpinBox_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_MinimumSizeHint();
}

bool QAbstractSpinBox_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QAbstractSpinBox_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_Event(event);
}

bool QAbstractSpinBox_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QAbstractSpinBox_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QAbstractSpinBox_override_virtual_Validate(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Validate = slot;
	return true;
}

int QAbstractSpinBox_virtualbase_Validate(const void* self, struct miqt_string input, int* pos) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_Validate(input, pos);
}

bool QAbstractSpinBox_override_virtual_Fixup(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Fixup = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_Fixup(const void* self, struct miqt_string input) {
	( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_Fixup(input);
}

bool QAbstractSpinBox_override_virtual_StepBy(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StepBy = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_StepBy(void* self, int steps) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_StepBy(steps);
}

bool QAbstractSpinBox_override_virtual_Clear(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clear = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_Clear(void* self) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_Clear();
}

bool QAbstractSpinBox_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_ResizeEvent(event);
}

bool QAbstractSpinBox_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QAbstractSpinBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QAbstractSpinBox_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_WheelEvent(event);
}

bool QAbstractSpinBox_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_FocusInEvent(event);
}

bool QAbstractSpinBox_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QAbstractSpinBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QAbstractSpinBox_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_ChangeEvent(event);
}

bool QAbstractSpinBox_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_CloseEvent(event);
}

bool QAbstractSpinBox_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_HideEvent(event);
}

bool QAbstractSpinBox_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_MousePressEvent(event);
}

bool QAbstractSpinBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QAbstractSpinBox_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QAbstractSpinBox_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_TimerEvent(event);
}

bool QAbstractSpinBox_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_PaintEvent(event);
}

bool QAbstractSpinBox_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_ShowEvent(event);
}

bool QAbstractSpinBox_override_virtual_StepEnabled(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StepEnabled = slot;
	return true;
}

int QAbstractSpinBox_virtualbase_StepEnabled(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_StepEnabled();
}

bool QAbstractSpinBox_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QAbstractSpinBox_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_DevType();
}

bool QAbstractSpinBox_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_SetVisible(visible);
}

bool QAbstractSpinBox_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QAbstractSpinBox_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QAbstractSpinBox_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QAbstractSpinBox_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_HasHeightForWidth();
}

bool QAbstractSpinBox_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QAbstractSpinBox_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_PaintEngine();
}

bool QAbstractSpinBox_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QAbstractSpinBox_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_EnterEvent(event);
}

bool QAbstractSpinBox_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_LeaveEvent(event);
}

bool QAbstractSpinBox_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_MoveEvent(event);
}

bool QAbstractSpinBox_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_TabletEvent(event);
}

bool QAbstractSpinBox_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_ActionEvent(event);
}

bool QAbstractSpinBox_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QAbstractSpinBox_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QAbstractSpinBox_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QAbstractSpinBox_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_DropEvent(event);
}

bool QAbstractSpinBox_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QAbstractSpinBox_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QAbstractSpinBox_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QAbstractSpinBox_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_Metric(param1);
}

bool QAbstractSpinBox_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_InitPainter(painter);
}

bool QAbstractSpinBox_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QAbstractSpinBox_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_Redirected(offset);
}

bool QAbstractSpinBox_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QAbstractSpinBox_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_SharedPainter();
}

bool QAbstractSpinBox_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QAbstractSpinBox_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QAbstractSpinBox_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QAbstractSpinBox_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QAbstractSpinBox_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QAbstractSpinBox_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_ChildEvent(event);
}

bool QAbstractSpinBox_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_CustomEvent(event);
}

bool QAbstractSpinBox_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QAbstractSpinBox_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAbstractSpinBox_Delete(QAbstractSpinBox* self) {
	delete self;
}

