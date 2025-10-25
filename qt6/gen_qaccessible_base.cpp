#include <QAccessible>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__ActivationObserver
#define WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State
#include <QAccessibleEvent>
#include <QAccessibleInterface>
#include <QObject>
#include <QPair>
#include <QTextCursor>
#include <qaccessible_base.h>
#include "gen_qaccessible_base.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QAccessible_installActivationObserver(QAccessible__ActivationObserver* param1) {
	QAccessible::installActivationObserver(param1);
}

void QAccessible_removeActivationObserver(QAccessible__ActivationObserver* param1) {
	QAccessible::removeActivationObserver(param1);
}

QAccessibleInterface* QAccessible_queryAccessibleInterface(QObject* param1) {
	return QAccessible::queryAccessibleInterface(param1);
}

unsigned int QAccessible_uniqueId(QAccessibleInterface* iface) {
	QAccessible::Id _ret = QAccessible::uniqueId(iface);
	return static_cast<unsigned int>(_ret);
}

QAccessibleInterface* QAccessible_accessibleInterface(unsigned int uniqueId) {
	return QAccessible::accessibleInterface(static_cast<QAccessible::Id>(uniqueId));
}

unsigned int QAccessible_registerAccessibleInterface(QAccessibleInterface* iface) {
	QAccessible::Id _ret = QAccessible::registerAccessibleInterface(iface);
	return static_cast<unsigned int>(_ret);
}

void QAccessible_deleteAccessibleInterface(unsigned int uniqueId) {
	QAccessible::deleteAccessibleInterface(static_cast<QAccessible::Id>(uniqueId));
}

void QAccessible_updateAccessibility(QAccessibleEvent* event) {
	QAccessible::updateAccessibility(event);
}

bool QAccessible_isActive() {
	return QAccessible::isActive();
}

void QAccessible_setActive(bool active) {
	QAccessible::setActive(active);
}

void QAccessible_setRootObject(QObject* object) {
	QAccessible::setRootObject(object);
}

void QAccessible_cleanup() {
	QAccessible::cleanup();
}

struct miqt_map /* tuple of int and int */  QAccessible_qAccessibleTextBoundaryHelper(QTextCursor* cursor, int boundaryType) {
	QPair<int, int> _ret = QAccessible::qAccessibleTextBoundaryHelper(*cursor, static_cast<QAccessible::TextBoundaryType>(boundaryType));
	// Convert QPair<> from C++ memory to manually-managed C memory
	int* _first_arr = static_cast<int*>(malloc(sizeof(int)));
	int* _second_arr = static_cast<int*>(malloc(sizeof(int)));
	_first_arr[0] = _ret.first;
	_second_arr[0] = _ret.second;
	struct miqt_map _out;
	_out.len = 1;
	_out.keys = static_cast<void*>(_first_arr);
	_out.values = static_cast<void*>(_second_arr);
	return _out;
}

void QAccessible_delete(QAccessible* self) {
	delete self;
}

QAccessible__State* QAccessible__State_new() {
	return new (std::nothrow) QAccessible::State();
}

unsigned long long QAccessible__State_disabled(const QAccessible__State* self) {
	quint64 disabled_ret = self->disabled;
	return static_cast<unsigned long long>(disabled_ret);
}

void QAccessible__State_setDisabled(QAccessible__State* self, unsigned long long disabled) {
	self->disabled = static_cast<quint64>(disabled);
}

unsigned long long QAccessible__State_selected(const QAccessible__State* self) {
	quint64 selected_ret = self->selected;
	return static_cast<unsigned long long>(selected_ret);
}

void QAccessible__State_setSelected(QAccessible__State* self, unsigned long long selected) {
	self->selected = static_cast<quint64>(selected);
}

unsigned long long QAccessible__State_focusable(const QAccessible__State* self) {
	quint64 focusable_ret = self->focusable;
	return static_cast<unsigned long long>(focusable_ret);
}

void QAccessible__State_setFocusable(QAccessible__State* self, unsigned long long focusable) {
	self->focusable = static_cast<quint64>(focusable);
}

unsigned long long QAccessible__State_focused(const QAccessible__State* self) {
	quint64 focused_ret = self->focused;
	return static_cast<unsigned long long>(focused_ret);
}

