#include <QAbstractGraphicsShapeItem>
#include <QBrush>
#include <QColor>
#include <QCursor>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QGraphicsEffect>
#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <QGraphicsItemGroup>
#include <QGraphicsLineItem>
#include <QGraphicsObject>
#include <QGraphicsPathItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsPolygonItem>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsSimpleTextItem>
#include <QGraphicsTextItem>
#include <QGraphicsTransform>
#include <QGraphicsWidget>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLineF>
#include <QList>
#include <QMatrix>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPen>
#include <QPixmap>
#include <QPointF>
#include <QRectF>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionGraphicsItem>
#include <QTextCursor>
#include <QTextDocument>
#include <QTransform>
#include <QVariant>
#include <QWidget>
#include <qgraphicsitem.h>
#include "gen_qgraphicsitem.h"
#include "_cgo_export.h"

QGraphicsScene* QGraphicsItem_Scene(const QGraphicsItem* self) {
	return self->scene();
}

QGraphicsItem* QGraphicsItem_ParentItem(const QGraphicsItem* self) {
	return self->parentItem();
}

QGraphicsItem* QGraphicsItem_TopLevelItem(const QGraphicsItem* self) {
	return self->topLevelItem();
}

QGraphicsObject* QGraphicsItem_ParentObject(const QGraphicsItem* self) {
	return self->parentObject();
}

QGraphicsWidget* QGraphicsItem_ParentWidget(const QGraphicsItem* self) {
	return self->parentWidget();
}

QGraphicsWidget* QGraphicsItem_TopLevelWidget(const QGraphicsItem* self) {
	return self->topLevelWidget();
}

QGraphicsWidget* QGraphicsItem_Window(const QGraphicsItem* self) {
	return self->window();
}

QGraphicsItem* QGraphicsItem_Panel(const QGraphicsItem* self) {
	return self->panel();
}

