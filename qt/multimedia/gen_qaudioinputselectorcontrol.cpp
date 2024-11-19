#include <QAudioInputSelectorControl>
#include <QList>
#include <QMediaControl>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudioinputselectorcontrol.h>
#include "gen_qaudioinputselectorcontrol.h"
#include "_cgo_export.h"

QMetaObject* QAudioInputSelectorControl_MetaObject(const QAudioInputSelectorControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioInputSelectorControl_Metacast(QAudioInputSelectorControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioInputSelectorControl_Tr(const char* s) {
	QString _ret = QAudioInputSelectorControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioInputSelectorControl_TrUtf8(const char* s) {
	QString _ret = QAudioInputSelectorControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QAudioInputSelectorControl_AvailableInputs(const QAudioInputSelectorControl* self) {
	QList<QString> _ret = self->availableInputs();
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

struct miqt_string QAudioInputSelectorControl_InputDescription(const QAudioInputSelectorControl* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString _ret = self->inputDescription(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioInputSelectorControl_DefaultInput(const QAudioInputSelectorControl* self) {
	QString _ret = self->defaultInput();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioInputSelectorControl_ActiveInput(const QAudioInputSelectorControl* self) {
	QString _ret = self->activeInput();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioInputSelectorControl_SetActiveInput(QAudioInputSelectorControl* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setActiveInput(name_QString);
}

void QAudioInputSelectorControl_ActiveInputChanged(QAudioInputSelectorControl* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->activeInputChanged(name_QString);
}

void QAudioInputSelectorControl_connect_ActiveInputChanged(QAudioInputSelectorControl* self, intptr_t slot) {
	QAudioInputSelectorControl::connect(self, static_cast<void (QAudioInputSelectorControl::*)(const QString&)>(&QAudioInputSelectorControl::activeInputChanged), self, [=](const QString& name) {
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		miqt_exec_callback_QAudioInputSelectorControl_ActiveInputChanged(slot, sigval1);
	});
}

void QAudioInputSelectorControl_AvailableInputsChanged(QAudioInputSelectorControl* self) {
	self->availableInputsChanged();
}

void QAudioInputSelectorControl_connect_AvailableInputsChanged(QAudioInputSelectorControl* self, intptr_t slot) {
	QAudioInputSelectorControl::connect(self, static_cast<void (QAudioInputSelectorControl::*)()>(&QAudioInputSelectorControl::availableInputsChanged), self, [=]() {
		miqt_exec_callback_QAudioInputSelectorControl_AvailableInputsChanged(slot);
	});
}

struct miqt_string QAudioInputSelectorControl_Tr2(const char* s, const char* c) {
	QString _ret = QAudioInputSelectorControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioInputSelectorControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioInputSelectorControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioInputSelectorControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QAudioInputSelectorControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioInputSelectorControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioInputSelectorControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioInputSelectorControl_Delete(QAudioInputSelectorControl* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAudioInputSelectorControl*>( self );
	} else {
		delete self;
	}
}

