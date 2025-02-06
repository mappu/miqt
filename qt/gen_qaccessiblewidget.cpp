#define WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State
#include <QAccessibleActionInterface>
#include <QAccessibleInterface>
#include <QAccessibleObject>
#include <QAccessibleWidget>
#include <QColor>
#include <QList>
#include <QObject>
#include <QPair>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <QWindow>
#include <qaccessiblewidget.h>
#include "gen_qaccessiblewidget.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QAccessibleWidget* QAccessibleWidget_new(QWidget* o) {
	return new QAccessibleWidget(o);
}

QAccessibleWidget* QAccessibleWidget_new2(QWidget* o, int r) {
	return new QAccessibleWidget(o, static_cast<QAccessible::Role>(r));
}

QAccessibleWidget* QAccessibleWidget_new3(QWidget* o, int r, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QAccessibleWidget(o, static_cast<QAccessible::Role>(r), name_QString);
}

void QAccessibleWidget_virtbase(QAccessibleWidget* src, QAccessibleObject** outptr_QAccessibleObject, QAccessibleActionInterface** outptr_QAccessibleActionInterface) {
	*outptr_QAccessibleObject = static_cast<QAccessibleObject*>(src);
	*outptr_QAccessibleActionInterface = static_cast<QAccessibleActionInterface*>(src);
}

bool QAccessibleWidget_isValid(const QAccessibleWidget* self) {
	return self->isValid();
}

QWindow* QAccessibleWidget_window(const QAccessibleWidget* self) {
	return self->window();
}

int QAccessibleWidget_childCount(const QAccessibleWidget* self) {
	return self->childCount();
}

int QAccessibleWidget_indexOfChild(const QAccessibleWidget* self, QAccessibleInterface* child) {
	return self->indexOfChild(child);
}

struct miqt_array /* of struct miqt_map  tuple of QAccessibleInterface* and int   */  QAccessibleWidget_relations(const QAccessibleWidget* self, int match) {
	QVector<QPair<QAccessibleInterface *, QAccessible::Relation>> _ret = self->relations(static_cast<QAccessible::Relation>(match));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_map /* tuple of QAccessibleInterface* and int */ * _arr = static_cast<struct miqt_map /* tuple of QAccessibleInterface* and int */ *>(malloc(sizeof(struct miqt_map /* tuple of QAccessibleInterface* and int */ ) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>> _vv_ret = _ret[i];
		// Convert QPair<> from C++ memory to manually-managed C memory
		QAccessibleInterface** _vv_first_arr = static_cast<QAccessibleInterface**>(malloc(sizeof(QAccessibleInterface*)));
		int* _vv_second_arr = static_cast<int*>(malloc(sizeof(int)));
		_vv_first_arr[0] = _vv_ret.first;
		QFlags<QAccessible::RelationFlag> _vv_second_ret = _vv_ret.second;
		_vv_second_arr[0] = static_cast<int>(_vv_second_ret);
		struct miqt_map _vv_out;
		_vv_out.len = 1;
		_vv_out.keys = static_cast<void*>(_vv_first_arr);
		_vv_out.values = static_cast<void*>(_vv_second_arr);
		_arr[i] = _vv_out;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QAccessibleInterface* QAccessibleWidget_focusChild(const QAccessibleWidget* self) {
	return self->focusChild();
}

QRect* QAccessibleWidget_rect(const QAccessibleWidget* self) {
	return new QRect(self->rect());
}

QAccessibleInterface* QAccessibleWidget_parent(const QAccessibleWidget* self) {
	return self->parent();
}

QAccessibleInterface* QAccessibleWidget_child(const QAccessibleWidget* self, int index) {
	return self->child(static_cast<int>(index));
}

struct miqt_string QAccessibleWidget_text(const QAccessibleWidget* self, int t) {
	QString _ret = self->text(static_cast<QAccessible::Text>(t));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAccessibleWidget_role(const QAccessibleWidget* self) {
	QAccessible::Role _ret = self->role();
	return static_cast<int>(_ret);
}

QAccessible__State* QAccessibleWidget_state(const QAccessibleWidget* self) {
	return new QAccessible::State(self->state());
}

QColor* QAccessibleWidget_foregroundColor(const QAccessibleWidget* self) {
	return new QColor(self->foregroundColor());
}

QColor* QAccessibleWidget_backgroundColor(const QAccessibleWidget* self) {
	return new QColor(self->backgroundColor());
}

void* QAccessibleWidget_interfaceCast(QAccessibleWidget* self, int t) {
	return self->interface_cast(static_cast<QAccessible::InterfaceType>(t));
}

struct miqt_array /* of struct miqt_string */  QAccessibleWidget_actionNames(const QAccessibleWidget* self) {
	QStringList _ret = self->actionNames();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QAccessibleWidget_doAction(QAccessibleWidget* self, struct miqt_string actionName) {
	QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
	self->doAction(actionName_QString);
}

struct miqt_array /* of struct miqt_string */  QAccessibleWidget_keyBindingsForAction(const QAccessibleWidget* self, struct miqt_string actionName) {
	QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
	QStringList _ret = self->keyBindingsForAction(actionName_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

