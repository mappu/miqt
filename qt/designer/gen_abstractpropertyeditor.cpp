#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDesignerFormEditorInterface>
#include <QDesignerPropertyEditorInterface>
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
#include <abstractpropertyeditor.h>
#include "gen_abstractpropertyeditor.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QDesignerPropertyEditorInterface_propertyChanged(intptr_t, struct miqt_string, QVariant*);
QDesignerFormEditorInterface* miqt_exec_callback_QDesignerPropertyEditorInterface_core(const QDesignerPropertyEditorInterface*, intptr_t);
bool miqt_exec_callback_QDesignerPropertyEditorInterface_isReadOnly(const QDesignerPropertyEditorInterface*, intptr_t);
QObject* miqt_exec_callback_QDesignerPropertyEditorInterface_object(const QDesignerPropertyEditorInterface*, intptr_t);
struct miqt_string miqt_exec_callback_QDesignerPropertyEditorInterface_currentPropertyName(const QDesignerPropertyEditorInterface*, intptr_t);
void miqt_exec_callback_QDesignerPropertyEditorInterface_setObject(QDesignerPropertyEditorInterface*, intptr_t, QObject*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_setPropertyValue(QDesignerPropertyEditorInterface*, intptr_t, struct miqt_string, QVariant*, bool);
void miqt_exec_callback_QDesignerPropertyEditorInterface_setReadOnly(QDesignerPropertyEditorInterface*, intptr_t, bool);
int miqt_exec_callback_QDesignerPropertyEditorInterface_devType(const QDesignerPropertyEditorInterface*, intptr_t);
void miqt_exec_callback_QDesignerPropertyEditorInterface_setVisible(QDesignerPropertyEditorInterface*, intptr_t, bool);
QSize* miqt_exec_callback_QDesignerPropertyEditorInterface_sizeHint(const QDesignerPropertyEditorInterface*, intptr_t);
QSize* miqt_exec_callback_QDesignerPropertyEditorInterface_minimumSizeHint(const QDesignerPropertyEditorInterface*, intptr_t);
int miqt_exec_callback_QDesignerPropertyEditorInterface_heightForWidth(const QDesignerPropertyEditorInterface*, intptr_t, int);
bool miqt_exec_callback_QDesignerPropertyEditorInterface_hasHeightForWidth(const QDesignerPropertyEditorInterface*, intptr_t);
QPaintEngine* miqt_exec_callback_QDesignerPropertyEditorInterface_paintEngine(const QDesignerPropertyEditorInterface*, intptr_t);
bool miqt_exec_callback_QDesignerPropertyEditorInterface_event(QDesignerPropertyEditorInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_mousePressEvent(QDesignerPropertyEditorInterface*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_mouseReleaseEvent(QDesignerPropertyEditorInterface*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_mouseDoubleClickEvent(QDesignerPropertyEditorInterface*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_mouseMoveEvent(QDesignerPropertyEditorInterface*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_wheelEvent(QDesignerPropertyEditorInterface*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_keyPressEvent(QDesignerPropertyEditorInterface*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_keyReleaseEvent(QDesignerPropertyEditorInterface*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_focusInEvent(QDesignerPropertyEditorInterface*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_focusOutEvent(QDesignerPropertyEditorInterface*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_enterEvent(QDesignerPropertyEditorInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_leaveEvent(QDesignerPropertyEditorInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_paintEvent(QDesignerPropertyEditorInterface*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_moveEvent(QDesignerPropertyEditorInterface*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_resizeEvent(QDesignerPropertyEditorInterface*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_closeEvent(QDesignerPropertyEditorInterface*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_contextMenuEvent(QDesignerPropertyEditorInterface*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_tabletEvent(QDesignerPropertyEditorInterface*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_actionEvent(QDesignerPropertyEditorInterface*, intptr_t, QActionEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_dragEnterEvent(QDesignerPropertyEditorInterface*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_dragMoveEvent(QDesignerPropertyEditorInterface*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_dragLeaveEvent(QDesignerPropertyEditorInterface*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_dropEvent(QDesignerPropertyEditorInterface*, intptr_t, QDropEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_showEvent(QDesignerPropertyEditorInterface*, intptr_t, QShowEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_hideEvent(QDesignerPropertyEditorInterface*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QDesignerPropertyEditorInterface_nativeEvent(QDesignerPropertyEditorInterface*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_changeEvent(QDesignerPropertyEditorInterface*, intptr_t, QEvent*);
int miqt_exec_callback_QDesignerPropertyEditorInterface_metric(const QDesignerPropertyEditorInterface*, intptr_t, int);
void miqt_exec_callback_QDesignerPropertyEditorInterface_initPainter(const QDesignerPropertyEditorInterface*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QDesignerPropertyEditorInterface_redirected(const QDesignerPropertyEditorInterface*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QDesignerPropertyEditorInterface_sharedPainter(const QDesignerPropertyEditorInterface*, intptr_t);
void miqt_exec_callback_QDesignerPropertyEditorInterface_inputMethodEvent(QDesignerPropertyEditorInterface*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QDesignerPropertyEditorInterface_inputMethodQuery(const QDesignerPropertyEditorInterface*, intptr_t, int);
bool miqt_exec_callback_QDesignerPropertyEditorInterface_focusNextPrevChild(QDesignerPropertyEditorInterface*, intptr_t, bool);
bool miqt_exec_callback_QDesignerPropertyEditorInterface_eventFilter(QDesignerPropertyEditorInterface*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_timerEvent(QDesignerPropertyEditorInterface*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_childEvent(QDesignerPropertyEditorInterface*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_customEvent(QDesignerPropertyEditorInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_connectNotify(QDesignerPropertyEditorInterface*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDesignerPropertyEditorInterface_disconnectNotify(QDesignerPropertyEditorInterface*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerPropertyEditorInterface final : public QDesignerPropertyEditorInterface {
public:

	MiqtVirtualQDesignerPropertyEditorInterface(QWidget* parent): QDesignerPropertyEditorInterface(parent) {}
	MiqtVirtualQDesignerPropertyEditorInterface(QWidget* parent, Qt::WindowFlags flags): QDesignerPropertyEditorInterface(parent, flags) {}

	virtual ~MiqtVirtualQDesignerPropertyEditorInterface() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__core = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerFormEditorInterface* core() const override {
		if (handle__core == 0) {
			return QDesignerPropertyEditorInterface::core();
		}

		QDesignerFormEditorInterface* callback_return_value = miqt_exec_callback_QDesignerPropertyEditorInterface_core(this, handle__core);
		return callback_return_value;
	}

	friend QDesignerFormEditorInterface* QDesignerPropertyEditorInterface_virtualbase_core(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isReadOnly = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isReadOnly() const override {
		if (handle__isReadOnly == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		bool callback_return_value = miqt_exec_callback_QDesignerPropertyEditorInterface_isReadOnly(this, handle__isReadOnly);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__object = 0;

	// Subclass to allow providing a Go implementation
	virtual QObject* object() const override {
		if (handle__object == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QObject* callback_return_value = miqt_exec_callback_QDesignerPropertyEditorInterface_object(this, handle__object);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__currentPropertyName = 0;

	// Subclass to allow providing a Go implementation
	virtual QString currentPropertyName() const override {
		if (handle__currentPropertyName == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerPropertyEditorInterface_currentPropertyName(this, handle__currentPropertyName);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setObject = 0;

	// Subclass to allow providing a Go implementation
	virtual void setObject(QObject* object) override {
		if (handle__setObject == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QObject* sigval1 = object;
		miqt_exec_callback_QDesignerPropertyEditorInterface_setObject(this, handle__setObject, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPropertyValue = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPropertyValue(const QString& name, const QVariant& value, bool changed) override {
		if (handle__setPropertyValue == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		bool sigval3 = changed;
		miqt_exec_callback_QDesignerPropertyEditorInterface_setPropertyValue(this, handle__setPropertyValue, sigval1, sigval2, sigval3);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setReadOnly = 0;

	// Subclass to allow providing a Go implementation
	virtual void setReadOnly(bool readOnly) override {
		if (handle__setReadOnly == 0) {
			return; // Pure virtual, there is no base we can call
		}

		bool sigval1 = readOnly;
		miqt_exec_callback_QDesignerPropertyEditorInterface_setReadOnly(this, handle__setReadOnly, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QDesignerPropertyEditorInterface::devType();
		}

		int callback_return_value = miqt_exec_callback_QDesignerPropertyEditorInterface_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerPropertyEditorInterface_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QDesignerPropertyEditorInterface::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QDesignerPropertyEditorInterface_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QDesignerPropertyEditorInterface::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QDesignerPropertyEditorInterface_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QDesignerPropertyEditorInterface_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QDesignerPropertyEditorInterface::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QDesignerPropertyEditorInterface_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QDesignerPropertyEditorInterface_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QDesignerPropertyEditorInterface::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QDesignerPropertyEditorInterface_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerPropertyEditorInterface_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QDesignerPropertyEditorInterface::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QDesignerPropertyEditorInterface_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QDesignerPropertyEditorInterface_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QDesignerPropertyEditorInterface::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QDesignerPropertyEditorInterface_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QDesignerPropertyEditorInterface_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDesignerPropertyEditorInterface::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerPropertyEditorInterface_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QDesignerPropertyEditorInterface_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QDesignerPropertyEditorInterface::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QDesignerPropertyEditorInterface::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QDesignerPropertyEditorInterface::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QDesignerPropertyEditorInterface::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QDesignerPropertyEditorInterface::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QDesignerPropertyEditorInterface::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QDesignerPropertyEditorInterface::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QDesignerPropertyEditorInterface::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QDesignerPropertyEditorInterface::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QDesignerPropertyEditorInterface::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QDesignerPropertyEditorInterface::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QDesignerPropertyEditorInterface::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QDesignerPropertyEditorInterface::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QDesignerPropertyEditorInterface::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QDesignerPropertyEditorInterface::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QDesignerPropertyEditorInterface::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QDesignerPropertyEditorInterface::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QDesignerPropertyEditorInterface::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QDesignerPropertyEditorInterface::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QDesignerPropertyEditorInterface::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QDesignerPropertyEditorInterface::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QDesignerPropertyEditorInterface::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QDesignerPropertyEditorInterface::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QDesignerPropertyEditorInterface::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QDesignerPropertyEditorInterface::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QDesignerPropertyEditorInterface_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QDesignerPropertyEditorInterface_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QDesignerPropertyEditorInterface::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QDesignerPropertyEditorInterface_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QDesignerPropertyEditorInterface::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QDesignerPropertyEditorInterface_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerPropertyEditorInterface_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QDesignerPropertyEditorInterface::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QDesignerPropertyEditorInterface_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QDesignerPropertyEditorInterface::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QDesignerPropertyEditorInterface_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QDesignerPropertyEditorInterface_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QDesignerPropertyEditorInterface::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QDesignerPropertyEditorInterface_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QDesignerPropertyEditorInterface_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QDesignerPropertyEditorInterface::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QDesignerPropertyEditorInterface_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QDesignerPropertyEditorInterface::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QDesignerPropertyEditorInterface_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QDesignerPropertyEditorInterface_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QDesignerPropertyEditorInterface::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QDesignerPropertyEditorInterface_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QDesignerPropertyEditorInterface_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDesignerPropertyEditorInterface::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerPropertyEditorInterface_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QDesignerPropertyEditorInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDesignerPropertyEditorInterface::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDesignerPropertyEditorInterface::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDesignerPropertyEditorInterface::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerPropertyEditorInterface_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDesignerPropertyEditorInterface::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerPropertyEditorInterface_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDesignerPropertyEditorInterface::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerPropertyEditorInterface_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QDesignerPropertyEditorInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QDesignerPropertyEditorInterface_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QDesignerPropertyEditorInterface_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QDesignerPropertyEditorInterface_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QDesignerPropertyEditorInterface_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QDesignerPropertyEditorInterface_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QDesignerPropertyEditorInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerPropertyEditorInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerPropertyEditorInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDesignerPropertyEditorInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDesignerPropertyEditorInterface* QDesignerPropertyEditorInterface_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQDesignerPropertyEditorInterface(parent);
}

QDesignerPropertyEditorInterface* QDesignerPropertyEditorInterface_new2(QWidget* parent, int flags) {
	return new (std::nothrow) MiqtVirtualQDesignerPropertyEditorInterface(parent, static_cast<Qt::WindowFlags>(flags));
}

void QDesignerPropertyEditorInterface_virtbase(QDesignerPropertyEditorInterface* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QDesignerPropertyEditorInterface_metaObject(const QDesignerPropertyEditorInterface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDesignerPropertyEditorInterface_metacast(QDesignerPropertyEditorInterface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDesignerPropertyEditorInterface_tr(const char* s) {
	QString _ret = QDesignerPropertyEditorInterface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerPropertyEditorInterface_trUtf8(const char* s) {
	QString _ret = QDesignerPropertyEditorInterface::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDesignerFormEditorInterface* QDesignerPropertyEditorInterface_core(const QDesignerPropertyEditorInterface* self) {
	return self->core();
}

bool QDesignerPropertyEditorInterface_isReadOnly(const QDesignerPropertyEditorInterface* self) {
	return self->isReadOnly();
}

QObject* QDesignerPropertyEditorInterface_object(const QDesignerPropertyEditorInterface* self) {
	return self->object();
}

struct miqt_string QDesignerPropertyEditorInterface_currentPropertyName(const QDesignerPropertyEditorInterface* self) {
	QString _ret = self->currentPropertyName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerPropertyEditorInterface_propertyChanged(QDesignerPropertyEditorInterface* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->propertyChanged(name_QString, *value);
}

void QDesignerPropertyEditorInterface_connect_propertyChanged(QDesignerPropertyEditorInterface* self, intptr_t slot) {
	QDesignerPropertyEditorInterface::connect(self, static_cast<void (QDesignerPropertyEditorInterface::*)(const QString&, const QVariant&)>(&QDesignerPropertyEditorInterface::propertyChanged), self, [=](const QString& name, const QVariant& value) {
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QDesignerPropertyEditorInterface_propertyChanged(slot, sigval1, sigval2);
	});
}

void QDesignerPropertyEditorInterface_setObject(QDesignerPropertyEditorInterface* self, QObject* object) {
	self->setObject(object);
}

void QDesignerPropertyEditorInterface_setPropertyValue(QDesignerPropertyEditorInterface* self, struct miqt_string name, QVariant* value, bool changed) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setPropertyValue(name_QString, *value, changed);
}

void QDesignerPropertyEditorInterface_setReadOnly(QDesignerPropertyEditorInterface* self, bool readOnly) {
	self->setReadOnly(readOnly);
}

struct miqt_string QDesignerPropertyEditorInterface_tr2(const char* s, const char* c) {
	QString _ret = QDesignerPropertyEditorInterface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerPropertyEditorInterface_tr3(const char* s, const char* c, int n) {
	QString _ret = QDesignerPropertyEditorInterface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerPropertyEditorInterface_trUtf82(const char* s, const char* c) {
	QString _ret = QDesignerPropertyEditorInterface::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerPropertyEditorInterface_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QDesignerPropertyEditorInterface::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDesignerPropertyEditorInterface_override_virtual_core(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__core = slot;
	return true;
}

QDesignerFormEditorInterface* QDesignerPropertyEditorInterface_virtualbase_core(const void* self) {
	return static_cast<const MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::core();
}

bool QDesignerPropertyEditorInterface_override_virtual_isReadOnly(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isReadOnly = slot;
	return true;
}

bool QDesignerPropertyEditorInterface_override_virtual_object(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__object = slot;
	return true;
}

bool QDesignerPropertyEditorInterface_override_virtual_currentPropertyName(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__currentPropertyName = slot;
	return true;
}

bool QDesignerPropertyEditorInterface_override_virtual_setObject(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setObject = slot;
	return true;
}

bool QDesignerPropertyEditorInterface_override_virtual_setPropertyValue(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPropertyValue = slot;
	return true;
}

bool QDesignerPropertyEditorInterface_override_virtual_setReadOnly(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setReadOnly = slot;
	return true;
}

bool QDesignerPropertyEditorInterface_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QDesignerPropertyEditorInterface_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::devType();
}

bool QDesignerPropertyEditorInterface_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::setVisible(visible);
}

bool QDesignerPropertyEditorInterface_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QDesignerPropertyEditorInterface_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::sizeHint());
}

bool QDesignerPropertyEditorInterface_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QDesignerPropertyEditorInterface_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::minimumSizeHint());
}

bool QDesignerPropertyEditorInterface_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QDesignerPropertyEditorInterface_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::heightForWidth(static_cast<int>(param1));
}

bool QDesignerPropertyEditorInterface_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QDesignerPropertyEditorInterface_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::hasHeightForWidth();
}

bool QDesignerPropertyEditorInterface_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QDesignerPropertyEditorInterface_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::paintEngine();
}

bool QDesignerPropertyEditorInterface_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QDesignerPropertyEditorInterface_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::event(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::mousePressEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::mouseReleaseEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::mouseDoubleClickEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::mouseMoveEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::wheelEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::keyPressEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::keyReleaseEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::focusInEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::focusOutEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::enterEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::leaveEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::paintEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::moveEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::resizeEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::closeEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::contextMenuEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::tabletEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::actionEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::dragEnterEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::dragMoveEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::dragLeaveEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::dropEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::showEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::hideEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QDesignerPropertyEditorInterface_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QDesignerPropertyEditorInterface_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::changeEvent(param1);
}

bool QDesignerPropertyEditorInterface_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QDesignerPropertyEditorInterface_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::metric(static_cast<MiqtVirtualQDesignerPropertyEditorInterface::PaintDeviceMetric>(param1));
}

bool QDesignerPropertyEditorInterface_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::initPainter(painter);
}

bool QDesignerPropertyEditorInterface_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QDesignerPropertyEditorInterface_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::redirected(offset);
}

bool QDesignerPropertyEditorInterface_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QDesignerPropertyEditorInterface_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::sharedPainter();
}

bool QDesignerPropertyEditorInterface_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::inputMethodEvent(param1);
}

bool QDesignerPropertyEditorInterface_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QDesignerPropertyEditorInterface_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QDesignerPropertyEditorInterface_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QDesignerPropertyEditorInterface_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::focusNextPrevChild(next);
}

bool QDesignerPropertyEditorInterface_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDesignerPropertyEditorInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::eventFilter(watched, event);
}

bool QDesignerPropertyEditorInterface_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::timerEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::childEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::customEvent(event);
}

bool QDesignerPropertyEditorInterface_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::connectNotify(*signal);
}

bool QDesignerPropertyEditorInterface_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDesignerPropertyEditorInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerPropertyEditorInterface*>(self)->QDesignerPropertyEditorInterface::disconnectNotify(*signal);
}

void QDesignerPropertyEditorInterface_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QDesignerPropertyEditorInterface_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QDesignerPropertyEditorInterface_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QDesignerPropertyEditorInterface_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QDesignerPropertyEditorInterface_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QDesignerPropertyEditorInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QDesignerPropertyEditorInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QDesignerPropertyEditorInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QDesignerPropertyEditorInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDesignerPropertyEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertyEditorInterface*>( (QDesignerPropertyEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QDesignerPropertyEditorInterface_delete(QDesignerPropertyEditorInterface* self) {
	delete self;
}

