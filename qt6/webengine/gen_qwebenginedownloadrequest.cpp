#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineDownloadRequest>
#include <QWebEnginePage>
#include <qwebenginedownloadrequest.h>
#include "gen_qwebenginedownloadrequest.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

void QWebEngineDownloadRequest_virtbase(QWebEngineDownloadRequest* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebEngineDownloadRequest_MetaObject(const QWebEngineDownloadRequest* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineDownloadRequest_Metacast(QWebEngineDownloadRequest* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineDownloadRequest_Tr(const char* s) {
	QString _ret = QWebEngineDownloadRequest::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned int QWebEngineDownloadRequest_Id(const QWebEngineDownloadRequest* self) {
	quint32 _ret = self->id();
	return static_cast<unsigned int>(_ret);
}

int QWebEngineDownloadRequest_State(const QWebEngineDownloadRequest* self) {
	QWebEngineDownloadRequest::DownloadState _ret = self->state();
	return static_cast<int>(_ret);
}

long long QWebEngineDownloadRequest_TotalBytes(const QWebEngineDownloadRequest* self) {
	qint64 _ret = self->totalBytes();
	return static_cast<long long>(_ret);
}

long long QWebEngineDownloadRequest_ReceivedBytes(const QWebEngineDownloadRequest* self) {
	qint64 _ret = self->receivedBytes();
	return static_cast<long long>(_ret);
}

QUrl* QWebEngineDownloadRequest_Url(const QWebEngineDownloadRequest* self) {
	return new QUrl(self->url());
}

struct miqt_string QWebEngineDownloadRequest_MimeType(const QWebEngineDownloadRequest* self) {
	QString _ret = self->mimeType();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebEngineDownloadRequest_IsFinished(const QWebEngineDownloadRequest* self) {
	return self->isFinished();
}

bool QWebEngineDownloadRequest_IsPaused(const QWebEngineDownloadRequest* self) {
	return self->isPaused();
}

int QWebEngineDownloadRequest_SavePageFormat(const QWebEngineDownloadRequest* self) {
	QWebEngineDownloadRequest::SavePageFormat _ret = self->savePageFormat();
	return static_cast<int>(_ret);
}

void QWebEngineDownloadRequest_SetSavePageFormat(QWebEngineDownloadRequest* self, int format) {
	self->setSavePageFormat(static_cast<QWebEngineDownloadRequest::SavePageFormat>(format));
}

int QWebEngineDownloadRequest_InterruptReason(const QWebEngineDownloadRequest* self) {
	QWebEngineDownloadRequest::DownloadInterruptReason _ret = self->interruptReason();
	return static_cast<int>(_ret);
}

struct miqt_string QWebEngineDownloadRequest_InterruptReasonString(const QWebEngineDownloadRequest* self) {
	QString _ret = self->interruptReasonString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebEngineDownloadRequest_IsSavePageDownload(const QWebEngineDownloadRequest* self) {
	return self->isSavePageDownload();
}

struct miqt_string QWebEngineDownloadRequest_SuggestedFileName(const QWebEngineDownloadRequest* self) {
	QString _ret = self->suggestedFileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineDownloadRequest_DownloadDirectory(const QWebEngineDownloadRequest* self) {
	QString _ret = self->downloadDirectory();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineDownloadRequest_SetDownloadDirectory(QWebEngineDownloadRequest* self, struct miqt_string directory) {
	QString directory_QString = QString::fromUtf8(directory.data, directory.len);
	self->setDownloadDirectory(directory_QString);
}

struct miqt_string QWebEngineDownloadRequest_DownloadFileName(const QWebEngineDownloadRequest* self) {
	QString _ret = self->downloadFileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineDownloadRequest_SetDownloadFileName(QWebEngineDownloadRequest* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setDownloadFileName(fileName_QString);
}

QWebEnginePage* QWebEngineDownloadRequest_Page(const QWebEngineDownloadRequest* self) {
	return self->page();
}

void QWebEngineDownloadRequest_Accept(QWebEngineDownloadRequest* self) {
	self->accept();
}

void QWebEngineDownloadRequest_Cancel(QWebEngineDownloadRequest* self) {
	self->cancel();
}

void QWebEngineDownloadRequest_Pause(QWebEngineDownloadRequest* self) {
	self->pause();
}

void QWebEngineDownloadRequest_Resume(QWebEngineDownloadRequest* self) {
	self->resume();
}

void QWebEngineDownloadRequest_StateChanged(QWebEngineDownloadRequest* self, int state) {
	self->stateChanged(static_cast<QWebEngineDownloadRequest::DownloadState>(state));
}

void QWebEngineDownloadRequest_connect_StateChanged(QWebEngineDownloadRequest* self, intptr_t slot) {
	QWebEngineDownloadRequest::connect(self, static_cast<void (QWebEngineDownloadRequest::*)(QWebEngineDownloadRequest::DownloadState)>(&QWebEngineDownloadRequest::stateChanged), self, [=](QWebEngineDownloadRequest::DownloadState state) {
		QWebEngineDownloadRequest::DownloadState state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QWebEngineDownloadRequest_StateChanged(slot, sigval1);
	});
}

void QWebEngineDownloadRequest_SavePageFormatChanged(QWebEngineDownloadRequest* self) {
	self->savePageFormatChanged();
}

void QWebEngineDownloadRequest_connect_SavePageFormatChanged(QWebEngineDownloadRequest* self, intptr_t slot) {
	QWebEngineDownloadRequest::connect(self, static_cast<void (QWebEngineDownloadRequest::*)()>(&QWebEngineDownloadRequest::savePageFormatChanged), self, [=]() {
		miqt_exec_callback_QWebEngineDownloadRequest_SavePageFormatChanged(slot);
	});
}

void QWebEngineDownloadRequest_ReceivedBytesChanged(QWebEngineDownloadRequest* self) {
	self->receivedBytesChanged();
}

void QWebEngineDownloadRequest_connect_ReceivedBytesChanged(QWebEngineDownloadRequest* self, intptr_t slot) {
	QWebEngineDownloadRequest::connect(self, static_cast<void (QWebEngineDownloadRequest::*)()>(&QWebEngineDownloadRequest::receivedBytesChanged), self, [=]() {
		miqt_exec_callback_QWebEngineDownloadRequest_ReceivedBytesChanged(slot);
	});
}

void QWebEngineDownloadRequest_TotalBytesChanged(QWebEngineDownloadRequest* self) {
	self->totalBytesChanged();
}

void QWebEngineDownloadRequest_connect_TotalBytesChanged(QWebEngineDownloadRequest* self, intptr_t slot) {
	QWebEngineDownloadRequest::connect(self, static_cast<void (QWebEngineDownloadRequest::*)()>(&QWebEngineDownloadRequest::totalBytesChanged), self, [=]() {
		miqt_exec_callback_QWebEngineDownloadRequest_TotalBytesChanged(slot);
	});
}

void QWebEngineDownloadRequest_InterruptReasonChanged(QWebEngineDownloadRequest* self) {
	self->interruptReasonChanged();
}

void QWebEngineDownloadRequest_connect_InterruptReasonChanged(QWebEngineDownloadRequest* self, intptr_t slot) {
	QWebEngineDownloadRequest::connect(self, static_cast<void (QWebEngineDownloadRequest::*)()>(&QWebEngineDownloadRequest::interruptReasonChanged), self, [=]() {
		miqt_exec_callback_QWebEngineDownloadRequest_InterruptReasonChanged(slot);
	});
}

void QWebEngineDownloadRequest_IsFinishedChanged(QWebEngineDownloadRequest* self) {
	self->isFinishedChanged();
}

void QWebEngineDownloadRequest_connect_IsFinishedChanged(QWebEngineDownloadRequest* self, intptr_t slot) {
	QWebEngineDownloadRequest::connect(self, static_cast<void (QWebEngineDownloadRequest::*)()>(&QWebEngineDownloadRequest::isFinishedChanged), self, [=]() {
		miqt_exec_callback_QWebEngineDownloadRequest_IsFinishedChanged(slot);
	});
}

void QWebEngineDownloadRequest_IsPausedChanged(QWebEngineDownloadRequest* self) {
	self->isPausedChanged();
}

void QWebEngineDownloadRequest_connect_IsPausedChanged(QWebEngineDownloadRequest* self, intptr_t slot) {
	QWebEngineDownloadRequest::connect(self, static_cast<void (QWebEngineDownloadRequest::*)()>(&QWebEngineDownloadRequest::isPausedChanged), self, [=]() {
		miqt_exec_callback_QWebEngineDownloadRequest_IsPausedChanged(slot);
	});
}

void QWebEngineDownloadRequest_DownloadDirectoryChanged(QWebEngineDownloadRequest* self) {
	self->downloadDirectoryChanged();
}

void QWebEngineDownloadRequest_connect_DownloadDirectoryChanged(QWebEngineDownloadRequest* self, intptr_t slot) {
	QWebEngineDownloadRequest::connect(self, static_cast<void (QWebEngineDownloadRequest::*)()>(&QWebEngineDownloadRequest::downloadDirectoryChanged), self, [=]() {
		miqt_exec_callback_QWebEngineDownloadRequest_DownloadDirectoryChanged(slot);
	});
}

void QWebEngineDownloadRequest_DownloadFileNameChanged(QWebEngineDownloadRequest* self) {
	self->downloadFileNameChanged();
}

void QWebEngineDownloadRequest_connect_DownloadFileNameChanged(QWebEngineDownloadRequest* self, intptr_t slot) {
	QWebEngineDownloadRequest::connect(self, static_cast<void (QWebEngineDownloadRequest::*)()>(&QWebEngineDownloadRequest::downloadFileNameChanged), self, [=]() {
		miqt_exec_callback_QWebEngineDownloadRequest_DownloadFileNameChanged(slot);
	});
}

struct miqt_string QWebEngineDownloadRequest_Tr2(const char* s, const char* c) {
	QString _ret = QWebEngineDownloadRequest::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineDownloadRequest_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineDownloadRequest::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineDownloadRequest_Delete(QWebEngineDownloadRequest* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebEngineDownloadRequest*>( self );
	} else {
		delete self;
	}
}

