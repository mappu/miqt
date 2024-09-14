#include <QAbstractGraphicsShapeItem>
#include <QBrush>
#include <QColor>
#include <QCursor>
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
#include <QGraphicsSimpleTextItem>
#include <QGraphicsTextItem>
#include <QGraphicsTransform>
#include <QGraphicsWidget>
#include <QLineF>
#include <QList>
#include <QMatrix>
#include <QMetaObject>
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
#include "qgraphicsitem.h"
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

struct miqt_array* QGraphicsItem_ChildItems(const QGraphicsItem* self) {
	QList<QGraphicsItem*> _ret = self->childItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
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

void QGraphicsItem_SetFlag(QGraphicsItem* self, uintptr_t flag) {
	self->setFlag(static_cast<QGraphicsItem::GraphicsItemFlag>(flag));
}

void QGraphicsItem_SetFlags(QGraphicsItem* self, int flags) {
	self->setFlags(static_cast<QGraphicsItem::GraphicsItemFlags>(flags));
}

uintptr_t QGraphicsItem_CacheMode(const QGraphicsItem* self) {
	QGraphicsItem::CacheMode _ret = self->cacheMode();
	return static_cast<uintptr_t>(_ret);
}

void QGraphicsItem_SetCacheMode(QGraphicsItem* self, uintptr_t mode) {
	self->setCacheMode(static_cast<QGraphicsItem::CacheMode>(mode));
}

uintptr_t QGraphicsItem_PanelModality(const QGraphicsItem* self) {
	QGraphicsItem::PanelModality _ret = self->panelModality();
	return static_cast<uintptr_t>(_ret);
}

void QGraphicsItem_SetPanelModality(QGraphicsItem* self, uintptr_t panelModality) {
	self->setPanelModality(static_cast<QGraphicsItem::PanelModality>(panelModality));
}

bool QGraphicsItem_IsBlockedByModalPanel(const QGraphicsItem* self) {
	return self->isBlockedByModalPanel();
}

struct miqt_string* QGraphicsItem_ToolTip(const QGraphicsItem* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QGraphicsItem_SetToolTip(QGraphicsItem* self, struct miqt_string* toolTip) {
	QString toolTip_QString = QString::fromUtf8(&toolTip->data, toolTip->len);
	self->setToolTip(toolTip_QString);
}

QCursor* QGraphicsItem_Cursor(const QGraphicsItem* self) {
	QCursor _ret = self->cursor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCursor*>(new QCursor(_ret));
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
	return self->opacity();
}

double QGraphicsItem_EffectiveOpacity(const QGraphicsItem* self) {
	return self->effectiveOpacity();
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
	QPointF _ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

double QGraphicsItem_X(const QGraphicsItem* self) {
	return self->x();
}

void QGraphicsItem_SetX(QGraphicsItem* self, double x) {
	self->setX(static_cast<qreal>(x));
}

double QGraphicsItem_Y(const QGraphicsItem* self) {
	return self->y();
}

void QGraphicsItem_SetY(QGraphicsItem* self, double y) {
	self->setY(static_cast<qreal>(y));
}

QPointF* QGraphicsItem_ScenePos(const QGraphicsItem* self) {
	QPointF _ret = self->scenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
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
	QMatrix _ret = self->matrix();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMatrix*>(new QMatrix(_ret));
}

QMatrix* QGraphicsItem_SceneMatrix(const QGraphicsItem* self) {
	QMatrix _ret = self->sceneMatrix();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMatrix*>(new QMatrix(_ret));
}

void QGraphicsItem_SetMatrix(QGraphicsItem* self, QMatrix* matrix) {
	self->setMatrix(*matrix);
}

void QGraphicsItem_ResetMatrix(QGraphicsItem* self) {
	self->resetMatrix();
}

QTransform* QGraphicsItem_Transform(const QGraphicsItem* self) {
	QTransform _ret = self->transform();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(_ret));
}

QTransform* QGraphicsItem_SceneTransform(const QGraphicsItem* self) {
	QTransform _ret = self->sceneTransform();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(_ret));
}

QTransform* QGraphicsItem_DeviceTransform(const QGraphicsItem* self, QTransform* viewportTransform) {
	QTransform _ret = self->deviceTransform(*viewportTransform);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(_ret));
}

QTransform* QGraphicsItem_ItemTransform(const QGraphicsItem* self, QGraphicsItem* other) {
	QTransform _ret = self->itemTransform(other);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(_ret));
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
	return self->rotation();
}

void QGraphicsItem_SetScale(QGraphicsItem* self, double scale) {
	self->setScale(static_cast<qreal>(scale));
}

double QGraphicsItem_Scale(const QGraphicsItem* self) {
	return self->scale();
}

