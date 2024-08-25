#include "gen_qabstractitemdelegate.h"
#include "qabstractitemdelegate.h"

#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QEvent>
#include <QHelpEvent>
#include <QList>
#include <QMetaObject>
#include <QModelIndex>
#include <QPainter>
#include <QSize>
#include <QString>
#include <QStyleOptionViewItem>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QAbstractItemDelegate_MetaObject(QAbstractItemDelegate* self) {
	return (QMetaObject*) self->metaObject();
}

void QAbstractItemDelegate_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemDelegate::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemDelegate_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemDelegate::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemDelegate_Paint(QAbstractItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
	self->paint(painter, *option, *index);
}

QSize* QAbstractItemDelegate_SizeHint(QAbstractItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index) {
	QSize ret = self->sizeHint(*option, *index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QWidget* QAbstractItemDelegate_CreateEditor(QAbstractItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
	return self->createEditor(parent, *option, *index);
}

void QAbstractItemDelegate_DestroyEditor(QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index) {
	self->destroyEditor(editor, *index);
}

void QAbstractItemDelegate_SetEditorData(QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index) {
	self->setEditorData(editor, *index);
}

void QAbstractItemDelegate_SetModelData(QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
	self->setModelData(editor, model, *index);
}

void QAbstractItemDelegate_UpdateEditorGeometry(QAbstractItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
	self->updateEditorGeometry(editor, *option, *index);
}

bool QAbstractItemDelegate_EditorEvent(QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {
	return self->editorEvent(event, model, *option, *index);
}

bool QAbstractItemDelegate_HelpEvent(QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {
	return self->helpEvent(event, view, *option, *index);
}

void QAbstractItemDelegate_PaintingRoles(QAbstractItemDelegate* self, int** _out, size_t* _out_len) {
	QVector<int> ret = self->paintingRoles();
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

void QAbstractItemDelegate_SizeHintChanged(QAbstractItemDelegate* self, QModelIndex* param1) {
	self->sizeHintChanged(*param1);
}

void QAbstractItemDelegate_connect_SizeHintChanged(QAbstractItemDelegate* self, void* slot) {
	QAbstractItemDelegate::connect(self, static_cast<void (QAbstractItemDelegate::*)(const QModelIndex&)>(&QAbstractItemDelegate::sizeHintChanged), self, [=](const QModelIndex& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractItemDelegate_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemDelegate::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemDelegate_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemDelegate::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemDelegate_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemDelegate::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemDelegate_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemDelegate::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemDelegate_Delete(QAbstractItemDelegate* self) {
	delete self;
}

