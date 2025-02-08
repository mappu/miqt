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
#include <QEnterEvent>
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

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractSpinBox_editingFinished(intptr_t);
QSize* miqt_exec_callback_QAbstractSpinBox_sizeHint(const QAbstractSpinBox*, intptr_t);
QSize* miqt_exec_callback_QAbstractSpinBox_minimumSizeHint(const QAbstractSpinBox*, intptr_t);
bool miqt_exec_callback_QAbstractSpinBox_event(QAbstractSpinBox*, intptr_t, QEvent*);
QVariant* miqt_exec_callback_QAbstractSpinBox_inputMethodQuery(const QAbstractSpinBox*, intptr_t, int);
int miqt_exec_callback_QAbstractSpinBox_validate(const QAbstractSpinBox*, intptr_t, struct miqt_string, int*);
void miqt_exec_callback_QAbstractSpinBox_fixup(const QAbstractSpinBox*, intptr_t, struct miqt_string);
void miqt_exec_callback_QAbstractSpinBox_stepBy(QAbstractSpinBox*, intptr_t, int);
void miqt_exec_callback_QAbstractSpinBox_clear(QAbstractSpinBox*, intptr_t);
void miqt_exec_callback_QAbstractSpinBox_resizeEvent(QAbstractSpinBox*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QAbstractSpinBox_keyPressEvent(QAbstractSpinBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractSpinBox_keyReleaseEvent(QAbstractSpinBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractSpinBox_wheelEvent(QAbstractSpinBox*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QAbstractSpinBox_focusInEvent(QAbstractSpinBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractSpinBox_focusOutEvent(QAbstractSpinBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractSpinBox_contextMenuEvent(QAbstractSpinBox*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QAbstractSpinBox_changeEvent(QAbstractSpinBox*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractSpinBox_closeEvent(QAbstractSpinBox*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QAbstractSpinBox_hideEvent(QAbstractSpinBox*, intptr_t, QHideEvent*);
void miqt_exec_callback_QAbstractSpinBox_mousePressEvent(QAbstractSpinBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractSpinBox_mouseReleaseEvent(QAbstractSpinBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractSpinBox_mouseMoveEvent(QAbstractSpinBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractSpinBox_timerEvent(QAbstractSpinBox*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractSpinBox_paintEvent(QAbstractSpinBox*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QAbstractSpinBox_showEvent(QAbstractSpinBox*, intptr_t, QShowEvent*);
void miqt_exec_callback_QAbstractSpinBox_initStyleOption(const QAbstractSpinBox*, intptr_t, QStyleOptionSpinBox*);
int miqt_exec_callback_QAbstractSpinBox_stepEnabled(const QAbstractSpinBox*, intptr_t);
int miqt_exec_callback_QAbstractSpinBox_devType(const QAbstractSpinBox*, intptr_t);
void miqt_exec_callback_QAbstractSpinBox_setVisible(QAbstractSpinBox*, intptr_t, bool);
int miqt_exec_callback_QAbstractSpinBox_heightForWidth(const QAbstractSpinBox*, intptr_t, int);
bool miqt_exec_callback_QAbstractSpinBox_hasHeightForWidth(const QAbstractSpinBox*, intptr_t);
QPaintEngine* miqt_exec_callback_QAbstractSpinBox_paintEngine(const QAbstractSpinBox*, intptr_t);
void miqt_exec_callback_QAbstractSpinBox_mouseDoubleClickEvent(QAbstractSpinBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractSpinBox_enterEvent(QAbstractSpinBox*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QAbstractSpinBox_leaveEvent(QAbstractSpinBox*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractSpinBox_moveEvent(QAbstractSpinBox*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QAbstractSpinBox_tabletEvent(QAbstractSpinBox*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QAbstractSpinBox_actionEvent(QAbstractSpinBox*, intptr_t, QActionEvent*);
void miqt_exec_callback_QAbstractSpinBox_dragEnterEvent(QAbstractSpinBox*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QAbstractSpinBox_dragMoveEvent(QAbstractSpinBox*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QAbstractSpinBox_dragLeaveEvent(QAbstractSpinBox*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QAbstractSpinBox_dropEvent(QAbstractSpinBox*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QAbstractSpinBox_nativeEvent(QAbstractSpinBox*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QAbstractSpinBox_metric(const QAbstractSpinBox*, intptr_t, int);
void miqt_exec_callback_QAbstractSpinBox_initPainter(const QAbstractSpinBox*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QAbstractSpinBox_redirected(const QAbstractSpinBox*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QAbstractSpinBox_sharedPainter(const QAbstractSpinBox*, intptr_t);
void miqt_exec_callback_QAbstractSpinBox_inputMethodEvent(QAbstractSpinBox*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QAbstractSpinBox_focusNextPrevChild(QAbstractSpinBox*, intptr_t, bool);
bool miqt_exec_callback_QAbstractSpinBox_eventFilter(QAbstractSpinBox*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractSpinBox_childEvent(QAbstractSpinBox*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractSpinBox_customEvent(QAbstractSpinBox*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractSpinBox_connectNotify(QAbstractSpinBox*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractSpinBox_disconnectNotify(QAbstractSpinBox*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractSpinBox final : public QAbstractSpinBox {
public:

	MiqtVirtualQAbstractSpinBox(QWidget* parent): QAbstractSpinBox(parent) {};
	MiqtVirtualQAbstractSpinBox(): QAbstractSpinBox() {};

	virtual ~MiqtVirtualQAbstractSpinBox() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QAbstractSpinBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractSpinBox_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QAbstractSpinBox::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QAbstractSpinBox::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractSpinBox_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QAbstractSpinBox::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAbstractSpinBox::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractSpinBox_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAbstractSpinBox::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QAbstractSpinBox::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QAbstractSpinBox_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QAbstractSpinBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (handle__validate == 0) {
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

		int callback_return_value = miqt_exec_callback_QAbstractSpinBox_validate(this, handle__validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_validate(struct miqt_string input, int* pos) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QValidator::State _ret = QAbstractSpinBox::validate(input_QString, static_cast<int&>(*pos));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& input) const override {
		if (handle__fixup == 0) {
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

		miqt_exec_callback_QAbstractSpinBox_fixup(this, handle__fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_fixup(struct miqt_string input) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QAbstractSpinBox::fixup(input_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__stepBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void stepBy(int steps) override {
		if (handle__stepBy == 0) {
			QAbstractSpinBox::stepBy(steps);
			return;
		}
		
		int sigval1 = steps;

		miqt_exec_callback_QAbstractSpinBox_stepBy(this, handle__stepBy, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_stepBy(int steps) {

		QAbstractSpinBox::stepBy(static_cast<int>(steps));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__clear == 0) {
			QAbstractSpinBox::clear();
			return;
		}
		

		miqt_exec_callback_QAbstractSpinBox_clear(this, handle__clear);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_clear() {

		QAbstractSpinBox::clear();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QAbstractSpinBox::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QAbstractSpinBox::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QAbstractSpinBox::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QAbstractSpinBox::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QAbstractSpinBox::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QAbstractSpinBox::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QAbstractSpinBox::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QAbstractSpinBox::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QAbstractSpinBox::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QAbstractSpinBox::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QAbstractSpinBox::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QAbstractSpinBox::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QAbstractSpinBox::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QAbstractSpinBox::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__changeEvent == 0) {
			QAbstractSpinBox::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* event) {

		QAbstractSpinBox::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QAbstractSpinBox::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QAbstractSpinBox::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QAbstractSpinBox::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QAbstractSpinBox::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QAbstractSpinBox::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QAbstractSpinBox::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QAbstractSpinBox::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QAbstractSpinBox::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QAbstractSpinBox::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QAbstractSpinBox::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAbstractSpinBox::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAbstractSpinBox::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QAbstractSpinBox::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QAbstractSpinBox::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QAbstractSpinBox::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QAbstractSpinBox::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
		if (handle__initStyleOption == 0) {
			QAbstractSpinBox::initStyleOption(option);
			return;
		}
		
		QStyleOptionSpinBox* sigval1 = option;

		miqt_exec_callback_QAbstractSpinBox_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initStyleOption(QStyleOptionSpinBox* option) const {

		QAbstractSpinBox::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__stepEnabled = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
		if (handle__stepEnabled == 0) {
			return QAbstractSpinBox::stepEnabled();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractSpinBox_stepEnabled(this, handle__stepEnabled);

		return static_cast<QAbstractSpinBox::StepEnabled>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_stepEnabled() const {

		QAbstractSpinBox::StepEnabled _ret = QAbstractSpinBox::stepEnabled();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QAbstractSpinBox::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractSpinBox_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QAbstractSpinBox::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QAbstractSpinBox::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QAbstractSpinBox_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QAbstractSpinBox::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QAbstractSpinBox::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QAbstractSpinBox_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QAbstractSpinBox::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QAbstractSpinBox::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractSpinBox_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QAbstractSpinBox::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QAbstractSpinBox::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QAbstractSpinBox_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QAbstractSpinBox::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QAbstractSpinBox::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QAbstractSpinBox::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QAbstractSpinBox::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QAbstractSpinBox::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QAbstractSpinBox::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QAbstractSpinBox::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QAbstractSpinBox::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QAbstractSpinBox::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QAbstractSpinBox::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QAbstractSpinBox::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QAbstractSpinBox::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QAbstractSpinBox::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QAbstractSpinBox::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QAbstractSpinBox::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QAbstractSpinBox::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QAbstractSpinBox::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QAbstractSpinBox::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QAbstractSpinBox::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QAbstractSpinBox::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QAbstractSpinBox::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
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

		bool callback_return_value = miqt_exec_callback_QAbstractSpinBox_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QAbstractSpinBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QAbstractSpinBox::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QAbstractSpinBox_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QAbstractSpinBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QAbstractSpinBox::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QAbstractSpinBox_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QAbstractSpinBox::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QAbstractSpinBox::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QAbstractSpinBox_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QAbstractSpinBox::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QAbstractSpinBox::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QAbstractSpinBox_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QAbstractSpinBox::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QAbstractSpinBox::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractSpinBox_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QAbstractSpinBox::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QAbstractSpinBox::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QAbstractSpinBox_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QAbstractSpinBox::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAbstractSpinBox::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractSpinBox_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAbstractSpinBox::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAbstractSpinBox::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAbstractSpinBox::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAbstractSpinBox::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSpinBox_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAbstractSpinBox::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAbstractSpinBox::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractSpinBox_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAbstractSpinBox::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAbstractSpinBox::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractSpinBox_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAbstractSpinBox::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QLineEdit* QAbstractSpinBox_protectedbase_lineEdit(bool* _dynamic_cast_ok, const void* self);
	friend void QAbstractSpinBox_protectedbase_setLineEdit(bool* _dynamic_cast_ok, void* self, QLineEdit* edit);
	friend void QAbstractSpinBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractSpinBox_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractSpinBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractSpinBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractSpinBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QAbstractSpinBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractSpinBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractSpinBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractSpinBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QAbstractSpinBox_metaObject(const QAbstractSpinBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractSpinBox_metacast(QAbstractSpinBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractSpinBox_tr(const char* s) {
	QString _ret = QAbstractSpinBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAbstractSpinBox_buttonSymbols(const QAbstractSpinBox* self) {
	QAbstractSpinBox::ButtonSymbols _ret = self->buttonSymbols();
	return static_cast<int>(_ret);
}

void QAbstractSpinBox_setButtonSymbols(QAbstractSpinBox* self, int bs) {
	self->setButtonSymbols(static_cast<QAbstractSpinBox::ButtonSymbols>(bs));
}

void QAbstractSpinBox_setCorrectionMode(QAbstractSpinBox* self, int cm) {
	self->setCorrectionMode(static_cast<QAbstractSpinBox::CorrectionMode>(cm));
}

int QAbstractSpinBox_correctionMode(const QAbstractSpinBox* self) {
	QAbstractSpinBox::CorrectionMode _ret = self->correctionMode();
	return static_cast<int>(_ret);
}

bool QAbstractSpinBox_hasAcceptableInput(const QAbstractSpinBox* self) {
	return self->hasAcceptableInput();
}

struct miqt_string QAbstractSpinBox_text(const QAbstractSpinBox* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSpinBox_specialValueText(const QAbstractSpinBox* self) {
	QString _ret = self->specialValueText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractSpinBox_setSpecialValueText(QAbstractSpinBox* self, struct miqt_string txt) {
	QString txt_QString = QString::fromUtf8(txt.data, txt.len);
	self->setSpecialValueText(txt_QString);
}

bool QAbstractSpinBox_wrapping(const QAbstractSpinBox* self) {
	return self->wrapping();
}

void QAbstractSpinBox_setWrapping(QAbstractSpinBox* self, bool w) {
	self->setWrapping(w);
}

void QAbstractSpinBox_setReadOnly(QAbstractSpinBox* self, bool r) {
	self->setReadOnly(r);
}

bool QAbstractSpinBox_isReadOnly(const QAbstractSpinBox* self) {
	return self->isReadOnly();
}

void QAbstractSpinBox_setKeyboardTracking(QAbstractSpinBox* self, bool kt) {
	self->setKeyboardTracking(kt);
}

bool QAbstractSpinBox_keyboardTracking(const QAbstractSpinBox* self) {
	return self->keyboardTracking();
}

void QAbstractSpinBox_setAlignment(QAbstractSpinBox* self, int flag) {
	self->setAlignment(static_cast<Qt::Alignment>(flag));
}

int QAbstractSpinBox_alignment(const QAbstractSpinBox* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QAbstractSpinBox_setFrame(QAbstractSpinBox* self, bool frame) {
	self->setFrame(frame);
}

bool QAbstractSpinBox_hasFrame(const QAbstractSpinBox* self) {
	return self->hasFrame();
}

void QAbstractSpinBox_setAccelerated(QAbstractSpinBox* self, bool on) {
	self->setAccelerated(on);
}

bool QAbstractSpinBox_isAccelerated(const QAbstractSpinBox* self) {
	return self->isAccelerated();
}

void QAbstractSpinBox_setGroupSeparatorShown(QAbstractSpinBox* self, bool shown) {
	self->setGroupSeparatorShown(shown);
}

bool QAbstractSpinBox_isGroupSeparatorShown(const QAbstractSpinBox* self) {
	return self->isGroupSeparatorShown();
}

QSize* QAbstractSpinBox_sizeHint(const QAbstractSpinBox* self) {
	return new QSize(self->sizeHint());
}

QSize* QAbstractSpinBox_minimumSizeHint(const QAbstractSpinBox* self) {
	return new QSize(self->minimumSizeHint());
}

void QAbstractSpinBox_interpretText(QAbstractSpinBox* self) {
	self->interpretText();
}

bool QAbstractSpinBox_event(QAbstractSpinBox* self, QEvent* event) {
	return self->event(event);
}

QVariant* QAbstractSpinBox_inputMethodQuery(const QAbstractSpinBox* self, int param1) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

int QAbstractSpinBox_validate(const QAbstractSpinBox* self, struct miqt_string input, int* pos) {
	QString input_QString = QString::fromUtf8(input.data, input.len);
	QValidator::State _ret = self->validate(input_QString, static_cast<int&>(*pos));
	return static_cast<int>(_ret);
}

void QAbstractSpinBox_fixup(const QAbstractSpinBox* self, struct miqt_string input) {
	QString input_QString = QString::fromUtf8(input.data, input.len);
	self->fixup(input_QString);
}

void QAbstractSpinBox_stepBy(QAbstractSpinBox* self, int steps) {
	self->stepBy(static_cast<int>(steps));
}

void QAbstractSpinBox_stepUp(QAbstractSpinBox* self) {
	self->stepUp();
}

void QAbstractSpinBox_stepDown(QAbstractSpinBox* self) {
	self->stepDown();
}

void QAbstractSpinBox_selectAll(QAbstractSpinBox* self) {
	self->selectAll();
}

void QAbstractSpinBox_clear(QAbstractSpinBox* self) {
	self->clear();
}

void QAbstractSpinBox_editingFinished(QAbstractSpinBox* self) {
	self->editingFinished();
}

void QAbstractSpinBox_connect_editingFinished(QAbstractSpinBox* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox::connect(self, static_cast<void (QAbstractSpinBox::*)()>(&QAbstractSpinBox::editingFinished), self, [=]() {
		miqt_exec_callback_QAbstractSpinBox_editingFinished(slot);
	});
}

struct miqt_string QAbstractSpinBox_tr2(const char* s, const char* c) {
	QString _ret = QAbstractSpinBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSpinBox_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractSpinBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractSpinBox_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QAbstractSpinBox_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_sizeHint();
}

bool QAbstractSpinBox_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QAbstractSpinBox_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_minimumSizeHint();
}

bool QAbstractSpinBox_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAbstractSpinBox_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_event(event);
}

bool QAbstractSpinBox_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QAbstractSpinBox_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QAbstractSpinBox_override_virtual_validate(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__validate = slot;
	return true;
}

int QAbstractSpinBox_virtualbase_validate(const void* self, struct miqt_string input, int* pos) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_validate(input, pos);
}

bool QAbstractSpinBox_override_virtual_fixup(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fixup = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_fixup(const void* self, struct miqt_string input) {
	( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_fixup(input);
}

bool QAbstractSpinBox_override_virtual_stepBy(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__stepBy = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_stepBy(void* self, int steps) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_stepBy(steps);
}

bool QAbstractSpinBox_override_virtual_clear(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clear = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_clear(void* self) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_clear();
}

bool QAbstractSpinBox_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_resizeEvent(event);
}

bool QAbstractSpinBox_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_keyPressEvent(event);
}

bool QAbstractSpinBox_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QAbstractSpinBox_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_wheelEvent(event);
}

bool QAbstractSpinBox_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_focusInEvent(event);
}

bool QAbstractSpinBox_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_focusOutEvent(event);
}

bool QAbstractSpinBox_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QAbstractSpinBox_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_changeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_changeEvent(event);
}

bool QAbstractSpinBox_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_closeEvent(event);
}

bool QAbstractSpinBox_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_hideEvent(event);
}

bool QAbstractSpinBox_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_mousePressEvent(event);
}

bool QAbstractSpinBox_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QAbstractSpinBox_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QAbstractSpinBox_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_timerEvent(event);
}

bool QAbstractSpinBox_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_paintEvent(event);
}

bool QAbstractSpinBox_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_showEvent(event);
}

bool QAbstractSpinBox_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_initStyleOption(const void* self, QStyleOptionSpinBox* option) {
	( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_initStyleOption(option);
}

bool QAbstractSpinBox_override_virtual_stepEnabled(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__stepEnabled = slot;
	return true;
}

int QAbstractSpinBox_virtualbase_stepEnabled(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_stepEnabled();
}

bool QAbstractSpinBox_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QAbstractSpinBox_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_devType();
}

bool QAbstractSpinBox_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_setVisible(visible);
}

bool QAbstractSpinBox_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QAbstractSpinBox_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_heightForWidth(param1);
}

bool QAbstractSpinBox_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QAbstractSpinBox_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_hasHeightForWidth();
}

bool QAbstractSpinBox_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QAbstractSpinBox_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_paintEngine();
}

bool QAbstractSpinBox_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QAbstractSpinBox_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_enterEvent(event);
}

bool QAbstractSpinBox_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_leaveEvent(event);
}

bool QAbstractSpinBox_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_moveEvent(event);
}

bool QAbstractSpinBox_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_tabletEvent(event);
}

bool QAbstractSpinBox_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_actionEvent(event);
}

bool QAbstractSpinBox_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QAbstractSpinBox_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QAbstractSpinBox_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QAbstractSpinBox_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_dropEvent(event);
}

bool QAbstractSpinBox_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QAbstractSpinBox_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QAbstractSpinBox_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QAbstractSpinBox_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_metric(param1);
}

bool QAbstractSpinBox_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_initPainter(painter);
}

bool QAbstractSpinBox_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QAbstractSpinBox_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_redirected(offset);
}

bool QAbstractSpinBox_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QAbstractSpinBox_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_sharedPainter();
}

bool QAbstractSpinBox_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QAbstractSpinBox_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QAbstractSpinBox_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QAbstractSpinBox_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAbstractSpinBox_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAbstractSpinBox_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_childEvent(event);
}

bool QAbstractSpinBox_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_customEvent(event);
}

bool QAbstractSpinBox_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_connectNotify(signal);
}

bool QAbstractSpinBox_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAbstractSpinBox_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractSpinBox*)(self) )->virtualbase_disconnectNotify(signal);
}

QLineEdit* QAbstractSpinBox_protectedbase_lineEdit(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->lineEdit();

}

void QAbstractSpinBox_protectedbase_setLineEdit(bool* _dynamic_cast_ok, void* self, QLineEdit* edit) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setLineEdit(edit);

}

void QAbstractSpinBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QAbstractSpinBox_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QAbstractSpinBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QAbstractSpinBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QAbstractSpinBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QAbstractSpinBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAbstractSpinBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAbstractSpinBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAbstractSpinBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractSpinBox* self_cast = dynamic_cast<MiqtVirtualQAbstractSpinBox*>( (QAbstractSpinBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAbstractSpinBox_delete(QAbstractSpinBox* self) {
	delete self;
}