void QAccessible__State_setFocused(QAccessible__State* self, unsigned long long focused) {
	self->focused = static_cast<quint64>(focused);
}

unsigned long long QAccessible__State_pressed(const QAccessible__State* self) {
	quint64 pressed_ret = self->pressed;
	return static_cast<unsigned long long>(pressed_ret);
}

void QAccessible__State_setPressed(QAccessible__State* self, unsigned long long pressed) {
	self->pressed = static_cast<quint64>(pressed);
}

unsigned long long QAccessible__State_checkable(const QAccessible__State* self) {
	quint64 checkable_ret = self->checkable;
	return static_cast<unsigned long long>(checkable_ret);
}

void QAccessible__State_setCheckable(QAccessible__State* self, unsigned long long checkable) {
	self->checkable = static_cast<quint64>(checkable);
}

unsigned long long QAccessible__State_checked(const QAccessible__State* self) {
	quint64 checked_ret = self->checked;
	return static_cast<unsigned long long>(checked_ret);
}

void QAccessible__State_setChecked(QAccessible__State* self, unsigned long long checked) {
	self->checked = static_cast<quint64>(checked);
}

unsigned long long QAccessible__State_checkStateMixed(const QAccessible__State* self) {
	quint64 checkStateMixed_ret = self->checkStateMixed;
	return static_cast<unsigned long long>(checkStateMixed_ret);
}

void QAccessible__State_setCheckStateMixed(QAccessible__State* self, unsigned long long checkStateMixed) {
	self->checkStateMixed = static_cast<quint64>(checkStateMixed);
}

unsigned long long QAccessible__State_readOnly(const QAccessible__State* self) {
	quint64 readOnly_ret = self->readOnly;
	return static_cast<unsigned long long>(readOnly_ret);
}

void QAccessible__State_setReadOnly(QAccessible__State* self, unsigned long long readOnly) {
	self->readOnly = static_cast<quint64>(readOnly);
}

unsigned long long QAccessible__State_hotTracked(const QAccessible__State* self) {
	quint64 hotTracked_ret = self->hotTracked;
	return static_cast<unsigned long long>(hotTracked_ret);
}

void QAccessible__State_setHotTracked(QAccessible__State* self, unsigned long long hotTracked) {
	self->hotTracked = static_cast<quint64>(hotTracked);
}

unsigned long long QAccessible__State_defaultButton(const QAccessible__State* self) {
	quint64 defaultButton_ret = self->defaultButton;
	return static_cast<unsigned long long>(defaultButton_ret);
}

void QAccessible__State_setDefaultButton(QAccessible__State* self, unsigned long long defaultButton) {
	self->defaultButton = static_cast<quint64>(defaultButton);
}

unsigned long long QAccessible__State_expanded(const QAccessible__State* self) {
	quint64 expanded_ret = self->expanded;
	return static_cast<unsigned long long>(expanded_ret);
}

void QAccessible__State_setExpanded(QAccessible__State* self, unsigned long long expanded) {
	self->expanded = static_cast<quint64>(expanded);
}

unsigned long long QAccessible__State_collapsed(const QAccessible__State* self) {
	quint64 collapsed_ret = self->collapsed;
	return static_cast<unsigned long long>(collapsed_ret);
}

void QAccessible__State_setCollapsed(QAccessible__State* self, unsigned long long collapsed) {
	self->collapsed = static_cast<quint64>(collapsed);
}

unsigned long long QAccessible__State_busy(const QAccessible__State* self) {
	quint64 busy_ret = self->busy;
	return static_cast<unsigned long long>(busy_ret);
}

void QAccessible__State_setBusy(QAccessible__State* self, unsigned long long busy) {
	self->busy = static_cast<quint64>(busy);
}

unsigned long long QAccessible__State_expandable(const QAccessible__State* self) {
	quint64 expandable_ret = self->expandable;
	return static_cast<unsigned long long>(expandable_ret);
}

void QAccessible__State_setExpandable(QAccessible__State* self, unsigned long long expandable) {
	self->expandable = static_cast<quint64>(expandable);
}

