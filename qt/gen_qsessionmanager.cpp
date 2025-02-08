#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSessionManager>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsessionmanager.h>
#include "gen_qsessionmanager.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QSessionManager_virtbase(QSessionManager* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QSessionManager_metaObject(const QSessionManager* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSessionManager_metacast(QSessionManager* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSessionManager_tr(const char* s) {
	QString _ret = QSessionManager::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSessionManager_trUtf8(const char* s) {
	QString _ret = QSessionManager::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSessionManager_sessionId(const QSessionManager* self) {
	QString _ret = self->sessionId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSessionManager_sessionKey(const QSessionManager* self) {
	QString _ret = self->sessionKey();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSessionManager_allowsInteraction(QSessionManager* self) {
	return self->allowsInteraction();
}

bool QSessionManager_allowsErrorInteraction(QSessionManager* self) {
	return self->allowsErrorInteraction();
}

void QSessionManager_release(QSessionManager* self) {
	self->release();
}

void QSessionManager_cancel(QSessionManager* self) {
	self->cancel();
}

void QSessionManager_setRestartHint(QSessionManager* self, int restartHint) {
	self->setRestartHint(static_cast<QSessionManager::RestartHint>(restartHint));
}

int QSessionManager_restartHint(const QSessionManager* self) {
	QSessionManager::RestartHint _ret = self->restartHint();
	return static_cast<int>(_ret);
}

void QSessionManager_setRestartCommand(QSessionManager* self, struct miqt_array /* of struct miqt_string */  restartCommand) {
	QStringList restartCommand_QList;
	restartCommand_QList.reserve(restartCommand.len);
	struct miqt_string* restartCommand_arr = static_cast<struct miqt_string*>(restartCommand.data);
	for(size_t i = 0; i < restartCommand.len; ++i) {
		QString restartCommand_arr_i_QString = QString::fromUtf8(restartCommand_arr[i].data, restartCommand_arr[i].len);
		restartCommand_QList.push_back(restartCommand_arr_i_QString);
	}
	self->setRestartCommand(restartCommand_QList);
}

struct miqt_array /* of struct miqt_string */  QSessionManager_restartCommand(const QSessionManager* self) {
	QStringList _ret = self->restartCommand();
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

void QSessionManager_setDiscardCommand(QSessionManager* self, struct miqt_array /* of struct miqt_string */  discardCommand) {
	QStringList discardCommand_QList;
	discardCommand_QList.reserve(discardCommand.len);
	struct miqt_string* discardCommand_arr = static_cast<struct miqt_string*>(discardCommand.data);
	for(size_t i = 0; i < discardCommand.len; ++i) {
		QString discardCommand_arr_i_QString = QString::fromUtf8(discardCommand_arr[i].data, discardCommand_arr[i].len);
		discardCommand_QList.push_back(discardCommand_arr_i_QString);
	}
	self->setDiscardCommand(discardCommand_QList);
}

struct miqt_array /* of struct miqt_string */  QSessionManager_discardCommand(const QSessionManager* self) {
	QStringList _ret = self->discardCommand();
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

void QSessionManager_setManagerProperty(QSessionManager* self, struct miqt_string name, struct miqt_string value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->setManagerProperty(name_QString, value_QString);
}

void QSessionManager_setManagerProperty2(QSessionManager* self, struct miqt_string name, struct miqt_array /* of struct miqt_string */  value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QStringList value_QList;
	value_QList.reserve(value.len);
	struct miqt_string* value_arr = static_cast<struct miqt_string*>(value.data);
	for(size_t i = 0; i < value.len; ++i) {
		QString value_arr_i_QString = QString::fromUtf8(value_arr[i].data, value_arr[i].len);
		value_QList.push_back(value_arr_i_QString);
	}
	self->setManagerProperty(name_QString, value_QList);
}

bool QSessionManager_isPhase2(const QSessionManager* self) {
	return self->isPhase2();
}

void QSessionManager_requestPhase2(QSessionManager* self) {
	self->requestPhase2();
}

struct miqt_string QSessionManager_tr2(const char* s, const char* c) {
	QString _ret = QSessionManager::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSessionManager_tr3(const char* s, const char* c, int n) {
	QString _ret = QSessionManager::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSessionManager_trUtf82(const char* s, const char* c) {
	QString _ret = QSessionManager::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSessionManager_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSessionManager::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

