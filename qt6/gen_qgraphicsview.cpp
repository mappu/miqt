#include <QBrush>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QList>
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
#include <qgraphicsview.h>
#include "gen_qgraphicsview.h"
#include "_cgo_export.h"

QGraphicsView* QGraphicsView_new(QWidget* parent) {
	return new QGraphicsView(parent);
}

QGraphicsView* QGraphicsView_new2() {
	return new QGraphicsView();
}

QGraphicsView* QGraphicsView_new3(QGraphicsScene* scene) {
	return new QGraphicsView(scene);
}

QGraphicsView* QGraphicsView_new4(QGraphicsScene* scene, QWidget* parent) {
	return new QGraphicsView(scene, parent);
}

QMetaObject* QGraphicsView_MetaObject(const QGraphicsView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsView_Metacast(QGraphicsView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsView_Tr(const char* s) {
	QString _ret = QGraphicsView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QGraphicsView_SizeHint(const QGraphicsView* self) {
	return new QSize(self->sizeHint());
}

int QGraphicsView_RenderHints(const QGraphicsView* self) {
	QPainter::RenderHints _ret = self->renderHints();
	return static_cast<int>(_ret);
}

void QGraphicsView_SetRenderHint(QGraphicsView* self, int hint) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(hint));
}

void QGraphicsView_SetRenderHints(QGraphicsView* self, int hints) {
	self->setRenderHints(static_cast<QPainter::RenderHints>(hints));
}

int QGraphicsView_Alignment(const QGraphicsView* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QGraphicsView_SetAlignment(QGraphicsView* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

int QGraphicsView_TransformationAnchor(const QGraphicsView* self) {
	QGraphicsView::ViewportAnchor _ret = self->transformationAnchor();
	return static_cast<int>(_ret);
}

void QGraphicsView_SetTransformationAnchor(QGraphicsView* self, int anchor) {
	self->setTransformationAnchor(static_cast<QGraphicsView::ViewportAnchor>(anchor));
}

int QGraphicsView_ResizeAnchor(const QGraphicsView* self) {
	QGraphicsView::ViewportAnchor _ret = self->resizeAnchor();
	return static_cast<int>(_ret);
}

void QGraphicsView_SetResizeAnchor(QGraphicsView* self, int anchor) {
	self->setResizeAnchor(static_cast<QGraphicsView::ViewportAnchor>(anchor));
}

int QGraphicsView_ViewportUpdateMode(const QGraphicsView* self) {
	QGraphicsView::ViewportUpdateMode _ret = self->viewportUpdateMode();
	return static_cast<int>(_ret);
}

void QGraphicsView_SetViewportUpdateMode(QGraphicsView* self, int mode) {
	self->setViewportUpdateMode(static_cast<QGraphicsView::ViewportUpdateMode>(mode));
}

int QGraphicsView_OptimizationFlags(const QGraphicsView* self) {
	QGraphicsView::OptimizationFlags _ret = self->optimizationFlags();
	return static_cast<int>(_ret);
}

void QGraphicsView_SetOptimizationFlag(QGraphicsView* self, int flag) {
	self->setOptimizationFlag(static_cast<QGraphicsView::OptimizationFlag>(flag));
}

void QGraphicsView_SetOptimizationFlags(QGraphicsView* self, int flags) {
	self->setOptimizationFlags(static_cast<QGraphicsView::OptimizationFlags>(flags));
}

int QGraphicsView_DragMode(const QGraphicsView* self) {
	QGraphicsView::DragMode _ret = self->dragMode();
	return static_cast<int>(_ret);
}

void QGraphicsView_SetDragMode(QGraphicsView* self, int mode) {
	self->setDragMode(static_cast<QGraphicsView::DragMode>(mode));
}

int QGraphicsView_RubberBandSelectionMode(const QGraphicsView* self) {
	Qt::ItemSelectionMode _ret = self->rubberBandSelectionMode();
	return static_cast<int>(_ret);
}

void QGraphicsView_SetRubberBandSelectionMode(QGraphicsView* self, int mode) {
	self->setRubberBandSelectionMode(static_cast<Qt::ItemSelectionMode>(mode));
}

QRect* QGraphicsView_RubberBandRect(const QGraphicsView* self) {
	return new QRect(self->rubberBandRect());
}

int QGraphicsView_CacheMode(const QGraphicsView* self) {
	QGraphicsView::CacheMode _ret = self->cacheMode();
	return static_cast<int>(_ret);
}

void QGraphicsView_SetCacheMode(QGraphicsView* self, int mode) {
	self->setCacheMode(static_cast<QGraphicsView::CacheMode>(mode));
}

void QGraphicsView_ResetCachedContent(QGraphicsView* self) {
	self->resetCachedContent();
}

bool QGraphicsView_IsInteractive(const QGraphicsView* self) {
	return self->isInteractive();
}

void QGraphicsView_SetInteractive(QGraphicsView* self, bool allowed) {
	self->setInteractive(allowed);
}

QGraphicsScene* QGraphicsView_Scene(const QGraphicsView* self) {
	return self->scene();
}

void QGraphicsView_SetScene(QGraphicsView* self, QGraphicsScene* scene) {
	self->setScene(scene);
}

QRectF* QGraphicsView_SceneRect(const QGraphicsView* self) {
	return new QRectF(self->sceneRect());
}

void QGraphicsView_SetSceneRect(QGraphicsView* self, QRectF* rect) {
	self->setSceneRect(*rect);
}

void QGraphicsView_SetSceneRect2(QGraphicsView* self, double x, double y, double w, double h) {
	self->setSceneRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QTransform* QGraphicsView_Transform(const QGraphicsView* self) {
	return new QTransform(self->transform());
}

QTransform* QGraphicsView_ViewportTransform(const QGraphicsView* self) {
	return new QTransform(self->viewportTransform());
}

bool QGraphicsView_IsTransformed(const QGraphicsView* self) {
	return self->isTransformed();
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

struct miqt_array QGraphicsView_Items(const QGraphicsView* self) {
	QList<QGraphicsItem *> _ret = self->items();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array QGraphicsView_ItemsWithPos(const QGraphicsView* self, QPoint* pos) {
	QList<QGraphicsItem *> _ret = self->items(*pos);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array QGraphicsView_Items2(const QGraphicsView* self, int x, int y) {
	QList<QGraphicsItem *> _ret = self->items(static_cast<int>(x), static_cast<int>(y));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array QGraphicsView_ItemsWithRect(const QGraphicsView* self, QRect* rect) {
	QList<QGraphicsItem *> _ret = self->items(*rect);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array QGraphicsView_Items3(const QGraphicsView* self, int x, int y, int w, int h) {
	QList<QGraphicsItem *> _ret = self->items(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array QGraphicsView_ItemsWithPath(const QGraphicsView* self, QPainterPath* path) {
	QList<QGraphicsItem *> _ret = self->items(*path);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QGraphicsItem* QGraphicsView_ItemAt(const QGraphicsView* self, QPoint* pos) {
	return self->itemAt(*pos);
}

QGraphicsItem* QGraphicsView_ItemAt2(const QGraphicsView* self, int x, int y) {
	return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QPointF* QGraphicsView_MapToScene(const QGraphicsView* self, QPoint* point) {
	return new QPointF(self->mapToScene(*point));
}

QPainterPath* QGraphicsView_MapToSceneWithPath(const QGraphicsView* self, QPainterPath* path) {
	return new QPainterPath(self->mapToScene(*path));
}

QPoint* QGraphicsView_MapFromScene(const QGraphicsView* self, QPointF* point) {
	return new QPoint(self->mapFromScene(*point));
}

QPainterPath* QGraphicsView_MapFromSceneWithPath(const QGraphicsView* self, QPainterPath* path) {
	return new QPainterPath(self->mapFromScene(*path));
}

QPointF* QGraphicsView_MapToScene2(const QGraphicsView* self, int x, int y) {
	return new QPointF(self->mapToScene(static_cast<int>(x), static_cast<int>(y)));
}

QPoint* QGraphicsView_MapFromScene2(const QGraphicsView* self, double x, double y) {
	return new QPoint(self->mapFromScene(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QVariant* QGraphicsView_InputMethodQuery(const QGraphicsView* self, int query) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

QBrush* QGraphicsView_BackgroundBrush(const QGraphicsView* self) {
	return new QBrush(self->backgroundBrush());
}

void QGraphicsView_SetBackgroundBrush(QGraphicsView* self, QBrush* brush) {
	self->setBackgroundBrush(*brush);
}

QBrush* QGraphicsView_ForegroundBrush(const QGraphicsView* self) {
	return new QBrush(self->foregroundBrush());
}

void QGraphicsView_SetForegroundBrush(QGraphicsView* self, QBrush* brush) {
	self->setForegroundBrush(*brush);
}

void QGraphicsView_UpdateScene(QGraphicsView* self, struct miqt_array /* of QRectF* */ rects) {
	QList<QRectF> rects_QList;
	rects_QList.reserve(rects.len);
	QRectF** rects_arr = static_cast<QRectF**>(rects.data);
	for(size_t i = 0; i < rects.len; ++i) {
		rects_QList.push_back(*(rects_arr[i]));
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

void QGraphicsView_connect_RubberBandChanged(QGraphicsView* self, intptr_t slot) {
	QGraphicsView::connect(self, static_cast<void (QGraphicsView::*)(QRect, QPointF, QPointF)>(&QGraphicsView::rubberBandChanged), self, [=](QRect viewportRect, QPointF fromScenePoint, QPointF toScenePoint) {
		QRect* sigval1 = new QRect(viewportRect);
		QPointF* sigval2 = new QPointF(fromScenePoint);
		QPointF* sigval3 = new QPointF(toScenePoint);
		miqt_exec_callback_QGraphicsView_RubberBandChanged(slot, sigval1, sigval2, sigval3);
	});
}

struct miqt_string QGraphicsView_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsView_SetRenderHint2(QGraphicsView* self, int hint, bool enabled) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(hint), enabled);
}

void QGraphicsView_SetOptimizationFlag2(QGraphicsView* self, int flag, bool enabled) {
	self->setOptimizationFlag(static_cast<QGraphicsView::OptimizationFlag>(flag), enabled);
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

void QGraphicsView_FitInView22(QGraphicsView* self, QRectF* rect, int aspectRadioMode) {
	self->fitInView(*rect, static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_FitInView5(QGraphicsView* self, double x, double y, double w, double h, int aspectRadioMode) {
	self->fitInView(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_FitInView23(QGraphicsView* self, QGraphicsItem* item, int aspectRadioMode) {
	self->fitInView(item, static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_Render2(QGraphicsView* self, QPainter* painter, QRectF* target) {
	self->render(painter, *target);
}

void QGraphicsView_Render3(QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source) {
	self->render(painter, *target, *source);
}

void QGraphicsView_Render4(QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source, int aspectRatioMode) {
	self->render(painter, *target, *source, static_cast<Qt::AspectRatioMode>(aspectRatioMode));
}

struct miqt_array QGraphicsView_Items22(const QGraphicsView* self, QRect* rect, int mode) {
	QList<QGraphicsItem *> _ret = self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array QGraphicsView_Items5(const QGraphicsView* self, int x, int y, int w, int h, int mode) {
	QList<QGraphicsItem *> _ret = self->items(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::ItemSelectionMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array QGraphicsView_Items24(const QGraphicsView* self, QPainterPath* path, int mode) {
	QList<QGraphicsItem *> _ret = self->items(*path, static_cast<Qt::ItemSelectionMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
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