struct miqt_array* QGraphicsItem_Transformations(const QGraphicsItem* self) {
	QList<QGraphicsTransform*> _ret = self->transformations();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsTransform** _arr = static_cast<QGraphicsTransform**>(malloc(sizeof(QGraphicsTransform*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QGraphicsItem_SetTransformations(QGraphicsItem* self, struct miqt_array* /* of QGraphicsTransform* */ transformations) {
	QList<QGraphicsTransform*> transformations_QList;
	transformations_QList.reserve(transformations->len);
	QGraphicsTransform** transformations_arr = static_cast<QGraphicsTransform**>(transformations->data);
	for(size_t i = 0; i < transformations->len; ++i) {
		transformations_QList.push_back(transformations_arr[i]);
	}
	self->setTransformations(transformations_QList);
}

QPointF* QGraphicsItem_TransformOriginPoint(const QGraphicsItem* self) {
	QPointF _ret = self->transformOriginPoint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
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
	return self->zValue();
}

void QGraphicsItem_SetZValue(QGraphicsItem* self, double z) {
	self->setZValue(static_cast<qreal>(z));
}

void QGraphicsItem_StackBefore(QGraphicsItem* self, QGraphicsItem* sibling) {
	self->stackBefore(sibling);
}

QRectF* QGraphicsItem_BoundingRect(const QGraphicsItem* self) {
	QRectF _ret = self->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRectF* QGraphicsItem_ChildrenBoundingRect(const QGraphicsItem* self) {
	QRectF _ret = self->childrenBoundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRectF* QGraphicsItem_SceneBoundingRect(const QGraphicsItem* self) {
	QRectF _ret = self->sceneBoundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QPainterPath* QGraphicsItem_Shape(const QGraphicsItem* self) {
	QPainterPath _ret = self->shape();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

bool QGraphicsItem_IsClipped(const QGraphicsItem* self) {
	return self->isClipped();
}

QPainterPath* QGraphicsItem_ClipPath(const QGraphicsItem* self) {
	QPainterPath _ret = self->clipPath();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

bool QGraphicsItem_Contains(const QGraphicsItem* self, QPointF* point) {
	return self->contains(*point);
}

bool QGraphicsItem_CollidesWithItem(const QGraphicsItem* self, QGraphicsItem* other) {
	return self->collidesWithItem(other);
}

bool QGraphicsItem_CollidesWithPath(const QGraphicsItem* self, QPainterPath* path) {
	return self->collidesWithPath(*path);
}

struct miqt_array* QGraphicsItem_CollidingItems(const QGraphicsItem* self) {
	QList<QGraphicsItem*> _ret = self->collidingItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
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
	QPainterPath _ret = self->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

QRegion* QGraphicsItem_BoundingRegion(const QGraphicsItem* self, QTransform* itemToDeviceTransform) {
	QRegion _ret = self->boundingRegion(*itemToDeviceTransform);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(_ret));
}

double QGraphicsItem_BoundingRegionGranularity(const QGraphicsItem* self) {
	return self->boundingRegionGranularity();
}

void QGraphicsItem_SetBoundingRegionGranularity(QGraphicsItem* self, double granularity) {
	self->setBoundingRegionGranularity(static_cast<qreal>(granularity));
}

void QGraphicsItem_Paint(QGraphicsItem* self, QPainter* painter, QStyleOptionGraphicsItem* option) {
	self->paint(painter, option);
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
	QPointF _ret = self->mapToItem(item, *point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

QPointF* QGraphicsItem_MapToParent(const QGraphicsItem* self, QPointF* point) {
	QPointF _ret = self->mapToParent(*point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

QPointF* QGraphicsItem_MapToScene(const QGraphicsItem* self, QPointF* point) {
	QPointF _ret = self->mapToScene(*point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

QRectF* QGraphicsItem_MapRectToItem(const QGraphicsItem* self, QGraphicsItem* item, QRectF* rect) {
	QRectF _ret = self->mapRectToItem(item, *rect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRectF* QGraphicsItem_MapRectToParent(const QGraphicsItem* self, QRectF* rect) {
	QRectF _ret = self->mapRectToParent(*rect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRectF* QGraphicsItem_MapRectToScene(const QGraphicsItem* self, QRectF* rect) {
	QRectF _ret = self->mapRectToScene(*rect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QPainterPath* QGraphicsItem_MapToItem4(const QGraphicsItem* self, QGraphicsItem* item, QPainterPath* path) {
	QPainterPath _ret = self->mapToItem(item, *path);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

QPainterPath* QGraphicsItem_MapToParentWithPath(const QGraphicsItem* self, QPainterPath* path) {
	QPainterPath _ret = self->mapToParent(*path);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

QPainterPath* QGraphicsItem_MapToSceneWithPath(const QGraphicsItem* self, QPainterPath* path) {
	QPainterPath _ret = self->mapToScene(*path);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

QPointF* QGraphicsItem_MapFromItem(const QGraphicsItem* self, QGraphicsItem* item, QPointF* point) {
	QPointF _ret = self->mapFromItem(item, *point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

QPointF* QGraphicsItem_MapFromParent(const QGraphicsItem* self, QPointF* point) {
	QPointF _ret = self->mapFromParent(*point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

QPointF* QGraphicsItem_MapFromScene(const QGraphicsItem* self, QPointF* point) {
	QPointF _ret = self->mapFromScene(*point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

QRectF* QGraphicsItem_MapRectFromItem(const QGraphicsItem* self, QGraphicsItem* item, QRectF* rect) {
	QRectF _ret = self->mapRectFromItem(item, *rect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRectF* QGraphicsItem_MapRectFromParent(const QGraphicsItem* self, QRectF* rect) {
	QRectF _ret = self->mapRectFromParent(*rect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRectF* QGraphicsItem_MapRectFromScene(const QGraphicsItem* self, QRectF* rect) {
	QRectF _ret = self->mapRectFromScene(*rect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QPainterPath* QGraphicsItem_MapFromItem4(const QGraphicsItem* self, QGraphicsItem* item, QPainterPath* path) {
	QPainterPath _ret = self->mapFromItem(item, *path);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

QPainterPath* QGraphicsItem_MapFromParentWithPath(const QGraphicsItem* self, QPainterPath* path) {
	QPainterPath _ret = self->mapFromParent(*path);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

QPainterPath* QGraphicsItem_MapFromSceneWithPath(const QGraphicsItem* self, QPainterPath* path) {
	QPainterPath _ret = self->mapFromScene(*path);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

QPointF* QGraphicsItem_MapToItem5(const QGraphicsItem* self, QGraphicsItem* item, double x, double y) {
	QPointF _ret = self->mapToItem(item, static_cast<qreal>(x), static_cast<qreal>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

QPointF* QGraphicsItem_MapToParent2(const QGraphicsItem* self, double x, double y) {
	QPointF _ret = self->mapToParent(static_cast<qreal>(x), static_cast<qreal>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

QPointF* QGraphicsItem_MapToScene2(const QGraphicsItem* self, double x, double y) {
	QPointF _ret = self->mapToScene(static_cast<qreal>(x), static_cast<qreal>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

QRectF* QGraphicsItem_MapRectToItem2(const QGraphicsItem* self, QGraphicsItem* item, double x, double y, double w, double h) {
	QRectF _ret = self->mapRectToItem(item, static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRectF* QGraphicsItem_MapRectToParent2(const QGraphicsItem* self, double x, double y, double w, double h) {
	QRectF _ret = self->mapRectToParent(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRectF* QGraphicsItem_MapRectToScene2(const QGraphicsItem* self, double x, double y, double w, double h) {
	QRectF _ret = self->mapRectToScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QPointF* QGraphicsItem_MapFromItem5(const QGraphicsItem* self, QGraphicsItem* item, double x, double y) {
	QPointF _ret = self->mapFromItem(item, static_cast<qreal>(x), static_cast<qreal>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

QPointF* QGraphicsItem_MapFromParent2(const QGraphicsItem* self, double x, double y) {
	QPointF _ret = self->mapFromParent(static_cast<qreal>(x), static_cast<qreal>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

QPointF* QGraphicsItem_MapFromScene2(const QGraphicsItem* self, double x, double y) {
	QPointF _ret = self->mapFromScene(static_cast<qreal>(x), static_cast<qreal>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

QRectF* QGraphicsItem_MapRectFromItem2(const QGraphicsItem* self, QGraphicsItem* item, double x, double y, double w, double h) {
	QRectF _ret = self->mapRectFromItem(item, static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRectF* QGraphicsItem_MapRectFromParent2(const QGraphicsItem* self, double x, double y, double w, double h) {
	QRectF _ret = self->mapRectFromParent(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRectF* QGraphicsItem_MapRectFromScene2(const QGraphicsItem* self, double x, double y, double w, double h) {
	QRectF _ret = self->mapRectFromScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
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
	QVariant _ret = self->data(static_cast<int>(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
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

void QGraphicsItem_SetFlag2(QGraphicsItem* self, uintptr_t flag, bool enabled) {
	self->setFlag(static_cast<QGraphicsItem::GraphicsItemFlag>(flag), enabled);
}

void QGraphicsItem_SetCacheMode2(QGraphicsItem* self, uintptr_t mode, QSize* cacheSize) {
	self->setCacheMode(static_cast<QGraphicsItem::CacheMode>(mode), *cacheSize);
}

void QGraphicsItem_SetFocus1(QGraphicsItem* self, uintptr_t focusReason) {
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
	QTransform _ret = self->itemTransform(other, ok);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(_ret));
}

void QGraphicsItem_SetTransform2(QGraphicsItem* self, QTransform* matrix, bool combine) {
	self->setTransform(*matrix, combine);
}

bool QGraphicsItem_CollidesWithItem2(const QGraphicsItem* self, QGraphicsItem* other, uintptr_t mode) {
	return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QGraphicsItem_CollidesWithPath2(const QGraphicsItem* self, QPainterPath* path, uintptr_t mode) {
	return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

struct miqt_array* QGraphicsItem_CollidingItems1(const QGraphicsItem* self, uintptr_t mode) {
	QList<QGraphicsItem*> _ret = self->collidingItems(static_cast<Qt::ItemSelectionMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

bool QGraphicsItem_IsObscured1(const QGraphicsItem* self, QRectF* rect) {
	return self->isObscured(*rect);
}

void QGraphicsItem_Paint3(QGraphicsItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

void QGraphicsItem_Update1(QGraphicsItem* self, QRectF* rect) {
	self->update(*rect);
}

void QGraphicsItem_Scroll3(QGraphicsItem* self, double dx, double dy, QRectF* rect) {
	self->scroll(static_cast<qreal>(dx), static_cast<qreal>(dy), *rect);
}

void QGraphicsItem_Delete(QGraphicsItem* self) {
	delete self;
}

QMetaObject* QGraphicsObject_MetaObject(const QGraphicsObject* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QGraphicsObject_Tr(const char* s) {
	QString _ret = QGraphicsObject::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QGraphicsObject_TrUtf8(const char* s) {
	QString _ret = QGraphicsObject::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QGraphicsObject_GrabGesture(QGraphicsObject* self, uintptr_t typeVal) {
	self->grabGesture(static_cast<Qt::GestureType>(typeVal));
}

void QGraphicsObject_UngrabGesture(QGraphicsObject* self, uintptr_t typeVal) {
	self->ungrabGesture(static_cast<Qt::GestureType>(typeVal));
}

void QGraphicsObject_ParentChanged(QGraphicsObject* self) {
	self->parentChanged();
}

void QGraphicsObject_connect_ParentChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::parentChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_ParentChanged(slot);
	});
}

void QGraphicsObject_OpacityChanged(QGraphicsObject* self) {
	self->opacityChanged();
}

void QGraphicsObject_connect_OpacityChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::opacityChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_OpacityChanged(slot);
	});
}

void QGraphicsObject_VisibleChanged(QGraphicsObject* self) {
	self->visibleChanged();
}

void QGraphicsObject_connect_VisibleChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::visibleChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_VisibleChanged(slot);
	});
}

void QGraphicsObject_EnabledChanged(QGraphicsObject* self) {
	self->enabledChanged();
}

void QGraphicsObject_connect_EnabledChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::enabledChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_EnabledChanged(slot);
	});
}

void QGraphicsObject_XChanged(QGraphicsObject* self) {
	self->xChanged();
}

void QGraphicsObject_connect_XChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::xChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_XChanged(slot);
	});
}

void QGraphicsObject_YChanged(QGraphicsObject* self) {
	self->yChanged();
}

void QGraphicsObject_connect_YChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::yChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_YChanged(slot);
	});
}

void QGraphicsObject_ZChanged(QGraphicsObject* self) {
	self->zChanged();
}

void QGraphicsObject_connect_ZChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::zChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_ZChanged(slot);
	});
}

void QGraphicsObject_RotationChanged(QGraphicsObject* self) {
	self->rotationChanged();
}

void QGraphicsObject_connect_RotationChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::rotationChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_RotationChanged(slot);
	});
}

void QGraphicsObject_ScaleChanged(QGraphicsObject* self) {
	self->scaleChanged();
}

void QGraphicsObject_connect_ScaleChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::scaleChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_ScaleChanged(slot);
	});
}

void QGraphicsObject_ChildrenChanged(QGraphicsObject* self) {
	self->childrenChanged();
}

void QGraphicsObject_connect_ChildrenChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::childrenChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_ChildrenChanged(slot);
	});
}

void QGraphicsObject_WidthChanged(QGraphicsObject* self) {
	self->widthChanged();
}

void QGraphicsObject_connect_WidthChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::widthChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_WidthChanged(slot);
	});
}

void QGraphicsObject_HeightChanged(QGraphicsObject* self) {
	self->heightChanged();
}

void QGraphicsObject_connect_HeightChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::heightChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_HeightChanged(slot);
	});
}

struct miqt_string* QGraphicsObject_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsObject::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QGraphicsObject_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsObject::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QGraphicsObject_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsObject::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QGraphicsObject_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsObject::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QGraphicsObject_GrabGesture2(QGraphicsObject* self, uintptr_t typeVal, int flags) {
	self->grabGesture(static_cast<Qt::GestureType>(typeVal), static_cast<Qt::GestureFlags>(flags));
}

void QGraphicsObject_Delete(QGraphicsObject* self) {
	delete self;
}

QPen* QAbstractGraphicsShapeItem_Pen(const QAbstractGraphicsShapeItem* self) {
	QPen _ret = self->pen();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPen*>(new QPen(_ret));
}

void QAbstractGraphicsShapeItem_SetPen(QAbstractGraphicsShapeItem* self, QPen* pen) {
	self->setPen(*pen);
}

QBrush* QAbstractGraphicsShapeItem_Brush(const QAbstractGraphicsShapeItem* self) {
	QBrush _ret = self->brush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(_ret));
}

void QAbstractGraphicsShapeItem_SetBrush(QAbstractGraphicsShapeItem* self, QBrush* brush) {
	self->setBrush(*brush);
}

bool QAbstractGraphicsShapeItem_IsObscuredBy(const QAbstractGraphicsShapeItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QAbstractGraphicsShapeItem_OpaqueArea(const QAbstractGraphicsShapeItem* self) {
	QPainterPath _ret = self->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

void QAbstractGraphicsShapeItem_Delete(QAbstractGraphicsShapeItem* self) {
	delete self;
}

QGraphicsPathItem* QGraphicsPathItem_new() {
	return new QGraphicsPathItem();
}

QGraphicsPathItem* QGraphicsPathItem_new2(QPainterPath* path) {
	return new QGraphicsPathItem(*path);
}

QGraphicsPathItem* QGraphicsPathItem_new3(QGraphicsItem* parent) {
	return new QGraphicsPathItem(parent);
}

QGraphicsPathItem* QGraphicsPathItem_new4(QPainterPath* path, QGraphicsItem* parent) {
	return new QGraphicsPathItem(*path, parent);
}

QPainterPath* QGraphicsPathItem_Path(const QGraphicsPathItem* self) {
	QPainterPath _ret = self->path();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

void QGraphicsPathItem_SetPath(QGraphicsPathItem* self, QPainterPath* path) {
	self->setPath(*path);
}

QRectF* QGraphicsPathItem_BoundingRect(const QGraphicsPathItem* self) {
	QRectF _ret = self->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QPainterPath* QGraphicsPathItem_Shape(const QGraphicsPathItem* self) {
	QPainterPath _ret = self->shape();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

bool QGraphicsPathItem_Contains(const QGraphicsPathItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsPathItem_Paint(QGraphicsPathItem* self, QPainter* painter, QStyleOptionGraphicsItem* option) {
	self->paint(painter, option);
}

bool QGraphicsPathItem_IsObscuredBy(const QGraphicsPathItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsPathItem_OpaqueArea(const QGraphicsPathItem* self) {
	QPainterPath _ret = self->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

int QGraphicsPathItem_Type(const QGraphicsPathItem* self) {
	return self->type();
}

void QGraphicsPathItem_Paint3(QGraphicsPathItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

void QGraphicsPathItem_Delete(QGraphicsPathItem* self) {
	delete self;
}

QGraphicsRectItem* QGraphicsRectItem_new() {
	return new QGraphicsRectItem();
}

QGraphicsRectItem* QGraphicsRectItem_new2(QRectF* rect) {
	return new QGraphicsRectItem(*rect);
}

QGraphicsRectItem* QGraphicsRectItem_new3(double x, double y, double w, double h) {
	return new QGraphicsRectItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QGraphicsRectItem* QGraphicsRectItem_new4(QGraphicsItem* parent) {
	return new QGraphicsRectItem(parent);
}

QGraphicsRectItem* QGraphicsRectItem_new5(QRectF* rect, QGraphicsItem* parent) {
	return new QGraphicsRectItem(*rect, parent);
}

QGraphicsRectItem* QGraphicsRectItem_new6(double x, double y, double w, double h, QGraphicsItem* parent) {
	return new QGraphicsRectItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), parent);
}

QRectF* QGraphicsRectItem_Rect(const QGraphicsRectItem* self) {
	QRectF _ret = self->rect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

void QGraphicsRectItem_SetRect(QGraphicsRectItem* self, QRectF* rect) {
	self->setRect(*rect);
}

void QGraphicsRectItem_SetRect2(QGraphicsRectItem* self, double x, double y, double w, double h) {
	self->setRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QRectF* QGraphicsRectItem_BoundingRect(const QGraphicsRectItem* self) {
	QRectF _ret = self->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QPainterPath* QGraphicsRectItem_Shape(const QGraphicsRectItem* self) {
	QPainterPath _ret = self->shape();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

bool QGraphicsRectItem_Contains(const QGraphicsRectItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsRectItem_Paint(QGraphicsRectItem* self, QPainter* painter, QStyleOptionGraphicsItem* option) {
	self->paint(painter, option);
}

bool QGraphicsRectItem_IsObscuredBy(const QGraphicsRectItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsRectItem_OpaqueArea(const QGraphicsRectItem* self) {
	QPainterPath _ret = self->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

int QGraphicsRectItem_Type(const QGraphicsRectItem* self) {
	return self->type();
}

void QGraphicsRectItem_Paint3(QGraphicsRectItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

void QGraphicsRectItem_Delete(QGraphicsRectItem* self) {
	delete self;
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new() {
	return new QGraphicsEllipseItem();
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new2(QRectF* rect) {
	return new QGraphicsEllipseItem(*rect);
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new3(double x, double y, double w, double h) {
	return new QGraphicsEllipseItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new4(QGraphicsItem* parent) {
	return new QGraphicsEllipseItem(parent);
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new5(QRectF* rect, QGraphicsItem* parent) {
	return new QGraphicsEllipseItem(*rect, parent);
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new6(double x, double y, double w, double h, QGraphicsItem* parent) {
	return new QGraphicsEllipseItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), parent);
}

QRectF* QGraphicsEllipseItem_Rect(const QGraphicsEllipseItem* self) {
	QRectF _ret = self->rect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
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
	QRectF _ret = self->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QPainterPath* QGraphicsEllipseItem_Shape(const QGraphicsEllipseItem* self) {
	QPainterPath _ret = self->shape();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

bool QGraphicsEllipseItem_Contains(const QGraphicsEllipseItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsEllipseItem_Paint(QGraphicsEllipseItem* self, QPainter* painter, QStyleOptionGraphicsItem* option) {
	self->paint(painter, option);
}

bool QGraphicsEllipseItem_IsObscuredBy(const QGraphicsEllipseItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsEllipseItem_OpaqueArea(const QGraphicsEllipseItem* self) {
	QPainterPath _ret = self->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

int QGraphicsEllipseItem_Type(const QGraphicsEllipseItem* self) {
	return self->type();
}

void QGraphicsEllipseItem_Paint3(QGraphicsEllipseItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

void QGraphicsEllipseItem_Delete(QGraphicsEllipseItem* self) {
	delete self;
}

QGraphicsPolygonItem* QGraphicsPolygonItem_new() {
	return new QGraphicsPolygonItem();
}

QGraphicsPolygonItem* QGraphicsPolygonItem_new2(QGraphicsItem* parent) {
	return new QGraphicsPolygonItem(parent);
}

uintptr_t QGraphicsPolygonItem_FillRule(const QGraphicsPolygonItem* self) {
	Qt::FillRule _ret = self->fillRule();
	return static_cast<uintptr_t>(_ret);
}

void QGraphicsPolygonItem_SetFillRule(QGraphicsPolygonItem* self, uintptr_t rule) {
	self->setFillRule(static_cast<Qt::FillRule>(rule));
}

QRectF* QGraphicsPolygonItem_BoundingRect(const QGraphicsPolygonItem* self) {
	QRectF _ret = self->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QPainterPath* QGraphicsPolygonItem_Shape(const QGraphicsPolygonItem* self) {
	QPainterPath _ret = self->shape();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

bool QGraphicsPolygonItem_Contains(const QGraphicsPolygonItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsPolygonItem_Paint(QGraphicsPolygonItem* self, QPainter* painter, QStyleOptionGraphicsItem* option) {
	self->paint(painter, option);
}

bool QGraphicsPolygonItem_IsObscuredBy(const QGraphicsPolygonItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsPolygonItem_OpaqueArea(const QGraphicsPolygonItem* self) {
	QPainterPath _ret = self->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

int QGraphicsPolygonItem_Type(const QGraphicsPolygonItem* self) {
	return self->type();
}

void QGraphicsPolygonItem_Paint3(QGraphicsPolygonItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

void QGraphicsPolygonItem_Delete(QGraphicsPolygonItem* self) {
	delete self;
}

QGraphicsLineItem* QGraphicsLineItem_new() {
	return new QGraphicsLineItem();
}

QGraphicsLineItem* QGraphicsLineItem_new2(QLineF* line) {
	return new QGraphicsLineItem(*line);
}

QGraphicsLineItem* QGraphicsLineItem_new3(double x1, double y1, double x2, double y2) {
	return new QGraphicsLineItem(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

QGraphicsLineItem* QGraphicsLineItem_new4(QGraphicsItem* parent) {
	return new QGraphicsLineItem(parent);
}

QGraphicsLineItem* QGraphicsLineItem_new5(QLineF* line, QGraphicsItem* parent) {
	return new QGraphicsLineItem(*line, parent);
}

QGraphicsLineItem* QGraphicsLineItem_new6(double x1, double y1, double x2, double y2, QGraphicsItem* parent) {
	return new QGraphicsLineItem(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2), parent);
}

QPen* QGraphicsLineItem_Pen(const QGraphicsLineItem* self) {
	QPen _ret = self->pen();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPen*>(new QPen(_ret));
}

void QGraphicsLineItem_SetPen(QGraphicsLineItem* self, QPen* pen) {
	self->setPen(*pen);
}

QLineF* QGraphicsLineItem_Line(const QGraphicsLineItem* self) {
	QLineF _ret = self->line();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLineF*>(new QLineF(_ret));
}

void QGraphicsLineItem_SetLine(QGraphicsLineItem* self, QLineF* line) {
	self->setLine(*line);
}

void QGraphicsLineItem_SetLine2(QGraphicsLineItem* self, double x1, double y1, double x2, double y2) {
	self->setLine(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

QRectF* QGraphicsLineItem_BoundingRect(const QGraphicsLineItem* self) {
	QRectF _ret = self->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QPainterPath* QGraphicsLineItem_Shape(const QGraphicsLineItem* self) {
	QPainterPath _ret = self->shape();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

bool QGraphicsLineItem_Contains(const QGraphicsLineItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsLineItem_Paint(QGraphicsLineItem* self, QPainter* painter, QStyleOptionGraphicsItem* option) {
	self->paint(painter, option);
}

bool QGraphicsLineItem_IsObscuredBy(const QGraphicsLineItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsLineItem_OpaqueArea(const QGraphicsLineItem* self) {
	QPainterPath _ret = self->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

int QGraphicsLineItem_Type(const QGraphicsLineItem* self) {
	return self->type();
}

void QGraphicsLineItem_Paint3(QGraphicsLineItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

void QGraphicsLineItem_Delete(QGraphicsLineItem* self) {
	delete self;
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new() {
	return new QGraphicsPixmapItem();
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new2(QPixmap* pixmap) {
	return new QGraphicsPixmapItem(*pixmap);
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new3(QGraphicsItem* parent) {
	return new QGraphicsPixmapItem(parent);
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new4(QPixmap* pixmap, QGraphicsItem* parent) {
	return new QGraphicsPixmapItem(*pixmap, parent);
}

QPixmap* QGraphicsPixmapItem_Pixmap(const QGraphicsPixmapItem* self) {
	QPixmap _ret = self->pixmap();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

void QGraphicsPixmapItem_SetPixmap(QGraphicsPixmapItem* self, QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

uintptr_t QGraphicsPixmapItem_TransformationMode(const QGraphicsPixmapItem* self) {
	Qt::TransformationMode _ret = self->transformationMode();
	return static_cast<uintptr_t>(_ret);
}

void QGraphicsPixmapItem_SetTransformationMode(QGraphicsPixmapItem* self, uintptr_t mode) {
	self->setTransformationMode(static_cast<Qt::TransformationMode>(mode));
}

QPointF* QGraphicsPixmapItem_Offset(const QGraphicsPixmapItem* self) {
	QPointF _ret = self->offset();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

void QGraphicsPixmapItem_SetOffset(QGraphicsPixmapItem* self, QPointF* offset) {
	self->setOffset(*offset);
}

void QGraphicsPixmapItem_SetOffset2(QGraphicsPixmapItem* self, double x, double y) {
	self->setOffset(static_cast<qreal>(x), static_cast<qreal>(y));
}

QRectF* QGraphicsPixmapItem_BoundingRect(const QGraphicsPixmapItem* self) {
	QRectF _ret = self->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QPainterPath* QGraphicsPixmapItem_Shape(const QGraphicsPixmapItem* self) {
	QPainterPath _ret = self->shape();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
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
	QPainterPath _ret = self->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

int QGraphicsPixmapItem_Type(const QGraphicsPixmapItem* self) {
	return self->type();
}

uintptr_t QGraphicsPixmapItem_ShapeMode(const QGraphicsPixmapItem* self) {
	QGraphicsPixmapItem::ShapeMode _ret = self->shapeMode();
	return static_cast<uintptr_t>(_ret);
}

void QGraphicsPixmapItem_SetShapeMode(QGraphicsPixmapItem* self, uintptr_t mode) {
	self->setShapeMode(static_cast<QGraphicsPixmapItem::ShapeMode>(mode));
}

void QGraphicsPixmapItem_Delete(QGraphicsPixmapItem* self) {
	delete self;
}

QGraphicsTextItem* QGraphicsTextItem_new() {
	return new QGraphicsTextItem();
}

QGraphicsTextItem* QGraphicsTextItem_new2(struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QGraphicsTextItem(text_QString);
}

QGraphicsTextItem* QGraphicsTextItem_new3(QGraphicsItem* parent) {
	return new QGraphicsTextItem(parent);
}

QGraphicsTextItem* QGraphicsTextItem_new4(struct miqt_string* text, QGraphicsItem* parent) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QGraphicsTextItem(text_QString, parent);
}

QMetaObject* QGraphicsTextItem_MetaObject(const QGraphicsTextItem* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QGraphicsTextItem_Tr(const char* s) {
	QString _ret = QGraphicsTextItem::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QGraphicsTextItem_TrUtf8(const char* s) {
	QString _ret = QGraphicsTextItem::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QGraphicsTextItem_ToHtml(const QGraphicsTextItem* self) {
	QString _ret = self->toHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QGraphicsTextItem_SetHtml(QGraphicsTextItem* self, struct miqt_string* html) {
	QString html_QString = QString::fromUtf8(&html->data, html->len);
	self->setHtml(html_QString);
}

struct miqt_string* QGraphicsTextItem_ToPlainText(const QGraphicsTextItem* self) {
	QString _ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QGraphicsTextItem_SetPlainText(QGraphicsTextItem* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->setPlainText(text_QString);
}

QFont* QGraphicsTextItem_Font(const QGraphicsTextItem* self) {
	QFont _ret = self->font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(_ret));
}

void QGraphicsTextItem_SetFont(QGraphicsTextItem* self, QFont* font) {
	self->setFont(*font);
}

void QGraphicsTextItem_SetDefaultTextColor(QGraphicsTextItem* self, QColor* c) {
	self->setDefaultTextColor(*c);
}

QColor* QGraphicsTextItem_DefaultTextColor(const QGraphicsTextItem* self) {
	QColor _ret = self->defaultTextColor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(_ret));
}

QRectF* QGraphicsTextItem_BoundingRect(const QGraphicsTextItem* self) {
	QRectF _ret = self->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QPainterPath* QGraphicsTextItem_Shape(const QGraphicsTextItem* self) {
	QPainterPath _ret = self->shape();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
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
	QPainterPath _ret = self->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

int QGraphicsTextItem_Type(const QGraphicsTextItem* self) {
	return self->type();
}

void QGraphicsTextItem_SetTextWidth(QGraphicsTextItem* self, double width) {
	self->setTextWidth(static_cast<qreal>(width));
}

double QGraphicsTextItem_TextWidth(const QGraphicsTextItem* self) {
	return self->textWidth();
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
	QTextCursor _ret = self->textCursor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(_ret));
}

void QGraphicsTextItem_LinkActivated(QGraphicsTextItem* self, struct miqt_string* param1) {
	QString param1_QString = QString::fromUtf8(&param1->data, param1->len);
	self->linkActivated(param1_QString);
}

void QGraphicsTextItem_connect_LinkActivated(QGraphicsTextItem* self, void* slot) {
	QGraphicsTextItem::connect(self, static_cast<void (QGraphicsTextItem::*)(const QString&)>(&QGraphicsTextItem::linkActivated), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string* sigval1 = miqt_strdup(param1_b.data(), param1_b.length());
		miqt_exec_callback_QGraphicsTextItem_LinkActivated(slot, sigval1);
	});
}

void QGraphicsTextItem_LinkHovered(QGraphicsTextItem* self, struct miqt_string* param1) {
	QString param1_QString = QString::fromUtf8(&param1->data, param1->len);
	self->linkHovered(param1_QString);
}

void QGraphicsTextItem_connect_LinkHovered(QGraphicsTextItem* self, void* slot) {
	QGraphicsTextItem::connect(self, static_cast<void (QGraphicsTextItem::*)(const QString&)>(&QGraphicsTextItem::linkHovered), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string* sigval1 = miqt_strdup(param1_b.data(), param1_b.length());
		miqt_exec_callback_QGraphicsTextItem_LinkHovered(slot, sigval1);
	});
}

struct miqt_string* QGraphicsTextItem_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsTextItem::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QGraphicsTextItem_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsTextItem::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QGraphicsTextItem_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsTextItem::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QGraphicsTextItem_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsTextItem::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QGraphicsTextItem_Delete(QGraphicsTextItem* self) {
	delete self;
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new() {
	return new QGraphicsSimpleTextItem();
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new2(struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QGraphicsSimpleTextItem(text_QString);
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new3(QGraphicsItem* parent) {
	return new QGraphicsSimpleTextItem(parent);
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new4(struct miqt_string* text, QGraphicsItem* parent) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QGraphicsSimpleTextItem(text_QString, parent);
}

void QGraphicsSimpleTextItem_SetText(QGraphicsSimpleTextItem* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->setText(text_QString);
}

struct miqt_string* QGraphicsSimpleTextItem_Text(const QGraphicsSimpleTextItem* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QGraphicsSimpleTextItem_SetFont(QGraphicsSimpleTextItem* self, QFont* font) {
	self->setFont(*font);
}

QFont* QGraphicsSimpleTextItem_Font(const QGraphicsSimpleTextItem* self) {
	QFont _ret = self->font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(_ret));
}

QRectF* QGraphicsSimpleTextItem_BoundingRect(const QGraphicsSimpleTextItem* self) {
	QRectF _ret = self->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QPainterPath* QGraphicsSimpleTextItem_Shape(const QGraphicsSimpleTextItem* self) {
	QPainterPath _ret = self->shape();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
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
	QPainterPath _ret = self->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

int QGraphicsSimpleTextItem_Type(const QGraphicsSimpleTextItem* self) {
	return self->type();
}

void QGraphicsSimpleTextItem_Delete(QGraphicsSimpleTextItem* self) {
	delete self;
}

QGraphicsItemGroup* QGraphicsItemGroup_new() {
	return new QGraphicsItemGroup();
}

QGraphicsItemGroup* QGraphicsItemGroup_new2(QGraphicsItem* parent) {
	return new QGraphicsItemGroup(parent);
}

void QGraphicsItemGroup_AddToGroup(QGraphicsItemGroup* self, QGraphicsItem* item) {
	self->addToGroup(item);
}

void QGraphicsItemGroup_RemoveFromGroup(QGraphicsItemGroup* self, QGraphicsItem* item) {
	self->removeFromGroup(item);
}

QRectF* QGraphicsItemGroup_BoundingRect(const QGraphicsItemGroup* self) {
	QRectF _ret = self->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

void QGraphicsItemGroup_Paint(QGraphicsItemGroup* self, QPainter* painter, QStyleOptionGraphicsItem* option) {
	self->paint(painter, option);
}

bool QGraphicsItemGroup_IsObscuredBy(const QGraphicsItemGroup* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsItemGroup_OpaqueArea(const QGraphicsItemGroup* self) {
	QPainterPath _ret = self->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

int QGraphicsItemGroup_Type(const QGraphicsItemGroup* self) {
	return self->type();
}

void QGraphicsItemGroup_Paint3(QGraphicsItemGroup* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

void QGraphicsItemGroup_Delete(QGraphicsItemGroup* self) {
	delete self;
}

