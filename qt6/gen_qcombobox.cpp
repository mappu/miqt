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
#include <QEnterEvent>
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
#include <QStyleOptionComboBox>
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

void miqt_exec_callback_QComboBox_editTextChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QComboBox_activated(intptr_t, int);
void miqt_exec_callback_QComboBox_textActivated(intptr_t, struct miqt_string);
void miqt_exec_callback_QComboBox_highlighted(intptr_t, int);
void miqt_exec_callback_QComboBox_textHighlighted(intptr_t, struct miqt_string);
void miqt_exec_callback_QComboBox_currentIndexChanged(intptr_t, int);
void miqt_exec_callback_QComboBox_currentTextChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QComboBox_setModel(QComboBox*, intptr_t, QAbstractItemModel*);
QSize* miqt_exec_callback_QComboBox_sizeHint(const QComboBox*, intptr_t);
QSize* miqt_exec_callback_QComboBox_minimumSizeHint(const QComboBox*, intptr_t);
void miqt_exec_callback_QComboBox_showPopup(QComboBox*, intptr_t);
void miqt_exec_callback_QComboBox_hidePopup(QComboBox*, intptr_t);
bool miqt_exec_callback_QComboBox_event(QComboBox*, intptr_t, QEvent*);
QVariant* miqt_exec_callback_QComboBox_inputMethodQuery(const QComboBox*, intptr_t, int);
void miqt_exec_callback_QComboBox_focusInEvent(QComboBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QComboBox_focusOutEvent(QComboBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QComboBox_changeEvent(QComboBox*, intptr_t, QEvent*);
void miqt_exec_callback_QComboBox_resizeEvent(QComboBox*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QComboBox_paintEvent(QComboBox*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QComboBox_showEvent(QComboBox*, intptr_t, QShowEvent*);
void miqt_exec_callback_QComboBox_hideEvent(QComboBox*, intptr_t, QHideEvent*);
void miqt_exec_callback_QComboBox_mousePressEvent(QComboBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QComboBox_mouseReleaseEvent(QComboBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QComboBox_keyPressEvent(QComboBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QComboBox_keyReleaseEvent(QComboBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QComboBox_wheelEvent(QComboBox*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QComboBox_contextMenuEvent(QComboBox*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QComboBox_inputMethodEvent(QComboBox*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QComboBox_initStyleOption(const QComboBox*, intptr_t, QStyleOptionComboBox*);
int miqt_exec_callback_QComboBox_devType(const QComboBox*, intptr_t);
void miqt_exec_callback_QComboBox_setVisible(QComboBox*, intptr_t, bool);
int miqt_exec_callback_QComboBox_heightForWidth(const QComboBox*, intptr_t, int);
bool miqt_exec_callback_QComboBox_hasHeightForWidth(const QComboBox*, intptr_t);
QPaintEngine* miqt_exec_callback_QComboBox_paintEngine(const QComboBox*, intptr_t);
void miqt_exec_callback_QComboBox_mouseDoubleClickEvent(QComboBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QComboBox_mouseMoveEvent(QComboBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QComboBox_enterEvent(QComboBox*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QComboBox_leaveEvent(QComboBox*, intptr_t, QEvent*);
void miqt_exec_callback_QComboBox_moveEvent(QComboBox*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QComboBox_closeEvent(QComboBox*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QComboBox_tabletEvent(QComboBox*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QComboBox_actionEvent(QComboBox*, intptr_t, QActionEvent*);
void miqt_exec_callback_QComboBox_dragEnterEvent(QComboBox*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QComboBox_dragMoveEvent(QComboBox*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QComboBox_dragLeaveEvent(QComboBox*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QComboBox_dropEvent(QComboBox*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QComboBox_nativeEvent(QComboBox*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QComboBox_metric(const QComboBox*, intptr_t, int);
void miqt_exec_callback_QComboBox_initPainter(const QComboBox*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QComboBox_redirected(const QComboBox*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QComboBox_sharedPainter(const QComboBox*, intptr_t);
bool miqt_exec_callback_QComboBox_focusNextPrevChild(QComboBox*, intptr_t, bool);
bool miqt_exec_callback_QComboBox_eventFilter(QComboBox*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QComboBox_timerEvent(QComboBox*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QComboBox_childEvent(QComboBox*, intptr_t, QChildEvent*);
void miqt_exec_callback_QComboBox_customEvent(QComboBox*, intptr_t, QEvent*);
void miqt_exec_callback_QComboBox_connectNotify(QComboBox*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QComboBox_disconnectNotify(QComboBox*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQComboBox final : public QComboBox {
public:

	MiqtVirtualQComboBox(QWidget* parent): QComboBox(parent) {};
	MiqtVirtualQComboBox(): QComboBox() {};

	virtual ~MiqtVirtualQComboBox() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (handle__setModel == 0) {
			QComboBox::setModel(model);
			return;
		}
		
		QAbstractItemModel* sigval1 = model;

		miqt_exec_callback_QComboBox_setModel(this, handle__setModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setModel(QAbstractItemModel* model) {

		QComboBox::setModel(model);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QComboBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QComboBox_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QComboBox::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QComboBox::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QComboBox_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QComboBox::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showPopup = 0;

	// Subclass to allow providing a Go implementation
	virtual void showPopup() override {
		if (handle__showPopup == 0) {
			QComboBox::showPopup();
			return;
		}
		

		miqt_exec_callback_QComboBox_showPopup(this, handle__showPopup);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showPopup() {

		QComboBox::showPopup();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hidePopup = 0;

	// Subclass to allow providing a Go implementation
	virtual void hidePopup() override {
		if (handle__hidePopup == 0) {
			QComboBox::hidePopup();
			return;
		}
		

		miqt_exec_callback_QComboBox_hidePopup(this, handle__hidePopup);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hidePopup() {

		QComboBox::hidePopup();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QComboBox::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QComboBox_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QComboBox::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QComboBox::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QComboBox_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QComboBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__focusInEvent == 0) {
			QComboBox::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* e) {

		QComboBox::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__focusOutEvent == 0) {
			QComboBox::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* e) {

		QComboBox::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__changeEvent == 0) {
			QComboBox::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* e) {

		QComboBox::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__resizeEvent == 0) {
			QComboBox::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* e) {

		QComboBox::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__paintEvent == 0) {
			QComboBox::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* e) {

		QComboBox::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* e) override {
		if (handle__showEvent == 0) {
			QComboBox::showEvent(e);
			return;
		}
		
		QShowEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* e) {

		QComboBox::showEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* e) override {
		if (handle__hideEvent == 0) {
			QComboBox::hideEvent(e);
			return;
		}
		
		QHideEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* e) {

		QComboBox::hideEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__mousePressEvent == 0) {
			QComboBox::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* e) {

		QComboBox::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__mouseReleaseEvent == 0) {
			QComboBox::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* e) {

		QComboBox::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__keyPressEvent == 0) {
			QComboBox::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* e) {

		QComboBox::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__keyReleaseEvent == 0) {
			QComboBox::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* e) {

		QComboBox::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__wheelEvent == 0) {
			QComboBox::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* e) {

		QComboBox::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* e) override {
		if (handle__contextMenuEvent == 0) {
			QComboBox::contextMenuEvent(e);
			return;
		}
		
		QContextMenuEvent* sigval1 = e;

		miqt_exec_callback_QComboBox_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* e) {

		QComboBox::contextMenuEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QComboBox::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QComboBox_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QComboBox::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionComboBox* option) const override {
		if (handle__initStyleOption == 0) {
			QComboBox::initStyleOption(option);
			return;
		}
		
		QStyleOptionComboBox* sigval1 = option;

		miqt_exec_callback_QComboBox_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initStyleOption(QStyleOptionComboBox* option) const {

		QComboBox::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QComboBox::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QComboBox_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QComboBox::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QComboBox::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QComboBox_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QComboBox::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QComboBox::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QComboBox_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QComboBox::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QComboBox::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QComboBox_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QComboBox::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QComboBox::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QComboBox_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QComboBox::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QComboBox::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QComboBox::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QComboBox::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QComboBox::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QComboBox::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QComboBox::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QComboBox::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QComboBox::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QComboBox::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QComboBox::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QComboBox::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QComboBox::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QComboBox::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QComboBox::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QComboBox::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QComboBox::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QComboBox::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QComboBox::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QComboBox::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QComboBox::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QComboBox::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QComboBox::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QComboBox::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QComboBox::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QComboBox::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QComboBox_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QComboBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QComboBox::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QComboBox_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QComboBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QComboBox::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QComboBox_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QComboBox::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QComboBox::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QComboBox_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QComboBox::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QComboBox::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QComboBox_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QComboBox::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QComboBox::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QComboBox_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QComboBox::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QComboBox::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QComboBox_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QComboBox::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QComboBox::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QComboBox::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QComboBox::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QComboBox::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QComboBox::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QComboBox_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QComboBox::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QComboBox::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QComboBox_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QComboBox::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QComboBox::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QComboBox_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QComboBox::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QComboBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QComboBox_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QComboBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QComboBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QComboBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QComboBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QComboBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QComboBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QComboBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QComboBox_metaObject(const QComboBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QComboBox_metacast(QComboBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QComboBox_tr(const char* s) {
	QString _ret = QComboBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QComboBox_maxVisibleItems(const QComboBox* self) {
	return self->maxVisibleItems();
}

void QComboBox_setMaxVisibleItems(QComboBox* self, int maxItems) {
	self->setMaxVisibleItems(static_cast<int>(maxItems));
}

int QComboBox_count(const QComboBox* self) {
	return self->count();
}

void QComboBox_setMaxCount(QComboBox* self, int max) {
	self->setMaxCount(static_cast<int>(max));
}

int QComboBox_maxCount(const QComboBox* self) {
	return self->maxCount();
}

bool QComboBox_duplicatesEnabled(const QComboBox* self) {
	return self->duplicatesEnabled();
}

void QComboBox_setDuplicatesEnabled(QComboBox* self, bool enable) {
	self->setDuplicatesEnabled(enable);
}

void QComboBox_setFrame(QComboBox* self, bool frame) {
	self->setFrame(frame);
}

bool QComboBox_hasFrame(const QComboBox* self) {
	return self->hasFrame();
}

int QComboBox_findText(const QComboBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->findText(text_QString);
}

int QComboBox_findData(const QComboBox* self, QVariant* data) {
	return self->findData(*data);
}

int QComboBox_insertPolicy(const QComboBox* self) {
	QComboBox::InsertPolicy _ret = self->insertPolicy();
	return static_cast<int>(_ret);
}

void QComboBox_setInsertPolicy(QComboBox* self, int policy) {
	self->setInsertPolicy(static_cast<QComboBox::InsertPolicy>(policy));
}

int QComboBox_sizeAdjustPolicy(const QComboBox* self) {
	QComboBox::SizeAdjustPolicy _ret = self->sizeAdjustPolicy();
	return static_cast<int>(_ret);
}

void QComboBox_setSizeAdjustPolicy(QComboBox* self, int policy) {
	self->setSizeAdjustPolicy(static_cast<QComboBox::SizeAdjustPolicy>(policy));
}

int QComboBox_minimumContentsLength(const QComboBox* self) {
	return self->minimumContentsLength();
}

void QComboBox_setMinimumContentsLength(QComboBox* self, int characters) {
	self->setMinimumContentsLength(static_cast<int>(characters));
}

QSize* QComboBox_iconSize(const QComboBox* self) {
	return new QSize(self->iconSize());
}

void QComboBox_setIconSize(QComboBox* self, QSize* size) {
	self->setIconSize(*size);
}

void QComboBox_setPlaceholderText(QComboBox* self, struct miqt_string placeholderText) {
	QString placeholderText_QString = QString::fromUtf8(placeholderText.data, placeholderText.len);
	self->setPlaceholderText(placeholderText_QString);
}

struct miqt_string QComboBox_placeholderText(const QComboBox* self) {
	QString _ret = self->placeholderText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QComboBox_isEditable(const QComboBox* self) {
	return self->isEditable();
}

void QComboBox_setEditable(QComboBox* self, bool editable) {
	self->setEditable(editable);
}

void QComboBox_setLineEdit(QComboBox* self, QLineEdit* edit) {
	self->setLineEdit(edit);
}

QLineEdit* QComboBox_lineEdit(const QComboBox* self) {
	return self->lineEdit();
}

void QComboBox_setValidator(QComboBox* self, QValidator* v) {
	self->setValidator(v);
}

QValidator* QComboBox_validator(const QComboBox* self) {
	return (QValidator*) self->validator();
}

void QComboBox_setCompleter(QComboBox* self, QCompleter* c) {
	self->setCompleter(c);
}

QCompleter* QComboBox_completer(const QComboBox* self) {
	return self->completer();
}

QAbstractItemDelegate* QComboBox_itemDelegate(const QComboBox* self) {
	return self->itemDelegate();
}

void QComboBox_setItemDelegate(QComboBox* self, QAbstractItemDelegate* delegate) {
	self->setItemDelegate(delegate);
}

QAbstractItemModel* QComboBox_model(const QComboBox* self) {
	return self->model();
}

void QComboBox_setModel(QComboBox* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QModelIndex* QComboBox_rootModelIndex(const QComboBox* self) {
	return new QModelIndex(self->rootModelIndex());
}

void QComboBox_setRootModelIndex(QComboBox* self, QModelIndex* index) {
	self->setRootModelIndex(*index);
}

int QComboBox_modelColumn(const QComboBox* self) {
	return self->modelColumn();
}

void QComboBox_setModelColumn(QComboBox* self, int visibleColumn) {
	self->setModelColumn(static_cast<int>(visibleColumn));
}

int QComboBox_currentIndex(const QComboBox* self) {
	return self->currentIndex();
}

struct miqt_string QComboBox_currentText(const QComboBox* self) {
	QString _ret = self->currentText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVariant* QComboBox_currentData(const QComboBox* self) {
	return new QVariant(self->currentData());
}

struct miqt_string QComboBox_itemText(const QComboBox* self, int index) {
	QString _ret = self->itemText(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QIcon* QComboBox_itemIcon(const QComboBox* self, int index) {
	return new QIcon(self->itemIcon(static_cast<int>(index)));
}

QVariant* QComboBox_itemData(const QComboBox* self, int index) {
	return new QVariant(self->itemData(static_cast<int>(index)));
}

void QComboBox_addItem(QComboBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->addItem(text_QString);
}

void QComboBox_addItem2(QComboBox* self, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->addItem(*icon, text_QString);
}

void QComboBox_addItems(QComboBox* self, struct miqt_array /* of struct miqt_string */  texts) {
	QStringList texts_QList;
	texts_QList.reserve(texts.len);
	struct miqt_string* texts_arr = static_cast<struct miqt_string*>(texts.data);
	for(size_t i = 0; i < texts.len; ++i) {
		QString texts_arr_i_QString = QString::fromUtf8(texts_arr[i].data, texts_arr[i].len);
		texts_QList.push_back(texts_arr_i_QString);
	}
	self->addItems(texts_QList);
}

void QComboBox_insertItem(QComboBox* self, int index, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertItem(static_cast<int>(index), text_QString);
}

void QComboBox_insertItem2(QComboBox* self, int index, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertItem(static_cast<int>(index), *icon, text_QString);
}

void QComboBox_insertItems(QComboBox* self, int index, struct miqt_array /* of struct miqt_string */  texts) {
	QStringList texts_QList;
	texts_QList.reserve(texts.len);
	struct miqt_string* texts_arr = static_cast<struct miqt_string*>(texts.data);
	for(size_t i = 0; i < texts.len; ++i) {
		QString texts_arr_i_QString = QString::fromUtf8(texts_arr[i].data, texts_arr[i].len);
		texts_QList.push_back(texts_arr_i_QString);
	}
	self->insertItems(static_cast<int>(index), texts_QList);
}

void QComboBox_insertSeparator(QComboBox* self, int index) {
	self->insertSeparator(static_cast<int>(index));
}

void QComboBox_removeItem(QComboBox* self, int index) {
	self->removeItem(static_cast<int>(index));
}

void QComboBox_setItemText(QComboBox* self, int index, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setItemText(static_cast<int>(index), text_QString);
}

void QComboBox_setItemIcon(QComboBox* self, int index, QIcon* icon) {
	self->setItemIcon(static_cast<int>(index), *icon);
}

void QComboBox_setItemData(QComboBox* self, int index, QVariant* value) {
	self->setItemData(static_cast<int>(index), *value);
}

QAbstractItemView* QComboBox_view(const QComboBox* self) {
	return self->view();
}

void QComboBox_setView(QComboBox* self, QAbstractItemView* itemView) {
	self->setView(itemView);
}

QSize* QComboBox_sizeHint(const QComboBox* self) {
	return new QSize(self->sizeHint());
}

QSize* QComboBox_minimumSizeHint(const QComboBox* self) {
	return new QSize(self->minimumSizeHint());
}

void QComboBox_showPopup(QComboBox* self) {
	self->showPopup();
}

void QComboBox_hidePopup(QComboBox* self) {
	self->hidePopup();
}

bool QComboBox_event(QComboBox* self, QEvent* event) {
	return self->event(event);
}

QVariant* QComboBox_inputMethodQuery(const QComboBox* self, int param1) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

QVariant* QComboBox_inputMethodQuery2(const QComboBox* self, int query, QVariant* argument) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QComboBox_clear(QComboBox* self) {
	self->clear();
}

void QComboBox_clearEditText(QComboBox* self) {
	self->clearEditText();
}

void QComboBox_setEditText(QComboBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setEditText(text_QString);
}

void QComboBox_setCurrentIndex(QComboBox* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QComboBox_setCurrentText(QComboBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setCurrentText(text_QString);
}

void QComboBox_editTextChanged(QComboBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->editTextChanged(param1_QString);
}

void QComboBox_connect_editTextChanged(QComboBox* self, intptr_t slot) {
	MiqtVirtualQComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::editTextChanged), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QComboBox_editTextChanged(slot, sigval1);
	});
}

void QComboBox_activated(QComboBox* self, int index) {
	self->activated(static_cast<int>(index));
}

void QComboBox_connect_activated(QComboBox* self, intptr_t slot) {
	MiqtVirtualQComboBox::connect(self, static_cast<void (QComboBox::*)(int)>(&QComboBox::activated), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QComboBox_activated(slot, sigval1);
	});
}

void QComboBox_textActivated(QComboBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->textActivated(param1_QString);
}

void QComboBox_connect_textActivated(QComboBox* self, intptr_t slot) {
	MiqtVirtualQComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::textActivated), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QComboBox_textActivated(slot, sigval1);
	});
}

void QComboBox_highlighted(QComboBox* self, int index) {
	self->highlighted(static_cast<int>(index));
}

void QComboBox_connect_highlighted(QComboBox* self, intptr_t slot) {
	MiqtVirtualQComboBox::connect(self, static_cast<void (QComboBox::*)(int)>(&QComboBox::highlighted), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QComboBox_highlighted(slot, sigval1);
	});
}

void QComboBox_textHighlighted(QComboBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->textHighlighted(param1_QString);
}

void QComboBox_connect_textHighlighted(QComboBox* self, intptr_t slot) {
	MiqtVirtualQComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::textHighlighted), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QComboBox_textHighlighted(slot, sigval1);
	});
}

void QComboBox_currentIndexChanged(QComboBox* self, int index) {
	self->currentIndexChanged(static_cast<int>(index));
}

void QComboBox_connect_currentIndexChanged(QComboBox* self, intptr_t slot) {
	MiqtVirtualQComboBox::connect(self, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QComboBox_currentIndexChanged(slot, sigval1);
	});
}

void QComboBox_currentTextChanged(QComboBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->currentTextChanged(param1_QString);
}

void QComboBox_connect_currentTextChanged(QComboBox* self, intptr_t slot) {
	MiqtVirtualQComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::currentTextChanged), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QComboBox_currentTextChanged(slot, sigval1);
	});
}

struct miqt_string QComboBox_tr2(const char* s, const char* c) {
	QString _ret = QComboBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QComboBox_tr3(const char* s, const char* c, int n) {
	QString _ret = QComboBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QComboBox_findText2(const QComboBox* self, struct miqt_string text, int flags) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->findText(text_QString, static_cast<Qt::MatchFlags>(flags));
}

int QComboBox_findData2(const QComboBox* self, QVariant* data, int role) {
	return self->findData(*data, static_cast<int>(role));
}

int QComboBox_findData3(const QComboBox* self, QVariant* data, int role, int flags) {
	return self->findData(*data, static_cast<int>(role), static_cast<Qt::MatchFlags>(flags));
}

QVariant* QComboBox_currentData1(const QComboBox* self, int role) {
	return new QVariant(self->currentData(static_cast<int>(role)));
}

QVariant* QComboBox_itemData2(const QComboBox* self, int index, int role) {
	return new QVariant(self->itemData(static_cast<int>(index), static_cast<int>(role)));
}

void QComboBox_addItem22(QComboBox* self, struct miqt_string text, QVariant* userData) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->addItem(text_QString, *userData);
}

void QComboBox_addItem3(QComboBox* self, QIcon* icon, struct miqt_string text, QVariant* userData) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->addItem(*icon, text_QString, *userData);
}

void QComboBox_insertItem3(QComboBox* self, int index, struct miqt_string text, QVariant* userData) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertItem(static_cast<int>(index), text_QString, *userData);
}

void QComboBox_insertItem4(QComboBox* self, int index, QIcon* icon, struct miqt_string text, QVariant* userData) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertItem(static_cast<int>(index), *icon, text_QString, *userData);
}

void QComboBox_setItemData3(QComboBox* self, int index, QVariant* value, int role) {
	self->setItemData(static_cast<int>(index), *value, static_cast<int>(role));
}

bool QComboBox_override_virtual_setModel(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setModel = slot;
	return true;
}

void QComboBox_virtualbase_setModel(void* self, QAbstractItemModel* model) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_setModel(model);
}

bool QComboBox_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QComboBox_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQComboBox*)(self) )->virtualbase_sizeHint();
}

bool QComboBox_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QComboBox_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQComboBox*)(self) )->virtualbase_minimumSizeHint();
}

bool QComboBox_override_virtual_showPopup(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showPopup = slot;
	return true;
}

void QComboBox_virtualbase_showPopup(void* self) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_showPopup();
}

bool QComboBox_override_virtual_hidePopup(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hidePopup = slot;
	return true;
}

void QComboBox_virtualbase_hidePopup(void* self) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_hidePopup();
}

bool QComboBox_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QComboBox_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQComboBox*)(self) )->virtualbase_event(event);
}

bool QComboBox_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QComboBox_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQComboBox*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QComboBox_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QComboBox_virtualbase_focusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_focusInEvent(e);
}

bool QComboBox_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QComboBox_virtualbase_focusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_focusOutEvent(e);
}

bool QComboBox_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QComboBox_virtualbase_changeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_changeEvent(e);
}

bool QComboBox_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QComboBox_virtualbase_resizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_resizeEvent(e);
}

bool QComboBox_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QComboBox_virtualbase_paintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_paintEvent(e);
}

bool QComboBox_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QComboBox_virtualbase_showEvent(void* self, QShowEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_showEvent(e);
}

bool QComboBox_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QComboBox_virtualbase_hideEvent(void* self, QHideEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_hideEvent(e);
}

bool QComboBox_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QComboBox_virtualbase_mousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_mousePressEvent(e);
}

bool QComboBox_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QComboBox_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_mouseReleaseEvent(e);
}

bool QComboBox_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QComboBox_virtualbase_keyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_keyPressEvent(e);
}

bool QComboBox_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QComboBox_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_keyReleaseEvent(e);
}

bool QComboBox_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QComboBox_virtualbase_wheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_wheelEvent(e);
}

bool QComboBox_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QComboBox_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* e) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_contextMenuEvent(e);
}

bool QComboBox_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QComboBox_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QComboBox_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QComboBox_virtualbase_initStyleOption(const void* self, QStyleOptionComboBox* option) {
	( (const MiqtVirtualQComboBox*)(self) )->virtualbase_initStyleOption(option);
}

bool QComboBox_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QComboBox_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQComboBox*)(self) )->virtualbase_devType();
}

