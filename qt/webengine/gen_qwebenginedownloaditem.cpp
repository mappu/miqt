#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineDownloadItem>
#include <QWebEnginePage>
#include <qwebenginedownloaditem.h>
#include "gen_qwebenginedownloaditem.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWebEngineDownloadItem_Finished(intptr_t);
void miqt_exec_callback_QWebEngineDownloadItem_StateChanged(intptr_t, int);
void miqt_exec_callback_QWebEngineDownloadItem_DownloadProgress(intptr_t, long long, long long);
void miqt_exec_callback_QWebEngineDownloadItem_IsPausedChanged(intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

void QWebEngineDownloadItem_virtbase(QWebEngineDownloadItem* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebEngineDownloadItem_MetaObject(const QWebEngineDownloadItem* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineDownloadItem_Metacast(QWebEngineDownloadItem* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineDownloadItem_Tr(const char* s) {
	QString _ret = QWebEngineDownloadItem::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineDownloadItem_TrUtf8(const char* s) {
	QString _ret = QWebEngineDownloadItem::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned int QWebEngineDownloadItem_Id(const QWebEngineDownloadItem* self) {
	quint32 _ret = self->id();
	return static_cast<unsigned int>(_ret);
}

int QWebEngineDownloadItem_State(const QWebEngineDownloadItem* self) {
	QWebEngineDownloadItem::DownloadState _ret = self->state();
	return static_cast<int>(_ret);
}

long long QWebEngineDownloadItem_TotalBytes(const QWebEngineDownloadItem* self) {
	qint64 _ret = self->totalBytes();
	return static_cast<long long>(_ret);
}

long long QWebEngineDownloadItem_ReceivedBytes(const QWebEngineDownloadItem* self) {
	qint64 _ret = self->receivedBytes();
	return static_cast<long long>(_ret);
}

QUrl* QWebEngineDownloadItem_Url(const QWebEngineDownloadItem* self) {
	return new QUrl(self->url());
}

struct miqt_string QWebEngineDownloadItem_MimeType(const QWebEngineDownloadItem* self) {
	QString _ret = self->mimeType();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineDownloadItem_Path(const QWebEngineDownloadItem* self) {
	QString _ret = self->path();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineDownloadItem_SetPath(QWebEngineDownloadItem* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->setPath(path_QString);
}

bool QWebEngineDownloadItem_IsFinished(const QWebEngineDownloadItem* self) {
	return self->isFinished();
}

bool QWebEngineDownloadItem_IsPaused(const QWebEngineDownloadItem* self) {
	return self->isPaused();
}

int QWebEngineDownloadItem_SavePageFormat(const QWebEngineDownloadItem* self) {
	QWebEngineDownloadItem::SavePageFormat _ret = self->savePageFormat();
	return static_cast<int>(_ret);
}

void QWebEngineDownloadItem_SetSavePageFormat(QWebEngineDownloadItem* self, int format) {
	self->setSavePageFormat(static_cast<QWebEngineDownloadItem::SavePageFormat>(format));
}

int QWebEngineDownloadItem_Type(const QWebEngineDownloadItem* self) {
	QWebEngineDownloadItem::DownloadType _ret = self->type();
	return static_cast<int>(_ret);
}

int QWebEngineDownloadItem_InterruptReason(const QWebEngineDownloadItem* self) {
	QWebEngineDownloadItem::DownloadInterruptReason _ret = self->interruptReason();
	return static_cast<int>(_ret);
}

struct miqt_string QWebEngineDownloadItem_InterruptReasonString(const QWebEngineDownloadItem* self) {
	QString _ret = self->interruptReasonString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebEngineDownloadItem_IsSavePageDownload(const QWebEngineDownloadItem* self) {
	return self->isSavePageDownload();
}

struct miqt_string QWebEngineDownloadItem_SuggestedFileName(const QWebEngineDownloadItem* self) {
	QString _ret = self->suggestedFileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineDownloadItem_DownloadDirectory(const QWebEngineDownloadItem* self) {
	QString _ret = self->downloadDirectory();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineDownloadItem_SetDownloadDirectory(QWebEngineDownloadItem* self, struct miqt_string directory) {
	QString directory_QString = QString::fromUtf8(directory.data, directory.len);
	self->setDownloadDirectory(directory_QString);
}

struct miqt_string QWebEngineDownloadItem_DownloadFileName(const QWebEngineDownloadItem* self) {
	QString _ret = self->downloadFileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineDownloadItem_SetDownloadFileName(QWebEngineDownloadItem* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setDownloadFileName(fileName_QString);
}

QWebEnginePage* QWebEngineDownloadItem_Page(const QWebEngineDownloadItem* self) {
	return self->page();
}

void QWebEngineDownloadItem_Accept(QWebEngineDownloadItem* self) {
	self->accept();
}

void QWebEngineDownloadItem_Cancel(QWebEngineDownloadItem* self) {
	self->cancel();
}

void QWebEngineDownloadItem_Pause(QWebEngineDownloadItem* self) {
	self->pause();
}

void QWebEngineDownloadItem_Resume(QWebEngineDownloadItem* self) {
	self->resume();
}

void QWebEngineDownloadItem_Finished(QWebEngineDownloadItem* self) {
	self->finished();
}

void QWebEngineDownloadItem_connect_Finished(QWebEngineDownloadItem* self, intptr_t slot) {
	QWebEngineDownloadItem::connect(self, static_cast<void (QWebEngineDownloadItem::*)()>(&QWebEngineDownloadItem::finished), self, [=]() {
		miqt_exec_callback_QWebEngineDownloadItem_Finished(slot);
	});
}

void QWebEngineDownloadItem_StateChanged(QWebEngineDownloadItem* self, int state) {
	self->stateChanged(static_cast<QWebEngineDownloadItem::DownloadState>(state));
}

void QWebEngineDownloadItem_connect_StateChanged(QWebEngineDownloadItem* self, intptr_t slot) {
	QWebEngineDownloadItem::connect(self, static_cast<void (QWebEngineDownloadItem::*)(QWebEngineDownloadItem::DownloadState)>(&QWebEngineDownloadItem::stateChanged), self, [=](QWebEngineDownloadItem::DownloadState state) {
		QWebEngineDownloadItem::DownloadState state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QWebEngineDownloadItem_StateChanged(slot, sigval1);
	});
}

void QWebEngineDownloadItem_DownloadProgress(QWebEngineDownloadItem* self, long long bytesReceived, long long bytesTotal) {
	self->downloadProgress(static_cast<qint64>(bytesReceived), static_cast<qint64>(bytesTotal));
}

void QWebEngineDownloadItem_connect_DownloadProgress(QWebEngineDownloadItem* self, intptr_t slot) {
	QWebEngineDownloadItem::connect(self, static_cast<void (QWebEngineDownloadItem::*)(qint64, qint64)>(&QWebEngineDownloadItem::downloadProgress), self, [=](qint64 bytesReceived, qint64 bytesTotal) {
		qint64 bytesReceived_ret = bytesReceived;
		long long sigval1 = static_cast<long long>(bytesReceived_ret);
		qint64 bytesTotal_ret = bytesTotal;
		long long sigval2 = static_cast<long long>(bytesTotal_ret);
		miqt_exec_callback_QWebEngineDownloadItem_DownloadProgress(slot, sigval1, sigval2);
	});
}

void QWebEngineDownloadItem_IsPausedChanged(QWebEngineDownloadItem* self, bool isPaused) {
	self->isPausedChanged(isPaused);
}

void QWebEngineDownloadItem_connect_IsPausedChanged(QWebEngineDownloadItem* self, intptr_t slot) {
	QWebEngineDownloadItem::connect(self, static_cast<void (QWebEngineDownloadItem::*)(bool)>(&QWebEngineDownloadItem::isPausedChanged), self, [=](bool isPaused) {
		bool sigval1 = isPaused;
		miqt_exec_callback_QWebEngineDownloadItem_IsPausedChanged(slot, sigval1);
	});
}

struct miqt_string QWebEngineDownloadItem_Tr2(const char* s, const char* c) {
	QString _ret = QWebEngineDownloadItem::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineDownloadItem_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineDownloadItem::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineDownloadItem_TrUtf82(const char* s, const char* c) {
	QString _ret = QWebEngineDownloadItem::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineDownloadItem_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebEngineDownloadItem::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineDownloadItem_Delete(QWebEngineDownloadItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebEngineDownloadItem*>( self );
	} else {
		delete self;
	}
}

