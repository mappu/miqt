#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QCompleter>
#include <QList>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qcompleter.h"
#include "gen_qcompleter.h"
#include "_cgo_export.h"

QCompleter* QCompleter_new() {
	return new QCompleter();
}

QCompleter* QCompleter_new2(QAbstractItemModel* model) {
	return new QCompleter(model);
}

QCompleter* QCompleter_new3(struct miqt_array* /* of struct miqt_string* */ completions) {
	QList<QString> completions_QList;
	completions_QList.reserve(completions->len);
	struct miqt_string** completions_arr = static_cast<struct miqt_string**>(completions->data);
	for(size_t i = 0; i < completions->len; ++i) {
		QString completions_arr_i_QString = QString::fromUtf8(&completions_arr[i]->data, completions_arr[i]->len);
		completions_QList.push_back(completions_arr_i_QString);
	}
	return new QCompleter(completions_QList);
}

QCompleter* QCompleter_new4(QObject* parent) {
	return new QCompleter(parent);
}

QCompleter* QCompleter_new5(QAbstractItemModel* model, QObject* parent) {
	return new QCompleter(model, parent);
}

QCompleter* QCompleter_new6(struct miqt_array* /* of struct miqt_string* */ completions, QObject* parent) {
	QList<QString> completions_QList;
	completions_QList.reserve(completions->len);
	struct miqt_string** completions_arr = static_cast<struct miqt_string**>(completions->data);
	for(size_t i = 0; i < completions->len; ++i) {
		QString completions_arr_i_QString = QString::fromUtf8(&completions_arr[i]->data, completions_arr[i]->len);
		completions_QList.push_back(completions_arr_i_QString);
	}
	return new QCompleter(completions_QList, parent);
}

