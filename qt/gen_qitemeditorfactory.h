#ifndef GEN_QITEMEDITORFACTORY_H
#define GEN_QITEMEDITORFACTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QItemEditorCreatorBase;
class QItemEditorFactory;
class QWidget;
#else
typedef struct QByteArray QByteArray;
typedef struct QItemEditorCreatorBase QItemEditorCreatorBase;
typedef struct QItemEditorFactory QItemEditorFactory;
typedef struct QWidget QWidget;
#endif

QWidget* QItemEditorCreatorBase_CreateWidget(const QItemEditorCreatorBase* self, QWidget* parent);
QByteArray* QItemEditorCreatorBase_ValuePropertyName(const QItemEditorCreatorBase* self);
void QItemEditorCreatorBase_OperatorAssign(QItemEditorCreatorBase* self, QItemEditorCreatorBase* param1);
void QItemEditorCreatorBase_Delete(QItemEditorCreatorBase* self);

QItemEditorFactory* QItemEditorFactory_new();
QItemEditorFactory* QItemEditorFactory_new2(QItemEditorFactory* param1);
QWidget* QItemEditorFactory_CreateEditor(const QItemEditorFactory* self, int userType, QWidget* parent);
QByteArray* QItemEditorFactory_ValuePropertyName(const QItemEditorFactory* self, int userType);
void QItemEditorFactory_RegisterEditor(QItemEditorFactory* self, int userType, QItemEditorCreatorBase* creator);
QItemEditorFactory* QItemEditorFactory_DefaultFactory();
void QItemEditorFactory_SetDefaultFactory(QItemEditorFactory* factory);
void QItemEditorFactory_Delete(QItemEditorFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
