#include <QBrush>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QList>
#include <QMatrix>
#include <QMetaObject>
#include <QPainter>
#include <QPainterPath>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include <QVariant>
#include <QWidget>
#include "qgraphicsview.h"

#include "gen_qgraphicsview.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QGraphicsView* QGraphicsView_new() {
	return new QGraphicsView();
}

QGraphicsView* QGraphicsView_new2(QGraphicsScene* scene) {
	return new QGraphicsView(scene);
}

QGraphicsView* QGraphicsView_new3(QWidget* parent) {
	return new QGraphicsView(parent);
}

QGraphicsView* QGraphicsView_new4(QGraphicsScene* scene, QWidget* parent) {
	return new QGraphicsView(scene, parent);
}

QMetaObject* QGraphicsView_MetaObject(QGraphicsView* self) {
	return (QMetaObject*) const_cast<const QGraphicsView*>(self)->metaObject();
}

void QGraphicsView_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsView_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QGraphicsView_SizeHint(QGraphicsView* self) {
	QSize ret = const_cast<const QGraphicsView*>(self)->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

int QGraphicsView_RenderHints(QGraphicsView* self) {
	QPainter::RenderHints ret = const_cast<const QGraphicsView*>(self)->renderHints();
	return static_cast<int>(ret);
}

void QGraphicsView_SetRenderHint(QGraphicsView* self, uintptr_t hint) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(hint));
}

void QGraphicsView_SetRenderHints(QGraphicsView* self, int hints) {
	self->setRenderHints(static_cast<QPainter::RenderHints>(hints));
}

int QGraphicsView_Alignment(QGraphicsView* self) {
	Qt::Alignment ret = const_cast<const QGraphicsView*>(self)->alignment();
	return static_cast<int>(ret);
}

