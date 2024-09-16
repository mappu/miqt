#include <QByteArray>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QUrlQuery>
#include "qurl.h"
#include "gen_qurl.h"
#include "_cgo_export.h"

QUrl* QUrl_new() {
	return new QUrl();
}

QUrl* QUrl_new2(QUrl* copyVal) {
	return new QUrl(*copyVal);
}

QUrl* QUrl_new3(struct miqt_string* url) {
	QString url_QString = QString::fromUtf8(&url->data, url->len);
	return new QUrl(url_QString);
}

QUrl* QUrl_new4(struct miqt_string* url, uintptr_t mode) {
	QString url_QString = QString::fromUtf8(&url->data, url->len);
	return new QUrl(url_QString, static_cast<QUrl::ParsingMode>(mode));
}

void QUrl_OperatorAssign(QUrl* self, QUrl* copyVal) {
	self->operator=(*copyVal);
}

void QUrl_OperatorAssignWithUrl(QUrl* self, struct miqt_string* url) {
	QString url_QString = QString::fromUtf8(&url->data, url->len);
	self->operator=(url_QString);
}

void QUrl_Swap(QUrl* self, QUrl* other) {
	self->swap(*other);
}

void QUrl_SetUrl(QUrl* self, struct miqt_string* url) {
	QString url_QString = QString::fromUtf8(&url->data, url->len);
	self->setUrl(url_QString);
}

