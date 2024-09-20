#include <QAccessibleInterface>
#include <QCursor>
#include <QIcon>
#include <QMargins>
#include <QMetaObject>
#include <QObject>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QScreen>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSurfaceFormat>
#include <QWindow>
#include "qwindow.h"
#include "gen_qwindow.h"
#include "_cgo_export.h"

QWindow* QWindow_new() {
	return new QWindow();
}

QWindow* QWindow_new2(QWindow* parent) {
	return new QWindow(parent);
}

QWindow* QWindow_new3(QScreen* screen) {
	return new QWindow(screen);
}

QMetaObject* QWindow_MetaObject(const QWindow* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWindow_Metacast(QWindow* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QWindow_Tr(const char* s) {
	QString _ret = QWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QWindow_TrUtf8(const char* s) {
	QString _ret = QWindow::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QWindow_SetSurfaceType(QWindow* self, int surfaceType) {
	self->setSurfaceType(static_cast<QSurface::SurfaceType>(surfaceType));
}

int QWindow_SurfaceType(const QWindow* self) {
	QSurface::SurfaceType _ret = self->surfaceType();
	return static_cast<int>(_ret);
}

bool QWindow_IsVisible(const QWindow* self) {
	return self->isVisible();
}

int QWindow_Visibility(const QWindow* self) {
	QWindow::Visibility _ret = self->visibility();
	return static_cast<int>(_ret);
}

void QWindow_SetVisibility(QWindow* self, int v) {
	self->setVisibility(static_cast<QWindow::Visibility>(v));
}

void QWindow_Create(QWindow* self) {
	self->create();
}

uintptr_t QWindow_WinId(const QWindow* self) {
	WId _ret = self->winId();
	return static_cast<uintptr_t>(_ret);
}

QWindow* QWindow_Parent(const QWindow* self, int mode) {
	return self->parent(static_cast<QWindow::AncestorMode>(mode));
}

QWindow* QWindow_Parent2(const QWindow* self) {
	return self->parent();
}

void QWindow_SetParent(QWindow* self, QWindow* parent) {
	self->setParent(parent);
}

bool QWindow_IsTopLevel(const QWindow* self) {
	return self->isTopLevel();
}

bool QWindow_IsModal(const QWindow* self) {
	return self->isModal();
}

int QWindow_Modality(const QWindow* self) {
	Qt::WindowModality _ret = self->modality();
	return static_cast<int>(_ret);
}

void QWindow_SetModality(QWindow* self, int modality) {
	self->setModality(static_cast<Qt::WindowModality>(modality));
}

void QWindow_SetFormat(QWindow* self, QSurfaceFormat* format) {
	self->setFormat(*format);
}

QSurfaceFormat* QWindow_Format(const QWindow* self) {
	return new QSurfaceFormat(self->format());
}

QSurfaceFormat* QWindow_RequestedFormat(const QWindow* self) {
	return new QSurfaceFormat(self->requestedFormat());
}

void QWindow_SetFlags(QWindow* self, int flags) {
	self->setFlags(static_cast<Qt::WindowFlags>(flags));
}

int QWindow_Flags(const QWindow* self) {
	Qt::WindowFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QWindow_SetFlag(QWindow* self, int param1) {
	self->setFlag(static_cast<Qt::WindowType>(param1));
}

int QWindow_Type(const QWindow* self) {
	Qt::WindowType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string* QWindow_Title(const QWindow* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QWindow_SetOpacity(QWindow* self, double level) {
	self->setOpacity(static_cast<qreal>(level));
}

double QWindow_Opacity(const QWindow* self) {
	qreal _ret = self->opacity();
	return static_cast<double>(_ret);
}

void QWindow_SetMask(QWindow* self, QRegion* region) {
	self->setMask(*region);
}

QRegion* QWindow_Mask(const QWindow* self) {
	return new QRegion(self->mask());
}

bool QWindow_IsActive(const QWindow* self) {
	return self->isActive();
}

void QWindow_ReportContentOrientationChange(QWindow* self, int orientation) {
	self->reportContentOrientationChange(static_cast<Qt::ScreenOrientation>(orientation));
}

int QWindow_ContentOrientation(const QWindow* self) {
	Qt::ScreenOrientation _ret = self->contentOrientation();
	return static_cast<int>(_ret);
}

double QWindow_DevicePixelRatio(const QWindow* self) {
	qreal _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
}

int QWindow_WindowState(const QWindow* self) {
	Qt::WindowState _ret = self->windowState();
	return static_cast<int>(_ret);
}

int QWindow_WindowStates(const QWindow* self) {
	Qt::WindowStates _ret = self->windowStates();
	return static_cast<int>(_ret);
}

void QWindow_SetWindowState(QWindow* self, int state) {
	self->setWindowState(static_cast<Qt::WindowState>(state));
}

void QWindow_SetWindowStates(QWindow* self, int states) {
	self->setWindowStates(static_cast<Qt::WindowStates>(states));
}

void QWindow_SetTransientParent(QWindow* self, QWindow* parent) {
	self->setTransientParent(parent);
}

QWindow* QWindow_TransientParent(const QWindow* self) {
	return self->transientParent();
}

bool QWindow_IsAncestorOf(const QWindow* self, QWindow* child) {
	return self->isAncestorOf(child);
}

bool QWindow_IsExposed(const QWindow* self) {
	return self->isExposed();
}

int QWindow_MinimumWidth(const QWindow* self) {
	return self->minimumWidth();
}

int QWindow_MinimumHeight(const QWindow* self) {
	return self->minimumHeight();
}

int QWindow_MaximumWidth(const QWindow* self) {
	return self->maximumWidth();
}

int QWindow_MaximumHeight(const QWindow* self) {
	return self->maximumHeight();
}

QSize* QWindow_MinimumSize(const QWindow* self) {
	return new QSize(self->minimumSize());
}

QSize* QWindow_MaximumSize(const QWindow* self) {
	return new QSize(self->maximumSize());
}

QSize* QWindow_BaseSize(const QWindow* self) {
	return new QSize(self->baseSize());
}

QSize* QWindow_SizeIncrement(const QWindow* self) {
	return new QSize(self->sizeIncrement());
}

void QWindow_SetMinimumSize(QWindow* self, QSize* size) {
	self->setMinimumSize(*size);
}

void QWindow_SetMaximumSize(QWindow* self, QSize* size) {
	self->setMaximumSize(*size);
}

void QWindow_SetBaseSize(QWindow* self, QSize* size) {
	self->setBaseSize(*size);
}

void QWindow_SetSizeIncrement(QWindow* self, QSize* size) {
	self->setSizeIncrement(*size);
}

QRect* QWindow_Geometry(const QWindow* self) {
	return new QRect(self->geometry());
}

QMargins* QWindow_FrameMargins(const QWindow* self) {
	return new QMargins(self->frameMargins());
}

QRect* QWindow_FrameGeometry(const QWindow* self) {
	return new QRect(self->frameGeometry());
}

QPoint* QWindow_FramePosition(const QWindow* self) {
	return new QPoint(self->framePosition());
}

void QWindow_SetFramePosition(QWindow* self, QPoint* point) {
	self->setFramePosition(*point);
}

int QWindow_Width(const QWindow* self) {
	return self->width();
}

int QWindow_Height(const QWindow* self) {
	return self->height();
}

int QWindow_X(const QWindow* self) {
	return self->x();
}

int QWindow_Y(const QWindow* self) {
	return self->y();
}

QSize* QWindow_Size(const QWindow* self) {
	return new QSize(self->size());
}

QPoint* QWindow_Position(const QWindow* self) {
	return new QPoint(self->position());
}

void QWindow_SetPosition(QWindow* self, QPoint* pt) {
	self->setPosition(*pt);
}

void QWindow_SetPosition2(QWindow* self, int posx, int posy) {
	self->setPosition(static_cast<int>(posx), static_cast<int>(posy));
}

void QWindow_Resize(QWindow* self, QSize* newSize) {
	self->resize(*newSize);
}

void QWindow_Resize2(QWindow* self, int w, int h) {
	self->resize(static_cast<int>(w), static_cast<int>(h));
}

void QWindow_SetFilePath(QWindow* self, struct miqt_string* filePath) {
	QString filePath_QString = QString::fromUtf8(&filePath->data, filePath->len);
	self->setFilePath(filePath_QString);
}

struct miqt_string* QWindow_FilePath(const QWindow* self) {
	QString _ret = self->filePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QWindow_SetIcon(QWindow* self, QIcon* icon) {
	self->setIcon(*icon);
}

QIcon* QWindow_Icon(const QWindow* self) {
	return new QIcon(self->icon());
}

void QWindow_Destroy(QWindow* self) {
	self->destroy();
}

bool QWindow_SetKeyboardGrabEnabled(QWindow* self, bool grab) {
	return self->setKeyboardGrabEnabled(grab);
}

bool QWindow_SetMouseGrabEnabled(QWindow* self, bool grab) {
	return self->setMouseGrabEnabled(grab);
}

QScreen* QWindow_Screen(const QWindow* self) {
	return self->screen();
}

void QWindow_SetScreen(QWindow* self, QScreen* screen) {
	self->setScreen(screen);
}

QAccessibleInterface* QWindow_AccessibleRoot(const QWindow* self) {
	return self->accessibleRoot();
}

QObject* QWindow_FocusObject(const QWindow* self) {
	return self->focusObject();
}

QPoint* QWindow_MapToGlobal(const QWindow* self, QPoint* pos) {
	return new QPoint(self->mapToGlobal(*pos));
}

QPoint* QWindow_MapFromGlobal(const QWindow* self, QPoint* pos) {
	return new QPoint(self->mapFromGlobal(*pos));
}

QCursor* QWindow_Cursor(const QWindow* self) {
	return new QCursor(self->cursor());
}

void QWindow_SetCursor(QWindow* self, QCursor* cursor) {
	self->setCursor(*cursor);
}

void QWindow_UnsetCursor(QWindow* self) {
	self->unsetCursor();
}

QWindow* QWindow_FromWinId(uintptr_t id) {
	return QWindow::fromWinId(static_cast<WId>(id));
}

void QWindow_RequestActivate(QWindow* self) {
	self->requestActivate();
}

void QWindow_SetVisible(QWindow* self, bool visible) {
	self->setVisible(visible);
}

void QWindow_Show(QWindow* self) {
	self->show();
}

void QWindow_Hide(QWindow* self) {
	self->hide();
}

void QWindow_ShowMinimized(QWindow* self) {
	self->showMinimized();
}

void QWindow_ShowMaximized(QWindow* self) {
	self->showMaximized();
}

void QWindow_ShowFullScreen(QWindow* self) {
	self->showFullScreen();
}

void QWindow_ShowNormal(QWindow* self) {
	self->showNormal();
}

bool QWindow_Close(QWindow* self) {
	return self->close();
}

void QWindow_Raise(QWindow* self) {
	self->raise();
}

void QWindow_Lower(QWindow* self) {
	self->lower();
}

bool QWindow_StartSystemResize(QWindow* self, int edges) {
	return self->startSystemResize(static_cast<Qt::Edges>(edges));
}

bool QWindow_StartSystemMove(QWindow* self) {
	return self->startSystemMove();
}

void QWindow_SetTitle(QWindow* self, struct miqt_string* title) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	self->setTitle(title_QString);
}

void QWindow_SetX(QWindow* self, int arg) {
	self->setX(static_cast<int>(arg));
}

void QWindow_SetY(QWindow* self, int arg) {
	self->setY(static_cast<int>(arg));
}

void QWindow_SetWidth(QWindow* self, int arg) {
	self->setWidth(static_cast<int>(arg));
}

void QWindow_SetHeight(QWindow* self, int arg) {
	self->setHeight(static_cast<int>(arg));
}

void QWindow_SetGeometry(QWindow* self, int posx, int posy, int w, int h) {
	self->setGeometry(static_cast<int>(posx), static_cast<int>(posy), static_cast<int>(w), static_cast<int>(h));
}

void QWindow_SetGeometryWithRect(QWindow* self, QRect* rect) {
	self->setGeometry(*rect);
}

void QWindow_SetMinimumWidth(QWindow* self, int w) {
	self->setMinimumWidth(static_cast<int>(w));
}

void QWindow_SetMinimumHeight(QWindow* self, int h) {
	self->setMinimumHeight(static_cast<int>(h));
}

void QWindow_SetMaximumWidth(QWindow* self, int w) {
	self->setMaximumWidth(static_cast<int>(w));
}

void QWindow_SetMaximumHeight(QWindow* self, int h) {
	self->setMaximumHeight(static_cast<int>(h));
}

void QWindow_Alert(QWindow* self, int msec) {
	self->alert(static_cast<int>(msec));
}

void QWindow_RequestUpdate(QWindow* self) {
	self->requestUpdate();
}

void QWindow_ScreenChanged(QWindow* self, QScreen* screen) {
	self->screenChanged(screen);
}

void QWindow_connect_ScreenChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(QScreen*)>(&QWindow::screenChanged), self, [=](QScreen* screen) {
		QScreen* sigval1 = screen;
		miqt_exec_callback_QWindow_ScreenChanged(slot, sigval1);
	});
}

void QWindow_ModalityChanged(QWindow* self, int modality) {
	self->modalityChanged(static_cast<Qt::WindowModality>(modality));
}

void QWindow_connect_ModalityChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(Qt::WindowModality)>(&QWindow::modalityChanged), self, [=](Qt::WindowModality modality) {
		Qt::WindowModality modality_ret = modality;
		int sigval1 = static_cast<int>(modality_ret);
		miqt_exec_callback_QWindow_ModalityChanged(slot, sigval1);
	});
}

void QWindow_WindowStateChanged(QWindow* self, int windowState) {
	self->windowStateChanged(static_cast<Qt::WindowState>(windowState));
}

void QWindow_connect_WindowStateChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(Qt::WindowState)>(&QWindow::windowStateChanged), self, [=](Qt::WindowState windowState) {
		Qt::WindowState windowState_ret = windowState;
		int sigval1 = static_cast<int>(windowState_ret);
		miqt_exec_callback_QWindow_WindowStateChanged(slot, sigval1);
	});
}

void QWindow_WindowTitleChanged(QWindow* self, struct miqt_string* title) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	self->windowTitleChanged(title_QString);
}

