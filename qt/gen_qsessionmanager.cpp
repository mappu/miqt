#include <QList>
#include <QMetaObject>
#include <QSessionManager>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qsessionmanager.h"

#include "gen_qsessionmanager.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QSessionManager_MetaObject(QSessionManager* self) {
	return (QMetaObject*) const_cast<const QSessionManager*>(self)->metaObject();
}

void QSessionManager_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSessionManager::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSessionManager_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSessionManager::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSessionManager_SessionId(QSessionManager* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QSessionManager*>(self)->sessionId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSessionManager_SessionKey(QSessionManager* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QSessionManager*>(self)->sessionKey();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QSessionManager_AllowsInteraction(QSessionManager* self) {
	return self->allowsInteraction();
}

bool QSessionManager_AllowsErrorInteraction(QSessionManager* self) {
	return self->allowsErrorInteraction();
}

void QSessionManager_Release(QSessionManager* self) {
	self->release();
}

void QSessionManager_Cancel(QSessionManager* self) {
	self->cancel();
}

void QSessionManager_SetRestartHint(QSessionManager* self, uintptr_t restartHint) {
	self->setRestartHint(static_cast<QSessionManager::RestartHint>(restartHint));
}

uintptr_t QSessionManager_RestartHint(QSessionManager* self) {
	QSessionManager::RestartHint ret = const_cast<const QSessionManager*>(self)->restartHint();
	return static_cast<uintptr_t>(ret);
}

void QSessionManager_SetRestartCommand(QSessionManager* self, char** restartCommand, uint64_t* restartCommand_Lengths, size_t restartCommand_len) {
	QList<QString> restartCommand_QList;
	restartCommand_QList.reserve(restartCommand_len);
	for(size_t i = 0; i < restartCommand_len; ++i) {
		restartCommand_QList.push_back(QString::fromUtf8(restartCommand[i], restartCommand_Lengths[i]));
	}
	self->setRestartCommand(restartCommand_QList);
}

void QSessionManager_RestartCommand(QSessionManager* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QSessionManager*>(self)->restartCommand();
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

void QSessionManager_SetDiscardCommand(QSessionManager* self, char** discardCommand, uint64_t* discardCommand_Lengths, size_t discardCommand_len) {
	QList<QString> discardCommand_QList;
	discardCommand_QList.reserve(discardCommand_len);
	for(size_t i = 0; i < discardCommand_len; ++i) {
		discardCommand_QList.push_back(QString::fromUtf8(discardCommand[i], discardCommand_Lengths[i]));
	}
	self->setDiscardCommand(discardCommand_QList);
}

void QSessionManager_DiscardCommand(QSessionManager* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QSessionManager*>(self)->discardCommand();
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

void QSessionManager_SetManagerProperty(QSessionManager* self, const char* name, size_t name_Strlen, const char* value, size_t value_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString value_QString = QString::fromUtf8(value, value_Strlen);
	self->setManagerProperty(name_QString, value_QString);
}

void QSessionManager_SetManagerProperty2(QSessionManager* self, const char* name, size_t name_Strlen, char** value, uint64_t* value_Lengths, size_t value_len) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QList<QString> value_QList;
	value_QList.reserve(value_len);
	for(size_t i = 0; i < value_len; ++i) {
		value_QList.push_back(QString::fromUtf8(value[i], value_Lengths[i]));
	}
	self->setManagerProperty(name_QString, value_QList);
}

bool QSessionManager_IsPhase2(QSessionManager* self) {
	return const_cast<const QSessionManager*>(self)->isPhase2();
}

void QSessionManager_RequestPhase2(QSessionManager* self) {
	self->requestPhase2();
}

void QSessionManager_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSessionManager::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSessionManager_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSessionManager::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSessionManager_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSessionManager::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSessionManager_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSessionManager::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

