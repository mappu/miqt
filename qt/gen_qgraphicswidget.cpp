#include "gen_qgraphicswidget.h"
#include "qgraphicswidget.h"

#include <QAction>
#include <QFont>
#include <QGraphicsLayout>
#include <QGraphicsWidget>
#include <QList>
#include <QMarginsF>
#include <QMetaObject>
#include <QPainter>
#include <QPainterPath>
#include <QPalette>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QStyle>
#include <QStyleOptionGraphicsItem>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QGraphicsWidget_MetaObject(QGraphicsWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void QGraphicsWidget_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsWidget_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QGraphicsLayout* QGraphicsWidget_Layout(QGraphicsWidget* self) {
	return self->layout();
}

void QGraphicsWidget_SetLayout(QGraphicsWidget* self, QGraphicsLayout* layout) {
	self->setLayout(layout);
}

void QGraphicsWidget_AdjustSize(QGraphicsWidget* self) {
	self->adjustSize();
}

void QGraphicsWidget_UnsetLayoutDirection(QGraphicsWidget* self) {
	self->unsetLayoutDirection();
}

QStyle* QGraphicsWidget_Style(QGraphicsWidget* self) {
	return self->style();
}

void QGraphicsWidget_SetStyle(QGraphicsWidget* self, QStyle* style) {
	self->setStyle(style);
}