void QGraphicsItem_SetParentItem(QGraphicsItem* self, QGraphicsItem* parent) {
	self->setParentItem(parent);
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsItem_ChildItems(const QGraphicsItem* self) {
	QList<QGraphicsItem *> _ret = self->childItems();
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

bool QGraphicsItem_IsWidget(const QGraphicsItem* self) {
	return self->isWidget();
}

bool QGraphicsItem_IsWindow(const QGraphicsItem* self) {
	return self->isWindow();
}

bool QGraphicsItem_IsPanel(const QGraphicsItem* self) {
	return self->isPanel();
}

QGraphicsObject* QGraphicsItem_ToGraphicsObject(QGraphicsItem* self) {
	return self->toGraphicsObject();
}

QGraphicsObject* QGraphicsItem_ToGraphicsObject2(const QGraphicsItem* self) {
	return (QGraphicsObject*) self->toGraphicsObject();
}

QGraphicsItemGroup* QGraphicsItem_Group(const QGraphicsItem* self) {
	return self->group();
}

void QGraphicsItem_SetGroup(QGraphicsItem* self, QGraphicsItemGroup* group) {
	self->setGroup(group);
}

int QGraphicsItem_Flags(const QGraphicsItem* self) {
	QGraphicsItem::GraphicsItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QGraphicsItem_SetFlag(QGraphicsItem* self, int flag) {
	self->setFlag(static_cast<QGraphicsItem::GraphicsItemFlag>(flag));
}

void QGraphicsItem_SetFlags(QGraphicsItem* self, int flags) {
	self->setFlags(static_cast<QGraphicsItem::GraphicsItemFlags>(flags));
}

int QGraphicsItem_CacheMode(const QGraphicsItem* self) {
	QGraphicsItem::CacheMode _ret = self->cacheMode();
	return static_cast<int>(_ret);
}

void QGraphicsItem_SetCacheMode(QGraphicsItem* self, int mode) {
	self->setCacheMode(static_cast<QGraphicsItem::CacheMode>(mode));
}

int QGraphicsItem_PanelModality(const QGraphicsItem* self) {
	QGraphicsItem::PanelModality _ret = self->panelModality();
	return static_cast<int>(_ret);
}

void QGraphicsItem_SetPanelModality(QGraphicsItem* self, int panelModality) {
	self->setPanelModality(static_cast<QGraphicsItem::PanelModality>(panelModality));
}

bool QGraphicsItem_IsBlockedByModalPanel(const QGraphicsItem* self) {
	return self->isBlockedByModalPanel();
}

struct miqt_string QGraphicsItem_ToolTip(const QGraphicsItem* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsItem_SetToolTip(QGraphicsItem* self, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setToolTip(toolTip_QString);
}

QCursor* QGraphicsItem_Cursor(const QGraphicsItem* self) {
	return new QCursor(self->cursor());
}

void QGraphicsItem_SetCursor(QGraphicsItem* self, QCursor* cursor) {
	self->setCursor(*cursor);
}

bool QGraphicsItem_HasCursor(const QGraphicsItem* self) {
	return self->hasCursor();
}

void QGraphicsItem_UnsetCursor(QGraphicsItem* self) {
	self->unsetCursor();
}

bool QGraphicsItem_IsVisible(const QGraphicsItem* self) {
	return self->isVisible();
}

bool QGraphicsItem_IsVisibleTo(const QGraphicsItem* self, QGraphicsItem* parent) {
	return self->isVisibleTo(parent);
}

void QGraphicsItem_SetVisible(QGraphicsItem* self, bool visible) {
	self->setVisible(visible);
}

void QGraphicsItem_Hide(QGraphicsItem* self) {
	self->hide();
}

void QGraphicsItem_Show(QGraphicsItem* self) {
	self->show();
}

bool QGraphicsItem_IsEnabled(const QGraphicsItem* self) {
	return self->isEnabled();
}

void QGraphicsItem_SetEnabled(QGraphicsItem* self, bool enabled) {
	self->setEnabled(enabled);
}

bool QGraphicsItem_IsSelected(const QGraphicsItem* self) {
	return self->isSelected();
}

void QGraphicsItem_SetSelected(QGraphicsItem* self, bool selected) {
	self->setSelected(selected);
}

bool QGraphicsItem_AcceptDrops(const QGraphicsItem* self) {
	return self->acceptDrops();
}

void QGraphicsItem_SetAcceptDrops(QGraphicsItem* self, bool on) {
	self->setAcceptDrops(on);
}

double QGraphicsItem_Opacity(const QGraphicsItem* self) {
	qreal _ret = self->opacity();
	return static_cast<double>(_ret);
}

double QGraphicsItem_EffectiveOpacity(const QGraphicsItem* self) {
	qreal _ret = self->effectiveOpacity();
	return static_cast<double>(_ret);
}

void QGraphicsItem_SetOpacity(QGraphicsItem* self, double opacity) {
	self->setOpacity(static_cast<qreal>(opacity));
}

QGraphicsEffect* QGraphicsItem_GraphicsEffect(const QGraphicsItem* self) {
	return self->graphicsEffect();
}

void QGraphicsItem_SetGraphicsEffect(QGraphicsItem* self, QGraphicsEffect* effect) {
	self->setGraphicsEffect(effect);
}

int QGraphicsItem_AcceptedMouseButtons(const QGraphicsItem* self) {
	Qt::MouseButtons _ret = self->acceptedMouseButtons();
	return static_cast<int>(_ret);
}

void QGraphicsItem_SetAcceptedMouseButtons(QGraphicsItem* self, int buttons) {
	self->setAcceptedMouseButtons(static_cast<Qt::MouseButtons>(buttons));
}

bool QGraphicsItem_AcceptHoverEvents(const QGraphicsItem* self) {
	return self->acceptHoverEvents();
}

void QGraphicsItem_SetAcceptHoverEvents(QGraphicsItem* self, bool enabled) {
	self->setAcceptHoverEvents(enabled);
}

bool QGraphicsItem_AcceptTouchEvents(const QGraphicsItem* self) {
	return self->acceptTouchEvents();
}

void QGraphicsItem_SetAcceptTouchEvents(QGraphicsItem* self, bool enabled) {
	self->setAcceptTouchEvents(enabled);
}

bool QGraphicsItem_FiltersChildEvents(const QGraphicsItem* self) {
	return self->filtersChildEvents();
}

void QGraphicsItem_SetFiltersChildEvents(QGraphicsItem* self, bool enabled) {
	self->setFiltersChildEvents(enabled);
}

bool QGraphicsItem_HandlesChildEvents(const QGraphicsItem* self) {
	return self->handlesChildEvents();
}

void QGraphicsItem_SetHandlesChildEvents(QGraphicsItem* self, bool enabled) {
	self->setHandlesChildEvents(enabled);
}

bool QGraphicsItem_IsActive(const QGraphicsItem* self) {
	return self->isActive();
}

void QGraphicsItem_SetActive(QGraphicsItem* self, bool active) {
	self->setActive(active);
}

bool QGraphicsItem_HasFocus(const QGraphicsItem* self) {
	return self->hasFocus();
}

void QGraphicsItem_SetFocus(QGraphicsItem* self) {
	self->setFocus();
}

void QGraphicsItem_ClearFocus(QGraphicsItem* self) {
	self->clearFocus();
}

QGraphicsItem* QGraphicsItem_FocusProxy(const QGraphicsItem* self) {
	return self->focusProxy();
}

void QGraphicsItem_SetFocusProxy(QGraphicsItem* self, QGraphicsItem* item) {
	self->setFocusProxy(item);
}

QGraphicsItem* QGraphicsItem_FocusItem(const QGraphicsItem* self) {
	return self->focusItem();
}

QGraphicsItem* QGraphicsItem_FocusScopeItem(const QGraphicsItem* self) {
	return self->focusScopeItem();
}

void QGraphicsItem_GrabMouse(QGraphicsItem* self) {
	self->grabMouse();
}

void QGraphicsItem_UngrabMouse(QGraphicsItem* self) {
	self->ungrabMouse();
}

void QGraphicsItem_GrabKeyboard(QGraphicsItem* self) {
	self->grabKeyboard();
}

void QGraphicsItem_UngrabKeyboard(QGraphicsItem* self) {
	self->ungrabKeyboard();
}

QPointF* QGraphicsItem_Pos(const QGraphicsItem* self) {
	return new QPointF(self->pos());
}

double QGraphicsItem_X(const QGraphicsItem* self) {
	qreal _ret = self->x();
	return static_cast<double>(_ret);
}

void QGraphicsItem_SetX(QGraphicsItem* self, double x) {
	self->setX(static_cast<qreal>(x));
}

double QGraphicsItem_Y(const QGraphicsItem* self) {
	qreal _ret = self->y();
	return static_cast<double>(_ret);
}

void QGraphicsItem_SetY(QGraphicsItem* self, double y) {
	self->setY(static_cast<qreal>(y));
}

QPointF* QGraphicsItem_ScenePos(const QGraphicsItem* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsItem_SetPos(QGraphicsItem* self, QPointF* pos) {
	self->setPos(*pos);
}

void QGraphicsItem_SetPos2(QGraphicsItem* self, double x, double y) {
	self->setPos(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QGraphicsItem_MoveBy(QGraphicsItem* self, double dx, double dy) {
	self->moveBy(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QGraphicsItem_EnsureVisible(QGraphicsItem* self) {
	self->ensureVisible();
}

void QGraphicsItem_EnsureVisible2(QGraphicsItem* self, double x, double y, double w, double h) {
	self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QMatrix* QGraphicsItem_Matrix(const QGraphicsItem* self) {
	return new QMatrix(self->matrix());
}

QMatrix* QGraphicsItem_SceneMatrix(const QGraphicsItem* self) {
	return new QMatrix(self->sceneMatrix());
}

void QGraphicsItem_SetMatrix(QGraphicsItem* self, QMatrix* matrix) {
	self->setMatrix(*matrix);
}

void QGraphicsItem_ResetMatrix(QGraphicsItem* self) {
	self->resetMatrix();
}

QTransform* QGraphicsItem_Transform(const QGraphicsItem* self) {
	return new QTransform(self->transform());
}

QTransform* QGraphicsItem_SceneTransform(const QGraphicsItem* self) {
	return new QTransform(self->sceneTransform());
}

QTransform* QGraphicsItem_DeviceTransform(const QGraphicsItem* self, QTransform* viewportTransform) {
	return new QTransform(self->deviceTransform(*viewportTransform));
}

QTransform* QGraphicsItem_ItemTransform(const QGraphicsItem* self, QGraphicsItem* other) {
	return new QTransform(self->itemTransform(other));
}

void QGraphicsItem_SetTransform(QGraphicsItem* self, QTransform* matrix) {
	self->setTransform(*matrix);
}

void QGraphicsItem_ResetTransform(QGraphicsItem* self) {
	self->resetTransform();
}

void QGraphicsItem_SetRotation(QGraphicsItem* self, double angle) {
	self->setRotation(static_cast<qreal>(angle));
}

double QGraphicsItem_Rotation(const QGraphicsItem* self) {
	qreal _ret = self->rotation();
	return static_cast<double>(_ret);
}

void QGraphicsItem_SetScale(QGraphicsItem* self, double scale) {
	self->setScale(static_cast<qreal>(scale));
}

double QGraphicsItem_Scale(const QGraphicsItem* self) {
	qreal _ret = self->scale();
	return static_cast<double>(_ret);
}

struct miqt_array /* of QGraphicsTransform* */  QGraphicsItem_Transformations(const QGraphicsItem* self) {
	QList<QGraphicsTransform *> _ret = self->transformations();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsTransform** _arr = static_cast<QGraphicsTransform**>(malloc(sizeof(QGraphicsTransform*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGraphicsItem_SetTransformations(QGraphicsItem* self, struct miqt_array /* of QGraphicsTransform* */  transformations) {
	QList<QGraphicsTransform *> transformations_QList;
	transformations_QList.reserve(transformations.len);
	QGraphicsTransform** transformations_arr = static_cast<QGraphicsTransform**>(transformations.data);
	for(size_t i = 0; i < transformations.len; ++i) {
		transformations_QList.push_back(transformations_arr[i]);
	}
	self->setTransformations(transformations_QList);
}

QPointF* QGraphicsItem_TransformOriginPoint(const QGraphicsItem* self) {
	return new QPointF(self->transformOriginPoint());
}

void QGraphicsItem_SetTransformOriginPoint(QGraphicsItem* self, QPointF* origin) {
	self->setTransformOriginPoint(*origin);
}

void QGraphicsItem_SetTransformOriginPoint2(QGraphicsItem* self, double ax, double ay) {
	self->setTransformOriginPoint(static_cast<qreal>(ax), static_cast<qreal>(ay));
}

void QGraphicsItem_Advance(QGraphicsItem* self, int phase) {
	self->advance(static_cast<int>(phase));
}

double QGraphicsItem_ZValue(const QGraphicsItem* self) {
	qreal _ret = self->zValue();
	return static_cast<double>(_ret);
}

void QGraphicsItem_SetZValue(QGraphicsItem* self, double z) {
	self->setZValue(static_cast<qreal>(z));
}

void QGraphicsItem_StackBefore(QGraphicsItem* self, QGraphicsItem* sibling) {
	self->stackBefore(sibling);
}

QRectF* QGraphicsItem_BoundingRect(const QGraphicsItem* self) {
	return new QRectF(self->boundingRect());
}

QRectF* QGraphicsItem_ChildrenBoundingRect(const QGraphicsItem* self) {
	return new QRectF(self->childrenBoundingRect());
}

QRectF* QGraphicsItem_SceneBoundingRect(const QGraphicsItem* self) {
	return new QRectF(self->sceneBoundingRect());
}

QPainterPath* QGraphicsItem_Shape(const QGraphicsItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsItem_IsClipped(const QGraphicsItem* self) {
	return self->isClipped();
}

QPainterPath* QGraphicsItem_ClipPath(const QGraphicsItem* self) {
	return new QPainterPath(self->clipPath());
}

bool QGraphicsItem_Contains(const QGraphicsItem* self, QPointF* point) {
	return self->contains(*point);
}

bool QGraphicsItem_CollidesWithItem(const QGraphicsItem* self, QGraphicsItem* other, int mode) {
	return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QGraphicsItem_CollidesWithPath(const QGraphicsItem* self, QPainterPath* path, int mode) {
	return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsItem_CollidingItems(const QGraphicsItem* self) {
	QList<QGraphicsItem *> _ret = self->collidingItems();
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

bool QGraphicsItem_IsObscured(const QGraphicsItem* self) {
	return self->isObscured();
}

bool QGraphicsItem_IsObscured2(const QGraphicsItem* self, double x, double y, double w, double h) {
	return self->isObscured(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

bool QGraphicsItem_IsObscuredBy(const QGraphicsItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsItem_OpaqueArea(const QGraphicsItem* self) {
	return new QPainterPath(self->opaqueArea());
}

QRegion* QGraphicsItem_BoundingRegion(const QGraphicsItem* self, QTransform* itemToDeviceTransform) {
	return new QRegion(self->boundingRegion(*itemToDeviceTransform));
}

double QGraphicsItem_BoundingRegionGranularity(const QGraphicsItem* self) {
	qreal _ret = self->boundingRegionGranularity();
	return static_cast<double>(_ret);
}

void QGraphicsItem_SetBoundingRegionGranularity(QGraphicsItem* self, double granularity) {
	self->setBoundingRegionGranularity(static_cast<qreal>(granularity));
}

void QGraphicsItem_Paint(QGraphicsItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

void QGraphicsItem_Update(QGraphicsItem* self) {
	self->update();
}

void QGraphicsItem_Update2(QGraphicsItem* self, double x, double y, double width, double height) {
	self->update(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(width), static_cast<qreal>(height));
}

void QGraphicsItem_Scroll(QGraphicsItem* self, double dx, double dy) {
	self->scroll(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

QPointF* QGraphicsItem_MapToItem(const QGraphicsItem* self, QGraphicsItem* item, QPointF* point) {
	return new QPointF(self->mapToItem(item, *point));
}

QPointF* QGraphicsItem_MapToParent(const QGraphicsItem* self, QPointF* point) {
	return new QPointF(self->mapToParent(*point));
}

QPointF* QGraphicsItem_MapToScene(const QGraphicsItem* self, QPointF* point) {
	return new QPointF(self->mapToScene(*point));
}

QRectF* QGraphicsItem_MapRectToItem(const QGraphicsItem* self, QGraphicsItem* item, QRectF* rect) {
	return new QRectF(self->mapRectToItem(item, *rect));
}

QRectF* QGraphicsItem_MapRectToParent(const QGraphicsItem* self, QRectF* rect) {
	return new QRectF(self->mapRectToParent(*rect));
}

QRectF* QGraphicsItem_MapRectToScene(const QGraphicsItem* self, QRectF* rect) {
	return new QRectF(self->mapRectToScene(*rect));
}

QPainterPath* QGraphicsItem_MapToItem4(const QGraphicsItem* self, QGraphicsItem* item, QPainterPath* path) {
	return new QPainterPath(self->mapToItem(item, *path));
}

QPainterPath* QGraphicsItem_MapToParentWithPath(const QGraphicsItem* self, QPainterPath* path) {
	return new QPainterPath(self->mapToParent(*path));
}

QPainterPath* QGraphicsItem_MapToSceneWithPath(const QGraphicsItem* self, QPainterPath* path) {
	return new QPainterPath(self->mapToScene(*path));
}

QPointF* QGraphicsItem_MapFromItem(const QGraphicsItem* self, QGraphicsItem* item, QPointF* point) {
	return new QPointF(self->mapFromItem(item, *point));
}

QPointF* QGraphicsItem_MapFromParent(const QGraphicsItem* self, QPointF* point) {
	return new QPointF(self->mapFromParent(*point));
}

QPointF* QGraphicsItem_MapFromScene(const QGraphicsItem* self, QPointF* point) {
	return new QPointF(self->mapFromScene(*point));
}

QRectF* QGraphicsItem_MapRectFromItem(const QGraphicsItem* self, QGraphicsItem* item, QRectF* rect) {
	return new QRectF(self->mapRectFromItem(item, *rect));
}

QRectF* QGraphicsItem_MapRectFromParent(const QGraphicsItem* self, QRectF* rect) {
	return new QRectF(self->mapRectFromParent(*rect));
}

QRectF* QGraphicsItem_MapRectFromScene(const QGraphicsItem* self, QRectF* rect) {
	return new QRectF(self->mapRectFromScene(*rect));
}

QPainterPath* QGraphicsItem_MapFromItem4(const QGraphicsItem* self, QGraphicsItem* item, QPainterPath* path) {
	return new QPainterPath(self->mapFromItem(item, *path));
}

QPainterPath* QGraphicsItem_MapFromParentWithPath(const QGraphicsItem* self, QPainterPath* path) {
	return new QPainterPath(self->mapFromParent(*path));
}

QPainterPath* QGraphicsItem_MapFromSceneWithPath(const QGraphicsItem* self, QPainterPath* path) {
	return new QPainterPath(self->mapFromScene(*path));
}

QPointF* QGraphicsItem_MapToItem5(const QGraphicsItem* self, QGraphicsItem* item, double x, double y) {
	return new QPointF(self->mapToItem(item, static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QGraphicsItem_MapToParent2(const QGraphicsItem* self, double x, double y) {
	return new QPointF(self->mapToParent(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QGraphicsItem_MapToScene2(const QGraphicsItem* self, double x, double y) {
	return new QPointF(self->mapToScene(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QRectF* QGraphicsItem_MapRectToItem2(const QGraphicsItem* self, QGraphicsItem* item, double x, double y, double w, double h) {
	return new QRectF(self->mapRectToItem(item, static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_MapRectToParent2(const QGraphicsItem* self, double x, double y, double w, double h) {
	return new QRectF(self->mapRectToParent(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_MapRectToScene2(const QGraphicsItem* self, double x, double y, double w, double h) {
	return new QRectF(self->mapRectToScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QPointF* QGraphicsItem_MapFromItem5(const QGraphicsItem* self, QGraphicsItem* item, double x, double y) {
	return new QPointF(self->mapFromItem(item, static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QGraphicsItem_MapFromParent2(const QGraphicsItem* self, double x, double y) {
	return new QPointF(self->mapFromParent(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QGraphicsItem_MapFromScene2(const QGraphicsItem* self, double x, double y) {
	return new QPointF(self->mapFromScene(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QRectF* QGraphicsItem_MapRectFromItem2(const QGraphicsItem* self, QGraphicsItem* item, double x, double y, double w, double h) {
	return new QRectF(self->mapRectFromItem(item, static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_MapRectFromParent2(const QGraphicsItem* self, double x, double y, double w, double h) {
	return new QRectF(self->mapRectFromParent(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_MapRectFromScene2(const QGraphicsItem* self, double x, double y, double w, double h) {
	return new QRectF(self->mapRectFromScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

bool QGraphicsItem_IsAncestorOf(const QGraphicsItem* self, QGraphicsItem* child) {
	return self->isAncestorOf(child);
}

QGraphicsItem* QGraphicsItem_CommonAncestorItem(const QGraphicsItem* self, QGraphicsItem* other) {
	return self->commonAncestorItem(other);
}

bool QGraphicsItem_IsUnderMouse(const QGraphicsItem* self) {
	return self->isUnderMouse();
}

QVariant* QGraphicsItem_Data(const QGraphicsItem* self, int key) {
	return new QVariant(self->data(static_cast<int>(key)));
}

void QGraphicsItem_SetData(QGraphicsItem* self, int key, QVariant* value) {
	self->setData(static_cast<int>(key), *value);
}

int QGraphicsItem_InputMethodHints(const QGraphicsItem* self) {
	Qt::InputMethodHints _ret = self->inputMethodHints();
	return static_cast<int>(_ret);
}

void QGraphicsItem_SetInputMethodHints(QGraphicsItem* self, int hints) {
	self->setInputMethodHints(static_cast<Qt::InputMethodHints>(hints));
}

int QGraphicsItem_Type(const QGraphicsItem* self) {
	return self->type();
}

void QGraphicsItem_InstallSceneEventFilter(QGraphicsItem* self, QGraphicsItem* filterItem) {
	self->installSceneEventFilter(filterItem);
}

void QGraphicsItem_RemoveSceneEventFilter(QGraphicsItem* self, QGraphicsItem* filterItem) {
	self->removeSceneEventFilter(filterItem);
}

void QGraphicsItem_SetFlag2(QGraphicsItem* self, int flag, bool enabled) {
	self->setFlag(static_cast<QGraphicsItem::GraphicsItemFlag>(flag), enabled);
}

void QGraphicsItem_SetCacheMode2(QGraphicsItem* self, int mode, QSize* cacheSize) {
	self->setCacheMode(static_cast<QGraphicsItem::CacheMode>(mode), *cacheSize);
}

void QGraphicsItem_SetFocus1(QGraphicsItem* self, int focusReason) {
	self->setFocus(static_cast<Qt::FocusReason>(focusReason));
}

void QGraphicsItem_EnsureVisible1(QGraphicsItem* self, QRectF* rect) {
	self->ensureVisible(*rect);
}

void QGraphicsItem_EnsureVisible22(QGraphicsItem* self, QRectF* rect, int xmargin) {
	self->ensureVisible(*rect, static_cast<int>(xmargin));
}

void QGraphicsItem_EnsureVisible3(QGraphicsItem* self, QRectF* rect, int xmargin, int ymargin) {
	self->ensureVisible(*rect, static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsItem_EnsureVisible5(QGraphicsItem* self, double x, double y, double w, double h, int xmargin) {
	self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xmargin));
}

void QGraphicsItem_EnsureVisible6(QGraphicsItem* self, double x, double y, double w, double h, int xmargin, int ymargin) {
	self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsItem_SetMatrix2(QGraphicsItem* self, QMatrix* matrix, bool combine) {
	self->setMatrix(*matrix, combine);
}

QTransform* QGraphicsItem_ItemTransform2(const QGraphicsItem* self, QGraphicsItem* other, bool* ok) {
	return new QTransform(self->itemTransform(other, ok));
}

void QGraphicsItem_SetTransform2(QGraphicsItem* self, QTransform* matrix, bool combine) {
	self->setTransform(*matrix, combine);
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsItem_CollidingItems1(const QGraphicsItem* self, int mode) {
	QList<QGraphicsItem *> _ret = self->collidingItems(static_cast<Qt::ItemSelectionMode>(mode));
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

bool QGraphicsItem_IsObscured1(const QGraphicsItem* self, QRectF* rect) {
	return self->isObscured(*rect);
}

void QGraphicsItem_Update1(QGraphicsItem* self, QRectF* rect) {
	self->update(*rect);
}

void QGraphicsItem_Scroll3(QGraphicsItem* self, double dx, double dy, QRectF* rect) {
	self->scroll(static_cast<qreal>(dx), static_cast<qreal>(dy), *rect);
}

void QGraphicsItem_Delete(QGraphicsItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QGraphicsItem*>( self );
	} else {
		delete self;
	}
}

QMetaObject* QGraphicsObject_MetaObject(const QGraphicsObject* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsObject_Metacast(QGraphicsObject* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsObject_Tr(const char* s) {
	QString _ret = QGraphicsObject::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsObject_TrUtf8(const char* s) {
	QString _ret = QGraphicsObject::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsObject_GrabGesture(QGraphicsObject* self, int typeVal) {
	self->grabGesture(static_cast<Qt::GestureType>(typeVal));
}

void QGraphicsObject_UngrabGesture(QGraphicsObject* self, int typeVal) {
	self->ungrabGesture(static_cast<Qt::GestureType>(typeVal));
}

void QGraphicsObject_ParentChanged(QGraphicsObject* self) {
	self->parentChanged();
}

void QGraphicsObject_connect_ParentChanged(QGraphicsObject* self, intptr_t slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::parentChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_ParentChanged(slot);
	});
}

void QGraphicsObject_OpacityChanged(QGraphicsObject* self) {
	self->opacityChanged();
}

void QGraphicsObject_connect_OpacityChanged(QGraphicsObject* self, intptr_t slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::opacityChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_OpacityChanged(slot);
	});
}

void QGraphicsObject_VisibleChanged(QGraphicsObject* self) {
	self->visibleChanged();
}

void QGraphicsObject_connect_VisibleChanged(QGraphicsObject* self, intptr_t slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::visibleChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_VisibleChanged(slot);
	});
}

void QGraphicsObject_EnabledChanged(QGraphicsObject* self) {
	self->enabledChanged();
}

void QGraphicsObject_connect_EnabledChanged(QGraphicsObject* self, intptr_t slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::enabledChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_EnabledChanged(slot);
	});
}

void QGraphicsObject_XChanged(QGraphicsObject* self) {
	self->xChanged();
}

void QGraphicsObject_connect_XChanged(QGraphicsObject* self, intptr_t slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::xChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_XChanged(slot);
	});
}

void QGraphicsObject_YChanged(QGraphicsObject* self) {
	self->yChanged();
}

void QGraphicsObject_connect_YChanged(QGraphicsObject* self, intptr_t slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::yChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_YChanged(slot);
	});
}

void QGraphicsObject_ZChanged(QGraphicsObject* self) {
	self->zChanged();
}

void QGraphicsObject_connect_ZChanged(QGraphicsObject* self, intptr_t slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::zChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_ZChanged(slot);
	});
}

void QGraphicsObject_RotationChanged(QGraphicsObject* self) {
	self->rotationChanged();
}

void QGraphicsObject_connect_RotationChanged(QGraphicsObject* self, intptr_t slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::rotationChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_RotationChanged(slot);
	});
}

void QGraphicsObject_ScaleChanged(QGraphicsObject* self) {
	self->scaleChanged();
}

void QGraphicsObject_connect_ScaleChanged(QGraphicsObject* self, intptr_t slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::scaleChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_ScaleChanged(slot);
	});
}

void QGraphicsObject_ChildrenChanged(QGraphicsObject* self) {
	self->childrenChanged();
}

void QGraphicsObject_connect_ChildrenChanged(QGraphicsObject* self, intptr_t slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::childrenChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_ChildrenChanged(slot);
	});
}

void QGraphicsObject_WidthChanged(QGraphicsObject* self) {
	self->widthChanged();
}

void QGraphicsObject_connect_WidthChanged(QGraphicsObject* self, intptr_t slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::widthChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_WidthChanged(slot);
	});
}

void QGraphicsObject_HeightChanged(QGraphicsObject* self) {
	self->heightChanged();
}

void QGraphicsObject_connect_HeightChanged(QGraphicsObject* self, intptr_t slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::heightChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_HeightChanged(slot);
	});
}

struct miqt_string QGraphicsObject_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsObject::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsObject_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsObject::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsObject_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsObject::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsObject_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsObject::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsObject_GrabGesture2(QGraphicsObject* self, int typeVal, int flags) {
	self->grabGesture(static_cast<Qt::GestureType>(typeVal), static_cast<Qt::GestureFlags>(flags));
}

void QGraphicsObject_Delete(QGraphicsObject* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QGraphicsObject*>( self );
	} else {
		delete self;
	}
}

QPen* QAbstractGraphicsShapeItem_Pen(const QAbstractGraphicsShapeItem* self) {
	return new QPen(self->pen());
}

void QAbstractGraphicsShapeItem_SetPen(QAbstractGraphicsShapeItem* self, QPen* pen) {
	self->setPen(*pen);
}

QBrush* QAbstractGraphicsShapeItem_Brush(const QAbstractGraphicsShapeItem* self) {
	return new QBrush(self->brush());
}

void QAbstractGraphicsShapeItem_SetBrush(QAbstractGraphicsShapeItem* self, QBrush* brush) {
	self->setBrush(*brush);
}

bool QAbstractGraphicsShapeItem_IsObscuredBy(const QAbstractGraphicsShapeItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QAbstractGraphicsShapeItem_OpaqueArea(const QAbstractGraphicsShapeItem* self) {
	return new QPainterPath(self->opaqueArea());
}

void QAbstractGraphicsShapeItem_Delete(QAbstractGraphicsShapeItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAbstractGraphicsShapeItem*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQGraphicsPathItem : public virtual QGraphicsPathItem {
public:

	MiqtVirtualQGraphicsPathItem(): QGraphicsPathItem() {};
	MiqtVirtualQGraphicsPathItem(const QPainterPath& path): QGraphicsPathItem(path) {};
	MiqtVirtualQGraphicsPathItem(QGraphicsItem* parent): QGraphicsPathItem(parent) {};
	MiqtVirtualQGraphicsPathItem(const QPainterPath& path, QGraphicsItem* parent): QGraphicsPathItem(path, parent) {};

	virtual ~MiqtVirtualQGraphicsPathItem() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsPathItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsPathItem_BoundingRect(const_cast<MiqtVirtualQGraphicsPathItem*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsPathItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsPathItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsPathItem_Shape(const_cast<MiqtVirtualQGraphicsPathItem*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsPathItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsPathItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPathItem_Contains(const_cast<MiqtVirtualQGraphicsPathItem*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsPathItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsPathItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsPathItem_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsPathItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsPathItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsPathItem_IsObscuredBy(const_cast<MiqtVirtualQGraphicsPathItem*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsPathItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsPathItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsPathItem_OpaqueArea(const_cast<MiqtVirtualQGraphicsPathItem*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsPathItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsPathItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsPathItem_Type(const_cast<MiqtVirtualQGraphicsPathItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsPathItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsPathItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPathItem_SupportsExtension(const_cast<MiqtVirtualQGraphicsPathItem*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsPathItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsPathItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsPathItem_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsPathItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsPathItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPathItem_Extension(const_cast<MiqtVirtualQGraphicsPathItem*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsPathItem::extension(*variant));

	}

};

void QGraphicsPathItem_new(QGraphicsPathItem** outptr_QGraphicsPathItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsPathItem* ret = new MiqtVirtualQGraphicsPathItem();
	*outptr_QGraphicsPathItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsPathItem_new2(QPainterPath* path, QGraphicsPathItem** outptr_QGraphicsPathItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsPathItem* ret = new MiqtVirtualQGraphicsPathItem(*path);
	*outptr_QGraphicsPathItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsPathItem_new3(QGraphicsItem* parent, QGraphicsPathItem** outptr_QGraphicsPathItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsPathItem* ret = new MiqtVirtualQGraphicsPathItem(parent);
	*outptr_QGraphicsPathItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsPathItem_new4(QPainterPath* path, QGraphicsItem* parent, QGraphicsPathItem** outptr_QGraphicsPathItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsPathItem* ret = new MiqtVirtualQGraphicsPathItem(*path, parent);
	*outptr_QGraphicsPathItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

QPainterPath* QGraphicsPathItem_Path(const QGraphicsPathItem* self) {
	return new QPainterPath(self->path());
}

void QGraphicsPathItem_SetPath(QGraphicsPathItem* self, QPainterPath* path) {
	self->setPath(*path);
}

QRectF* QGraphicsPathItem_BoundingRect(const QGraphicsPathItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsPathItem_Shape(const QGraphicsPathItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsPathItem_Contains(const QGraphicsPathItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsPathItem_Paint(QGraphicsPathItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsPathItem_IsObscuredBy(const QGraphicsPathItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsPathItem_OpaqueArea(const QGraphicsPathItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsPathItem_Type(const QGraphicsPathItem* self) {
	return self->type();
}

void QGraphicsPathItem_override_virtual_BoundingRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) )->handle__BoundingRect = slot;
}

QRectF* QGraphicsPathItem_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_BoundingRect();
}

void QGraphicsPathItem_override_virtual_Shape(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) )->handle__Shape = slot;
}

QPainterPath* QGraphicsPathItem_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_Shape();
}

void QGraphicsPathItem_override_virtual_Contains(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) )->handle__Contains = slot;
}

bool QGraphicsPathItem_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_Contains(point);
}

void QGraphicsPathItem_override_virtual_Paint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) )->handle__Paint = slot;
}

void QGraphicsPathItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_Paint(painter, option, widget);
}

void QGraphicsPathItem_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) )->handle__IsObscuredBy = slot;
}

bool QGraphicsPathItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_IsObscuredBy(item);
}

void QGraphicsPathItem_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) )->handle__OpaqueArea = slot;
}

QPainterPath* QGraphicsPathItem_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_OpaqueArea();
}

void QGraphicsPathItem_override_virtual_Type(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) )->handle__Type = slot;
}

int QGraphicsPathItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_Type();
}

void QGraphicsPathItem_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) )->handle__SupportsExtension = slot;
}

bool QGraphicsPathItem_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_SupportsExtension(extension);
}

void QGraphicsPathItem_override_virtual_SetExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) )->handle__SetExtension = slot;
}

void QGraphicsPathItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_SetExtension(extension, variant);
}

void QGraphicsPathItem_override_virtual_Extension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) )->handle__Extension = slot;
}

QVariant* QGraphicsPathItem_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_Extension(variant);
}

void QGraphicsPathItem_Delete(QGraphicsPathItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQGraphicsPathItem*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQGraphicsRectItem : public virtual QGraphicsRectItem {
public:

	MiqtVirtualQGraphicsRectItem(): QGraphicsRectItem() {};
	MiqtVirtualQGraphicsRectItem(const QRectF& rect): QGraphicsRectItem(rect) {};
	MiqtVirtualQGraphicsRectItem(qreal x, qreal y, qreal w, qreal h): QGraphicsRectItem(x, y, w, h) {};
	MiqtVirtualQGraphicsRectItem(QGraphicsItem* parent): QGraphicsRectItem(parent) {};
	MiqtVirtualQGraphicsRectItem(const QRectF& rect, QGraphicsItem* parent): QGraphicsRectItem(rect, parent) {};
	MiqtVirtualQGraphicsRectItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem* parent): QGraphicsRectItem(x, y, w, h, parent) {};

	virtual ~MiqtVirtualQGraphicsRectItem() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsRectItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsRectItem_BoundingRect(const_cast<MiqtVirtualQGraphicsRectItem*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsRectItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsRectItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsRectItem_Shape(const_cast<MiqtVirtualQGraphicsRectItem*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsRectItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsRectItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsRectItem_Contains(const_cast<MiqtVirtualQGraphicsRectItem*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsRectItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsRectItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsRectItem_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsRectItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsRectItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsRectItem_IsObscuredBy(const_cast<MiqtVirtualQGraphicsRectItem*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsRectItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsRectItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsRectItem_OpaqueArea(const_cast<MiqtVirtualQGraphicsRectItem*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsRectItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsRectItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsRectItem_Type(const_cast<MiqtVirtualQGraphicsRectItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsRectItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsRectItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsRectItem_SupportsExtension(const_cast<MiqtVirtualQGraphicsRectItem*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsRectItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsRectItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsRectItem_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsRectItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsRectItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsRectItem_Extension(const_cast<MiqtVirtualQGraphicsRectItem*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsRectItem::extension(*variant));

	}

};

void QGraphicsRectItem_new(QGraphicsRectItem** outptr_QGraphicsRectItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsRectItem* ret = new MiqtVirtualQGraphicsRectItem();
	*outptr_QGraphicsRectItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsRectItem_new2(QRectF* rect, QGraphicsRectItem** outptr_QGraphicsRectItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsRectItem* ret = new MiqtVirtualQGraphicsRectItem(*rect);
	*outptr_QGraphicsRectItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsRectItem_new3(double x, double y, double w, double h, QGraphicsRectItem** outptr_QGraphicsRectItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsRectItem* ret = new MiqtVirtualQGraphicsRectItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
	*outptr_QGraphicsRectItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsRectItem_new4(QGraphicsItem* parent, QGraphicsRectItem** outptr_QGraphicsRectItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsRectItem* ret = new MiqtVirtualQGraphicsRectItem(parent);
	*outptr_QGraphicsRectItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsRectItem_new5(QRectF* rect, QGraphicsItem* parent, QGraphicsRectItem** outptr_QGraphicsRectItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsRectItem* ret = new MiqtVirtualQGraphicsRectItem(*rect, parent);
	*outptr_QGraphicsRectItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsRectItem_new6(double x, double y, double w, double h, QGraphicsItem* parent, QGraphicsRectItem** outptr_QGraphicsRectItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsRectItem* ret = new MiqtVirtualQGraphicsRectItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), parent);
	*outptr_QGraphicsRectItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

QRectF* QGraphicsRectItem_Rect(const QGraphicsRectItem* self) {
	return new QRectF(self->rect());
}

void QGraphicsRectItem_SetRect(QGraphicsRectItem* self, QRectF* rect) {
	self->setRect(*rect);
}

void QGraphicsRectItem_SetRect2(QGraphicsRectItem* self, double x, double y, double w, double h) {
	self->setRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QRectF* QGraphicsRectItem_BoundingRect(const QGraphicsRectItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsRectItem_Shape(const QGraphicsRectItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsRectItem_Contains(const QGraphicsRectItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsRectItem_Paint(QGraphicsRectItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsRectItem_IsObscuredBy(const QGraphicsRectItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsRectItem_OpaqueArea(const QGraphicsRectItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsRectItem_Type(const QGraphicsRectItem* self) {
	return self->type();
}

void QGraphicsRectItem_override_virtual_BoundingRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) )->handle__BoundingRect = slot;
}

QRectF* QGraphicsRectItem_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_BoundingRect();
}

void QGraphicsRectItem_override_virtual_Shape(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) )->handle__Shape = slot;
}

QPainterPath* QGraphicsRectItem_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_Shape();
}

void QGraphicsRectItem_override_virtual_Contains(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) )->handle__Contains = slot;
}

bool QGraphicsRectItem_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_Contains(point);
}

void QGraphicsRectItem_override_virtual_Paint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) )->handle__Paint = slot;
}

void QGraphicsRectItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_Paint(painter, option, widget);
}

void QGraphicsRectItem_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) )->handle__IsObscuredBy = slot;
}

bool QGraphicsRectItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_IsObscuredBy(item);
}

void QGraphicsRectItem_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) )->handle__OpaqueArea = slot;
}

QPainterPath* QGraphicsRectItem_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_OpaqueArea();
}

void QGraphicsRectItem_override_virtual_Type(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) )->handle__Type = slot;
}

int QGraphicsRectItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_Type();
}

void QGraphicsRectItem_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) )->handle__SupportsExtension = slot;
}

bool QGraphicsRectItem_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_SupportsExtension(extension);
}

void QGraphicsRectItem_override_virtual_SetExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) )->handle__SetExtension = slot;
}

void QGraphicsRectItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_SetExtension(extension, variant);
}

void QGraphicsRectItem_override_virtual_Extension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) )->handle__Extension = slot;
}

QVariant* QGraphicsRectItem_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_Extension(variant);
}

