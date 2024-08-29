#include <QByteArray>
#include <QList>
#include <QMetaObject>
#include <QMimeData>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include "qmimedata.h"

#include "gen_qmimedata.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMimeData* QMimeData_new() {
	return new QMimeData();
}

QMetaObject* QMimeData_MetaObject(QMimeData* self) {
	return (QMetaObject*) const_cast<const QMimeData*>(self)->metaObject();
}

void QMimeData_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QMimeData::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMimeData_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QMimeData::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMimeData_Urls(QMimeData* self, QUrl*** _out, size_t* _out_len) {
	QList<QUrl> ret = const_cast<const QMimeData*>(self)->urls();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QUrl** __out = static_cast<QUrl**>(malloc(sizeof(QUrl**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QUrl(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QMimeData_SetUrls(QMimeData* self, QUrl** urls, size_t urls_len) {
	QList<QUrl> urls_QList;
	urls_QList.reserve(urls_len);
	for(size_t i = 0; i < urls_len; ++i) {
		urls_QList.push_back(*(urls[i]));
	}
	self->setUrls(urls_QList);
}

bool QMimeData_HasUrls(QMimeData* self) {
	return const_cast<const QMimeData*>(self)->hasUrls();
}

void QMimeData_Text(QMimeData* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QMimeData*>(self)->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMimeData_SetText(QMimeData* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setText(text_QString);
}

bool QMimeData_HasText(QMimeData* self) {
	return const_cast<const QMimeData*>(self)->hasText();
}

void QMimeData_Html(QMimeData* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QMimeData*>(self)->html();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMimeData_SetHtml(QMimeData* self, const char* html, size_t html_Strlen) {
	QString html_QString = QString::fromUtf8(html, html_Strlen);
	self->setHtml(html_QString);
}

bool QMimeData_HasHtml(QMimeData* self) {
	return const_cast<const QMimeData*>(self)->hasHtml();
}

QVariant* QMimeData_ImageData(QMimeData* self) {
	QVariant ret = const_cast<const QMimeData*>(self)->imageData();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QMimeData_SetImageData(QMimeData* self, QVariant* image) {
	self->setImageData(*image);
}

bool QMimeData_HasImage(QMimeData* self) {
	return const_cast<const QMimeData*>(self)->hasImage();
}

QVariant* QMimeData_ColorData(QMimeData* self) {
	QVariant ret = const_cast<const QMimeData*>(self)->colorData();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QMimeData_SetColorData(QMimeData* self, QVariant* color) {
	self->setColorData(*color);
}

bool QMimeData_HasColor(QMimeData* self) {
	return const_cast<const QMimeData*>(self)->hasColor();
}

QByteArray* QMimeData_Data(QMimeData* self, const char* mimetype, size_t mimetype_Strlen) {
	QString mimetype_QString = QString::fromUtf8(mimetype, mimetype_Strlen);
	QByteArray ret = const_cast<const QMimeData*>(self)->data(mimetype_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QMimeData_SetData(QMimeData* self, const char* mimetype, size_t mimetype_Strlen, QByteArray* data) {
	QString mimetype_QString = QString::fromUtf8(mimetype, mimetype_Strlen);
	self->setData(mimetype_QString, *data);
}

void QMimeData_RemoveFormat(QMimeData* self, const char* mimetype, size_t mimetype_Strlen) {
	QString mimetype_QString = QString::fromUtf8(mimetype, mimetype_Strlen);
	self->removeFormat(mimetype_QString);
}

bool QMimeData_HasFormat(QMimeData* self, const char* mimetype, size_t mimetype_Strlen) {
	QString mimetype_QString = QString::fromUtf8(mimetype, mimetype_Strlen);
	return const_cast<const QMimeData*>(self)->hasFormat(mimetype_QString);
}

void QMimeData_Formats(QMimeData* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QMimeData*>(self)->formats();
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

void QMimeData_Clear(QMimeData* self) {
	self->clear();
}

void QMimeData_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QMimeData::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMimeData_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMimeData::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMimeData_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QMimeData::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMimeData_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMimeData::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMimeData_Delete(QMimeData* self) {
	delete self;
}

