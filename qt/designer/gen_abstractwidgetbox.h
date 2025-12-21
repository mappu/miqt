#pragma once
#ifndef MIQT_QT_DESIGNER_GEN_ABSTRACTWIDGETBOX_H
#define MIQT_QT_DESIGNER_GEN_ABSTRACTWIDGETBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDesignerDnDItemInterface;
class QDesignerWidgetBoxInterface;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QDesignerWidgetBoxInterface__Category)
typedef QDesignerWidgetBoxInterface::Category QDesignerWidgetBoxInterface__Category;
#else
class QDesignerWidgetBoxInterface__Category;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QDesignerWidgetBoxInterface__Widget)
typedef QDesignerWidgetBoxInterface::Widget QDesignerWidgetBoxInterface__Widget;
#else
class QDesignerWidgetBoxInterface__Widget;
#endif
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QMetaMethod;
class QMetaObject;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPoint;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDesignerDnDItemInterface QDesignerDnDItemInterface;
typedef struct QDesignerWidgetBoxInterface QDesignerWidgetBoxInterface;
typedef struct QDesignerWidgetBoxInterface__Category QDesignerWidgetBoxInterface__Category;
typedef struct QDesignerWidgetBoxInterface__Widget QDesignerWidgetBoxInterface__Widget;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QDesignerWidgetBoxInterface* QDesignerWidgetBoxInterface_new(QWidget* parent);
QDesignerWidgetBoxInterface* QDesignerWidgetBoxInterface_new2();
QDesignerWidgetBoxInterface* QDesignerWidgetBoxInterface_new3(QWidget* parent, int flags);
void QDesignerWidgetBoxInterface_virtbase(QDesignerWidgetBoxInterface* src, QWidget** outptr_QWidget);
QMetaObject* QDesignerWidgetBoxInterface_metaObject(const QDesignerWidgetBoxInterface* self);
void* QDesignerWidgetBoxInterface_metacast(QDesignerWidgetBoxInterface* self, const char* param1);
struct miqt_string QDesignerWidgetBoxInterface_tr(const char* s);
struct miqt_string QDesignerWidgetBoxInterface_trUtf8(const char* s);
int QDesignerWidgetBoxInterface_categoryCount(const QDesignerWidgetBoxInterface* self);
QDesignerWidgetBoxInterface__Category* QDesignerWidgetBoxInterface_category(const QDesignerWidgetBoxInterface* self, int cat_idx);
void QDesignerWidgetBoxInterface_addCategory(QDesignerWidgetBoxInterface* self, QDesignerWidgetBoxInterface__Category* cat);
void QDesignerWidgetBoxInterface_removeCategory(QDesignerWidgetBoxInterface* self, int cat_idx);
int QDesignerWidgetBoxInterface_widgetCount(const QDesignerWidgetBoxInterface* self, int cat_idx);
QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface_widget(const QDesignerWidgetBoxInterface* self, int cat_idx, int wgt_idx);
void QDesignerWidgetBoxInterface_addWidget(QDesignerWidgetBoxInterface* self, int cat_idx, QDesignerWidgetBoxInterface__Widget* wgt);
void QDesignerWidgetBoxInterface_removeWidget(QDesignerWidgetBoxInterface* self, int cat_idx, int wgt_idx);
int QDesignerWidgetBoxInterface_findOrInsertCategory(QDesignerWidgetBoxInterface* self, struct miqt_string categoryName);
void QDesignerWidgetBoxInterface_dropWidgets(QDesignerWidgetBoxInterface* self, struct miqt_array /* of QDesignerDnDItemInterface* */  item_list, QPoint* global_mouse_pos);
void QDesignerWidgetBoxInterface_setFileName(QDesignerWidgetBoxInterface* self, struct miqt_string file_name);
struct miqt_string QDesignerWidgetBoxInterface_fileName(const QDesignerWidgetBoxInterface* self);
bool QDesignerWidgetBoxInterface_load(QDesignerWidgetBoxInterface* self);
bool QDesignerWidgetBoxInterface_save(QDesignerWidgetBoxInterface* self);
struct miqt_string QDesignerWidgetBoxInterface_tr2(const char* s, const char* c);
struct miqt_string QDesignerWidgetBoxInterface_tr3(const char* s, const char* c, int n);
struct miqt_string QDesignerWidgetBoxInterface_trUtf82(const char* s, const char* c);
struct miqt_string QDesignerWidgetBoxInterface_trUtf83(const char* s, const char* c, int n);

