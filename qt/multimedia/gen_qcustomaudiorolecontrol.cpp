#include <QCustomAudioRoleControl>
#include <QList>
#include <QMediaControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcustomaudiorolecontrol.h>
#include "gen_qcustomaudiorolecontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCustomAudioRoleControl_customAudioRoleChanged(intptr_t, struct miqt_string);
#ifdef __cplusplus
} /* extern C */
#endif

void QCustomAudioRoleControl_virtbase(QCustomAudioRoleControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QCustomAudioRoleControl_metaObject(const QCustomAudioRoleControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCustomAudioRoleControl_metacast(QCustomAudioRoleControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCustomAudioRoleControl_tr(const char* s) {
	QString _ret = QCustomAudioRoleControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCustomAudioRoleControl_trUtf8(const char* s) {
	QString _ret = QCustomAudioRoleControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCustomAudioRoleControl_customAudioRole(const QCustomAudioRoleControl* self) {
	QString _ret = self->customAudioRole();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCustomAudioRoleControl_setCustomAudioRole(QCustomAudioRoleControl* self, struct miqt_string role) {
	QString role_QString = QString::fromUtf8(role.data, role.len);
	self->setCustomAudioRole(role_QString);
}

struct miqt_array /* of struct miqt_string */  QCustomAudioRoleControl_supportedCustomAudioRoles(const QCustomAudioRoleControl* self) {
	QStringList _ret = self->supportedCustomAudioRoles();
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

void QCustomAudioRoleControl_customAudioRoleChanged(QCustomAudioRoleControl* self, struct miqt_string role) {
	QString role_QString = QString::fromUtf8(role.data, role.len);
	self->customAudioRoleChanged(role_QString);
}

void QCustomAudioRoleControl_connect_customAudioRoleChanged(QCustomAudioRoleControl* self, intptr_t slot) {
	QCustomAudioRoleControl::connect(self, static_cast<void (QCustomAudioRoleControl::*)(const QString&)>(&QCustomAudioRoleControl::customAudioRoleChanged), self, [=](const QString& role) {
		const QString role_ret = role;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray role_b = role_ret.toUtf8();
		struct miqt_string role_ms;
		role_ms.len = role_b.length();
		role_ms.data = static_cast<char*>(malloc(role_ms.len));
		memcpy(role_ms.data, role_b.data(), role_ms.len);
		struct miqt_string sigval1 = role_ms;
		miqt_exec_callback_QCustomAudioRoleControl_customAudioRoleChanged(slot, sigval1);
	});
}

struct miqt_string QCustomAudioRoleControl_tr2(const char* s, const char* c) {
	QString _ret = QCustomAudioRoleControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCustomAudioRoleControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QCustomAudioRoleControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCustomAudioRoleControl_trUtf82(const char* s, const char* c) {
	QString _ret = QCustomAudioRoleControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCustomAudioRoleControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCustomAudioRoleControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCustomAudioRoleControl_delete(QCustomAudioRoleControl* self) {
	delete self;
}

