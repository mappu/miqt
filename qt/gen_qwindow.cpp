#include "gen_qwindow.h"
#include "qwindow.h"

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
#include <QSurfaceFormat>
#include <QWindow>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QWindow* QWindow_new() {
	return new QWindow();
}

QWindow* QWindow_new2(QWindow* parent) {
	return new QWindow(parent);
}

QWindow* QWindow_new3(QScreen* screen) {
	return new QWindow(screen);
}

QMetaObject* QWindow_MetaObject(QWindow* self) {
	return (QMetaObject*) self->metaObject();
}

void QWindow_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWindow_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QWindow::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QWindow_IsVisible(QWindow* self) {
	return self->isVisible();
}

void QWindow_Create(QWindow* self) {
	self->create();
}

uintptr_t QWindow_WinId(QWindow* self) {
	return self->winId();
}

QWindow* QWindow_Parent(QWindow* self) {
	return self->parent();
}

void QWindow_SetParent(QWindow* self, QWindow* parent) {
	self->setParent(parent);
}

bool QWindow_IsTopLevel(QWindow* self) {
	return self->isTopLevel();
}

bool QWindow_IsModal(QWindow* self) {
	return self->isModal();
}

void QWindow_SetFormat(QWindow* self, QSurfaceFormat* format) {
	self->setFormat(*format);
}

QSurfaceFormat* QWindow_Format(QWindow* self) {
	QSurfaceFormat ret = self->format();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSurfaceFormat*>(new QSurfaceFormat(ret));
}

QSurfaceFormat* QWindow_RequestedFormat(QWindow* self) {
	QSurfaceFormat ret = self->requestedFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSurfaceFormat*>(new QSurfaceFormat(ret));
}