QMetaObject* QCompleter_MetaObject(const QCompleter* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QCompleter_Tr(const char* s) {
	QString _ret = QCompleter::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCompleter_TrUtf8(const char* s) {
	QString _ret = QCompleter::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QCompleter_SetWidget(QCompleter* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QCompleter_Widget(const QCompleter* self) {
	return self->widget();
}

void QCompleter_SetModel(QCompleter* self, QAbstractItemModel* c) {
	self->setModel(c);
}

QAbstractItemModel* QCompleter_Model(const QCompleter* self) {
	return self->model();
}

void QCompleter_SetCompletionMode(QCompleter* self, int mode) {
	self->setCompletionMode(static_cast<QCompleter::CompletionMode>(mode));
}

int QCompleter_CompletionMode(const QCompleter* self) {
	QCompleter::CompletionMode _ret = self->completionMode();
	return static_cast<int>(_ret);
}

void QCompleter_SetFilterMode(QCompleter* self, int filterMode) {
	self->setFilterMode(static_cast<Qt::MatchFlags>(filterMode));
}

int QCompleter_FilterMode(const QCompleter* self) {
	Qt::MatchFlags _ret = self->filterMode();
	return static_cast<int>(_ret);
}

QAbstractItemView* QCompleter_Popup(const QCompleter* self) {
	return self->popup();
}

void QCompleter_SetPopup(QCompleter* self, QAbstractItemView* popup) {
	self->setPopup(popup);
}

void QCompleter_SetCaseSensitivity(QCompleter* self, int caseSensitivity) {
	self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(caseSensitivity));
}

int QCompleter_CaseSensitivity(const QCompleter* self) {
	Qt::CaseSensitivity _ret = self->caseSensitivity();
	return static_cast<int>(_ret);
}

void QCompleter_SetModelSorting(QCompleter* self, int sorting) {
	self->setModelSorting(static_cast<QCompleter::ModelSorting>(sorting));
}

int QCompleter_ModelSorting(const QCompleter* self) {
	QCompleter::ModelSorting _ret = self->modelSorting();
	return static_cast<int>(_ret);
}

void QCompleter_SetCompletionColumn(QCompleter* self, int column) {
	self->setCompletionColumn(static_cast<int>(column));
}

int QCompleter_CompletionColumn(const QCompleter* self) {
	return self->completionColumn();
}

void QCompleter_SetCompletionRole(QCompleter* self, int role) {
	self->setCompletionRole(static_cast<int>(role));
}

int QCompleter_CompletionRole(const QCompleter* self) {
	return self->completionRole();
}

bool QCompleter_WrapAround(const QCompleter* self) {
	return self->wrapAround();
}

int QCompleter_MaxVisibleItems(const QCompleter* self) {
	return self->maxVisibleItems();
}

void QCompleter_SetMaxVisibleItems(QCompleter* self, int maxItems) {
	self->setMaxVisibleItems(static_cast<int>(maxItems));
}

int QCompleter_CompletionCount(const QCompleter* self) {
	return self->completionCount();
}

bool QCompleter_SetCurrentRow(QCompleter* self, int row) {
	return self->setCurrentRow(static_cast<int>(row));
}

int QCompleter_CurrentRow(const QCompleter* self) {
	return self->currentRow();
}

QModelIndex* QCompleter_CurrentIndex(const QCompleter* self) {
	return new QModelIndex(self->currentIndex());
}

struct miqt_string* QCompleter_CurrentCompletion(const QCompleter* self) {
	QString _ret = self->currentCompletion();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QAbstractItemModel* QCompleter_CompletionModel(const QCompleter* self) {
	return self->completionModel();
}

struct miqt_string* QCompleter_CompletionPrefix(const QCompleter* self) {
	QString _ret = self->completionPrefix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QCompleter_SetCompletionPrefix(QCompleter* self, struct miqt_string* prefix) {
	QString prefix_QString = QString::fromUtf8(&prefix->data, prefix->len);
	self->setCompletionPrefix(prefix_QString);
}

void QCompleter_Complete(QCompleter* self) {
	self->complete();
}

void QCompleter_SetWrapAround(QCompleter* self, bool wrap) {
	self->setWrapAround(wrap);
}

struct miqt_string* QCompleter_PathFromIndex(const QCompleter* self, QModelIndex* index) {
	QString _ret = self->pathFromIndex(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_array* QCompleter_SplitPath(const QCompleter* self, struct miqt_string* path) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	QStringList _ret = self->splitPath(path_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QCompleter_Activated(QCompleter* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->activated(text_QString);
}

void QCompleter_connect_Activated(QCompleter* self, void* slot) {
	QCompleter::connect(self, static_cast<void (QCompleter::*)(const QString&)>(&QCompleter::activated), self, [=](const QString& text) {
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string* sigval1 = miqt_strdup(text_b.data(), text_b.length());
		miqt_exec_callback_QCompleter_Activated(slot, sigval1);
	});
}

void QCompleter_ActivatedWithIndex(QCompleter* self, QModelIndex* index) {
	self->activated(*index);
}

void QCompleter_connect_ActivatedWithIndex(QCompleter* self, void* slot) {
	QCompleter::connect(self, static_cast<void (QCompleter::*)(const QModelIndex&)>(&QCompleter::activated), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QCompleter_ActivatedWithIndex(slot, sigval1);
	});
}

void QCompleter_Highlighted(QCompleter* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->highlighted(text_QString);
}

void QCompleter_connect_Highlighted(QCompleter* self, void* slot) {
	QCompleter::connect(self, static_cast<void (QCompleter::*)(const QString&)>(&QCompleter::highlighted), self, [=](const QString& text) {
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string* sigval1 = miqt_strdup(text_b.data(), text_b.length());
		miqt_exec_callback_QCompleter_Highlighted(slot, sigval1);
	});
}

void QCompleter_HighlightedWithIndex(QCompleter* self, QModelIndex* index) {
	self->highlighted(*index);
}

void QCompleter_connect_HighlightedWithIndex(QCompleter* self, void* slot) {
	QCompleter::connect(self, static_cast<void (QCompleter::*)(const QModelIndex&)>(&QCompleter::highlighted), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QCompleter_HighlightedWithIndex(slot, sigval1);
	});
}

struct miqt_string* QCompleter_Tr2(const char* s, const char* c) {
	QString _ret = QCompleter::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCompleter_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCompleter::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCompleter_TrUtf82(const char* s, const char* c) {
	QString _ret = QCompleter::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCompleter_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCompleter::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QCompleter_Complete1(QCompleter* self, QRect* rect) {
	self->complete(*rect);
}

void QCompleter_Delete(QCompleter* self) {
	delete self;
}

