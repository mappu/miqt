#include <QAbstractSpinBox>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDoubleSpinBox>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QKeyEvent>
#include <QMetaObject>
#include <QMouseEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QSpinBox>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionSpinBox>
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
void miqt_exec_callback_QSpinBox_InitStyleOption(void*, intptr_t, QStyleOptionSpinBox*);
int miqt_exec_callback_QSpinBox_StepEnabled(void*, intptr_t);
void miqt_exec_callback_QDoubleSpinBox_ValueChanged(intptr_t, double);
void miqt_exec_callback_QDoubleSpinBox_TextChanged(intptr_t, struct miqt_string);
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
void miqt_exec_callback_QDoubleSpinBox_InitStyleOption(void*, intptr_t, QStyleOptionSpinBox*);
int miqt_exec_callback_QDoubleSpinBox_StepEnabled(void*, intptr_t);
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
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
		if (handle__InitStyleOption == 0) {
			QSpinBox::initStyleOption(option);
			return;
		}
		
		QStyleOptionSpinBox* sigval1 = option;

		miqt_exec_callback_QSpinBox_InitStyleOption(const_cast<MiqtVirtualQSpinBox*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionSpinBox* option) const {

		QSpinBox::initStyleOption(option);

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

bool QSpinBox_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QSpinBox_virtualbase_InitStyleOption(const void* self, QStyleOptionSpinBox* option) {
	( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_InitStyleOption(option);
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
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
		if (handle__InitStyleOption == 0) {
			QDoubleSpinBox::initStyleOption(option);
			return;
		}
		
		QStyleOptionSpinBox* sigval1 = option;

		miqt_exec_callback_QDoubleSpinBox_InitStyleOption(const_cast<MiqtVirtualQDoubleSpinBox*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionSpinBox* option) const {

		QDoubleSpinBox::initStyleOption(option);

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

bool QDoubleSpinBox_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_InitStyleOption(const void* self, QStyleOptionSpinBox* option) {
	( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_InitStyleOption(option);
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

void QDoubleSpinBox_Delete(QDoubleSpinBox* self) {
	delete self;
}