bool QDesignerWidgetBoxInterface_override_virtual_categoryCount(void* self, intptr_t slot);
int QDesignerWidgetBoxInterface_virtualbase_categoryCount(const void* self);
bool QDesignerWidgetBoxInterface_override_virtual_category(void* self, intptr_t slot);
QDesignerWidgetBoxInterface__Category* QDesignerWidgetBoxInterface_virtualbase_category(const void* self, int cat_idx);
bool QDesignerWidgetBoxInterface_override_virtual_addCategory(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_addCategory(void* self, QDesignerWidgetBoxInterface__Category* cat);
bool QDesignerWidgetBoxInterface_override_virtual_removeCategory(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_removeCategory(void* self, int cat_idx);
bool QDesignerWidgetBoxInterface_override_virtual_widgetCount(void* self, intptr_t slot);
int QDesignerWidgetBoxInterface_virtualbase_widgetCount(const void* self, int cat_idx);
bool QDesignerWidgetBoxInterface_override_virtual_widget(void* self, intptr_t slot);
QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface_virtualbase_widget(const void* self, int cat_idx, int wgt_idx);
bool QDesignerWidgetBoxInterface_override_virtual_addWidget(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_addWidget(void* self, int cat_idx, QDesignerWidgetBoxInterface__Widget* wgt);
bool QDesignerWidgetBoxInterface_override_virtual_removeWidget(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_removeWidget(void* self, int cat_idx, int wgt_idx);
bool QDesignerWidgetBoxInterface_override_virtual_dropWidgets(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_dropWidgets(void* self, struct miqt_array /* of QDesignerDnDItemInterface* */  item_list, QPoint* global_mouse_pos);
bool QDesignerWidgetBoxInterface_override_virtual_setFileName(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_setFileName(void* self, struct miqt_string file_name);
bool QDesignerWidgetBoxInterface_override_virtual_fileName(void* self, intptr_t slot);
struct miqt_string QDesignerWidgetBoxInterface_virtualbase_fileName(const void* self);
bool QDesignerWidgetBoxInterface_override_virtual_load(void* self, intptr_t slot);
bool QDesignerWidgetBoxInterface_virtualbase_load(void* self);
bool QDesignerWidgetBoxInterface_override_virtual_save(void* self, intptr_t slot);
bool QDesignerWidgetBoxInterface_virtualbase_save(void* self);
bool QDesignerWidgetBoxInterface_override_virtual_devType(void* self, intptr_t slot);
int QDesignerWidgetBoxInterface_virtualbase_devType(const void* self);
bool QDesignerWidgetBoxInterface_override_virtual_setVisible(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_setVisible(void* self, bool visible);
bool QDesignerWidgetBoxInterface_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QDesignerWidgetBoxInterface_virtualbase_sizeHint(const void* self);
bool QDesignerWidgetBoxInterface_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QDesignerWidgetBoxInterface_virtualbase_minimumSizeHint(const void* self);
bool QDesignerWidgetBoxInterface_override_virtual_heightForWidth(void* self, intptr_t slot);
int QDesignerWidgetBoxInterface_virtualbase_heightForWidth(const void* self, int param1);
bool QDesignerWidgetBoxInterface_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QDesignerWidgetBoxInterface_virtualbase_hasHeightForWidth(const void* self);
bool QDesignerWidgetBoxInterface_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QDesignerWidgetBoxInterface_virtualbase_paintEngine(const void* self);
bool QDesignerWidgetBoxInterface_override_virtual_event(void* self, intptr_t slot);
bool QDesignerWidgetBoxInterface_virtualbase_event(void* self, QEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_wheelEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_focusInEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_enterEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_enterEvent(void* self, QEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_leaveEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_leaveEvent(void* self, QEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_paintEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_moveEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_resizeEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_closeEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_tabletEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_actionEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_dropEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_showEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_showEvent(void* self, QShowEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_hideEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QDesignerWidgetBoxInterface_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QDesignerWidgetBoxInterface_override_virtual_changeEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_changeEvent(void* self, QEvent* param1);
bool QDesignerWidgetBoxInterface_override_virtual_metric(void* self, intptr_t slot);
int QDesignerWidgetBoxInterface_virtualbase_metric(const void* self, int param1);
bool QDesignerWidgetBoxInterface_override_virtual_initPainter(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_initPainter(const void* self, QPainter* painter);
bool QDesignerWidgetBoxInterface_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QDesignerWidgetBoxInterface_virtualbase_redirected(const void* self, QPoint* offset);
bool QDesignerWidgetBoxInterface_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QDesignerWidgetBoxInterface_virtualbase_sharedPainter(const void* self);
bool QDesignerWidgetBoxInterface_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QDesignerWidgetBoxInterface_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QDesignerWidgetBoxInterface_virtualbase_inputMethodQuery(const void* self, int param1);
bool QDesignerWidgetBoxInterface_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QDesignerWidgetBoxInterface_virtualbase_focusNextPrevChild(void* self, bool next);
bool QDesignerWidgetBoxInterface_override_virtual_eventFilter(void* self, intptr_t slot);
bool QDesignerWidgetBoxInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_timerEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_childEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_childEvent(void* self, QChildEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_customEvent(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_customEvent(void* self, QEvent* event);
bool QDesignerWidgetBoxInterface_override_virtual_connectNotify(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QDesignerWidgetBoxInterface_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QDesignerWidgetBoxInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QDesignerWidgetBoxInterface_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QDesignerWidgetBoxInterface_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QDesignerWidgetBoxInterface_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QDesignerWidgetBoxInterface_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QDesignerWidgetBoxInterface_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QDesignerWidgetBoxInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QDesignerWidgetBoxInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QDesignerWidgetBoxInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QDesignerWidgetBoxInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QDesignerWidgetBoxInterface_delete(QDesignerWidgetBoxInterface* self);

QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Widget_new();
QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Widget_new2(QDesignerWidgetBoxInterface__Widget* w);
QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Widget_new3(struct miqt_string aname);
QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Widget_new4(struct miqt_string aname, struct miqt_string xml);
QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Widget_new5(struct miqt_string aname, struct miqt_string xml, struct miqt_string icon_name);
QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Widget_new6(struct miqt_string aname, struct miqt_string xml, struct miqt_string icon_name, int atype);
void QDesignerWidgetBoxInterface__Widget_operatorAssign(QDesignerWidgetBoxInterface__Widget* self, QDesignerWidgetBoxInterface__Widget* w);
struct miqt_string QDesignerWidgetBoxInterface__Widget_name(const QDesignerWidgetBoxInterface__Widget* self);
void QDesignerWidgetBoxInterface__Widget_setName(QDesignerWidgetBoxInterface__Widget* self, struct miqt_string aname);
struct miqt_string QDesignerWidgetBoxInterface__Widget_domXml(const QDesignerWidgetBoxInterface__Widget* self);
void QDesignerWidgetBoxInterface__Widget_setDomXml(QDesignerWidgetBoxInterface__Widget* self, struct miqt_string xml);
struct miqt_string QDesignerWidgetBoxInterface__Widget_iconName(const QDesignerWidgetBoxInterface__Widget* self);
void QDesignerWidgetBoxInterface__Widget_setIconName(QDesignerWidgetBoxInterface__Widget* self, struct miqt_string icon_name);
int QDesignerWidgetBoxInterface__Widget_type(const QDesignerWidgetBoxInterface__Widget* self);
void QDesignerWidgetBoxInterface__Widget_setType(QDesignerWidgetBoxInterface__Widget* self, int atype);
bool QDesignerWidgetBoxInterface__Widget_isNull(const QDesignerWidgetBoxInterface__Widget* self);

void QDesignerWidgetBoxInterface__Widget_delete(QDesignerWidgetBoxInterface__Widget* self);

QDesignerWidgetBoxInterface__Category* QDesignerWidgetBoxInterface__Category_new();
QDesignerWidgetBoxInterface__Category* QDesignerWidgetBoxInterface__Category_new2(QDesignerWidgetBoxInterface__Category* param1);
QDesignerWidgetBoxInterface__Category* QDesignerWidgetBoxInterface__Category_new3(struct miqt_string aname);
QDesignerWidgetBoxInterface__Category* QDesignerWidgetBoxInterface__Category_new4(struct miqt_string aname, int atype);
struct miqt_string QDesignerWidgetBoxInterface__Category_name(const QDesignerWidgetBoxInterface__Category* self);
void QDesignerWidgetBoxInterface__Category_setName(QDesignerWidgetBoxInterface__Category* self, struct miqt_string aname);
int QDesignerWidgetBoxInterface__Category_widgetCount(const QDesignerWidgetBoxInterface__Category* self);
QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Category_widget(const QDesignerWidgetBoxInterface__Category* self, int idx);
void QDesignerWidgetBoxInterface__Category_removeWidget(QDesignerWidgetBoxInterface__Category* self, int idx);
void QDesignerWidgetBoxInterface__Category_addWidget(QDesignerWidgetBoxInterface__Category* self, QDesignerWidgetBoxInterface__Widget* awidget);
int QDesignerWidgetBoxInterface__Category_type(const QDesignerWidgetBoxInterface__Category* self);
void QDesignerWidgetBoxInterface__Category_setType(QDesignerWidgetBoxInterface__Category* self, int atype);
bool QDesignerWidgetBoxInterface__Category_isNull(const QDesignerWidgetBoxInterface__Category* self);
void QDesignerWidgetBoxInterface__Category_operatorAssign(QDesignerWidgetBoxInterface__Category* self, QDesignerWidgetBoxInterface__Category* param1);

void QDesignerWidgetBoxInterface__Category_delete(QDesignerWidgetBoxInterface__Category* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