void QGraphicsRectItem_Delete(QGraphicsRectItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQGraphicsRectItem*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQGraphicsEllipseItem : public virtual QGraphicsEllipseItem {
public:

	MiqtVirtualQGraphicsEllipseItem(): QGraphicsEllipseItem() {};
	MiqtVirtualQGraphicsEllipseItem(const QRectF& rect): QGraphicsEllipseItem(rect) {};
	MiqtVirtualQGraphicsEllipseItem(qreal x, qreal y, qreal w, qreal h): QGraphicsEllipseItem(x, y, w, h) {};
	MiqtVirtualQGraphicsEllipseItem(QGraphicsItem* parent): QGraphicsEllipseItem(parent) {};
	MiqtVirtualQGraphicsEllipseItem(const QRectF& rect, QGraphicsItem* parent): QGraphicsEllipseItem(rect, parent) {};
	MiqtVirtualQGraphicsEllipseItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem* parent): QGraphicsEllipseItem(x, y, w, h, parent) {};

	virtual ~MiqtVirtualQGraphicsEllipseItem() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsEllipseItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_BoundingRect(const_cast<MiqtVirtualQGraphicsEllipseItem*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsEllipseItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsEllipseItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_Shape(const_cast<MiqtVirtualQGraphicsEllipseItem*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsEllipseItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsEllipseItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_Contains(const_cast<MiqtVirtualQGraphicsEllipseItem*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsEllipseItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsEllipseItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsEllipseItem_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsEllipseItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsEllipseItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_IsObscuredBy(const_cast<MiqtVirtualQGraphicsEllipseItem*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsEllipseItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsEllipseItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_OpaqueArea(const_cast<MiqtVirtualQGraphicsEllipseItem*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsEllipseItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsEllipseItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_Type(const_cast<MiqtVirtualQGraphicsEllipseItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsEllipseItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsEllipseItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_SupportsExtension(const_cast<MiqtVirtualQGraphicsEllipseItem*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsEllipseItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsEllipseItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsEllipseItem_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsEllipseItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsEllipseItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_Extension(const_cast<MiqtVirtualQGraphicsEllipseItem*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsEllipseItem::extension(*variant));

	}

};

void QGraphicsEllipseItem_new(QGraphicsEllipseItem** outptr_QGraphicsEllipseItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsEllipseItem* ret = new MiqtVirtualQGraphicsEllipseItem();
	*outptr_QGraphicsEllipseItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsEllipseItem_new2(QRectF* rect, QGraphicsEllipseItem** outptr_QGraphicsEllipseItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsEllipseItem* ret = new MiqtVirtualQGraphicsEllipseItem(*rect);
	*outptr_QGraphicsEllipseItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsEllipseItem_new3(double x, double y, double w, double h, QGraphicsEllipseItem** outptr_QGraphicsEllipseItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsEllipseItem* ret = new MiqtVirtualQGraphicsEllipseItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
	*outptr_QGraphicsEllipseItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsEllipseItem_new4(QGraphicsItem* parent, QGraphicsEllipseItem** outptr_QGraphicsEllipseItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsEllipseItem* ret = new MiqtVirtualQGraphicsEllipseItem(parent);
	*outptr_QGraphicsEllipseItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsEllipseItem_new5(QRectF* rect, QGraphicsItem* parent, QGraphicsEllipseItem** outptr_QGraphicsEllipseItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsEllipseItem* ret = new MiqtVirtualQGraphicsEllipseItem(*rect, parent);
	*outptr_QGraphicsEllipseItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsEllipseItem_new6(double x, double y, double w, double h, QGraphicsItem* parent, QGraphicsEllipseItem** outptr_QGraphicsEllipseItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsEllipseItem* ret = new MiqtVirtualQGraphicsEllipseItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), parent);
	*outptr_QGraphicsEllipseItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

QRectF* QGraphicsEllipseItem_Rect(const QGraphicsEllipseItem* self) {
	return new QRectF(self->rect());
}

void QGraphicsEllipseItem_SetRect(QGraphicsEllipseItem* self, QRectF* rect) {
	self->setRect(*rect);
}

void QGraphicsEllipseItem_SetRect2(QGraphicsEllipseItem* self, double x, double y, double w, double h) {
	self->setRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

int QGraphicsEllipseItem_StartAngle(const QGraphicsEllipseItem* self) {
	return self->startAngle();
}

void QGraphicsEllipseItem_SetStartAngle(QGraphicsEllipseItem* self, int angle) {
	self->setStartAngle(static_cast<int>(angle));
}

int QGraphicsEllipseItem_SpanAngle(const QGraphicsEllipseItem* self) {
	return self->spanAngle();
}

void QGraphicsEllipseItem_SetSpanAngle(QGraphicsEllipseItem* self, int angle) {
	self->setSpanAngle(static_cast<int>(angle));
}

QRectF* QGraphicsEllipseItem_BoundingRect(const QGraphicsEllipseItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsEllipseItem_Shape(const QGraphicsEllipseItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsEllipseItem_Contains(const QGraphicsEllipseItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsEllipseItem_Paint(QGraphicsEllipseItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsEllipseItem_IsObscuredBy(const QGraphicsEllipseItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsEllipseItem_OpaqueArea(const QGraphicsEllipseItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsEllipseItem_Type(const QGraphicsEllipseItem* self) {
	return self->type();
}

void QGraphicsEllipseItem_override_virtual_BoundingRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) )->handle__BoundingRect = slot;
}

QRectF* QGraphicsEllipseItem_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_BoundingRect();
}

void QGraphicsEllipseItem_override_virtual_Shape(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) )->handle__Shape = slot;
}

QPainterPath* QGraphicsEllipseItem_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_Shape();
}

void QGraphicsEllipseItem_override_virtual_Contains(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) )->handle__Contains = slot;
}

bool QGraphicsEllipseItem_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_Contains(point);
}

void QGraphicsEllipseItem_override_virtual_Paint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) )->handle__Paint = slot;
}

void QGraphicsEllipseItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_Paint(painter, option, widget);
}

void QGraphicsEllipseItem_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) )->handle__IsObscuredBy = slot;
}

