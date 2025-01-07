#include <QAudioOutputSelectorControl>
#include <QList>
#include <QMediaControl>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudiooutputselectorcontrol.h>
#include "gen_qaudiooutputselectorcontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAudioOutputSelectorControl_ActiveOutputChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QAudioOutputSelectorControl_AvailableOutputsChanged(intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

void QAudioOutputSelectorControl_virtbase(QAudioOutputSelectorControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QAudioOutputSelectorControl_MetaObject(const QAudioOutputSelectorControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioOutputSelectorControl_Metacast(QAudioOutputSelectorControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioOutputSelectorControl_Tr(const char* s) {
	QString _ret = QAudioOutputSelectorControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioOutputSelectorControl_TrUtf8(const char* s) {
	QString _ret = QAudioOutputSelectorControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QAudioOutputSelectorControl_AvailableOutputs(const QAudioOutputSelectorControl* self) {
	QList<QString> _ret = self->availableOutputs();
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

struct miqt_string QAudioOutputSelectorControl_OutputDescription(const QAudioOutputSelectorControl* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString _ret = self->outputDescription(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioOutputSelectorControl_DefaultOutput(const QAudioOutputSelectorControl* self) {
	QString _ret = self->defaultOutput();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioOutputSelectorControl_ActiveOutput(const QAudioOutputSelectorControl* self) {
	QString _ret = self->activeOutput();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioOutputSelectorControl_SetActiveOutput(QAudioOutputSelectorControl* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setActiveOutput(name_QString);
}

void QAudioOutputSelectorControl_ActiveOutputChanged(QAudioOutputSelectorControl* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->activeOutputChanged(name_QString);
}

void QAudioOutputSelectorControl_connect_ActiveOutputChanged(QAudioOutputSelectorControl* self, intptr_t slot) {
	QAudioOutputSelectorControl::connect(self, static_cast<void (QAudioOutputSelectorControl::*)(const QString&)>(&QAudioOutputSelectorControl::activeOutputChanged), self, [=](const QString& name) {
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		miqt_exec_callback_QAudioOutputSelectorControl_ActiveOutputChanged(slot, sigval1);
	});
}

void QAudioOutputSelectorControl_AvailableOutputsChanged(QAudioOutputSelectorControl* self) {
	self->availableOutputsChanged();
}

void QAudioOutputSelectorControl_connect_AvailableOutputsChanged(QAudioOutputSelectorControl* self, intptr_t slot) {
	QAudioOutputSelectorControl::connect(self, static_cast<void (QAudioOutputSelectorControl::*)()>(&QAudioOutputSelectorControl::availableOutputsChanged), self, [=]() {
		miqt_exec_callback_QAudioOutputSelectorControl_AvailableOutputsChanged(slot);
	});
}

struct miqt_string QAudioOutputSelectorControl_Tr2(const char* s, const char* c) {
	QString _ret = QAudioOutputSelectorControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioOutputSelectorControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioOutputSelectorControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioOutputSelectorControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QAudioOutputSelectorControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioOutputSelectorControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioOutputSelectorControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioOutputSelectorControl_Delete(QAudioOutputSelectorControl* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAudioOutputSelectorControl*>( self );
	} else {
		delete self;
	}
}

