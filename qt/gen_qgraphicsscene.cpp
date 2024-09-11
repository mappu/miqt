#include <QBrush>
#include <QEvent>
#include <QFont>
#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <QGraphicsItemGroup>
#include <QGraphicsLineItem>
#include <QGraphicsPathItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsProxyWidget>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsSimpleTextItem>
#include <QGraphicsTextItem>
#include <QGraphicsView>
#include <QGraphicsWidget>
#include <QLineF>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPalette>
#include <QPen>
#include <QPixmap>
#include <QPointF>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QTransform>
#include <QVariant>
#include <QWidget>
#include "qgraphicsscene.h"

#include "gen_qgraphicsscene.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QGraphicsScene* QGraphicsScene_new() {
	return new QGraphicsScene();
}

QGraphicsScene* QGraphicsScene_new2(QRectF* sceneRect) {
	return new QGraphicsScene(*sceneRect);
}

QGraphicsScene* QGraphicsScene_new3(double x, double y, double width, double height) {
	return new QGraphicsScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(width), static_cast<qreal>(height));
}

QGraphicsScene* QGraphicsScene_new4(QObject* parent) {
	return new QGraphicsScene(parent);
}

QGraphicsScene* QGraphicsScene_new5(QRectF* sceneRect, QObject* parent) {
	return new QGraphicsScene(*sceneRect, parent);
}

QGraphicsScene* QGraphicsScene_new6(double x, double y, double width, double height, QObject* parent) {
	return new QGraphicsScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(width), static_cast<qreal>(height), parent);
}

QMetaObject* QGraphicsScene_MetaObject(const QGraphicsScene* self) {
	return (QMetaObject*) self->metaObject();
}