bool QGraphicsEllipseItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_IsObscuredBy(item);
}

void QGraphicsEllipseItem_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) )->handle__OpaqueArea = slot;
}

QPainterPath* QGraphicsEllipseItem_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_OpaqueArea();
}

void QGraphicsEllipseItem_override_virtual_Type(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) )->handle__Type = slot;
}

int QGraphicsEllipseItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_Type();
}

void QGraphicsEllipseItem_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) )->handle__SupportsExtension = slot;
}

bool QGraphicsEllipseItem_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_SupportsExtension(extension);
}

void QGraphicsEllipseItem_override_virtual_SetExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) )->handle__SetExtension = slot;
}

void QGraphicsEllipseItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_SetExtension(extension, variant);
}

void QGraphicsEllipseItem_override_virtual_Extension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) )->handle__Extension = slot;
}

QVariant* QGraphicsEllipseItem_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_Extension(variant);
}

void QGraphicsEllipseItem_Delete(QGraphicsEllipseItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQGraphicsPolygonItem : public virtual QGraphicsPolygonItem {
public:

	MiqtVirtualQGraphicsPolygonItem(): QGraphicsPolygonItem() {};
	MiqtVirtualQGraphicsPolygonItem(QGraphicsItem* parent): QGraphicsPolygonItem(parent) {};

	virtual ~MiqtVirtualQGraphicsPolygonItem() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsPolygonItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_BoundingRect(const_cast<MiqtVirtualQGraphicsPolygonItem*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsPolygonItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsPolygonItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_Shape(const_cast<MiqtVirtualQGraphicsPolygonItem*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsPolygonItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsPolygonItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_Contains(const_cast<MiqtVirtualQGraphicsPolygonItem*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsPolygonItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsPolygonItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsPolygonItem_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsPolygonItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsPolygonItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_IsObscuredBy(const_cast<MiqtVirtualQGraphicsPolygonItem*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsPolygonItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsPolygonItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_OpaqueArea(const_cast<MiqtVirtualQGraphicsPolygonItem*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsPolygonItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsPolygonItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_Type(const_cast<MiqtVirtualQGraphicsPolygonItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsPolygonItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsPolygonItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_SupportsExtension(const_cast<MiqtVirtualQGraphicsPolygonItem*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsPolygonItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsPolygonItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsPolygonItem_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsPolygonItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsPolygonItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_Extension(const_cast<MiqtVirtualQGraphicsPolygonItem*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsPolygonItem::extension(*variant));

	}

};

void QGraphicsPolygonItem_new(QGraphicsPolygonItem** outptr_QGraphicsPolygonItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsPolygonItem* ret = new MiqtVirtualQGraphicsPolygonItem();
	*outptr_QGraphicsPolygonItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsPolygonItem_new2(QGraphicsItem* parent, QGraphicsPolygonItem** outptr_QGraphicsPolygonItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsPolygonItem* ret = new MiqtVirtualQGraphicsPolygonItem(parent);
	*outptr_QGraphicsPolygonItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

int QGraphicsPolygonItem_FillRule(const QGraphicsPolygonItem* self) {
	Qt::FillRule _ret = self->fillRule();
	return static_cast<int>(_ret);
}

void QGraphicsPolygonItem_SetFillRule(QGraphicsPolygonItem* self, int rule) {
	self->setFillRule(static_cast<Qt::FillRule>(rule));
}

QRectF* QGraphicsPolygonItem_BoundingRect(const QGraphicsPolygonItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsPolygonItem_Shape(const QGraphicsPolygonItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsPolygonItem_Contains(const QGraphicsPolygonItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsPolygonItem_Paint(QGraphicsPolygonItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsPolygonItem_IsObscuredBy(const QGraphicsPolygonItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsPolygonItem_OpaqueArea(const QGraphicsPolygonItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsPolygonItem_Type(const QGraphicsPolygonItem* self) {
	return self->type();
}

void QGraphicsPolygonItem_override_virtual_BoundingRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) )->handle__BoundingRect = slot;
}

QRectF* QGraphicsPolygonItem_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_BoundingRect();
}

void QGraphicsPolygonItem_override_virtual_Shape(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) )->handle__Shape = slot;
}

QPainterPath* QGraphicsPolygonItem_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_Shape();
}

void QGraphicsPolygonItem_override_virtual_Contains(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) )->handle__Contains = slot;
}

bool QGraphicsPolygonItem_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_Contains(point);
}

void QGraphicsPolygonItem_override_virtual_Paint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) )->handle__Paint = slot;
}

void QGraphicsPolygonItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_Paint(painter, option, widget);
}

void QGraphicsPolygonItem_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) )->handle__IsObscuredBy = slot;
}