void QWindow_connect_WindowTitleChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(const QString&)>(&QWindow::windowTitleChanged), self, [=](const QString& title) {
		const QString title_ret = title;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray title_b = title_ret.toUtf8();
		struct miqt_string* sigval1 = miqt_strdup(title_b.data(), title_b.length());
		miqt_exec_callback_QWindow_WindowTitleChanged(slot, sigval1);
	});
}

void QWindow_XChanged(QWindow* self, int arg) {
	self->xChanged(static_cast<int>(arg));
}

void QWindow_connect_XChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::xChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_XChanged(slot, sigval1);
	});
}

void QWindow_YChanged(QWindow* self, int arg) {
	self->yChanged(static_cast<int>(arg));
}

void QWindow_connect_YChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::yChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_YChanged(slot, sigval1);
	});
}

void QWindow_WidthChanged(QWindow* self, int arg) {
	self->widthChanged(static_cast<int>(arg));
}

void QWindow_connect_WidthChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::widthChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_WidthChanged(slot, sigval1);
	});
}

void QWindow_HeightChanged(QWindow* self, int arg) {
	self->heightChanged(static_cast<int>(arg));
}

void QWindow_connect_HeightChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::heightChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_HeightChanged(slot, sigval1);
	});
}

