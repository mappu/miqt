#include <QUrl>
#include <QWebEngineFileSystemAccessRequest>
#include <qwebenginefilesystemaccessrequest.h>
#include "gen_qwebenginefilesystemaccessrequest.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWebEngineFileSystemAccessRequest* QWebEngineFileSystemAccessRequest_new(QWebEngineFileSystemAccessRequest* other) {
	return new QWebEngineFileSystemAccessRequest(*other);
}

void QWebEngineFileSystemAccessRequest_operatorAssign(QWebEngineFileSystemAccessRequest* self, QWebEngineFileSystemAccessRequest* other) {
	self->operator=(*other);
}

void QWebEngineFileSystemAccessRequest_swap(QWebEngineFileSystemAccessRequest* self, QWebEngineFileSystemAccessRequest* other) {
	self->swap(*other);
}

void QWebEngineFileSystemAccessRequest_accept(QWebEngineFileSystemAccessRequest* self) {
	self->accept();
}

void QWebEngineFileSystemAccessRequest_reject(QWebEngineFileSystemAccessRequest* self) {
	self->reject();
}

QUrl* QWebEngineFileSystemAccessRequest_origin(const QWebEngineFileSystemAccessRequest* self) {
	return new QUrl(self->origin());
}

QUrl* QWebEngineFileSystemAccessRequest_filePath(const QWebEngineFileSystemAccessRequest* self) {
	return new QUrl(self->filePath());
}

int QWebEngineFileSystemAccessRequest_handleType(const QWebEngineFileSystemAccessRequest* self) {
	QWebEngineFileSystemAccessRequest::HandleType _ret = self->handleType();
	return static_cast<int>(_ret);
}

int QWebEngineFileSystemAccessRequest_accessFlags(const QWebEngineFileSystemAccessRequest* self) {
	QWebEngineFileSystemAccessRequest::AccessFlags _ret = self->accessFlags();
	return static_cast<int>(_ret);
}

void QWebEngineFileSystemAccessRequest_delete(QWebEngineFileSystemAccessRequest* self) {
	delete self;
}