bool QGraphicsPolygonItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_IsObscuredBy(item);
}

void QGraphicsPolygonItem_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) )->handle__OpaqueArea = slot;
}

QPainterPath* QGraphicsPolygonItem_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_OpaqueArea();
}

void QGraphicsPolygonItem_override_virtual_Type(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) )->handle__Type = slot;
}

int QGraphicsPolygonItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_Type();
}

void QGraphicsPolygonItem_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) )->handle__SupportsExtension = slot;
}

bool QGraphicsPolygonItem_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_SupportsExtension(extension);
}

void QGraphicsPolygonItem_override_virtual_SetExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) )->handle__SetExtension = slot;
}

void QGraphicsPolygonItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_SetExtension(extension, variant);
}

void QGraphicsPolygonItem_override_virtual_Extension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) )->handle__Extension = slot;
}

QVariant* QGraphicsPolygonItem_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_Extension(variant);
}

void QGraphicsPolygonItem_Delete(QGraphicsPolygonItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQGraphicsLineItem : public virtual QGraphicsLineItem {
public:

	MiqtVirtualQGraphicsLineItem(): QGraphicsLineItem() {};
	MiqtVirtualQGraphicsLineItem(const QLineF& line): QGraphicsLineItem(line) {};
	MiqtVirtualQGraphicsLineItem(qreal x1, qreal y1, qreal x2, qreal y2): QGraphicsLineItem(x1, y1, x2, y2) {};
	MiqtVirtualQGraphicsLineItem(QGraphicsItem* parent): QGraphicsLineItem(parent) {};
	MiqtVirtualQGraphicsLineItem(const QLineF& line, QGraphicsItem* parent): QGraphicsLineItem(line, parent) {};
	MiqtVirtualQGraphicsLineItem(qreal x1, qreal y1, qreal x2, qreal y2, QGraphicsItem* parent): QGraphicsLineItem(x1, y1, x2, y2, parent) {};

	virtual ~MiqtVirtualQGraphicsLineItem() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsLineItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsLineItem_BoundingRect(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsLineItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsLineItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsLineItem_Shape(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsLineItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsLineItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_Contains(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsLineItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsLineItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsLineItem_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsLineItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsLineItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_IsObscuredBy(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsLineItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsLineItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsLineItem_OpaqueArea(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsLineItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsLineItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsLineItem_Type(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsLineItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsLineItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_SupportsExtension(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsLineItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsLineItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsLineItem_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsLineItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsLineItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsLineItem_Extension(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsLineItem::extension(*variant));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__Advance == 0) {
			QGraphicsLineItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsLineItem_Advance(this, handle__Advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Advance(int phase) {

		QGraphicsLineItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithItem == 0) {
			return QGraphicsLineItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_CollidesWithItem(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__CollidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsLineItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithPath == 0) {
			return QGraphicsLineItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_CollidesWithPath(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__CollidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsLineItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__SceneEventFilter == 0) {
			return QGraphicsLineItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_SceneEventFilter(this, handle__SceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsLineItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__SceneEvent == 0) {
			return QGraphicsLineItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* event) {

		return QGraphicsLineItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsLineItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsLineItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsLineItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsLineItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsLineItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsLineItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsLineItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsLineItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsLineItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsLineItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsLineItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsLineItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsLineItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsLineItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QGraphicsLineItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsLineItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverMoveEvent == 0) {
			QGraphicsLineItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsLineItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverLeaveEvent == 0) {
			QGraphicsLineItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsLineItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsLineItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsLineItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsLineItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsLineItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsLineItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsLineItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsLineItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsLineItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsLineItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsLineItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsLineItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsLineItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QGraphicsLineItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsLineItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsLineItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsLineItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsLineItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsLineItem_InputMethodQuery(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsLineItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__ItemChange == 0) {
			return QGraphicsLineItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsLineItem_ItemChange(this, handle__ItemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_ItemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsLineItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

};

void QGraphicsLineItem_new(QGraphicsLineItem** outptr_QGraphicsLineItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsLineItem* ret = new MiqtVirtualQGraphicsLineItem();
	*outptr_QGraphicsLineItem = ret;
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsLineItem_new2(QLineF* line, QGraphicsLineItem** outptr_QGraphicsLineItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsLineItem* ret = new MiqtVirtualQGraphicsLineItem(*line);
	*outptr_QGraphicsLineItem = ret;
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsLineItem_new3(double x1, double y1, double x2, double y2, QGraphicsLineItem** outptr_QGraphicsLineItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsLineItem* ret = new MiqtVirtualQGraphicsLineItem(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
	*outptr_QGraphicsLineItem = ret;
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsLineItem_new4(QGraphicsItem* parent, QGraphicsLineItem** outptr_QGraphicsLineItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsLineItem* ret = new MiqtVirtualQGraphicsLineItem(parent);
	*outptr_QGraphicsLineItem = ret;
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsLineItem_new5(QLineF* line, QGraphicsItem* parent, QGraphicsLineItem** outptr_QGraphicsLineItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsLineItem* ret = new MiqtVirtualQGraphicsLineItem(*line, parent);
	*outptr_QGraphicsLineItem = ret;
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsLineItem_new6(double x1, double y1, double x2, double y2, QGraphicsItem* parent, QGraphicsLineItem** outptr_QGraphicsLineItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsLineItem* ret = new MiqtVirtualQGraphicsLineItem(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2), parent);
	*outptr_QGraphicsLineItem = ret;
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

QPen* QGraphicsLineItem_Pen(const QGraphicsLineItem* self) {
	return new QPen(self->pen());
}

void QGraphicsLineItem_SetPen(QGraphicsLineItem* self, QPen* pen) {
	self->setPen(*pen);
}

QLineF* QGraphicsLineItem_Line(const QGraphicsLineItem* self) {
	return new QLineF(self->line());
}

void QGraphicsLineItem_SetLine(QGraphicsLineItem* self, QLineF* line) {
	self->setLine(*line);
}

void QGraphicsLineItem_SetLine2(QGraphicsLineItem* self, double x1, double y1, double x2, double y2) {
	self->setLine(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

QRectF* QGraphicsLineItem_BoundingRect(const QGraphicsLineItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsLineItem_Shape(const QGraphicsLineItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsLineItem_Contains(const QGraphicsLineItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsLineItem_Paint(QGraphicsLineItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsLineItem_IsObscuredBy(const QGraphicsLineItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsLineItem_OpaqueArea(const QGraphicsLineItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsLineItem_Type(const QGraphicsLineItem* self) {
	return self->type();
}

void QGraphicsLineItem_override_virtual_BoundingRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__BoundingRect = slot;
}

QRectF* QGraphicsLineItem_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_BoundingRect();
}

void QGraphicsLineItem_override_virtual_Shape(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__Shape = slot;
}

QPainterPath* QGraphicsLineItem_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_Shape();
}

void QGraphicsLineItem_override_virtual_Contains(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__Contains = slot;
}

bool QGraphicsLineItem_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_Contains(point);
}

void QGraphicsLineItem_override_virtual_Paint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__Paint = slot;
}

void QGraphicsLineItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_Paint(painter, option, widget);
}

void QGraphicsLineItem_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__IsObscuredBy = slot;
}

bool QGraphicsLineItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_IsObscuredBy(item);
}

void QGraphicsLineItem_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__OpaqueArea = slot;
}

QPainterPath* QGraphicsLineItem_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_OpaqueArea();
}

void QGraphicsLineItem_override_virtual_Type(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__Type = slot;
}

int QGraphicsLineItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_Type();
}

void QGraphicsLineItem_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__SupportsExtension = slot;
}

bool QGraphicsLineItem_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_SupportsExtension(extension);
}

void QGraphicsLineItem_override_virtual_SetExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__SetExtension = slot;
}

void QGraphicsLineItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_SetExtension(extension, variant);
}

void QGraphicsLineItem_override_virtual_Extension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__Extension = slot;
}

QVariant* QGraphicsLineItem_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_Extension(variant);
}

void QGraphicsLineItem_override_virtual_Advance(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__Advance = slot;
}

void QGraphicsLineItem_virtualbase_Advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_Advance(phase);
}

void QGraphicsLineItem_override_virtual_CollidesWithItem(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__CollidesWithItem = slot;
}

bool QGraphicsLineItem_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_CollidesWithItem(other, mode);
}

void QGraphicsLineItem_override_virtual_CollidesWithPath(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__CollidesWithPath = slot;
}

bool QGraphicsLineItem_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_CollidesWithPath(path, mode);
}

void QGraphicsLineItem_override_virtual_SceneEventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__SceneEventFilter = slot;
}

bool QGraphicsLineItem_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_SceneEventFilter(watched, event);
}

void QGraphicsLineItem_override_virtual_SceneEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__SceneEvent = slot;
}

bool QGraphicsLineItem_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_SceneEvent(event);
}

void QGraphicsLineItem_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__ContextMenuEvent = slot;
}

void QGraphicsLineItem_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QGraphicsLineItem_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__DragEnterEvent = slot;
}

void QGraphicsLineItem_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_DragEnterEvent(event);
}

void QGraphicsLineItem_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__DragLeaveEvent = slot;
}

void QGraphicsLineItem_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QGraphicsLineItem_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__DragMoveEvent = slot;
}

void QGraphicsLineItem_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_DragMoveEvent(event);
}

void QGraphicsLineItem_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__DropEvent = slot;
}

void QGraphicsLineItem_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_DropEvent(event);
}

void QGraphicsLineItem_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__FocusInEvent = slot;
}

void QGraphicsLineItem_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_FocusInEvent(event);
}

void QGraphicsLineItem_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__FocusOutEvent = slot;
}

void QGraphicsLineItem_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_FocusOutEvent(event);
}

void QGraphicsLineItem_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__HoverEnterEvent = slot;
}

void QGraphicsLineItem_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_HoverEnterEvent(event);
}

void QGraphicsLineItem_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__HoverMoveEvent = slot;
}

void QGraphicsLineItem_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_HoverMoveEvent(event);
}

void QGraphicsLineItem_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__HoverLeaveEvent = slot;
}

void QGraphicsLineItem_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_HoverLeaveEvent(event);
}

void QGraphicsLineItem_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__KeyPressEvent = slot;
}

void QGraphicsLineItem_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_KeyPressEvent(event);
}

void QGraphicsLineItem_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__KeyReleaseEvent = slot;
}

void QGraphicsLineItem_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QGraphicsLineItem_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__MousePressEvent = slot;
}

void QGraphicsLineItem_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_MousePressEvent(event);
}

void QGraphicsLineItem_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__MouseMoveEvent = slot;
}

void QGraphicsLineItem_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_MouseMoveEvent(event);
}

void QGraphicsLineItem_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__MouseReleaseEvent = slot;
}

void QGraphicsLineItem_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void QGraphicsLineItem_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QGraphicsLineItem_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QGraphicsLineItem_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__WheelEvent = slot;
}

void QGraphicsLineItem_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_WheelEvent(event);
}

void QGraphicsLineItem_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__InputMethodEvent = slot;
}

void QGraphicsLineItem_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_InputMethodEvent(event);
}

void QGraphicsLineItem_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QGraphicsLineItem_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_InputMethodQuery(query);
}

void QGraphicsLineItem_override_virtual_ItemChange(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) )->handle__ItemChange = slot;
}

QVariant* QGraphicsLineItem_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_ItemChange(change, value);
}