void QWindow_MinimumWidthChanged(QWindow* self, int arg) {
	self->minimumWidthChanged(static_cast<int>(arg));
}

void QWindow_connect_MinimumWidthChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::minimumWidthChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_MinimumWidthChanged(slot, sigval1);
	});
}

void QWindow_MinimumHeightChanged(QWindow* self, int arg) {
	self->minimumHeightChanged(static_cast<int>(arg));
}

void QWindow_connect_MinimumHeightChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::minimumHeightChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_MinimumHeightChanged(slot, sigval1);
	});
}

void QWindow_MaximumWidthChanged(QWindow* self, int arg) {
	self->maximumWidthChanged(static_cast<int>(arg));
}

void QWindow_connect_MaximumWidthChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::maximumWidthChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_MaximumWidthChanged(slot, sigval1);
	});
}

void QWindow_MaximumHeightChanged(QWindow* self, int arg) {
	self->maximumHeightChanged(static_cast<int>(arg));
}

void QWindow_connect_MaximumHeightChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::maximumHeightChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_MaximumHeightChanged(slot, sigval1);
	});
}

void QWindow_VisibleChanged(QWindow* self, bool arg) {
	self->visibleChanged(arg);
}

void QWindow_connect_VisibleChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(bool)>(&QWindow::visibleChanged), self, [=](bool arg) {
		bool sigval1 = arg;
		miqt_exec_callback_QWindow_VisibleChanged(slot, sigval1);
	});
}

