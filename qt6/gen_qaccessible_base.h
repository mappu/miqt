#pragma once
#ifndef MIQT_QT6_GEN_QACCESSIBLE_BASE_H
#define MIQT_QT6_GEN_QACCESSIBLE_BASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAccessible;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__ActivationObserver)
typedef QAccessible::ActivationObserver QAccessible__ActivationObserver;
#else
class QAccessible__ActivationObserver;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State)
typedef QAccessible::State QAccessible__State;
#else
class QAccessible__State;
#endif
class QAccessibleEvent;
class QAccessibleInterface;
class QObject;
class QTextCursor;
#else
typedef struct QAccessible QAccessible;
typedef struct QAccessible__ActivationObserver QAccessible__ActivationObserver;
typedef struct QAccessible__State QAccessible__State;
typedef struct QAccessibleEvent QAccessibleEvent;
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QObject QObject;
typedef struct QTextCursor QTextCursor;
#endif

void QAccessible_installActivationObserver(QAccessible__ActivationObserver* param1);
void QAccessible_removeActivationObserver(QAccessible__ActivationObserver* param1);
QAccessibleInterface* QAccessible_queryAccessibleInterface(QObject* param1);
unsigned int QAccessible_uniqueId(QAccessibleInterface* iface);
QAccessibleInterface* QAccessible_accessibleInterface(unsigned int uniqueId);
unsigned int QAccessible_registerAccessibleInterface(QAccessibleInterface* iface);
void QAccessible_deleteAccessibleInterface(unsigned int uniqueId);
void QAccessible_updateAccessibility(QAccessibleEvent* event);
bool QAccessible_isActive();
void QAccessible_setActive(bool active);
void QAccessible_setRootObject(QObject* object);
void QAccessible_cleanup();
struct miqt_map /* tuple of int and int */  QAccessible_qAccessibleTextBoundaryHelper(QTextCursor* cursor, int boundaryType);

void QAccessible_delete(QAccessible* self);