void QGraphicsLineItem_Delete(QGraphicsLineItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQGraphicsLineItem*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQGraphicsPixmapItem : public virtual QGraphicsPixmapItem {
public:

	MiqtVirtualQGraphicsPixmapItem(): QGraphicsPixmapItem() {};
	MiqtVirtualQGraphicsPixmapItem(const QPixmap& pixmap): QGraphicsPixmapItem(pixmap) {};
	MiqtVirtualQGraphicsPixmapItem(QGraphicsItem* parent): QGraphicsPixmapItem(parent) {};
	MiqtVirtualQGraphicsPixmapItem(const QPixmap& pixmap, QGraphicsItem* parent): QGraphicsPixmapItem(pixmap, parent) {};

	virtual ~MiqtVirtualQGraphicsPixmapItem() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsPixmapItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_BoundingRect(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsPixmapItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsPixmapItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_Shape(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsPixmapItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsPixmapItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_Contains(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsPixmapItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsPixmapItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsPixmapItem_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsPixmapItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsPixmapItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_IsObscuredBy(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsPixmapItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsPixmapItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_OpaqueArea(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsPixmapItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsPixmapItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_Type(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsPixmapItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsPixmapItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_SupportsExtension(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsPixmapItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsPixmapItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsPixmapItem_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsPixmapItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsPixmapItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_Extension(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsPixmapItem::extension(*variant));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__Advance == 0) {
			QGraphicsPixmapItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsPixmapItem_Advance(this, handle__Advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Advance(int phase) {

		QGraphicsPixmapItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithItem == 0) {
			return QGraphicsPixmapItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_CollidesWithItem(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__CollidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsPixmapItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithPath == 0) {
			return QGraphicsPixmapItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_CollidesWithPath(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__CollidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsPixmapItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__SceneEventFilter == 0) {
			return QGraphicsPixmapItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_SceneEventFilter(this, handle__SceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsPixmapItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__SceneEvent == 0) {
			return QGraphicsPixmapItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* event) {

		return QGraphicsPixmapItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsPixmapItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsPixmapItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsPixmapItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPixmapItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsPixmapItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPixmapItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsPixmapItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPixmapItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsPixmapItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPixmapItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsPixmapItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsPixmapItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsPixmapItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsPixmapItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QGraphicsPixmapItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPixmapItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverMoveEvent == 0) {
			QGraphicsPixmapItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPixmapItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverLeaveEvent == 0) {
			QGraphicsPixmapItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPixmapItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsPixmapItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsPixmapItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsPixmapItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsPixmapItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsPixmapItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPixmapItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsPixmapItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPixmapItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsPixmapItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPixmapItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsPixmapItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPixmapItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QGraphicsPixmapItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsPixmapItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsPixmapItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsPixmapItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsPixmapItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_InputMethodQuery(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsPixmapItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__ItemChange == 0) {
			return QGraphicsPixmapItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_ItemChange(this, handle__ItemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_ItemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsPixmapItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

};

void QGraphicsPixmapItem_new(QGraphicsPixmapItem** outptr_QGraphicsPixmapItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsPixmapItem* ret = new MiqtVirtualQGraphicsPixmapItem();
	*outptr_QGraphicsPixmapItem = ret;
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsPixmapItem_new2(QPixmap* pixmap, QGraphicsPixmapItem** outptr_QGraphicsPixmapItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsPixmapItem* ret = new MiqtVirtualQGraphicsPixmapItem(*pixmap);
	*outptr_QGraphicsPixmapItem = ret;
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsPixmapItem_new3(QGraphicsItem* parent, QGraphicsPixmapItem** outptr_QGraphicsPixmapItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsPixmapItem* ret = new MiqtVirtualQGraphicsPixmapItem(parent);
	*outptr_QGraphicsPixmapItem = ret;
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsPixmapItem_new4(QPixmap* pixmap, QGraphicsItem* parent, QGraphicsPixmapItem** outptr_QGraphicsPixmapItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsPixmapItem* ret = new MiqtVirtualQGraphicsPixmapItem(*pixmap, parent);
	*outptr_QGraphicsPixmapItem = ret;
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

QPixmap* QGraphicsPixmapItem_Pixmap(const QGraphicsPixmapItem* self) {
	return new QPixmap(self->pixmap());
}

void QGraphicsPixmapItem_SetPixmap(QGraphicsPixmapItem* self, QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

int QGraphicsPixmapItem_TransformationMode(const QGraphicsPixmapItem* self) {
	Qt::TransformationMode _ret = self->transformationMode();
	return static_cast<int>(_ret);
}

void QGraphicsPixmapItem_SetTransformationMode(QGraphicsPixmapItem* self, int mode) {
	self->setTransformationMode(static_cast<Qt::TransformationMode>(mode));
}

QPointF* QGraphicsPixmapItem_Offset(const QGraphicsPixmapItem* self) {
	return new QPointF(self->offset());
}

void QGraphicsPixmapItem_SetOffset(QGraphicsPixmapItem* self, QPointF* offset) {
	self->setOffset(*offset);
}

void QGraphicsPixmapItem_SetOffset2(QGraphicsPixmapItem* self, double x, double y) {
	self->setOffset(static_cast<qreal>(x), static_cast<qreal>(y));
}

QRectF* QGraphicsPixmapItem_BoundingRect(const QGraphicsPixmapItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsPixmapItem_Shape(const QGraphicsPixmapItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsPixmapItem_Contains(const QGraphicsPixmapItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsPixmapItem_Paint(QGraphicsPixmapItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsPixmapItem_IsObscuredBy(const QGraphicsPixmapItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsPixmapItem_OpaqueArea(const QGraphicsPixmapItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsPixmapItem_Type(const QGraphicsPixmapItem* self) {
	return self->type();
}

int QGraphicsPixmapItem_ShapeMode(const QGraphicsPixmapItem* self) {
	QGraphicsPixmapItem::ShapeMode _ret = self->shapeMode();
	return static_cast<int>(_ret);
}

void QGraphicsPixmapItem_SetShapeMode(QGraphicsPixmapItem* self, int mode) {
	self->setShapeMode(static_cast<QGraphicsPixmapItem::ShapeMode>(mode));
}

void QGraphicsPixmapItem_override_virtual_BoundingRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__BoundingRect = slot;
}

QRectF* QGraphicsPixmapItem_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_BoundingRect();
}

void QGraphicsPixmapItem_override_virtual_Shape(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__Shape = slot;
}

QPainterPath* QGraphicsPixmapItem_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_Shape();
}

void QGraphicsPixmapItem_override_virtual_Contains(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__Contains = slot;
}

bool QGraphicsPixmapItem_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_Contains(point);
}

void QGraphicsPixmapItem_override_virtual_Paint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__Paint = slot;
}

void QGraphicsPixmapItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_Paint(painter, option, widget);
}

void QGraphicsPixmapItem_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__IsObscuredBy = slot;
}

bool QGraphicsPixmapItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_IsObscuredBy(item);
}

void QGraphicsPixmapItem_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__OpaqueArea = slot;
}

QPainterPath* QGraphicsPixmapItem_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_OpaqueArea();
}

void QGraphicsPixmapItem_override_virtual_Type(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__Type = slot;
}

int QGraphicsPixmapItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_Type();
}

void QGraphicsPixmapItem_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__SupportsExtension = slot;
}

bool QGraphicsPixmapItem_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_SupportsExtension(extension);
}

void QGraphicsPixmapItem_override_virtual_SetExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__SetExtension = slot;
}

void QGraphicsPixmapItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_SetExtension(extension, variant);
}

void QGraphicsPixmapItem_override_virtual_Extension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__Extension = slot;
}

QVariant* QGraphicsPixmapItem_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_Extension(variant);
}

void QGraphicsPixmapItem_override_virtual_Advance(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__Advance = slot;
}

void QGraphicsPixmapItem_virtualbase_Advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_Advance(phase);
}

void QGraphicsPixmapItem_override_virtual_CollidesWithItem(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__CollidesWithItem = slot;
}

bool QGraphicsPixmapItem_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_CollidesWithItem(other, mode);
}

void QGraphicsPixmapItem_override_virtual_CollidesWithPath(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__CollidesWithPath = slot;
}

bool QGraphicsPixmapItem_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_CollidesWithPath(path, mode);
}

void QGraphicsPixmapItem_override_virtual_SceneEventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__SceneEventFilter = slot;
}

bool QGraphicsPixmapItem_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_SceneEventFilter(watched, event);
}

void QGraphicsPixmapItem_override_virtual_SceneEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__SceneEvent = slot;
}

bool QGraphicsPixmapItem_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_SceneEvent(event);
}

void QGraphicsPixmapItem_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__ContextMenuEvent = slot;
}

void QGraphicsPixmapItem_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QGraphicsPixmapItem_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__DragEnterEvent = slot;
}

void QGraphicsPixmapItem_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_DragEnterEvent(event);
}

void QGraphicsPixmapItem_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__DragLeaveEvent = slot;
}

void QGraphicsPixmapItem_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QGraphicsPixmapItem_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__DragMoveEvent = slot;
}

void QGraphicsPixmapItem_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_DragMoveEvent(event);
}

void QGraphicsPixmapItem_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__DropEvent = slot;
}

void QGraphicsPixmapItem_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_DropEvent(event);
}

void QGraphicsPixmapItem_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__FocusInEvent = slot;
}

void QGraphicsPixmapItem_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_FocusInEvent(event);
}

void QGraphicsPixmapItem_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__FocusOutEvent = slot;
}

void QGraphicsPixmapItem_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_FocusOutEvent(event);
}

void QGraphicsPixmapItem_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__HoverEnterEvent = slot;
}

void QGraphicsPixmapItem_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_HoverEnterEvent(event);
}

void QGraphicsPixmapItem_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__HoverMoveEvent = slot;
}

void QGraphicsPixmapItem_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_HoverMoveEvent(event);
}

void QGraphicsPixmapItem_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__HoverLeaveEvent = slot;
}

void QGraphicsPixmapItem_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_HoverLeaveEvent(event);
}

void QGraphicsPixmapItem_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__KeyPressEvent = slot;
}

void QGraphicsPixmapItem_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_KeyPressEvent(event);
}

void QGraphicsPixmapItem_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__KeyReleaseEvent = slot;
}

void QGraphicsPixmapItem_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QGraphicsPixmapItem_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__MousePressEvent = slot;
}

void QGraphicsPixmapItem_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_MousePressEvent(event);
}

void QGraphicsPixmapItem_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__MouseMoveEvent = slot;
}

void QGraphicsPixmapItem_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_MouseMoveEvent(event);
}

void QGraphicsPixmapItem_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__MouseReleaseEvent = slot;
}

void QGraphicsPixmapItem_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void QGraphicsPixmapItem_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QGraphicsPixmapItem_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QGraphicsPixmapItem_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__WheelEvent = slot;
}

void QGraphicsPixmapItem_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_WheelEvent(event);
}

void QGraphicsPixmapItem_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__InputMethodEvent = slot;
}

void QGraphicsPixmapItem_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_InputMethodEvent(event);
}

void QGraphicsPixmapItem_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QGraphicsPixmapItem_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_InputMethodQuery(query);
}

void QGraphicsPixmapItem_override_virtual_ItemChange(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) )->handle__ItemChange = slot;
}

QVariant* QGraphicsPixmapItem_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_ItemChange(change, value);
}

