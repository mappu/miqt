#include <QEvent>
#include <QList>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsciapis.h>
#include "gen_qsciapis.h"
#include "_cgo_export.h"

QsciAPIs* QsciAPIs_new(QsciLexer* lexer) {
	return new QsciAPIs(lexer);
}

QMetaObject* QsciAPIs_MetaObject(const QsciAPIs* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciAPIs_Metacast(QsciAPIs* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciAPIs_Tr(const char* s) {
	QString _ret = QsciAPIs::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciAPIs_Add(QsciAPIs* self, struct miqt_string entry) {
	QString entry_QString = QString::fromUtf8(entry.data, entry.len);
	self->add(entry_QString);
}

void QsciAPIs_Clear(QsciAPIs* self) {
	self->clear();
}

bool QsciAPIs_Load(QsciAPIs* self, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->load(filename_QString);
}

void QsciAPIs_Remove(QsciAPIs* self, struct miqt_string entry) {
	QString entry_QString = QString::fromUtf8(entry.data, entry.len);
	self->remove(entry_QString);
}

void QsciAPIs_Prepare(QsciAPIs* self) {
	self->prepare();
}

void QsciAPIs_CancelPreparation(QsciAPIs* self) {
	self->cancelPreparation();
}

struct miqt_string QsciAPIs_DefaultPreparedName(const QsciAPIs* self) {
	QString _ret = self->defaultPreparedName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciAPIs_IsPrepared(const QsciAPIs* self) {
	return self->isPrepared();
}

bool QsciAPIs_LoadPrepared(QsciAPIs* self) {
	return self->loadPrepared();
}

bool QsciAPIs_SavePrepared(const QsciAPIs* self) {
	return self->savePrepared();
}

void QsciAPIs_UpdateAutoCompletionList(QsciAPIs* self, struct miqt_array /* of struct miqt_string */ context, struct miqt_array /* of struct miqt_string */ list) {
	QStringList context_QList;
	context_QList.reserve(context.len);
	struct miqt_string* context_arr = static_cast<struct miqt_string*>(context.data);
	for(size_t i = 0; i < context.len; ++i) {
		QString context_arr_i_QString = QString::fromUtf8(context_arr[i].data, context_arr[i].len);
		context_QList.push_back(context_arr_i_QString);
	}
	QStringList list_QList;
	list_QList.reserve(list.len);
	struct miqt_string* list_arr = static_cast<struct miqt_string*>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
		list_QList.push_back(list_arr_i_QString);
	}
	self->updateAutoCompletionList(context_QList, list_QList);
}

void QsciAPIs_AutoCompletionSelected(QsciAPIs* self, struct miqt_string sel) {
	QString sel_QString = QString::fromUtf8(sel.data, sel.len);
	self->autoCompletionSelected(sel_QString);
}

struct miqt_array QsciAPIs_CallTips(QsciAPIs* self, struct miqt_array /* of struct miqt_string */ context, int commas, int style, struct miqt_array /* of int */ shifts) {
	QStringList context_QList;
	context_QList.reserve(context.len);
	struct miqt_string* context_arr = static_cast<struct miqt_string*>(context.data);
	for(size_t i = 0; i < context.len; ++i) {
		QString context_arr_i_QString = QString::fromUtf8(context_arr[i].data, context_arr[i].len);
		context_QList.push_back(context_arr_i_QString);
	}
	QList<int> shifts_QList;
	shifts_QList.reserve(shifts.len);
	int* shifts_arr = static_cast<int*>(shifts.data);
	for(size_t i = 0; i < shifts.len; ++i) {
		shifts_QList.push_back(static_cast<int>(shifts_arr[i]));
	}
	QStringList _ret = self->callTips(context_QList, static_cast<int>(commas), static_cast<QsciScintilla::CallTipsStyle>(style), shifts_QList);
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

bool QsciAPIs_Event(QsciAPIs* self, QEvent* e) {
	return self->event(e);
}

struct miqt_array QsciAPIs_InstalledAPIFiles(const QsciAPIs* self) {
	QStringList _ret = self->installedAPIFiles();
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

void QsciAPIs_ApiPreparationCancelled(QsciAPIs* self) {
	self->apiPreparationCancelled();
}

void QsciAPIs_connect_ApiPreparationCancelled(QsciAPIs* self, intptr_t slot) {
	QsciAPIs::connect(self, static_cast<void (QsciAPIs::*)()>(&QsciAPIs::apiPreparationCancelled), self, [=]() {
		miqt_exec_callback_QsciAPIs_ApiPreparationCancelled(slot);
	});
}

void QsciAPIs_ApiPreparationStarted(QsciAPIs* self) {
	self->apiPreparationStarted();
}

void QsciAPIs_connect_ApiPreparationStarted(QsciAPIs* self, intptr_t slot) {
	QsciAPIs::connect(self, static_cast<void (QsciAPIs::*)()>(&QsciAPIs::apiPreparationStarted), self, [=]() {
		miqt_exec_callback_QsciAPIs_ApiPreparationStarted(slot);
	});
}

void QsciAPIs_ApiPreparationFinished(QsciAPIs* self) {
	self->apiPreparationFinished();
}

void QsciAPIs_connect_ApiPreparationFinished(QsciAPIs* self, intptr_t slot) {
	QsciAPIs::connect(self, static_cast<void (QsciAPIs::*)()>(&QsciAPIs::apiPreparationFinished), self, [=]() {
		miqt_exec_callback_QsciAPIs_ApiPreparationFinished(slot);
	});
}

struct miqt_string QsciAPIs_Tr2(const char* s, const char* c) {
	QString _ret = QsciAPIs::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciAPIs_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciAPIs::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciAPIs_IsPrepared1(const QsciAPIs* self, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->isPrepared(filename_QString);
}

bool QsciAPIs_LoadPrepared1(QsciAPIs* self, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->loadPrepared(filename_QString);
}

bool QsciAPIs_SavePrepared1(const QsciAPIs* self, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->savePrepared(filename_QString);
}

void QsciAPIs_Delete(QsciAPIs* self) {
	delete self;
}

