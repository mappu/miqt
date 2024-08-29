#include <QByteArray>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QUrlQuery>
#include "qurl.h"

#include "gen_qurl.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QUrl* QUrl_new() {
	return new QUrl();
}

QUrl* QUrl_new2(QUrl* copyVal) {
	return new QUrl(*copyVal);
}

QUrl* QUrl_new3(const char* url, size_t url_Strlen) {
	QString url_QString = QString::fromUtf8(url, url_Strlen);
	return new QUrl(url_QString);
}

QUrl* QUrl_new4(const char* url, size_t url_Strlen, uintptr_t mode) {
	QString url_QString = QString::fromUtf8(url, url_Strlen);
	return new QUrl(url_QString, static_cast<QUrl::ParsingMode>(mode));
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

void QUrl_SetUrl(QUrl* self, const char* url, size_t url_Strlen) {
	QString url_QString = QString::fromUtf8(url, url_Strlen);
	self->setUrl(url_QString);
}

void QUrl_Url(QUrl* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUrl*>(self)->url();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_ToString(QUrl* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUrl*>(self)->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_ToDisplayString(QUrl* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUrl*>(self)->toDisplayString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QByteArray* QUrl_ToEncoded(QUrl* self) {
	QByteArray ret = const_cast<const QUrl*>(self)->toEncoded();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QUrl* QUrl_FromEncoded(QByteArray* url) {
	QUrl ret = QUrl::fromEncoded(*url);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

QUrl* QUrl_FromUserInput(const char* userInput, size_t userInput_Strlen) {
	QString userInput_QString = QString::fromUtf8(userInput, userInput_Strlen);
	QUrl ret = QUrl::fromUserInput(userInput_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

QUrl* QUrl_FromUserInput2(const char* userInput, size_t userInput_Strlen, const char* workingDirectory, size_t workingDirectory_Strlen) {
	QString userInput_QString = QString::fromUtf8(userInput, userInput_Strlen);
	QString workingDirectory_QString = QString::fromUtf8(workingDirectory, workingDirectory_Strlen);
	QUrl ret = QUrl::fromUserInput(userInput_QString, workingDirectory_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

bool QUrl_IsValid(QUrl* self) {
	return const_cast<const QUrl*>(self)->isValid();
}

void QUrl_ErrorString(QUrl* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUrl*>(self)->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QUrl_IsEmpty(QUrl* self) {
	return const_cast<const QUrl*>(self)->isEmpty();
}

void QUrl_Clear(QUrl* self) {
	self->clear();
}

void QUrl_SetScheme(QUrl* self, const char* scheme, size_t scheme_Strlen) {
	QString scheme_QString = QString::fromUtf8(scheme, scheme_Strlen);
	self->setScheme(scheme_QString);
}

void QUrl_Scheme(QUrl* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUrl*>(self)->scheme();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_SetAuthority(QUrl* self, const char* authority, size_t authority_Strlen) {
	QString authority_QString = QString::fromUtf8(authority, authority_Strlen);
	self->setAuthority(authority_QString);
}

void QUrl_Authority(QUrl* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUrl*>(self)->authority();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_SetUserInfo(QUrl* self, const char* userInfo, size_t userInfo_Strlen) {
	QString userInfo_QString = QString::fromUtf8(userInfo, userInfo_Strlen);
	self->setUserInfo(userInfo_QString);
}

void QUrl_UserInfo(QUrl* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUrl*>(self)->userInfo();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_SetUserName(QUrl* self, const char* userName, size_t userName_Strlen) {
	QString userName_QString = QString::fromUtf8(userName, userName_Strlen);
	self->setUserName(userName_QString);
}

void QUrl_UserName(QUrl* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUrl*>(self)->userName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_SetPassword(QUrl* self, const char* password, size_t password_Strlen) {
	QString password_QString = QString::fromUtf8(password, password_Strlen);
	self->setPassword(password_QString);
}

void QUrl_Password(QUrl* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUrl*>(self)->password();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_SetHost(QUrl* self, const char* host, size_t host_Strlen) {
	QString host_QString = QString::fromUtf8(host, host_Strlen);
	self->setHost(host_QString);
}

void QUrl_Host(QUrl* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUrl*>(self)->host();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_TopLevelDomain(QUrl* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUrl*>(self)->topLevelDomain();
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
	return const_cast<const QUrl*>(self)->port();
}

void QUrl_SetPath(QUrl* self, const char* path, size_t path_Strlen) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	self->setPath(path_QString);
}

void QUrl_Path(QUrl* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUrl*>(self)->path();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_FileName(QUrl* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUrl*>(self)->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QUrl_HasQuery(QUrl* self) {
	return const_cast<const QUrl*>(self)->hasQuery();
}

void QUrl_SetQuery(QUrl* self, const char* query, size_t query_Strlen) {
	QString query_QString = QString::fromUtf8(query, query_Strlen);
	self->setQuery(query_QString);
}

void QUrl_SetQueryWithQuery(QUrl* self, QUrlQuery* query) {
	self->setQuery(*query);
}

void QUrl_Query(QUrl* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUrl*>(self)->query();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QUrl_HasFragment(QUrl* self) {
	return const_cast<const QUrl*>(self)->hasFragment();
}

void QUrl_Fragment(QUrl* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUrl*>(self)->fragment();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_SetFragment(QUrl* self, const char* fragment, size_t fragment_Strlen) {
	QString fragment_QString = QString::fromUtf8(fragment, fragment_Strlen);
	self->setFragment(fragment_QString);
}

QUrl* QUrl_Resolved(QUrl* self, QUrl* relative) {
	QUrl ret = const_cast<const QUrl*>(self)->resolved(*relative);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

bool QUrl_IsRelative(QUrl* self) {
	return const_cast<const QUrl*>(self)->isRelative();
}

bool QUrl_IsParentOf(QUrl* self, QUrl* url) {
	return const_cast<const QUrl*>(self)->isParentOf(*url);
}

bool QUrl_IsLocalFile(QUrl* self) {
	return const_cast<const QUrl*>(self)->isLocalFile();
}

QUrl* QUrl_FromLocalFile(const char* localfile, size_t localfile_Strlen) {
	QString localfile_QString = QString::fromUtf8(localfile, localfile_Strlen);
	QUrl ret = QUrl::fromLocalFile(localfile_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

void QUrl_ToLocalFile(QUrl* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUrl*>(self)->toLocalFile();
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
	return const_cast<const QUrl*>(self)->isDetached();
}

bool QUrl_OperatorLesser(QUrl* self, QUrl* url) {
	return const_cast<const QUrl*>(self)->operator<(*url);
}

bool QUrl_OperatorEqual(QUrl* self, QUrl* url) {
	return const_cast<const QUrl*>(self)->operator==(*url);
}

bool QUrl_OperatorNotEqual(QUrl* self, QUrl* url) {
	return const_cast<const QUrl*>(self)->operator!=(*url);
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
	QStringList ret = QUrl::idnWhitelist();
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

void QUrl_ToStringList(QUrl** uris, size_t uris_len, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QUrl> uris_QList;
	uris_QList.reserve(uris_len);
	for(size_t i = 0; i < uris_len; ++i) {
		uris_QList.push_back(*(uris[i]));
	}
	QStringList ret = QUrl::toStringList(uris_QList);
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

void QUrl_FromStringList(char** uris, uint64_t* uris_Lengths, size_t uris_len, QUrl*** _out, size_t* _out_len) {
	QList<QString> uris_QList;
	uris_QList.reserve(uris_len);
	for(size_t i = 0; i < uris_len; ++i) {
		uris_QList.push_back(QString::fromUtf8(uris[i], uris_Lengths[i]));
	}
	QList<QUrl> ret = QUrl::fromStringList(uris_QList);
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QUrl** __out = static_cast<QUrl**>(malloc(sizeof(QUrl**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QUrl(ret[i]);
	}
	*_out = __out;
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

void QUrl_SetUrl2(QUrl* self, const char* url, size_t url_Strlen, uintptr_t mode) {
	QString url_QString = QString::fromUtf8(url, url_Strlen);
	self->setUrl(url_QString, static_cast<QUrl::ParsingMode>(mode));
}

QUrl* QUrl_FromEncoded2(QByteArray* url, uintptr_t mode) {
	QUrl ret = QUrl::fromEncoded(*url, static_cast<QUrl::ParsingMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

QUrl* QUrl_FromUserInput3(const char* userInput, size_t userInput_Strlen, const char* workingDirectory, size_t workingDirectory_Strlen, int options) {
	QString userInput_QString = QString::fromUtf8(userInput, userInput_Strlen);
	QString workingDirectory_QString = QString::fromUtf8(workingDirectory, workingDirectory_Strlen);
	QUrl ret = QUrl::fromUserInput(userInput_QString, workingDirectory_QString, static_cast<QUrl::UserInputResolutionOptions>(options));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

void QUrl_SetAuthority2(QUrl* self, const char* authority, size_t authority_Strlen, uintptr_t mode) {
	QString authority_QString = QString::fromUtf8(authority, authority_Strlen);
	self->setAuthority(authority_QString, static_cast<QUrl::ParsingMode>(mode));
}

void QUrl_Authority1(QUrl* self, int options, char** _out, int* _out_Strlen) {
	QString ret = self->authority(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_SetUserInfo2(QUrl* self, const char* userInfo, size_t userInfo_Strlen, uintptr_t mode) {
	QString userInfo_QString = QString::fromUtf8(userInfo, userInfo_Strlen);
	self->setUserInfo(userInfo_QString, static_cast<QUrl::ParsingMode>(mode));
}

void QUrl_UserInfo1(QUrl* self, int options, char** _out, int* _out_Strlen) {
	QString ret = self->userInfo(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_SetUserName2(QUrl* self, const char* userName, size_t userName_Strlen, uintptr_t mode) {
	QString userName_QString = QString::fromUtf8(userName, userName_Strlen);
	self->setUserName(userName_QString, static_cast<QUrl::ParsingMode>(mode));
}

void QUrl_UserName1(QUrl* self, int options, char** _out, int* _out_Strlen) {
	QString ret = self->userName(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_SetPassword2(QUrl* self, const char* password, size_t password_Strlen, uintptr_t mode) {
	QString password_QString = QString::fromUtf8(password, password_Strlen);
	self->setPassword(password_QString, static_cast<QUrl::ParsingMode>(mode));
}

void QUrl_Password1(QUrl* self, int param1, char** _out, int* _out_Strlen) {
	QString ret = self->password(static_cast<QUrl::ComponentFormattingOptions>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_SetHost2(QUrl* self, const char* host, size_t host_Strlen, uintptr_t mode) {
	QString host_QString = QString::fromUtf8(host, host_Strlen);
	self->setHost(host_QString, static_cast<QUrl::ParsingMode>(mode));
}

void QUrl_Host1(QUrl* self, int param1, char** _out, int* _out_Strlen) {
	QString ret = self->host(static_cast<QUrl::ComponentFormattingOptions>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_TopLevelDomain1(QUrl* self, int options, char** _out, int* _out_Strlen) {
	QString ret = self->topLevelDomain(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QUrl_Port1(QUrl* self, int defaultPort) {
	return self->port(static_cast<int>(defaultPort));
}

void QUrl_SetPath2(QUrl* self, const char* path, size_t path_Strlen, uintptr_t mode) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	self->setPath(path_QString, static_cast<QUrl::ParsingMode>(mode));
}

void QUrl_Path1(QUrl* self, int options, char** _out, int* _out_Strlen) {
	QString ret = self->path(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_FileName1(QUrl* self, int options, char** _out, int* _out_Strlen) {
	QString ret = self->fileName(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_SetQuery2(QUrl* self, const char* query, size_t query_Strlen, uintptr_t mode) {
	QString query_QString = QString::fromUtf8(query, query_Strlen);
	self->setQuery(query_QString, static_cast<QUrl::ParsingMode>(mode));
}

void QUrl_Query1(QUrl* self, int param1, char** _out, int* _out_Strlen) {
	QString ret = self->query(static_cast<QUrl::ComponentFormattingOptions>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_Fragment1(QUrl* self, int options, char** _out, int* _out_Strlen) {
	QString ret = self->fragment(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrl_SetFragment2(QUrl* self, const char* fragment, size_t fragment_Strlen, uintptr_t mode) {
	QString fragment_QString = QString::fromUtf8(fragment, fragment_Strlen);
	self->setFragment(fragment_QString, static_cast<QUrl::ParsingMode>(mode));
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

void QUrl_FromStringList2(char** uris, uint64_t* uris_Lengths, size_t uris_len, uintptr_t mode, QUrl*** _out, size_t* _out_len) {
	QList<QString> uris_QList;
	uris_QList.reserve(uris_len);
	for(size_t i = 0; i < uris_len; ++i) {
		uris_QList.push_back(QString::fromUtf8(uris[i], uris_Lengths[i]));
	}
	QList<QUrl> ret = QUrl::fromStringList(uris_QList, static_cast<QUrl::ParsingMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QUrl** __out = static_cast<QUrl**>(malloc(sizeof(QUrl**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QUrl(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QUrl_Delete(QUrl* self) {
	delete self;
}

