#include "gen_qgraphicsview.h"
#include "qgraphicsview.h"

#include <QBrush>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QList>
#include <QMatrix>
#include <QMetaObject>
#include <QPainterPath>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QString>
#include <QTransform>
#include <QWidget>


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
	return (QMetaObject*) self->metaObject();
}

void QGraphicsView_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsView_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QGraphicsView_SizeHint(QGraphicsView* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QRect* QGraphicsView_RubberBandRect(QGraphicsView* self) {
	QRect ret = self->rubberBandRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QGraphicsView_ResetCachedContent(QGraphicsView* self) {
	self->resetCachedContent();
}

bool QGraphicsView_IsInteractive(QGraphicsView* self) {
	return self->isInteractive();
}

void QGraphicsView_SetInteractive(QGraphicsView* self, bool allowed) {
	self->setInteractive(allowed);
}

QGraphicsScene* QGraphicsView_Scene(QGraphicsView* self) {
	return self->scene();
}

void QGraphicsView_SetScene(QGraphicsView* self, QGraphicsScene* scene) {
	self->setScene(scene);
}

QRectF* QGraphicsView_SceneRect(QGraphicsView* self) {
	QRectF ret = self->sceneRect();
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
	QMatrix ret = self->matrix();
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
	QTransform ret = self->transform();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

QTransform* QGraphicsView_ViewportTransform(QGraphicsView* self) {
	QTransform ret = self->viewportTransform();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

bool QGraphicsView_IsTransformed(QGraphicsView* self) {
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

void QGraphicsView_Items(QGraphicsView* self, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem *> ret = self->items();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsView_ItemsWithPos(QGraphicsView* self, QPoint* pos, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem *> ret = self->items(*pos);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsView_Items2(QGraphicsView* self, int x, int y, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem *> ret = self->items(static_cast<int>(x), static_cast<int>(y));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QGraphicsItem* QGraphicsView_ItemAt(QGraphicsView* self, QPoint* pos) {
	return self->itemAt(*pos);
}

QGraphicsItem* QGraphicsView_ItemAt2(QGraphicsView* self, int x, int y) {
	return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QPointF* QGraphicsView_MapToScene(QGraphicsView* self, QPoint* point) {
	QPointF ret = self->mapToScene(*point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPainterPath* QGraphicsView_MapToSceneWithPath(QGraphicsView* self, QPainterPath* path) {
	QPainterPath ret = self->mapToScene(*path);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QPoint* QGraphicsView_MapFromScene(QGraphicsView* self, QPointF* point) {
	QPoint ret = self->mapFromScene(*point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPainterPath* QGraphicsView_MapFromSceneWithPath(QGraphicsView* self, QPainterPath* path) {
	QPainterPath ret = self->mapFromScene(*path);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QPointF* QGraphicsView_MapToScene2(QGraphicsView* self, int x, int y) {
	QPointF ret = self->mapToScene(static_cast<int>(x), static_cast<int>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPoint* QGraphicsView_MapFromScene2(QGraphicsView* self, double x, double y) {
	QPoint ret = self->mapFromScene(static_cast<qreal>(x), static_cast<qreal>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QBrush* QGraphicsView_BackgroundBrush(QGraphicsView* self) {
	QBrush ret = self->backgroundBrush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QGraphicsView_SetBackgroundBrush(QGraphicsView* self, QBrush* brush) {
	self->setBackgroundBrush(*brush);
}

QBrush* QGraphicsView_ForegroundBrush(QGraphicsView* self) {
	QBrush ret = self->foregroundBrush();
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

void QGraphicsView_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsView_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsView_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsView_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

void QGraphicsView_Delete(QGraphicsView* self) {
	delete self;
}