struct miqt_string* QUrl_Url(const QUrl* self) {
	QString _ret = self->url();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUrl_ToString(const QUrl* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUrl_ToDisplayString(const QUrl* self) {
	QString _ret = self->toDisplayString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QByteArray* QUrl_ToEncoded(const QUrl* self) {
	QByteArray _ret = self->toEncoded();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

QUrl* QUrl_FromEncoded(QByteArray* url) {
	QUrl _ret = QUrl::fromEncoded(*url);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(_ret));
}

QUrl* QUrl_FromUserInput(struct miqt_string* userInput) {
	QString userInput_QString = QString::fromUtf8(&userInput->data, userInput->len);
	QUrl _ret = QUrl::fromUserInput(userInput_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(_ret));
}

QUrl* QUrl_FromUserInput2(struct miqt_string* userInput, struct miqt_string* workingDirectory) {
	QString userInput_QString = QString::fromUtf8(&userInput->data, userInput->len);
	QString workingDirectory_QString = QString::fromUtf8(&workingDirectory->data, workingDirectory->len);
	QUrl _ret = QUrl::fromUserInput(userInput_QString, workingDirectory_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(_ret));
}

bool QUrl_IsValid(const QUrl* self) {
	return self->isValid();
}

struct miqt_string* QUrl_ErrorString(const QUrl* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QUrl_IsEmpty(const QUrl* self) {
	return self->isEmpty();
}

void QUrl_Clear(QUrl* self) {
	self->clear();
}

void QUrl_SetScheme(QUrl* self, struct miqt_string* scheme) {
	QString scheme_QString = QString::fromUtf8(&scheme->data, scheme->len);
	self->setScheme(scheme_QString);
}

struct miqt_string* QUrl_Scheme(const QUrl* self) {
	QString _ret = self->scheme();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUrl_SetAuthority(QUrl* self, struct miqt_string* authority) {
	QString authority_QString = QString::fromUtf8(&authority->data, authority->len);
	self->setAuthority(authority_QString);
}

struct miqt_string* QUrl_Authority(const QUrl* self) {
	QString _ret = self->authority();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUrl_SetUserInfo(QUrl* self, struct miqt_string* userInfo) {
	QString userInfo_QString = QString::fromUtf8(&userInfo->data, userInfo->len);
	self->setUserInfo(userInfo_QString);
}

struct miqt_string* QUrl_UserInfo(const QUrl* self) {
	QString _ret = self->userInfo();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUrl_SetUserName(QUrl* self, struct miqt_string* userName) {
	QString userName_QString = QString::fromUtf8(&userName->data, userName->len);
	self->setUserName(userName_QString);
}

struct miqt_string* QUrl_UserName(const QUrl* self) {
	QString _ret = self->userName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUrl_SetPassword(QUrl* self, struct miqt_string* password) {
	QString password_QString = QString::fromUtf8(&password->data, password->len);
	self->setPassword(password_QString);
}

struct miqt_string* QUrl_Password(const QUrl* self) {
	QString _ret = self->password();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUrl_SetHost(QUrl* self, struct miqt_string* host) {
	QString host_QString = QString::fromUtf8(&host->data, host->len);
	self->setHost(host_QString);
}

struct miqt_string* QUrl_Host(const QUrl* self) {
	QString _ret = self->host();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUrl_TopLevelDomain(const QUrl* self) {
	QString _ret = self->topLevelDomain();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUrl_SetPort(QUrl* self, int port) {
	self->setPort(static_cast<int>(port));
}

int QUrl_Port(const QUrl* self) {
	return self->port();
}

void QUrl_SetPath(QUrl* self, struct miqt_string* path) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	self->setPath(path_QString);
}

struct miqt_string* QUrl_Path(const QUrl* self) {
	QString _ret = self->path();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUrl_FileName(const QUrl* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QUrl_HasQuery(const QUrl* self) {
	return self->hasQuery();
}

void QUrl_SetQuery(QUrl* self, struct miqt_string* query) {
	QString query_QString = QString::fromUtf8(&query->data, query->len);
	self->setQuery(query_QString);
}

void QUrl_SetQueryWithQuery(QUrl* self, QUrlQuery* query) {
	self->setQuery(*query);
}

struct miqt_string* QUrl_Query(const QUrl* self) {
	QString _ret = self->query();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QUrl_HasFragment(const QUrl* self) {
	return self->hasFragment();
}

struct miqt_string* QUrl_Fragment(const QUrl* self) {
	QString _ret = self->fragment();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUrl_SetFragment(QUrl* self, struct miqt_string* fragment) {
	QString fragment_QString = QString::fromUtf8(&fragment->data, fragment->len);
	self->setFragment(fragment_QString);
}

QUrl* QUrl_Resolved(const QUrl* self, QUrl* relative) {
	QUrl _ret = self->resolved(*relative);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(_ret));
}

bool QUrl_IsRelative(const QUrl* self) {
	return self->isRelative();
}

bool QUrl_IsParentOf(const QUrl* self, QUrl* url) {
	return self->isParentOf(*url);
}

bool QUrl_IsLocalFile(const QUrl* self) {
	return self->isLocalFile();
}

QUrl* QUrl_FromLocalFile(struct miqt_string* localfile) {
	QString localfile_QString = QString::fromUtf8(&localfile->data, localfile->len);
	QUrl _ret = QUrl::fromLocalFile(localfile_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(_ret));
}

struct miqt_string* QUrl_ToLocalFile(const QUrl* self) {
	QString _ret = self->toLocalFile();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUrl_Detach(QUrl* self) {
	self->detach();
}

bool QUrl_IsDetached(const QUrl* self) {
	return self->isDetached();
}

bool QUrl_OperatorLesser(const QUrl* self, QUrl* url) {
	return self->operator<(*url);
}

bool QUrl_OperatorEqual(const QUrl* self, QUrl* url) {
	return self->operator==(*url);
}

bool QUrl_OperatorNotEqual(const QUrl* self, QUrl* url) {
	return self->operator!=(*url);
}

struct miqt_string* QUrl_FromPercentEncoding(QByteArray* param1) {
	QString _ret = QUrl::fromPercentEncoding(*param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QByteArray* QUrl_ToPercentEncoding(struct miqt_string* param1) {
	QString param1_QString = QString::fromUtf8(&param1->data, param1->len);
	QByteArray _ret = QUrl::toPercentEncoding(param1_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

struct miqt_string* QUrl_FromAce(QByteArray* param1) {
	QString _ret = QUrl::fromAce(*param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QByteArray* QUrl_ToAce(struct miqt_string* param1) {
	QString param1_QString = QString::fromUtf8(&param1->data, param1->len);
	QByteArray _ret = QUrl::toAce(param1_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

struct miqt_array* QUrl_IdnWhitelist() {
	QStringList _ret = QUrl::idnWhitelist();
	// Convert QStringList from C++ memory to manually-managed C memory
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

struct miqt_array* QUrl_ToStringList(struct miqt_array* /* of QUrl* */ uris) {
	QList<QUrl> uris_QList;
	uris_QList.reserve(uris->len);
	QUrl** uris_arr = static_cast<QUrl**>(uris->data);
	for(size_t i = 0; i < uris->len; ++i) {
		uris_QList.push_back(*(uris_arr[i]));
	}
	QStringList _ret = QUrl::toStringList(uris_QList);
	// Convert QStringList from C++ memory to manually-managed C memory
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

struct miqt_array* QUrl_FromStringList(struct miqt_array* /* of struct miqt_string* */ uris) {
	QList<QString> uris_QList;
	uris_QList.reserve(uris->len);
	miqt_string** uris_arr = static_cast<miqt_string**>(uris->data);
	for(size_t i = 0; i < uris->len; ++i) {
		uris_QList.push_back(QString::fromUtf8(& uris_arr[i]->data, uris_arr[i]->len));
	}
	QList<QUrl> _ret = QUrl::fromStringList(uris_QList);
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QUrl(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QUrl_SetIdnWhitelist(struct miqt_array* /* of struct miqt_string* */ idnWhitelist) {
	QList<QString> idnWhitelist_QList;
	idnWhitelist_QList.reserve(idnWhitelist->len);
	miqt_string** idnWhitelist_arr = static_cast<miqt_string**>(idnWhitelist->data);
	for(size_t i = 0; i < idnWhitelist->len; ++i) {
		idnWhitelist_QList.push_back(QString::fromUtf8(& idnWhitelist_arr[i]->data, idnWhitelist_arr[i]->len));
	}
	QUrl::setIdnWhitelist(idnWhitelist_QList);
}

void QUrl_SetUrl2(QUrl* self, struct miqt_string* url, uintptr_t mode) {
	QString url_QString = QString::fromUtf8(&url->data, url->len);
	self->setUrl(url_QString, static_cast<QUrl::ParsingMode>(mode));
}

QUrl* QUrl_FromEncoded2(QByteArray* url, uintptr_t mode) {
	QUrl _ret = QUrl::fromEncoded(*url, static_cast<QUrl::ParsingMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(_ret));
}

QUrl* QUrl_FromUserInput3(struct miqt_string* userInput, struct miqt_string* workingDirectory, int options) {
	QString userInput_QString = QString::fromUtf8(&userInput->data, userInput->len);
	QString workingDirectory_QString = QString::fromUtf8(&workingDirectory->data, workingDirectory->len);
	QUrl _ret = QUrl::fromUserInput(userInput_QString, workingDirectory_QString, static_cast<QUrl::UserInputResolutionOptions>(options));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(_ret));
}

void QUrl_SetAuthority2(QUrl* self, struct miqt_string* authority, uintptr_t mode) {
	QString authority_QString = QString::fromUtf8(&authority->data, authority->len);
	self->setAuthority(authority_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string* QUrl_Authority1(const QUrl* self, int options) {
	QString _ret = self->authority(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUrl_SetUserInfo2(QUrl* self, struct miqt_string* userInfo, uintptr_t mode) {
	QString userInfo_QString = QString::fromUtf8(&userInfo->data, userInfo->len);
	self->setUserInfo(userInfo_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string* QUrl_UserInfo1(const QUrl* self, int options) {
	QString _ret = self->userInfo(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUrl_SetUserName2(QUrl* self, struct miqt_string* userName, uintptr_t mode) {
	QString userName_QString = QString::fromUtf8(&userName->data, userName->len);
	self->setUserName(userName_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string* QUrl_UserName1(const QUrl* self, int options) {
	QString _ret = self->userName(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUrl_SetPassword2(QUrl* self, struct miqt_string* password, uintptr_t mode) {
	QString password_QString = QString::fromUtf8(&password->data, password->len);
	self->setPassword(password_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string* QUrl_Password1(const QUrl* self, int param1) {
	QString _ret = self->password(static_cast<QUrl::ComponentFormattingOptions>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUrl_SetHost2(QUrl* self, struct miqt_string* host, uintptr_t mode) {
	QString host_QString = QString::fromUtf8(&host->data, host->len);
	self->setHost(host_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string* QUrl_Host1(const QUrl* self, int param1) {
	QString _ret = self->host(static_cast<QUrl::ComponentFormattingOptions>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUrl_TopLevelDomain1(const QUrl* self, int options) {
	QString _ret = self->topLevelDomain(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QUrl_Port1(const QUrl* self, int defaultPort) {
	return self->port(static_cast<int>(defaultPort));
}

void QUrl_SetPath2(QUrl* self, struct miqt_string* path, uintptr_t mode) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	self->setPath(path_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string* QUrl_Path1(const QUrl* self, int options) {
	QString _ret = self->path(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUrl_FileName1(const QUrl* self, int options) {
	QString _ret = self->fileName(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUrl_SetQuery2(QUrl* self, struct miqt_string* query, uintptr_t mode) {
	QString query_QString = QString::fromUtf8(&query->data, query->len);
	self->setQuery(query_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string* QUrl_Query1(const QUrl* self, int param1) {
	QString _ret = self->query(static_cast<QUrl::ComponentFormattingOptions>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUrl_Fragment1(const QUrl* self, int options) {
	QString _ret = self->fragment(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUrl_SetFragment2(QUrl* self, struct miqt_string* fragment, uintptr_t mode) {
	QString fragment_QString = QString::fromUtf8(&fragment->data, fragment->len);
	self->setFragment(fragment_QString, static_cast<QUrl::ParsingMode>(mode));
}

QByteArray* QUrl_ToPercentEncoding2(struct miqt_string* param1, QByteArray* exclude) {
	QString param1_QString = QString::fromUtf8(&param1->data, param1->len);
	QByteArray _ret = QUrl::toPercentEncoding(param1_QString, *exclude);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

QByteArray* QUrl_ToPercentEncoding3(struct miqt_string* param1, QByteArray* exclude, QByteArray* include) {
	QString param1_QString = QString::fromUtf8(&param1->data, param1->len);
	QByteArray _ret = QUrl::toPercentEncoding(param1_QString, *exclude, *include);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

struct miqt_array* QUrl_FromStringList2(struct miqt_array* /* of struct miqt_string* */ uris, uintptr_t mode) {
	QList<QString> uris_QList;
	uris_QList.reserve(uris->len);
	miqt_string** uris_arr = static_cast<miqt_string**>(uris->data);
	for(size_t i = 0; i < uris->len; ++i) {
		uris_QList.push_back(QString::fromUtf8(& uris_arr[i]->data, uris_arr[i]->len));
	}
	QList<QUrl> _ret = QUrl::fromStringList(uris_QList, static_cast<QUrl::ParsingMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QUrl(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QUrl_Delete(QUrl* self) {
	delete self;
}

