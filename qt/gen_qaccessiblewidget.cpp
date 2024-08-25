#include "gen_qaccessiblewidget.h"
#include "qaccessiblewidget.h"

#include <QAccessibleInterface>
#include <QAccessibleWidget>
#include <QColor>
#include <QList>
#include <QRect>
#include <QString>
#include <QWindow>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

bool QAccessibleWidget_IsValid(QAccessibleWidget* self) {
	return self->isValid();
}

QWindow* QAccessibleWidget_Window(QAccessibleWidget* self) {
	return self->window();
}

int QAccessibleWidget_ChildCount(QAccessibleWidget* self) {
	return self->childCount();
}

int QAccessibleWidget_IndexOfChild(QAccessibleWidget* self, QAccessibleInterface* child) {
	return self->indexOfChild(child);
}

QAccessibleInterface* QAccessibleWidget_FocusChild(QAccessibleWidget* self) {
	return self->focusChild();
}

QRect* QAccessibleWidget_Rect(QAccessibleWidget* self) {
	QRect ret = self->rect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QAccessibleInterface* QAccessibleWidget_Parent(QAccessibleWidget* self) {
	return self->parent();
}

QAccessibleInterface* QAccessibleWidget_Child(QAccessibleWidget* self, int index) {
	return self->child(static_cast<int>(index));
}

QColor* QAccessibleWidget_ForegroundColor(QAccessibleWidget* self) {
	QColor ret = self->foregroundColor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QAccessibleWidget_BackgroundColor(QAccessibleWidget* self) {
	QColor ret = self->backgroundColor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QAccessibleWidget_ActionNames(QAccessibleWidget* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->actionNames();
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
	QList<QString> ret = self->keyBindingsForAction(actionName_QString);
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

