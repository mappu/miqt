#include <QList>
#include <QMediaContent>
#include <QMediaPlaylist>
#include <QMediaResource>
#include <QNetworkRequest>
#include <QUrl>
#include <qmediacontent.h>
#include "gen_qmediacontent.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QMediaContent* QMediaContent_new() {
	return new QMediaContent();
}

QMediaContent* QMediaContent_new2(QUrl* contentUrl) {
	return new QMediaContent(*contentUrl);
}

QMediaContent* QMediaContent_new3(QNetworkRequest* contentRequest) {
	return new QMediaContent(*contentRequest);
}

QMediaContent* QMediaContent_new4(QMediaResource* contentResource) {
	return new QMediaContent(*contentResource);
}

QMediaContent* QMediaContent_new5(struct miqt_array /* of QMediaResource* */  resources) {
	QMediaResourceList resources_QList;
	resources_QList.reserve(resources.len);
	QMediaResource** resources_arr = static_cast<QMediaResource**>(resources.data);
	for(size_t i = 0; i < resources.len; ++i) {
		resources_QList.push_back(*(resources_arr[i]));
	}
	return new QMediaContent(resources_QList);
}

QMediaContent* QMediaContent_new6(QMediaContent* other) {
	return new QMediaContent(*other);
}

QMediaContent* QMediaContent_new7(QMediaPlaylist* playlist) {
	return new QMediaContent(playlist);
}

QMediaContent* QMediaContent_new8(QMediaPlaylist* playlist, QUrl* contentUrl) {
	return new QMediaContent(playlist, *contentUrl);
}

QMediaContent* QMediaContent_new9(QMediaPlaylist* playlist, QUrl* contentUrl, bool takeOwnership) {
	return new QMediaContent(playlist, *contentUrl, takeOwnership);
}

void QMediaContent_operatorAssign(QMediaContent* self, QMediaContent* other) {
	self->operator=(*other);
}

bool QMediaContent_operatorEqual(const QMediaContent* self, QMediaContent* other) {
	return (*self == *other);
}

bool QMediaContent_operatorNotEqual(const QMediaContent* self, QMediaContent* other) {
	return (*self != *other);
}

bool QMediaContent_isNull(const QMediaContent* self) {
	return self->isNull();
}

QNetworkRequest* QMediaContent_request(const QMediaContent* self) {
	return new QNetworkRequest(self->request());
}

QUrl* QMediaContent_canonicalUrl(const QMediaContent* self) {
	return new QUrl(self->canonicalUrl());
}

QNetworkRequest* QMediaContent_canonicalRequest(const QMediaContent* self) {
	return new QNetworkRequest(self->canonicalRequest());
}

QMediaResource* QMediaContent_canonicalResource(const QMediaContent* self) {
	return new QMediaResource(self->canonicalResource());
}

struct miqt_array /* of QMediaResource* */  QMediaContent_resources(const QMediaContent* self) {
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

QMediaPlaylist* QMediaContent_playlist(const QMediaContent* self) {
	return self->playlist();
}

void QMediaContent_delete(QMediaContent* self) {
	delete self;
}

