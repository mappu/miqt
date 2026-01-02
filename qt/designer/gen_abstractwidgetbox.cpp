#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDesignerDnDItemInterface>
#include <QDesignerWidgetBoxInterface>
#define WORKAROUND_INNER_CLASS_DEFINITION_QDesignerWidgetBoxInterface__Category
#define WORKAROUND_INNER_CLASS_DEFINITION_QDesignerWidgetBoxInterface__Widget
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
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
#include <abstractwidgetbox.h>
#include "gen_abstractwidgetbox.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QDesignerWidgetBoxInterface_categoryCount(const QDesignerWidgetBoxInterface*, intptr_t);
QDesignerWidgetBoxInterface__Category* miqt_exec_callback_QDesignerWidgetBoxInterface_category(const QDesignerWidgetBoxInterface*, intptr_t, int);
void miqt_exec_callback_QDesignerWidgetBoxInterface_addCategory(QDesignerWidgetBoxInterface*, intptr_t, QDesignerWidgetBoxInterface__Category*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_removeCategory(QDesignerWidgetBoxInterface*, intptr_t, int);
int miqt_exec_callback_QDesignerWidgetBoxInterface_widgetCount(const QDesignerWidgetBoxInterface*, intptr_t, int);
QDesignerWidgetBoxInterface__Widget* miqt_exec_callback_QDesignerWidgetBoxInterface_widget(const QDesignerWidgetBoxInterface*, intptr_t, int, int);
void miqt_exec_callback_QDesignerWidgetBoxInterface_addWidget(QDesignerWidgetBoxInterface*, intptr_t, int, QDesignerWidgetBoxInterface__Widget*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_removeWidget(QDesignerWidgetBoxInterface*, intptr_t, int, int);
void miqt_exec_callback_QDesignerWidgetBoxInterface_dropWidgets(QDesignerWidgetBoxInterface*, intptr_t, struct miqt_array /* of QDesignerDnDItemInterface* */ , QPoint*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_setFileName(QDesignerWidgetBoxInterface*, intptr_t, struct miqt_string);
struct miqt_string miqt_exec_callback_QDesignerWidgetBoxInterface_fileName(const QDesignerWidgetBoxInterface*, intptr_t);
bool miqt_exec_callback_QDesignerWidgetBoxInterface_load(QDesignerWidgetBoxInterface*, intptr_t);
bool miqt_exec_callback_QDesignerWidgetBoxInterface_save(QDesignerWidgetBoxInterface*, intptr_t);
int miqt_exec_callback_QDesignerWidgetBoxInterface_devType(const QDesignerWidgetBoxInterface*, intptr_t);
void miqt_exec_callback_QDesignerWidgetBoxInterface_setVisible(QDesignerWidgetBoxInterface*, intptr_t, bool);
QSize* miqt_exec_callback_QDesignerWidgetBoxInterface_sizeHint(const QDesignerWidgetBoxInterface*, intptr_t);
QSize* miqt_exec_callback_QDesignerWidgetBoxInterface_minimumSizeHint(const QDesignerWidgetBoxInterface*, intptr_t);
int miqt_exec_callback_QDesignerWidgetBoxInterface_heightForWidth(const QDesignerWidgetBoxInterface*, intptr_t, int);
bool miqt_exec_callback_QDesignerWidgetBoxInterface_hasHeightForWidth(const QDesignerWidgetBoxInterface*, intptr_t);
QPaintEngine* miqt_exec_callback_QDesignerWidgetBoxInterface_paintEngine(const QDesignerWidgetBoxInterface*, intptr_t);
bool miqt_exec_callback_QDesignerWidgetBoxInterface_event(QDesignerWidgetBoxInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_mousePressEvent(QDesignerWidgetBoxInterface*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_mouseReleaseEvent(QDesignerWidgetBoxInterface*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_mouseDoubleClickEvent(QDesignerWidgetBoxInterface*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_mouseMoveEvent(QDesignerWidgetBoxInterface*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_wheelEvent(QDesignerWidgetBoxInterface*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_keyPressEvent(QDesignerWidgetBoxInterface*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_keyReleaseEvent(QDesignerWidgetBoxInterface*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_focusInEvent(QDesignerWidgetBoxInterface*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_focusOutEvent(QDesignerWidgetBoxInterface*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_enterEvent(QDesignerWidgetBoxInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_leaveEvent(QDesignerWidgetBoxInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_paintEvent(QDesignerWidgetBoxInterface*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_moveEvent(QDesignerWidgetBoxInterface*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_resizeEvent(QDesignerWidgetBoxInterface*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_closeEvent(QDesignerWidgetBoxInterface*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_contextMenuEvent(QDesignerWidgetBoxInterface*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_tabletEvent(QDesignerWidgetBoxInterface*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_actionEvent(QDesignerWidgetBoxInterface*, intptr_t, QActionEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_dragEnterEvent(QDesignerWidgetBoxInterface*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_dragMoveEvent(QDesignerWidgetBoxInterface*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_dragLeaveEvent(QDesignerWidgetBoxInterface*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_dropEvent(QDesignerWidgetBoxInterface*, intptr_t, QDropEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_showEvent(QDesignerWidgetBoxInterface*, intptr_t, QShowEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_hideEvent(QDesignerWidgetBoxInterface*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QDesignerWidgetBoxInterface_nativeEvent(QDesignerWidgetBoxInterface*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_changeEvent(QDesignerWidgetBoxInterface*, intptr_t, QEvent*);
int miqt_exec_callback_QDesignerWidgetBoxInterface_metric(const QDesignerWidgetBoxInterface*, intptr_t, int);
void miqt_exec_callback_QDesignerWidgetBoxInterface_initPainter(const QDesignerWidgetBoxInterface*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QDesignerWidgetBoxInterface_redirected(const QDesignerWidgetBoxInterface*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QDesignerWidgetBoxInterface_sharedPainter(const QDesignerWidgetBoxInterface*, intptr_t);
void miqt_exec_callback_QDesignerWidgetBoxInterface_inputMethodEvent(QDesignerWidgetBoxInterface*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QDesignerWidgetBoxInterface_inputMethodQuery(const QDesignerWidgetBoxInterface*, intptr_t, int);
bool miqt_exec_callback_QDesignerWidgetBoxInterface_focusNextPrevChild(QDesignerWidgetBoxInterface*, intptr_t, bool);
bool miqt_exec_callback_QDesignerWidgetBoxInterface_eventFilter(QDesignerWidgetBoxInterface*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_timerEvent(QDesignerWidgetBoxInterface*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_childEvent(QDesignerWidgetBoxInterface*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_customEvent(QDesignerWidgetBoxInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_connectNotify(QDesignerWidgetBoxInterface*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDesignerWidgetBoxInterface_disconnectNotify(QDesignerWidgetBoxInterface*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerWidgetBoxInterface final : public QDesignerWidgetBoxInterface {
public:

	MiqtVirtualQDesignerWidgetBoxInterface(QWidget* parent): QDesignerWidgetBoxInterface(parent) {}
	MiqtVirtualQDesignerWidgetBoxInterface(): QDesignerWidgetBoxInterface() {}
	MiqtVirtualQDesignerWidgetBoxInterface(QWidget* parent, Qt::WindowFlags flags): QDesignerWidgetBoxInterface(parent, flags) {}

	virtual ~MiqtVirtualQDesignerWidgetBoxInterface() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__categoryCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int categoryCount() const override {
		if (handle__categoryCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_categoryCount(this, handle__categoryCount);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__category = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerWidgetBoxInterface::Category category(int cat_idx) const override {
		if (handle__category == 0) {
			return QDesignerWidgetBoxInterface::Category(); // Pure virtual, there is no base we can call
		}

		int sigval1 = cat_idx;
		QDesignerWidgetBoxInterface__Category* callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_category(this, handle__category, sigval1);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__addCategory = 0;

	// Subclass to allow providing a Go implementation
	virtual void addCategory(const QDesignerWidgetBoxInterface::Category& cat) override {
		if (handle__addCategory == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QDesignerWidgetBoxInterface::Category& cat_ret = cat;
		// Cast returned reference into pointer
		QDesignerWidgetBoxInterface__Category* sigval1 = const_cast<QDesignerWidgetBoxInterface::Category*>(&cat_ret);
		miqt_exec_callback_QDesignerWidgetBoxInterface_addCategory(this, handle__addCategory, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeCategory = 0;

	// Subclass to allow providing a Go implementation
	virtual void removeCategory(int cat_idx) override {
		if (handle__removeCategory == 0) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = cat_idx;
		miqt_exec_callback_QDesignerWidgetBoxInterface_removeCategory(this, handle__removeCategory, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int widgetCount(int cat_idx) const override {
		if (handle__widgetCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		int sigval1 = cat_idx;
		int callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_widgetCount(this, handle__widgetCount, sigval1);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widget = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerWidgetBoxInterface::Widget widget(int cat_idx, int wgt_idx) const override {
		if (handle__widget == 0) {
			return QDesignerWidgetBoxInterface::Widget(); // Pure virtual, there is no base we can call
		}

		int sigval1 = cat_idx;
		int sigval2 = wgt_idx;
		QDesignerWidgetBoxInterface__Widget* callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_widget(this, handle__widget, sigval1, sigval2);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__addWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual void addWidget(int cat_idx, const QDesignerWidgetBoxInterface::Widget& wgt) override {
		if (handle__addWidget == 0) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = cat_idx;
		const QDesignerWidgetBoxInterface::Widget& wgt_ret = wgt;
		// Cast returned reference into pointer
		QDesignerWidgetBoxInterface__Widget* sigval2 = const_cast<QDesignerWidgetBoxInterface::Widget*>(&wgt_ret);
		miqt_exec_callback_QDesignerWidgetBoxInterface_addWidget(this, handle__addWidget, sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual void removeWidget(int cat_idx, int wgt_idx) override {
		if (handle__removeWidget == 0) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = cat_idx;
		int sigval2 = wgt_idx;
		miqt_exec_callback_QDesignerWidgetBoxInterface_removeWidget(this, handle__removeWidget, sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropWidgets = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropWidgets(const QList<QDesignerDnDItemInterface *>& item_list, const QPoint& global_mouse_pos) override {
		if (handle__dropWidgets == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QList<QDesignerDnDItemInterface *>& item_list_ret = item_list;
		// Convert QList<> from C++ memory to manually-managed C memory
		QDesignerDnDItemInterface** item_list_arr = static_cast<QDesignerDnDItemInterface**>(malloc(sizeof(QDesignerDnDItemInterface*) * item_list_ret.length()));
		for (size_t i = 0, e = item_list_ret.length(); i < e; ++i) {
			item_list_arr[i] = item_list_ret[i];
		}
		struct miqt_array item_list_out;
		item_list_out.len = item_list_ret.length();
		item_list_out.data = static_cast<void*>(item_list_arr);
		struct miqt_array /* of QDesignerDnDItemInterface* */  sigval1 = item_list_out;
		const QPoint& global_mouse_pos_ret = global_mouse_pos;
		// Cast returned reference into pointer
		QPoint* sigval2 = const_cast<QPoint*>(&global_mouse_pos_ret);
		miqt_exec_callback_QDesignerWidgetBoxInterface_dropWidgets(this, handle__dropWidgets, sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFileName = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFileName(const QString& file_name) override {
		if (handle__setFileName == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QString file_name_ret = file_name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray file_name_b = file_name_ret.toUtf8();
		struct miqt_string file_name_ms;
		file_name_ms.len = file_name_b.length();
		file_name_ms.data = static_cast<char*>(malloc(file_name_ms.len));
		memcpy(file_name_ms.data, file_name_b.data(), file_name_ms.len);
		struct miqt_string sigval1 = file_name_ms;
		miqt_exec_callback_QDesignerWidgetBoxInterface_setFileName(this, handle__setFileName, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fileName = 0;

	// Subclass to allow providing a Go implementation
	virtual QString fileName() const override {
		if (handle__fileName == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_fileName(this, handle__fileName);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__load = 0;

	// Subclass to allow providing a Go implementation
	virtual bool load() override {
		if (handle__load == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		bool callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_load(this, handle__load);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__save = 0;

	// Subclass to allow providing a Go implementation
	virtual bool save() override {
		if (handle__save == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		bool callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_save(this, handle__save);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QDesignerWidgetBoxInterface::devType();
		}

		int callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerWidgetBoxInterface_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QDesignerWidgetBoxInterface::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QDesignerWidgetBoxInterface_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QDesignerWidgetBoxInterface::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QDesignerWidgetBoxInterface_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QDesignerWidgetBoxInterface::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QDesignerWidgetBoxInterface_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QDesignerWidgetBoxInterface::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerWidgetBoxInterface_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QDesignerWidgetBoxInterface::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QDesignerWidgetBoxInterface_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QDesignerWidgetBoxInterface::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QDesignerWidgetBoxInterface_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDesignerWidgetBoxInterface::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QDesignerWidgetBoxInterface_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QDesignerWidgetBoxInterface::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QDesignerWidgetBoxInterface::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QDesignerWidgetBoxInterface::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QDesignerWidgetBoxInterface::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QDesignerWidgetBoxInterface::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QDesignerWidgetBoxInterface::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QDesignerWidgetBoxInterface::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QDesignerWidgetBoxInterface::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QDesignerWidgetBoxInterface::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QDesignerWidgetBoxInterface::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QDesignerWidgetBoxInterface::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QDesignerWidgetBoxInterface::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QDesignerWidgetBoxInterface::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QDesignerWidgetBoxInterface::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QDesignerWidgetBoxInterface::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QDesignerWidgetBoxInterface::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QDesignerWidgetBoxInterface::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QDesignerWidgetBoxInterface::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QDesignerWidgetBoxInterface::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QDesignerWidgetBoxInterface::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QDesignerWidgetBoxInterface::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QDesignerWidgetBoxInterface::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QDesignerWidgetBoxInterface::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QDesignerWidgetBoxInterface::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QDesignerWidgetBoxInterface::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QDesignerWidgetBoxInterface_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QDesignerWidgetBoxInterface::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QDesignerWidgetBoxInterface_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QDesignerWidgetBoxInterface::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerWidgetBoxInterface_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QDesignerWidgetBoxInterface::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QDesignerWidgetBoxInterface_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QDesignerWidgetBoxInterface::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QDesignerWidgetBoxInterface_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QDesignerWidgetBoxInterface::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QDesignerWidgetBoxInterface_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QDesignerWidgetBoxInterface::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QDesignerWidgetBoxInterface_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QDesignerWidgetBoxInterface::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QDesignerWidgetBoxInterface_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QDesignerWidgetBoxInterface::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QDesignerWidgetBoxInterface_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDesignerWidgetBoxInterface::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerWidgetBoxInterface_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QDesignerWidgetBoxInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDesignerWidgetBoxInterface::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDesignerWidgetBoxInterface::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDesignerWidgetBoxInterface::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetBoxInterface_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDesignerWidgetBoxInterface::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerWidgetBoxInterface_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDesignerWidgetBoxInterface::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerWidgetBoxInterface_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QDesignerWidgetBoxInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QDesignerWidgetBoxInterface_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QDesignerWidgetBoxInterface_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QDesignerWidgetBoxInterface_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QDesignerWidgetBoxInterface_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QDesignerWidgetBoxInterface_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QDesignerWidgetBoxInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerWidgetBoxInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerWidgetBoxInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDesignerWidgetBoxInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDesignerWidgetBoxInterface* QDesignerWidgetBoxInterface_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQDesignerWidgetBoxInterface(parent);
}

QDesignerWidgetBoxInterface* QDesignerWidgetBoxInterface_new2() {
	return new (std::nothrow) MiqtVirtualQDesignerWidgetBoxInterface();
}

QDesignerWidgetBoxInterface* QDesignerWidgetBoxInterface_new3(QWidget* parent, int flags) {
	return new (std::nothrow) MiqtVirtualQDesignerWidgetBoxInterface(parent, static_cast<Qt::WindowFlags>(flags));
}

void QDesignerWidgetBoxInterface_virtbase(QDesignerWidgetBoxInterface* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QDesignerWidgetBoxInterface_metaObject(const QDesignerWidgetBoxInterface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDesignerWidgetBoxInterface_metacast(QDesignerWidgetBoxInterface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDesignerWidgetBoxInterface_tr(const char* s) {
	QString _ret = QDesignerWidgetBoxInterface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerWidgetBoxInterface_trUtf8(const char* s) {
	QString _ret = QDesignerWidgetBoxInterface::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QDesignerWidgetBoxInterface_categoryCount(const QDesignerWidgetBoxInterface* self) {
	return self->categoryCount();
}

QDesignerWidgetBoxInterface__Category* QDesignerWidgetBoxInterface_category(const QDesignerWidgetBoxInterface* self, int cat_idx) {
	return new QDesignerWidgetBoxInterface::Category(self->category(static_cast<int>(cat_idx)));
}

void QDesignerWidgetBoxInterface_addCategory(QDesignerWidgetBoxInterface* self, QDesignerWidgetBoxInterface__Category* cat) {
	self->addCategory(*cat);
}

void QDesignerWidgetBoxInterface_removeCategory(QDesignerWidgetBoxInterface* self, int cat_idx) {
	self->removeCategory(static_cast<int>(cat_idx));
}

int QDesignerWidgetBoxInterface_widgetCount(const QDesignerWidgetBoxInterface* self, int cat_idx) {
	return self->widgetCount(static_cast<int>(cat_idx));
}

QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface_widget(const QDesignerWidgetBoxInterface* self, int cat_idx, int wgt_idx) {
	return new QDesignerWidgetBoxInterface::Widget(self->widget(static_cast<int>(cat_idx), static_cast<int>(wgt_idx)));
}

void QDesignerWidgetBoxInterface_addWidget(QDesignerWidgetBoxInterface* self, int cat_idx, QDesignerWidgetBoxInterface__Widget* wgt) {
	self->addWidget(static_cast<int>(cat_idx), *wgt);
}

void QDesignerWidgetBoxInterface_removeWidget(QDesignerWidgetBoxInterface* self, int cat_idx, int wgt_idx) {
	self->removeWidget(static_cast<int>(cat_idx), static_cast<int>(wgt_idx));
}

int QDesignerWidgetBoxInterface_findOrInsertCategory(QDesignerWidgetBoxInterface* self, struct miqt_string categoryName) {
	QString categoryName_QString = QString::fromUtf8(categoryName.data, categoryName.len);
	return self->findOrInsertCategory(categoryName_QString);
}

void QDesignerWidgetBoxInterface_dropWidgets(QDesignerWidgetBoxInterface* self, struct miqt_array /* of QDesignerDnDItemInterface* */  item_list, QPoint* global_mouse_pos) {
	QList<QDesignerDnDItemInterface *> item_list_QList;
	item_list_QList.reserve(item_list.len);
	QDesignerDnDItemInterface** item_list_arr = static_cast<QDesignerDnDItemInterface**>(item_list.data);
	for(size_t i = 0; i < item_list.len; ++i) {
		item_list_QList.push_back(item_list_arr[i]);
	}
	self->dropWidgets(item_list_QList, *global_mouse_pos);
}

void QDesignerWidgetBoxInterface_setFileName(QDesignerWidgetBoxInterface* self, struct miqt_string file_name) {
	QString file_name_QString = QString::fromUtf8(file_name.data, file_name.len);
	self->setFileName(file_name_QString);
}

struct miqt_string QDesignerWidgetBoxInterface_fileName(const QDesignerWidgetBoxInterface* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDesignerWidgetBoxInterface_load(QDesignerWidgetBoxInterface* self) {
	return self->load();
}

bool QDesignerWidgetBoxInterface_save(QDesignerWidgetBoxInterface* self) {
	return self->save();
}

struct miqt_string QDesignerWidgetBoxInterface_tr2(const char* s, const char* c) {
	QString _ret = QDesignerWidgetBoxInterface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerWidgetBoxInterface_tr3(const char* s, const char* c, int n) {
	QString _ret = QDesignerWidgetBoxInterface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerWidgetBoxInterface_trUtf82(const char* s, const char* c) {
	QString _ret = QDesignerWidgetBoxInterface::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerWidgetBoxInterface_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QDesignerWidgetBoxInterface::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDesignerWidgetBoxInterface_override_virtual_categoryCount(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__categoryCount = slot;
	return true;
}

bool QDesignerWidgetBoxInterface_override_virtual_category(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__category = slot;
	return true;
}

bool QDesignerWidgetBoxInterface_override_virtual_addCategory(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__addCategory = slot;
	return true;
}

bool QDesignerWidgetBoxInterface_override_virtual_removeCategory(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeCategory = slot;
	return true;
}

bool QDesignerWidgetBoxInterface_override_virtual_widgetCount(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetCount = slot;
	return true;
}

bool QDesignerWidgetBoxInterface_override_virtual_widget(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widget = slot;
	return true;
}

bool QDesignerWidgetBoxInterface_override_virtual_addWidget(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__addWidget = slot;
	return true;
}

bool QDesignerWidgetBoxInterface_override_virtual_removeWidget(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeWidget = slot;
	return true;
}

bool QDesignerWidgetBoxInterface_override_virtual_dropWidgets(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropWidgets = slot;
	return true;
}

bool QDesignerWidgetBoxInterface_override_virtual_setFileName(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFileName = slot;
	return true;
}

bool QDesignerWidgetBoxInterface_override_virtual_fileName(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__fileName = slot;
	return true;
}

bool QDesignerWidgetBoxInterface_override_virtual_load(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__load = slot;
	return true;
}

bool QDesignerWidgetBoxInterface_override_virtual_save(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__save = slot;
	return true;
}

bool QDesignerWidgetBoxInterface_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QDesignerWidgetBoxInterface_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::devType();
}

bool QDesignerWidgetBoxInterface_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::setVisible(visible);
}

bool QDesignerWidgetBoxInterface_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QDesignerWidgetBoxInterface_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::sizeHint());
}

bool QDesignerWidgetBoxInterface_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QDesignerWidgetBoxInterface_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::minimumSizeHint());
}

bool QDesignerWidgetBoxInterface_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QDesignerWidgetBoxInterface_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::heightForWidth(static_cast<int>(param1));
}

bool QDesignerWidgetBoxInterface_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QDesignerWidgetBoxInterface_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::hasHeightForWidth();
}

bool QDesignerWidgetBoxInterface_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QDesignerWidgetBoxInterface_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::paintEngine();
}

bool QDesignerWidgetBoxInterface_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QDesignerWidgetBoxInterface_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::event(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::mousePressEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::mouseReleaseEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::mouseDoubleClickEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::mouseMoveEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::wheelEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::keyPressEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::keyReleaseEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::focusInEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::focusOutEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::enterEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::leaveEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::paintEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::moveEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::resizeEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::closeEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::contextMenuEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::tabletEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::actionEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::dragEnterEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::dragMoveEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::dragLeaveEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::dropEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::showEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::hideEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QDesignerWidgetBoxInterface_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QDesignerWidgetBoxInterface_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::changeEvent(param1);
}

bool QDesignerWidgetBoxInterface_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QDesignerWidgetBoxInterface_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::metric(static_cast<MiqtVirtualQDesignerWidgetBoxInterface::PaintDeviceMetric>(param1));
}

bool QDesignerWidgetBoxInterface_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::initPainter(painter);
}

bool QDesignerWidgetBoxInterface_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QDesignerWidgetBoxInterface_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::redirected(offset);
}

bool QDesignerWidgetBoxInterface_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QDesignerWidgetBoxInterface_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::sharedPainter();
}

bool QDesignerWidgetBoxInterface_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::inputMethodEvent(param1);
}

bool QDesignerWidgetBoxInterface_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QDesignerWidgetBoxInterface_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QDesignerWidgetBoxInterface_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QDesignerWidgetBoxInterface_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::focusNextPrevChild(next);
}

bool QDesignerWidgetBoxInterface_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDesignerWidgetBoxInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::eventFilter(watched, event);
}

bool QDesignerWidgetBoxInterface_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::timerEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::childEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::customEvent(event);
}

bool QDesignerWidgetBoxInterface_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::connectNotify(*signal);
}

bool QDesignerWidgetBoxInterface_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDesignerWidgetBoxInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerWidgetBoxInterface*>(self)->QDesignerWidgetBoxInterface::disconnectNotify(*signal);
}

void QDesignerWidgetBoxInterface_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QDesignerWidgetBoxInterface_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QDesignerWidgetBoxInterface_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QDesignerWidgetBoxInterface_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QDesignerWidgetBoxInterface_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QDesignerWidgetBoxInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QDesignerWidgetBoxInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QDesignerWidgetBoxInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QDesignerWidgetBoxInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDesignerWidgetBoxInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetBoxInterface*>( (QDesignerWidgetBoxInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QDesignerWidgetBoxInterface_delete(QDesignerWidgetBoxInterface* self) {
	delete self;
}

QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Widget_new() {
	return new (std::nothrow) QDesignerWidgetBoxInterface::Widget();
}

QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Widget_new2(QDesignerWidgetBoxInterface__Widget* w) {
	return new (std::nothrow) QDesignerWidgetBoxInterface::Widget(*w);
}

QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Widget_new3(struct miqt_string aname) {
	QString aname_QString = QString::fromUtf8(aname.data, aname.len);
	return new (std::nothrow) QDesignerWidgetBoxInterface::Widget(aname_QString);
}

QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Widget_new4(struct miqt_string aname, struct miqt_string xml) {
	QString aname_QString = QString::fromUtf8(aname.data, aname.len);
	QString xml_QString = QString::fromUtf8(xml.data, xml.len);
	return new (std::nothrow) QDesignerWidgetBoxInterface::Widget(aname_QString, xml_QString);
}

QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Widget_new5(struct miqt_string aname, struct miqt_string xml, struct miqt_string icon_name) {
	QString aname_QString = QString::fromUtf8(aname.data, aname.len);
	QString xml_QString = QString::fromUtf8(xml.data, xml.len);
	QString icon_name_QString = QString::fromUtf8(icon_name.data, icon_name.len);
	return new (std::nothrow) QDesignerWidgetBoxInterface::Widget(aname_QString, xml_QString, icon_name_QString);
}

QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Widget_new6(struct miqt_string aname, struct miqt_string xml, struct miqt_string icon_name, int atype) {
	QString aname_QString = QString::fromUtf8(aname.data, aname.len);
	QString xml_QString = QString::fromUtf8(xml.data, xml.len);
	QString icon_name_QString = QString::fromUtf8(icon_name.data, icon_name.len);
	return new (std::nothrow) QDesignerWidgetBoxInterface::Widget(aname_QString, xml_QString, icon_name_QString, static_cast<QDesignerWidgetBoxInterface::Widget::Type>(atype));
}

void QDesignerWidgetBoxInterface__Widget_operatorAssign(QDesignerWidgetBoxInterface__Widget* self, QDesignerWidgetBoxInterface__Widget* w) {
	self->operator=(*w);
}

struct miqt_string QDesignerWidgetBoxInterface__Widget_name(const QDesignerWidgetBoxInterface__Widget* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerWidgetBoxInterface__Widget_setName(QDesignerWidgetBoxInterface__Widget* self, struct miqt_string aname) {
	QString aname_QString = QString::fromUtf8(aname.data, aname.len);
	self->setName(aname_QString);
}

struct miqt_string QDesignerWidgetBoxInterface__Widget_domXml(const QDesignerWidgetBoxInterface__Widget* self) {
	QString _ret = self->domXml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerWidgetBoxInterface__Widget_setDomXml(QDesignerWidgetBoxInterface__Widget* self, struct miqt_string xml) {
	QString xml_QString = QString::fromUtf8(xml.data, xml.len);
	self->setDomXml(xml_QString);
}

struct miqt_string QDesignerWidgetBoxInterface__Widget_iconName(const QDesignerWidgetBoxInterface__Widget* self) {
	QString _ret = self->iconName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerWidgetBoxInterface__Widget_setIconName(QDesignerWidgetBoxInterface__Widget* self, struct miqt_string icon_name) {
	QString icon_name_QString = QString::fromUtf8(icon_name.data, icon_name.len);
	self->setIconName(icon_name_QString);
}

int QDesignerWidgetBoxInterface__Widget_type(const QDesignerWidgetBoxInterface__Widget* self) {
	QDesignerWidgetBoxInterface::Widget::Type _ret = self->type();
	return static_cast<int>(_ret);
}

void QDesignerWidgetBoxInterface__Widget_setType(QDesignerWidgetBoxInterface__Widget* self, int atype) {
	self->setType(static_cast<QDesignerWidgetBoxInterface::Widget::Type>(atype));
}

bool QDesignerWidgetBoxInterface__Widget_isNull(const QDesignerWidgetBoxInterface__Widget* self) {
	return self->isNull();
}

void QDesignerWidgetBoxInterface__Widget_delete(QDesignerWidgetBoxInterface__Widget* self) {
	delete self;
}

QDesignerWidgetBoxInterface__Category* QDesignerWidgetBoxInterface__Category_new() {
	return new (std::nothrow) QDesignerWidgetBoxInterface::Category();
}

QDesignerWidgetBoxInterface__Category* QDesignerWidgetBoxInterface__Category_new2(QDesignerWidgetBoxInterface__Category* param1) {
	return new (std::nothrow) QDesignerWidgetBoxInterface::Category(*param1);
}

QDesignerWidgetBoxInterface__Category* QDesignerWidgetBoxInterface__Category_new3(struct miqt_string aname) {
	QString aname_QString = QString::fromUtf8(aname.data, aname.len);
	return new (std::nothrow) QDesignerWidgetBoxInterface::Category(aname_QString);
}

QDesignerWidgetBoxInterface__Category* QDesignerWidgetBoxInterface__Category_new4(struct miqt_string aname, int atype) {
	QString aname_QString = QString::fromUtf8(aname.data, aname.len);
	return new (std::nothrow) QDesignerWidgetBoxInterface::Category(aname_QString, static_cast<QDesignerWidgetBoxInterface::Category::Type>(atype));
}

struct miqt_string QDesignerWidgetBoxInterface__Category_name(const QDesignerWidgetBoxInterface__Category* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerWidgetBoxInterface__Category_setName(QDesignerWidgetBoxInterface__Category* self, struct miqt_string aname) {
	QString aname_QString = QString::fromUtf8(aname.data, aname.len);
	self->setName(aname_QString);
}

int QDesignerWidgetBoxInterface__Category_widgetCount(const QDesignerWidgetBoxInterface__Category* self) {
	return self->widgetCount();
}

QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Category_widget(const QDesignerWidgetBoxInterface__Category* self, int idx) {
	return new QDesignerWidgetBoxInterface::Widget(self->widget(static_cast<int>(idx)));
}

void QDesignerWidgetBoxInterface__Category_removeWidget(QDesignerWidgetBoxInterface__Category* self, int idx) {
	self->removeWidget(static_cast<int>(idx));
}

void QDesignerWidgetBoxInterface__Category_addWidget(QDesignerWidgetBoxInterface__Category* self, QDesignerWidgetBoxInterface__Widget* awidget) {
	self->addWidget(*awidget);
}

int QDesignerWidgetBoxInterface__Category_type(const QDesignerWidgetBoxInterface__Category* self) {
	QDesignerWidgetBoxInterface::Category::Type _ret = self->type();
	return static_cast<int>(_ret);
}

void QDesignerWidgetBoxInterface__Category_setType(QDesignerWidgetBoxInterface__Category* self, int atype) {
	self->setType(static_cast<QDesignerWidgetBoxInterface::Category::Type>(atype));
}

bool QDesignerWidgetBoxInterface__Category_isNull(const QDesignerWidgetBoxInterface__Category* self) {
	return self->isNull();
}

void QDesignerWidgetBoxInterface__Category_operatorAssign(QDesignerWidgetBoxInterface__Category* self, QDesignerWidgetBoxInterface__Category* param1) {
	self->operator=(*param1);
}

void QDesignerWidgetBoxInterface__Category_delete(QDesignerWidgetBoxInterface__Category* self) {
	delete self;
}