void QGraphicsPixmapItem_Delete(QGraphicsPixmapItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQGraphicsTextItem : public virtual QGraphicsTextItem {
public:

	MiqtVirtualQGraphicsTextItem(): QGraphicsTextItem() {};
	MiqtVirtualQGraphicsTextItem(const QString& text): QGraphicsTextItem(text) {};
	MiqtVirtualQGraphicsTextItem(QGraphicsItem* parent): QGraphicsTextItem(parent) {};
	MiqtVirtualQGraphicsTextItem(const QString& text, QGraphicsItem* parent): QGraphicsTextItem(text, parent) {};

	virtual ~MiqtVirtualQGraphicsTextItem() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsTextItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsTextItem_BoundingRect(const_cast<MiqtVirtualQGraphicsTextItem*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsTextItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsTextItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsTextItem_Shape(const_cast<MiqtVirtualQGraphicsTextItem*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsTextItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsTextItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_Contains(const_cast<MiqtVirtualQGraphicsTextItem*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsTextItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsTextItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsTextItem_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsTextItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsTextItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_IsObscuredBy(const_cast<MiqtVirtualQGraphicsTextItem*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsTextItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsTextItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsTextItem_OpaqueArea(const_cast<MiqtVirtualQGraphicsTextItem*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsTextItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsTextItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsTextItem_Type(const_cast<MiqtVirtualQGraphicsTextItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsTextItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__SceneEvent == 0) {
			return QGraphicsTextItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* event) {

		return QGraphicsTextItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsTextItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsTextItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsTextItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsTextItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsTextItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsTextItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsTextItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsTextItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsTextItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsTextItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsTextItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsTextItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsTextItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsTextItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsTextItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsTextItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsTextItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsTextItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsTextItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsTextItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsTextItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsTextItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsTextItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsTextItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsTextItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsTextItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsTextItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsTextItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QGraphicsTextItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsTextItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverMoveEvent == 0) {
			QGraphicsTextItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsTextItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverLeaveEvent == 0) {
			QGraphicsTextItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsTextItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsTextItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsTextItem_InputMethodQuery(const_cast<MiqtVirtualQGraphicsTextItem*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsTextItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsTextItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_SupportsExtension(const_cast<MiqtVirtualQGraphicsTextItem*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsTextItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsTextItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsTextItem_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsTextItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsTextItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsTextItem_Extension(const_cast<MiqtVirtualQGraphicsTextItem*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsTextItem::extension(*variant));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* ev) override {
		if (handle__Event == 0) {
			return QGraphicsTextItem::event(ev);
		}
		
		QEvent* sigval1 = ev;

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* ev) {

		return QGraphicsTextItem::event(ev);

	}

};

void QGraphicsTextItem_new(QGraphicsTextItem** outptr_QGraphicsTextItem, QGraphicsObject** outptr_QGraphicsObject, QObject** outptr_QObject, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsTextItem* ret = new MiqtVirtualQGraphicsTextItem();
	*outptr_QGraphicsTextItem = ret;
	*outptr_QGraphicsObject = static_cast<QGraphicsObject*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsTextItem_new2(struct miqt_string text, QGraphicsTextItem** outptr_QGraphicsTextItem, QGraphicsObject** outptr_QGraphicsObject, QObject** outptr_QObject, QGraphicsItem** outptr_QGraphicsItem) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	MiqtVirtualQGraphicsTextItem* ret = new MiqtVirtualQGraphicsTextItem(text_QString);
	*outptr_QGraphicsTextItem = ret;
	*outptr_QGraphicsObject = static_cast<QGraphicsObject*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsTextItem_new3(QGraphicsItem* parent, QGraphicsTextItem** outptr_QGraphicsTextItem, QGraphicsObject** outptr_QGraphicsObject, QObject** outptr_QObject, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsTextItem* ret = new MiqtVirtualQGraphicsTextItem(parent);
	*outptr_QGraphicsTextItem = ret;
	*outptr_QGraphicsObject = static_cast<QGraphicsObject*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsTextItem_new4(struct miqt_string text, QGraphicsItem* parent, QGraphicsTextItem** outptr_QGraphicsTextItem, QGraphicsObject** outptr_QGraphicsObject, QObject** outptr_QObject, QGraphicsItem** outptr_QGraphicsItem) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	MiqtVirtualQGraphicsTextItem* ret = new MiqtVirtualQGraphicsTextItem(text_QString, parent);
	*outptr_QGraphicsTextItem = ret;
	*outptr_QGraphicsObject = static_cast<QGraphicsObject*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

QMetaObject* QGraphicsTextItem_MetaObject(const QGraphicsTextItem* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsTextItem_Metacast(QGraphicsTextItem* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsTextItem_Tr(const char* s) {
	QString _ret = QGraphicsTextItem::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTextItem_TrUtf8(const char* s) {
	QString _ret = QGraphicsTextItem::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTextItem_ToHtml(const QGraphicsTextItem* self) {
	QString _ret = self->toHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsTextItem_SetHtml(QGraphicsTextItem* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString);
}

struct miqt_string QGraphicsTextItem_ToPlainText(const QGraphicsTextItem* self) {
	QString _ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsTextItem_SetPlainText(QGraphicsTextItem* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setPlainText(text_QString);
}

QFont* QGraphicsTextItem_Font(const QGraphicsTextItem* self) {
	return new QFont(self->font());
}

void QGraphicsTextItem_SetFont(QGraphicsTextItem* self, QFont* font) {
	self->setFont(*font);
}

void QGraphicsTextItem_SetDefaultTextColor(QGraphicsTextItem* self, QColor* c) {
	self->setDefaultTextColor(*c);
}

QColor* QGraphicsTextItem_DefaultTextColor(const QGraphicsTextItem* self) {
	return new QColor(self->defaultTextColor());
}

QRectF* QGraphicsTextItem_BoundingRect(const QGraphicsTextItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsTextItem_Shape(const QGraphicsTextItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsTextItem_Contains(const QGraphicsTextItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsTextItem_Paint(QGraphicsTextItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsTextItem_IsObscuredBy(const QGraphicsTextItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsTextItem_OpaqueArea(const QGraphicsTextItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsTextItem_Type(const QGraphicsTextItem* self) {
	return self->type();
}

void QGraphicsTextItem_SetTextWidth(QGraphicsTextItem* self, double width) {
	self->setTextWidth(static_cast<qreal>(width));
}

double QGraphicsTextItem_TextWidth(const QGraphicsTextItem* self) {
	qreal _ret = self->textWidth();
	return static_cast<double>(_ret);
}

void QGraphicsTextItem_AdjustSize(QGraphicsTextItem* self) {
	self->adjustSize();
}

void QGraphicsTextItem_SetDocument(QGraphicsTextItem* self, QTextDocument* document) {
	self->setDocument(document);
}

QTextDocument* QGraphicsTextItem_Document(const QGraphicsTextItem* self) {
	return self->document();
}

void QGraphicsTextItem_SetTextInteractionFlags(QGraphicsTextItem* self, int flags) {
	self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QGraphicsTextItem_TextInteractionFlags(const QGraphicsTextItem* self) {
	Qt::TextInteractionFlags _ret = self->textInteractionFlags();
	return static_cast<int>(_ret);
}

void QGraphicsTextItem_SetTabChangesFocus(QGraphicsTextItem* self, bool b) {
	self->setTabChangesFocus(b);
}

bool QGraphicsTextItem_TabChangesFocus(const QGraphicsTextItem* self) {
	return self->tabChangesFocus();
}

void QGraphicsTextItem_SetOpenExternalLinks(QGraphicsTextItem* self, bool open) {
	self->setOpenExternalLinks(open);
}

bool QGraphicsTextItem_OpenExternalLinks(const QGraphicsTextItem* self) {
	return self->openExternalLinks();
}

void QGraphicsTextItem_SetTextCursor(QGraphicsTextItem* self, QTextCursor* cursor) {
	self->setTextCursor(*cursor);
}

QTextCursor* QGraphicsTextItem_TextCursor(const QGraphicsTextItem* self) {
	return new QTextCursor(self->textCursor());
}

void QGraphicsTextItem_LinkActivated(QGraphicsTextItem* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->linkActivated(param1_QString);
}

void QGraphicsTextItem_connect_LinkActivated(QGraphicsTextItem* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem::connect(self, static_cast<void (QGraphicsTextItem::*)(const QString&)>(&QGraphicsTextItem::linkActivated), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QGraphicsTextItem_LinkActivated(slot, sigval1);
	});
}

void QGraphicsTextItem_LinkHovered(QGraphicsTextItem* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->linkHovered(param1_QString);
}

void QGraphicsTextItem_connect_LinkHovered(QGraphicsTextItem* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem::connect(self, static_cast<void (QGraphicsTextItem::*)(const QString&)>(&QGraphicsTextItem::linkHovered), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QGraphicsTextItem_LinkHovered(slot, sigval1);
	});
}

struct miqt_string QGraphicsTextItem_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsTextItem::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTextItem_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsTextItem::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTextItem_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsTextItem::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTextItem_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsTextItem::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsTextItem_override_virtual_BoundingRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__BoundingRect = slot;
}

QRectF* QGraphicsTextItem_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_BoundingRect();
}

void QGraphicsTextItem_override_virtual_Shape(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__Shape = slot;
}

QPainterPath* QGraphicsTextItem_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_Shape();
}

void QGraphicsTextItem_override_virtual_Contains(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__Contains = slot;
}

bool QGraphicsTextItem_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_Contains(point);
}

void QGraphicsTextItem_override_virtual_Paint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__Paint = slot;
}

void QGraphicsTextItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_Paint(painter, option, widget);
}

void QGraphicsTextItem_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__IsObscuredBy = slot;
}

bool QGraphicsTextItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_IsObscuredBy(item);
}

void QGraphicsTextItem_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__OpaqueArea = slot;
}

QPainterPath* QGraphicsTextItem_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_OpaqueArea();
}

void QGraphicsTextItem_override_virtual_Type(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__Type = slot;
}

int QGraphicsTextItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_Type();
}

void QGraphicsTextItem_override_virtual_SceneEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__SceneEvent = slot;
}

bool QGraphicsTextItem_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_SceneEvent(event);
}

void QGraphicsTextItem_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__MousePressEvent = slot;
}

void QGraphicsTextItem_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_MousePressEvent(event);
}

void QGraphicsTextItem_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__MouseMoveEvent = slot;
}

void QGraphicsTextItem_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_MouseMoveEvent(event);
}

void QGraphicsTextItem_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__MouseReleaseEvent = slot;
}

void QGraphicsTextItem_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void QGraphicsTextItem_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QGraphicsTextItem_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QGraphicsTextItem_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__ContextMenuEvent = slot;
}

void QGraphicsTextItem_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QGraphicsTextItem_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__KeyPressEvent = slot;
}

void QGraphicsTextItem_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_KeyPressEvent(event);
}

void QGraphicsTextItem_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__KeyReleaseEvent = slot;
}

void QGraphicsTextItem_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QGraphicsTextItem_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__FocusInEvent = slot;
}

void QGraphicsTextItem_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_FocusInEvent(event);
}

void QGraphicsTextItem_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__FocusOutEvent = slot;
}

void QGraphicsTextItem_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_FocusOutEvent(event);
}

void QGraphicsTextItem_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__DragEnterEvent = slot;
}

void QGraphicsTextItem_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_DragEnterEvent(event);
}

void QGraphicsTextItem_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__DragLeaveEvent = slot;
}

void QGraphicsTextItem_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QGraphicsTextItem_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__DragMoveEvent = slot;
}

void QGraphicsTextItem_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_DragMoveEvent(event);
}

void QGraphicsTextItem_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__DropEvent = slot;
}

void QGraphicsTextItem_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_DropEvent(event);
}

void QGraphicsTextItem_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__InputMethodEvent = slot;
}

void QGraphicsTextItem_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_InputMethodEvent(event);
}

void QGraphicsTextItem_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__HoverEnterEvent = slot;
}

void QGraphicsTextItem_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_HoverEnterEvent(event);
}

void QGraphicsTextItem_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__HoverMoveEvent = slot;
}

void QGraphicsTextItem_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_HoverMoveEvent(event);
}

void QGraphicsTextItem_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__HoverLeaveEvent = slot;
}

void QGraphicsTextItem_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_HoverLeaveEvent(event);
}

void QGraphicsTextItem_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QGraphicsTextItem_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_InputMethodQuery(query);
}

void QGraphicsTextItem_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__SupportsExtension = slot;
}

bool QGraphicsTextItem_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_SupportsExtension(extension);
}

void QGraphicsTextItem_override_virtual_SetExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__SetExtension = slot;
}

void QGraphicsTextItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_SetExtension(extension, variant);
}

void QGraphicsTextItem_override_virtual_Extension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__Extension = slot;
}

QVariant* QGraphicsTextItem_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_Extension(variant);
}

void QGraphicsTextItem_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) )->handle__Event = slot;
}

