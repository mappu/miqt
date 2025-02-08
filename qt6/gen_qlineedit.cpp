#include <QAction>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QCompleter>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLineEdit>
#include <QMargins>
#include <QMenu>
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
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QValidator>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qlineedit.h>
#include "gen_qlineedit.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QLineEdit_textChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QLineEdit_textEdited(intptr_t, struct miqt_string);
void miqt_exec_callback_QLineEdit_cursorPositionChanged(intptr_t, int, int);
void miqt_exec_callback_QLineEdit_returnPressed(intptr_t);
void miqt_exec_callback_QLineEdit_editingFinished(intptr_t);
void miqt_exec_callback_QLineEdit_selectionChanged(intptr_t);
void miqt_exec_callback_QLineEdit_inputRejected(intptr_t);
QSize* miqt_exec_callback_QLineEdit_sizeHint(const QLineEdit*, intptr_t);
QSize* miqt_exec_callback_QLineEdit_minimumSizeHint(const QLineEdit*, intptr_t);
void miqt_exec_callback_QLineEdit_mousePressEvent(QLineEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLineEdit_mouseMoveEvent(QLineEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLineEdit_mouseReleaseEvent(QLineEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLineEdit_mouseDoubleClickEvent(QLineEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLineEdit_keyPressEvent(QLineEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QLineEdit_keyReleaseEvent(QLineEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QLineEdit_focusInEvent(QLineEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QLineEdit_focusOutEvent(QLineEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QLineEdit_paintEvent(QLineEdit*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QLineEdit_dragEnterEvent(QLineEdit*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QLineEdit_dragMoveEvent(QLineEdit*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QLineEdit_dragLeaveEvent(QLineEdit*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QLineEdit_dropEvent(QLineEdit*, intptr_t, QDropEvent*);
void miqt_exec_callback_QLineEdit_changeEvent(QLineEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QLineEdit_contextMenuEvent(QLineEdit*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QLineEdit_inputMethodEvent(QLineEdit*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QLineEdit_initStyleOption(const QLineEdit*, intptr_t, QStyleOptionFrame*);
QVariant* miqt_exec_callback_QLineEdit_inputMethodQuery(const QLineEdit*, intptr_t, int);
void miqt_exec_callback_QLineEdit_timerEvent(QLineEdit*, intptr_t, QTimerEvent*);
bool miqt_exec_callback_QLineEdit_event(QLineEdit*, intptr_t, QEvent*);
int miqt_exec_callback_QLineEdit_devType(const QLineEdit*, intptr_t);
void miqt_exec_callback_QLineEdit_setVisible(QLineEdit*, intptr_t, bool);
int miqt_exec_callback_QLineEdit_heightForWidth(const QLineEdit*, intptr_t, int);
bool miqt_exec_callback_QLineEdit_hasHeightForWidth(const QLineEdit*, intptr_t);
QPaintEngine* miqt_exec_callback_QLineEdit_paintEngine(const QLineEdit*, intptr_t);
void miqt_exec_callback_QLineEdit_wheelEvent(QLineEdit*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QLineEdit_enterEvent(QLineEdit*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QLineEdit_leaveEvent(QLineEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QLineEdit_moveEvent(QLineEdit*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QLineEdit_resizeEvent(QLineEdit*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QLineEdit_closeEvent(QLineEdit*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QLineEdit_tabletEvent(QLineEdit*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QLineEdit_actionEvent(QLineEdit*, intptr_t, QActionEvent*);
void miqt_exec_callback_QLineEdit_showEvent(QLineEdit*, intptr_t, QShowEvent*);
void miqt_exec_callback_QLineEdit_hideEvent(QLineEdit*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QLineEdit_nativeEvent(QLineEdit*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QLineEdit_metric(const QLineEdit*, intptr_t, int);
void miqt_exec_callback_QLineEdit_initPainter(const QLineEdit*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QLineEdit_redirected(const QLineEdit*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QLineEdit_sharedPainter(const QLineEdit*, intptr_t);
bool miqt_exec_callback_QLineEdit_focusNextPrevChild(QLineEdit*, intptr_t, bool);
bool miqt_exec_callback_QLineEdit_eventFilter(QLineEdit*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QLineEdit_childEvent(QLineEdit*, intptr_t, QChildEvent*);
void miqt_exec_callback_QLineEdit_customEvent(QLineEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QLineEdit_connectNotify(QLineEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QLineEdit_disconnectNotify(QLineEdit*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQLineEdit final : public QLineEdit {
public:

	MiqtVirtualQLineEdit(QWidget* parent): QLineEdit(parent) {};
	MiqtVirtualQLineEdit(): QLineEdit() {};
	MiqtVirtualQLineEdit(const QString& param1): QLineEdit(param1) {};
	MiqtVirtualQLineEdit(const QString& param1, QWidget* parent): QLineEdit(param1, parent) {};

	virtual ~MiqtVirtualQLineEdit() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QLineEdit::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QLineEdit_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QLineEdit::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QLineEdit::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QLineEdit_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QLineEdit::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__mousePressEvent == 0) {
			QLineEdit::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QLineEdit_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* param1) {

		QLineEdit::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__mouseMoveEvent == 0) {
			QLineEdit::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QLineEdit_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* param1) {

		QLineEdit::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__mouseReleaseEvent == 0) {
			QLineEdit::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QLineEdit_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* param1) {

		QLineEdit::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QLineEdit::mouseDoubleClickEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QLineEdit_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* param1) {

		QLineEdit::mouseDoubleClickEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QLineEdit::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QLineEdit_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QLineEdit::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* param1) override {
		if (handle__keyReleaseEvent == 0) {
			QLineEdit::keyReleaseEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QLineEdit_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* param1) {

		QLineEdit::keyReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (handle__focusInEvent == 0) {
			QLineEdit::focusInEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QLineEdit_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* param1) {

		QLineEdit::focusInEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (handle__focusOutEvent == 0) {
			QLineEdit::focusOutEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QLineEdit_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* param1) {

		QLineEdit::focusOutEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QLineEdit::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QLineEdit_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* param1) {

		QLineEdit::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* param1) override {
		if (handle__dragEnterEvent == 0) {
			QLineEdit::dragEnterEvent(param1);
			return;
		}
		
		QDragEnterEvent* sigval1 = param1;

		miqt_exec_callback_QLineEdit_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* param1) {

		QLineEdit::dragEnterEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__dragMoveEvent == 0) {
			QLineEdit::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QLineEdit_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* e) {

		QLineEdit::dragMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__dragLeaveEvent == 0) {
			QLineEdit::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QLineEdit_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* e) {

		QLineEdit::dragLeaveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* param1) override {
		if (handle__dropEvent == 0) {
			QLineEdit::dropEvent(param1);
			return;
		}
		
		QDropEvent* sigval1 = param1;

		miqt_exec_callback_QLineEdit_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* param1) {

		QLineEdit::dropEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QLineEdit::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QLineEdit_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QLineEdit::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QLineEdit::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QLineEdit_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QLineEdit::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QLineEdit::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QLineEdit_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QLineEdit::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__initStyleOption == 0) {
			QLineEdit::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QLineEdit_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initStyleOption(QStyleOptionFrame* option) const {

		QLineEdit::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QLineEdit::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QLineEdit_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QLineEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__timerEvent == 0) {
			QLineEdit::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QLineEdit_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* param1) {

		QLineEdit::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QLineEdit::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QLineEdit_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* param1) {

		return QLineEdit::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QLineEdit::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QLineEdit_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QLineEdit::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QLineEdit::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QLineEdit_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QLineEdit::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QLineEdit::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QLineEdit_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QLineEdit::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QLineEdit::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QLineEdit_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QLineEdit::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QLineEdit::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QLineEdit_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QLineEdit::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QLineEdit::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QLineEdit_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QLineEdit::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QLineEdit::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QLineEdit_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QLineEdit::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QLineEdit::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QLineEdit_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QLineEdit::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QLineEdit::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QLineEdit_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QLineEdit::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QLineEdit::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QLineEdit_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QLineEdit::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QLineEdit::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QLineEdit_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QLineEdit::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QLineEdit::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QLineEdit_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QLineEdit::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QLineEdit::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QLineEdit_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QLineEdit::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QLineEdit::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QLineEdit_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QLineEdit::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QLineEdit::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QLineEdit_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QLineEdit::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QLineEdit::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QLineEdit_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QLineEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QLineEdit::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QLineEdit_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QLineEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QLineEdit::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QLineEdit_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QLineEdit::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QLineEdit::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QLineEdit_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QLineEdit::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QLineEdit::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QLineEdit_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QLineEdit::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QLineEdit::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QLineEdit_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QLineEdit::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QLineEdit::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QLineEdit_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QLineEdit::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QLineEdit::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QLineEdit_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QLineEdit::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QLineEdit::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QLineEdit_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QLineEdit::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QLineEdit::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLineEdit_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QLineEdit::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QLineEdit::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLineEdit_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QLineEdit::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QRect* QLineEdit_protectedbase_cursorRect(bool* _dynamic_cast_ok, const void* self);
	friend void QLineEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QLineEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QLineEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QLineEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QLineEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QLineEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QLineEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QLineEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QLineEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QLineEdit* QLineEdit_new(QWidget* parent) {
	return new MiqtVirtualQLineEdit(parent);
}

QLineEdit* QLineEdit_new2() {
	return new MiqtVirtualQLineEdit();
}

QLineEdit* QLineEdit_new3(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return new MiqtVirtualQLineEdit(param1_QString);
}

QLineEdit* QLineEdit_new4(struct miqt_string param1, QWidget* parent) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return new MiqtVirtualQLineEdit(param1_QString, parent);
}

void QLineEdit_virtbase(QLineEdit* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QLineEdit_metaObject(const QLineEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLineEdit_metacast(QLineEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QLineEdit_tr(const char* s) {
	QString _ret = QLineEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLineEdit_text(const QLineEdit* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLineEdit_displayText(const QLineEdit* self) {
	QString _ret = self->displayText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLineEdit_placeholderText(const QLineEdit* self) {
	QString _ret = self->placeholderText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLineEdit_setPlaceholderText(QLineEdit* self, struct miqt_string placeholderText) {
	QString placeholderText_QString = QString::fromUtf8(placeholderText.data, placeholderText.len);
	self->setPlaceholderText(placeholderText_QString);
}

int QLineEdit_maxLength(const QLineEdit* self) {
	return self->maxLength();
}

void QLineEdit_setMaxLength(QLineEdit* self, int maxLength) {
	self->setMaxLength(static_cast<int>(maxLength));
}

void QLineEdit_setFrame(QLineEdit* self, bool frame) {
	self->setFrame(frame);
}

bool QLineEdit_hasFrame(const QLineEdit* self) {
	return self->hasFrame();
}

void QLineEdit_setClearButtonEnabled(QLineEdit* self, bool enable) {
	self->setClearButtonEnabled(enable);
}

bool QLineEdit_isClearButtonEnabled(const QLineEdit* self) {
	return self->isClearButtonEnabled();
}

int QLineEdit_echoMode(const QLineEdit* self) {
	QLineEdit::EchoMode _ret = self->echoMode();
	return static_cast<int>(_ret);
}

void QLineEdit_setEchoMode(QLineEdit* self, int echoMode) {
	self->setEchoMode(static_cast<QLineEdit::EchoMode>(echoMode));
}

bool QLineEdit_isReadOnly(const QLineEdit* self) {
	return self->isReadOnly();
}

void QLineEdit_setReadOnly(QLineEdit* self, bool readOnly) {
	self->setReadOnly(readOnly);
}

void QLineEdit_setValidator(QLineEdit* self, QValidator* validator) {
	self->setValidator(validator);
}

QValidator* QLineEdit_validator(const QLineEdit* self) {
	return (QValidator*) self->validator();
}

void QLineEdit_setCompleter(QLineEdit* self, QCompleter* completer) {
	self->setCompleter(completer);
}

QCompleter* QLineEdit_completer(const QLineEdit* self) {
	return self->completer();
}

QSize* QLineEdit_sizeHint(const QLineEdit* self) {
	return new QSize(self->sizeHint());
}

QSize* QLineEdit_minimumSizeHint(const QLineEdit* self) {
	return new QSize(self->minimumSizeHint());
}

int QLineEdit_cursorPosition(const QLineEdit* self) {
	return self->cursorPosition();
}

void QLineEdit_setCursorPosition(QLineEdit* self, int cursorPosition) {
	self->setCursorPosition(static_cast<int>(cursorPosition));
}

int QLineEdit_cursorPositionAt(QLineEdit* self, QPoint* pos) {
	return self->cursorPositionAt(*pos);
}

void QLineEdit_setAlignment(QLineEdit* self, int flag) {
	self->setAlignment(static_cast<Qt::Alignment>(flag));
}

int QLineEdit_alignment(const QLineEdit* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QLineEdit_cursorForward(QLineEdit* self, bool mark) {
	self->cursorForward(mark);
}

void QLineEdit_cursorBackward(QLineEdit* self, bool mark) {
	self->cursorBackward(mark);
}

void QLineEdit_cursorWordForward(QLineEdit* self, bool mark) {
	self->cursorWordForward(mark);
}

void QLineEdit_cursorWordBackward(QLineEdit* self, bool mark) {
	self->cursorWordBackward(mark);
}

void QLineEdit_backspace(QLineEdit* self) {
	self->backspace();
}

void QLineEdit_del(QLineEdit* self) {
	self->del();
}

void QLineEdit_home(QLineEdit* self, bool mark) {
	self->home(mark);
}

void QLineEdit_end(QLineEdit* self, bool mark) {
	self->end(mark);
}

bool QLineEdit_isModified(const QLineEdit* self) {
	return self->isModified();
}

void QLineEdit_setModified(QLineEdit* self, bool modified) {
	self->setModified(modified);
}

void QLineEdit_setSelection(QLineEdit* self, int param1, int param2) {
	self->setSelection(static_cast<int>(param1), static_cast<int>(param2));
}

bool QLineEdit_hasSelectedText(const QLineEdit* self) {
	return self->hasSelectedText();
}

struct miqt_string QLineEdit_selectedText(const QLineEdit* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QLineEdit_selectionStart(const QLineEdit* self) {
	return self->selectionStart();
}

int QLineEdit_selectionEnd(const QLineEdit* self) {
	return self->selectionEnd();
}

int QLineEdit_selectionLength(const QLineEdit* self) {
	return self->selectionLength();
}

bool QLineEdit_isUndoAvailable(const QLineEdit* self) {
	return self->isUndoAvailable();
}

bool QLineEdit_isRedoAvailable(const QLineEdit* self) {
	return self->isRedoAvailable();
}

void QLineEdit_setDragEnabled(QLineEdit* self, bool b) {
	self->setDragEnabled(b);
}

bool QLineEdit_dragEnabled(const QLineEdit* self) {
	return self->dragEnabled();
}

void QLineEdit_setCursorMoveStyle(QLineEdit* self, int style) {
	self->setCursorMoveStyle(static_cast<Qt::CursorMoveStyle>(style));
}

int QLineEdit_cursorMoveStyle(const QLineEdit* self) {
	Qt::CursorMoveStyle _ret = self->cursorMoveStyle();
	return static_cast<int>(_ret);
}

struct miqt_string QLineEdit_inputMask(const QLineEdit* self) {
	QString _ret = self->inputMask();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLineEdit_setInputMask(QLineEdit* self, struct miqt_string inputMask) {
	QString inputMask_QString = QString::fromUtf8(inputMask.data, inputMask.len);
	self->setInputMask(inputMask_QString);
}

bool QLineEdit_hasAcceptableInput(const QLineEdit* self) {
	return self->hasAcceptableInput();
}

void QLineEdit_setTextMargins(QLineEdit* self, int left, int top, int right, int bottom) {
	self->setTextMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

void QLineEdit_setTextMarginsWithMargins(QLineEdit* self, QMargins* margins) {
	self->setTextMargins(*margins);
}

QMargins* QLineEdit_textMargins(const QLineEdit* self) {
	return new QMargins(self->textMargins());
}

void QLineEdit_addAction(QLineEdit* self, QAction* action, int position) {
	self->addAction(action, static_cast<QLineEdit::ActionPosition>(position));
}

QAction* QLineEdit_addAction2(QLineEdit* self, QIcon* icon, int position) {
	return self->addAction(*icon, static_cast<QLineEdit::ActionPosition>(position));
}

void QLineEdit_setText(QLineEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

void QLineEdit_clear(QLineEdit* self) {
	self->clear();
}

void QLineEdit_selectAll(QLineEdit* self) {
	self->selectAll();
}

void QLineEdit_undo(QLineEdit* self) {
	self->undo();
}

void QLineEdit_redo(QLineEdit* self) {
	self->redo();
}

void QLineEdit_cut(QLineEdit* self) {
	self->cut();
}

void QLineEdit_copy(const QLineEdit* self) {
	self->copy();
}

void QLineEdit_paste(QLineEdit* self) {
	self->paste();
}

void QLineEdit_deselect(QLineEdit* self) {
	self->deselect();
}

void QLineEdit_insert(QLineEdit* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->insert(param1_QString);
}

QMenu* QLineEdit_createStandardContextMenu(QLineEdit* self) {
	return self->createStandardContextMenu();
}

void QLineEdit_textChanged(QLineEdit* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->textChanged(param1_QString);
}

void QLineEdit_connect_textChanged(QLineEdit* self, intptr_t slot) {
	MiqtVirtualQLineEdit::connect(self, static_cast<void (QLineEdit::*)(const QString&)>(&QLineEdit::textChanged), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QLineEdit_textChanged(slot, sigval1);
	});
}

void QLineEdit_textEdited(QLineEdit* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->textEdited(param1_QString);
}

void QLineEdit_connect_textEdited(QLineEdit* self, intptr_t slot) {
	MiqtVirtualQLineEdit::connect(self, static_cast<void (QLineEdit::*)(const QString&)>(&QLineEdit::textEdited), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QLineEdit_textEdited(slot, sigval1);
	});
}

void QLineEdit_cursorPositionChanged(QLineEdit* self, int param1, int param2) {
	self->cursorPositionChanged(static_cast<int>(param1), static_cast<int>(param2));
}

void QLineEdit_connect_cursorPositionChanged(QLineEdit* self, intptr_t slot) {
	MiqtVirtualQLineEdit::connect(self, static_cast<void (QLineEdit::*)(int, int)>(&QLineEdit::cursorPositionChanged), self, [=](int param1, int param2) {
		int sigval1 = param1;
		int sigval2 = param2;
		miqt_exec_callback_QLineEdit_cursorPositionChanged(slot, sigval1, sigval2);
	});
}

void QLineEdit_returnPressed(QLineEdit* self) {
	self->returnPressed();
}

void QLineEdit_connect_returnPressed(QLineEdit* self, intptr_t slot) {
	MiqtVirtualQLineEdit::connect(self, static_cast<void (QLineEdit::*)()>(&QLineEdit::returnPressed), self, [=]() {
		miqt_exec_callback_QLineEdit_returnPressed(slot);
	});
}

void QLineEdit_editingFinished(QLineEdit* self) {
	self->editingFinished();
}

void QLineEdit_connect_editingFinished(QLineEdit* self, intptr_t slot) {
	MiqtVirtualQLineEdit::connect(self, static_cast<void (QLineEdit::*)()>(&QLineEdit::editingFinished), self, [=]() {
		miqt_exec_callback_QLineEdit_editingFinished(slot);
	});
}

void QLineEdit_selectionChanged(QLineEdit* self) {
	self->selectionChanged();
}

void QLineEdit_connect_selectionChanged(QLineEdit* self, intptr_t slot) {
	MiqtVirtualQLineEdit::connect(self, static_cast<void (QLineEdit::*)()>(&QLineEdit::selectionChanged), self, [=]() {
		miqt_exec_callback_QLineEdit_selectionChanged(slot);
	});
}

void QLineEdit_inputRejected(QLineEdit* self) {
	self->inputRejected();
}

void QLineEdit_connect_inputRejected(QLineEdit* self, intptr_t slot) {
	MiqtVirtualQLineEdit::connect(self, static_cast<void (QLineEdit::*)()>(&QLineEdit::inputRejected), self, [=]() {
		miqt_exec_callback_QLineEdit_inputRejected(slot);
	});
}

QVariant* QLineEdit_inputMethodQuery(const QLineEdit* self, int param1) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

QVariant* QLineEdit_inputMethodQuery2(const QLineEdit* self, int property, QVariant* argument) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property), *argument));
}

void QLineEdit_timerEvent(QLineEdit* self, QTimerEvent* param1) {
	self->timerEvent(param1);
}

bool QLineEdit_event(QLineEdit* self, QEvent* param1) {
	return self->event(param1);
}

struct miqt_string QLineEdit_tr2(const char* s, const char* c) {
	QString _ret = QLineEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLineEdit_tr3(const char* s, const char* c, int n) {
	QString _ret = QLineEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLineEdit_cursorForward2(QLineEdit* self, bool mark, int steps) {
	self->cursorForward(mark, static_cast<int>(steps));
}

void QLineEdit_cursorBackward2(QLineEdit* self, bool mark, int steps) {
	self->cursorBackward(mark, static_cast<int>(steps));
}

bool QLineEdit_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QLineEdit_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQLineEdit*)(self) )->virtualbase_sizeHint();
}

bool QLineEdit_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QLineEdit_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQLineEdit*)(self) )->virtualbase_minimumSizeHint();
}

bool QLineEdit_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QLineEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_mousePressEvent(param1);
}

bool QLineEdit_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QLineEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_mouseMoveEvent(param1);
}

bool QLineEdit_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QLineEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_mouseReleaseEvent(param1);
}

bool QLineEdit_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QLineEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_mouseDoubleClickEvent(param1);
}

bool QLineEdit_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QLineEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QLineEdit_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QLineEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_keyReleaseEvent(param1);
}

bool QLineEdit_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QLineEdit_virtualbase_focusInEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_focusInEvent(param1);
}

bool QLineEdit_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QLineEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_focusOutEvent(param1);
}

bool QLineEdit_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QLineEdit_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_paintEvent(param1);
}

bool QLineEdit_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QLineEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* param1) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_dragEnterEvent(param1);
}

bool QLineEdit_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QLineEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_dragMoveEvent(e);
}

bool QLineEdit_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QLineEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_dragLeaveEvent(e);
}

bool QLineEdit_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QLineEdit_virtualbase_dropEvent(void* self, QDropEvent* param1) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_dropEvent(param1);
}

bool QLineEdit_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QLineEdit_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_changeEvent(param1);
}

bool QLineEdit_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QLineEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QLineEdit_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QLineEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QLineEdit_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QLineEdit_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQLineEdit*)(self) )->virtualbase_initStyleOption(option);
}

bool QLineEdit_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QLineEdit_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQLineEdit*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QLineEdit_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QLineEdit_virtualbase_timerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_timerEvent(param1);
}

bool QLineEdit_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QLineEdit_virtualbase_event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQLineEdit*)(self) )->virtualbase_event(param1);
}

bool QLineEdit_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QLineEdit_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQLineEdit*)(self) )->virtualbase_devType();
}

bool QLineEdit_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QLineEdit_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_setVisible(visible);
}

bool QLineEdit_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QLineEdit_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQLineEdit*)(self) )->virtualbase_heightForWidth(param1);
}

bool QLineEdit_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QLineEdit_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQLineEdit*)(self) )->virtualbase_hasHeightForWidth();
}

bool QLineEdit_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QLineEdit_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQLineEdit*)(self) )->virtualbase_paintEngine();
}

bool QLineEdit_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QLineEdit_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_wheelEvent(event);
}

bool QLineEdit_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QLineEdit_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_enterEvent(event);
}

