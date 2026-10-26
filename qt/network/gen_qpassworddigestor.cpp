#include <QByteArray>
#include <qpassworddigestor.h>
#include "gen_qpassworddigestor.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

struct miqt_string miqt_QPasswordDigestor_DeriveKeyPbkdf12(int algorithm, struct miqt_string password, struct miqt_string salt, int iterations, unsigned long long dkLen) {
	QByteArray password_QByteArray(password.data, password.len);
	QByteArray salt_QByteArray(salt.data, salt.len);

	QByteArray _qb = QPasswordDigestor::deriveKeyPbkdf1(static_cast<QCryptographicHash::Algorithm>(algorithm), password_QByteArray, salt_QByteArray, static_cast<int>(iterations), static_cast<quint64>(dkLen));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string miqt_QPasswordDigestor_DeriveKeyPbkdf22(int algorithm, struct miqt_string password, struct miqt_string salt, int iterations, unsigned long long dkLen) {
	QByteArray password_QByteArray(password.data, password.len);
	QByteArray salt_QByteArray(salt.data, salt.len);

	QByteArray _qb = QPasswordDigestor::deriveKeyPbkdf2(static_cast<QCryptographicHash::Algorithm>(algorithm), password_QByteArray, salt_QByteArray, static_cast<int>(iterations), static_cast<quint64>(dkLen));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

