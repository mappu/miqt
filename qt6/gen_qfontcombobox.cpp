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

void miqt_exec_callback_QFontComboBox_currentFontChanged(intptr_t, QFont*);
QSize* miqt_exec_callback_QFontComboBox_sizeHint(const QFontComboBox*, intptr_t);
bool miqt_exec_callback_QFontComboBox_event(QFontComboBox*, intptr_t, QEvent*);
void miqt_exec_callback_QFontComboBox_setModel(QFontComboBox*, intptr_t, QAbstractItemModel*);
QSize* miqt_exec_callback_QFontComboBox_minimumSizeHint(const QFontComboBox*, intptr_t);
void miqt_exec_callback_QFontComboBox_showPopup(QFontComboBox*, intptr_t);
void miqt_exec_callback_QFontComboBox_hidePopup(QFontComboBox*, intptr_t);
QVariant* miqt_exec_callback_QFontComboBox_inputMethodQuery(const QFontComboBox*, intptr_t, int);
void miqt_exec_callback_QFontComboBox_focusInEvent(QFontComboBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFontComboBox_focusOutEvent(QFontComboBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFontComboBox_changeEvent(QFontComboBox*, intptr_t, QEvent*);
void miqt_exec_callback_QFontComboBox_resizeEvent(QFontComboBox*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QFontComboBox_paintEvent(QFontComboBox*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QFontComboBox_showEvent(QFontComboBox*, intptr_t, QShowEvent*);
void miqt_exec_callback_QFontComboBox_hideEvent(QFontComboBox*, intptr_t, QHideEvent*);
void miqt_exec_callback_QFontComboBox_mousePressEvent(QFontComboBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFontComboBox_mouseReleaseEvent(QFontComboBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFontComboBox_keyPressEvent(QFontComboBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFontComboBox_keyReleaseEvent(QFontComboBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFontComboBox_wheelEvent(QFontComboBox*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QFontComboBox_contextMenuEvent(QFontComboBox*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QFontComboBox_inputMethodEvent(QFontComboBox*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QFontComboBox_initStyleOption(const QFontComboBox*, intptr_t, QStyleOptionComboBox*);
int miqt_exec_callback_QFontComboBox_devType(const QFontComboBox*, intptr_t);
void miqt_exec_callback_QFontComboBox_setVisible(QFontComboBox*, intptr_t, bool);
int miqt_exec_callback_QFontComboBox_heightForWidth(const QFontComboBox*, intptr_t, int);
bool miqt_exec_callback_QFontComboBox_hasHeightForWidth(const QFontComboBox*, intptr_t);
QPaintEngine* miqt_exec_callback_QFontComboBox_paintEngine(const QFontComboBox*, intptr_t);
void miqt_exec_callback_QFontComboBox_mouseDoubleClickEvent(QFontComboBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFontComboBox_mouseMoveEvent(QFontComboBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFontComboBox_enterEvent(QFontComboBox*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QFontComboBox_leaveEvent(QFontComboBox*, intptr_t, QEvent*);
void miqt_exec_callback_QFontComboBox_moveEvent(QFontComboBox*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QFontComboBox_closeEvent(QFontComboBox*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QFontComboBox_tabletEvent(QFontComboBox*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QFontComboBox_actionEvent(QFontComboBox*, intptr_t, QActionEvent*);
void miqt_exec_callback_QFontComboBox_dragEnterEvent(QFontComboBox*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QFontComboBox_dragMoveEvent(QFontComboBox*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QFontComboBox_dragLeaveEvent(QFontComboBox*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QFontComboBox_dropEvent(QFontComboBox*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QFontComboBox_nativeEvent(QFontComboBox*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QFontComboBox_metric(const QFontComboBox*, intptr_t, int);
void miqt_exec_callback_QFontComboBox_initPainter(const QFontComboBox*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QFontComboBox_redirected(const QFontComboBox*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QFontComboBox_sharedPainter(const QFontComboBox*, intptr_t);
bool miqt_exec_callback_QFontComboBox_focusNextPrevChild(QFontComboBox*, intptr_t, bool);
bool miqt_exec_callback_QFontComboBox_eventFilter(QFontComboBox*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QFontComboBox_timerEvent(QFontComboBox*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QFontComboBox_childEvent(QFontComboBox*, intptr_t, QChildEvent*);
void miqt_exec_callback_QFontComboBox_customEvent(QFontComboBox*, intptr_t, QEvent*);
void miqt_exec_callback_QFontComboBox_connectNotify(QFontComboBox*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QFontComboBox_disconnectNotify(QFontComboBox*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFontComboBox final : public QFontComboBox {
public:

	MiqtVirtualQFontComboBox(QWidget* parent): QFontComboBox(parent) {};
	MiqtVirtualQFontComboBox(): QFontComboBox() {};

	virtual ~MiqtVirtualQFontComboBox() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QFontComboBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFontComboBox_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QFontComboBox::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QFontComboBox::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QFontComboBox_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QFontComboBox::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (handle__setModel == 0) {
			QFontComboBox::setModel(model);
			return;
		}
		
		QAbstractItemModel* sigval1 = model;

		miqt_exec_callback_QFontComboBox_setModel(this, handle__setModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setModel(QAbstractItemModel* model) {

		QFontComboBox::setModel(model);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QFontComboBox::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFontComboBox_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QFontComboBox::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showPopup = 0;

	// Subclass to allow providing a Go implementation
	virtual void showPopup() override {
		if (handle__showPopup == 0) {
			QFontComboBox::showPopup();
			return;
		}
		

		miqt_exec_callback_QFontComboBox_showPopup(this, handle__showPopup);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showPopup() {

		QFontComboBox::showPopup();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hidePopup = 0;

	// Subclass to allow providing a Go implementation
	virtual void hidePopup() override {
		if (handle__hidePopup == 0) {
			QFontComboBox::hidePopup();
			return;
		}
		

		miqt_exec_callback_QFontComboBox_hidePopup(this, handle__hidePopup);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hidePopup() {

		QFontComboBox::hidePopup();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QFontComboBox::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QFontComboBox_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QFontComboBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__focusInEvent == 0) {
			QFontComboBox::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* e) {

		QFontComboBox::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__focusOutEvent == 0) {
			QFontComboBox::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* e) {

		QFontComboBox::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__changeEvent == 0) {
			QFontComboBox::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* e) {

		QFontComboBox::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__resizeEvent == 0) {
			QFontComboBox::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* e) {

		QFontComboBox::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__paintEvent == 0) {
			QFontComboBox::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* e) {

		QFontComboBox::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* e) override {
		if (handle__showEvent == 0) {
			QFontComboBox::showEvent(e);
			return;
		}
		
		QShowEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* e) {

		QFontComboBox::showEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* e) override {
		if (handle__hideEvent == 0) {
			QFontComboBox::hideEvent(e);
			return;
		}
		
		QHideEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* e) {

		QFontComboBox::hideEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__mousePressEvent == 0) {
			QFontComboBox::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* e) {

		QFontComboBox::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__mouseReleaseEvent == 0) {
			QFontComboBox::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* e) {

		QFontComboBox::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__keyPressEvent == 0) {
			QFontComboBox::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* e) {

		QFontComboBox::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__keyReleaseEvent == 0) {
			QFontComboBox::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* e) {

		QFontComboBox::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__wheelEvent == 0) {
			QFontComboBox::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* e) {

		QFontComboBox::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* e) override {
		if (handle__contextMenuEvent == 0) {
			QFontComboBox::contextMenuEvent(e);
			return;
		}
		
		QContextMenuEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* e) {

		QFontComboBox::contextMenuEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QFontComboBox::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QFontComboBox_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QFontComboBox::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionComboBox* option) const override {
		if (handle__initStyleOption == 0) {
			QFontComboBox::initStyleOption(option);
			return;
		}
		
		QStyleOptionComboBox* sigval1 = option;

		miqt_exec_callback_QFontComboBox_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initStyleOption(QStyleOptionComboBox* option) const {

		QFontComboBox::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QFontComboBox::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QFontComboBox_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QFontComboBox::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QFontComboBox::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QFontComboBox_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QFontComboBox::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QFontComboBox::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QFontComboBox_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QFontComboBox::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QFontComboBox::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QFontComboBox_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QFontComboBox::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QFontComboBox::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QFontComboBox_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QFontComboBox::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QFontComboBox::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QFontComboBox::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QFontComboBox::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QFontComboBox::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QFontComboBox::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QFontComboBox::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QFontComboBox::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QFontComboBox::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QFontComboBox::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QFontComboBox::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QFontComboBox::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QFontComboBox::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QFontComboBox::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QFontComboBox::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QFontComboBox::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QFontComboBox::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QFontComboBox::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QFontComboBox::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QFontComboBox::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QFontComboBox::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QFontComboBox::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QFontComboBox::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QFontComboBox::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QFontComboBox::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
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

		bool callback_return_value = miqt_exec_callback_QFontComboBox_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QFontComboBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QFontComboBox::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QFontComboBox_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QFontComboBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QFontComboBox::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QFontComboBox_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QFontComboBox::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QFontComboBox::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QFontComboBox_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QFontComboBox::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QFontComboBox::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QFontComboBox_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QFontComboBox::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QFontComboBox::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QFontComboBox_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QFontComboBox::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QFontComboBox::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QFontComboBox_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QFontComboBox::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QFontComboBox::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QFontComboBox::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QFontComboBox::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QFontComboBox::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QFontComboBox::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFontComboBox_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QFontComboBox::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QFontComboBox::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFontComboBox_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QFontComboBox::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QFontComboBox::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFontComboBox_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QFontComboBox::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QFontComboBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QFontComboBox_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QFontComboBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QFontComboBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QFontComboBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QFontComboBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QFontComboBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QFontComboBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QFontComboBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QFontComboBox_metaObject(const QFontComboBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFontComboBox_metacast(QFontComboBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFontComboBox_tr(const char* s) {
	QString _ret = QFontComboBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontComboBox_setWritingSystem(QFontComboBox* self, int writingSystem) {
	self->setWritingSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem));
}

int QFontComboBox_writingSystem(const QFontComboBox* self) {
	QFontDatabase::WritingSystem _ret = self->writingSystem();
	return static_cast<int>(_ret);
}

void QFontComboBox_setFontFilters(QFontComboBox* self, int filters) {
	self->setFontFilters(static_cast<QFontComboBox::FontFilters>(filters));
}

int QFontComboBox_fontFilters(const QFontComboBox* self) {
	QFontComboBox::FontFilters _ret = self->fontFilters();
	return static_cast<int>(_ret);
}

QFont* QFontComboBox_currentFont(const QFontComboBox* self) {
	return new QFont(self->currentFont());
}

QSize* QFontComboBox_sizeHint(const QFontComboBox* self) {
	return new QSize(self->sizeHint());
}

void QFontComboBox_setSampleTextForSystem(QFontComboBox* self, int writingSystem, struct miqt_string sampleText) {
	QString sampleText_QString = QString::fromUtf8(sampleText.data, sampleText.len);
	self->setSampleTextForSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem), sampleText_QString);
}

struct miqt_string QFontComboBox_sampleTextForSystem(const QFontComboBox* self, int writingSystem) {
	QString _ret = self->sampleTextForSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontComboBox_setSampleTextForFont(QFontComboBox* self, struct miqt_string fontFamily, struct miqt_string sampleText) {
	QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
	QString sampleText_QString = QString::fromUtf8(sampleText.data, sampleText.len);
	self->setSampleTextForFont(fontFamily_QString, sampleText_QString);
}

struct miqt_string QFontComboBox_sampleTextForFont(const QFontComboBox* self, struct miqt_string fontFamily) {
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

void QFontComboBox_setDisplayFont(QFontComboBox* self, struct miqt_string fontFamily, QFont* font) {
	QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
	self->setDisplayFont(fontFamily_QString, *font);
}

void QFontComboBox_setCurrentFont(QFontComboBox* self, QFont* f) {
	self->setCurrentFont(*f);
}

void QFontComboBox_currentFontChanged(QFontComboBox* self, QFont* f) {
	self->currentFontChanged(*f);
}

void QFontComboBox_connect_currentFontChanged(QFontComboBox* self, intptr_t slot) {
	MiqtVirtualQFontComboBox::connect(self, static_cast<void (QFontComboBox::*)(const QFont&)>(&QFontComboBox::currentFontChanged), self, [=](const QFont& f) {
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		miqt_exec_callback_QFontComboBox_currentFontChanged(slot, sigval1);
	});
}

struct miqt_string QFontComboBox_tr2(const char* s, const char* c) {
	QString _ret = QFontComboBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFontComboBox_tr3(const char* s, const char* c, int n) {
	QString _ret = QFontComboBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFontComboBox_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QFontComboBox_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_sizeHint();
}

bool QFontComboBox_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QFontComboBox_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_event(e);
}

bool QFontComboBox_override_virtual_setModel(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setModel = slot;
	return true;
}

void QFontComboBox_virtualbase_setModel(void* self, QAbstractItemModel* model) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_setModel(model);
}

bool QFontComboBox_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QFontComboBox_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_minimumSizeHint();
}

bool QFontComboBox_override_virtual_showPopup(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showPopup = slot;
	return true;
}

void QFontComboBox_virtualbase_showPopup(void* self) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_showPopup();
}

bool QFontComboBox_override_virtual_hidePopup(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hidePopup = slot;
	return true;
}

void QFontComboBox_virtualbase_hidePopup(void* self) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_hidePopup();
}

bool QFontComboBox_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QFontComboBox_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QFontComboBox_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_focusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_focusInEvent(e);
}

bool QFontComboBox_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_focusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_focusOutEvent(e);
}

bool QFontComboBox_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_changeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_changeEvent(e);
}

bool QFontComboBox_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_resizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_resizeEvent(e);
}

bool QFontComboBox_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_paintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_paintEvent(e);
}

bool QFontComboBox_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_showEvent(void* self, QShowEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_showEvent(e);
}

bool QFontComboBox_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_hideEvent(void* self, QHideEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_hideEvent(e);
}

bool QFontComboBox_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_mousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_mousePressEvent(e);
}

bool QFontComboBox_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_mouseReleaseEvent(e);
}

bool QFontComboBox_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_keyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_keyPressEvent(e);
}

bool QFontComboBox_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_keyReleaseEvent(e);
}

bool QFontComboBox_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_wheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_wheelEvent(e);
}

bool QFontComboBox_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_contextMenuEvent(e);
}

bool QFontComboBox_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QFontComboBox_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QFontComboBox_virtualbase_initStyleOption(const void* self, QStyleOptionComboBox* option) {
	( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_initStyleOption(option);
}

bool QFontComboBox_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QFontComboBox_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_devType();
}

bool QFontComboBox_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QFontComboBox_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_setVisible(visible);
}

bool QFontComboBox_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QFontComboBox_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_heightForWidth(param1);
}

bool QFontComboBox_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QFontComboBox_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_hasHeightForWidth();
}

bool QFontComboBox_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QFontComboBox_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_paintEngine();
}

bool QFontComboBox_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QFontComboBox_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QFontComboBox_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_enterEvent(event);
}

bool QFontComboBox_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_leaveEvent(event);
}

bool QFontComboBox_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_moveEvent(event);
}

bool QFontComboBox_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_closeEvent(event);
}

bool QFontComboBox_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_tabletEvent(event);
}

bool QFontComboBox_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_actionEvent(event);
}

bool QFontComboBox_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QFontComboBox_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QFontComboBox_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QFontComboBox_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_dropEvent(event);
}

bool QFontComboBox_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QFontComboBox_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QFontComboBox_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QFontComboBox_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_metric(param1);
}

bool QFontComboBox_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QFontComboBox_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_initPainter(painter);
}

bool QFontComboBox_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QFontComboBox_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_redirected(offset);
}

bool QFontComboBox_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QFontComboBox_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_sharedPainter();
}

bool QFontComboBox_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QFontComboBox_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QFontComboBox_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QFontComboBox_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QFontComboBox_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_timerEvent(event);
}

bool QFontComboBox_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_childEvent(event);
}

bool QFontComboBox_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QFontComboBox_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_customEvent(event);
}

bool QFontComboBox_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QFontComboBox_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_connectNotify(signal);
}

bool QFontComboBox_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QFontComboBox_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_disconnectNotify(signal);
}

void QFontComboBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QFontComboBox_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QFontComboBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QFontComboBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QFontComboBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QFontComboBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QFontComboBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QFontComboBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QFontComboBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQFontComboBox* self_cast = dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QFontComboBox_delete(QFontComboBox* self) {
	delete self;
}

