#include <QUrl>
#include <QWebEngineFileSystemAccessRequest>
#include <qwebenginefilesystemaccessrequest.h>
#include "gen_qwebenginefilesystemaccessrequest.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QWebEngineFileSystemAccessRequest* QWebEngineFileSystemAccessRequest_new(QWebEngineFileSystemAccessRequest* other) {
	return new QWebEngineFileSystemAccessRequest(*other);
}

void QWebEngineFileSystemAccessRequest_OperatorAssign(QWebEngineFileSystemAccessRequest* self, QWebEngineFileSystemAccessRequest* other) {
	self->operator=(*other);
}

void QWebEngineFileSystemAccessRequest_Swap(QWebEngineFileSystemAccessRequest* self, QWebEngineFileSystemAccessRequest* other) {
	self->swap(*other);
}

void QWebEngineFileSystemAccessRequest_Accept(QWebEngineFileSystemAccessRequest* self) {
	self->accept();
}

void QWebEngineFileSystemAccessRequest_Reject(QWebEngineFileSystemAccessRequest* self) {
	self->reject();
}

QUrl* QWebEngineFileSystemAccessRequest_Origin(const QWebEngineFileSystemAccessRequest* self) {
	return new QUrl(self->origin());
}

QUrl* QWebEngineFileSystemAccessRequest_FilePath(const QWebEngineFileSystemAccessRequest* self) {
	return new QUrl(self->filePath());
}

int QWebEngineFileSystemAccessRequest_HandleType(const QWebEngineFileSystemAccessRequest* self) {
	QWebEngineFileSystemAccessRequest::HandleType _ret = self->handleType();
	return static_cast<int>(_ret);
}

int QWebEngineFileSystemAccessRequest_AccessFlags(const QWebEngineFileSystemAccessRequest* self) {
	QWebEngineFileSystemAccessRequest::AccessFlags _ret = self->accessFlags();
	return static_cast<int>(_ret);
}

void QWebEngineFileSystemAccessRequest_Delete(QWebEngineFileSystemAccessRequest* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebEngineFileSystemAccessRequest*>( self );
	} else {
		delete self;
	}
}

