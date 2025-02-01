#include <QByteArray>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QUrlQuery>
#include <qurl.h>
#include "gen_qurl.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QUrl* QUrl_new() {
	return new QUrl();
}

QUrl* QUrl_new2(QUrl* copy) {
	return new QUrl(*copy);
}

QUrl* QUrl_new3(struct miqt_string url) {
	QString url_QString = QString::fromUtf8(url.data, url.len);
	return new QUrl(url_QString);
}

QUrl* QUrl_new4(struct miqt_string url, int mode) {
	QString url_QString = QString::fromUtf8(url.data, url.len);
	return new QUrl(url_QString, static_cast<QUrl::ParsingMode>(mode));
}

void QUrl_operatorAssign(QUrl* self, QUrl* copy) {
	self->operator=(*copy);
}

void QUrl_operatorAssignWithUrl(QUrl* self, struct miqt_string url) {
	QString url_QString = QString::fromUtf8(url.data, url.len);
	self->operator=(url_QString);
}

void QUrl_swap(QUrl* self, QUrl* other) {
	self->swap(*other);
}

void QUrl_setUrl(QUrl* self, struct miqt_string url) {
	QString url_QString = QString::fromUtf8(url.data, url.len);
	self->setUrl(url_QString);
}

struct miqt_string QUrl_url(const QUrl* self) {
	QString _ret = self->url();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_toString(const QUrl* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_toDisplayString(const QUrl* self) {
	QString _ret = self->toDisplayString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_toEncoded(const QUrl* self) {
	QByteArray _qb = self->toEncoded();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QUrl* QUrl_fromEncoded(struct miqt_string url) {
	QByteArray url_QByteArray(url.data, url.len);
	return new QUrl(QUrl::fromEncoded(url_QByteArray));
}

QUrl* QUrl_fromUserInput(struct miqt_string userInput) {
	QString userInput_QString = QString::fromUtf8(userInput.data, userInput.len);
	return new QUrl(QUrl::fromUserInput(userInput_QString));
}

QUrl* QUrl_fromUserInput2(struct miqt_string userInput, struct miqt_string workingDirectory) {
	QString userInput_QString = QString::fromUtf8(userInput.data, userInput.len);
	QString workingDirectory_QString = QString::fromUtf8(workingDirectory.data, workingDirectory.len);
	return new QUrl(QUrl::fromUserInput(userInput_QString, workingDirectory_QString));
}

bool QUrl_isValid(const QUrl* self) {
	return self->isValid();
}

struct miqt_string QUrl_errorString(const QUrl* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QUrl_isEmpty(const QUrl* self) {
	return self->isEmpty();
}

void QUrl_clear(QUrl* self) {
	self->clear();
}

void QUrl_setScheme(QUrl* self, struct miqt_string scheme) {
	QString scheme_QString = QString::fromUtf8(scheme.data, scheme.len);
	self->setScheme(scheme_QString);
}

struct miqt_string QUrl_scheme(const QUrl* self) {
	QString _ret = self->scheme();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setAuthority(QUrl* self, struct miqt_string authority) {
	QString authority_QString = QString::fromUtf8(authority.data, authority.len);
	self->setAuthority(authority_QString);
}

struct miqt_string QUrl_authority(const QUrl* self) {
	QString _ret = self->authority();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setUserInfo(QUrl* self, struct miqt_string userInfo) {
	QString userInfo_QString = QString::fromUtf8(userInfo.data, userInfo.len);
	self->setUserInfo(userInfo_QString);
}

struct miqt_string QUrl_userInfo(const QUrl* self) {
	QString _ret = self->userInfo();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setUserName(QUrl* self, struct miqt_string userName) {
	QString userName_QString = QString::fromUtf8(userName.data, userName.len);
	self->setUserName(userName_QString);
}

struct miqt_string QUrl_userName(const QUrl* self) {
	QString _ret = self->userName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setPassword(QUrl* self, struct miqt_string password) {
	QString password_QString = QString::fromUtf8(password.data, password.len);
	self->setPassword(password_QString);
}

struct miqt_string QUrl_password(const QUrl* self) {
	QString _ret = self->password();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setHost(QUrl* self, struct miqt_string host) {
	QString host_QString = QString::fromUtf8(host.data, host.len);
	self->setHost(host_QString);
}

struct miqt_string QUrl_host(const QUrl* self) {
	QString _ret = self->host();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_topLevelDomain(const QUrl* self) {
	QString _ret = self->topLevelDomain();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setPort(QUrl* self, int port) {
	self->setPort(static_cast<int>(port));
}

int QUrl_port(const QUrl* self) {
	return self->port();
}

void QUrl_setPath(QUrl* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->setPath(path_QString);
}

struct miqt_string QUrl_path(const QUrl* self) {
	QString _ret = self->path();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_fileName(const QUrl* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QUrl_hasQuery(const QUrl* self) {
	return self->hasQuery();
}

void QUrl_setQuery(QUrl* self, struct miqt_string query) {
	QString query_QString = QString::fromUtf8(query.data, query.len);
	self->setQuery(query_QString);
}

void QUrl_setQueryWithQuery(QUrl* self, QUrlQuery* query) {
	self->setQuery(*query);
}

struct miqt_string QUrl_query(const QUrl* self) {
	QString _ret = self->query();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QUrl_hasFragment(const QUrl* self) {
	return self->hasFragment();
}

struct miqt_string QUrl_fragment(const QUrl* self) {
	QString _ret = self->fragment();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setFragment(QUrl* self, struct miqt_string fragment) {
	QString fragment_QString = QString::fromUtf8(fragment.data, fragment.len);
	self->setFragment(fragment_QString);
}

QUrl* QUrl_resolved(const QUrl* self, QUrl* relative) {
	return new QUrl(self->resolved(*relative));
}

bool QUrl_isRelative(const QUrl* self) {
	return self->isRelative();
}

bool QUrl_isParentOf(const QUrl* self, QUrl* url) {
	return self->isParentOf(*url);
}

bool QUrl_isLocalFile(const QUrl* self) {
	return self->isLocalFile();
}

QUrl* QUrl_fromLocalFile(struct miqt_string localfile) {
	QString localfile_QString = QString::fromUtf8(localfile.data, localfile.len);
	return new QUrl(QUrl::fromLocalFile(localfile_QString));
}

struct miqt_string QUrl_toLocalFile(const QUrl* self) {
	QString _ret = self->toLocalFile();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_detach(QUrl* self) {
	self->detach();
}

bool QUrl_isDetached(const QUrl* self) {
	return self->isDetached();
}

bool QUrl_operatorLesser(const QUrl* self, QUrl* url) {
	return (*self < *url);
}

bool QUrl_operatorEqual(const QUrl* self, QUrl* url) {
	return (*self == *url);
}

bool QUrl_operatorNotEqual(const QUrl* self, QUrl* url) {
	return (*self != *url);
}

struct miqt_string QUrl_fromPercentEncoding(struct miqt_string param1) {
	QByteArray param1_QByteArray(param1.data, param1.len);
	QString _ret = QUrl::fromPercentEncoding(param1_QByteArray);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_toPercentEncoding(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QByteArray _qb = QUrl::toPercentEncoding(param1_QString);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_fromAce(struct miqt_string param1) {
	QByteArray param1_QByteArray(param1.data, param1.len);
	QString _ret = QUrl::fromAce(param1_QByteArray);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_toAce(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QByteArray _qb = QUrl::toAce(param1_QString);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QUrl_idnWhitelist() {
	QStringList _ret = QUrl::idnWhitelist();
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

struct miqt_array /* of struct miqt_string */  QUrl_toStringList(struct miqt_array /* of QUrl* */  uris) {
	QList<QUrl> uris_QList;
	uris_QList.reserve(uris.len);
	QUrl** uris_arr = static_cast<QUrl**>(uris.data);
	for(size_t i = 0; i < uris.len; ++i) {
		uris_QList.push_back(*(uris_arr[i]));
	}
	QStringList _ret = QUrl::toStringList(uris_QList);
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

struct miqt_array /* of QUrl* */  QUrl_fromStringList(struct miqt_array /* of struct miqt_string */  uris) {
	QStringList uris_QList;
	uris_QList.reserve(uris.len);
	struct miqt_string* uris_arr = static_cast<struct miqt_string*>(uris.data);
	for(size_t i = 0; i < uris.len; ++i) {
		QString uris_arr_i_QString = QString::fromUtf8(uris_arr[i].data, uris_arr[i].len);
		uris_QList.push_back(uris_arr_i_QString);
	}
	QList<QUrl> _ret = QUrl::fromStringList(uris_QList);
	// Convert QList<> from C++ memory to manually-managed C memory
	QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QUrl(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QUrl_setIdnWhitelist(struct miqt_array /* of struct miqt_string */  idnWhitelist) {
	QStringList idnWhitelist_QList;
	idnWhitelist_QList.reserve(idnWhitelist.len);
	struct miqt_string* idnWhitelist_arr = static_cast<struct miqt_string*>(idnWhitelist.data);
	for(size_t i = 0; i < idnWhitelist.len; ++i) {
		QString idnWhitelist_arr_i_QString = QString::fromUtf8(idnWhitelist_arr[i].data, idnWhitelist_arr[i].len);
		idnWhitelist_QList.push_back(idnWhitelist_arr_i_QString);
	}
	QUrl::setIdnWhitelist(idnWhitelist_QList);
}

void QUrl_setUrl2(QUrl* self, struct miqt_string url, int mode) {
	QString url_QString = QString::fromUtf8(url.data, url.len);
	self->setUrl(url_QString, static_cast<QUrl::ParsingMode>(mode));
}

QUrl* QUrl_fromEncoded2(struct miqt_string url, int mode) {
	QByteArray url_QByteArray(url.data, url.len);
	return new QUrl(QUrl::fromEncoded(url_QByteArray, static_cast<QUrl::ParsingMode>(mode)));
}

QUrl* QUrl_fromUserInput3(struct miqt_string userInput, struct miqt_string workingDirectory, int options) {
	QString userInput_QString = QString::fromUtf8(userInput.data, userInput.len);
	QString workingDirectory_QString = QString::fromUtf8(workingDirectory.data, workingDirectory.len);
	return new QUrl(QUrl::fromUserInput(userInput_QString, workingDirectory_QString, static_cast<QUrl::UserInputResolutionOptions>(options)));
}

void QUrl_setAuthority2(QUrl* self, struct miqt_string authority, int mode) {
	QString authority_QString = QString::fromUtf8(authority.data, authority.len);
	self->setAuthority(authority_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string QUrl_authority1(const QUrl* self, int options) {
	QString _ret = self->authority(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setUserInfo2(QUrl* self, struct miqt_string userInfo, int mode) {
	QString userInfo_QString = QString::fromUtf8(userInfo.data, userInfo.len);
	self->setUserInfo(userInfo_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string QUrl_userInfo1(const QUrl* self, int options) {
	QString _ret = self->userInfo(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setUserName2(QUrl* self, struct miqt_string userName, int mode) {
	QString userName_QString = QString::fromUtf8(userName.data, userName.len);
	self->setUserName(userName_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string QUrl_userName1(const QUrl* self, int options) {
	QString _ret = self->userName(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setPassword2(QUrl* self, struct miqt_string password, int mode) {
	QString password_QString = QString::fromUtf8(password.data, password.len);
	self->setPassword(password_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string QUrl_password1(const QUrl* self, int param1) {
	QString _ret = self->password(static_cast<QUrl::ComponentFormattingOptions>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setHost2(QUrl* self, struct miqt_string host, int mode) {
	QString host_QString = QString::fromUtf8(host.data, host.len);
	self->setHost(host_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string QUrl_host1(const QUrl* self, int param1) {
	QString _ret = self->host(static_cast<QUrl::ComponentFormattingOptions>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_topLevelDomain1(const QUrl* self, int options) {
	QString _ret = self->topLevelDomain(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QUrl_port1(const QUrl* self, int defaultPort) {
	return self->port(static_cast<int>(defaultPort));
}

void QUrl_setPath2(QUrl* self, struct miqt_string path, int mode) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->setPath(path_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string QUrl_path1(const QUrl* self, int options) {
	QString _ret = self->path(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_fileName1(const QUrl* self, int options) {
	QString _ret = self->fileName(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setQuery2(QUrl* self, struct miqt_string query, int mode) {
	QString query_QString = QString::fromUtf8(query.data, query.len);
	self->setQuery(query_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string QUrl_query1(const QUrl* self, int param1) {
	QString _ret = self->query(static_cast<QUrl::ComponentFormattingOptions>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_fragment1(const QUrl* self, int options) {
	QString _ret = self->fragment(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setFragment2(QUrl* self, struct miqt_string fragment, int mode) {
	QString fragment_QString = QString::fromUtf8(fragment.data, fragment.len);
	self->setFragment(fragment_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string QUrl_toPercentEncoding2(struct miqt_string param1, struct miqt_string exclude) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QByteArray exclude_QByteArray(exclude.data, exclude.len);
	QByteArray _qb = QUrl::toPercentEncoding(param1_QString, exclude_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_toPercentEncoding3(struct miqt_string param1, struct miqt_string exclude, struct miqt_string include) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QByteArray exclude_QByteArray(exclude.data, exclude.len);
	QByteArray include_QByteArray(include.data, include.len);
	QByteArray _qb = QUrl::toPercentEncoding(param1_QString, exclude_QByteArray, include_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QUrl* */  QUrl_fromStringList2(struct miqt_array /* of struct miqt_string */  uris, int mode) {
	QStringList uris_QList;
	uris_QList.reserve(uris.len);
	struct miqt_string* uris_arr = static_cast<struct miqt_string*>(uris.data);
	for(size_t i = 0; i < uris.len; ++i) {
		QString uris_arr_i_QString = QString::fromUtf8(uris_arr[i].data, uris_arr[i].len);
		uris_QList.push_back(uris_arr_i_QString);
	}
	QList<QUrl> _ret = QUrl::fromStringList(uris_QList, static_cast<QUrl::ParsingMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QUrl(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QUrl_delete(QUrl* self) {
	delete self;
}

