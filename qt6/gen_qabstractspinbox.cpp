#include <QAbstractSpinBox>
#include <QActionEvent>
#include <QByteArray>
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
#include <QStyleOptionSpinBox>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qabstractspinbox.h>
#include "gen_qabstractspinbox.h"
#include "_cgo_export.h"

class MiqtVirtualQAbstractSpinBox : public virtual QAbstractSpinBox {
public:

	MiqtVirtualQAbstractSpinBox(QWidget* parent): QAbstractSpinBox(parent) {};
	MiqtVirtualQAbstractSpinBox(): QAbstractSpinBox() {};

	virtual ~MiqtVirtualQAbstractSpinBox() = default;

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
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
		if (handle__InitStyleOption == 0) {
			QAbstractSpinBox::initStyleOption(option);
			return;
		}
		
		QStyleOptionSpinBox* sigval1 = option;

		miqt_exec_callback_QAbstractSpinBox_InitStyleOption(const_cast<MiqtVirtualQAbstractSpinBox*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionSpinBox* option) const {

		QAbstractSpinBox::initStyleOption(option);

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
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QAbstractSpinBox::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

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
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
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
		qintptr* result_ret = result;
		intptr_t* sigval3 = (intptr_t*)(result_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractSpinBox_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QAbstractSpinBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

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

void QAbstractSpinBox_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__SizeHint = slot;
}

QSize* QAbstractSpinBox_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_SizeHint();
}

void QAbstractSpinBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QAbstractSpinBox_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_MinimumSizeHint();
}

void QAbstractSpinBox_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__Event = slot;
}

bool QAbstractSpinBox_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_Event(event);
}

void QAbstractSpinBox_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QAbstractSpinBox_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_InputMethodQuery(param1);
}

void QAbstractSpinBox_override_virtual_Validate(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__Validate = slot;
}

int QAbstractSpinBox_virtualbase_Validate(const void* self, struct miqt_string input, int* pos) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_Validate(input, pos);
}

void QAbstractSpinBox_override_virtual_Fixup(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__Fixup = slot;
}

void QAbstractSpinBox_virtualbase_Fixup(const void* self, struct miqt_string input) {
	( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_Fixup(input);
}

void QAbstractSpinBox_override_virtual_StepBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__StepBy = slot;
}

void QAbstractSpinBox_virtualbase_StepBy(void* self, int steps) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_StepBy(steps);
}

void QAbstractSpinBox_override_virtual_Clear(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__Clear = slot;
}

void QAbstractSpinBox_virtualbase_Clear(void* self) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_Clear();
}

void QAbstractSpinBox_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__ResizeEvent = slot;
}

void QAbstractSpinBox_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_ResizeEvent(event);
}

void QAbstractSpinBox_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__KeyPressEvent = slot;
}

void QAbstractSpinBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_KeyPressEvent(event);
}

void QAbstractSpinBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__KeyReleaseEvent = slot;
}

void QAbstractSpinBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QAbstractSpinBox_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__WheelEvent = slot;
}

void QAbstractSpinBox_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_WheelEvent(event);
}

void QAbstractSpinBox_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__FocusInEvent = slot;
}

void QAbstractSpinBox_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_FocusInEvent(event);
}

void QAbstractSpinBox_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__FocusOutEvent = slot;
}

void QAbstractSpinBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_FocusOutEvent(event);
}

void QAbstractSpinBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__ContextMenuEvent = slot;
}

void QAbstractSpinBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QAbstractSpinBox_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__ChangeEvent = slot;
}

void QAbstractSpinBox_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_ChangeEvent(event);
}

void QAbstractSpinBox_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__CloseEvent = slot;
}

void QAbstractSpinBox_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_CloseEvent(event);
}

void QAbstractSpinBox_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__HideEvent = slot;
}

void QAbstractSpinBox_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_HideEvent(event);
}

void QAbstractSpinBox_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__MousePressEvent = slot;
}

void QAbstractSpinBox_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_MousePressEvent(event);
}

void QAbstractSpinBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__MouseReleaseEvent = slot;
}

void QAbstractSpinBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void QAbstractSpinBox_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__MouseMoveEvent = slot;
}

void QAbstractSpinBox_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_MouseMoveEvent(event);
}

void QAbstractSpinBox_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__TimerEvent = slot;
}

void QAbstractSpinBox_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_TimerEvent(event);
}

void QAbstractSpinBox_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__PaintEvent = slot;
}

void QAbstractSpinBox_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_PaintEvent(event);
}

void QAbstractSpinBox_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__ShowEvent = slot;
}

void QAbstractSpinBox_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_ShowEvent(event);
}

void QAbstractSpinBox_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__InitStyleOption = slot;
}

void QAbstractSpinBox_virtualbase_InitStyleOption(const void* self, QStyleOptionSpinBox* option) {
	( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_InitStyleOption(option);
}

void QAbstractSpinBox_override_virtual_StepEnabled(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__StepEnabled = slot;
}

int QAbstractSpinBox_virtualbase_StepEnabled(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_StepEnabled();
}

void QAbstractSpinBox_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__DevType = slot;
}

int QAbstractSpinBox_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_DevType();
}

void QAbstractSpinBox_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__SetVisible = slot;
}

void QAbstractSpinBox_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_SetVisible(visible);
}

void QAbstractSpinBox_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__HeightForWidth = slot;
}

int QAbstractSpinBox_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_HeightForWidth(param1);
}

void QAbstractSpinBox_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__HasHeightForWidth = slot;
}

bool QAbstractSpinBox_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_HasHeightForWidth();
}

void QAbstractSpinBox_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QAbstractSpinBox_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_PaintEngine();
}

void QAbstractSpinBox_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QAbstractSpinBox_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QAbstractSpinBox_override_virtual_EnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__EnterEvent = slot;
}

void QAbstractSpinBox_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_EnterEvent(event);
}

void QAbstractSpinBox_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__LeaveEvent = slot;
}

void QAbstractSpinBox_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_LeaveEvent(event);
}

void QAbstractSpinBox_override_virtual_MoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__MoveEvent = slot;
}

void QAbstractSpinBox_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_MoveEvent(event);
}

void QAbstractSpinBox_override_virtual_TabletEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__TabletEvent = slot;
}

void QAbstractSpinBox_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_TabletEvent(event);
}

void QAbstractSpinBox_override_virtual_ActionEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__ActionEvent = slot;
}

void QAbstractSpinBox_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_ActionEvent(event);
}

void QAbstractSpinBox_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__DragEnterEvent = slot;
}

void QAbstractSpinBox_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_DragEnterEvent(event);
}

void QAbstractSpinBox_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__DragMoveEvent = slot;
}

void QAbstractSpinBox_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_DragMoveEvent(event);
}

void QAbstractSpinBox_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__DragLeaveEvent = slot;
}

void QAbstractSpinBox_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QAbstractSpinBox_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__DropEvent = slot;
}

void QAbstractSpinBox_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_DropEvent(event);
}

void QAbstractSpinBox_override_virtual_NativeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__NativeEvent = slot;
}

bool QAbstractSpinBox_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

void QAbstractSpinBox_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__Metric = slot;
}

int QAbstractSpinBox_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_Metric(param1);
}

void QAbstractSpinBox_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__InitPainter = slot;
}

void QAbstractSpinBox_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_InitPainter(painter);
}

void QAbstractSpinBox_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QAbstractSpinBox_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_Redirected(offset);
}

void QAbstractSpinBox_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__SharedPainter = slot;
}

QPainter* QAbstractSpinBox_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_SharedPainter();
}

void QAbstractSpinBox_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__InputMethodEvent = slot;
}

void QAbstractSpinBox_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QAbstractSpinBox_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QAbstractSpinBox_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QAbstractSpinBox_Delete(QAbstractSpinBox* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQAbstractSpinBox*>( self );
	} else {
		delete self;
	}
}

