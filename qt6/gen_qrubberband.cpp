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
#include <QRubberBand>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionRubberBand>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qrubberband.h>
#include "gen_qrubberband.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QRubberBand_event(QRubberBand*, intptr_t, QEvent*);
void miqt_exec_callback_QRubberBand_paintEvent(QRubberBand*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QRubberBand_changeEvent(QRubberBand*, intptr_t, QEvent*);
void miqt_exec_callback_QRubberBand_showEvent(QRubberBand*, intptr_t, QShowEvent*);
void miqt_exec_callback_QRubberBand_resizeEvent(QRubberBand*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QRubberBand_moveEvent(QRubberBand*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QRubberBand_initStyleOption(const QRubberBand*, intptr_t, QStyleOptionRubberBand*);
int miqt_exec_callback_QRubberBand_devType(const QRubberBand*, intptr_t);
void miqt_exec_callback_QRubberBand_setVisible(QRubberBand*, intptr_t, bool);
QSize* miqt_exec_callback_QRubberBand_sizeHint(const QRubberBand*, intptr_t);
QSize* miqt_exec_callback_QRubberBand_minimumSizeHint(const QRubberBand*, intptr_t);
int miqt_exec_callback_QRubberBand_heightForWidth(const QRubberBand*, intptr_t, int);
bool miqt_exec_callback_QRubberBand_hasHeightForWidth(const QRubberBand*, intptr_t);
QPaintEngine* miqt_exec_callback_QRubberBand_paintEngine(const QRubberBand*, intptr_t);
void miqt_exec_callback_QRubberBand_mousePressEvent(QRubberBand*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRubberBand_mouseReleaseEvent(QRubberBand*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRubberBand_mouseDoubleClickEvent(QRubberBand*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRubberBand_mouseMoveEvent(QRubberBand*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRubberBand_wheelEvent(QRubberBand*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QRubberBand_keyPressEvent(QRubberBand*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QRubberBand_keyReleaseEvent(QRubberBand*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QRubberBand_focusInEvent(QRubberBand*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QRubberBand_focusOutEvent(QRubberBand*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QRubberBand_enterEvent(QRubberBand*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QRubberBand_leaveEvent(QRubberBand*, intptr_t, QEvent*);
void miqt_exec_callback_QRubberBand_closeEvent(QRubberBand*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QRubberBand_contextMenuEvent(QRubberBand*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QRubberBand_tabletEvent(QRubberBand*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QRubberBand_actionEvent(QRubberBand*, intptr_t, QActionEvent*);
void miqt_exec_callback_QRubberBand_dragEnterEvent(QRubberBand*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QRubberBand_dragMoveEvent(QRubberBand*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QRubberBand_dragLeaveEvent(QRubberBand*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QRubberBand_dropEvent(QRubberBand*, intptr_t, QDropEvent*);
void miqt_exec_callback_QRubberBand_hideEvent(QRubberBand*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QRubberBand_nativeEvent(QRubberBand*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QRubberBand_metric(const QRubberBand*, intptr_t, int);
void miqt_exec_callback_QRubberBand_initPainter(const QRubberBand*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QRubberBand_redirected(const QRubberBand*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QRubberBand_sharedPainter(const QRubberBand*, intptr_t);
void miqt_exec_callback_QRubberBand_inputMethodEvent(QRubberBand*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QRubberBand_inputMethodQuery(const QRubberBand*, intptr_t, int);
bool miqt_exec_callback_QRubberBand_focusNextPrevChild(QRubberBand*, intptr_t, bool);
bool miqt_exec_callback_QRubberBand_eventFilter(QRubberBand*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QRubberBand_timerEvent(QRubberBand*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QRubberBand_childEvent(QRubberBand*, intptr_t, QChildEvent*);
void miqt_exec_callback_QRubberBand_customEvent(QRubberBand*, intptr_t, QEvent*);
void miqt_exec_callback_QRubberBand_connectNotify(QRubberBand*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QRubberBand_disconnectNotify(QRubberBand*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQRubberBand final : public QRubberBand {
public:

	MiqtVirtualQRubberBand(QRubberBand::Shape param1): QRubberBand(param1) {};
	MiqtVirtualQRubberBand(QRubberBand::Shape param1, QWidget* param2): QRubberBand(param1, param2) {};

	virtual ~MiqtVirtualQRubberBand() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QRubberBand::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QRubberBand_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QRubberBand::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QRubberBand::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QRubberBand_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* param1) {

		QRubberBand::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QRubberBand::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QRubberBand_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QRubberBand::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QRubberBand::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QRubberBand_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* param1) {

		QRubberBand::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QRubberBand::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QRubberBand_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* param1) {

		QRubberBand::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* param1) override {
		if (handle__moveEvent == 0) {
			QRubberBand::moveEvent(param1);
			return;
		}
		
		QMoveEvent* sigval1 = param1;

		miqt_exec_callback_QRubberBand_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* param1) {

		QRubberBand::moveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionRubberBand* option) const override {
		if (handle__initStyleOption == 0) {
			QRubberBand::initStyleOption(option);
			return;
		}
		
		QStyleOptionRubberBand* sigval1 = option;

		miqt_exec_callback_QRubberBand_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initStyleOption(QStyleOptionRubberBand* option) const {

		QRubberBand::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QRubberBand::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QRubberBand_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QRubberBand::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QRubberBand::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QRubberBand_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QRubberBand::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QRubberBand::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QRubberBand_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QRubberBand::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QRubberBand::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QRubberBand_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QRubberBand::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QRubberBand::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QRubberBand_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QRubberBand::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QRubberBand::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QRubberBand_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QRubberBand::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QRubberBand::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QRubberBand_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QRubberBand::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QRubberBand::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QRubberBand::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QRubberBand::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QRubberBand::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QRubberBand::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QRubberBand::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QRubberBand::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QRubberBand::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QRubberBand::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QRubberBand::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QRubberBand::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QRubberBand::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QRubberBand::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QRubberBand::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QRubberBand::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QRubberBand::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QRubberBand::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QRubberBand::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QRubberBand::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QRubberBand::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QRubberBand::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QRubberBand::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QRubberBand::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QRubberBand::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QRubberBand::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QRubberBand::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QRubberBand::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QRubberBand::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QRubberBand::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QRubberBand::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QRubberBand::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QRubberBand::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QRubberBand::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QRubberBand::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QRubberBand::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QRubberBand::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QRubberBand::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QRubberBand::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QRubberBand::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QRubberBand::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QRubberBand::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QRubberBand_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QRubberBand::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QRubberBand::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QRubberBand_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QRubberBand::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QRubberBand::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QRubberBand_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QRubberBand::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QRubberBand::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QRubberBand_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QRubberBand::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QRubberBand::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QRubberBand_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QRubberBand::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QRubberBand::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QRubberBand_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QRubberBand::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QRubberBand::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QRubberBand_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QRubberBand::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QRubberBand::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QRubberBand_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QRubberBand::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QRubberBand::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QRubberBand_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QRubberBand::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QRubberBand::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QRubberBand::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QRubberBand::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QRubberBand::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QRubberBand::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QRubberBand::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QRubberBand::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRubberBand_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QRubberBand::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QRubberBand::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRubberBand_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QRubberBand::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QRubberBand_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QRubberBand_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QRubberBand_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QRubberBand_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QRubberBand_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QRubberBand_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QRubberBand_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QRubberBand_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QRubberBand_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QRubberBand* QRubberBand_new(int param1) {
	return new MiqtVirtualQRubberBand(static_cast<QRubberBand::Shape>(param1));
}

QRubberBand* QRubberBand_new2(int param1, QWidget* param2) {
	return new MiqtVirtualQRubberBand(static_cast<QRubberBand::Shape>(param1), param2);
}

void QRubberBand_virtbase(QRubberBand* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QRubberBand_metaObject(const QRubberBand* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRubberBand_metacast(QRubberBand* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QRubberBand_tr(const char* s) {
	QString _ret = QRubberBand::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRubberBand_shape(const QRubberBand* self) {
	QRubberBand::Shape _ret = self->shape();
	return static_cast<int>(_ret);
}

void QRubberBand_setGeometry(QRubberBand* self, QRect* r) {
	self->setGeometry(*r);
}

void QRubberBand_setGeometry2(QRubberBand* self, int x, int y, int w, int h) {
	self->setGeometry(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QRubberBand_move(QRubberBand* self, int x, int y) {
	self->move(static_cast<int>(x), static_cast<int>(y));
}

void QRubberBand_moveWithQPoint(QRubberBand* self, QPoint* p) {
	self->move(*p);
}

void QRubberBand_resize(QRubberBand* self, int w, int h) {
	self->resize(static_cast<int>(w), static_cast<int>(h));
}

void QRubberBand_resizeWithQSize(QRubberBand* self, QSize* s) {
	self->resize(*s);
}

struct miqt_string QRubberBand_tr2(const char* s, const char* c) {
	QString _ret = QRubberBand::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRubberBand_tr3(const char* s, const char* c, int n) {
	QString _ret = QRubberBand::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QRubberBand_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QRubberBand_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQRubberBand*)(self) )->virtualbase_event(e);
}

bool QRubberBand_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QRubberBand_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_paintEvent(param1);
}

bool QRubberBand_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QRubberBand_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_changeEvent(param1);
}

bool QRubberBand_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QRubberBand_virtualbase_showEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_showEvent(param1);
}

bool QRubberBand_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QRubberBand_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_resizeEvent(param1);
}

bool QRubberBand_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QRubberBand_virtualbase_moveEvent(void* self, QMoveEvent* param1) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_moveEvent(param1);
}

bool QRubberBand_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QRubberBand_virtualbase_initStyleOption(const void* self, QStyleOptionRubberBand* option) {
	( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_initStyleOption(option);
}

bool QRubberBand_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QRubberBand_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_devType();
}

bool QRubberBand_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QRubberBand_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_setVisible(visible);
}

bool QRubberBand_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QRubberBand_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_sizeHint();
}

bool QRubberBand_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QRubberBand_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_minimumSizeHint();
}

bool QRubberBand_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QRubberBand_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_heightForWidth(param1);
}

bool QRubberBand_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QRubberBand_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_hasHeightForWidth();
}

bool QRubberBand_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QRubberBand_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_paintEngine();
}

bool QRubberBand_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QRubberBand_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_mousePressEvent(event);
}

bool QRubberBand_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QRubberBand_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QRubberBand_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QRubberBand_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QRubberBand_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QRubberBand_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QRubberBand_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QRubberBand_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_wheelEvent(event);
}

bool QRubberBand_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QRubberBand_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_keyPressEvent(event);
}

bool QRubberBand_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QRubberBand_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QRubberBand_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QRubberBand_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_focusInEvent(event);
}

bool QRubberBand_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QRubberBand_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_focusOutEvent(event);
}

bool QRubberBand_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QRubberBand_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_enterEvent(event);
}

bool QRubberBand_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QRubberBand_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_leaveEvent(event);
}

bool QRubberBand_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QRubberBand_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_closeEvent(event);
}

bool QRubberBand_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QRubberBand_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QRubberBand_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QRubberBand_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_tabletEvent(event);
}

bool QRubberBand_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QRubberBand_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_actionEvent(event);
}

bool QRubberBand_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QRubberBand_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QRubberBand_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QRubberBand_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QRubberBand_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QRubberBand_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QRubberBand_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QRubberBand_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_dropEvent(event);
}

bool QRubberBand_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QRubberBand_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_hideEvent(event);
}

bool QRubberBand_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QRubberBand_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQRubberBand*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QRubberBand_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QRubberBand_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_metric(param1);
}

bool QRubberBand_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QRubberBand_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_initPainter(painter);
}

bool QRubberBand_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QRubberBand_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_redirected(offset);
}

bool QRubberBand_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QRubberBand_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_sharedPainter();
}

bool QRubberBand_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QRubberBand_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QRubberBand_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QRubberBand_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QRubberBand_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QRubberBand_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQRubberBand*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QRubberBand_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QRubberBand_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQRubberBand*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QRubberBand_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QRubberBand_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_timerEvent(event);
}

bool QRubberBand_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QRubberBand_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_childEvent(event);
}

bool QRubberBand_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QRubberBand_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_customEvent(event);
}

bool QRubberBand_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QRubberBand_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_connectNotify(signal);
}

bool QRubberBand_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QRubberBand_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_disconnectNotify(signal);
}

void QRubberBand_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QRubberBand_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QRubberBand_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QRubberBand_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QRubberBand_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QRubberBand_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QRubberBand_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QRubberBand_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QRubberBand_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQRubberBand* self_cast = dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QRubberBand_delete(QRubberBand* self) {
	delete self;
}

