#include <QByteArray>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qglobal.h>
#include "gen_qglobal.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

int miqt_QRoundWithDouble(double d) {

	return qRound(static_cast<double>(d));
}

int miqt_QRoundWithFloat(float f) {

	return qRound(static_cast<float>(f));
}

long long miqt_QRound64WithDouble(double d) {

	qint64 _ret = qRound64(static_cast<double>(d));
	return static_cast<long long>(_ret);
}

long long miqt_QRound64WithFloat(float f) {

	qint64 _ret = qRound64(static_cast<float>(f));
	return static_cast<long long>(_ret);
}

void miqt_Noop2() {

	qt_noop();
}

void miqt_QTerminate2() {

	qTerminate();
}

struct miqt_string miqt_ErrorStringWithErrorCode(int errorCode) {

	QString _ret = qt_error_string(static_cast<int>(errorCode));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void miqt_Assert2(const char* assertion, const char* file, int line) {

	qt_assert(assertion, file, static_cast<int>(line));
}

void miqt_AssertX2(const char* where, const char* what, const char* file, int line) {

	qt_assert_x(where, what, file, static_cast<int>(line));
}

void miqt_CheckPointer2(const char* param1, int param2) {

	qt_check_pointer(param1, static_cast<int>(param2));
}

void miqt_QBadAlloc2() {

	qBadAlloc();
}

bool miqt_QFuzzyCompare3(double p1, double p2) {

	return qFuzzyCompare(static_cast<double>(p1), static_cast<double>(p2));
}

bool miqt_QFuzzyCompare4(float p1, float p2) {

	return qFuzzyCompare(static_cast<float>(p1), static_cast<float>(p2));
}

bool miqt_QFuzzyIsNullWithDouble(double d) {

	return qFuzzyIsNull(static_cast<double>(d));
}

bool miqt_QFuzzyIsNullWithFloat(float f) {

	return qFuzzyIsNull(static_cast<float>(f));
}

bool miqt_QIsNullWithDouble(double d) {

	return qIsNull(static_cast<double>(d));
}

bool miqt_QIsNullWithFloat(float f) {

	return qIsNull(static_cast<float>(f));
}

void* miqt_QMallocAligned2(size_t size, size_t alignment) {

	return qMallocAligned(static_cast<size_t>(size), static_cast<size_t>(alignment));
}

void* miqt_QReallocAligned2(void* ptr, size_t size, size_t oldsize, size_t alignment) {

	return qReallocAligned(ptr, static_cast<size_t>(size), static_cast<size_t>(oldsize), static_cast<size_t>(alignment));
}

void miqt_QFreeAlignedWithPtr(void* ptr) {

	qFreeAligned(ptr);
}

struct miqt_string miqt_QtTrId2(const char* id, int n) {

	QString _ret = qtTrId(id, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string miqt_QgetenvWithVarName(const char* varName) {

	QByteArray _qb = qgetenv(varName);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string miqt_QEnvironmentVariableWithVarName(const char* varName) {

	QString _ret = qEnvironmentVariable(varName);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string miqt_QEnvironmentVariable2(const char* varName, struct miqt_string defaultValue) {
	QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);

	QString _ret = qEnvironmentVariable(varName, defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool miqt_Qputenv2(const char* varName, struct miqt_string value) {
	QByteArray value_QByteArray(value.data, value.len);

	return qputenv(varName, value_QByteArray);
}

bool miqt_QunsetenvWithVarName(const char* varName) {

	return qunsetenv(varName);
}

bool miqt_QEnvironmentVariableIsEmptyWithVarName(const char* varName) {

	return qEnvironmentVariableIsEmpty(varName);
}

bool miqt_QEnvironmentVariableIsSetWithVarName(const char* varName) {

	return qEnvironmentVariableIsSet(varName);
}

int miqt_QEnvironmentVariableIntValue2(const char* varName, bool* ok) {

	return qEnvironmentVariableIntValue(varName, ok);
}

int miqt_QIntCastWithDouble(double f) {

	return qIntCast(static_cast<double>(f));
}

int miqt_QIntCastWithFloat(float f) {

	return qIntCast(static_cast<float>(f));
}

