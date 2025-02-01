#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWebEngineScript>
#include <QWebEngineScriptCollection>
#include <qwebenginescriptcollection.h>
#include "gen_qwebenginescriptcollection.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

bool QWebEngineScriptCollection_isEmpty(const QWebEngineScriptCollection* self) {
	return self->isEmpty();
}

int QWebEngineScriptCollection_count(const QWebEngineScriptCollection* self) {
	return self->count();
}

int QWebEngineScriptCollection_size(const QWebEngineScriptCollection* self) {
	return self->size();
}

bool QWebEngineScriptCollection_contains(const QWebEngineScriptCollection* self, QWebEngineScript* value) {
	return self->contains(*value);
}

QWebEngineScript* QWebEngineScriptCollection_findScript(const QWebEngineScriptCollection* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QWebEngineScript(self->findScript(name_QString));
}

struct miqt_array /* of QWebEngineScript* */  QWebEngineScriptCollection_findScripts(const QWebEngineScriptCollection* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QList<QWebEngineScript> _ret = self->findScripts(name_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	QWebEngineScript** _arr = static_cast<QWebEngineScript**>(malloc(sizeof(QWebEngineScript*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QWebEngineScript(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QWebEngineScriptCollection_insert(QWebEngineScriptCollection* self, QWebEngineScript* param1) {
	self->insert(*param1);
}

void QWebEngineScriptCollection_insertWithList(QWebEngineScriptCollection* self, struct miqt_array /* of QWebEngineScript* */  list) {
	QList<QWebEngineScript> list_QList;
	list_QList.reserve(list.len);
	QWebEngineScript** list_arr = static_cast<QWebEngineScript**>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		list_QList.push_back(*(list_arr[i]));
	}
	self->insert(list_QList);
}

bool QWebEngineScriptCollection_remove(QWebEngineScriptCollection* self, QWebEngineScript* param1) {
	return self->remove(*param1);
}

void QWebEngineScriptCollection_clear(QWebEngineScriptCollection* self) {
	self->clear();
}

struct miqt_array /* of QWebEngineScript* */  QWebEngineScriptCollection_toList(const QWebEngineScriptCollection* self) {
	QList<QWebEngineScript> _ret = self->toList();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWebEngineScript** _arr = static_cast<QWebEngineScript**>(malloc(sizeof(QWebEngineScript*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QWebEngineScript(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QWebEngineScriptCollection_delete(QWebEngineScriptCollection* self) {
	delete self;
}