void QWindow_VisibilityChanged(QWindow* self, int visibility) {
	self->visibilityChanged(static_cast<QWindow::Visibility>(visibility));
}

void QWindow_connect_VisibilityChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(QWindow::Visibility)>(&QWindow::visibilityChanged), self, [=](QWindow::Visibility visibility) {
		QWindow::Visibility visibility_ret = visibility;
		int sigval1 = static_cast<int>(visibility_ret);
		miqt_exec_callback_QWindow_VisibilityChanged(slot, sigval1);
	});
}

void QWindow_ActiveChanged(QWindow* self) {
	self->activeChanged();
}

void QWindow_connect_ActiveChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)()>(&QWindow::activeChanged), self, [=]() {
		miqt_exec_callback_QWindow_ActiveChanged(slot);
	});
}

void QWindow_ContentOrientationChanged(QWindow* self, int orientation) {
	self->contentOrientationChanged(static_cast<Qt::ScreenOrientation>(orientation));
}

void QWindow_connect_ContentOrientationChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(Qt::ScreenOrientation)>(&QWindow::contentOrientationChanged), self, [=](Qt::ScreenOrientation orientation) {
		Qt::ScreenOrientation orientation_ret = orientation;
		int sigval1 = static_cast<int>(orientation_ret);
		miqt_exec_callback_QWindow_ContentOrientationChanged(slot, sigval1);
	});
}

