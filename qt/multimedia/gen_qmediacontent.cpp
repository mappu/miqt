#include <QList>
#include <QMediaContent>
#include <QMediaPlaylist>
#include <QMediaResource>
#include <QNetworkRequest>
#include <QUrl>
#include <qmediacontent.h>
#include "gen_qmediacontent.h"
#include "_cgo_export.h"

void QMediaContent_new(QMediaContent** outptr_QMediaContent) {
	QMediaContent* ret = new QMediaContent();
	*outptr_QMediaContent = ret;
}

void QMediaContent_new2(QUrl* contentUrl, QMediaContent** outptr_QMediaContent) {
	QMediaContent* ret = new QMediaContent(*contentUrl);
	*outptr_QMediaContent = ret;
}

void QMediaContent_new3(QNetworkRequest* contentRequest, QMediaContent** outptr_QMediaContent) {
	QMediaContent* ret = new QMediaContent(*contentRequest);
	*outptr_QMediaContent = ret;
}

void QMediaContent_new4(QMediaResource* contentResource, QMediaContent** outptr_QMediaContent) {
	QMediaContent* ret = new QMediaContent(*contentResource);
	*outptr_QMediaContent = ret;
}

void QMediaContent_new5(struct miqt_array /* of QMediaResource* */  resources, QMediaContent** outptr_QMediaContent) {
	QMediaResourceList resources_QList;
	resources_QList.reserve(resources.len);
	QMediaResource** resources_arr = static_cast<QMediaResource**>(resources.data);
	for(size_t i = 0; i < resources.len; ++i) {
		resources_QList.push_back(*(resources_arr[i]));
	}
	QMediaContent* ret = new QMediaContent(resources_QList);
	*outptr_QMediaContent = ret;
}

void QMediaContent_new6(QMediaContent* other, QMediaContent** outptr_QMediaContent) {
	QMediaContent* ret = new QMediaContent(*other);
	*outptr_QMediaContent = ret;
}

void QMediaContent_new7(QMediaPlaylist* playlist, QMediaContent** outptr_QMediaContent) {
	QMediaContent* ret = new QMediaContent(playlist);
	*outptr_QMediaContent = ret;
}

void QMediaContent_new8(QMediaPlaylist* playlist, QUrl* contentUrl, QMediaContent** outptr_QMediaContent) {
	QMediaContent* ret = new QMediaContent(playlist, *contentUrl);
	*outptr_QMediaContent = ret;
}

void QMediaContent_new9(QMediaPlaylist* playlist, QUrl* contentUrl, bool takeOwnership, QMediaContent** outptr_QMediaContent) {
	QMediaContent* ret = new QMediaContent(playlist, *contentUrl, takeOwnership);
	*outptr_QMediaContent = ret;
}

void QMediaContent_OperatorAssign(QMediaContent* self, QMediaContent* other) {
	self->operator=(*other);
}

bool QMediaContent_OperatorEqual(const QMediaContent* self, QMediaContent* other) {
	return (*self == *other);
}

bool QMediaContent_OperatorNotEqual(const QMediaContent* self, QMediaContent* other) {
	return (*self != *other);
}

bool QMediaContent_IsNull(const QMediaContent* self) {
	return self->isNull();
}

QNetworkRequest* QMediaContent_Request(const QMediaContent* self) {
	return new QNetworkRequest(self->request());
}

QUrl* QMediaContent_CanonicalUrl(const QMediaContent* self) {
	return new QUrl(self->canonicalUrl());
}

QNetworkRequest* QMediaContent_CanonicalRequest(const QMediaContent* self) {
	return new QNetworkRequest(self->canonicalRequest());
}

QMediaResource* QMediaContent_CanonicalResource(const QMediaContent* self) {
	return new QMediaResource(self->canonicalResource());
}

struct miqt_array /* of QMediaResource* */  QMediaContent_Resources(const QMediaContent* self) {
	QMediaResourceList _ret = self->resources();
	// Convert QList<> from C++ memory to manually-managed C memory
	QMediaResource** _arr = static_cast<QMediaResource**>(malloc(sizeof(QMediaResource*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QMediaResource(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QMediaPlaylist* QMediaContent_Playlist(const QMediaContent* self) {
	return self->playlist();
}

void QMediaContent_Delete(QMediaContent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMediaContent*>( self );
	} else {
		delete self;
	}
}

