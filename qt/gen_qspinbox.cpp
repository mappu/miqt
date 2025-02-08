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
#include <QLineEdit>
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
#include <QStyleOptionSpinBox>
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

void miqt_exec_callback_QSpinBox_valueChanged(intptr_t, int);
void miqt_exec_callback_QSpinBox_textChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QSpinBox_valueChangedWithQString(intptr_t, struct miqt_string);
bool miqt_exec_callback_QSpinBox_event(QSpinBox*, intptr_t, QEvent*);
int miqt_exec_callback_QSpinBox_validate(const QSpinBox*, intptr_t, struct miqt_string, int*);
int miqt_exec_callback_QSpinBox_valueFromText(const QSpinBox*, intptr_t, struct miqt_string);
struct miqt_string miqt_exec_callback_QSpinBox_textFromValue(const QSpinBox*, intptr_t, int);
void miqt_exec_callback_QSpinBox_fixup(const QSpinBox*, intptr_t, struct miqt_string);
QSize* miqt_exec_callback_QSpinBox_sizeHint(const QSpinBox*, intptr_t);
QSize* miqt_exec_callback_QSpinBox_minimumSizeHint(const QSpinBox*, intptr_t);
QVariant* miqt_exec_callback_QSpinBox_inputMethodQuery(const QSpinBox*, intptr_t, int);
void miqt_exec_callback_QSpinBox_stepBy(QSpinBox*, intptr_t, int);
void miqt_exec_callback_QSpinBox_clear(QSpinBox*, intptr_t);
void miqt_exec_callback_QSpinBox_resizeEvent(QSpinBox*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QSpinBox_keyPressEvent(QSpinBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSpinBox_keyReleaseEvent(QSpinBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSpinBox_wheelEvent(QSpinBox*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QSpinBox_focusInEvent(QSpinBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSpinBox_focusOutEvent(QSpinBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSpinBox_contextMenuEvent(QSpinBox*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QSpinBox_changeEvent(QSpinBox*, intptr_t, QEvent*);
void miqt_exec_callback_QSpinBox_closeEvent(QSpinBox*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QSpinBox_hideEvent(QSpinBox*, intptr_t, QHideEvent*);
void miqt_exec_callback_QSpinBox_mousePressEvent(QSpinBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSpinBox_mouseReleaseEvent(QSpinBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSpinBox_mouseMoveEvent(QSpinBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSpinBox_timerEvent(QSpinBox*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSpinBox_paintEvent(QSpinBox*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QSpinBox_showEvent(QSpinBox*, intptr_t, QShowEvent*);
int miqt_exec_callback_QSpinBox_stepEnabled(const QSpinBox*, intptr_t);
int miqt_exec_callback_QSpinBox_devType(const QSpinBox*, intptr_t);
void miqt_exec_callback_QSpinBox_setVisible(QSpinBox*, intptr_t, bool);
int miqt_exec_callback_QSpinBox_heightForWidth(const QSpinBox*, intptr_t, int);
bool miqt_exec_callback_QSpinBox_hasHeightForWidth(const QSpinBox*, intptr_t);
QPaintEngine* miqt_exec_callback_QSpinBox_paintEngine(const QSpinBox*, intptr_t);
void miqt_exec_callback_QSpinBox_mouseDoubleClickEvent(QSpinBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSpinBox_enterEvent(QSpinBox*, intptr_t, QEvent*);
void miqt_exec_callback_QSpinBox_leaveEvent(QSpinBox*, intptr_t, QEvent*);
void miqt_exec_callback_QSpinBox_moveEvent(QSpinBox*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QSpinBox_tabletEvent(QSpinBox*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QSpinBox_actionEvent(QSpinBox*, intptr_t, QActionEvent*);
void miqt_exec_callback_QSpinBox_dragEnterEvent(QSpinBox*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QSpinBox_dragMoveEvent(QSpinBox*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QSpinBox_dragLeaveEvent(QSpinBox*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QSpinBox_dropEvent(QSpinBox*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QSpinBox_nativeEvent(QSpinBox*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QSpinBox_metric(const QSpinBox*, intptr_t, int);
void miqt_exec_callback_QSpinBox_initPainter(const QSpinBox*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QSpinBox_redirected(const QSpinBox*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QSpinBox_sharedPainter(const QSpinBox*, intptr_t);
void miqt_exec_callback_QSpinBox_inputMethodEvent(QSpinBox*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QSpinBox_focusNextPrevChild(QSpinBox*, intptr_t, bool);
bool miqt_exec_callback_QSpinBox_eventFilter(QSpinBox*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSpinBox_childEvent(QSpinBox*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSpinBox_customEvent(QSpinBox*, intptr_t, QEvent*);
void miqt_exec_callback_QSpinBox_connectNotify(QSpinBox*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSpinBox_disconnectNotify(QSpinBox*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDoubleSpinBox_valueChanged(intptr_t, double);
void miqt_exec_callback_QDoubleSpinBox_textChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QDoubleSpinBox_valueChangedWithQString(intptr_t, struct miqt_string);
int miqt_exec_callback_QDoubleSpinBox_validate(const QDoubleSpinBox*, intptr_t, struct miqt_string, int*);
double miqt_exec_callback_QDoubleSpinBox_valueFromText(const QDoubleSpinBox*, intptr_t, struct miqt_string);
struct miqt_string miqt_exec_callback_QDoubleSpinBox_textFromValue(const QDoubleSpinBox*, intptr_t, double);
void miqt_exec_callback_QDoubleSpinBox_fixup(const QDoubleSpinBox*, intptr_t, struct miqt_string);
QSize* miqt_exec_callback_QDoubleSpinBox_sizeHint(const QDoubleSpinBox*, intptr_t);
QSize* miqt_exec_callback_QDoubleSpinBox_minimumSizeHint(const QDoubleSpinBox*, intptr_t);
bool miqt_exec_callback_QDoubleSpinBox_event(QDoubleSpinBox*, intptr_t, QEvent*);
QVariant* miqt_exec_callback_QDoubleSpinBox_inputMethodQuery(const QDoubleSpinBox*, intptr_t, int);
void miqt_exec_callback_QDoubleSpinBox_stepBy(QDoubleSpinBox*, intptr_t, int);
void miqt_exec_callback_QDoubleSpinBox_clear(QDoubleSpinBox*, intptr_t);
void miqt_exec_callback_QDoubleSpinBox_resizeEvent(QDoubleSpinBox*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QDoubleSpinBox_keyPressEvent(QDoubleSpinBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDoubleSpinBox_keyReleaseEvent(QDoubleSpinBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDoubleSpinBox_wheelEvent(QDoubleSpinBox*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDoubleSpinBox_focusInEvent(QDoubleSpinBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDoubleSpinBox_focusOutEvent(QDoubleSpinBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDoubleSpinBox_contextMenuEvent(QDoubleSpinBox*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QDoubleSpinBox_changeEvent(QDoubleSpinBox*, intptr_t, QEvent*);
void miqt_exec_callback_QDoubleSpinBox_closeEvent(QDoubleSpinBox*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QDoubleSpinBox_hideEvent(QDoubleSpinBox*, intptr_t, QHideEvent*);
void miqt_exec_callback_QDoubleSpinBox_mousePressEvent(QDoubleSpinBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDoubleSpinBox_mouseReleaseEvent(QDoubleSpinBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDoubleSpinBox_mouseMoveEvent(QDoubleSpinBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDoubleSpinBox_timerEvent(QDoubleSpinBox*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDoubleSpinBox_paintEvent(QDoubleSpinBox*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QDoubleSpinBox_showEvent(QDoubleSpinBox*, intptr_t, QShowEvent*);
int miqt_exec_callback_QDoubleSpinBox_stepEnabled(const QDoubleSpinBox*, intptr_t);
int miqt_exec_callback_QDoubleSpinBox_devType(const QDoubleSpinBox*, intptr_t);
void miqt_exec_callback_QDoubleSpinBox_setVisible(QDoubleSpinBox*, intptr_t, bool);
int miqt_exec_callback_QDoubleSpinBox_heightForWidth(const QDoubleSpinBox*, intptr_t, int);
bool miqt_exec_callback_QDoubleSpinBox_hasHeightForWidth(const QDoubleSpinBox*, intptr_t);
QPaintEngine* miqt_exec_callback_QDoubleSpinBox_paintEngine(const QDoubleSpinBox*, intptr_t);
void miqt_exec_callback_QDoubleSpinBox_mouseDoubleClickEvent(QDoubleSpinBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDoubleSpinBox_enterEvent(QDoubleSpinBox*, intptr_t, QEvent*);
void miqt_exec_callback_QDoubleSpinBox_leaveEvent(QDoubleSpinBox*, intptr_t, QEvent*);
void miqt_exec_callback_QDoubleSpinBox_moveEvent(QDoubleSpinBox*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QDoubleSpinBox_tabletEvent(QDoubleSpinBox*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QDoubleSpinBox_actionEvent(QDoubleSpinBox*, intptr_t, QActionEvent*);
void miqt_exec_callback_QDoubleSpinBox_dragEnterEvent(QDoubleSpinBox*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QDoubleSpinBox_dragMoveEvent(QDoubleSpinBox*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QDoubleSpinBox_dragLeaveEvent(QDoubleSpinBox*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QDoubleSpinBox_dropEvent(QDoubleSpinBox*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QDoubleSpinBox_nativeEvent(QDoubleSpinBox*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QDoubleSpinBox_metric(const QDoubleSpinBox*, intptr_t, int);
void miqt_exec_callback_QDoubleSpinBox_initPainter(const QDoubleSpinBox*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QDoubleSpinBox_redirected(const QDoubleSpinBox*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QDoubleSpinBox_sharedPainter(const QDoubleSpinBox*, intptr_t);
void miqt_exec_callback_QDoubleSpinBox_inputMethodEvent(QDoubleSpinBox*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QDoubleSpinBox_focusNextPrevChild(QDoubleSpinBox*, intptr_t, bool);
bool miqt_exec_callback_QDoubleSpinBox_eventFilter(QDoubleSpinBox*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDoubleSpinBox_childEvent(QDoubleSpinBox*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDoubleSpinBox_customEvent(QDoubleSpinBox*, intptr_t, QEvent*);
void miqt_exec_callback_QDoubleSpinBox_connectNotify(QDoubleSpinBox*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDoubleSpinBox_disconnectNotify(QDoubleSpinBox*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSpinBox final : public QSpinBox {
public:

	MiqtVirtualQSpinBox(QWidget* parent): QSpinBox(parent) {};
	MiqtVirtualQSpinBox(): QSpinBox() {};

	virtual ~MiqtVirtualQSpinBox() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSpinBox::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSpinBox_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QSpinBox::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (handle__validate == 0) {
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

		int callback_return_value = miqt_exec_callback_QSpinBox_validate(this, handle__validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_validate(struct miqt_string input, int* pos) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QValidator::State _ret = QSpinBox::validate(input_QString, static_cast<int&>(*pos));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__valueFromText = 0;

	// Subclass to allow providing a Go implementation
	virtual int valueFromText(const QString& text) const override {
		if (handle__valueFromText == 0) {
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

		int callback_return_value = miqt_exec_callback_QSpinBox_valueFromText(this, handle__valueFromText, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_valueFromText(struct miqt_string text) const {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		return QSpinBox::valueFromText(text_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__textFromValue = 0;

	// Subclass to allow providing a Go implementation
	virtual QString textFromValue(int val) const override {
		if (handle__textFromValue == 0) {
			return QSpinBox::textFromValue(val);
		}
		
		int sigval1 = val;

		struct miqt_string callback_return_value = miqt_exec_callback_QSpinBox_textFromValue(this, handle__textFromValue, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_textFromValue(int val) const {

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
	intptr_t handle__fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& str) const override {
		if (handle__fixup == 0) {
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

		miqt_exec_callback_QSpinBox_fixup(this, handle__fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_fixup(struct miqt_string str) const {
		QString str_QString = QString::fromUtf8(str.data, str.len);

		QSpinBox::fixup(str_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QSpinBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSpinBox_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QSpinBox::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QSpinBox::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSpinBox_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QSpinBox::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QSpinBox::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QSpinBox_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QSpinBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__stepBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void stepBy(int steps) override {
		if (handle__stepBy == 0) {
			QSpinBox::stepBy(steps);
			return;
		}
		
		int sigval1 = steps;

		miqt_exec_callback_QSpinBox_stepBy(this, handle__stepBy, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_stepBy(int steps) {

		QSpinBox::stepBy(static_cast<int>(steps));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__clear == 0) {
			QSpinBox::clear();
			return;
		}
		

		miqt_exec_callback_QSpinBox_clear(this, handle__clear);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_clear() {

		QSpinBox::clear();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QSpinBox::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QSpinBox::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QSpinBox::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QSpinBox::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QSpinBox::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QSpinBox::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QSpinBox::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QSpinBox::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QSpinBox::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QSpinBox::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QSpinBox::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QSpinBox::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QSpinBox::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QSpinBox::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__changeEvent == 0) {
			QSpinBox::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* event) {

		QSpinBox::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QSpinBox::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QSpinBox::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QSpinBox::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QSpinBox::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QSpinBox::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QSpinBox::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QSpinBox::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QSpinBox::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QSpinBox::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QSpinBox::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSpinBox::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QSpinBox::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QSpinBox::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QSpinBox::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QSpinBox::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QSpinBox::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__stepEnabled = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
		if (handle__stepEnabled == 0) {
			return QSpinBox::stepEnabled();
		}
		

		int callback_return_value = miqt_exec_callback_QSpinBox_stepEnabled(this, handle__stepEnabled);

		return static_cast<QAbstractSpinBox::StepEnabled>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_stepEnabled() const {

		QAbstractSpinBox::StepEnabled _ret = QSpinBox::stepEnabled();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QSpinBox::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QSpinBox_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QSpinBox::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QSpinBox::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QSpinBox_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QSpinBox::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QSpinBox::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QSpinBox_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QSpinBox::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QSpinBox::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QSpinBox_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QSpinBox::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QSpinBox::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QSpinBox_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QSpinBox::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QSpinBox::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QSpinBox::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QSpinBox::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QSpinBox::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QSpinBox::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QSpinBox::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QSpinBox::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QSpinBox::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QSpinBox::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QSpinBox::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QSpinBox::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QSpinBox::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QSpinBox::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QSpinBox::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QSpinBox::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QSpinBox::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QSpinBox::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QSpinBox::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QSpinBox::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QSpinBox::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
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

		bool callback_return_value = miqt_exec_callback_QSpinBox_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QSpinBox::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QSpinBox::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QSpinBox_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QSpinBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QSpinBox::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QSpinBox_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QSpinBox::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QSpinBox::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QSpinBox_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QSpinBox::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QSpinBox::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QSpinBox_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QSpinBox::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QSpinBox::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QSpinBox_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QSpinBox::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QSpinBox::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QSpinBox_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QSpinBox::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSpinBox::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSpinBox_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QSpinBox::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSpinBox::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QSpinBox::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSpinBox::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSpinBox_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QSpinBox::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSpinBox::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSpinBox_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QSpinBox::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSpinBox::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSpinBox_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QSpinBox::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QSpinBox_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionSpinBox* option);
	friend QLineEdit* QSpinBox_protectedbase_lineEdit(bool* _dynamic_cast_ok, const void* self);
	friend void QSpinBox_protectedbase_setLineEdit(bool* _dynamic_cast_ok, void* self, QLineEdit* edit);
	friend void QSpinBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QSpinBox_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QSpinBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QSpinBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QSpinBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QSpinBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSpinBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSpinBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSpinBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QSpinBox_metaObject(const QSpinBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSpinBox_metacast(QSpinBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSpinBox_tr(const char* s) {
	QString _ret = QSpinBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSpinBox_trUtf8(const char* s) {
	QString _ret = QSpinBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QSpinBox_value(const QSpinBox* self) {
	return self->value();
}

struct miqt_string QSpinBox_prefix(const QSpinBox* self) {
	QString _ret = self->prefix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSpinBox_setPrefix(QSpinBox* self, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	self->setPrefix(prefix_QString);
}

struct miqt_string QSpinBox_suffix(const QSpinBox* self) {
	QString _ret = self->suffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSpinBox_setSuffix(QSpinBox* self, struct miqt_string suffix) {
	QString suffix_QString = QString::fromUtf8(suffix.data, suffix.len);
	self->setSuffix(suffix_QString);
}

struct miqt_string QSpinBox_cleanText(const QSpinBox* self) {
	QString _ret = self->cleanText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QSpinBox_singleStep(const QSpinBox* self) {
	return self->singleStep();
}

void QSpinBox_setSingleStep(QSpinBox* self, int val) {
	self->setSingleStep(static_cast<int>(val));
}

int QSpinBox_minimum(const QSpinBox* self) {
	return self->minimum();
}

void QSpinBox_setMinimum(QSpinBox* self, int min) {
	self->setMinimum(static_cast<int>(min));
}

int QSpinBox_maximum(const QSpinBox* self) {
	return self->maximum();
}

void QSpinBox_setMaximum(QSpinBox* self, int max) {
	self->setMaximum(static_cast<int>(max));
}

void QSpinBox_setRange(QSpinBox* self, int min, int max) {
	self->setRange(static_cast<int>(min), static_cast<int>(max));
}

int QSpinBox_stepType(const QSpinBox* self) {
	QAbstractSpinBox::StepType _ret = self->stepType();
	return static_cast<int>(_ret);
}

void QSpinBox_setStepType(QSpinBox* self, int stepType) {
	self->setStepType(static_cast<QAbstractSpinBox::StepType>(stepType));
}

int QSpinBox_displayIntegerBase(const QSpinBox* self) {
	return self->displayIntegerBase();
}

void QSpinBox_setDisplayIntegerBase(QSpinBox* self, int base) {
	self->setDisplayIntegerBase(static_cast<int>(base));
}

void QSpinBox_setValue(QSpinBox* self, int val) {
	self->setValue(static_cast<int>(val));
}

void QSpinBox_valueChanged(QSpinBox* self, int param1) {
	self->valueChanged(static_cast<int>(param1));
}

void QSpinBox_connect_valueChanged(QSpinBox* self, intptr_t slot) {
	MiqtVirtualQSpinBox::connect(self, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QSpinBox_valueChanged(slot, sigval1);
	});
}

void QSpinBox_textChanged(QSpinBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->textChanged(param1_QString);
}

void QSpinBox_connect_textChanged(QSpinBox* self, intptr_t slot) {
	MiqtVirtualQSpinBox::connect(self, static_cast<void (QSpinBox::*)(const QString&)>(&QSpinBox::textChanged), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QSpinBox_textChanged(slot, sigval1);
	});
}

void QSpinBox_valueChangedWithQString(QSpinBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->valueChanged(param1_QString);
}

void QSpinBox_connect_valueChangedWithQString(QSpinBox* self, intptr_t slot) {
	MiqtVirtualQSpinBox::connect(self, static_cast<void (QSpinBox::*)(const QString&)>(&QSpinBox::valueChanged), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QSpinBox_valueChangedWithQString(slot, sigval1);
	});
}

struct miqt_string QSpinBox_tr2(const char* s, const char* c) {
	QString _ret = QSpinBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSpinBox_tr3(const char* s, const char* c, int n) {
	QString _ret = QSpinBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSpinBox_trUtf82(const char* s, const char* c) {
	QString _ret = QSpinBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSpinBox_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSpinBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSpinBox_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QSpinBox_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSpinBox*)(self) )->virtualbase_event(event);
}

bool QSpinBox_override_virtual_validate(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__validate = slot;
	return true;
}

int QSpinBox_virtualbase_validate(const void* self, struct miqt_string input, int* pos) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_validate(input, pos);
}

bool QSpinBox_override_virtual_valueFromText(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__valueFromText = slot;
	return true;
}

int QSpinBox_virtualbase_valueFromText(const void* self, struct miqt_string text) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_valueFromText(text);
}

bool QSpinBox_override_virtual_textFromValue(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__textFromValue = slot;
	return true;
}

struct miqt_string QSpinBox_virtualbase_textFromValue(const void* self, int val) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_textFromValue(val);
}

bool QSpinBox_override_virtual_fixup(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fixup = slot;
	return true;
}

void QSpinBox_virtualbase_fixup(const void* self, struct miqt_string str) {
	( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_fixup(str);
}

bool QSpinBox_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QSpinBox_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_sizeHint();
}

bool QSpinBox_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QSpinBox_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_minimumSizeHint();
}

bool QSpinBox_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QSpinBox_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QSpinBox_override_virtual_stepBy(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__stepBy = slot;
	return true;
}

void QSpinBox_virtualbase_stepBy(void* self, int steps) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_stepBy(steps);
}

bool QSpinBox_override_virtual_clear(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clear = slot;
	return true;
}

void QSpinBox_virtualbase_clear(void* self) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_clear();
}

bool QSpinBox_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QSpinBox_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_resizeEvent(event);
}

bool QSpinBox_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QSpinBox_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_keyPressEvent(event);
}

bool QSpinBox_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QSpinBox_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QSpinBox_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QSpinBox_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_wheelEvent(event);
}

bool QSpinBox_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QSpinBox_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_focusInEvent(event);
}

bool QSpinBox_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QSpinBox_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_focusOutEvent(event);
}

bool QSpinBox_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QSpinBox_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QSpinBox_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QSpinBox_virtualbase_changeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_changeEvent(event);
}

bool QSpinBox_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QSpinBox_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_closeEvent(event);
}

bool QSpinBox_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QSpinBox_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_hideEvent(event);
}

bool QSpinBox_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QSpinBox_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_mousePressEvent(event);
}

bool QSpinBox_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QSpinBox_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QSpinBox_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QSpinBox_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QSpinBox_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QSpinBox_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_timerEvent(event);
}

bool QSpinBox_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QSpinBox_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_paintEvent(event);
}

bool QSpinBox_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QSpinBox_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_showEvent(event);
}

bool QSpinBox_override_virtual_stepEnabled(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__stepEnabled = slot;
	return true;
}

int QSpinBox_virtualbase_stepEnabled(const void* self) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_stepEnabled();
}

bool QSpinBox_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QSpinBox_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_devType();
}

bool QSpinBox_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QSpinBox_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_setVisible(visible);
}

bool QSpinBox_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QSpinBox_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_heightForWidth(param1);
}

bool QSpinBox_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QSpinBox_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_hasHeightForWidth();
}

bool QSpinBox_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QSpinBox_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_paintEngine();
}

bool QSpinBox_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QSpinBox_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QSpinBox_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QSpinBox_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_enterEvent(event);
}

bool QSpinBox_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QSpinBox_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_leaveEvent(event);
}

bool QSpinBox_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QSpinBox_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_moveEvent(event);
}

bool QSpinBox_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QSpinBox_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_tabletEvent(event);
}

bool QSpinBox_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QSpinBox_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_actionEvent(event);
}

bool QSpinBox_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QSpinBox_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QSpinBox_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QSpinBox_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QSpinBox_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QSpinBox_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QSpinBox_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QSpinBox_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_dropEvent(event);
}

bool QSpinBox_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QSpinBox_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQSpinBox*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QSpinBox_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QSpinBox_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_metric(param1);
}

bool QSpinBox_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QSpinBox_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_initPainter(painter);
}

bool QSpinBox_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QSpinBox_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_redirected(offset);
}

bool QSpinBox_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QSpinBox_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQSpinBox*)(self) )->virtualbase_sharedPainter();
}

bool QSpinBox_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QSpinBox_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QSpinBox_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QSpinBox_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQSpinBox*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QSpinBox_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSpinBox_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSpinBox*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QSpinBox_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QSpinBox_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_childEvent(event);
}

bool QSpinBox_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QSpinBox_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_customEvent(event);
}

bool QSpinBox_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QSpinBox_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_connectNotify(signal);
}

bool QSpinBox_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSpinBox_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSpinBox*)(self) )->virtualbase_disconnectNotify(signal);
}

void QSpinBox_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionSpinBox* option) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

QLineEdit* QSpinBox_protectedbase_lineEdit(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->lineEdit();

}

void QSpinBox_protectedbase_setLineEdit(bool* _dynamic_cast_ok, void* self, QLineEdit* edit) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setLineEdit(edit);

}

void QSpinBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QSpinBox_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QSpinBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QSpinBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QSpinBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QSpinBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QSpinBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QSpinBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QSpinBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSpinBox* self_cast = dynamic_cast<MiqtVirtualQSpinBox*>( (QSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QSpinBox_delete(QSpinBox* self) {
	delete self;
}

class MiqtVirtualQDoubleSpinBox final : public QDoubleSpinBox {
public:

	MiqtVirtualQDoubleSpinBox(QWidget* parent): QDoubleSpinBox(parent) {};
	MiqtVirtualQDoubleSpinBox(): QDoubleSpinBox() {};

	virtual ~MiqtVirtualQDoubleSpinBox() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (handle__validate == 0) {
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

		int callback_return_value = miqt_exec_callback_QDoubleSpinBox_validate(this, handle__validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_validate(struct miqt_string input, int* pos) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QValidator::State _ret = QDoubleSpinBox::validate(input_QString, static_cast<int&>(*pos));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__valueFromText = 0;

	// Subclass to allow providing a Go implementation
	virtual double valueFromText(const QString& text) const override {
		if (handle__valueFromText == 0) {
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

		double callback_return_value = miqt_exec_callback_QDoubleSpinBox_valueFromText(this, handle__valueFromText, sigval1);

		return static_cast<double>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	double virtualbase_valueFromText(struct miqt_string text) const {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		return QDoubleSpinBox::valueFromText(text_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__textFromValue = 0;

	// Subclass to allow providing a Go implementation
	virtual QString textFromValue(double val) const override {
		if (handle__textFromValue == 0) {
			return QDoubleSpinBox::textFromValue(val);
		}
		
		double sigval1 = val;

		struct miqt_string callback_return_value = miqt_exec_callback_QDoubleSpinBox_textFromValue(this, handle__textFromValue, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_textFromValue(double val) const {

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
	intptr_t handle__fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& str) const override {
		if (handle__fixup == 0) {
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

		miqt_exec_callback_QDoubleSpinBox_fixup(this, handle__fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_fixup(struct miqt_string str) const {
		QString str_QString = QString::fromUtf8(str.data, str.len);

		QDoubleSpinBox::fixup(str_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QDoubleSpinBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDoubleSpinBox_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QDoubleSpinBox::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QDoubleSpinBox::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDoubleSpinBox_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QDoubleSpinBox::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDoubleSpinBox::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDoubleSpinBox_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QDoubleSpinBox::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QDoubleSpinBox::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QDoubleSpinBox_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QDoubleSpinBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__stepBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void stepBy(int steps) override {
		if (handle__stepBy == 0) {
			QDoubleSpinBox::stepBy(steps);
			return;
		}
		
		int sigval1 = steps;

		miqt_exec_callback_QDoubleSpinBox_stepBy(this, handle__stepBy, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_stepBy(int steps) {

		QDoubleSpinBox::stepBy(static_cast<int>(steps));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__clear == 0) {
			QDoubleSpinBox::clear();
			return;
		}
		

		miqt_exec_callback_QDoubleSpinBox_clear(this, handle__clear);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_clear() {

		QDoubleSpinBox::clear();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QDoubleSpinBox::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QDoubleSpinBox::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QDoubleSpinBox::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QDoubleSpinBox::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QDoubleSpinBox::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QDoubleSpinBox::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QDoubleSpinBox::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QDoubleSpinBox::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QDoubleSpinBox::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QDoubleSpinBox::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QDoubleSpinBox::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QDoubleSpinBox::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QDoubleSpinBox::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QDoubleSpinBox::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__changeEvent == 0) {
			QDoubleSpinBox::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* event) {

		QDoubleSpinBox::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QDoubleSpinBox::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QDoubleSpinBox::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QDoubleSpinBox::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QDoubleSpinBox::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QDoubleSpinBox::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QDoubleSpinBox::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QDoubleSpinBox::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QDoubleSpinBox::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QDoubleSpinBox::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QDoubleSpinBox::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDoubleSpinBox::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QDoubleSpinBox::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QDoubleSpinBox::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QDoubleSpinBox::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QDoubleSpinBox::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QDoubleSpinBox::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__stepEnabled = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
		if (handle__stepEnabled == 0) {
			return QDoubleSpinBox::stepEnabled();
		}
		

		int callback_return_value = miqt_exec_callback_QDoubleSpinBox_stepEnabled(this, handle__stepEnabled);

		return static_cast<QAbstractSpinBox::StepEnabled>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_stepEnabled() const {

		QAbstractSpinBox::StepEnabled _ret = QDoubleSpinBox::stepEnabled();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QDoubleSpinBox::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QDoubleSpinBox_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QDoubleSpinBox::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QDoubleSpinBox::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QDoubleSpinBox_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QDoubleSpinBox::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QDoubleSpinBox::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QDoubleSpinBox_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QDoubleSpinBox::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QDoubleSpinBox::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QDoubleSpinBox_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QDoubleSpinBox::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QDoubleSpinBox::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QDoubleSpinBox_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QDoubleSpinBox::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QDoubleSpinBox::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QDoubleSpinBox::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QDoubleSpinBox::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QDoubleSpinBox::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QDoubleSpinBox::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QDoubleSpinBox::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QDoubleSpinBox::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QDoubleSpinBox::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QDoubleSpinBox::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QDoubleSpinBox::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QDoubleSpinBox::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QDoubleSpinBox::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QDoubleSpinBox::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QDoubleSpinBox::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QDoubleSpinBox::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QDoubleSpinBox::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QDoubleSpinBox::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QDoubleSpinBox::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QDoubleSpinBox::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QDoubleSpinBox::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
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

		bool callback_return_value = miqt_exec_callback_QDoubleSpinBox_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QDoubleSpinBox::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QDoubleSpinBox::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QDoubleSpinBox_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QDoubleSpinBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QDoubleSpinBox::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QDoubleSpinBox_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QDoubleSpinBox::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QDoubleSpinBox::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QDoubleSpinBox_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QDoubleSpinBox::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QDoubleSpinBox::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QDoubleSpinBox_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QDoubleSpinBox::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QDoubleSpinBox::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QDoubleSpinBox_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QDoubleSpinBox::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QDoubleSpinBox::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QDoubleSpinBox_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QDoubleSpinBox::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDoubleSpinBox::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDoubleSpinBox_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QDoubleSpinBox::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDoubleSpinBox::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QDoubleSpinBox::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDoubleSpinBox::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDoubleSpinBox_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QDoubleSpinBox::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDoubleSpinBox::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDoubleSpinBox_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QDoubleSpinBox::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDoubleSpinBox::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDoubleSpinBox_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QDoubleSpinBox::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QDoubleSpinBox_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionSpinBox* option);
	friend QLineEdit* QDoubleSpinBox_protectedbase_lineEdit(bool* _dynamic_cast_ok, const void* self);
	friend void QDoubleSpinBox_protectedbase_setLineEdit(bool* _dynamic_cast_ok, void* self, QLineEdit* edit);
	friend void QDoubleSpinBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QDoubleSpinBox_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QDoubleSpinBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QDoubleSpinBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QDoubleSpinBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QDoubleSpinBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDoubleSpinBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDoubleSpinBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDoubleSpinBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QDoubleSpinBox_metaObject(const QDoubleSpinBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDoubleSpinBox_metacast(QDoubleSpinBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDoubleSpinBox_tr(const char* s) {
	QString _ret = QDoubleSpinBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDoubleSpinBox_trUtf8(const char* s) {
	QString _ret = QDoubleSpinBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QDoubleSpinBox_value(const QDoubleSpinBox* self) {
	return self->value();
}

struct miqt_string QDoubleSpinBox_prefix(const QDoubleSpinBox* self) {
	QString _ret = self->prefix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDoubleSpinBox_setPrefix(QDoubleSpinBox* self, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	self->setPrefix(prefix_QString);
}

struct miqt_string QDoubleSpinBox_suffix(const QDoubleSpinBox* self) {
	QString _ret = self->suffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDoubleSpinBox_setSuffix(QDoubleSpinBox* self, struct miqt_string suffix) {
	QString suffix_QString = QString::fromUtf8(suffix.data, suffix.len);
	self->setSuffix(suffix_QString);
}

struct miqt_string QDoubleSpinBox_cleanText(const QDoubleSpinBox* self) {
	QString _ret = self->cleanText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QDoubleSpinBox_singleStep(const QDoubleSpinBox* self) {
	return self->singleStep();
}

void QDoubleSpinBox_setSingleStep(QDoubleSpinBox* self, double val) {
	self->setSingleStep(static_cast<double>(val));
}

double QDoubleSpinBox_minimum(const QDoubleSpinBox* self) {
	return self->minimum();
}

void QDoubleSpinBox_setMinimum(QDoubleSpinBox* self, double min) {
	self->setMinimum(static_cast<double>(min));
}

double QDoubleSpinBox_maximum(const QDoubleSpinBox* self) {
	return self->maximum();
}

void QDoubleSpinBox_setMaximum(QDoubleSpinBox* self, double max) {
	self->setMaximum(static_cast<double>(max));
}

void QDoubleSpinBox_setRange(QDoubleSpinBox* self, double min, double max) {
	self->setRange(static_cast<double>(min), static_cast<double>(max));
}

int QDoubleSpinBox_stepType(const QDoubleSpinBox* self) {
	QAbstractSpinBox::StepType _ret = self->stepType();
	return static_cast<int>(_ret);
}

void QDoubleSpinBox_setStepType(QDoubleSpinBox* self, int stepType) {
	self->setStepType(static_cast<QAbstractSpinBox::StepType>(stepType));
}

int QDoubleSpinBox_decimals(const QDoubleSpinBox* self) {
	return self->decimals();
}

void QDoubleSpinBox_setDecimals(QDoubleSpinBox* self, int prec) {
	self->setDecimals(static_cast<int>(prec));
}

int QDoubleSpinBox_validate(const QDoubleSpinBox* self, struct miqt_string input, int* pos) {
	QString input_QString = QString::fromUtf8(input.data, input.len);
	QValidator::State _ret = self->validate(input_QString, static_cast<int&>(*pos));
	return static_cast<int>(_ret);
}

double QDoubleSpinBox_valueFromText(const QDoubleSpinBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->valueFromText(text_QString);
}

struct miqt_string QDoubleSpinBox_textFromValue(const QDoubleSpinBox* self, double val) {
	QString _ret = self->textFromValue(static_cast<double>(val));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDoubleSpinBox_fixup(const QDoubleSpinBox* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	self->fixup(str_QString);
}

void QDoubleSpinBox_setValue(QDoubleSpinBox* self, double val) {
	self->setValue(static_cast<double>(val));
}

void QDoubleSpinBox_valueChanged(QDoubleSpinBox* self, double param1) {
	self->valueChanged(static_cast<double>(param1));
}

void QDoubleSpinBox_connect_valueChanged(QDoubleSpinBox* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox::connect(self, static_cast<void (QDoubleSpinBox::*)(double)>(&QDoubleSpinBox::valueChanged), self, [=](double param1) {
		double sigval1 = param1;
		miqt_exec_callback_QDoubleSpinBox_valueChanged(slot, sigval1);
	});
}

void QDoubleSpinBox_textChanged(QDoubleSpinBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->textChanged(param1_QString);
}

void QDoubleSpinBox_connect_textChanged(QDoubleSpinBox* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox::connect(self, static_cast<void (QDoubleSpinBox::*)(const QString&)>(&QDoubleSpinBox::textChanged), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QDoubleSpinBox_textChanged(slot, sigval1);
	});
}

void QDoubleSpinBox_valueChangedWithQString(QDoubleSpinBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->valueChanged(param1_QString);
}

void QDoubleSpinBox_connect_valueChangedWithQString(QDoubleSpinBox* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox::connect(self, static_cast<void (QDoubleSpinBox::*)(const QString&)>(&QDoubleSpinBox::valueChanged), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QDoubleSpinBox_valueChangedWithQString(slot, sigval1);
	});
}

struct miqt_string QDoubleSpinBox_tr2(const char* s, const char* c) {
	QString _ret = QDoubleSpinBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDoubleSpinBox_tr3(const char* s, const char* c, int n) {
	QString _ret = QDoubleSpinBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDoubleSpinBox_trUtf82(const char* s, const char* c) {
	QString _ret = QDoubleSpinBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDoubleSpinBox_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QDoubleSpinBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDoubleSpinBox_override_virtual_validate(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__validate = slot;
	return true;
}

int QDoubleSpinBox_virtualbase_validate(const void* self, struct miqt_string input, int* pos) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_validate(input, pos);
}

bool QDoubleSpinBox_override_virtual_valueFromText(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__valueFromText = slot;
	return true;
}

double QDoubleSpinBox_virtualbase_valueFromText(const void* self, struct miqt_string text) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_valueFromText(text);
}

bool QDoubleSpinBox_override_virtual_textFromValue(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__textFromValue = slot;
	return true;
}

struct miqt_string QDoubleSpinBox_virtualbase_textFromValue(const void* self, double val) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_textFromValue(val);
}

bool QDoubleSpinBox_override_virtual_fixup(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fixup = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_fixup(const void* self, struct miqt_string str) {
	( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_fixup(str);
}

bool QDoubleSpinBox_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QDoubleSpinBox_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_sizeHint();
}

bool QDoubleSpinBox_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QDoubleSpinBox_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_minimumSizeHint();
}

bool QDoubleSpinBox_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QDoubleSpinBox_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_event(event);
}

bool QDoubleSpinBox_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QDoubleSpinBox_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QDoubleSpinBox_override_virtual_stepBy(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__stepBy = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_stepBy(void* self, int steps) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_stepBy(steps);
}

bool QDoubleSpinBox_override_virtual_clear(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clear = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_clear(void* self) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_clear();
}

bool QDoubleSpinBox_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_resizeEvent(event);
}

bool QDoubleSpinBox_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_keyPressEvent(event);
}

bool QDoubleSpinBox_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QDoubleSpinBox_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_wheelEvent(event);
}

bool QDoubleSpinBox_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_focusInEvent(event);
}

bool QDoubleSpinBox_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_focusOutEvent(event);
}

bool QDoubleSpinBox_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QDoubleSpinBox_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_changeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_changeEvent(event);
}

bool QDoubleSpinBox_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_closeEvent(event);
}

bool QDoubleSpinBox_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_hideEvent(event);
}

bool QDoubleSpinBox_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_mousePressEvent(event);
}

bool QDoubleSpinBox_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QDoubleSpinBox_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QDoubleSpinBox_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_timerEvent(event);
}

bool QDoubleSpinBox_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_paintEvent(event);
}

bool QDoubleSpinBox_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_showEvent(event);
}

bool QDoubleSpinBox_override_virtual_stepEnabled(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__stepEnabled = slot;
	return true;
}

int QDoubleSpinBox_virtualbase_stepEnabled(const void* self) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_stepEnabled();
}

bool QDoubleSpinBox_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QDoubleSpinBox_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_devType();
}

bool QDoubleSpinBox_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_setVisible(visible);
}

bool QDoubleSpinBox_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QDoubleSpinBox_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_heightForWidth(param1);
}

bool QDoubleSpinBox_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QDoubleSpinBox_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_hasHeightForWidth();
}

bool QDoubleSpinBox_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QDoubleSpinBox_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_paintEngine();
}

bool QDoubleSpinBox_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QDoubleSpinBox_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_enterEvent(event);
}

bool QDoubleSpinBox_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_leaveEvent(event);
}

bool QDoubleSpinBox_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_moveEvent(event);
}

bool QDoubleSpinBox_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_tabletEvent(event);
}

bool QDoubleSpinBox_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_actionEvent(event);
}

bool QDoubleSpinBox_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QDoubleSpinBox_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QDoubleSpinBox_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QDoubleSpinBox_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_dropEvent(event);
}

bool QDoubleSpinBox_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QDoubleSpinBox_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QDoubleSpinBox_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QDoubleSpinBox_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_metric(param1);
}

bool QDoubleSpinBox_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_initPainter(painter);
}

bool QDoubleSpinBox_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QDoubleSpinBox_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_redirected(offset);
}

bool QDoubleSpinBox_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QDoubleSpinBox_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_sharedPainter();
}

bool QDoubleSpinBox_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QDoubleSpinBox_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QDoubleSpinBox_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QDoubleSpinBox_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDoubleSpinBox_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QDoubleSpinBox_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_childEvent(event);
}

bool QDoubleSpinBox_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_customEvent(event);
}

bool QDoubleSpinBox_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_connectNotify(signal);
}

bool QDoubleSpinBox_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDoubleSpinBox_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDoubleSpinBox*)(self) )->virtualbase_disconnectNotify(signal);
}

void QDoubleSpinBox_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionSpinBox* option) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

QLineEdit* QDoubleSpinBox_protectedbase_lineEdit(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->lineEdit();

}

void QDoubleSpinBox_protectedbase_setLineEdit(bool* _dynamic_cast_ok, void* self, QLineEdit* edit) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setLineEdit(edit);

}

void QDoubleSpinBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QDoubleSpinBox_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QDoubleSpinBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QDoubleSpinBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QDoubleSpinBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QDoubleSpinBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QDoubleSpinBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QDoubleSpinBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QDoubleSpinBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDoubleSpinBox* self_cast = dynamic_cast<MiqtVirtualQDoubleSpinBox*>( (QDoubleSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QDoubleSpinBox_delete(QDoubleSpinBox* self) {
	delete self;
}

