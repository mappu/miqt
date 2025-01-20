#include <QAbstractSpinBox>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDoubleSpinBox>
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
#include <QSpinBox>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qspinbox.h>
#include "gen_qspinbox.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSpinBox_ValueChanged(intptr_t, int);
void miqt_exec_callback_QSpinBox_TextChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QSpinBox_ValueChangedWithQString(intptr_t, struct miqt_string);
bool miqt_exec_callback_QSpinBox_Event(void*, intptr_t, QEvent*);
int miqt_exec_callback_QSpinBox_Validate(void*, intptr_t, struct miqt_string, int*);
int miqt_exec_callback_QSpinBox_ValueFromText(void*, intptr_t, struct miqt_string);
struct miqt_string miqt_exec_callback_QSpinBox_TextFromValue(void*, intptr_t, int);
void miqt_exec_callback_QSpinBox_Fixup(void*, intptr_t, struct miqt_string);
QSize* miqt_exec_callback_QSpinBox_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QSpinBox_MinimumSizeHint(void*, intptr_t);
QVariant* miqt_exec_callback_QSpinBox_InputMethodQuery(void*, intptr_t, int);
void miqt_exec_callback_QSpinBox_StepBy(void*, intptr_t, int);
void miqt_exec_callback_QSpinBox_Clear(void*, intptr_t);
void miqt_exec_callback_QSpinBox_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QSpinBox_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSpinBox_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSpinBox_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QSpinBox_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSpinBox_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSpinBox_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QSpinBox_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSpinBox_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QSpinBox_HideEvent(void*, intptr_t, QHideEvent*);
void miqt_exec_callback_QSpinBox_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSpinBox_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSpinBox_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSpinBox_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSpinBox_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QSpinBox_ShowEvent(void*, intptr_t, QShowEvent*);
int miqt_exec_callback_QSpinBox_StepEnabled(void*, intptr_t);
int miqt_exec_callback_QSpinBox_DevType(void*, intptr_t);
void miqt_exec_callback_QSpinBox_SetVisible(void*, intptr_t, bool);
int miqt_exec_callback_QSpinBox_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QSpinBox_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QSpinBox_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QSpinBox_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSpinBox_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSpinBox_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSpinBox_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QSpinBox_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QSpinBox_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QSpinBox_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QSpinBox_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QSpinBox_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QSpinBox_DropEvent(void*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QSpinBox_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QSpinBox_Metric(void*, intptr_t, int);
void miqt_exec_callback_QSpinBox_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QSpinBox_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QSpinBox_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QSpinBox_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QSpinBox_FocusNextPrevChild(void*, intptr_t, bool);
bool miqt_exec_callback_QSpinBox_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSpinBox_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSpinBox_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSpinBox_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSpinBox_DisconnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDoubleSpinBox_ValueChanged(intptr_t, double);
void miqt_exec_callback_QDoubleSpinBox_TextChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QDoubleSpinBox_ValueChangedWithQString(intptr_t, struct miqt_string);
int miqt_exec_callback_QDoubleSpinBox_Validate(void*, intptr_t, struct miqt_string, int*);
double miqt_exec_callback_QDoubleSpinBox_ValueFromText(void*, intptr_t, struct miqt_string);
struct miqt_string miqt_exec_callback_QDoubleSpinBox_TextFromValue(void*, intptr_t, double);
void miqt_exec_callback_QDoubleSpinBox_Fixup(void*, intptr_t, struct miqt_string);
QSize* miqt_exec_callback_QDoubleSpinBox_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QDoubleSpinBox_MinimumSizeHint(void*, intptr_t);
bool miqt_exec_callback_QDoubleSpinBox_Event(void*, intptr_t, QEvent*);
QVariant* miqt_exec_callback_QDoubleSpinBox_InputMethodQuery(void*, intptr_t, int);
void miqt_exec_callback_QDoubleSpinBox_StepBy(void*, intptr_t, int);
void miqt_exec_callback_QDoubleSpinBox_Clear(void*, intptr_t);
void miqt_exec_callback_QDoubleSpinBox_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QDoubleSpinBox_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDoubleSpinBox_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDoubleSpinBox_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDoubleSpinBox_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDoubleSpinBox_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDoubleSpinBox_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QDoubleSpinBox_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QDoubleSpinBox_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QDoubleSpinBox_HideEvent(void*, intptr_t, QHideEvent*);
void miqt_exec_callback_QDoubleSpinBox_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDoubleSpinBox_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDoubleSpinBox_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDoubleSpinBox_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDoubleSpinBox_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QDoubleSpinBox_ShowEvent(void*, intptr_t, QShowEvent*);
int miqt_exec_callback_QDoubleSpinBox_StepEnabled(void*, intptr_t);
int miqt_exec_callback_QDoubleSpinBox_DevType(void*, intptr_t);
void miqt_exec_callback_QDoubleSpinBox_SetVisible(void*, intptr_t, bool);
int miqt_exec_callback_QDoubleSpinBox_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QDoubleSpinBox_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QDoubleSpinBox_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QDoubleSpinBox_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDoubleSpinBox_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QDoubleSpinBox_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QDoubleSpinBox_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QDoubleSpinBox_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QDoubleSpinBox_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QDoubleSpinBox_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QDoubleSpinBox_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QDoubleSpinBox_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QDoubleSpinBox_DropEvent(void*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QDoubleSpinBox_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QDoubleSpinBox_Metric(void*, intptr_t, int);
void miqt_exec_callback_QDoubleSpinBox_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QDoubleSpinBox_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QDoubleSpinBox_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QDoubleSpinBox_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QDoubleSpinBox_FocusNextPrevChild(void*, intptr_t, bool);
bool miqt_exec_callback_QDoubleSpinBox_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDoubleSpinBox_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDoubleSpinBox_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QDoubleSpinBox_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDoubleSpinBox_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSpinBox final : public QSpinBox {
public:

	MiqtVirtualQSpinBox(QWidget* parent): QSpinBox(parent) {};
	MiqtVirtualQSpinBox(): QSpinBox() {};

	virtual ~MiqtVirtualQSpinBox() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QSpinBox::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSpinBox_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QSpinBox::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (handle__Validate == 0) {
			return QSpinBox::validate(input, pos);
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

		int callback_return_value = miqt_exec_callback_QSpinBox_Validate(const_cast<MiqtVirtualQSpinBox*>(this), handle__Validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Validate(struct miqt_string input, int* pos) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QValidator::State _ret = QSpinBox::validate(input_QString, static_cast<int&>(*pos));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ValueFromText = 0;

	// Subclass to allow providing a Go implementation
	virtual int valueFromText(const QString& text) const override {
		if (handle__ValueFromText == 0) {
			return QSpinBox::valueFromText(text);
		}
		
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;

		int callback_return_value = miqt_exec_callback_QSpinBox_ValueFromText(const_cast<MiqtVirtualQSpinBox*>(this), handle__ValueFromText, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ValueFromText(struct miqt_string text) const {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		return QSpinBox::valueFromText(text_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TextFromValue = 0;

	// Subclass to allow providing a Go implementation
	virtual QString textFromValue(int val) const override {
		if (handle__TextFromValue == 0) {
			return QSpinBox::textFromValue(val);
		}
		
		int sigval1 = val;

		struct miqt_string callback_return_value = miqt_exec_callback_QSpinBox_TextFromValue(const_cast<MiqtVirtualQSpinBox*>(this), handle__TextFromValue, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_TextFromValue(int val) const {

		QString _ret = QSpinBox::textFromValue(static_cast<int>(val));
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _b = _ret.toUtf8();
		struct miqt_string _ms;
		_ms.len = _b.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _b.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& str) const override {
		if (handle__Fixup == 0) {
			QSpinBox::fixup(str);
			return;
		}
		
		QString str_ret = str;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray str_b = str_ret.toUtf8();
		struct miqt_string str_ms;
		str_ms.len = str_b.length();
		str_ms.data = static_cast<char*>(malloc(str_ms.len));
		memcpy(str_ms.data, str_b.data(), str_ms.len);
		struct miqt_string sigval1 = str_ms;

		miqt_exec_callback_QSpinBox_Fixup(const_cast<MiqtVirtualQSpinBox*>(this), handle__Fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Fixup(struct miqt_string str) const {
		QString str_QString = QString::fromUtf8(str.data, str.len);

		QSpinBox::fixup(str_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QSpinBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSpinBox_SizeHint(const_cast<MiqtVirtualQSpinBox*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QSpinBox::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QSpinBox::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSpinBox_MinimumSizeHint(const_cast<MiqtVirtualQSpinBox*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QSpinBox::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QSpinBox::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QSpinBox_InputMethodQuery(const_cast<MiqtVirtualQSpinBox*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QSpinBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StepBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void stepBy(int steps) override {
		if (handle__StepBy == 0) {
			QSpinBox::stepBy(steps);
			return;
		}
		
		int sigval1 = steps;

		miqt_exec_callback_QSpinBox_StepBy(this, handle__StepBy, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_StepBy(int steps) {

		QSpinBox::stepBy(static_cast<int>(steps));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__Clear == 0) {
			QSpinBox::clear();
			return;
		}
		

		miqt_exec_callback_QSpinBox_Clear(this, handle__Clear);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Clear() {

		QSpinBox::clear();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QSpinBox::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QSpinBox::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QSpinBox::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QSpinBox::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QSpinBox::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QSpinBox::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QSpinBox::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QSpinBox::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QSpinBox::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QSpinBox::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QSpinBox::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QSpinBox::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QSpinBox::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QSpinBox::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__ChangeEvent == 0) {
			QSpinBox::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* event) {

		QSpinBox::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QSpinBox::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QSpinBox::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QSpinBox::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QSpinBox::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QSpinBox::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QSpinBox::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QSpinBox::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QSpinBox::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QSpinBox::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QSpinBox::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QSpinBox::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QSpinBox::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QSpinBox::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QSpinBox::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QSpinBox::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QSpinBox::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StepEnabled = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
		if (handle__StepEnabled == 0) {
			return QSpinBox::stepEnabled();
		}
		

		int callback_return_value = miqt_exec_callback_QSpinBox_StepEnabled(const_cast<MiqtVirtualQSpinBox*>(this), handle__StepEnabled);

		return static_cast<QAbstractSpinBox::StepEnabled>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StepEnabled() const {

		QAbstractSpinBox::StepEnabled _ret = QSpinBox::stepEnabled();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QSpinBox::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QSpinBox_DevType(const_cast<MiqtVirtualQSpinBox*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QSpinBox::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QSpinBox::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QSpinBox_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QSpinBox::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QSpinBox::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QSpinBox_HeightForWidth(const_cast<MiqtVirtualQSpinBox*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QSpinBox::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QSpinBox::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QSpinBox_HasHeightForWidth(const_cast<MiqtVirtualQSpinBox*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QSpinBox::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QSpinBox::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QSpinBox_PaintEngine(const_cast<MiqtVirtualQSpinBox*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QSpinBox::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QSpinBox::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QSpinBox::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QSpinBox::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QSpinBox::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QSpinBox::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QSpinBox::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QSpinBox::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QSpinBox::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QSpinBox::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QSpinBox::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QSpinBox::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QSpinBox::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QSpinBox::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QSpinBox::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QSpinBox::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QSpinBox::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QSpinBox::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QSpinBox::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QSpinBox::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QSpinBox::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QSpinBox::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QSpinBox_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QSpinBox::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QSpinBox::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QSpinBox_Metric(const_cast<MiqtVirtualQSpinBox*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QSpinBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QSpinBox::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QSpinBox_InitPainter(const_cast<MiqtVirtualQSpinBox*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QSpinBox::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QSpinBox::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QSpinBox_Redirected(const_cast<MiqtVirtualQSpinBox*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QSpinBox::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QSpinBox::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QSpinBox_SharedPainter(const_cast<MiqtVirtualQSpinBox*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QSpinBox::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QSpinBox::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QSpinBox_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QSpinBox::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QSpinBox::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QSpinBox_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QSpinBox::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QSpinBox::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSpinBox_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QSpinBox::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QSpinBox::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QSpinBox::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QSpinBox::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QSpinBox::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QSpinBox::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSpinBox_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QSpinBox::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QSpinBox::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSpinBox_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QSpinBox::disconnectNotify(*signal);

	}

};

QSpinBox* QSpinBox_new(QWidget* parent) {
	return new MiqtVirtualQSpinBox(parent);
}

QSpinBox* QSpinBox_new2() {
	return new MiqtVirtualQSpinBox();
}

void QSpinBox_virtbase(QSpinBox* src, QAbstractSpinBox** outptr_QAbstractSpinBox) {
	*outptr_QAbstractSpinBox = static_cast<QAbstractSpinBox*>(src);
}

QMetaObject* QSpinBox_MetaObject(const QSpinBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSpinBox_Metacast(QSpinBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSpinBox_Tr(const char* s) {
	QString _ret = QSpinBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSpinBox_TrUtf8(const char* s) {
	QString _ret = QSpinBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QSpinBox_Value(const QSpinBox* self) {
	return self->value();
}

struct miqt_string QSpinBox_Prefix(const QSpinBox* self) {
	QString _ret = self->prefix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSpinBox_SetPrefix(QSpinBox* self, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	self->setPrefix(prefix_QString);
}

struct miqt_string QSpinBox_Suffix(const QSpinBox* self) {
	QString _ret = self->suffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSpinBox_SetSuffix(QSpinBox* self, struct miqt_string suffix) {
	QString suffix_QString = QString::fromUtf8(suffix.data, suffix.len);
	self->setSuffix(suffix_QString);
}

struct miqt_string QSpinBox_CleanText(const QSpinBox* self) {
	QString _ret = self->cleanText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QSpinBox_SingleStep(const QSpinBox* self) {
	return self->singleStep();
}

void QSpinBox_SetSingleStep(QSpinBox* self, int val) {
	self->setSingleStep(static_cast<int>(val));
}

int QSpinBox_Minimum(const QSpinBox* self) {
	return self->minimum();
}

void QSpinBox_SetMinimum(QSpinBox* self, int min) {
	self->setMinimum(static_cast<int>(min));
}

int QSpinBox_Maximum(const QSpinBox* self) {
	return self->maximum();
}

void QSpinBox_SetMaximum(QSpinBox* self, int max) {
	self->setMaximum(static_cast<int>(max));
}

void QSpinBox_SetRange(QSpinBox* self, int min, int max) {
	self->setRange(static_cast<int>(min), static_cast<int>(max));
}

int QSpinBox_StepType(const QSpinBox* self) {
	QAbstractSpinBox::StepType _ret = self->stepType();
	return static_cast<int>(_ret);
}

void QSpinBox_SetStepType(QSpinBox* self, int stepType) {
	self->setStepType(static_cast<QAbstractSpinBox::StepType>(stepType));
}

int QSpinBox_DisplayIntegerBase(const QSpinBox* self) {
	return self->displayIntegerBase();
}

void QSpinBox_SetDisplayIntegerBase(QSpinBox* self, int base) {
	self->setDisplayIntegerBase(static_cast<int>(base));
}

void QSpinBox_SetValue(QSpinBox* self, int val) {
	self->setValue(static_cast<int>(val));
}

void QSpinBox_ValueChanged(QSpinBox* self, int param1) {
	self->valueChanged(static_cast<int>(param1));
}

void QSpinBox_connect_ValueChanged(QSpinBox* self, intptr_t slot) {
	MiqtVirtualQSpinBox::connect(self, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QSpinBox_ValueChanged(slot, sigval1);
	});
}

void QSpinBox_TextChanged(QSpinBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->textChanged(param1_QString);
}

void QSpinBox_connect_TextChanged(QSpinBox* self, intptr_t slot) {
	MiqtVirtualQSpinBox::connect(self, static_cast<void (QSpinBox::*)(const QString&)>(&QSpinBox::textChanged), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QSpinBox_TextChanged(slot, sigval1);
	});
}

void QSpinBox_ValueChangedWithQString(QSpinBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->valueChanged(param1_QString);
}

void QSpinBox_connect_ValueChangedWithQString(QSpinBox* self, intptr_t slot) {
	MiqtVirtualQSpinBox::connect(self, static_cast<void (QSpinBox::*)(const QString&)>(&QSpinBox::valueChanged), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QSpinBox_ValueChangedWithQString(slot, sigval1);
	});
}

struct miqt_string QSpinBox_Tr2(const char* s, const char* c) {
	QString _ret = QSpinBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSpinBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSpinBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSpinBox_TrUtf82(const char* s, const char* c) {
	QString _ret = QSpinBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSpinBox_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSpinBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSpinBox_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QSpinBox_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSpinBox*)(self) )->virtualbase_Event(event);
}

bool QSpinBox_override_virtual_Validate(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Validate = slot;
	return true;
}

int QSpinBox_virtualbase_Validate(const void* self, struct miqt_string input, int* pos) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_Validate(input, pos);
}

bool QSpinBox_override_virtual_ValueFromText(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ValueFromText = slot;
	return true;
}

int QSpinBox_virtualbase_ValueFromText(const void* self, struct miqt_string text) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_ValueFromText(text);
}

bool QSpinBox_override_virtual_TextFromValue(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TextFromValue = slot;
	return true;
}

struct miqt_string QSpinBox_virtualbase_TextFromValue(const void* self, int val) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_TextFromValue(val);
}

bool QSpinBox_override_virtual_Fixup(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Fixup = slot;
	return true;
}

void QSpinBox_virtualbase_Fixup(const void* self, struct miqt_string str) {
	( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_Fixup(str);
}

bool QSpinBox_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QSpinBox_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_SizeHint();
}

bool QSpinBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QSpinBox_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_MinimumSizeHint();
}

bool QSpinBox_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QSpinBox_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QSpinBox_override_virtual_StepBy(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StepBy = slot;
	return true;
}

void QSpinBox_virtualbase_StepBy(void* self, int steps) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_StepBy(steps);
}

bool QSpinBox_override_virtual_Clear(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clear = slot;
	return true;
}

void QSpinBox_virtualbase_Clear(void* self) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_Clear();
}

bool QSpinBox_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QSpinBox_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_ResizeEvent(event);
}

bool QSpinBox_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QSpinBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QSpinBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QSpinBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QSpinBox_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QSpinBox_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_WheelEvent(event);
}

bool QSpinBox_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QSpinBox_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_FocusInEvent(event);
}

bool QSpinBox_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QSpinBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QSpinBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QSpinBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QSpinBox_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QSpinBox_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_ChangeEvent(event);
}

bool QSpinBox_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QSpinBox_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_CloseEvent(event);
}

bool QSpinBox_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QSpinBox_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_HideEvent(event);
}

bool QSpinBox_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QSpinBox_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_MousePressEvent(event);
}

bool QSpinBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QSpinBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QSpinBox_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QSpinBox_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QSpinBox_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QSpinBox_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_TimerEvent(event);
}

bool QSpinBox_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QSpinBox_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_PaintEvent(event);
}

bool QSpinBox_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QSpinBox_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_ShowEvent(event);
}

bool QSpinBox_override_virtual_StepEnabled(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StepEnabled = slot;
	return true;
}

int QSpinBox_virtualbase_StepEnabled(const void* self) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_StepEnabled();
}

bool QSpinBox_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QSpinBox_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_DevType();
}

bool QSpinBox_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QSpinBox_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_SetVisible(visible);
}

bool QSpinBox_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QSpinBox_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QSpinBox_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QSpinBox_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_HasHeightForWidth();
}

bool QSpinBox_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QSpinBox_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_PaintEngine();
}

bool QSpinBox_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QSpinBox_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QSpinBox_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QSpinBox_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_EnterEvent(event);
}

bool QSpinBox_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QSpinBox_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_LeaveEvent(event);
}

bool QSpinBox_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QSpinBox_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_MoveEvent(event);
}

bool QSpinBox_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QSpinBox_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_TabletEvent(event);
}

bool QSpinBox_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QSpinBox_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_ActionEvent(event);
}

bool QSpinBox_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QSpinBox_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QSpinBox_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QSpinBox_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QSpinBox_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QSpinBox_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QSpinBox_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QSpinBox_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_DropEvent(event);
}

bool QSpinBox_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QSpinBox_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQSpinBox*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QSpinBox_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QSpinBox_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_Metric(param1);
}

bool QSpinBox_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QSpinBox_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_InitPainter(painter);
}

bool QSpinBox_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QSpinBox_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_Redirected(offset);
}

bool QSpinBox_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QSpinBox_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_SharedPainter();
}

