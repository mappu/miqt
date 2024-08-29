#define WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State
#include <QAccessibleInterface>
#include <QAccessibleWidget>
#include <QColor>
#include <QList>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <QWindow>
#include "qaccessiblewidget.h"

#include "gen_qaccessiblewidget.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QAccessibleWidget* QAccessibleWidget_new(QWidget* o) {
	return new QAccessibleWidget(o);
}

QAccessibleWidget* QAccessibleWidget_new2(QWidget* o, uintptr_t r) {
	return new QAccessibleWidget(o, static_cast<QAccessible::Role>(r));
}

QAccessibleWidget* QAccessibleWidget_new3(QWidget* o, uintptr_t r, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	return new QAccessibleWidget(o, static_cast<QAccessible::Role>(r), name_QString);
}

bool QAccessibleWidget_IsValid(QAccessibleWidget* self) {
	return const_cast<const QAccessibleWidget*>(self)->isValid();
}

QWindow* QAccessibleWidget_Window(QAccessibleWidget* self) {
	return const_cast<const QAccessibleWidget*>(self)->window();
}

int QAccessibleWidget_ChildCount(QAccessibleWidget* self) {
	return const_cast<const QAccessibleWidget*>(self)->childCount();
}

int QAccessibleWidget_IndexOfChild(QAccessibleWidget* self, QAccessibleInterface* child) {
	return const_cast<const QAccessibleWidget*>(self)->indexOfChild(child);
}

QAccessibleInterface* QAccessibleWidget_FocusChild(QAccessibleWidget* self) {
	return const_cast<const QAccessibleWidget*>(self)->focusChild();
}

QRect* QAccessibleWidget_Rect(QAccessibleWidget* self) {
	QRect ret = const_cast<const QAccessibleWidget*>(self)->rect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QAccessibleInterface* QAccessibleWidget_Parent(QAccessibleWidget* self) {
	return const_cast<const QAccessibleWidget*>(self)->parent();
}

QAccessibleInterface* QAccessibleWidget_Child(QAccessibleWidget* self, int index) {
	return const_cast<const QAccessibleWidget*>(self)->child(static_cast<int>(index));
}

void QAccessibleWidget_Text(QAccessibleWidget* self, uintptr_t t, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QAccessibleWidget*>(self)->text(static_cast<QAccessible::Text>(t));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QAccessibleWidget_Role(QAccessibleWidget* self) {
	QAccessible::Role ret = const_cast<const QAccessibleWidget*>(self)->role();
	return static_cast<uintptr_t>(ret);
}

QAccessible__State* QAccessibleWidget_State(QAccessibleWidget* self) {
	QAccessible::State ret = const_cast<const QAccessibleWidget*>(self)->state();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QAccessible::State*>(new QAccessible::State(ret));
}

QColor* QAccessibleWidget_ForegroundColor(QAccessibleWidget* self) {
	QColor ret = const_cast<const QAccessibleWidget*>(self)->foregroundColor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QAccessibleWidget_BackgroundColor(QAccessibleWidget* self) {
	QColor ret = const_cast<const QAccessibleWidget*>(self)->backgroundColor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QAccessibleWidget_ActionNames(QAccessibleWidget* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QAccessibleWidget*>(self)->actionNames();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QAccessibleWidget_DoAction(QAccessibleWidget* self, const char* actionName, size_t actionName_Strlen) {
	QString actionName_QString = QString::fromUtf8(actionName, actionName_Strlen);
	self->doAction(actionName_QString);
}

void QAccessibleWidget_KeyBindingsForAction(QAccessibleWidget* self, const char* actionName, size_t actionName_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QString actionName_QString = QString::fromUtf8(actionName, actionName_Strlen);
	QStringList ret = const_cast<const QAccessibleWidget*>(self)->keyBindingsForAction(actionName_QString);
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

