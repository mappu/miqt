#pragma once
#ifndef MIQT_QT_DESIGNER_GEN_ABSTRACTLANGUAGE_H
#define MIQT_QT_DESIGNER_GEN_ABSTRACTLANGUAGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDesignerFormEditorInterface;
class QDesignerFormWindowInterface;
class QDesignerLanguageExtension;
class QDesignerResourceBrowserInterface;
class QDialog;
class QObject;
class QWidget;
#else
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QDesignerFormWindowInterface QDesignerFormWindowInterface;
typedef struct QDesignerLanguageExtension QDesignerLanguageExtension;
typedef struct QDesignerResourceBrowserInterface QDesignerResourceBrowserInterface;
typedef struct QDialog QDialog;
typedef struct QObject QObject;
typedef struct QWidget QWidget;
#endif

struct miqt_string QDesignerLanguageExtension_name(const QDesignerLanguageExtension* self);
QDialog* QDesignerLanguageExtension_createFormWindowSettingsDialog(QDesignerLanguageExtension* self, QDesignerFormWindowInterface* formWindow, QWidget* parentWidget);
QDesignerResourceBrowserInterface* QDesignerLanguageExtension_createResourceBrowser(QDesignerLanguageExtension* self, QWidget* parentWidget);
QDialog* QDesignerLanguageExtension_createPromotionDialog(QDesignerLanguageExtension* self, QDesignerFormEditorInterface* formEditor, QWidget* parentWidget);
bool QDesignerLanguageExtension_isLanguageResource(const QDesignerLanguageExtension* self, struct miqt_string path);
struct miqt_string QDesignerLanguageExtension_classNameOf(const QDesignerLanguageExtension* self, QObject* object);
bool QDesignerLanguageExtension_signalMatchesSlot(const QDesignerLanguageExtension* self, struct miqt_string signal, struct miqt_string slot);
struct miqt_string QDesignerLanguageExtension_widgetBoxContents(const QDesignerLanguageExtension* self);
struct miqt_string QDesignerLanguageExtension_uiExtension(const QDesignerLanguageExtension* self);
void QDesignerLanguageExtension_operatorAssign(QDesignerLanguageExtension* self, QDesignerLanguageExtension* param1);

void QDesignerLanguageExtension_delete(QDesignerLanguageExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