bool QSpinBox_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QSpinBox_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QSpinBox_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QSpinBox_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQSpinBox*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QSpinBox_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QSpinBox_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSpinBox*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QSpinBox_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QSpinBox_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_ChildEvent(event);
}

bool QSpinBox_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QSpinBox_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_CustomEvent(event);
}

bool QSpinBox_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QSpinBox_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QSpinBox_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QSpinBox_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QSpinBox_Delete(QSpinBox* self) {
	delete self;
}

class MiqtVirtualQDoubleSpinBox final : public QDoubleSpinBox {
public:

	MiqtVirtualQDoubleSpinBox(QWidget* parent): QDoubleSpinBox(parent) {};
	MiqtVirtualQDoubleSpinBox(): QDoubleSpinBox() {};

	virtual ~MiqtVirtualQDoubleSpinBox() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (handle__Validate == 0) {
			return QDoubleSpinBox::validate(input, pos);
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

		int callback_return_value = miqt_exec_callback_QDoubleSpinBox_Validate(const_cast<MiqtVirtualQDoubleSpinBox*>(this), handle__Validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Validate(struct miqt_string input, int* pos) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QValidator::State _ret = QDoubleSpinBox::validate(input_QString, static_cast<int&>(*pos));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ValueFromText = 0;

	// Subclass to allow providing a Go implementation
	virtual double valueFromText(const QString& text) const override {
		if (handle__ValueFromText == 0) {
			return QDoubleSpinBox::valueFromText(text);
		}
		
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;

		double callback_return_value = miqt_exec_callback_QDoubleSpinBox_ValueFromText(const_cast<MiqtVirtualQDoubleSpinBox*>(this), handle__ValueFromText, sigval1);

		return static_cast<double>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	double virtualbase_ValueFromText(struct miqt_string text) const {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		return QDoubleSpinBox::valueFromText(text_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TextFromValue = 0;

	// Subclass to allow providing a Go implementation
	virtual QString textFromValue(double val) const override {
		if (handle__TextFromValue == 0) {
			return QDoubleSpinBox::textFromValue(val);
		}
		
		double sigval1 = val;

		struct miqt_string callback_return_value = miqt_exec_callback_QDoubleSpinBox_TextFromValue(const_cast<MiqtVirtualQDoubleSpinBox*>(this), handle__TextFromValue, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_TextFromValue(double val) const {

		QString _ret = QDoubleSpinBox::textFromValue(static_cast<double>(val));
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _b = _ret.toUtf8();
		struct miqt_string _ms;
		_ms.len = _b.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _b.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& str) const override {
		if (handle__Fixup == 0) {
			QDoubleSpinBox::fixup(str);
			return;
		}
		
		QString str_ret = str;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray str_b = str_ret.toUtf8();
		struct miqt_string str_ms;
		str_ms.len = str_b.length();
		str_ms.data = static_cast<char*>(malloc(str_ms.len));
		memcpy(str_ms.data, str_b.data(), str_ms.len);
		struct miqt_string sigval1 = str_ms;

		miqt_exec_callback_QDoubleSpinBox_Fixup(const_cast<MiqtVirtualQDoubleSpinBox*>(this), handle__Fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Fixup(struct miqt_string str) const {
		QString str_QString = QString::fromUtf8(str.data, str.len);

		QDoubleSpinBox::fixup(str_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QDoubleSpinBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDoubleSpinBox_SizeHint(const_cast<MiqtVirtualQDoubleSpinBox*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QDoubleSpinBox::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QDoubleSpinBox::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDoubleSpinBox_MinimumSizeHint(const_cast<MiqtVirtualQDoubleSpinBox*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QDoubleSpinBox::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QDoubleSpinBox::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDoubleSpinBox_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QDoubleSpinBox::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QDoubleSpinBox::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QDoubleSpinBox_InputMethodQuery(const_cast<MiqtVirtualQDoubleSpinBox*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QDoubleSpinBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StepBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void stepBy(int steps) override {
		if (handle__StepBy == 0) {
			QDoubleSpinBox::stepBy(steps);
			return;
		}
		
		int sigval1 = steps;

		miqt_exec_callback_QDoubleSpinBox_StepBy(this, handle__StepBy, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_StepBy(int steps) {

		QDoubleSpinBox::stepBy(static_cast<int>(steps));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__Clear == 0) {
			QDoubleSpinBox::clear();
			return;
		}
		

		miqt_exec_callback_QDoubleSpinBox_Clear(this, handle__Clear);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Clear() {

		QDoubleSpinBox::clear();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QDoubleSpinBox::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QDoubleSpinBox::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QDoubleSpinBox::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QDoubleSpinBox::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QDoubleSpinBox::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QDoubleSpinBox::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QDoubleSpinBox::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QDoubleSpinBox::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QDoubleSpinBox::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QDoubleSpinBox::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QDoubleSpinBox::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QDoubleSpinBox::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QDoubleSpinBox::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QDoubleSpinBox::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__ChangeEvent == 0) {
			QDoubleSpinBox::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* event) {

		QDoubleSpinBox::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QDoubleSpinBox::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QDoubleSpinBox::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QDoubleSpinBox::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QDoubleSpinBox::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QDoubleSpinBox::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QDoubleSpinBox::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QDoubleSpinBox::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QDoubleSpinBox::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QDoubleSpinBox::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QDoubleSpinBox::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QDoubleSpinBox::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QDoubleSpinBox::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QDoubleSpinBox::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QDoubleSpinBox::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QDoubleSpinBox::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QDoubleSpinBox::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StepEnabled = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
		if (handle__StepEnabled == 0) {
			return QDoubleSpinBox::stepEnabled();
		}
		

		int callback_return_value = miqt_exec_callback_QDoubleSpinBox_StepEnabled(const_cast<MiqtVirtualQDoubleSpinBox*>(this), handle__StepEnabled);

		return static_cast<QAbstractSpinBox::StepEnabled>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StepEnabled() const {

		QAbstractSpinBox::StepEnabled _ret = QDoubleSpinBox::stepEnabled();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QDoubleSpinBox::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QDoubleSpinBox_DevType(const_cast<MiqtVirtualQDoubleSpinBox*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QDoubleSpinBox::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QDoubleSpinBox::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QDoubleSpinBox_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QDoubleSpinBox::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QDoubleSpinBox::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QDoubleSpinBox_HeightForWidth(const_cast<MiqtVirtualQDoubleSpinBox*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QDoubleSpinBox::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QDoubleSpinBox::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QDoubleSpinBox_HasHeightForWidth(const_cast<MiqtVirtualQDoubleSpinBox*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QDoubleSpinBox::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QDoubleSpinBox::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QDoubleSpinBox_PaintEngine(const_cast<MiqtVirtualQDoubleSpinBox*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QDoubleSpinBox::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QDoubleSpinBox::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QDoubleSpinBox::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QDoubleSpinBox::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QDoubleSpinBox::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QDoubleSpinBox::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QDoubleSpinBox::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QDoubleSpinBox::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QDoubleSpinBox::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QDoubleSpinBox::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QDoubleSpinBox::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QDoubleSpinBox::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QDoubleSpinBox::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QDoubleSpinBox::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QDoubleSpinBox::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QDoubleSpinBox::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QDoubleSpinBox::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QDoubleSpinBox::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QDoubleSpinBox::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QDoubleSpinBox::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QDoubleSpinBox::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QDoubleSpinBox::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QDoubleSpinBox_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QDoubleSpinBox::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QDoubleSpinBox::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QDoubleSpinBox_Metric(const_cast<MiqtVirtualQDoubleSpinBox*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QDoubleSpinBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QDoubleSpinBox::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QDoubleSpinBox_InitPainter(const_cast<MiqtVirtualQDoubleSpinBox*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QDoubleSpinBox::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QDoubleSpinBox::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QDoubleSpinBox_Redirected(const_cast<MiqtVirtualQDoubleSpinBox*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QDoubleSpinBox::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QDoubleSpinBox::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QDoubleSpinBox_SharedPainter(const_cast<MiqtVirtualQDoubleSpinBox*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QDoubleSpinBox::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QDoubleSpinBox::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QDoubleSpinBox_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QDoubleSpinBox::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QDoubleSpinBox::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QDoubleSpinBox_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QDoubleSpinBox::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QDoubleSpinBox::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDoubleSpinBox_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QDoubleSpinBox::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QDoubleSpinBox::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QDoubleSpinBox::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QDoubleSpinBox::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QDoubleSpinBox::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QDoubleSpinBox::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDoubleSpinBox_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QDoubleSpinBox::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QDoubleSpinBox::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDoubleSpinBox_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QDoubleSpinBox::disconnectNotify(*signal);

	}

};

QDoubleSpinBox* QDoubleSpinBox_new(QWidget* parent) {
	return new MiqtVirtualQDoubleSpinBox(parent);
}

QDoubleSpinBox* QDoubleSpinBox_new2() {
	return new MiqtVirtualQDoubleSpinBox();
}

void QDoubleSpinBox_virtbase(QDoubleSpinBox* src, QAbstractSpinBox** outptr_QAbstractSpinBox) {
	*outptr_QAbstractSpinBox = static_cast<QAbstractSpinBox*>(src);
}

QMetaObject* QDoubleSpinBox_MetaObject(const QDoubleSpinBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDoubleSpinBox_Metacast(QDoubleSpinBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDoubleSpinBox_Tr(const char* s) {
	QString _ret = QDoubleSpinBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDoubleSpinBox_TrUtf8(const char* s) {
	QString _ret = QDoubleSpinBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QDoubleSpinBox_Value(const QDoubleSpinBox* self) {
	return self->value();
}

struct miqt_string QDoubleSpinBox_Prefix(const QDoubleSpinBox* self) {
	QString _ret = self->prefix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDoubleSpinBox_SetPrefix(QDoubleSpinBox* self, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	self->setPrefix(prefix_QString);
}

struct miqt_string QDoubleSpinBox_Suffix(const QDoubleSpinBox* self) {
	QString _ret = self->suffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDoubleSpinBox_SetSuffix(QDoubleSpinBox* self, struct miqt_string suffix) {
	QString suffix_QString = QString::fromUtf8(suffix.data, suffix.len);
	self->setSuffix(suffix_QString);
}

struct miqt_string QDoubleSpinBox_CleanText(const QDoubleSpinBox* self) {
	QString _ret = self->cleanText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QDoubleSpinBox_SingleStep(const QDoubleSpinBox* self) {
	return self->singleStep();
}

void QDoubleSpinBox_SetSingleStep(QDoubleSpinBox* self, double val) {
	self->setSingleStep(static_cast<double>(val));
}

double QDoubleSpinBox_Minimum(const QDoubleSpinBox* self) {
	return self->minimum();
}

void QDoubleSpinBox_SetMinimum(QDoubleSpinBox* self, double min) {
	self->setMinimum(static_cast<double>(min));
}

double QDoubleSpinBox_Maximum(const QDoubleSpinBox* self) {
	return self->maximum();
}

void QDoubleSpinBox_SetMaximum(QDoubleSpinBox* self, double max) {
	self->setMaximum(static_cast<double>(max));
}

void QDoubleSpinBox_SetRange(QDoubleSpinBox* self, double min, double max) {
	self->setRange(static_cast<double>(min), static_cast<double>(max));
}

int QDoubleSpinBox_StepType(const QDoubleSpinBox* self) {
	QAbstractSpinBox::StepType _ret = self->stepType();
	return static_cast<int>(_ret);
}

void QDoubleSpinBox_SetStepType(QDoubleSpinBox* self, int stepType) {
	self->setStepType(static_cast<QAbstractSpinBox::StepType>(stepType));
}

int QDoubleSpinBox_Decimals(const QDoubleSpinBox* self) {
	return self->decimals();
}

void QDoubleSpinBox_SetDecimals(QDoubleSpinBox* self, int prec) {
	self->setDecimals(static_cast<int>(prec));
}

int QDoubleSpinBox_Validate(const QDoubleSpinBox* self, struct miqt_string input, int* pos) {
	QString input_QString = QString::fromUtf8(input.data, input.len);
	QValidator::State _ret = self->validate(input_QString, static_cast<int&>(*pos));
	return static_cast<int>(_ret);
}

double QDoubleSpinBox_ValueFromText(const QDoubleSpinBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->valueFromText(text_QString);
}

struct miqt_string QDoubleSpinBox_TextFromValue(const QDoubleSpinBox* self, double val) {
	QString _ret = self->textFromValue(static_cast<double>(val));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDoubleSpinBox_Fixup(const QDoubleSpinBox* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	self->fixup(str_QString);
}

void QDoubleSpinBox_SetValue(QDoubleSpinBox* self, double val) {
	self->setValue(static_cast<double>(val));
}

void QDoubleSpinBox_ValueChanged(QDoubleSpinBox* self, double param1) {
	self->valueChanged(static_cast<double>(param1));
}

void QDoubleSpinBox_connect_ValueChanged(QDoubleSpinBox* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox::connect(self, static_cast<void (QDoubleSpinBox::*)(double)>(&QDoubleSpinBox::valueChanged), self, [=](double param1) {
		double sigval1 = param1;
		miqt_exec_callback_QDoubleSpinBox_ValueChanged(slot, sigval1);
	});
}

void QDoubleSpinBox_TextChanged(QDoubleSpinBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->textChanged(param1_QString);
}

void QDoubleSpinBox_connect_TextChanged(QDoubleSpinBox* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox::connect(self, static_cast<void (QDoubleSpinBox::*)(const QString&)>(&QDoubleSpinBox::textChanged), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QDoubleSpinBox_TextChanged(slot, sigval1);
	});
}

void QDoubleSpinBox_ValueChangedWithQString(QDoubleSpinBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->valueChanged(param1_QString);
}

void QDoubleSpinBox_connect_ValueChangedWithQString(QDoubleSpinBox* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox::connect(self, static_cast<void (QDoubleSpinBox::*)(const QString&)>(&QDoubleSpinBox::valueChanged), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QDoubleSpinBox_ValueChangedWithQString(slot, sigval1);
	});
}

struct miqt_string QDoubleSpinBox_Tr2(const char* s, const char* c) {
	QString _ret = QDoubleSpinBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDoubleSpinBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDoubleSpinBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDoubleSpinBox_TrUtf82(const char* s, const char* c) {
	QString _ret = QDoubleSpinBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDoubleSpinBox_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QDoubleSpinBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDoubleSpinBox_override_virtual_Validate(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Validate = slot;
	return true;
}

int QDoubleSpinBox_virtualbase_Validate(const void* self, struct miqt_string input, int* pos) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_Validate(input, pos);
}

bool QDoubleSpinBox_override_virtual_ValueFromText(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ValueFromText = slot;
	return true;
}

double QDoubleSpinBox_virtualbase_ValueFromText(const void* self, struct miqt_string text) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_ValueFromText(text);
}

bool QDoubleSpinBox_override_virtual_TextFromValue(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TextFromValue = slot;
	return true;
}

struct miqt_string QDoubleSpinBox_virtualbase_TextFromValue(const void* self, double val) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_TextFromValue(val);
}

bool QDoubleSpinBox_override_virtual_Fixup(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Fixup = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_Fixup(const void* self, struct miqt_string str) {
	( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_Fixup(str);
}

bool QDoubleSpinBox_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QDoubleSpinBox_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_SizeHint();
}

bool QDoubleSpinBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QDoubleSpinBox_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_MinimumSizeHint();
}

bool QDoubleSpinBox_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QDoubleSpinBox_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_Event(event);
}

bool QDoubleSpinBox_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QDoubleSpinBox_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QDoubleSpinBox_override_virtual_StepBy(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StepBy = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_StepBy(void* self, int steps) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_StepBy(steps);
}

bool QDoubleSpinBox_override_virtual_Clear(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clear = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_Clear(void* self) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_Clear();
}

bool QDoubleSpinBox_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_ResizeEvent(event);
}

bool QDoubleSpinBox_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QDoubleSpinBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QDoubleSpinBox_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_WheelEvent(event);
}

bool QDoubleSpinBox_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_FocusInEvent(event);
}

bool QDoubleSpinBox_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QDoubleSpinBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QDoubleSpinBox_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_ChangeEvent(event);
}

bool QDoubleSpinBox_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_CloseEvent(event);
}

bool QDoubleSpinBox_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_HideEvent(event);
}

bool QDoubleSpinBox_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_MousePressEvent(event);
}

bool QDoubleSpinBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QDoubleSpinBox_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QDoubleSpinBox_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_TimerEvent(event);
}

bool QDoubleSpinBox_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_PaintEvent(event);
}

bool QDoubleSpinBox_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_ShowEvent(event);
}

bool QDoubleSpinBox_override_virtual_StepEnabled(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StepEnabled = slot;
	return true;
}

int QDoubleSpinBox_virtualbase_StepEnabled(const void* self) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_StepEnabled();
}

bool QDoubleSpinBox_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QDoubleSpinBox_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_DevType();
}

bool QDoubleSpinBox_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_SetVisible(visible);
}

bool QDoubleSpinBox_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QDoubleSpinBox_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QDoubleSpinBox_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QDoubleSpinBox_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_HasHeightForWidth();
}

bool QDoubleSpinBox_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QDoubleSpinBox_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_PaintEngine();
}

bool QDoubleSpinBox_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QDoubleSpinBox_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_EnterEvent(event);
}

bool QDoubleSpinBox_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_LeaveEvent(event);
}

bool QDoubleSpinBox_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_MoveEvent(event);
}

bool QDoubleSpinBox_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_TabletEvent(event);
}

bool QDoubleSpinBox_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_ActionEvent(event);
}

bool QDoubleSpinBox_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QDoubleSpinBox_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QDoubleSpinBox_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QDoubleSpinBox_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_DropEvent(event);
}

bool QDoubleSpinBox_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QDoubleSpinBox_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QDoubleSpinBox_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QDoubleSpinBox_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_Metric(param1);
}

bool QDoubleSpinBox_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_InitPainter(painter);
}

bool QDoubleSpinBox_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QDoubleSpinBox_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_Redirected(offset);
}

bool QDoubleSpinBox_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QDoubleSpinBox_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_SharedPainter();
}

bool QDoubleSpinBox_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QDoubleSpinBox_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QDoubleSpinBox_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QDoubleSpinBox_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QDoubleSpinBox_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QDoubleSpinBox_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_ChildEvent(event);
}

bool QDoubleSpinBox_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_CustomEvent(event);
}

bool QDoubleSpinBox_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QDoubleSpinBox_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QDoubleSpinBox_Delete(QDoubleSpinBox* self) {
	delete self;
}