bool QGraphicsTextItem_virtualbase_Event(void* self, QEvent* ev) {
	return ( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_Event(ev);
}

void QGraphicsTextItem_Delete(QGraphicsTextItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQGraphicsTextItem*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQGraphicsSimpleTextItem : public virtual QGraphicsSimpleTextItem {
public:

	MiqtVirtualQGraphicsSimpleTextItem(): QGraphicsSimpleTextItem() {};
	MiqtVirtualQGraphicsSimpleTextItem(const QString& text): QGraphicsSimpleTextItem(text) {};
	MiqtVirtualQGraphicsSimpleTextItem(QGraphicsItem* parent): QGraphicsSimpleTextItem(parent) {};
	MiqtVirtualQGraphicsSimpleTextItem(const QString& text, QGraphicsItem* parent): QGraphicsSimpleTextItem(text, parent) {};

	virtual ~MiqtVirtualQGraphicsSimpleTextItem() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsSimpleTextItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_BoundingRect(const_cast<MiqtVirtualQGraphicsSimpleTextItem*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsSimpleTextItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsSimpleTextItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_Shape(const_cast<MiqtVirtualQGraphicsSimpleTextItem*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsSimpleTextItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsSimpleTextItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_Contains(const_cast<MiqtVirtualQGraphicsSimpleTextItem*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsSimpleTextItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsSimpleTextItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsSimpleTextItem_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsSimpleTextItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsSimpleTextItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_IsObscuredBy(const_cast<MiqtVirtualQGraphicsSimpleTextItem*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsSimpleTextItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsSimpleTextItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_OpaqueArea(const_cast<MiqtVirtualQGraphicsSimpleTextItem*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsSimpleTextItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsSimpleTextItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_Type(const_cast<MiqtVirtualQGraphicsSimpleTextItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsSimpleTextItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsSimpleTextItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_SupportsExtension(const_cast<MiqtVirtualQGraphicsSimpleTextItem*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsSimpleTextItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsSimpleTextItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsSimpleTextItem_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsSimpleTextItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsSimpleTextItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_Extension(const_cast<MiqtVirtualQGraphicsSimpleTextItem*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsSimpleTextItem::extension(*variant));

	}

};

void QGraphicsSimpleTextItem_new(QGraphicsSimpleTextItem** outptr_QGraphicsSimpleTextItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsSimpleTextItem* ret = new MiqtVirtualQGraphicsSimpleTextItem();
	*outptr_QGraphicsSimpleTextItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsSimpleTextItem_new2(struct miqt_string text, QGraphicsSimpleTextItem** outptr_QGraphicsSimpleTextItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	MiqtVirtualQGraphicsSimpleTextItem* ret = new MiqtVirtualQGraphicsSimpleTextItem(text_QString);
	*outptr_QGraphicsSimpleTextItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsSimpleTextItem_new3(QGraphicsItem* parent, QGraphicsSimpleTextItem** outptr_QGraphicsSimpleTextItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsSimpleTextItem* ret = new MiqtVirtualQGraphicsSimpleTextItem(parent);
	*outptr_QGraphicsSimpleTextItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsSimpleTextItem_new4(struct miqt_string text, QGraphicsItem* parent, QGraphicsSimpleTextItem** outptr_QGraphicsSimpleTextItem, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem, QGraphicsItem** outptr_QGraphicsItem) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	MiqtVirtualQGraphicsSimpleTextItem* ret = new MiqtVirtualQGraphicsSimpleTextItem(text_QString, parent);
	*outptr_QGraphicsSimpleTextItem = ret;
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsSimpleTextItem_SetText(QGraphicsSimpleTextItem* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

struct miqt_string QGraphicsSimpleTextItem_Text(const QGraphicsSimpleTextItem* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsSimpleTextItem_SetFont(QGraphicsSimpleTextItem* self, QFont* font) {
	self->setFont(*font);
}

QFont* QGraphicsSimpleTextItem_Font(const QGraphicsSimpleTextItem* self) {
	return new QFont(self->font());
}

QRectF* QGraphicsSimpleTextItem_BoundingRect(const QGraphicsSimpleTextItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsSimpleTextItem_Shape(const QGraphicsSimpleTextItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsSimpleTextItem_Contains(const QGraphicsSimpleTextItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsSimpleTextItem_Paint(QGraphicsSimpleTextItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsSimpleTextItem_IsObscuredBy(const QGraphicsSimpleTextItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsSimpleTextItem_OpaqueArea(const QGraphicsSimpleTextItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsSimpleTextItem_Type(const QGraphicsSimpleTextItem* self) {
	return self->type();
}

void QGraphicsSimpleTextItem_override_virtual_BoundingRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) )->handle__BoundingRect = slot;
}

QRectF* QGraphicsSimpleTextItem_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_BoundingRect();
}

void QGraphicsSimpleTextItem_override_virtual_Shape(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) )->handle__Shape = slot;
}

QPainterPath* QGraphicsSimpleTextItem_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_Shape();
}

void QGraphicsSimpleTextItem_override_virtual_Contains(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) )->handle__Contains = slot;
}

bool QGraphicsSimpleTextItem_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_Contains(point);
}

void QGraphicsSimpleTextItem_override_virtual_Paint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) )->handle__Paint = slot;
}

void QGraphicsSimpleTextItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_Paint(painter, option, widget);
}

void QGraphicsSimpleTextItem_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) )->handle__IsObscuredBy = slot;
}

bool QGraphicsSimpleTextItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_IsObscuredBy(item);
}

void QGraphicsSimpleTextItem_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) )->handle__OpaqueArea = slot;
}

QPainterPath* QGraphicsSimpleTextItem_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_OpaqueArea();
}

void QGraphicsSimpleTextItem_override_virtual_Type(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) )->handle__Type = slot;
}

int QGraphicsSimpleTextItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_Type();
}

void QGraphicsSimpleTextItem_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) )->handle__SupportsExtension = slot;
}

bool QGraphicsSimpleTextItem_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_SupportsExtension(extension);
}

void QGraphicsSimpleTextItem_override_virtual_SetExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) )->handle__SetExtension = slot;
}

void QGraphicsSimpleTextItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_SetExtension(extension, variant);
}

void QGraphicsSimpleTextItem_override_virtual_Extension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) )->handle__Extension = slot;
}

QVariant* QGraphicsSimpleTextItem_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_Extension(variant);
}

void QGraphicsSimpleTextItem_Delete(QGraphicsSimpleTextItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQGraphicsItemGroup : public virtual QGraphicsItemGroup {
public:

	MiqtVirtualQGraphicsItemGroup(): QGraphicsItemGroup() {};
	MiqtVirtualQGraphicsItemGroup(QGraphicsItem* parent): QGraphicsItemGroup(parent) {};

	virtual ~MiqtVirtualQGraphicsItemGroup() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsItemGroup::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsItemGroup_BoundingRect(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsItemGroup::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsItemGroup::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsItemGroup_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsItemGroup::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsItemGroup::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_IsObscuredBy(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsItemGroup::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsItemGroup::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsItemGroup_OpaqueArea(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsItemGroup::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsItemGroup::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsItemGroup_Type(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsItemGroup::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__Advance == 0) {
			QGraphicsItemGroup::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsItemGroup_Advance(this, handle__Advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Advance(int phase) {

		QGraphicsItemGroup::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsItemGroup::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsItemGroup_Shape(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsItemGroup::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsItemGroup::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_Contains(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsItemGroup::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithItem == 0) {
			return QGraphicsItemGroup::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_CollidesWithItem(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__CollidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsItemGroup::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithPath == 0) {
			return QGraphicsItemGroup::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_CollidesWithPath(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__CollidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsItemGroup::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__SceneEventFilter == 0) {
			return QGraphicsItemGroup::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_SceneEventFilter(this, handle__SceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsItemGroup::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__SceneEvent == 0) {
			return QGraphicsItemGroup::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* event) {

		return QGraphicsItemGroup::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsItemGroup::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsItemGroup::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsItemGroup::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsItemGroup::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsItemGroup::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsItemGroup::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsItemGroup::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsItemGroup::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsItemGroup::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsItemGroup::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsItemGroup::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsItemGroup::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsItemGroup::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsItemGroup::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QGraphicsItemGroup::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsItemGroup::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverMoveEvent == 0) {
			QGraphicsItemGroup::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsItemGroup::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverLeaveEvent == 0) {
			QGraphicsItemGroup::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsItemGroup::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsItemGroup::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsItemGroup::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsItemGroup::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsItemGroup::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsItemGroup::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsItemGroup::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsItemGroup::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsItemGroup::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsItemGroup::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsItemGroup::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsItemGroup::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsItemGroup::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QGraphicsItemGroup::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsItemGroup::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsItemGroup::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsItemGroup::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsItemGroup::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsItemGroup_InputMethodQuery(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsItemGroup::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__ItemChange == 0) {
			return QGraphicsItemGroup::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsItemGroup_ItemChange(this, handle__ItemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_ItemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsItemGroup::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsItemGroup::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_SupportsExtension(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsItemGroup::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsItemGroup::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsItemGroup_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsItemGroup::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsItemGroup::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsItemGroup_Extension(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsItemGroup::extension(*variant));

	}

};

void QGraphicsItemGroup_new(QGraphicsItemGroup** outptr_QGraphicsItemGroup, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsItemGroup* ret = new MiqtVirtualQGraphicsItemGroup();
	*outptr_QGraphicsItemGroup = ret;
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsItemGroup_new2(QGraphicsItem* parent, QGraphicsItemGroup** outptr_QGraphicsItemGroup, QGraphicsItem** outptr_QGraphicsItem) {
	MiqtVirtualQGraphicsItemGroup* ret = new MiqtVirtualQGraphicsItemGroup(parent);
	*outptr_QGraphicsItemGroup = ret;
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
}

void QGraphicsItemGroup_AddToGroup(QGraphicsItemGroup* self, QGraphicsItem* item) {
	self->addToGroup(item);
}

void QGraphicsItemGroup_RemoveFromGroup(QGraphicsItemGroup* self, QGraphicsItem* item) {
	self->removeFromGroup(item);
}

QRectF* QGraphicsItemGroup_BoundingRect(const QGraphicsItemGroup* self) {
	return new QRectF(self->boundingRect());
}

void QGraphicsItemGroup_Paint(QGraphicsItemGroup* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsItemGroup_IsObscuredBy(const QGraphicsItemGroup* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsItemGroup_OpaqueArea(const QGraphicsItemGroup* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsItemGroup_Type(const QGraphicsItemGroup* self) {
	return self->type();
}

void QGraphicsItemGroup_override_virtual_BoundingRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__BoundingRect = slot;
}

QRectF* QGraphicsItemGroup_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_BoundingRect();
}

void QGraphicsItemGroup_override_virtual_Paint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__Paint = slot;
}

void QGraphicsItemGroup_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_Paint(painter, option, widget);
}

void QGraphicsItemGroup_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__IsObscuredBy = slot;
}

bool QGraphicsItemGroup_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_IsObscuredBy(item);
}

void QGraphicsItemGroup_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__OpaqueArea = slot;
}

QPainterPath* QGraphicsItemGroup_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_OpaqueArea();
}

void QGraphicsItemGroup_override_virtual_Type(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__Type = slot;
}

int QGraphicsItemGroup_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_Type();
}

void QGraphicsItemGroup_override_virtual_Advance(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__Advance = slot;
}

void QGraphicsItemGroup_virtualbase_Advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_Advance(phase);
}

void QGraphicsItemGroup_override_virtual_Shape(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__Shape = slot;
}

QPainterPath* QGraphicsItemGroup_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_Shape();
}

void QGraphicsItemGroup_override_virtual_Contains(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__Contains = slot;
}

bool QGraphicsItemGroup_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_Contains(point);
}

void QGraphicsItemGroup_override_virtual_CollidesWithItem(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__CollidesWithItem = slot;
}

bool QGraphicsItemGroup_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_CollidesWithItem(other, mode);
}

void QGraphicsItemGroup_override_virtual_CollidesWithPath(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__CollidesWithPath = slot;
}

bool QGraphicsItemGroup_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_CollidesWithPath(path, mode);
}

void QGraphicsItemGroup_override_virtual_SceneEventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__SceneEventFilter = slot;
}

bool QGraphicsItemGroup_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_SceneEventFilter(watched, event);
}

void QGraphicsItemGroup_override_virtual_SceneEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__SceneEvent = slot;
}

bool QGraphicsItemGroup_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_SceneEvent(event);
}

void QGraphicsItemGroup_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__ContextMenuEvent = slot;
}

void QGraphicsItemGroup_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QGraphicsItemGroup_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__DragEnterEvent = slot;
}

void QGraphicsItemGroup_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_DragEnterEvent(event);
}

void QGraphicsItemGroup_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__DragLeaveEvent = slot;
}

void QGraphicsItemGroup_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QGraphicsItemGroup_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__DragMoveEvent = slot;
}

void QGraphicsItemGroup_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_DragMoveEvent(event);
}

void QGraphicsItemGroup_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__DropEvent = slot;
}

void QGraphicsItemGroup_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_DropEvent(event);
}

void QGraphicsItemGroup_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__FocusInEvent = slot;
}

void QGraphicsItemGroup_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_FocusInEvent(event);
}

void QGraphicsItemGroup_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__FocusOutEvent = slot;
}

void QGraphicsItemGroup_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_FocusOutEvent(event);
}

void QGraphicsItemGroup_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__HoverEnterEvent = slot;
}

void QGraphicsItemGroup_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_HoverEnterEvent(event);
}

void QGraphicsItemGroup_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__HoverMoveEvent = slot;
}

void QGraphicsItemGroup_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_HoverMoveEvent(event);
}

void QGraphicsItemGroup_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__HoverLeaveEvent = slot;
}

void QGraphicsItemGroup_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_HoverLeaveEvent(event);
}

void QGraphicsItemGroup_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__KeyPressEvent = slot;
}

void QGraphicsItemGroup_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_KeyPressEvent(event);
}

void QGraphicsItemGroup_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__KeyReleaseEvent = slot;
}

void QGraphicsItemGroup_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QGraphicsItemGroup_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__MousePressEvent = slot;
}

void QGraphicsItemGroup_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_MousePressEvent(event);
}

void QGraphicsItemGroup_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__MouseMoveEvent = slot;
}

void QGraphicsItemGroup_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_MouseMoveEvent(event);
}

void QGraphicsItemGroup_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__MouseReleaseEvent = slot;
}

void QGraphicsItemGroup_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void QGraphicsItemGroup_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QGraphicsItemGroup_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QGraphicsItemGroup_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__WheelEvent = slot;
}

void QGraphicsItemGroup_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_WheelEvent(event);
}

void QGraphicsItemGroup_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__InputMethodEvent = slot;
}

void QGraphicsItemGroup_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_InputMethodEvent(event);
}

void QGraphicsItemGroup_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QGraphicsItemGroup_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_InputMethodQuery(query);
}

void QGraphicsItemGroup_override_virtual_ItemChange(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__ItemChange = slot;
}

QVariant* QGraphicsItemGroup_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_ItemChange(change, value);
}

void QGraphicsItemGroup_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__SupportsExtension = slot;
}

bool QGraphicsItemGroup_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_SupportsExtension(extension);
}

void QGraphicsItemGroup_override_virtual_SetExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__SetExtension = slot;
}

void QGraphicsItemGroup_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_SetExtension(extension, variant);
}

void QGraphicsItemGroup_override_virtual_Extension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) )->handle__Extension = slot;
}

QVariant* QGraphicsItemGroup_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_Extension(variant);
}

void QGraphicsItemGroup_Delete(QGraphicsItemGroup* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( self );
	} else {
		delete self;
	}
}