unsigned long long QAccessible__State_marqueed(const QAccessible__State* self) {
	quint64 marqueed_ret = self->marqueed;
	return static_cast<unsigned long long>(marqueed_ret);
}

void QAccessible__State_setMarqueed(QAccessible__State* self, unsigned long long marqueed) {
	self->marqueed = static_cast<quint64>(marqueed);
}

unsigned long long QAccessible__State_animated(const QAccessible__State* self) {
	quint64 animated_ret = self->animated;
	return static_cast<unsigned long long>(animated_ret);
}

void QAccessible__State_setAnimated(QAccessible__State* self, unsigned long long animated) {
	self->animated = static_cast<quint64>(animated);
}

unsigned long long QAccessible__State_invisible(const QAccessible__State* self) {
	quint64 invisible_ret = self->invisible;
	return static_cast<unsigned long long>(invisible_ret);
}

void QAccessible__State_setInvisible(QAccessible__State* self, unsigned long long invisible) {
	self->invisible = static_cast<quint64>(invisible);
}

unsigned long long QAccessible__State_offscreen(const QAccessible__State* self) {
	quint64 offscreen_ret = self->offscreen;
	return static_cast<unsigned long long>(offscreen_ret);
}

void QAccessible__State_setOffscreen(QAccessible__State* self, unsigned long long offscreen) {
	self->offscreen = static_cast<quint64>(offscreen);
}

unsigned long long QAccessible__State_sizeable(const QAccessible__State* self) {
	quint64 sizeable_ret = self->sizeable;
	return static_cast<unsigned long long>(sizeable_ret);
}

void QAccessible__State_setSizeable(QAccessible__State* self, unsigned long long sizeable) {
	self->sizeable = static_cast<quint64>(sizeable);
}

unsigned long long QAccessible__State_movable(const QAccessible__State* self) {
	quint64 movable_ret = self->movable;
	return static_cast<unsigned long long>(movable_ret);
}

void QAccessible__State_setMovable(QAccessible__State* self, unsigned long long movable) {
	self->movable = static_cast<quint64>(movable);
}

unsigned long long QAccessible__State_selfVoicing(const QAccessible__State* self) {
	quint64 selfVoicing_ret = self->selfVoicing;
	return static_cast<unsigned long long>(selfVoicing_ret);
}

void QAccessible__State_setSelfVoicing(QAccessible__State* self, unsigned long long selfVoicing) {
	self->selfVoicing = static_cast<quint64>(selfVoicing);
}

unsigned long long QAccessible__State_selectable(const QAccessible__State* self) {
	quint64 selectable_ret = self->selectable;
	return static_cast<unsigned long long>(selectable_ret);
}

void QAccessible__State_setSelectable(QAccessible__State* self, unsigned long long selectable) {
	self->selectable = static_cast<quint64>(selectable);
}

unsigned long long QAccessible__State_linked(const QAccessible__State* self) {
	quint64 linked_ret = self->linked;
	return static_cast<unsigned long long>(linked_ret);
}

void QAccessible__State_setLinked(QAccessible__State* self, unsigned long long linked) {
	self->linked = static_cast<quint64>(linked);
}

unsigned long long QAccessible__State_traversed(const QAccessible__State* self) {
	quint64 traversed_ret = self->traversed;
	return static_cast<unsigned long long>(traversed_ret);
}

void QAccessible__State_setTraversed(QAccessible__State* self, unsigned long long traversed) {
	self->traversed = static_cast<quint64>(traversed);
}

unsigned long long QAccessible__State_multiSelectable(const QAccessible__State* self) {
	quint64 multiSelectable_ret = self->multiSelectable;
	return static_cast<unsigned long long>(multiSelectable_ret);
}

void QAccessible__State_setMultiSelectable(QAccessible__State* self, unsigned long long multiSelectable) {
	self->multiSelectable = static_cast<quint64>(multiSelectable);
}

unsigned long long QAccessible__State_extSelectable(const QAccessible__State* self) {
	quint64 extSelectable_ret = self->extSelectable;
	return static_cast<unsigned long long>(extSelectable_ret);
}

void QAccessible__State_setExtSelectable(QAccessible__State* self, unsigned long long extSelectable) {
	self->extSelectable = static_cast<quint64>(extSelectable);
}

