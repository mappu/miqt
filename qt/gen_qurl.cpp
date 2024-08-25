#include "gen_qurl.h"
#include "qurl.h"

#include <QByteArray>
#include <QList>
#include <QString>
#include <QUrl>
#include <QUrlQuery>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QUrl* QUrl_new() {
	return new QUrl();
}

QUrl* QUrl_new2(QUrl* copyVal) {
	return new QUrl(*copyVal);
}

void QUrl_OperatorAssign(QUrl* self, QUrl* copyVal) {
	self->operator=(*copyVal);
}

void QUrl_OperatorAssignWithUrl(QUrl* self, const char* url, size_t url_Strlen) {
	QString url_QString = QString::fromUtf8(url, url_Strlen);
	self->operator=(url_QString);
}

void QUrl_Swap(QUrl* self, QUrl* other) {
	self->swap(*other);
}

QUrl* QUrl_FromUserInput(const char* userInput, size_t userInput_Strlen) {
	QString userInput_QString = QString::fromUtf8(userInput, userInput_Strlen);
	QUrl ret = QUrl::fromUserInput(userInput_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

bool QUrl_IsValid(QUrl* self) {
	return self->isValid();
}

void QUrl_ErrorString(QUrl* self, char** _out, int* _out_Strlen) {
	QString ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QUrl_IsEmpty(QUrl* self) {
	return self->isEmpty();
}

void QUrl_Clear(QUrl* self) {
	self->clear();
}

void QUrl_SetScheme(QUrl* self, const char* scheme, size_t scheme_Strlen) {
	QString scheme_QString = QString::fromUtf8(scheme, scheme_Strlen);
	self->setScheme(scheme_QString);
}

void QUrl_Scheme(QUrl* self, char** _out, int* _out_Strlen) {
	QString ret = self->scheme();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_SetPort(QUrl* self, int port) {
	self->setPort(static_cast<int>(port));
}

int QUrl_Port(QUrl* self) {
	return self->port();
}

bool QUrl_HasQuery(QUrl* self) {
	return self->hasQuery();
}

void QUrl_SetQuery(QUrl* self, QUrlQuery* query) {
	self->setQuery(*query);
}

bool QUrl_HasFragment(QUrl* self) {
	return self->hasFragment();
}

QUrl* QUrl_Resolved(QUrl* self, QUrl* relative) {
	QUrl ret = self->resolved(*relative);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

bool QUrl_IsRelative(QUrl* self) {
	return self->isRelative();
}

bool QUrl_IsParentOf(QUrl* self, QUrl* url) {
	return self->isParentOf(*url);
}

bool QUrl_IsLocalFile(QUrl* self) {
	return self->isLocalFile();
}

QUrl* QUrl_FromLocalFile(const char* localfile, size_t localfile_Strlen) {
	QString localfile_QString = QString::fromUtf8(localfile, localfile_Strlen);
	QUrl ret = QUrl::fromLocalFile(localfile_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

void QUrl_ToLocalFile(QUrl* self, char** _out, int* _out_Strlen) {
	QString ret = self->toLocalFile();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_Detach(QUrl* self) {
	self->detach();
}

bool QUrl_IsDetached(QUrl* self) {
	return self->isDetached();
}

bool QUrl_OperatorLesser(QUrl* self, QUrl* url) {
	return self->operator<(*url);
}

bool QUrl_OperatorEqual(QUrl* self, QUrl* url) {
	return self->operator==(*url);
}

bool QUrl_OperatorNotEqual(QUrl* self, QUrl* url) {
	return self->operator!=(*url);
}

void QUrl_FromPercentEncoding(QByteArray* param1, char** _out, int* _out_Strlen) {
	QString ret = QUrl::fromPercentEncoding(*param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QByteArray* QUrl_ToPercentEncoding(const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	QByteArray ret = QUrl::toPercentEncoding(param1_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QUrl_FromAce(QByteArray* param1, char** _out, int* _out_Strlen) {
	QString ret = QUrl::fromAce(*param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QByteArray* QUrl_ToAce(const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	QByteArray ret = QUrl::toAce(param1_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QUrl_IdnWhitelist(char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = QUrl::idnWhitelist();
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

void QUrl_SetIdnWhitelist(char** idnWhitelist, uint64_t* idnWhitelist_Lengths, size_t idnWhitelist_len) {
	QList<QString> idnWhitelist_QList;
	idnWhitelist_QList.reserve(idnWhitelist_len);
	for(size_t i = 0; i < idnWhitelist_len; ++i) {
		idnWhitelist_QList.push_back(QString::fromUtf8(idnWhitelist[i], idnWhitelist_Lengths[i]));
	}
	QUrl::setIdnWhitelist(idnWhitelist_QList);
}

int QUrl_Port1(QUrl* self, int defaultPort) {
	return self->port(static_cast<int>(defaultPort));
}

QByteArray* QUrl_ToPercentEncoding2(const char* param1, size_t param1_Strlen, QByteArray* exclude) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	QByteArray ret = QUrl::toPercentEncoding(param1_QString, *exclude);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QUrl_ToPercentEncoding3(const char* param1, size_t param1_Strlen, QByteArray* exclude, QByteArray* include) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	QByteArray ret = QUrl::toPercentEncoding(param1_QString, *exclude, *include);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QUrl_Delete(QUrl* self) {
	delete self;
}

