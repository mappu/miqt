#include <QAction>
#include <QDesignerFormEditorInterface>
#include <QDesignerFormEditorPluginInterface>
#include <abstractformeditorplugin.h>
#include "gen_abstractformeditorplugin.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

bool QDesignerFormEditorPluginInterface_isInitialized(const QDesignerFormEditorPluginInterface* self) {
	return self->isInitialized();
}

void QDesignerFormEditorPluginInterface_initialize(QDesignerFormEditorPluginInterface* self, QDesignerFormEditorInterface* core) {
	self->initialize(core);
}

QAction* QDesignerFormEditorPluginInterface_action(const QDesignerFormEditorPluginInterface* self) {
	return self->action();
}

QDesignerFormEditorInterface* QDesignerFormEditorPluginInterface_core(const QDesignerFormEditorPluginInterface* self) {
	return self->core();
}

void QDesignerFormEditorPluginInterface_operatorAssign(QDesignerFormEditorPluginInterface* self, QDesignerFormEditorPluginInterface* param1) {
	self->operator=(*param1);
}

void QDesignerFormEditorPluginInterface_delete(QDesignerFormEditorPluginInterface* self) {
	delete self;
}

