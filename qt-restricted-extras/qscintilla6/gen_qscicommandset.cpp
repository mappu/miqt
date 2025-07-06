#include <QList>
#include <QSettings>
#include <qscicommandset.h>
#include "gen_qscicommandset.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

bool QsciCommandSet_readSettings(QsciCommandSet* self, QSettings* qs) {
	return self->readSettings(*qs);
}

bool QsciCommandSet_writeSettings(QsciCommandSet* self, QSettings* qs) {
	return self->writeSettings(*qs);
}

struct miqt_array /* of QsciCommand* */  QsciCommandSet_commands(QsciCommandSet* self) {
	QList<QsciCommand*>& _ret = self->commands();
	// Convert QList<> from C++ memory to manually-managed C memory
	QsciCommand** _arr = static_cast<QsciCommand**>(malloc(sizeof(QsciCommand*) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QsciCommandSet_clearKeys(QsciCommandSet* self) {
	self->clearKeys();
}

void QsciCommandSet_clearAlternateKeys(QsciCommandSet* self) {
	self->clearAlternateKeys();
}

QsciCommand* QsciCommandSet_boundTo(const QsciCommandSet* self, int key) {
	return self->boundTo(static_cast<int>(key));
}

QsciCommand* QsciCommandSet_find(const QsciCommandSet* self, int command) {
	return self->find(static_cast<QsciCommand::Command>(command));
}

bool QsciCommandSet_readSettings2(QsciCommandSet* self, QSettings* qs, const char* prefix) {
	return self->readSettings(*qs, prefix);
}

bool QsciCommandSet_writeSettings2(QsciCommandSet* self, QSettings* qs, const char* prefix) {
	return self->writeSettings(*qs, prefix);
}