void QGraphicsScene_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsScene::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsScene_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsScene::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QRectF* QGraphicsScene_SceneRect(const QGraphicsScene* self) {
	QRectF ret = self->sceneRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

double QGraphicsScene_Width(const QGraphicsScene* self) {
	return self->width();
}

double QGraphicsScene_Height(const QGraphicsScene* self) {
	return self->height();
}

void QGraphicsScene_SetSceneRect(QGraphicsScene* self, QRectF* rect) {
	self->setSceneRect(*rect);
}

void QGraphicsScene_SetSceneRect2(QGraphicsScene* self, double x, double y, double w, double h) {
	self->setSceneRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsScene_Render(QGraphicsScene* self, QPainter* painter) {
	self->render(painter);
}

uintptr_t QGraphicsScene_ItemIndexMethod(const QGraphicsScene* self) {
	QGraphicsScene::ItemIndexMethod ret = self->itemIndexMethod();
	return static_cast<uintptr_t>(ret);
}

void QGraphicsScene_SetItemIndexMethod(QGraphicsScene* self, uintptr_t method) {
	self->setItemIndexMethod(static_cast<QGraphicsScene::ItemIndexMethod>(method));
}

bool QGraphicsScene_IsSortCacheEnabled(const QGraphicsScene* self) {
	return self->isSortCacheEnabled();
}

void QGraphicsScene_SetSortCacheEnabled(QGraphicsScene* self, bool enabled) {
	self->setSortCacheEnabled(enabled);
}

int QGraphicsScene_BspTreeDepth(const QGraphicsScene* self) {
	return self->bspTreeDepth();
}

void QGraphicsScene_SetBspTreeDepth(QGraphicsScene* self, int depth) {
	self->setBspTreeDepth(static_cast<int>(depth));
}

QRectF* QGraphicsScene_ItemsBoundingRect(const QGraphicsScene* self) {
	QRectF ret = self->itemsBoundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QGraphicsScene_Items(const QGraphicsScene* self, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->items();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsScene_ItemsWithPos(const QGraphicsScene* self, QPointF* pos, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->items(*pos);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsScene_ItemsWithRect(const QGraphicsScene* self, QRectF* rect, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->items(*rect);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsScene_ItemsWithPath(const QGraphicsScene* self, QPainterPath* path, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->items(*path);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsScene_CollidingItems(const QGraphicsScene* self, QGraphicsItem* item, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->collidingItems(item);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QGraphicsItem* QGraphicsScene_ItemAt(const QGraphicsScene* self, QPointF* pos, QTransform* deviceTransform) {
	return self->itemAt(*pos, *deviceTransform);
}

void QGraphicsScene_Items2(const QGraphicsScene* self, double x, double y, double w, double h, uintptr_t mode, uintptr_t order, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->items(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QGraphicsItem* QGraphicsScene_ItemAt2(const QGraphicsScene* self, double x, double y, QTransform* deviceTransform) {
	return self->itemAt(static_cast<qreal>(x), static_cast<qreal>(y), *deviceTransform);
}

void QGraphicsScene_SelectedItems(const QGraphicsScene* self, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->selectedItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QPainterPath* QGraphicsScene_SelectionArea(const QGraphicsScene* self) {
	QPainterPath ret = self->selectionArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

void QGraphicsScene_SetSelectionArea(QGraphicsScene* self, QPainterPath* path, QTransform* deviceTransform) {
	self->setSelectionArea(*path, *deviceTransform);
}

void QGraphicsScene_SetSelectionAreaWithPath(QGraphicsScene* self, QPainterPath* path) {
	self->setSelectionArea(*path);
}

void QGraphicsScene_SetSelectionArea2(QGraphicsScene* self, QPainterPath* path, uintptr_t selectionOperation) {
	self->setSelectionArea(*path, static_cast<Qt::ItemSelectionOperation>(selectionOperation));
}

QGraphicsItemGroup* QGraphicsScene_CreateItemGroup(QGraphicsScene* self, QGraphicsItem** items, size_t items_len) {
	QList<QGraphicsItem*> items_QList;
	items_QList.reserve(items_len);
	for(size_t i = 0; i < items_len; ++i) {
		items_QList.push_back(items[i]);
	}
	return self->createItemGroup(items_QList);
}

void QGraphicsScene_DestroyItemGroup(QGraphicsScene* self, QGraphicsItemGroup* group) {
	self->destroyItemGroup(group);
}

void QGraphicsScene_AddItem(QGraphicsScene* self, QGraphicsItem* item) {
	self->addItem(item);
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse(QGraphicsScene* self, QRectF* rect) {
	return self->addEllipse(*rect);
}

QGraphicsLineItem* QGraphicsScene_AddLine(QGraphicsScene* self, QLineF* line) {
	return self->addLine(*line);
}

QGraphicsPathItem* QGraphicsScene_AddPath(QGraphicsScene* self, QPainterPath* path) {
	return self->addPath(*path);
}

QGraphicsPixmapItem* QGraphicsScene_AddPixmap(QGraphicsScene* self, QPixmap* pixmap) {
	return self->addPixmap(*pixmap);
}

QGraphicsRectItem* QGraphicsScene_AddRect(QGraphicsScene* self, QRectF* rect) {
	return self->addRect(*rect);
}

QGraphicsTextItem* QGraphicsScene_AddText(QGraphicsScene* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addText(text_QString);
}

QGraphicsSimpleTextItem* QGraphicsScene_AddSimpleText(QGraphicsScene* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addSimpleText(text_QString);
}

QGraphicsProxyWidget* QGraphicsScene_AddWidget(QGraphicsScene* self, QWidget* widget) {
	return self->addWidget(widget);
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse2(QGraphicsScene* self, double x, double y, double w, double h) {
	return self->addEllipse(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QGraphicsLineItem* QGraphicsScene_AddLine2(QGraphicsScene* self, double x1, double y1, double x2, double y2) {
	return self->addLine(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

QGraphicsRectItem* QGraphicsScene_AddRect2(QGraphicsScene* self, double x, double y, double w, double h) {
	return self->addRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsScene_RemoveItem(QGraphicsScene* self, QGraphicsItem* item) {
	self->removeItem(item);
}

QGraphicsItem* QGraphicsScene_FocusItem(const QGraphicsScene* self) {
	return self->focusItem();
}

void QGraphicsScene_SetFocusItem(QGraphicsScene* self, QGraphicsItem* item) {
	self->setFocusItem(item);
}

bool QGraphicsScene_HasFocus(const QGraphicsScene* self) {
	return self->hasFocus();
}

void QGraphicsScene_SetFocus(QGraphicsScene* self) {
	self->setFocus();
}

void QGraphicsScene_ClearFocus(QGraphicsScene* self) {
	self->clearFocus();
}

void QGraphicsScene_SetStickyFocus(QGraphicsScene* self, bool enabled) {
	self->setStickyFocus(enabled);
}

bool QGraphicsScene_StickyFocus(const QGraphicsScene* self) {
	return self->stickyFocus();
}

QGraphicsItem* QGraphicsScene_MouseGrabberItem(const QGraphicsScene* self) {
	return self->mouseGrabberItem();
}

QBrush* QGraphicsScene_BackgroundBrush(const QGraphicsScene* self) {
	QBrush ret = self->backgroundBrush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QGraphicsScene_SetBackgroundBrush(QGraphicsScene* self, QBrush* brush) {
	self->setBackgroundBrush(*brush);
}

QBrush* QGraphicsScene_ForegroundBrush(const QGraphicsScene* self) {
	QBrush ret = self->foregroundBrush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QGraphicsScene_SetForegroundBrush(QGraphicsScene* self, QBrush* brush) {
	self->setForegroundBrush(*brush);
}

QVariant* QGraphicsScene_InputMethodQuery(const QGraphicsScene* self, uintptr_t query) {
	QVariant ret = self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QGraphicsScene_Views(const QGraphicsScene* self, QGraphicsView*** _out, size_t* _out_len) {
	QList<QGraphicsView*> ret = self->views();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsView** __out = static_cast<QGraphicsView**>(malloc(sizeof(QGraphicsView*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsScene_Update(QGraphicsScene* self, double x, double y, double w, double h) {
	self->update(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsScene_Invalidate(QGraphicsScene* self, double x, double y, double w, double h) {
	self->invalidate(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QStyle* QGraphicsScene_Style(const QGraphicsScene* self) {
	return self->style();
}

void QGraphicsScene_SetStyle(QGraphicsScene* self, QStyle* style) {
	self->setStyle(style);
}

QFont* QGraphicsScene_Font(const QGraphicsScene* self) {
	QFont ret = self->font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

void QGraphicsScene_SetFont(QGraphicsScene* self, QFont* font) {
	self->setFont(*font);
}

QPalette* QGraphicsScene_Palette(const QGraphicsScene* self) {
	QPalette ret = self->palette();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPalette*>(new QPalette(ret));
}

void QGraphicsScene_SetPalette(QGraphicsScene* self, QPalette* palette) {
	self->setPalette(*palette);
}

bool QGraphicsScene_IsActive(const QGraphicsScene* self) {
	return self->isActive();
}

QGraphicsItem* QGraphicsScene_ActivePanel(const QGraphicsScene* self) {
	return self->activePanel();
}

void QGraphicsScene_SetActivePanel(QGraphicsScene* self, QGraphicsItem* item) {
	self->setActivePanel(item);
}

QGraphicsWidget* QGraphicsScene_ActiveWindow(const QGraphicsScene* self) {
	return self->activeWindow();
}

void QGraphicsScene_SetActiveWindow(QGraphicsScene* self, QGraphicsWidget* widget) {
	self->setActiveWindow(widget);
}

bool QGraphicsScene_SendEvent(QGraphicsScene* self, QGraphicsItem* item, QEvent* event) {
	return self->sendEvent(item, event);
}

double QGraphicsScene_MinimumRenderSize(const QGraphicsScene* self) {
	return self->minimumRenderSize();
}

void QGraphicsScene_SetMinimumRenderSize(QGraphicsScene* self, double minSize) {
	self->setMinimumRenderSize(static_cast<qreal>(minSize));
}

bool QGraphicsScene_FocusOnTouch(const QGraphicsScene* self) {
	return self->focusOnTouch();
}

void QGraphicsScene_SetFocusOnTouch(QGraphicsScene* self, bool enabled) {
	self->setFocusOnTouch(enabled);
}

void QGraphicsScene_Update2(QGraphicsScene* self) {
	self->update();
}

void QGraphicsScene_Invalidate2(QGraphicsScene* self) {
	self->invalidate();
}

void QGraphicsScene_Advance(QGraphicsScene* self) {
	self->advance();
}

void QGraphicsScene_ClearSelection(QGraphicsScene* self) {
	self->clearSelection();
}

void QGraphicsScene_Clear(QGraphicsScene* self) {
	self->clear();
}

void QGraphicsScene_Changed(QGraphicsScene* self, QRectF** region, size_t region_len) {
	QList<QRectF> region_QList;
	region_QList.reserve(region_len);
	for(size_t i = 0; i < region_len; ++i) {
		region_QList.push_back(*(region[i]));
	}
	self->changed(region_QList);
}

void QGraphicsScene_connect_Changed(QGraphicsScene* self, void* slot) {
	QGraphicsScene::connect(self, static_cast<void (QGraphicsScene::*)(const QList<QRectF>&)>(&QGraphicsScene::changed), self, [=](const QList<QRectF>& region) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsScene_SceneRectChanged(QGraphicsScene* self, QRectF* rect) {
	self->sceneRectChanged(*rect);
}

void QGraphicsScene_connect_SceneRectChanged(QGraphicsScene* self, void* slot) {
	QGraphicsScene::connect(self, static_cast<void (QGraphicsScene::*)(const QRectF&)>(&QGraphicsScene::sceneRectChanged), self, [=](const QRectF& rect) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsScene_SelectionChanged(QGraphicsScene* self) {
	self->selectionChanged();
}

void QGraphicsScene_connect_SelectionChanged(QGraphicsScene* self, void* slot) {
	QGraphicsScene::connect(self, static_cast<void (QGraphicsScene::*)()>(&QGraphicsScene::selectionChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsScene_FocusItemChanged(QGraphicsScene* self, QGraphicsItem* newFocus, QGraphicsItem* oldFocus, uintptr_t reason) {
	self->focusItemChanged(newFocus, oldFocus, static_cast<Qt::FocusReason>(reason));
}

void QGraphicsScene_connect_FocusItemChanged(QGraphicsScene* self, void* slot) {
	QGraphicsScene::connect(self, static_cast<void (QGraphicsScene::*)(QGraphicsItem*, QGraphicsItem*, Qt::FocusReason)>(&QGraphicsScene::focusItemChanged), self, [=](QGraphicsItem* newFocus, QGraphicsItem* oldFocus, Qt::FocusReason reason) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsScene_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsScene::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsScene_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsScene::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsScene_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsScene::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsScene_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsScene::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsScene_Render2(QGraphicsScene* self, QPainter* painter, QRectF* target) {
	self->render(painter, *target);
}

void QGraphicsScene_Render3(QGraphicsScene* self, QPainter* painter, QRectF* target, QRectF* source) {
	self->render(painter, *target, *source);
}

void QGraphicsScene_Render4(QGraphicsScene* self, QPainter* painter, QRectF* target, QRectF* source, uintptr_t aspectRatioMode) {
	self->render(painter, *target, *source, static_cast<Qt::AspectRatioMode>(aspectRatioMode));
}

void QGraphicsScene_Items1(const QGraphicsScene* self, uintptr_t order, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->items(static_cast<Qt::SortOrder>(order));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsScene_Items22(const QGraphicsScene* self, QPointF* pos, uintptr_t mode, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->items(*pos, static_cast<Qt::ItemSelectionMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsScene_Items3(const QGraphicsScene* self, QPointF* pos, uintptr_t mode, uintptr_t order, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->items(*pos, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsScene_Items4(const QGraphicsScene* self, QPointF* pos, uintptr_t mode, uintptr_t order, QTransform* deviceTransform, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->items(*pos, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsScene_Items23(const QGraphicsScene* self, QRectF* rect, uintptr_t mode, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsScene_Items32(const QGraphicsScene* self, QRectF* rect, uintptr_t mode, uintptr_t order, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsScene_Items42(const QGraphicsScene* self, QRectF* rect, uintptr_t mode, uintptr_t order, QTransform* deviceTransform, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsScene_Items25(const QGraphicsScene* self, QPainterPath* path, uintptr_t mode, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->items(*path, static_cast<Qt::ItemSelectionMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsScene_Items34(const QGraphicsScene* self, QPainterPath* path, uintptr_t mode, uintptr_t order, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->items(*path, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsScene_Items44(const QGraphicsScene* self, QPainterPath* path, uintptr_t mode, uintptr_t order, QTransform* deviceTransform, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->items(*path, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsScene_CollidingItems2(const QGraphicsScene* self, QGraphicsItem* item, uintptr_t mode, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->collidingItems(item, static_cast<Qt::ItemSelectionMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsScene_Items7(const QGraphicsScene* self, double x, double y, double w, double h, uintptr_t mode, uintptr_t order, QTransform* deviceTransform, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->items(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsScene_SetSelectionArea22(QGraphicsScene* self, QPainterPath* path, uintptr_t mode) {
	self->setSelectionArea(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

void QGraphicsScene_SetSelectionArea3(QGraphicsScene* self, QPainterPath* path, uintptr_t mode, QTransform* deviceTransform) {
	self->setSelectionArea(*path, static_cast<Qt::ItemSelectionMode>(mode), *deviceTransform);
}

void QGraphicsScene_SetSelectionArea32(QGraphicsScene* self, QPainterPath* path, uintptr_t selectionOperation, uintptr_t mode) {
	self->setSelectionArea(*path, static_cast<Qt::ItemSelectionOperation>(selectionOperation), static_cast<Qt::ItemSelectionMode>(mode));
}

void QGraphicsScene_SetSelectionArea4(QGraphicsScene* self, QPainterPath* path, uintptr_t selectionOperation, uintptr_t mode, QTransform* deviceTransform) {
	self->setSelectionArea(*path, static_cast<Qt::ItemSelectionOperation>(selectionOperation), static_cast<Qt::ItemSelectionMode>(mode), *deviceTransform);
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse22(QGraphicsScene* self, QRectF* rect, QPen* pen) {
	return self->addEllipse(*rect, *pen);
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse3(QGraphicsScene* self, QRectF* rect, QPen* pen, QBrush* brush) {
	return self->addEllipse(*rect, *pen, *brush);
}

QGraphicsLineItem* QGraphicsScene_AddLine22(QGraphicsScene* self, QLineF* line, QPen* pen) {
	return self->addLine(*line, *pen);
}

QGraphicsPathItem* QGraphicsScene_AddPath2(QGraphicsScene* self, QPainterPath* path, QPen* pen) {
	return self->addPath(*path, *pen);
}

QGraphicsPathItem* QGraphicsScene_AddPath3(QGraphicsScene* self, QPainterPath* path, QPen* pen, QBrush* brush) {
	return self->addPath(*path, *pen, *brush);
}

QGraphicsRectItem* QGraphicsScene_AddRect22(QGraphicsScene* self, QRectF* rect, QPen* pen) {
	return self->addRect(*rect, *pen);
}

QGraphicsRectItem* QGraphicsScene_AddRect3(QGraphicsScene* self, QRectF* rect, QPen* pen, QBrush* brush) {
	return self->addRect(*rect, *pen, *brush);
}

QGraphicsTextItem* QGraphicsScene_AddText2(QGraphicsScene* self, const char* text, size_t text_Strlen, QFont* font) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addText(text_QString, *font);
}

QGraphicsSimpleTextItem* QGraphicsScene_AddSimpleText2(QGraphicsScene* self, const char* text, size_t text_Strlen, QFont* font) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addSimpleText(text_QString, *font);
}

QGraphicsProxyWidget* QGraphicsScene_AddWidget2(QGraphicsScene* self, QWidget* widget, int wFlags) {
	return self->addWidget(widget, static_cast<Qt::WindowFlags>(wFlags));
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse5(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen) {
	return self->addEllipse(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), *pen);
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse6(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen, QBrush* brush) {
	return self->addEllipse(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), *pen, *brush);
}

QGraphicsLineItem* QGraphicsScene_AddLine5(QGraphicsScene* self, double x1, double y1, double x2, double y2, QPen* pen) {
	return self->addLine(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2), *pen);
}

QGraphicsRectItem* QGraphicsScene_AddRect5(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen) {
	return self->addRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), *pen);
}

QGraphicsRectItem* QGraphicsScene_AddRect6(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen, QBrush* brush) {
	return self->addRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), *pen, *brush);
}

void QGraphicsScene_SetFocusItem2(QGraphicsScene* self, QGraphicsItem* item, uintptr_t focusReason) {
	self->setFocusItem(item, static_cast<Qt::FocusReason>(focusReason));
}

void QGraphicsScene_SetFocus1(QGraphicsScene* self, uintptr_t focusReason) {
	self->setFocus(static_cast<Qt::FocusReason>(focusReason));
}

void QGraphicsScene_Invalidate5(QGraphicsScene* self, double x, double y, double w, double h, int layers) {
	self->invalidate(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<QGraphicsScene::SceneLayers>(layers));
}

void QGraphicsScene_Update1(QGraphicsScene* self, QRectF* rect) {
	self->update(*rect);
}

void QGraphicsScene_Invalidate1(QGraphicsScene* self, QRectF* rect) {
	self->invalidate(*rect);
}

void QGraphicsScene_Invalidate22(QGraphicsScene* self, QRectF* rect, int layers) {
	self->invalidate(*rect, static_cast<QGraphicsScene::SceneLayers>(layers));
}

void QGraphicsScene_Delete(QGraphicsScene* self) {
	delete self;
}

