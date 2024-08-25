#include "gen_qcompleter.h"
#include "qcompleter.h"

#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QCompleter>
#include <QList>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QRect>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QCompleter* QCompleter_new() {
	return new QCompleter();
}

QCompleter* QCompleter_new2(QAbstractItemModel* model) {
	return new QCompleter(model);
}

QCompleter* QCompleter_new3(char** completions, uint64_t* completions_Lengths, size_t completions_len) {
	QList<QString> completions_QList;
	completions_QList.reserve(completions_len);
	for(size_t i = 0; i < completions_len; ++i) {
		completions_QList.push_back(QString::fromUtf8(completions[i], completions_Lengths[i]));
	}
	return new QCompleter(completions_QList);
}

QCompleter* QCompleter_new4(QObject* parent) {
	return new QCompleter(parent);
}

QCompleter* QCompleter_new5(QAbstractItemModel* model, QObject* parent) {
	return new QCompleter(model, parent);
}

QCompleter* QCompleter_new6(char** completions, uint64_t* completions_Lengths, size_t completions_len, QObject* parent) {
	QList<QString> completions_QList;
	completions_QList.reserve(completions_len);
	for(size_t i = 0; i < completions_len; ++i) {
		completions_QList.push_back(QString::fromUtf8(completions[i], completions_Lengths[i]));
	}
	return new QCompleter(completions_QList, parent);
}

QMetaObject* QCompleter_MetaObject(QCompleter* self) {
	return (QMetaObject*) self->metaObject();
}

void QCompleter_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QCompleter::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCompleter_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QCompleter::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCompleter_SetWidget(QCompleter* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QCompleter_Widget(QCompleter* self) {
	return self->widget();
}

void QCompleter_SetModel(QCompleter* self, QAbstractItemModel* c) {
	self->setModel(c);
}

QAbstractItemModel* QCompleter_Model(QCompleter* self) {
	return self->model();
}

QAbstractItemView* QCompleter_Popup(QCompleter* self) {
	return self->popup();
}

void QCompleter_SetPopup(QCompleter* self, QAbstractItemView* popup) {
	self->setPopup(popup);
}

void QCompleter_SetCompletionColumn(QCompleter* self, int column) {
	self->setCompletionColumn(static_cast<int>(column));
}

int QCompleter_CompletionColumn(QCompleter* self) {
	return self->completionColumn();
}

void QCompleter_SetCompletionRole(QCompleter* self, int role) {
	self->setCompletionRole(static_cast<int>(role));
}

int QCompleter_CompletionRole(QCompleter* self) {
	return self->completionRole();
}

bool QCompleter_WrapAround(QCompleter* self) {
	return self->wrapAround();
}

int QCompleter_MaxVisibleItems(QCompleter* self) {
	return self->maxVisibleItems();
}

void QCompleter_SetMaxVisibleItems(QCompleter* self, int maxItems) {
	self->setMaxVisibleItems(static_cast<int>(maxItems));
}

int QCompleter_CompletionCount(QCompleter* self) {
	return self->completionCount();
}

bool QCompleter_SetCurrentRow(QCompleter* self, int row) {
	return self->setCurrentRow(static_cast<int>(row));
}

int QCompleter_CurrentRow(QCompleter* self) {
	return self->currentRow();
}

QModelIndex* QCompleter_CurrentIndex(QCompleter* self) {
	QModelIndex ret = self->currentIndex();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

void QCompleter_CurrentCompletion(QCompleter* self, char** _out, int* _out_Strlen) {
	QString ret = self->currentCompletion();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QAbstractItemModel* QCompleter_CompletionModel(QCompleter* self) {
	return self->completionModel();
}

void QCompleter_CompletionPrefix(QCompleter* self, char** _out, int* _out_Strlen) {
	QString ret = self->completionPrefix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCompleter_SetCompletionPrefix(QCompleter* self, const char* prefix, size_t prefix_Strlen) {
	QString prefix_QString = QString::fromUtf8(prefix, prefix_Strlen);
	self->setCompletionPrefix(prefix_QString);
}

void QCompleter_Complete(QCompleter* self) {
	self->complete();
}

void QCompleter_SetWrapAround(QCompleter* self, bool wrap) {
	self->setWrapAround(wrap);
}

void QCompleter_PathFromIndex(QCompleter* self, QModelIndex* index, char** _out, int* _out_Strlen) {
	QString ret = self->pathFromIndex(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCompleter_SplitPath(QCompleter* self, const char* path, size_t path_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	QList<QString> ret = self->splitPath(path_QString);
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

void QCompleter_Activated(QCompleter* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->activated(text_QString);
}

void QCompleter_connect_Activated(QCompleter* self, void* slot) {
	QCompleter::connect(self, static_cast<void (QCompleter::*)(const QString&)>(&QCompleter::activated), self, [=](const QString& text) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QCompleter_ActivatedWithIndex(QCompleter* self, QModelIndex* index) {
	self->activated(*index);
}

void QCompleter_connect_ActivatedWithIndex(QCompleter* self, void* slot) {
	QCompleter::connect(self, static_cast<void (QCompleter::*)(const QModelIndex&)>(&QCompleter::activated), self, [=](const QModelIndex& index) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QCompleter_Highlighted(QCompleter* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->highlighted(text_QString);
}

void QCompleter_connect_Highlighted(QCompleter* self, void* slot) {
	QCompleter::connect(self, static_cast<void (QCompleter::*)(const QString&)>(&QCompleter::highlighted), self, [=](const QString& text) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QCompleter_HighlightedWithIndex(QCompleter* self, QModelIndex* index) {
	self->highlighted(*index);
}

void QCompleter_connect_HighlightedWithIndex(QCompleter* self, void* slot) {
	QCompleter::connect(self, static_cast<void (QCompleter::*)(const QModelIndex&)>(&QCompleter::highlighted), self, [=](const QModelIndex& index) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QCompleter_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QCompleter::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCompleter_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QCompleter::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCompleter_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QCompleter::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCompleter_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QCompleter::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCompleter_Complete1(QCompleter* self, QRect* rect) {
	self->complete(*rect);
}

void QCompleter_Delete(QCompleter* self) {
	delete self;
}