QFont* QGraphicsWidget_Font(QGraphicsWidget* self) {
	QFont ret = self->font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

void QGraphicsWidget_SetFont(QGraphicsWidget* self, QFont* font) {
	self->setFont(*font);
}

QPalette* QGraphicsWidget_Palette(QGraphicsWidget* self) {
	QPalette ret = self->palette();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPalette*>(new QPalette(ret));
}

void QGraphicsWidget_SetPalette(QGraphicsWidget* self, QPalette* palette) {
	self->setPalette(*palette);
}

bool QGraphicsWidget_AutoFillBackground(QGraphicsWidget* self) {
	return self->autoFillBackground();
}

void QGraphicsWidget_SetAutoFillBackground(QGraphicsWidget* self, bool enabled) {
	self->setAutoFillBackground(enabled);
}

void QGraphicsWidget_Resize(QGraphicsWidget* self, QSizeF* size) {
	self->resize(*size);
}

void QGraphicsWidget_Resize2(QGraphicsWidget* self, double w, double h) {
	self->resize(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QGraphicsWidget_Size(QGraphicsWidget* self) {
	QSizeF ret = self->size();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QGraphicsWidget_SetGeometry(QGraphicsWidget* self, QRectF* rect) {
	self->setGeometry(*rect);
}

void QGraphicsWidget_SetGeometry2(QGraphicsWidget* self, double x, double y, double w, double h) {
	self->setGeometry(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QRectF* QGraphicsWidget_Rect(QGraphicsWidget* self) {
	QRectF ret = self->rect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QGraphicsWidget_SetContentsMargins(QGraphicsWidget* self, double left, double top, double right, double bottom) {
	self->setContentsMargins(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

void QGraphicsWidget_SetContentsMarginsWithMargins(QGraphicsWidget* self, QMarginsF* margins) {
	self->setContentsMargins(*margins);
}

void QGraphicsWidget_GetContentsMargins(QGraphicsWidget* self, double* left, double* top, double* right, double* bottom) {
	self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

void QGraphicsWidget_SetWindowFrameMargins(QGraphicsWidget* self, double left, double top, double right, double bottom) {
	self->setWindowFrameMargins(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

void QGraphicsWidget_SetWindowFrameMarginsWithMargins(QGraphicsWidget* self, QMarginsF* margins) {
	self->setWindowFrameMargins(*margins);
}

void QGraphicsWidget_GetWindowFrameMargins(QGraphicsWidget* self, double* left, double* top, double* right, double* bottom) {
	self->getWindowFrameMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

void QGraphicsWidget_UnsetWindowFrameMargins(QGraphicsWidget* self) {
	self->unsetWindowFrameMargins();
}

QRectF* QGraphicsWidget_WindowFrameGeometry(QGraphicsWidget* self) {
	QRectF ret = self->windowFrameGeometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QGraphicsWidget_WindowFrameRect(QGraphicsWidget* self) {
	QRectF ret = self->windowFrameRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

bool QGraphicsWidget_IsActiveWindow(QGraphicsWidget* self) {
	return self->isActiveWindow();
}

void QGraphicsWidget_SetWindowTitle(QGraphicsWidget* self, const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	self->setWindowTitle(title_QString);
}

void QGraphicsWidget_WindowTitle(QGraphicsWidget* self, char** _out, int* _out_Strlen) {
	QString ret = self->windowTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsWidget_SetTabOrder(QGraphicsWidget* first, QGraphicsWidget* second) {
	QGraphicsWidget::setTabOrder(first, second);
}

QGraphicsWidget* QGraphicsWidget_FocusWidget(QGraphicsWidget* self) {
	return self->focusWidget();
}

void QGraphicsWidget_ReleaseShortcut(QGraphicsWidget* self, int id) {
	self->releaseShortcut(static_cast<int>(id));
}

void QGraphicsWidget_SetShortcutEnabled(QGraphicsWidget* self, int id) {
	self->setShortcutEnabled(static_cast<int>(id));
}

void QGraphicsWidget_SetShortcutAutoRepeat(QGraphicsWidget* self, int id) {
	self->setShortcutAutoRepeat(static_cast<int>(id));
}

void QGraphicsWidget_AddAction(QGraphicsWidget* self, QAction* action) {
	self->addAction(action);
}

void QGraphicsWidget_AddActions(QGraphicsWidget* self, QAction** actions, size_t actions_len) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions_len);
	for(size_t i = 0; i < actions_len; ++i) {
		actions_QList.push_back(actions[i]);
	}
	self->addActions(actions_QList);
}

void QGraphicsWidget_InsertActions(QGraphicsWidget* self, QAction* before, QAction** actions, size_t actions_len) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions_len);
	for(size_t i = 0; i < actions_len; ++i) {
		actions_QList.push_back(actions[i]);
	}
	self->insertActions(before, actions_QList);
}

void QGraphicsWidget_InsertAction(QGraphicsWidget* self, QAction* before, QAction* action) {
	self->insertAction(before, action);
}

void QGraphicsWidget_RemoveAction(QGraphicsWidget* self, QAction* action) {
	self->removeAction(action);
}

void QGraphicsWidget_Actions(QGraphicsWidget* self, QAction*** _out, size_t* _out_len) {
	QList<QAction *> ret = self->actions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAction** __out = static_cast<QAction**>(malloc(sizeof(QAction*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

int QGraphicsWidget_Type(QGraphicsWidget* self) {
	return self->type();
}

void QGraphicsWidget_Paint(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option) {
	self->paint(painter, option);
}

void QGraphicsWidget_PaintWindowFrame(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option) {
	self->paintWindowFrame(painter, option);
}

QRectF* QGraphicsWidget_BoundingRect(QGraphicsWidget* self) {
	QRectF ret = self->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QPainterPath* QGraphicsWidget_Shape(QGraphicsWidget* self) {
	QPainterPath ret = self->shape();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

void QGraphicsWidget_GeometryChanged(QGraphicsWidget* self) {
	self->geometryChanged();
}

void QGraphicsWidget_connect_GeometryChanged(QGraphicsWidget* self, void* slot) {
	QGraphicsWidget::connect(self, static_cast<void (QGraphicsWidget::*)()>(&QGraphicsWidget::geometryChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsWidget_LayoutChanged(QGraphicsWidget* self) {
	self->layoutChanged();
}

void QGraphicsWidget_connect_LayoutChanged(QGraphicsWidget* self, void* slot) {
	QGraphicsWidget::connect(self, static_cast<void (QGraphicsWidget::*)()>(&QGraphicsWidget::layoutChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

bool QGraphicsWidget_Close(QGraphicsWidget* self) {
	return self->close();
}

void QGraphicsWidget_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsWidget_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsWidget_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsWidget_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsWidget_SetShortcutEnabled2(QGraphicsWidget* self, int id, bool enabled) {
	self->setShortcutEnabled(static_cast<int>(id), enabled);
}

void QGraphicsWidget_SetShortcutAutoRepeat2(QGraphicsWidget* self, int id, bool enabled) {
	self->setShortcutAutoRepeat(static_cast<int>(id), enabled);
}

void QGraphicsWidget_Paint3(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

void QGraphicsWidget_PaintWindowFrame3(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paintWindowFrame(painter, option, widget);
}

void QGraphicsWidget_Delete(QGraphicsWidget* self) {
	delete self;
}

