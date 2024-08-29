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

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QGraphicsScene* QGraphicsItem_Scene(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->scene();
}

QGraphicsItem* QGraphicsItem_ParentItem(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->parentItem();
}

QGraphicsItem* QGraphicsItem_TopLevelItem(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->topLevelItem();
}

QGraphicsObject* QGraphicsItem_ParentObject(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->parentObject();
}

QGraphicsWidget* QGraphicsItem_ParentWidget(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->parentWidget();
}

QGraphicsWidget* QGraphicsItem_TopLevelWidget(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->topLevelWidget();
}

QGraphicsWidget* QGraphicsItem_Window(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->window();
}

QGraphicsItem* QGraphicsItem_Panel(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->panel();
}

void QGraphicsItem_SetParentItem(QGraphicsItem* self, QGraphicsItem* parent) {
	self->setParentItem(parent);
}

void QGraphicsItem_ChildItems(QGraphicsItem* self, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = const_cast<const QGraphicsItem*>(self)->childItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

bool QGraphicsItem_IsWidget(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->isWidget();
}

bool QGraphicsItem_IsWindow(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->isWindow();
}

bool QGraphicsItem_IsPanel(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->isPanel();
}

QGraphicsObject* QGraphicsItem_ToGraphicsObject(QGraphicsItem* self) {
	return self->toGraphicsObject();
}

QGraphicsObject* QGraphicsItem_ToGraphicsObject2(QGraphicsItem* self) {
	return (QGraphicsObject*) const_cast<const QGraphicsItem*>(self)->toGraphicsObject();
}

QGraphicsItemGroup* QGraphicsItem_Group(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->group();
}

void QGraphicsItem_SetGroup(QGraphicsItem* self, QGraphicsItemGroup* group) {
	self->setGroup(group);
}

int QGraphicsItem_Flags(QGraphicsItem* self) {
	QGraphicsItem::GraphicsItemFlags ret = const_cast<const QGraphicsItem*>(self)->flags();
	return static_cast<int>(ret);
}

void QGraphicsItem_SetFlag(QGraphicsItem* self, uintptr_t flag) {
	self->setFlag(static_cast<QGraphicsItem::GraphicsItemFlag>(flag));
}

void QGraphicsItem_SetFlags(QGraphicsItem* self, int flags) {
	self->setFlags(static_cast<QGraphicsItem::GraphicsItemFlags>(flags));
}

uintptr_t QGraphicsItem_CacheMode(QGraphicsItem* self) {
	QGraphicsItem::CacheMode ret = const_cast<const QGraphicsItem*>(self)->cacheMode();
	return static_cast<uintptr_t>(ret);
}

void QGraphicsItem_SetCacheMode(QGraphicsItem* self, uintptr_t mode) {
	self->setCacheMode(static_cast<QGraphicsItem::CacheMode>(mode));
}

uintptr_t QGraphicsItem_PanelModality(QGraphicsItem* self) {
	QGraphicsItem::PanelModality ret = const_cast<const QGraphicsItem*>(self)->panelModality();
	return static_cast<uintptr_t>(ret);
}

void QGraphicsItem_SetPanelModality(QGraphicsItem* self, uintptr_t panelModality) {
	self->setPanelModality(static_cast<QGraphicsItem::PanelModality>(panelModality));
}

bool QGraphicsItem_IsBlockedByModalPanel(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->isBlockedByModalPanel();
}

void QGraphicsItem_ToolTip(QGraphicsItem* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QGraphicsItem*>(self)->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsItem_SetToolTip(QGraphicsItem* self, const char* toolTip, size_t toolTip_Strlen) {
	QString toolTip_QString = QString::fromUtf8(toolTip, toolTip_Strlen);
	self->setToolTip(toolTip_QString);
}

QCursor* QGraphicsItem_Cursor(QGraphicsItem* self) {
	QCursor ret = const_cast<const QGraphicsItem*>(self)->cursor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCursor*>(new QCursor(ret));
}

void QGraphicsItem_SetCursor(QGraphicsItem* self, QCursor* cursor) {
	self->setCursor(*cursor);
}

bool QGraphicsItem_HasCursor(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->hasCursor();
}

void QGraphicsItem_UnsetCursor(QGraphicsItem* self) {
	self->unsetCursor();
}

bool QGraphicsItem_IsVisible(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->isVisible();
}

bool QGraphicsItem_IsVisibleTo(QGraphicsItem* self, QGraphicsItem* parent) {
	return const_cast<const QGraphicsItem*>(self)->isVisibleTo(parent);
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

bool QGraphicsItem_IsEnabled(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->isEnabled();
}

void QGraphicsItem_SetEnabled(QGraphicsItem* self, bool enabled) {
	self->setEnabled(enabled);
}

bool QGraphicsItem_IsSelected(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->isSelected();
}

void QGraphicsItem_SetSelected(QGraphicsItem* self, bool selected) {
	self->setSelected(selected);
}

bool QGraphicsItem_AcceptDrops(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->acceptDrops();
}

void QGraphicsItem_SetAcceptDrops(QGraphicsItem* self, bool on) {
	self->setAcceptDrops(on);
}

double QGraphicsItem_Opacity(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->opacity();
}

double QGraphicsItem_EffectiveOpacity(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->effectiveOpacity();
}

void QGraphicsItem_SetOpacity(QGraphicsItem* self, double opacity) {
	self->setOpacity(static_cast<qreal>(opacity));
}

QGraphicsEffect* QGraphicsItem_GraphicsEffect(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->graphicsEffect();
}

void QGraphicsItem_SetGraphicsEffect(QGraphicsItem* self, QGraphicsEffect* effect) {
	self->setGraphicsEffect(effect);
}

int QGraphicsItem_AcceptedMouseButtons(QGraphicsItem* self) {
	Qt::MouseButtons ret = const_cast<const QGraphicsItem*>(self)->acceptedMouseButtons();
	return static_cast<int>(ret);
}

void QGraphicsItem_SetAcceptedMouseButtons(QGraphicsItem* self, int buttons) {
	self->setAcceptedMouseButtons(static_cast<Qt::MouseButtons>(buttons));
}

bool QGraphicsItem_AcceptHoverEvents(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->acceptHoverEvents();
}

void QGraphicsItem_SetAcceptHoverEvents(QGraphicsItem* self, bool enabled) {
	self->setAcceptHoverEvents(enabled);
}

bool QGraphicsItem_AcceptTouchEvents(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->acceptTouchEvents();
}

void QGraphicsItem_SetAcceptTouchEvents(QGraphicsItem* self, bool enabled) {
	self->setAcceptTouchEvents(enabled);
}

bool QGraphicsItem_FiltersChildEvents(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->filtersChildEvents();
}

void QGraphicsItem_SetFiltersChildEvents(QGraphicsItem* self, bool enabled) {
	self->setFiltersChildEvents(enabled);
}

bool QGraphicsItem_HandlesChildEvents(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->handlesChildEvents();
}

void QGraphicsItem_SetHandlesChildEvents(QGraphicsItem* self, bool enabled) {
	self->setHandlesChildEvents(enabled);
}

bool QGraphicsItem_IsActive(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->isActive();
}

void QGraphicsItem_SetActive(QGraphicsItem* self, bool active) {
	self->setActive(active);
}

bool QGraphicsItem_HasFocus(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->hasFocus();
}

void QGraphicsItem_SetFocus(QGraphicsItem* self) {
	self->setFocus();
}

void QGraphicsItem_ClearFocus(QGraphicsItem* self) {
	self->clearFocus();
}

QGraphicsItem* QGraphicsItem_FocusProxy(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->focusProxy();
}

void QGraphicsItem_SetFocusProxy(QGraphicsItem* self, QGraphicsItem* item) {
	self->setFocusProxy(item);
}

QGraphicsItem* QGraphicsItem_FocusItem(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->focusItem();
}

QGraphicsItem* QGraphicsItem_FocusScopeItem(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->focusScopeItem();
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

QPointF* QGraphicsItem_Pos(QGraphicsItem* self) {
	QPointF ret = const_cast<const QGraphicsItem*>(self)->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

double QGraphicsItem_X(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->x();
}

void QGraphicsItem_SetX(QGraphicsItem* self, double x) {
	self->setX(static_cast<qreal>(x));
}

double QGraphicsItem_Y(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->y();
}

void QGraphicsItem_SetY(QGraphicsItem* self, double y) {
	self->setY(static_cast<qreal>(y));
}

QPointF* QGraphicsItem_ScenePos(QGraphicsItem* self) {
	QPointF ret = const_cast<const QGraphicsItem*>(self)->scenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
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

QMatrix* QGraphicsItem_Matrix(QGraphicsItem* self) {
	QMatrix ret = const_cast<const QGraphicsItem*>(self)->matrix();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMatrix*>(new QMatrix(ret));
}

QMatrix* QGraphicsItem_SceneMatrix(QGraphicsItem* self) {
	QMatrix ret = const_cast<const QGraphicsItem*>(self)->sceneMatrix();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMatrix*>(new QMatrix(ret));
}

void QGraphicsItem_SetMatrix(QGraphicsItem* self, QMatrix* matrix) {
	self->setMatrix(*matrix);
}

void QGraphicsItem_ResetMatrix(QGraphicsItem* self) {
	self->resetMatrix();
}

QTransform* QGraphicsItem_Transform(QGraphicsItem* self) {
	QTransform ret = const_cast<const QGraphicsItem*>(self)->transform();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

QTransform* QGraphicsItem_SceneTransform(QGraphicsItem* self) {
	QTransform ret = const_cast<const QGraphicsItem*>(self)->sceneTransform();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

QTransform* QGraphicsItem_DeviceTransform(QGraphicsItem* self, QTransform* viewportTransform) {
	QTransform ret = const_cast<const QGraphicsItem*>(self)->deviceTransform(*viewportTransform);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

QTransform* QGraphicsItem_ItemTransform(QGraphicsItem* self, QGraphicsItem* other) {
	QTransform ret = const_cast<const QGraphicsItem*>(self)->itemTransform(other);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
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

double QGraphicsItem_Rotation(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->rotation();
}

void QGraphicsItem_SetScale(QGraphicsItem* self, double scale) {
	self->setScale(static_cast<qreal>(scale));
}

double QGraphicsItem_Scale(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->scale();
}

void QGraphicsItem_Transformations(QGraphicsItem* self, QGraphicsTransform*** _out, size_t* _out_len) {
	QList<QGraphicsTransform*> ret = const_cast<const QGraphicsItem*>(self)->transformations();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsTransform** __out = static_cast<QGraphicsTransform**>(malloc(sizeof(QGraphicsTransform*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGraphicsItem_SetTransformations(QGraphicsItem* self, QGraphicsTransform** transformations, size_t transformations_len) {
	QList<QGraphicsTransform*> transformations_QList;
	transformations_QList.reserve(transformations_len);
	for(size_t i = 0; i < transformations_len; ++i) {
		transformations_QList.push_back(transformations[i]);
	}
	self->setTransformations(transformations_QList);
}

QPointF* QGraphicsItem_TransformOriginPoint(QGraphicsItem* self) {
	QPointF ret = const_cast<const QGraphicsItem*>(self)->transformOriginPoint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
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

double QGraphicsItem_ZValue(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->zValue();
}

void QGraphicsItem_SetZValue(QGraphicsItem* self, double z) {
	self->setZValue(static_cast<qreal>(z));
}

void QGraphicsItem_StackBefore(QGraphicsItem* self, QGraphicsItem* sibling) {
	self->stackBefore(sibling);
}

QRectF* QGraphicsItem_BoundingRect(QGraphicsItem* self) {
	QRectF ret = const_cast<const QGraphicsItem*>(self)->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QGraphicsItem_ChildrenBoundingRect(QGraphicsItem* self) {
	QRectF ret = const_cast<const QGraphicsItem*>(self)->childrenBoundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QGraphicsItem_SceneBoundingRect(QGraphicsItem* self) {
	QRectF ret = const_cast<const QGraphicsItem*>(self)->sceneBoundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QPainterPath* QGraphicsItem_Shape(QGraphicsItem* self) {
	QPainterPath ret = const_cast<const QGraphicsItem*>(self)->shape();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

bool QGraphicsItem_IsClipped(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->isClipped();
}

QPainterPath* QGraphicsItem_ClipPath(QGraphicsItem* self) {
	QPainterPath ret = const_cast<const QGraphicsItem*>(self)->clipPath();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

bool QGraphicsItem_Contains(QGraphicsItem* self, QPointF* point) {
	return const_cast<const QGraphicsItem*>(self)->contains(*point);
}

bool QGraphicsItem_CollidesWithItem(QGraphicsItem* self, QGraphicsItem* other) {
	return const_cast<const QGraphicsItem*>(self)->collidesWithItem(other);
}

bool QGraphicsItem_CollidesWithPath(QGraphicsItem* self, QPainterPath* path) {
	return const_cast<const QGraphicsItem*>(self)->collidesWithPath(*path);
}

void QGraphicsItem_CollidingItems(QGraphicsItem* self, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = const_cast<const QGraphicsItem*>(self)->collidingItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

bool QGraphicsItem_IsObscured(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->isObscured();
}

bool QGraphicsItem_IsObscured2(QGraphicsItem* self, double x, double y, double w, double h) {
	return const_cast<const QGraphicsItem*>(self)->isObscured(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

bool QGraphicsItem_IsObscuredBy(QGraphicsItem* self, QGraphicsItem* item) {
	return const_cast<const QGraphicsItem*>(self)->isObscuredBy(item);
}

QPainterPath* QGraphicsItem_OpaqueArea(QGraphicsItem* self) {
	QPainterPath ret = const_cast<const QGraphicsItem*>(self)->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QRegion* QGraphicsItem_BoundingRegion(QGraphicsItem* self, QTransform* itemToDeviceTransform) {
	QRegion ret = const_cast<const QGraphicsItem*>(self)->boundingRegion(*itemToDeviceTransform);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

double QGraphicsItem_BoundingRegionGranularity(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->boundingRegionGranularity();
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

QPointF* QGraphicsItem_MapToItem(QGraphicsItem* self, QGraphicsItem* item, QPointF* point) {
	QPointF ret = const_cast<const QGraphicsItem*>(self)->mapToItem(item, *point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QGraphicsItem_MapToParent(QGraphicsItem* self, QPointF* point) {
	QPointF ret = const_cast<const QGraphicsItem*>(self)->mapToParent(*point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QGraphicsItem_MapToScene(QGraphicsItem* self, QPointF* point) {
	QPointF ret = const_cast<const QGraphicsItem*>(self)->mapToScene(*point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QRectF* QGraphicsItem_MapRectToItem(QGraphicsItem* self, QGraphicsItem* item, QRectF* rect) {
	QRectF ret = const_cast<const QGraphicsItem*>(self)->mapRectToItem(item, *rect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QGraphicsItem_MapRectToParent(QGraphicsItem* self, QRectF* rect) {
	QRectF ret = const_cast<const QGraphicsItem*>(self)->mapRectToParent(*rect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QGraphicsItem_MapRectToScene(QGraphicsItem* self, QRectF* rect) {
	QRectF ret = const_cast<const QGraphicsItem*>(self)->mapRectToScene(*rect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QPainterPath* QGraphicsItem_MapToItem4(QGraphicsItem* self, QGraphicsItem* item, QPainterPath* path) {
	QPainterPath ret = const_cast<const QGraphicsItem*>(self)->mapToItem(item, *path);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QPainterPath* QGraphicsItem_MapToParentWithPath(QGraphicsItem* self, QPainterPath* path) {
	QPainterPath ret = const_cast<const QGraphicsItem*>(self)->mapToParent(*path);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QPainterPath* QGraphicsItem_MapToSceneWithPath(QGraphicsItem* self, QPainterPath* path) {
	QPainterPath ret = const_cast<const QGraphicsItem*>(self)->mapToScene(*path);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QPointF* QGraphicsItem_MapFromItem(QGraphicsItem* self, QGraphicsItem* item, QPointF* point) {
	QPointF ret = const_cast<const QGraphicsItem*>(self)->mapFromItem(item, *point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QGraphicsItem_MapFromParent(QGraphicsItem* self, QPointF* point) {
	QPointF ret = const_cast<const QGraphicsItem*>(self)->mapFromParent(*point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QGraphicsItem_MapFromScene(QGraphicsItem* self, QPointF* point) {
	QPointF ret = const_cast<const QGraphicsItem*>(self)->mapFromScene(*point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QRectF* QGraphicsItem_MapRectFromItem(QGraphicsItem* self, QGraphicsItem* item, QRectF* rect) {
	QRectF ret = const_cast<const QGraphicsItem*>(self)->mapRectFromItem(item, *rect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QGraphicsItem_MapRectFromParent(QGraphicsItem* self, QRectF* rect) {
	QRectF ret = const_cast<const QGraphicsItem*>(self)->mapRectFromParent(*rect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QGraphicsItem_MapRectFromScene(QGraphicsItem* self, QRectF* rect) {
	QRectF ret = const_cast<const QGraphicsItem*>(self)->mapRectFromScene(*rect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QPainterPath* QGraphicsItem_MapFromItem4(QGraphicsItem* self, QGraphicsItem* item, QPainterPath* path) {
	QPainterPath ret = const_cast<const QGraphicsItem*>(self)->mapFromItem(item, *path);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QPainterPath* QGraphicsItem_MapFromParentWithPath(QGraphicsItem* self, QPainterPath* path) {
	QPainterPath ret = const_cast<const QGraphicsItem*>(self)->mapFromParent(*path);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QPainterPath* QGraphicsItem_MapFromSceneWithPath(QGraphicsItem* self, QPainterPath* path) {
	QPainterPath ret = const_cast<const QGraphicsItem*>(self)->mapFromScene(*path);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QPointF* QGraphicsItem_MapToItem5(QGraphicsItem* self, QGraphicsItem* item, double x, double y) {
	QPointF ret = const_cast<const QGraphicsItem*>(self)->mapToItem(item, static_cast<qreal>(x), static_cast<qreal>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QGraphicsItem_MapToParent2(QGraphicsItem* self, double x, double y) {
	QPointF ret = const_cast<const QGraphicsItem*>(self)->mapToParent(static_cast<qreal>(x), static_cast<qreal>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QGraphicsItem_MapToScene2(QGraphicsItem* self, double x, double y) {
	QPointF ret = const_cast<const QGraphicsItem*>(self)->mapToScene(static_cast<qreal>(x), static_cast<qreal>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QRectF* QGraphicsItem_MapRectToItem2(QGraphicsItem* self, QGraphicsItem* item, double x, double y, double w, double h) {
	QRectF ret = const_cast<const QGraphicsItem*>(self)->mapRectToItem(item, static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QGraphicsItem_MapRectToParent2(QGraphicsItem* self, double x, double y, double w, double h) {
	QRectF ret = const_cast<const QGraphicsItem*>(self)->mapRectToParent(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QGraphicsItem_MapRectToScene2(QGraphicsItem* self, double x, double y, double w, double h) {
	QRectF ret = const_cast<const QGraphicsItem*>(self)->mapRectToScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QPointF* QGraphicsItem_MapFromItem5(QGraphicsItem* self, QGraphicsItem* item, double x, double y) {
	QPointF ret = const_cast<const QGraphicsItem*>(self)->mapFromItem(item, static_cast<qreal>(x), static_cast<qreal>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QGraphicsItem_MapFromParent2(QGraphicsItem* self, double x, double y) {
	QPointF ret = const_cast<const QGraphicsItem*>(self)->mapFromParent(static_cast<qreal>(x), static_cast<qreal>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QGraphicsItem_MapFromScene2(QGraphicsItem* self, double x, double y) {
	QPointF ret = const_cast<const QGraphicsItem*>(self)->mapFromScene(static_cast<qreal>(x), static_cast<qreal>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QRectF* QGraphicsItem_MapRectFromItem2(QGraphicsItem* self, QGraphicsItem* item, double x, double y, double w, double h) {
	QRectF ret = const_cast<const QGraphicsItem*>(self)->mapRectFromItem(item, static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QGraphicsItem_MapRectFromParent2(QGraphicsItem* self, double x, double y, double w, double h) {
	QRectF ret = const_cast<const QGraphicsItem*>(self)->mapRectFromParent(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QGraphicsItem_MapRectFromScene2(QGraphicsItem* self, double x, double y, double w, double h) {
	QRectF ret = const_cast<const QGraphicsItem*>(self)->mapRectFromScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

bool QGraphicsItem_IsAncestorOf(QGraphicsItem* self, QGraphicsItem* child) {
	return const_cast<const QGraphicsItem*>(self)->isAncestorOf(child);
}

QGraphicsItem* QGraphicsItem_CommonAncestorItem(QGraphicsItem* self, QGraphicsItem* other) {
	return const_cast<const QGraphicsItem*>(self)->commonAncestorItem(other);
}

bool QGraphicsItem_IsUnderMouse(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->isUnderMouse();
}

QVariant* QGraphicsItem_Data(QGraphicsItem* self, int key) {
	QVariant ret = const_cast<const QGraphicsItem*>(self)->data(static_cast<int>(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QGraphicsItem_SetData(QGraphicsItem* self, int key, QVariant* value) {
	self->setData(static_cast<int>(key), *value);
}

int QGraphicsItem_InputMethodHints(QGraphicsItem* self) {
	Qt::InputMethodHints ret = const_cast<const QGraphicsItem*>(self)->inputMethodHints();
	return static_cast<int>(ret);
}

void QGraphicsItem_SetInputMethodHints(QGraphicsItem* self, int hints) {
	self->setInputMethodHints(static_cast<Qt::InputMethodHints>(hints));
}

int QGraphicsItem_Type(QGraphicsItem* self) {
	return const_cast<const QGraphicsItem*>(self)->type();
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

QTransform* QGraphicsItem_ItemTransform2(QGraphicsItem* self, QGraphicsItem* other, bool* ok) {
	QTransform ret = self->itemTransform(other, ok);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

void QGraphicsItem_SetTransform2(QGraphicsItem* self, QTransform* matrix, bool combine) {
	self->setTransform(*matrix, combine);
}

bool QGraphicsItem_CollidesWithItem2(QGraphicsItem* self, QGraphicsItem* other, uintptr_t mode) {
	return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QGraphicsItem_CollidesWithPath2(QGraphicsItem* self, QPainterPath* path, uintptr_t mode) {
	return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

void QGraphicsItem_CollidingItems1(QGraphicsItem* self, uintptr_t mode, QGraphicsItem*** _out, size_t* _out_len) {
	QList<QGraphicsItem*> ret = self->collidingItems(static_cast<Qt::ItemSelectionMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** __out = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

bool QGraphicsItem_IsObscured1(QGraphicsItem* self, QRectF* rect) {
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

QMetaObject* QGraphicsObject_MetaObject(QGraphicsObject* self) {
	return (QMetaObject*) const_cast<const QGraphicsObject*>(self)->metaObject();
}

void QGraphicsObject_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsObject::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsObject_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsObject::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsObject_OpacityChanged(QGraphicsObject* self) {
	self->opacityChanged();
}

void QGraphicsObject_connect_OpacityChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::opacityChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsObject_VisibleChanged(QGraphicsObject* self) {
	self->visibleChanged();
}

void QGraphicsObject_connect_VisibleChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::visibleChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsObject_EnabledChanged(QGraphicsObject* self) {
	self->enabledChanged();
}

void QGraphicsObject_connect_EnabledChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::enabledChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsObject_XChanged(QGraphicsObject* self) {
	self->xChanged();
}

void QGraphicsObject_connect_XChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::xChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsObject_YChanged(QGraphicsObject* self) {
	self->yChanged();
}

void QGraphicsObject_connect_YChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::yChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsObject_ZChanged(QGraphicsObject* self) {
	self->zChanged();
}

void QGraphicsObject_connect_ZChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::zChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsObject_RotationChanged(QGraphicsObject* self) {
	self->rotationChanged();
}

void QGraphicsObject_connect_RotationChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::rotationChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsObject_ScaleChanged(QGraphicsObject* self) {
	self->scaleChanged();
}

void QGraphicsObject_connect_ScaleChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::scaleChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsObject_ChildrenChanged(QGraphicsObject* self) {
	self->childrenChanged();
}

void QGraphicsObject_connect_ChildrenChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::childrenChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsObject_WidthChanged(QGraphicsObject* self) {
	self->widthChanged();
}

void QGraphicsObject_connect_WidthChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::widthChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsObject_HeightChanged(QGraphicsObject* self) {
	self->heightChanged();
}

void QGraphicsObject_connect_HeightChanged(QGraphicsObject* self, void* slot) {
	QGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::heightChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsObject_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsObject::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsObject_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsObject::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsObject_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsObject::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsObject_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsObject::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsObject_GrabGesture2(QGraphicsObject* self, uintptr_t typeVal, int flags) {
	self->grabGesture(static_cast<Qt::GestureType>(typeVal), static_cast<Qt::GestureFlags>(flags));
}

void QGraphicsObject_Delete(QGraphicsObject* self) {
	delete self;
}

QPen* QAbstractGraphicsShapeItem_Pen(QAbstractGraphicsShapeItem* self) {
	QPen ret = const_cast<const QAbstractGraphicsShapeItem*>(self)->pen();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPen*>(new QPen(ret));
}

void QAbstractGraphicsShapeItem_SetPen(QAbstractGraphicsShapeItem* self, QPen* pen) {
	self->setPen(*pen);
}

QBrush* QAbstractGraphicsShapeItem_Brush(QAbstractGraphicsShapeItem* self) {
	QBrush ret = const_cast<const QAbstractGraphicsShapeItem*>(self)->brush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QAbstractGraphicsShapeItem_SetBrush(QAbstractGraphicsShapeItem* self, QBrush* brush) {
	self->setBrush(*brush);
}

bool QAbstractGraphicsShapeItem_IsObscuredBy(QAbstractGraphicsShapeItem* self, QGraphicsItem* item) {
	return const_cast<const QAbstractGraphicsShapeItem*>(self)->isObscuredBy(item);
}

QPainterPath* QAbstractGraphicsShapeItem_OpaqueArea(QAbstractGraphicsShapeItem* self) {
	QPainterPath ret = const_cast<const QAbstractGraphicsShapeItem*>(self)->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
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

QPainterPath* QGraphicsPathItem_Path(QGraphicsPathItem* self) {
	QPainterPath ret = const_cast<const QGraphicsPathItem*>(self)->path();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

void QGraphicsPathItem_SetPath(QGraphicsPathItem* self, QPainterPath* path) {
	self->setPath(*path);
}

QRectF* QGraphicsPathItem_BoundingRect(QGraphicsPathItem* self) {
	QRectF ret = const_cast<const QGraphicsPathItem*>(self)->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QPainterPath* QGraphicsPathItem_Shape(QGraphicsPathItem* self) {
	QPainterPath ret = const_cast<const QGraphicsPathItem*>(self)->shape();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

bool QGraphicsPathItem_Contains(QGraphicsPathItem* self, QPointF* point) {
	return const_cast<const QGraphicsPathItem*>(self)->contains(*point);
}

void QGraphicsPathItem_Paint(QGraphicsPathItem* self, QPainter* painter, QStyleOptionGraphicsItem* option) {
	self->paint(painter, option);
}

bool QGraphicsPathItem_IsObscuredBy(QGraphicsPathItem* self, QGraphicsItem* item) {
	return const_cast<const QGraphicsPathItem*>(self)->isObscuredBy(item);
}

QPainterPath* QGraphicsPathItem_OpaqueArea(QGraphicsPathItem* self) {
	QPainterPath ret = const_cast<const QGraphicsPathItem*>(self)->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

int QGraphicsPathItem_Type(QGraphicsPathItem* self) {
	return const_cast<const QGraphicsPathItem*>(self)->type();
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

QRectF* QGraphicsRectItem_Rect(QGraphicsRectItem* self) {
	QRectF ret = const_cast<const QGraphicsRectItem*>(self)->rect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QGraphicsRectItem_SetRect(QGraphicsRectItem* self, QRectF* rect) {
	self->setRect(*rect);
}

void QGraphicsRectItem_SetRect2(QGraphicsRectItem* self, double x, double y, double w, double h) {
	self->setRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QRectF* QGraphicsRectItem_BoundingRect(QGraphicsRectItem* self) {
	QRectF ret = const_cast<const QGraphicsRectItem*>(self)->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QPainterPath* QGraphicsRectItem_Shape(QGraphicsRectItem* self) {
	QPainterPath ret = const_cast<const QGraphicsRectItem*>(self)->shape();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

bool QGraphicsRectItem_Contains(QGraphicsRectItem* self, QPointF* point) {
	return const_cast<const QGraphicsRectItem*>(self)->contains(*point);
}

void QGraphicsRectItem_Paint(QGraphicsRectItem* self, QPainter* painter, QStyleOptionGraphicsItem* option) {
	self->paint(painter, option);
}

bool QGraphicsRectItem_IsObscuredBy(QGraphicsRectItem* self, QGraphicsItem* item) {
	return const_cast<const QGraphicsRectItem*>(self)->isObscuredBy(item);
}

QPainterPath* QGraphicsRectItem_OpaqueArea(QGraphicsRectItem* self) {
	QPainterPath ret = const_cast<const QGraphicsRectItem*>(self)->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

int QGraphicsRectItem_Type(QGraphicsRectItem* self) {
	return const_cast<const QGraphicsRectItem*>(self)->type();
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

QRectF* QGraphicsEllipseItem_Rect(QGraphicsEllipseItem* self) {
	QRectF ret = const_cast<const QGraphicsEllipseItem*>(self)->rect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QGraphicsEllipseItem_SetRect(QGraphicsEllipseItem* self, QRectF* rect) {
	self->setRect(*rect);
}

void QGraphicsEllipseItem_SetRect2(QGraphicsEllipseItem* self, double x, double y, double w, double h) {
	self->setRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

int QGraphicsEllipseItem_StartAngle(QGraphicsEllipseItem* self) {
	return const_cast<const QGraphicsEllipseItem*>(self)->startAngle();
}

void QGraphicsEllipseItem_SetStartAngle(QGraphicsEllipseItem* self, int angle) {
	self->setStartAngle(static_cast<int>(angle));
}

int QGraphicsEllipseItem_SpanAngle(QGraphicsEllipseItem* self) {
	return const_cast<const QGraphicsEllipseItem*>(self)->spanAngle();
}

void QGraphicsEllipseItem_SetSpanAngle(QGraphicsEllipseItem* self, int angle) {
	self->setSpanAngle(static_cast<int>(angle));
}

QRectF* QGraphicsEllipseItem_BoundingRect(QGraphicsEllipseItem* self) {
	QRectF ret = const_cast<const QGraphicsEllipseItem*>(self)->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QPainterPath* QGraphicsEllipseItem_Shape(QGraphicsEllipseItem* self) {
	QPainterPath ret = const_cast<const QGraphicsEllipseItem*>(self)->shape();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

bool QGraphicsEllipseItem_Contains(QGraphicsEllipseItem* self, QPointF* point) {
	return const_cast<const QGraphicsEllipseItem*>(self)->contains(*point);
}

void QGraphicsEllipseItem_Paint(QGraphicsEllipseItem* self, QPainter* painter, QStyleOptionGraphicsItem* option) {
	self->paint(painter, option);
}

bool QGraphicsEllipseItem_IsObscuredBy(QGraphicsEllipseItem* self, QGraphicsItem* item) {
	return const_cast<const QGraphicsEllipseItem*>(self)->isObscuredBy(item);
}

QPainterPath* QGraphicsEllipseItem_OpaqueArea(QGraphicsEllipseItem* self) {
	QPainterPath ret = const_cast<const QGraphicsEllipseItem*>(self)->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

int QGraphicsEllipseItem_Type(QGraphicsEllipseItem* self) {
	return const_cast<const QGraphicsEllipseItem*>(self)->type();
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

uintptr_t QGraphicsPolygonItem_FillRule(QGraphicsPolygonItem* self) {
	Qt::FillRule ret = const_cast<const QGraphicsPolygonItem*>(self)->fillRule();
	return static_cast<uintptr_t>(ret);
}

void QGraphicsPolygonItem_SetFillRule(QGraphicsPolygonItem* self, uintptr_t rule) {
	self->setFillRule(static_cast<Qt::FillRule>(rule));
}

QRectF* QGraphicsPolygonItem_BoundingRect(QGraphicsPolygonItem* self) {
	QRectF ret = const_cast<const QGraphicsPolygonItem*>(self)->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QPainterPath* QGraphicsPolygonItem_Shape(QGraphicsPolygonItem* self) {
	QPainterPath ret = const_cast<const QGraphicsPolygonItem*>(self)->shape();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

bool QGraphicsPolygonItem_Contains(QGraphicsPolygonItem* self, QPointF* point) {
	return const_cast<const QGraphicsPolygonItem*>(self)->contains(*point);
}

void QGraphicsPolygonItem_Paint(QGraphicsPolygonItem* self, QPainter* painter, QStyleOptionGraphicsItem* option) {
	self->paint(painter, option);
}

bool QGraphicsPolygonItem_IsObscuredBy(QGraphicsPolygonItem* self, QGraphicsItem* item) {
	return const_cast<const QGraphicsPolygonItem*>(self)->isObscuredBy(item);
}

QPainterPath* QGraphicsPolygonItem_OpaqueArea(QGraphicsPolygonItem* self) {
	QPainterPath ret = const_cast<const QGraphicsPolygonItem*>(self)->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

int QGraphicsPolygonItem_Type(QGraphicsPolygonItem* self) {
	return const_cast<const QGraphicsPolygonItem*>(self)->type();
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

QPen* QGraphicsLineItem_Pen(QGraphicsLineItem* self) {
	QPen ret = const_cast<const QGraphicsLineItem*>(self)->pen();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPen*>(new QPen(ret));
}

void QGraphicsLineItem_SetPen(QGraphicsLineItem* self, QPen* pen) {
	self->setPen(*pen);
}

QLineF* QGraphicsLineItem_Line(QGraphicsLineItem* self) {
	QLineF ret = const_cast<const QGraphicsLineItem*>(self)->line();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLineF*>(new QLineF(ret));
}

void QGraphicsLineItem_SetLine(QGraphicsLineItem* self, QLineF* line) {
	self->setLine(*line);
}

void QGraphicsLineItem_SetLine2(QGraphicsLineItem* self, double x1, double y1, double x2, double y2) {
	self->setLine(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

QRectF* QGraphicsLineItem_BoundingRect(QGraphicsLineItem* self) {
	QRectF ret = const_cast<const QGraphicsLineItem*>(self)->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QPainterPath* QGraphicsLineItem_Shape(QGraphicsLineItem* self) {
	QPainterPath ret = const_cast<const QGraphicsLineItem*>(self)->shape();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

bool QGraphicsLineItem_Contains(QGraphicsLineItem* self, QPointF* point) {
	return const_cast<const QGraphicsLineItem*>(self)->contains(*point);
}

void QGraphicsLineItem_Paint(QGraphicsLineItem* self, QPainter* painter, QStyleOptionGraphicsItem* option) {
	self->paint(painter, option);
}

bool QGraphicsLineItem_IsObscuredBy(QGraphicsLineItem* self, QGraphicsItem* item) {
	return const_cast<const QGraphicsLineItem*>(self)->isObscuredBy(item);
}

QPainterPath* QGraphicsLineItem_OpaqueArea(QGraphicsLineItem* self) {
	QPainterPath ret = const_cast<const QGraphicsLineItem*>(self)->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

int QGraphicsLineItem_Type(QGraphicsLineItem* self) {
	return const_cast<const QGraphicsLineItem*>(self)->type();
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

QPixmap* QGraphicsPixmapItem_Pixmap(QGraphicsPixmapItem* self) {
	QPixmap ret = const_cast<const QGraphicsPixmapItem*>(self)->pixmap();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

void QGraphicsPixmapItem_SetPixmap(QGraphicsPixmapItem* self, QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

uintptr_t QGraphicsPixmapItem_TransformationMode(QGraphicsPixmapItem* self) {
	Qt::TransformationMode ret = const_cast<const QGraphicsPixmapItem*>(self)->transformationMode();
	return static_cast<uintptr_t>(ret);
}

void QGraphicsPixmapItem_SetTransformationMode(QGraphicsPixmapItem* self, uintptr_t mode) {
	self->setTransformationMode(static_cast<Qt::TransformationMode>(mode));
}

QPointF* QGraphicsPixmapItem_Offset(QGraphicsPixmapItem* self) {
	QPointF ret = const_cast<const QGraphicsPixmapItem*>(self)->offset();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsPixmapItem_SetOffset(QGraphicsPixmapItem* self, QPointF* offset) {
	self->setOffset(*offset);
}

void QGraphicsPixmapItem_SetOffset2(QGraphicsPixmapItem* self, double x, double y) {
	self->setOffset(static_cast<qreal>(x), static_cast<qreal>(y));
}

QRectF* QGraphicsPixmapItem_BoundingRect(QGraphicsPixmapItem* self) {
	QRectF ret = const_cast<const QGraphicsPixmapItem*>(self)->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QPainterPath* QGraphicsPixmapItem_Shape(QGraphicsPixmapItem* self) {
	QPainterPath ret = const_cast<const QGraphicsPixmapItem*>(self)->shape();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

bool QGraphicsPixmapItem_Contains(QGraphicsPixmapItem* self, QPointF* point) {
	return const_cast<const QGraphicsPixmapItem*>(self)->contains(*point);
}

void QGraphicsPixmapItem_Paint(QGraphicsPixmapItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsPixmapItem_IsObscuredBy(QGraphicsPixmapItem* self, QGraphicsItem* item) {
	return const_cast<const QGraphicsPixmapItem*>(self)->isObscuredBy(item);
}

QPainterPath* QGraphicsPixmapItem_OpaqueArea(QGraphicsPixmapItem* self) {
	QPainterPath ret = const_cast<const QGraphicsPixmapItem*>(self)->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

int QGraphicsPixmapItem_Type(QGraphicsPixmapItem* self) {
	return const_cast<const QGraphicsPixmapItem*>(self)->type();
}

uintptr_t QGraphicsPixmapItem_ShapeMode(QGraphicsPixmapItem* self) {
	QGraphicsPixmapItem::ShapeMode ret = const_cast<const QGraphicsPixmapItem*>(self)->shapeMode();
	return static_cast<uintptr_t>(ret);
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

QGraphicsTextItem* QGraphicsTextItem_new2(const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QGraphicsTextItem(text_QString);
}

QGraphicsTextItem* QGraphicsTextItem_new3(QGraphicsItem* parent) {
	return new QGraphicsTextItem(parent);
}

QGraphicsTextItem* QGraphicsTextItem_new4(const char* text, size_t text_Strlen, QGraphicsItem* parent) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QGraphicsTextItem(text_QString, parent);
}

QMetaObject* QGraphicsTextItem_MetaObject(QGraphicsTextItem* self) {
	return (QMetaObject*) const_cast<const QGraphicsTextItem*>(self)->metaObject();
}

void QGraphicsTextItem_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsTextItem::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsTextItem_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsTextItem::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsTextItem_ToHtml(QGraphicsTextItem* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QGraphicsTextItem*>(self)->toHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsTextItem_SetHtml(QGraphicsTextItem* self, const char* html, size_t html_Strlen) {
	QString html_QString = QString::fromUtf8(html, html_Strlen);
	self->setHtml(html_QString);
}

void QGraphicsTextItem_ToPlainText(QGraphicsTextItem* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QGraphicsTextItem*>(self)->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsTextItem_SetPlainText(QGraphicsTextItem* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setPlainText(text_QString);
}

QFont* QGraphicsTextItem_Font(QGraphicsTextItem* self) {
	QFont ret = const_cast<const QGraphicsTextItem*>(self)->font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

void QGraphicsTextItem_SetFont(QGraphicsTextItem* self, QFont* font) {
	self->setFont(*font);
}

void QGraphicsTextItem_SetDefaultTextColor(QGraphicsTextItem* self, QColor* c) {
	self->setDefaultTextColor(*c);
}

QColor* QGraphicsTextItem_DefaultTextColor(QGraphicsTextItem* self) {
	QColor ret = const_cast<const QGraphicsTextItem*>(self)->defaultTextColor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QRectF* QGraphicsTextItem_BoundingRect(QGraphicsTextItem* self) {
	QRectF ret = const_cast<const QGraphicsTextItem*>(self)->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QPainterPath* QGraphicsTextItem_Shape(QGraphicsTextItem* self) {
	QPainterPath ret = const_cast<const QGraphicsTextItem*>(self)->shape();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

bool QGraphicsTextItem_Contains(QGraphicsTextItem* self, QPointF* point) {
	return const_cast<const QGraphicsTextItem*>(self)->contains(*point);
}

void QGraphicsTextItem_Paint(QGraphicsTextItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsTextItem_IsObscuredBy(QGraphicsTextItem* self, QGraphicsItem* item) {
	return const_cast<const QGraphicsTextItem*>(self)->isObscuredBy(item);
}

QPainterPath* QGraphicsTextItem_OpaqueArea(QGraphicsTextItem* self) {
	QPainterPath ret = const_cast<const QGraphicsTextItem*>(self)->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

int QGraphicsTextItem_Type(QGraphicsTextItem* self) {
	return const_cast<const QGraphicsTextItem*>(self)->type();
}

void QGraphicsTextItem_SetTextWidth(QGraphicsTextItem* self, double width) {
	self->setTextWidth(static_cast<qreal>(width));
}

double QGraphicsTextItem_TextWidth(QGraphicsTextItem* self) {
	return const_cast<const QGraphicsTextItem*>(self)->textWidth();
}

void QGraphicsTextItem_AdjustSize(QGraphicsTextItem* self) {
	self->adjustSize();
}

void QGraphicsTextItem_SetDocument(QGraphicsTextItem* self, QTextDocument* document) {
	self->setDocument(document);
}

QTextDocument* QGraphicsTextItem_Document(QGraphicsTextItem* self) {
	return const_cast<const QGraphicsTextItem*>(self)->document();
}

void QGraphicsTextItem_SetTextInteractionFlags(QGraphicsTextItem* self, int flags) {
	self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QGraphicsTextItem_TextInteractionFlags(QGraphicsTextItem* self) {
	Qt::TextInteractionFlags ret = const_cast<const QGraphicsTextItem*>(self)->textInteractionFlags();
	return static_cast<int>(ret);
}

void QGraphicsTextItem_SetTabChangesFocus(QGraphicsTextItem* self, bool b) {
	self->setTabChangesFocus(b);
}

bool QGraphicsTextItem_TabChangesFocus(QGraphicsTextItem* self) {
	return const_cast<const QGraphicsTextItem*>(self)->tabChangesFocus();
}

void QGraphicsTextItem_SetOpenExternalLinks(QGraphicsTextItem* self, bool open) {
	self->setOpenExternalLinks(open);
}

bool QGraphicsTextItem_OpenExternalLinks(QGraphicsTextItem* self) {
	return const_cast<const QGraphicsTextItem*>(self)->openExternalLinks();
}

void QGraphicsTextItem_SetTextCursor(QGraphicsTextItem* self, QTextCursor* cursor) {
	self->setTextCursor(*cursor);
}

QTextCursor* QGraphicsTextItem_TextCursor(QGraphicsTextItem* self) {
	QTextCursor ret = const_cast<const QGraphicsTextItem*>(self)->textCursor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

void QGraphicsTextItem_LinkActivated(QGraphicsTextItem* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->linkActivated(param1_QString);
}

void QGraphicsTextItem_connect_LinkActivated(QGraphicsTextItem* self, void* slot) {
	QGraphicsTextItem::connect(self, static_cast<void (QGraphicsTextItem::*)(const QString&)>(&QGraphicsTextItem::linkActivated), self, [=](const QString& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsTextItem_LinkHovered(QGraphicsTextItem* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->linkHovered(param1_QString);
}

void QGraphicsTextItem_connect_LinkHovered(QGraphicsTextItem* self, void* slot) {
	QGraphicsTextItem::connect(self, static_cast<void (QGraphicsTextItem::*)(const QString&)>(&QGraphicsTextItem::linkHovered), self, [=](const QString& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsTextItem_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsTextItem::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsTextItem_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsTextItem::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsTextItem_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsTextItem::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsTextItem_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsTextItem::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsTextItem_Delete(QGraphicsTextItem* self) {
	delete self;
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new() {
	return new QGraphicsSimpleTextItem();
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new2(const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QGraphicsSimpleTextItem(text_QString);
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new3(QGraphicsItem* parent) {
	return new QGraphicsSimpleTextItem(parent);
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new4(const char* text, size_t text_Strlen, QGraphicsItem* parent) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QGraphicsSimpleTextItem(text_QString, parent);
}

void QGraphicsSimpleTextItem_SetText(QGraphicsSimpleTextItem* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setText(text_QString);
}

void QGraphicsSimpleTextItem_Text(QGraphicsSimpleTextItem* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QGraphicsSimpleTextItem*>(self)->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsSimpleTextItem_SetFont(QGraphicsSimpleTextItem* self, QFont* font) {
	self->setFont(*font);
}

QFont* QGraphicsSimpleTextItem_Font(QGraphicsSimpleTextItem* self) {
	QFont ret = const_cast<const QGraphicsSimpleTextItem*>(self)->font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

QRectF* QGraphicsSimpleTextItem_BoundingRect(QGraphicsSimpleTextItem* self) {
	QRectF ret = const_cast<const QGraphicsSimpleTextItem*>(self)->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QPainterPath* QGraphicsSimpleTextItem_Shape(QGraphicsSimpleTextItem* self) {
	QPainterPath ret = const_cast<const QGraphicsSimpleTextItem*>(self)->shape();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

bool QGraphicsSimpleTextItem_Contains(QGraphicsSimpleTextItem* self, QPointF* point) {
	return const_cast<const QGraphicsSimpleTextItem*>(self)->contains(*point);
}

void QGraphicsSimpleTextItem_Paint(QGraphicsSimpleTextItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsSimpleTextItem_IsObscuredBy(QGraphicsSimpleTextItem* self, QGraphicsItem* item) {
	return const_cast<const QGraphicsSimpleTextItem*>(self)->isObscuredBy(item);
}

QPainterPath* QGraphicsSimpleTextItem_OpaqueArea(QGraphicsSimpleTextItem* self) {
	QPainterPath ret = const_cast<const QGraphicsSimpleTextItem*>(self)->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

int QGraphicsSimpleTextItem_Type(QGraphicsSimpleTextItem* self) {
	return const_cast<const QGraphicsSimpleTextItem*>(self)->type();
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

QRectF* QGraphicsItemGroup_BoundingRect(QGraphicsItemGroup* self) {
	QRectF ret = const_cast<const QGraphicsItemGroup*>(self)->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QGraphicsItemGroup_Paint(QGraphicsItemGroup* self, QPainter* painter, QStyleOptionGraphicsItem* option) {
	self->paint(painter, option);
}

bool QGraphicsItemGroup_IsObscuredBy(QGraphicsItemGroup* self, QGraphicsItem* item) {
	return const_cast<const QGraphicsItemGroup*>(self)->isObscuredBy(item);
}

QPainterPath* QGraphicsItemGroup_OpaqueArea(QGraphicsItemGroup* self) {
	QPainterPath ret = const_cast<const QGraphicsItemGroup*>(self)->opaqueArea();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

int QGraphicsItemGroup_Type(QGraphicsItemGroup* self) {
	return const_cast<const QGraphicsItemGroup*>(self)->type();
}

void QGraphicsItemGroup_Paint3(QGraphicsItemGroup* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

void QGraphicsItemGroup_Delete(QGraphicsItemGroup* self) {
	delete self;
}