void QWindow_FocusObjectChanged(QWindow* self, QObject* object) {
	self->focusObjectChanged(object);
}

void QWindow_connect_FocusObjectChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(QObject*)>(&QWindow::focusObjectChanged), self, [=](QObject* object) {
		QObject* sigval1 = object;
		miqt_exec_callback_QWindow_FocusObjectChanged(slot, sigval1);
	});
}

void QWindow_OpacityChanged(QWindow* self, double opacity) {
	self->opacityChanged(static_cast<qreal>(opacity));
}

void QWindow_connect_OpacityChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(qreal)>(&QWindow::opacityChanged), self, [=](qreal opacity) {
		qreal opacity_ret = opacity;
		double sigval1 = static_cast<double>(opacity_ret);
		miqt_exec_callback_QWindow_OpacityChanged(slot, sigval1);
	});
}

void QWindow_TransientParentChanged(QWindow* self, QWindow* transientParent) {
	self->transientParentChanged(transientParent);
}

void QWindow_connect_TransientParentChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(QWindow*)>(&QWindow::transientParentChanged), self, [=](QWindow* transientParent) {
		QWindow* sigval1 = transientParent;
		miqt_exec_callback_QWindow_TransientParentChanged(slot, sigval1);
	});
}

struct miqt_string* QWindow_Tr2(const char* s, const char* c) {
	QString _ret = QWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QWindow_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QWindow_TrUtf82(const char* s, const char* c) {
	QString _ret = QWindow::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QWindow_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QWindow::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QWindow_SetFlag2(QWindow* self, int param1, bool on) {
	self->setFlag(static_cast<Qt::WindowType>(param1), on);
}

bool QWindow_IsAncestorOf2(const QWindow* self, QWindow* child, int mode) {
	return self->isAncestorOf(child, static_cast<QWindow::AncestorMode>(mode));
}

void QWindow_Delete(QWindow* self) {
	delete self;
}

