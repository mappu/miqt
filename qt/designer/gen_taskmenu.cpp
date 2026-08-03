#include <QAction>
#include <QDesignerTaskMenuExtension>
#include <QList>
#include <taskmenu.h>
#include "gen_taskmenu.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QAction* QDesignerTaskMenuExtension_preferredEditAction(const QDesignerTaskMenuExtension* self) {
	return self->preferredEditAction();
}

struct miqt_array /* of QAction* */  QDesignerTaskMenuExtension_taskActions(const QDesignerTaskMenuExtension* self) {
	QList<QAction *> _ret = self->taskActions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QDesignerTaskMenuExtension_operatorAssign(QDesignerTaskMenuExtension* self, QDesignerTaskMenuExtension* param1) {
	self->operator=(*param1);
}

void QDesignerTaskMenuExtension_delete(QDesignerTaskMenuExtension* self) {
	delete self;
}