bool QComboBox_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QComboBox_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_setVisible(visible);
}

bool QComboBox_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QComboBox_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQComboBox*)(self) )->virtualbase_heightForWidth(param1);
}

bool QComboBox_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QComboBox_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQComboBox*)(self) )->virtualbase_hasHeightForWidth();
}

bool QComboBox_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QComboBox_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQComboBox*)(self) )->virtualbase_paintEngine();
}

bool QComboBox_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QComboBox_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QComboBox_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QComboBox_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QComboBox_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QComboBox_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_enterEvent(event);
}

bool QComboBox_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QComboBox_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_leaveEvent(event);
}

bool QComboBox_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QComboBox_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_moveEvent(event);
}

bool QComboBox_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QComboBox_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_closeEvent(event);
}

bool QComboBox_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QComboBox_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_tabletEvent(event);
}

bool QComboBox_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QComboBox_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_actionEvent(event);
}

bool QComboBox_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QComboBox_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QComboBox_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QComboBox_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QComboBox_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QComboBox_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QComboBox_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QComboBox_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_dropEvent(event);
}

bool QComboBox_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QComboBox_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQComboBox*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QComboBox_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QComboBox_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQComboBox*)(self) )->virtualbase_metric(param1);
}

bool QComboBox_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QComboBox_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQComboBox*)(self) )->virtualbase_initPainter(painter);
}

bool QComboBox_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QComboBox_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQComboBox*)(self) )->virtualbase_redirected(offset);
}

bool QComboBox_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QComboBox_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQComboBox*)(self) )->virtualbase_sharedPainter();
}

bool QComboBox_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QComboBox_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQComboBox*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QComboBox_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QComboBox_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQComboBox*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QComboBox_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QComboBox_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_timerEvent(event);
}

bool QComboBox_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QComboBox_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_childEvent(event);
}

bool QComboBox_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QComboBox_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_customEvent(event);
}

bool QComboBox_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QComboBox_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_connectNotify(signal);
}

bool QComboBox_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QComboBox_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQComboBox*)(self) )->virtualbase_disconnectNotify(signal);
}

void QComboBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QComboBox_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QComboBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QComboBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QComboBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QComboBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QComboBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QComboBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QComboBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQComboBox* self_cast = dynamic_cast<MiqtVirtualQComboBox*>( (QComboBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QComboBox_delete(QComboBox* self) {
	delete self;
}

