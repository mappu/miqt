#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QEvent>
#include <QFontMetrics>
#include <QHelpEvent>
#include <QList>
#include <QMetaObject>
#include <QModelIndex>
#include <QPainter>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionViewItem>
#include <QWidget>
#include "qabstractitemdelegate.h"

#include "gen_qabstractitemdelegate.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QAbstractItemDelegate_MetaObject(QAbstractItemDelegate* self) {
	return (QMetaObject*) const_cast<const QAbstractItemDelegate*>(self)->metaObject();
}

void QAbstractItemDelegate_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemDelegate::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemDelegate_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemDelegate::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemDelegate_Paint(QAbstractItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
	const_cast<const QAbstractItemDelegate*>(self)->paint(painter, *option, *index);
}

QSize* QAbstractItemDelegate_SizeHint(QAbstractItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index) {
	QSize ret = const_cast<const QAbstractItemDelegate*>(self)->sizeHint(*option, *index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QWidget* QAbstractItemDelegate_CreateEditor(QAbstractItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
	return const_cast<const QAbstractItemDelegate*>(self)->createEditor(parent, *option, *index);
}

void QAbstractItemDelegate_DestroyEditor(QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index) {
	const_cast<const QAbstractItemDelegate*>(self)->destroyEditor(editor, *index);
}

void QAbstractItemDelegate_SetEditorData(QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index) {
	const_cast<const QAbstractItemDelegate*>(self)->setEditorData(editor, *index);
}

void QAbstractItemDelegate_SetModelData(QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
	const_cast<const QAbstractItemDelegate*>(self)->setModelData(editor, model, *index);
}

void QAbstractItemDelegate_UpdateEditorGeometry(QAbstractItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
	const_cast<const QAbstractItemDelegate*>(self)->updateEditorGeometry(editor, *option, *index);
}

bool QAbstractItemDelegate_EditorEvent(QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {
	return self->editorEvent(event, model, *option, *index);
}

void QAbstractItemDelegate_ElidedText(QFontMetrics* fontMetrics, int width, uintptr_t mode, const char* text, size_t text_Strlen, char** _out, int* _out_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString ret = QAbstractItemDelegate::elidedText(*fontMetrics, static_cast<int>(width), static_cast<Qt::TextElideMode>(mode), text_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QAbstractItemDelegate_HelpEvent(QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {
	return self->helpEvent(event, view, *option, *index);
}

void QAbstractItemDelegate_PaintingRoles(QAbstractItemDelegate* self, int** _out, size_t* _out_len) {
	QVector<int> ret = const_cast<const QAbstractItemDelegate*>(self)->paintingRoles();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* __out = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QAbstractItemDelegate_CommitData(QAbstractItemDelegate* self, QWidget* editor) {
	self->commitData(editor);
}

void QAbstractItemDelegate_connect_CommitData(QAbstractItemDelegate* self, void* slot) {
	QAbstractItemDelegate::connect(self, static_cast<void (QAbstractItemDelegate::*)(QWidget*)>(&QAbstractItemDelegate::commitData), self, [=](QWidget* editor) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractItemDelegate_CloseEditor(QAbstractItemDelegate* self, QWidget* editor) {
	self->closeEditor(editor);
}

void QAbstractItemDelegate_connect_CloseEditor(QAbstractItemDelegate* self, void* slot) {
	QAbstractItemDelegate::connect(self, static_cast<void (QAbstractItemDelegate::*)(QWidget*, QAbstractItemDelegate::EndEditHint)>(&QAbstractItemDelegate::closeEditor), self, [=](QWidget* editor) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractItemDelegate_SizeHintChanged(QAbstractItemDelegate* self, QModelIndex* param1) {
	self->sizeHintChanged(*param1);
}

void QAbstractItemDelegate_connect_SizeHintChanged(QAbstractItemDelegate* self, void* slot) {
	QAbstractItemDelegate::connect(self, static_cast<void (QAbstractItemDelegate::*)(const QModelIndex&)>(&QAbstractItemDelegate::sizeHintChanged), self, [=](const QModelIndex& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractItemDelegate_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemDelegate::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemDelegate_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemDelegate::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemDelegate_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemDelegate::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemDelegate_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemDelegate::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemDelegate_CloseEditor2(QAbstractItemDelegate* self, QWidget* editor, uintptr_t hint) {
	self->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
}

void QAbstractItemDelegate_connect_CloseEditor2(QAbstractItemDelegate* self, void* slot) {
	QAbstractItemDelegate::connect(self, static_cast<void (QAbstractItemDelegate::*)(QWidget*, QAbstractItemDelegate::EndEditHint)>(&QAbstractItemDelegate::closeEditor), self, [=](QWidget* editor, QAbstractItemDelegate::EndEditHint hint) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractItemDelegate_Delete(QAbstractItemDelegate* self) {
	delete self;
}