unsigned long long QAccessible__State_passwordEdit(const QAccessible__State* self) {
	quint64 passwordEdit_ret = self->passwordEdit;
	return static_cast<unsigned long long>(passwordEdit_ret);
}

void QAccessible__State_setPasswordEdit(QAccessible__State* self, unsigned long long passwordEdit) {
	self->passwordEdit = static_cast<quint64>(passwordEdit);
}

unsigned long long QAccessible__State_hasPopup(const QAccessible__State* self) {
	quint64 hasPopup_ret = self->hasPopup;
	return static_cast<unsigned long long>(hasPopup_ret);
}

void QAccessible__State_setHasPopup(QAccessible__State* self, unsigned long long hasPopup) {
	self->hasPopup = static_cast<quint64>(hasPopup);
}

unsigned long long QAccessible__State_modal(const QAccessible__State* self) {
	quint64 modal_ret = self->modal;
	return static_cast<unsigned long long>(modal_ret);
}

void QAccessible__State_setModal(QAccessible__State* self, unsigned long long modal) {
	self->modal = static_cast<quint64>(modal);
}

unsigned long long QAccessible__State_active(const QAccessible__State* self) {
	quint64 active_ret = self->active;
	return static_cast<unsigned long long>(active_ret);
}

void QAccessible__State_setActive(QAccessible__State* self, unsigned long long active) {
	self->active = static_cast<quint64>(active);
}

unsigned long long QAccessible__State_invalid(const QAccessible__State* self) {
	quint64 invalid_ret = self->invalid;
	return static_cast<unsigned long long>(invalid_ret);
}

void QAccessible__State_setInvalid(QAccessible__State* self, unsigned long long invalid) {
	self->invalid = static_cast<quint64>(invalid);
}

unsigned long long QAccessible__State_editable(const QAccessible__State* self) {
	quint64 editable_ret = self->editable;
	return static_cast<unsigned long long>(editable_ret);
}

void QAccessible__State_setEditable(QAccessible__State* self, unsigned long long editable) {
	self->editable = static_cast<quint64>(editable);
}

unsigned long long QAccessible__State_multiLine(const QAccessible__State* self) {
	quint64 multiLine_ret = self->multiLine;
	return static_cast<unsigned long long>(multiLine_ret);
}

void QAccessible__State_setMultiLine(QAccessible__State* self, unsigned long long multiLine) {
	self->multiLine = static_cast<quint64>(multiLine);
}

unsigned long long QAccessible__State_selectableText(const QAccessible__State* self) {
	quint64 selectableText_ret = self->selectableText;
	return static_cast<unsigned long long>(selectableText_ret);
}

void QAccessible__State_setSelectableText(QAccessible__State* self, unsigned long long selectableText) {
	self->selectableText = static_cast<quint64>(selectableText);
}

unsigned long long QAccessible__State_supportsAutoCompletion(const QAccessible__State* self) {
	quint64 supportsAutoCompletion_ret = self->supportsAutoCompletion;
	return static_cast<unsigned long long>(supportsAutoCompletion_ret);
}

void QAccessible__State_setSupportsAutoCompletion(QAccessible__State* self, unsigned long long supportsAutoCompletion) {
	self->supportsAutoCompletion = static_cast<quint64>(supportsAutoCompletion);
}

unsigned long long QAccessible__State_searchEdit(const QAccessible__State* self) {
	quint64 searchEdit_ret = self->searchEdit;
	return static_cast<unsigned long long>(searchEdit_ret);
}

void QAccessible__State_setSearchEdit(QAccessible__State* self, unsigned long long searchEdit) {
	self->searchEdit = static_cast<quint64>(searchEdit);
}

void QAccessible__State_delete(QAccessible__State* self) {
	delete self;
}

void QAccessible__ActivationObserver_accessibilityActiveChanged(QAccessible__ActivationObserver* self, bool active) {
	self->accessibilityActiveChanged(active);
}

void QAccessible__ActivationObserver_operatorAssign(QAccessible__ActivationObserver* self, QAccessible__ActivationObserver* param1) {
	self->operator=(*param1);
}

void QAccessible__ActivationObserver_delete(QAccessible__ActivationObserver* self) {
	delete self;
}