void QGraphicsView_SetAlignment(QGraphicsView* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

uintptr_t QGraphicsView_TransformationAnchor(QGraphicsView* self) {
	QGraphicsView::ViewportAnchor ret = const_cast<const QGraphicsView*>(self)->transformationAnchor();
	return static_cast<uintptr_t>(ret);
}

void QGraphicsView_SetTransformationAnchor(QGraphicsView* self, uintptr_t anchor) {
	self->setTransformationAnchor(static_cast<QGraphicsView::ViewportAnchor>(anchor));
}

uintptr_t QGraphicsView_ResizeAnchor(QGraphicsView* self) {
	QGraphicsView::ViewportAnchor ret = const_cast<const QGraphicsView*>(self)->resizeAnchor();
	return static_cast<uintptr_t>(ret);
}

void QGraphicsView_SetResizeAnchor(QGraphicsView* self, uintptr_t anchor) {
	self->setResizeAnchor(static_cast<QGraphicsView::ViewportAnchor>(anchor));
}

uintptr_t QGraphicsView_ViewportUpdateMode(QGraphicsView* self) {
	QGraphicsView::ViewportUpdateMode ret = const_cast<const QGraphicsView*>(self)->viewportUpdateMode();
	return static_cast<uintptr_t>(ret);
}

void QGraphicsView_SetViewportUpdateMode(QGraphicsView* self, uintptr_t mode) {
	self->setViewportUpdateMode(static_cast<QGraphicsView::ViewportUpdateMode>(mode));
}

int QGraphicsView_OptimizationFlags(QGraphicsView* self) {
	QGraphicsView::OptimizationFlags ret = const_cast<const QGraphicsView*>(self)->optimizationFlags();
	return static_cast<int>(ret);
}

void QGraphicsView_SetOptimizationFlag(QGraphicsView* self, uintptr_t flag) {
	self->setOptimizationFlag(static_cast<QGraphicsView::OptimizationFlag>(flag));
}

void QGraphicsView_SetOptimizationFlags(QGraphicsView* self, int flags) {
	self->setOptimizationFlags(static_cast<QGraphicsView::OptimizationFlags>(flags));
}

uintptr_t QGraphicsView_DragMode(QGraphicsView* self) {
	QGraphicsView::DragMode ret = const_cast<const QGraphicsView*>(self)->dragMode();
	return static_cast<uintptr_t>(ret);
}

void QGraphicsView_SetDragMode(QGraphicsView* self, uintptr_t mode) {
	self->setDragMode(static_cast<QGraphicsView::DragMode>(mode));
}

uintptr_t QGraphicsView_RubberBandSelectionMode(QGraphicsView* self) {
	Qt::ItemSelectionMode ret = const_cast<const QGraphicsView*>(self)->rubberBandSelectionMode();
	return static_cast<uintptr_t>(ret);
}

void QGraphicsView_SetRubberBandSelectionMode(QGraphicsView* self, uintptr_t mode) {
	self->setRubberBandSelectionMode(static_cast<Qt::ItemSelectionMode>(mode));
}

QRect* QGraphicsView_RubberBandRect(QGraphicsView* self) {
	QRect ret = const_cast<const QGraphicsView*>(self)->rubberBandRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

int QGraphicsView_CacheMode(QGraphicsView* self) {
	QGraphicsView::CacheMode ret = const_cast<const QGraphicsView*>(self)->cacheMode();
	return static_cast<int>(ret);
}

void QGraphicsView_SetCacheMode(QGraphicsView* self, int mode) {
	self->setCacheMode(static_cast<QGraphicsView::CacheMode>(mode));
}

void QGraphicsView_ResetCachedContent(QGraphicsView* self) {
	self->resetCachedContent();
}

bool QGraphicsView_IsInteractive(QGraphicsView* self) {
	return const_cast<const QGraphicsView*>(self)->isInteractive();
}

void QGraphicsView_SetInteractive(QGraphicsView* self, bool allowed) {
	self->setInteractive(allowed);
}

QGraphicsScene* QGraphicsView_Scene(QGraphicsView* self) {
	return const_cast<const QGraphicsView*>(self)->scene();
}

void QGraphicsView_SetScene(QGraphicsView* self, QGraphicsScene* scene) {
	self->setScene(scene);
}

QRectF* QGraphicsView_SceneRect(QGraphicsView* self) {
	QRectF ret = const_cast<const QGraphicsView*>(self)->sceneRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QGraphicsView_SetSceneRect(QGraphicsView* self, QRectF* rect) {
	self->setSceneRect(*rect);
}

void QGraphicsView_SetSceneRect2(QGraphicsView* self, double x, double y, double w, double h) {
	self->setSceneRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QMatrix* QGraphicsView_Matrix(QGraphicsView* self) {
	QMatrix ret = const_cast<const QGraphicsView*>(self)->matrix();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMatrix*>(new QMatrix(ret));
}

void QGraphicsView_SetMatrix(QGraphicsView* self, QMatrix* matrix) {
	self->setMatrix(*matrix);
}

void QGraphicsView_ResetMatrix(QGraphicsView* self) {
	self->resetMatrix();
}

QTransform* QGraphicsView_Transform(QGraphicsView* self) {
	QTransform ret = const_cast<const QGraphicsView*>(self)->transform();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

QTransform* QGraphicsView_ViewportTransform(QGraphicsView* self) {
	QTransform ret = const_cast<const QGraphicsView*>(self)->viewportTransform();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

bool QGraphicsView_IsTransformed(QGraphicsView* self) {
	return const_cast<const QGraphicsView*>(self)->isTransformed();
}

void QGraphicsView_SetTransform(QGraphicsView* self, QTransform* matrix) {
	self->setTransform(*matrix);
}

void QGraphicsView_ResetTransform(QGraphicsView* self) {
	self->resetTransform();
}

void QGraphicsView_Rotate(QGraphicsView* self, double angle) {
	self->rotate(static_cast<qreal>(angle));
}

void QGraphicsView_Scale(QGraphicsView* self, double sx, double sy) {
	self->scale(static_cast<qreal>(sx), static_cast<qreal>(sy));
}

void QGraphicsView_Shear(QGraphicsView* self, double sh, double sv) {
	self->shear(static_cast<qreal>(sh), static_cast<qreal>(sv));
}

void QGraphicsView_Translate(QGraphicsView* self, double dx, double dy) {
	self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QGraphicsView_CenterOn(QGraphicsView* self, QPointF* pos) {
	self->centerOn(*pos);
}

void QGraphicsView_CenterOn2(QGraphicsView* self, double x, double y) {
	self->centerOn(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QGraphicsView_CenterOnWithItem(QGraphicsView* self, QGraphicsItem* item) {
	self->centerOn(item);
}

void QGraphicsView_EnsureVisible(QGraphicsView* self, QRectF* rect) {
	self->ensureVisible(*rect);
}

void QGraphicsView_EnsureVisible2(QGraphicsView* self, double x, double y, double w, double h) {
	self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsView_EnsureVisibleWithItem(QGraphicsView* self, QGraphicsItem* item) {
	self->ensureVisible(item);
}

void QGraphicsView_FitInView(QGraphicsView* self, QRectF* rect) {
	self->fitInView(*rect);
}

void QGraphicsView_FitInView2(QGraphicsView* self, double x, double y, double w, double h) {
	self->fitInView(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsView_FitInViewWithItem(QGraphicsView* self, QGraphicsItem* item) {
	self->fitInView(item);
}

void QGraphicsView_Render(QGraphicsView* self, QPainter* painter) {
	self->render(painter);
}

void QGraphicsView_Items(QGraphicsView* self, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = const_cast<const QGraphicsView*>(self)->items();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsView_ItemsWithPos(QGraphicsView* self, QPoint* pos, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = const_cast<const QGraphicsView*>(self)->items(*pos);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsView_Items2(QGraphicsView* self, int x, int y, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = const_cast<const QGraphicsView*>(self)->items(static_cast<int>(x), static_cast<int>(y));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsView_ItemsWithRect(QGraphicsView* self, QRect* rect, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = const_cast<const QGraphicsView*>(self)->items(*rect);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsView_Items3(QGraphicsView* self, int x, int y, int w, int h, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = const_cast<const QGraphicsView*>(self)->items(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsView_ItemsWithPath(QGraphicsView* self, QPainterPath* path, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = const_cast<const QGraphicsView*>(self)->items(*path);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QGraphicsItem* QGraphicsView_ItemAt(QGraphicsView* self, QPoint* pos) {
	return const_cast<const QGraphicsView*>(self)->itemAt(*pos);
}

QGraphicsItem* QGraphicsView_ItemAt2(QGraphicsView* self, int x, int y) {
	return const_cast<const QGraphicsView*>(self)->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QPointF* QGraphicsView_MapToScene(QGraphicsView* self, QPoint* point) {
	QPointF ret = const_cast<const QGraphicsView*>(self)->mapToScene(*point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPainterPath* QGraphicsView_MapToSceneWithPath(QGraphicsView* self, QPainterPath* path) {
	QPainterPath ret = const_cast<const QGraphicsView*>(self)->mapToScene(*path);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QPoint* QGraphicsView_MapFromScene(QGraphicsView* self, QPointF* point) {
	QPoint ret = const_cast<const QGraphicsView*>(self)->mapFromScene(*point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPainterPath* QGraphicsView_MapFromSceneWithPath(QGraphicsView* self, QPainterPath* path) {
	QPainterPath ret = const_cast<const QGraphicsView*>(self)->mapFromScene(*path);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QPointF* QGraphicsView_MapToScene2(QGraphicsView* self, int x, int y) {
	QPointF ret = const_cast<const QGraphicsView*>(self)->mapToScene(static_cast<int>(x), static_cast<int>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPoint* QGraphicsView_MapFromScene2(QGraphicsView* self, double x, double y) {
	QPoint ret = const_cast<const QGraphicsView*>(self)->mapFromScene(static_cast<qreal>(x), static_cast<qreal>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QVariant* QGraphicsView_InputMethodQuery(QGraphicsView* self, uintptr_t query) {
	QVariant ret = const_cast<const QGraphicsView*>(self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QBrush* QGraphicsView_BackgroundBrush(QGraphicsView* self) {
	QBrush ret = const_cast<const QGraphicsView*>(self)->backgroundBrush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QGraphicsView_SetBackgroundBrush(QGraphicsView* self, QBrush* brush) {
	self->setBackgroundBrush(*brush);
}

QBrush* QGraphicsView_ForegroundBrush(QGraphicsView* self) {
	QBrush ret = const_cast<const QGraphicsView*>(self)->foregroundBrush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QGraphicsView_SetForegroundBrush(QGraphicsView* self, QBrush* brush) {
	self->setForegroundBrush(*brush);
}

void QGraphicsView_UpdateScene(QGraphicsView* self, QRectF** rects, size_t rects_len) {
	QList<QRectF> rects_QList;
	rects_QList.reserve(rects_len);
	for(size_t i = 0; i < rects_len; ++i) {
		rects_QList.push_back(*(rects[i]));
	}
	self->updateScene(rects_QList);
}

void QGraphicsView_InvalidateScene(QGraphicsView* self) {
	self->invalidateScene();
}

void QGraphicsView_UpdateSceneRect(QGraphicsView* self, QRectF* rect) {
	self->updateSceneRect(*rect);
}

void QGraphicsView_RubberBandChanged(QGraphicsView* self, QRect* viewportRect, QPointF* fromScenePoint, QPointF* toScenePoint) {
	self->rubberBandChanged(*viewportRect, *fromScenePoint, *toScenePoint);
}

void QGraphicsView_connect_RubberBandChanged(QGraphicsView* self, void* slot) {
	QGraphicsView::connect(self, static_cast<void (QGraphicsView::*)(QRect, QPointF, QPointF)>(&QGraphicsView::rubberBandChanged), self, [=](QRect viewportRect, QPointF fromScenePoint, QPointF toScenePoint) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsView_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsView_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsView_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsView_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsView_SetRenderHint2(QGraphicsView* self, uintptr_t hint, bool enabled) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(hint), enabled);
}

void QGraphicsView_SetOptimizationFlag2(QGraphicsView* self, uintptr_t flag, bool enabled) {
	self->setOptimizationFlag(static_cast<QGraphicsView::OptimizationFlag>(flag), enabled);
}

void QGraphicsView_SetMatrix2(QGraphicsView* self, QMatrix* matrix, bool combine) {
	self->setMatrix(*matrix, combine);
}

void QGraphicsView_SetTransform2(QGraphicsView* self, QTransform* matrix, bool combine) {
	self->setTransform(*matrix, combine);
}

void QGraphicsView_EnsureVisible22(QGraphicsView* self, QRectF* rect, int xmargin) {
	self->ensureVisible(*rect, static_cast<int>(xmargin));
}

void QGraphicsView_EnsureVisible3(QGraphicsView* self, QRectF* rect, int xmargin, int ymargin) {
	self->ensureVisible(*rect, static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsView_EnsureVisible5(QGraphicsView* self, double x, double y, double w, double h, int xmargin) {
	self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xmargin));
}

void QGraphicsView_EnsureVisible6(QGraphicsView* self, double x, double y, double w, double h, int xmargin, int ymargin) {
	self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsView_EnsureVisible23(QGraphicsView* self, QGraphicsItem* item, int xmargin) {
	self->ensureVisible(item, static_cast<int>(xmargin));
}

void QGraphicsView_EnsureVisible32(QGraphicsView* self, QGraphicsItem* item, int xmargin, int ymargin) {
	self->ensureVisible(item, static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsView_FitInView22(QGraphicsView* self, QRectF* rect, uintptr_t aspectRadioMode) {
	self->fitInView(*rect, static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_FitInView5(QGraphicsView* self, double x, double y, double w, double h, uintptr_t aspectRadioMode) {
	self->fitInView(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_FitInView23(QGraphicsView* self, QGraphicsItem* item, uintptr_t aspectRadioMode) {
	self->fitInView(item, static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_Render2(QGraphicsView* self, QPainter* painter, QRectF* target) {
	self->render(painter, *target);
}

void QGraphicsView_Render3(QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source) {
	self->render(painter, *target, *source);
}

void QGraphicsView_Render4(QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source, uintptr_t aspectRatioMode) {
	self->render(painter, *target, *source, static_cast<Qt::AspectRatioMode>(aspectRatioMode));
}

void QGraphicsView_Items22(QGraphicsView* self, QRect* rect, uintptr_t mode, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsView_Items5(QGraphicsView* self, int x, int y, int w, int h, uintptr_t mode, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->items(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::ItemSelectionMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsView_Items24(QGraphicsView* self, QPainterPath* path, uintptr_t mode, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->items(*path, static_cast<Qt::ItemSelectionMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsView_InvalidateScene1(QGraphicsView* self, QRectF* rect) {
	self->invalidateScene(*rect);
}

void QGraphicsView_InvalidateScene2(QGraphicsView* self, QRectF* rect, int layers) {
	self->invalidateScene(*rect, static_cast<QGraphicsScene::SceneLayers>(layers));
}

void QGraphicsView_Delete(QGraphicsView* self) {
	delete self;
}

