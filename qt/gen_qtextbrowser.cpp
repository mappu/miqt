#include "gen_qtextbrowser.h"
#include "qtextbrowser.h"

#include <QList>
#include <QMetaObject>
#include <QString>
#include <QTextBrowser>
#include <QUrl>
#include <QVariant>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTextBrowser* QTextBrowser_new() {
	return new QTextBrowser();
}

QTextBrowser* QTextBrowser_new2(QWidget* parent) {
	return new QTextBrowser(parent);
}

QMetaObject* QTextBrowser_MetaObject(QTextBrowser* self) {
	return (QMetaObject*) self->metaObject();
}

void QTextBrowser_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextBrowser::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextBrowser_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextBrowser::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QUrl* QTextBrowser_Source(QTextBrowser* self) {
	QUrl ret = self->source();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

void QTextBrowser_SearchPaths(QTextBrowser* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->searchPaths();
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

void QTextBrowser_SetSearchPaths(QTextBrowser* self, char** paths, uint64_t* paths_Lengths, size_t paths_len) {
	QList<QString> paths_QList;
	paths_QList.reserve(paths_len);
	for(size_t i = 0; i < paths_len; ++i) {
		paths_QList.push_back(QString::fromUtf8(paths[i], paths_Lengths[i]));
	}
	self->setSearchPaths(paths_QList);
}

QVariant* QTextBrowser_LoadResource(QTextBrowser* self, int typeVal, QUrl* name) {
	QVariant ret = self->loadResource(static_cast<int>(typeVal), *name);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QTextBrowser_IsBackwardAvailable(QTextBrowser* self) {
	return self->isBackwardAvailable();
}

bool QTextBrowser_IsForwardAvailable(QTextBrowser* self) {
	return self->isForwardAvailable();
}

void QTextBrowser_ClearHistory(QTextBrowser* self) {
	self->clearHistory();
}

void QTextBrowser_HistoryTitle(QTextBrowser* self, int param1, char** _out, int* _out_Strlen) {
	QString ret = self->historyTitle(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QUrl* QTextBrowser_HistoryUrl(QTextBrowser* self, int param1) {
	QUrl ret = self->historyUrl(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

int QTextBrowser_BackwardHistoryCount(QTextBrowser* self) {
	return self->backwardHistoryCount();
}

int QTextBrowser_ForwardHistoryCount(QTextBrowser* self) {
	return self->forwardHistoryCount();
}

bool QTextBrowser_OpenExternalLinks(QTextBrowser* self) {
	return self->openExternalLinks();
}

void QTextBrowser_SetOpenExternalLinks(QTextBrowser* self, bool open) {
	self->setOpenExternalLinks(open);
}

bool QTextBrowser_OpenLinks(QTextBrowser* self) {
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

void QTextBrowser_connect_BackwardAvailable(QTextBrowser* self, void* slot) {
	QTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(bool)>(&QTextBrowser::backwardAvailable), self, [=](bool param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextBrowser_ForwardAvailable(QTextBrowser* self, bool param1) {
	self->forwardAvailable(param1);
}

void QTextBrowser_connect_ForwardAvailable(QTextBrowser* self, void* slot) {
	QTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(bool)>(&QTextBrowser::forwardAvailable), self, [=](bool param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextBrowser_HistoryChanged(QTextBrowser* self) {
	self->historyChanged();
}

void QTextBrowser_connect_HistoryChanged(QTextBrowser* self, void* slot) {
	QTextBrowser::connect(self, static_cast<void (QTextBrowser::*)()>(&QTextBrowser::historyChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextBrowser_SourceChanged(QTextBrowser* self, QUrl* param1) {
	self->sourceChanged(*param1);
}

void QTextBrowser_connect_SourceChanged(QTextBrowser* self, void* slot) {
	QTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(const QUrl&)>(&QTextBrowser::sourceChanged), self, [=](const QUrl& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextBrowser_Highlighted(QTextBrowser* self, QUrl* param1) {
	self->highlighted(*param1);
}

void QTextBrowser_connect_Highlighted(QTextBrowser* self, void* slot) {
	QTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(const QUrl&)>(&QTextBrowser::highlighted), self, [=](const QUrl& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextBrowser_HighlightedWithQString(QTextBrowser* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->highlighted(param1_QString);
}

void QTextBrowser_connect_HighlightedWithQString(QTextBrowser* self, void* slot) {
	QTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(const QString&)>(&QTextBrowser::highlighted), self, [=](const QString& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextBrowser_AnchorClicked(QTextBrowser* self, QUrl* param1) {
	self->anchorClicked(*param1);
}

void QTextBrowser_connect_AnchorClicked(QTextBrowser* self, void* slot) {
	QTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(const QUrl&)>(&QTextBrowser::anchorClicked), self, [=](const QUrl& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextBrowser_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextBrowser::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextBrowser_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTextBrowser::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextBrowser_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextBrowser::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextBrowser_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTextBrowser::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextBrowser_Delete(QTextBrowser* self) {
	delete self;
}

