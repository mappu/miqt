#include <QList>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextBrowser>
#include <QUrl>
#include <QVariant>
#include <QWidget>
#include <qtextbrowser.h>
#include "gen_qtextbrowser.h"
#include "_cgo_export.h"

QTextBrowser* QTextBrowser_new(QWidget* parent) {
	return new QTextBrowser(parent);
}

QTextBrowser* QTextBrowser_new2() {
	return new QTextBrowser();
}

QMetaObject* QTextBrowser_MetaObject(const QTextBrowser* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTextBrowser_Metacast(QTextBrowser* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTextBrowser_Tr(const char* s) {
	QString _ret = QTextBrowser::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QTextBrowser_Source(const QTextBrowser* self) {
	return new QUrl(self->source());
}

int QTextBrowser_SourceType(const QTextBrowser* self) {
	QTextDocument::ResourceType _ret = self->sourceType();
	return static_cast<int>(_ret);
}

struct miqt_array QTextBrowser_SearchPaths(const QTextBrowser* self) {
	QStringList _ret = self->searchPaths();
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

void QTextBrowser_SetSearchPaths(QTextBrowser* self, struct miqt_array /* of struct miqt_string */ paths) {
	QStringList paths_QList;
	paths_QList.reserve(paths.len);
	struct miqt_string* paths_arr = static_cast<struct miqt_string*>(paths.data);
	for(size_t i = 0; i < paths.len; ++i) {
		QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
		paths_QList.push_back(paths_arr_i_QString);
	}
	self->setSearchPaths(paths_QList);
}

QVariant* QTextBrowser_LoadResource(QTextBrowser* self, int typeVal, QUrl* name) {
	return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
}

bool QTextBrowser_IsBackwardAvailable(const QTextBrowser* self) {
	return self->isBackwardAvailable();
}

bool QTextBrowser_IsForwardAvailable(const QTextBrowser* self) {
	return self->isForwardAvailable();
}

void QTextBrowser_ClearHistory(QTextBrowser* self) {
	self->clearHistory();
}

struct miqt_string QTextBrowser_HistoryTitle(const QTextBrowser* self, int param1) {
	QString _ret = self->historyTitle(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QTextBrowser_HistoryUrl(const QTextBrowser* self, int param1) {
	return new QUrl(self->historyUrl(static_cast<int>(param1)));
}

int QTextBrowser_BackwardHistoryCount(const QTextBrowser* self) {
	return self->backwardHistoryCount();
}

int QTextBrowser_ForwardHistoryCount(const QTextBrowser* self) {
	return self->forwardHistoryCount();
}

bool QTextBrowser_OpenExternalLinks(const QTextBrowser* self) {
	return self->openExternalLinks();
}

void QTextBrowser_SetOpenExternalLinks(QTextBrowser* self, bool open) {
	self->setOpenExternalLinks(open);
}

bool QTextBrowser_OpenLinks(const QTextBrowser* self) {
	return self->openLinks();
}

void QTextBrowser_SetOpenLinks(QTextBrowser* self, bool open) {
	self->setOpenLinks(open);
}

void QTextBrowser_SetSource(QTextBrowser* self, QUrl* name) {
	self->setSource(*name);
}

void QTextBrowser_Backward(QTextBrowser* self) {
	self->backward();
}

void QTextBrowser_Forward(QTextBrowser* self) {
	self->forward();
}

void QTextBrowser_Home(QTextBrowser* self) {
	self->home();
}

void QTextBrowser_Reload(QTextBrowser* self) {
	self->reload();
}

void QTextBrowser_BackwardAvailable(QTextBrowser* self, bool param1) {
	self->backwardAvailable(param1);
}

void QTextBrowser_connect_BackwardAvailable(QTextBrowser* self, intptr_t slot) {
	QTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(bool)>(&QTextBrowser::backwardAvailable), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QTextBrowser_BackwardAvailable(slot, sigval1);
	});
}

void QTextBrowser_ForwardAvailable(QTextBrowser* self, bool param1) {
	self->forwardAvailable(param1);
}

void QTextBrowser_connect_ForwardAvailable(QTextBrowser* self, intptr_t slot) {
	QTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(bool)>(&QTextBrowser::forwardAvailable), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QTextBrowser_ForwardAvailable(slot, sigval1);
	});
}

void QTextBrowser_HistoryChanged(QTextBrowser* self) {
	self->historyChanged();
}

void QTextBrowser_connect_HistoryChanged(QTextBrowser* self, intptr_t slot) {
	QTextBrowser::connect(self, static_cast<void (QTextBrowser::*)()>(&QTextBrowser::historyChanged), self, [=]() {
		miqt_exec_callback_QTextBrowser_HistoryChanged(slot);
	});
}

void QTextBrowser_SourceChanged(QTextBrowser* self, QUrl* param1) {
	self->sourceChanged(*param1);
}

void QTextBrowser_connect_SourceChanged(QTextBrowser* self, intptr_t slot) {
	QTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(const QUrl&)>(&QTextBrowser::sourceChanged), self, [=](const QUrl& param1) {
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QTextBrowser_SourceChanged(slot, sigval1);
	});
}

void QTextBrowser_Highlighted(QTextBrowser* self, QUrl* param1) {
	self->highlighted(*param1);
}

void QTextBrowser_connect_Highlighted(QTextBrowser* self, intptr_t slot) {
	QTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(const QUrl&)>(&QTextBrowser::highlighted), self, [=](const QUrl& param1) {
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QTextBrowser_Highlighted(slot, sigval1);
	});
}

void QTextBrowser_AnchorClicked(QTextBrowser* self, QUrl* param1) {
	self->anchorClicked(*param1);
}

void QTextBrowser_connect_AnchorClicked(QTextBrowser* self, intptr_t slot) {
	QTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(const QUrl&)>(&QTextBrowser::anchorClicked), self, [=](const QUrl& param1) {
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QTextBrowser_AnchorClicked(slot, sigval1);
	});
}

struct miqt_string QTextBrowser_Tr2(const char* s, const char* c) {
	QString _ret = QTextBrowser::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextBrowser_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextBrowser::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextBrowser_SetSource2(QTextBrowser* self, QUrl* name, int typeVal) {
	self->setSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
}

void QTextBrowser_Delete(QTextBrowser* self) {
	delete self;
}