QAccessible__State* QAccessible__State_new();
unsigned long long QAccessible__State_disabled(const QAccessible__State* self);
void QAccessible__State_setDisabled(QAccessible__State* self, unsigned long long disabled);
unsigned long long QAccessible__State_selected(const QAccessible__State* self);
void QAccessible__State_setSelected(QAccessible__State* self, unsigned long long selected);
unsigned long long QAccessible__State_focusable(const QAccessible__State* self);
void QAccessible__State_setFocusable(QAccessible__State* self, unsigned long long focusable);
unsigned long long QAccessible__State_focused(const QAccessible__State* self);
void QAccessible__State_setFocused(QAccessible__State* self, unsigned long long focused);
unsigned long long QAccessible__State_pressed(const QAccessible__State* self);
void QAccessible__State_setPressed(QAccessible__State* self, unsigned long long pressed);
unsigned long long QAccessible__State_checkable(const QAccessible__State* self);
void QAccessible__State_setCheckable(QAccessible__State* self, unsigned long long checkable);
unsigned long long QAccessible__State_checked(const QAccessible__State* self);
void QAccessible__State_setChecked(QAccessible__State* self, unsigned long long checked);
unsigned long long QAccessible__State_checkStateMixed(const QAccessible__State* self);
void QAccessible__State_setCheckStateMixed(QAccessible__State* self, unsigned long long checkStateMixed);
unsigned long long QAccessible__State_readOnly(const QAccessible__State* self);
void QAccessible__State_setReadOnly(QAccessible__State* self, unsigned long long readOnly);
unsigned long long QAccessible__State_hotTracked(const QAccessible__State* self);
void QAccessible__State_setHotTracked(QAccessible__State* self, unsigned long long hotTracked);
unsigned long long QAccessible__State_defaultButton(const QAccessible__State* self);
void QAccessible__State_setDefaultButton(QAccessible__State* self, unsigned long long defaultButton);
unsigned long long QAccessible__State_expanded(const QAccessible__State* self);
void QAccessible__State_setExpanded(QAccessible__State* self, unsigned long long expanded);
unsigned long long QAccessible__State_collapsed(const QAccessible__State* self);
void QAccessible__State_setCollapsed(QAccessible__State* self, unsigned long long collapsed);
unsigned long long QAccessible__State_busy(const QAccessible__State* self);
void QAccessible__State_setBusy(QAccessible__State* self, unsigned long long busy);
unsigned long long QAccessible__State_expandable(const QAccessible__State* self);
void QAccessible__State_setExpandable(QAccessible__State* self, unsigned long long expandable);
unsigned long long QAccessible__State_marqueed(const QAccessible__State* self);
void QAccessible__State_setMarqueed(QAccessible__State* self, unsigned long long marqueed);
unsigned long long QAccessible__State_animated(const QAccessible__State* self);
void QAccessible__State_setAnimated(QAccessible__State* self, unsigned long long animated);
unsigned long long QAccessible__State_invisible(const QAccessible__State* self);
void QAccessible__State_setInvisible(QAccessible__State* self, unsigned long long invisible);
unsigned long long QAccessible__State_offscreen(const QAccessible__State* self);
void QAccessible__State_setOffscreen(QAccessible__State* self, unsigned long long offscreen);
unsigned long long QAccessible__State_sizeable(const QAccessible__State* self);
void QAccessible__State_setSizeable(QAccessible__State* self, unsigned long long sizeable);
unsigned long long QAccessible__State_movable(const QAccessible__State* self);
void QAccessible__State_setMovable(QAccessible__State* self, unsigned long long movable);
unsigned long long QAccessible__State_selfVoicing(const QAccessible__State* self);
void QAccessible__State_setSelfVoicing(QAccessible__State* self, unsigned long long selfVoicing);
unsigned long long QAccessible__State_selectable(const QAccessible__State* self);
void QAccessible__State_setSelectable(QAccessible__State* self, unsigned long long selectable);
unsigned long long QAccessible__State_linked(const QAccessible__State* self);
void QAccessible__State_setLinked(QAccessible__State* self, unsigned long long linked);
unsigned long long QAccessible__State_traversed(const QAccessible__State* self);
void QAccessible__State_setTraversed(QAccessible__State* self, unsigned long long traversed);
unsigned long long QAccessible__State_multiSelectable(const QAccessible__State* self);
void QAccessible__State_setMultiSelectable(QAccessible__State* self, unsigned long long multiSelectable);
unsigned long long QAccessible__State_extSelectable(const QAccessible__State* self);
void QAccessible__State_setExtSelectable(QAccessible__State* self, unsigned long long extSelectable);
unsigned long long QAccessible__State_passwordEdit(const QAccessible__State* self);
void QAccessible__State_setPasswordEdit(QAccessible__State* self, unsigned long long passwordEdit);
unsigned long long QAccessible__State_hasPopup(const QAccessible__State* self);
void QAccessible__State_setHasPopup(QAccessible__State* self, unsigned long long hasPopup);
unsigned long long QAccessible__State_modal(const QAccessible__State* self);
void QAccessible__State_setModal(QAccessible__State* self, unsigned long long modal);
unsigned long long QAccessible__State_active(const QAccessible__State* self);
void QAccessible__State_setActive(QAccessible__State* self, unsigned long long active);
unsigned long long QAccessible__State_invalid(const QAccessible__State* self);
void QAccessible__State_setInvalid(QAccessible__State* self, unsigned long long invalid);
unsigned long long QAccessible__State_editable(const QAccessible__State* self);
void QAccessible__State_setEditable(QAccessible__State* self, unsigned long long editable);
unsigned long long QAccessible__State_multiLine(const QAccessible__State* self);
void QAccessible__State_setMultiLine(QAccessible__State* self, unsigned long long multiLine);
unsigned long long QAccessible__State_selectableText(const QAccessible__State* self);
void QAccessible__State_setSelectableText(QAccessible__State* self, unsigned long long selectableText);
unsigned long long QAccessible__State_supportsAutoCompletion(const QAccessible__State* self);
void QAccessible__State_setSupportsAutoCompletion(QAccessible__State* self, unsigned long long supportsAutoCompletion);
unsigned long long QAccessible__State_searchEdit(const QAccessible__State* self);
void QAccessible__State_setSearchEdit(QAccessible__State* self, unsigned long long searchEdit);

void QAccessible__State_delete(QAccessible__State* self);

void QAccessible__ActivationObserver_accessibilityActiveChanged(QAccessible__ActivationObserver* self, bool active);
void QAccessible__ActivationObserver_operatorAssign(QAccessible__ActivationObserver* self, QAccessible__ActivationObserver* param1);

void QAccessible__ActivationObserver_delete(QAccessible__ActivationObserver* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