void QWindow_Title(QWindow* self, char** _out, int* _out_Strlen) {
	QString ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWindow_SetOpacity(QWindow* self, double level) {
	self->setOpacity(static_cast<qreal>(level));
}

double QWindow_Opacity(QWindow* self) {
	return self->opacity();
}

void QWindow_SetMask(QWindow* self, QRegion* region) {
	self->setMask(*region);
}

QRegion* QWindow_Mask(QWindow* self) {
	QRegion ret = self->mask();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

bool QWindow_IsActive(QWindow* self) {
	return self->isActive();
}

double QWindow_DevicePixelRatio(QWindow* self) {
	return self->devicePixelRatio();
}

void QWindow_SetTransientParent(QWindow* self, QWindow* parent) {
	self->setTransientParent(parent);
}

QWindow* QWindow_TransientParent(QWindow* self) {
	return self->transientParent();
}

bool QWindow_IsExposed(QWindow* self) {
	return self->isExposed();
}

int QWindow_MinimumWidth(QWindow* self) {
	return self->minimumWidth();
}

int QWindow_MinimumHeight(QWindow* self) {
	return self->minimumHeight();
}

int QWindow_MaximumWidth(QWindow* self) {
	return self->maximumWidth();
}

int QWindow_MaximumHeight(QWindow* self) {
	return self->maximumHeight();
}

QSize* QWindow_MinimumSize(QWindow* self) {
	QSize ret = self->minimumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QWindow_MaximumSize(QWindow* self) {
	QSize ret = self->maximumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QWindow_BaseSize(QWindow* self) {
	QSize ret = self->baseSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QWindow_SizeIncrement(QWindow* self) {
	QSize ret = self->sizeIncrement();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
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

QRect* QWindow_Geometry(QWindow* self) {
	QRect ret = self->geometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QMargins* QWindow_FrameMargins(QWindow* self) {
	QMargins ret = self->frameMargins();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMargins*>(new QMargins(ret));
}

QRect* QWindow_FrameGeometry(QWindow* self) {
	QRect ret = self->frameGeometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QPoint* QWindow_FramePosition(QWindow* self) {
	QPoint ret = self->framePosition();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QWindow_SetFramePosition(QWindow* self, QPoint* point) {
	self->setFramePosition(*point);
}

int QWindow_Width(QWindow* self) {
	return self->width();
}

int QWindow_Height(QWindow* self) {
	return self->height();
}

int QWindow_X(QWindow* self) {
	return self->x();
}

int QWindow_Y(QWindow* self) {
	return self->y();
}

QSize* QWindow_Size(QWindow* self) {
	QSize ret = self->size();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QPoint* QWindow_Position(QWindow* self) {
	QPoint ret = self->position();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
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

void QWindow_SetFilePath(QWindow* self, const char* filePath, size_t filePath_Strlen) {
	QString filePath_QString = QString::fromUtf8(filePath, filePath_Strlen);
	self->setFilePath(filePath_QString);
}

void QWindow_FilePath(QWindow* self, char** _out, int* _out_Strlen) {
	QString ret = self->filePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWindow_SetIcon(QWindow* self, QIcon* icon) {
	self->setIcon(*icon);
}

QIcon* QWindow_Icon(QWindow* self) {
	QIcon ret = self->icon();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
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

QScreen* QWindow_Screen(QWindow* self) {
	return self->screen();
}

void QWindow_SetScreen(QWindow* self, QScreen* screen) {
	self->setScreen(screen);
}

QAccessibleInterface* QWindow_AccessibleRoot(QWindow* self) {
	return self->accessibleRoot();
}

QObject* QWindow_FocusObject(QWindow* self) {
	return self->focusObject();
}

QPoint* QWindow_MapToGlobal(QWindow* self, QPoint* pos) {
	QPoint ret = self->mapToGlobal(*pos);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QWindow_MapFromGlobal(QWindow* self, QPoint* pos) {
	QPoint ret = self->mapFromGlobal(*pos);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QCursor* QWindow_Cursor(QWindow* self) {
	QCursor ret = self->cursor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCursor*>(new QCursor(ret));
}

void QWindow_SetCursor(QWindow* self, QCursor* cursor) {
	self->setCursor(*cursor);
}

void QWindow_UnsetCursor(QWindow* self) {
	self->unsetCursor();
}

QWindow* QWindow_FromWinId(uintptr_t id) {
	return QWindow::fromWinId(static_cast<uintptr_t>(id));
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

bool QWindow_StartSystemMove(QWindow* self) {
	return self->startSystemMove();
}

void QWindow_SetTitle(QWindow* self, const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
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
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWindow_WindowTitleChanged(QWindow* self, const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	self->windowTitleChanged(title_QString);
}

void QWindow_connect_WindowTitleChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(const QString&)>(&QWindow::windowTitleChanged), self, [=](const QString& title) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWindow_XChanged(QWindow* self, int arg) {
	self->xChanged(static_cast<int>(arg));
}

void QWindow_connect_XChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::xChanged), self, [=](int arg) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWindow_YChanged(QWindow* self, int arg) {
	self->yChanged(static_cast<int>(arg));
}

void QWindow_connect_YChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::yChanged), self, [=](int arg) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWindow_WidthChanged(QWindow* self, int arg) {
	self->widthChanged(static_cast<int>(arg));
}

void QWindow_connect_WidthChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::widthChanged), self, [=](int arg) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWindow_HeightChanged(QWindow* self, int arg) {
	self->heightChanged(static_cast<int>(arg));
}

void QWindow_connect_HeightChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::heightChanged), self, [=](int arg) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWindow_MinimumWidthChanged(QWindow* self, int arg) {
	self->minimumWidthChanged(static_cast<int>(arg));
}

void QWindow_connect_MinimumWidthChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::minimumWidthChanged), self, [=](int arg) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWindow_MinimumHeightChanged(QWindow* self, int arg) {
	self->minimumHeightChanged(static_cast<int>(arg));
}

void QWindow_connect_MinimumHeightChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::minimumHeightChanged), self, [=](int arg) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWindow_MaximumWidthChanged(QWindow* self, int arg) {
	self->maximumWidthChanged(static_cast<int>(arg));
}

void QWindow_connect_MaximumWidthChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::maximumWidthChanged), self, [=](int arg) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWindow_MaximumHeightChanged(QWindow* self, int arg) {
	self->maximumHeightChanged(static_cast<int>(arg));
}

void QWindow_connect_MaximumHeightChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::maximumHeightChanged), self, [=](int arg) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWindow_VisibleChanged(QWindow* self, bool arg) {
	self->visibleChanged(arg);
}

void QWindow_connect_VisibleChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(bool)>(&QWindow::visibleChanged), self, [=](bool arg) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWindow_ActiveChanged(QWindow* self) {
	self->activeChanged();
}

void QWindow_connect_ActiveChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)()>(&QWindow::activeChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWindow_FocusObjectChanged(QWindow* self, QObject* object) {
	self->focusObjectChanged(object);
}

void QWindow_connect_FocusObjectChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(QObject*)>(&QWindow::focusObjectChanged), self, [=](QObject* object) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWindow_OpacityChanged(QWindow* self, double opacity) {
	self->opacityChanged(static_cast<qreal>(opacity));
}

void QWindow_connect_OpacityChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(qreal)>(&QWindow::opacityChanged), self, [=](qreal opacity) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWindow_TransientParentChanged(QWindow* self, QWindow* transientParent) {
	self->transientParentChanged(transientParent);
}

void QWindow_connect_TransientParentChanged(QWindow* self, void* slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(QWindow*)>(&QWindow::transientParentChanged), self, [=](QWindow* transientParent) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWindow_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWindow_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWindow_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QWindow::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWindow_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QWindow::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWindow_Delete(QWindow* self) {
	delete self;
}

