#include <QImageEncoderControl>
#include <QImageEncoderSettings>
#include <QList>
#include <QMediaControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qimageencodercontrol.h>
#include "gen_qimageencodercontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QImageEncoderControl_virtbase(QImageEncoderControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QImageEncoderControl_metaObject(const QImageEncoderControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QImageEncoderControl_metacast(QImageEncoderControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QImageEncoderControl_tr(const char* s) {
	QString _ret = QImageEncoderControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageEncoderControl_trUtf8(const char* s) {
	QString _ret = QImageEncoderControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QImageEncoderControl_supportedImageCodecs(const QImageEncoderControl* self) {
	QStringList _ret = self->supportedImageCodecs();
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

struct miqt_string QImageEncoderControl_imageCodecDescription(const QImageEncoderControl* self, struct miqt_string codec) {
	QString codec_QString = QString::fromUtf8(codec.data, codec.len);
	QString _ret = self->imageCodecDescription(codec_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QSize* */  QImageEncoderControl_supportedResolutions(const QImageEncoderControl* self, QImageEncoderSettings* settings, bool* continuous) {
	QList<QSize> _ret = self->supportedResolutions(*settings, continuous);
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QImageEncoderSettings* QImageEncoderControl_imageSettings(const QImageEncoderControl* self) {
	return new QImageEncoderSettings(self->imageSettings());
}

void QImageEncoderControl_setImageSettings(QImageEncoderControl* self, QImageEncoderSettings* settings) {
	self->setImageSettings(*settings);
}

struct miqt_string QImageEncoderControl_tr2(const char* s, const char* c) {
	QString _ret = QImageEncoderControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageEncoderControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QImageEncoderControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageEncoderControl_trUtf82(const char* s, const char* c) {
	QString _ret = QImageEncoderControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageEncoderControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QImageEncoderControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QImageEncoderControl_delete(QImageEncoderControl* self) {
	delete self;
}