bool QLineEdit_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QLineEdit_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_leaveEvent(event);
}

bool QLineEdit_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QLineEdit_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_moveEvent(event);
}

bool QLineEdit_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QLineEdit_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_resizeEvent(event);
}

bool QLineEdit_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QLineEdit_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_closeEvent(event);
}

bool QLineEdit_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QLineEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_tabletEvent(event);
}

bool QLineEdit_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QLineEdit_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_actionEvent(event);
}

bool QLineEdit_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QLineEdit_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_showEvent(event);
}

bool QLineEdit_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QLineEdit_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_hideEvent(event);
}

bool QLineEdit_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QLineEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQLineEdit*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QLineEdit_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QLineEdit_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQLineEdit*)(self) )->virtualbase_metric(param1);
}

bool QLineEdit_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QLineEdit_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQLineEdit*)(self) )->virtualbase_initPainter(painter);
}

bool QLineEdit_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QLineEdit_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQLineEdit*)(self) )->virtualbase_redirected(offset);
}

bool QLineEdit_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QLineEdit_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQLineEdit*)(self) )->virtualbase_sharedPainter();
}

bool QLineEdit_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QLineEdit_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQLineEdit*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QLineEdit_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QLineEdit_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQLineEdit*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QLineEdit_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QLineEdit_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_childEvent(event);
}

bool QLineEdit_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QLineEdit_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_customEvent(event);
}

bool QLineEdit_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QLineEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_connectNotify(signal);
}

bool QLineEdit_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QLineEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQLineEdit*)(self) )->virtualbase_disconnectNotify(signal);
}

QRect* QLineEdit_protectedbase_cursorRect(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRect(self_cast->cursorRect());

}

void QLineEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QLineEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QLineEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QLineEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QLineEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QLineEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QLineEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QLineEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QLineEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QLineEdit_delete(QLineEdit* self) {
	delete self;
}

