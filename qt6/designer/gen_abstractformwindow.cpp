#include <QDesignerFormEditorInterface>
#include <QDesignerFormWindowCursorInterface>
#include <QDesignerFormWindowInterface>
#include <QDesignerFormWindowToolInterface>
#include <QDir>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUndoStack>
#include <QWidget>
#include <abstractformwindow.h>
#include "gen_abstractformwindow.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QDesignerFormWindowInterface_mainContainerChanged(intptr_t, QWidget*);
void miqt_exec_callback_QDesignerFormWindowInterface_toolChanged(intptr_t, int);
void miqt_exec_callback_QDesignerFormWindowInterface_fileNameChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QDesignerFormWindowInterface_featureChanged(intptr_t, int);
void miqt_exec_callback_QDesignerFormWindowInterface_selectionChanged(intptr_t);
void miqt_exec_callback_QDesignerFormWindowInterface_geometryChanged(intptr_t);
void miqt_exec_callback_QDesignerFormWindowInterface_resourceFilesChanged(intptr_t);
void miqt_exec_callback_QDesignerFormWindowInterface_widgetManaged(intptr_t, QWidget*);
void miqt_exec_callback_QDesignerFormWindowInterface_widgetUnmanaged(intptr_t, QWidget*);
void miqt_exec_callback_QDesignerFormWindowInterface_aboutToUnmanageWidget(intptr_t, QWidget*);
void miqt_exec_callback_QDesignerFormWindowInterface_activated(intptr_t, QWidget*);
void miqt_exec_callback_QDesignerFormWindowInterface_changed(intptr_t);
void miqt_exec_callback_QDesignerFormWindowInterface_widgetRemoved(intptr_t, QWidget*);
void miqt_exec_callback_QDesignerFormWindowInterface_objectRemoved(intptr_t, QObject*);
#ifdef __cplusplus
} /* extern C */
#endif

void QDesignerFormWindowInterface_virtbase(QDesignerFormWindowInterface* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QDesignerFormWindowInterface_metaObject(const QDesignerFormWindowInterface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDesignerFormWindowInterface_metacast(QDesignerFormWindowInterface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDesignerFormWindowInterface_tr(const char* s) {
	QString _ret = QDesignerFormWindowInterface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerFormWindowInterface_fileName(const QDesignerFormWindowInterface* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDir* QDesignerFormWindowInterface_absoluteDir(const QDesignerFormWindowInterface* self) {
	return new QDir(self->absoluteDir());
}

struct miqt_string QDesignerFormWindowInterface_contents(const QDesignerFormWindowInterface* self) {
	QString _ret = self->contents();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QDesignerFormWindowInterface_checkContents(const QDesignerFormWindowInterface* self) {
	QStringList _ret = self->checkContents();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QDesignerFormWindowInterface_features(const QDesignerFormWindowInterface* self) {
	QDesignerFormWindowInterface::Feature _ret = self->features();
	return static_cast<int>(_ret);
}

bool QDesignerFormWindowInterface_hasFeature(const QDesignerFormWindowInterface* self, int f) {
	return self->hasFeature(static_cast<QDesignerFormWindowInterface::Feature>(f));
}

struct miqt_string QDesignerFormWindowInterface_author(const QDesignerFormWindowInterface* self) {
	QString _ret = self->author();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerFormWindowInterface_setAuthor(QDesignerFormWindowInterface* self, struct miqt_string author) {
	QString author_QString = QString::fromUtf8(author.data, author.len);
	self->setAuthor(author_QString);
}

struct miqt_string QDesignerFormWindowInterface_comment(const QDesignerFormWindowInterface* self) {
	QString _ret = self->comment();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerFormWindowInterface_setComment(QDesignerFormWindowInterface* self, struct miqt_string comment) {
	QString comment_QString = QString::fromUtf8(comment.data, comment.len);
	self->setComment(comment_QString);
}

void QDesignerFormWindowInterface_layoutDefault(QDesignerFormWindowInterface* self, int* margin, int* spacing) {
	self->layoutDefault(static_cast<int*>(margin), static_cast<int*>(spacing));
}

void QDesignerFormWindowInterface_setLayoutDefault(QDesignerFormWindowInterface* self, int margin, int spacing) {
	self->setLayoutDefault(static_cast<int>(margin), static_cast<int>(spacing));
}

void QDesignerFormWindowInterface_setLayoutFunction(QDesignerFormWindowInterface* self, struct miqt_string margin, struct miqt_string spacing) {
	QString margin_QString = QString::fromUtf8(margin.data, margin.len);
	QString spacing_QString = QString::fromUtf8(spacing.data, spacing.len);
	self->setLayoutFunction(margin_QString, spacing_QString);
}

struct miqt_string QDesignerFormWindowInterface_pixmapFunction(const QDesignerFormWindowInterface* self) {
	QString _ret = self->pixmapFunction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerFormWindowInterface_setPixmapFunction(QDesignerFormWindowInterface* self, struct miqt_string pixmapFunction) {
	QString pixmapFunction_QString = QString::fromUtf8(pixmapFunction.data, pixmapFunction.len);
	self->setPixmapFunction(pixmapFunction_QString);
}

struct miqt_string QDesignerFormWindowInterface_exportMacro(const QDesignerFormWindowInterface* self) {
	QString _ret = self->exportMacro();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerFormWindowInterface_setExportMacro(QDesignerFormWindowInterface* self, struct miqt_string exportMacro) {
	QString exportMacro_QString = QString::fromUtf8(exportMacro.data, exportMacro.len);
	self->setExportMacro(exportMacro_QString);
}

struct miqt_array /* of struct miqt_string */  QDesignerFormWindowInterface_includeHints(const QDesignerFormWindowInterface* self) {
	QStringList _ret = self->includeHints();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QDesignerFormWindowInterface_setIncludeHints(QDesignerFormWindowInterface* self, struct miqt_array /* of struct miqt_string */  includeHints) {
	QStringList includeHints_QList;
	includeHints_QList.reserve(includeHints.len);
	struct miqt_string* includeHints_arr = static_cast<struct miqt_string*>(includeHints.data);
	for(size_t i = 0; i < includeHints.len; ++i) {
		QString includeHints_arr_i_QString = QString::fromUtf8(includeHints_arr[i].data, includeHints_arr[i].len);
		includeHints_QList.push_back(includeHints_arr_i_QString);
	}
	self->setIncludeHints(includeHints_QList);
}

int QDesignerFormWindowInterface_resourceFileSaveMode(const QDesignerFormWindowInterface* self) {
	QDesignerFormWindowInterface::ResourceFileSaveMode _ret = self->resourceFileSaveMode();
	return static_cast<int>(_ret);
}

void QDesignerFormWindowInterface_setResourceFileSaveMode(QDesignerFormWindowInterface* self, int behaviour) {
	self->setResourceFileSaveMode(static_cast<QDesignerFormWindowInterface::ResourceFileSaveMode>(behaviour));
}

struct miqt_array /* of struct miqt_string */  QDesignerFormWindowInterface_activeResourceFilePaths(const QDesignerFormWindowInterface* self) {
	QStringList _ret = self->activeResourceFilePaths();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QDesignerFormEditorInterface* QDesignerFormWindowInterface_core(const QDesignerFormWindowInterface* self) {
	return self->core();
}

QDesignerFormWindowCursorInterface* QDesignerFormWindowInterface_cursor(const QDesignerFormWindowInterface* self) {
	return self->cursor();
}

int QDesignerFormWindowInterface_toolCount(const QDesignerFormWindowInterface* self) {
	return self->toolCount();
}

int QDesignerFormWindowInterface_currentTool(const QDesignerFormWindowInterface* self) {
	return self->currentTool();
}

void QDesignerFormWindowInterface_setCurrentTool(QDesignerFormWindowInterface* self, int index) {
	self->setCurrentTool(static_cast<int>(index));
}

QDesignerFormWindowToolInterface* QDesignerFormWindowInterface_tool(const QDesignerFormWindowInterface* self, int index) {
	return self->tool(static_cast<int>(index));
}

void QDesignerFormWindowInterface_registerTool(QDesignerFormWindowInterface* self, QDesignerFormWindowToolInterface* tool) {
	self->registerTool(tool);
}

QPoint* QDesignerFormWindowInterface_grid(const QDesignerFormWindowInterface* self) {
	return new QPoint(self->grid());
}

QWidget* QDesignerFormWindowInterface_mainContainer(const QDesignerFormWindowInterface* self) {
	return self->mainContainer();
}

void QDesignerFormWindowInterface_setMainContainer(QDesignerFormWindowInterface* self, QWidget* mainContainer) {
	self->setMainContainer(mainContainer);
}

QWidget* QDesignerFormWindowInterface_formContainer(const QDesignerFormWindowInterface* self) {
	return self->formContainer();
}

bool QDesignerFormWindowInterface_isManaged(const QDesignerFormWindowInterface* self, QWidget* widget) {
	return self->isManaged(widget);
}

bool QDesignerFormWindowInterface_isDirty(const QDesignerFormWindowInterface* self) {
	return self->isDirty();
}

QDesignerFormWindowInterface* QDesignerFormWindowInterface_findFormWindow(QWidget* w) {
	return QDesignerFormWindowInterface::findFormWindow(w);
}

QDesignerFormWindowInterface* QDesignerFormWindowInterface_findFormWindowWithObj(QObject* obj) {
	return QDesignerFormWindowInterface::findFormWindow(obj);
}

QUndoStack* QDesignerFormWindowInterface_commandHistory(const QDesignerFormWindowInterface* self) {
	return self->commandHistory();
}

void QDesignerFormWindowInterface_beginCommand(QDesignerFormWindowInterface* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->beginCommand(description_QString);
}

void QDesignerFormWindowInterface_endCommand(QDesignerFormWindowInterface* self) {
	self->endCommand();
}

void QDesignerFormWindowInterface_simplifySelection(const QDesignerFormWindowInterface* self, struct miqt_array /* of QWidget* */  widgets) {
	QList<QWidget *> widgets_QList;
	widgets_QList.reserve(widgets.len);
	QWidget** widgets_arr = static_cast<QWidget**>(widgets.data);
	for(size_t i = 0; i < widgets.len; ++i) {
		widgets_QList.push_back(widgets_arr[i]);
	}
	self->simplifySelection(&widgets_QList);
}

void QDesignerFormWindowInterface_emitSelectionChanged(QDesignerFormWindowInterface* self) {
	self->emitSelectionChanged();
}

struct miqt_array /* of struct miqt_string */  QDesignerFormWindowInterface_resourceFiles(const QDesignerFormWindowInterface* self) {
	QStringList _ret = self->resourceFiles();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QDesignerFormWindowInterface_addResourceFile(QDesignerFormWindowInterface* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->addResourceFile(path_QString);
}

void QDesignerFormWindowInterface_removeResourceFile(QDesignerFormWindowInterface* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->removeResourceFile(path_QString);
}

void QDesignerFormWindowInterface_ensureUniqueObjectName(QDesignerFormWindowInterface* self, QObject* object) {
	self->ensureUniqueObjectName(object);
}

void QDesignerFormWindowInterface_manageWidget(QDesignerFormWindowInterface* self, QWidget* widget) {
	self->manageWidget(widget);
}

void QDesignerFormWindowInterface_unmanageWidget(QDesignerFormWindowInterface* self, QWidget* widget) {
	self->unmanageWidget(widget);
}

void QDesignerFormWindowInterface_setFeatures(QDesignerFormWindowInterface* self, int f) {
	self->setFeatures(static_cast<QDesignerFormWindowInterface::Feature>(f));
}

void QDesignerFormWindowInterface_setDirty(QDesignerFormWindowInterface* self, bool dirty) {
	self->setDirty(dirty);
}

void QDesignerFormWindowInterface_clearSelection(QDesignerFormWindowInterface* self, bool changePropertyDisplay) {
	self->clearSelection(changePropertyDisplay);
}

void QDesignerFormWindowInterface_selectWidget(QDesignerFormWindowInterface* self, QWidget* w, bool select) {
	self->selectWidget(w, select);
}

void QDesignerFormWindowInterface_setGrid(QDesignerFormWindowInterface* self, QPoint* grid) {
	self->setGrid(*grid);
}

void QDesignerFormWindowInterface_setFileName(QDesignerFormWindowInterface* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setFileName(fileName_QString);
}

bool QDesignerFormWindowInterface_setContentsWithContents(QDesignerFormWindowInterface* self, struct miqt_string contents) {
	QString contents_QString = QString::fromUtf8(contents.data, contents.len);
	return self->setContents(contents_QString);
}

void QDesignerFormWindowInterface_editWidgets(QDesignerFormWindowInterface* self) {
	self->editWidgets();
}

void QDesignerFormWindowInterface_activateResourceFilePaths(QDesignerFormWindowInterface* self, struct miqt_array /* of struct miqt_string */  paths) {
	QStringList paths_QList;
	paths_QList.reserve(paths.len);
	struct miqt_string* paths_arr = static_cast<struct miqt_string*>(paths.data);
	for(size_t i = 0; i < paths.len; ++i) {
		QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
		paths_QList.push_back(paths_arr_i_QString);
	}
	self->activateResourceFilePaths(paths_QList);
}

void QDesignerFormWindowInterface_mainContainerChanged(QDesignerFormWindowInterface* self, QWidget* mainContainer) {
	self->mainContainerChanged(mainContainer);
}

void QDesignerFormWindowInterface_connect_mainContainerChanged(QDesignerFormWindowInterface* self, intptr_t slot) {
	QDesignerFormWindowInterface::connect(self, static_cast<void (QDesignerFormWindowInterface::*)(QWidget*)>(&QDesignerFormWindowInterface::mainContainerChanged), self, [=](QWidget* mainContainer) {
		QWidget* sigval1 = mainContainer;
		miqt_exec_callback_QDesignerFormWindowInterface_mainContainerChanged(slot, sigval1);
	});
}

void QDesignerFormWindowInterface_toolChanged(QDesignerFormWindowInterface* self, int toolIndex) {
	self->toolChanged(static_cast<int>(toolIndex));
}

void QDesignerFormWindowInterface_connect_toolChanged(QDesignerFormWindowInterface* self, intptr_t slot) {
	QDesignerFormWindowInterface::connect(self, static_cast<void (QDesignerFormWindowInterface::*)(int)>(&QDesignerFormWindowInterface::toolChanged), self, [=](int toolIndex) {
		int sigval1 = toolIndex;
		miqt_exec_callback_QDesignerFormWindowInterface_toolChanged(slot, sigval1);
	});
}

void QDesignerFormWindowInterface_fileNameChanged(QDesignerFormWindowInterface* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->fileNameChanged(fileName_QString);
}

void QDesignerFormWindowInterface_connect_fileNameChanged(QDesignerFormWindowInterface* self, intptr_t slot) {
	QDesignerFormWindowInterface::connect(self, static_cast<void (QDesignerFormWindowInterface::*)(const QString&)>(&QDesignerFormWindowInterface::fileNameChanged), self, [=](const QString& fileName) {
		const QString fileName_ret = fileName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray fileName_b = fileName_ret.toUtf8();
		struct miqt_string fileName_ms;
		fileName_ms.len = fileName_b.length();
		fileName_ms.data = static_cast<char*>(malloc(fileName_ms.len));
		memcpy(fileName_ms.data, fileName_b.data(), fileName_ms.len);
		struct miqt_string sigval1 = fileName_ms;
		miqt_exec_callback_QDesignerFormWindowInterface_fileNameChanged(slot, sigval1);
	});
}

void QDesignerFormWindowInterface_featureChanged(QDesignerFormWindowInterface* self, int f) {
	self->featureChanged(static_cast<QDesignerFormWindowInterface::Feature>(f));
}

void QDesignerFormWindowInterface_connect_featureChanged(QDesignerFormWindowInterface* self, intptr_t slot) {
	QDesignerFormWindowInterface::connect(self, static_cast<void (QDesignerFormWindowInterface::*)(QDesignerFormWindowInterface::Feature)>(&QDesignerFormWindowInterface::featureChanged), self, [=](QDesignerFormWindowInterface::Feature f) {
		QDesignerFormWindowInterface::Feature f_ret = f;
		int sigval1 = static_cast<int>(f_ret);
		miqt_exec_callback_QDesignerFormWindowInterface_featureChanged(slot, sigval1);
	});
}

void QDesignerFormWindowInterface_selectionChanged(QDesignerFormWindowInterface* self) {
	self->selectionChanged();
}

void QDesignerFormWindowInterface_connect_selectionChanged(QDesignerFormWindowInterface* self, intptr_t slot) {
	QDesignerFormWindowInterface::connect(self, static_cast<void (QDesignerFormWindowInterface::*)()>(&QDesignerFormWindowInterface::selectionChanged), self, [=]() {
		miqt_exec_callback_QDesignerFormWindowInterface_selectionChanged(slot);
	});
}

void QDesignerFormWindowInterface_geometryChanged(QDesignerFormWindowInterface* self) {
	self->geometryChanged();
}

void QDesignerFormWindowInterface_connect_geometryChanged(QDesignerFormWindowInterface* self, intptr_t slot) {
	QDesignerFormWindowInterface::connect(self, static_cast<void (QDesignerFormWindowInterface::*)()>(&QDesignerFormWindowInterface::geometryChanged), self, [=]() {
		miqt_exec_callback_QDesignerFormWindowInterface_geometryChanged(slot);
	});
}

void QDesignerFormWindowInterface_resourceFilesChanged(QDesignerFormWindowInterface* self) {
	self->resourceFilesChanged();
}

void QDesignerFormWindowInterface_connect_resourceFilesChanged(QDesignerFormWindowInterface* self, intptr_t slot) {
	QDesignerFormWindowInterface::connect(self, static_cast<void (QDesignerFormWindowInterface::*)()>(&QDesignerFormWindowInterface::resourceFilesChanged), self, [=]() {
		miqt_exec_callback_QDesignerFormWindowInterface_resourceFilesChanged(slot);
	});
}

void QDesignerFormWindowInterface_widgetManaged(QDesignerFormWindowInterface* self, QWidget* widget) {
	self->widgetManaged(widget);
}

void QDesignerFormWindowInterface_connect_widgetManaged(QDesignerFormWindowInterface* self, intptr_t slot) {
	QDesignerFormWindowInterface::connect(self, static_cast<void (QDesignerFormWindowInterface::*)(QWidget*)>(&QDesignerFormWindowInterface::widgetManaged), self, [=](QWidget* widget) {
		QWidget* sigval1 = widget;
		miqt_exec_callback_QDesignerFormWindowInterface_widgetManaged(slot, sigval1);
	});
}

void QDesignerFormWindowInterface_widgetUnmanaged(QDesignerFormWindowInterface* self, QWidget* widget) {
	self->widgetUnmanaged(widget);
}

void QDesignerFormWindowInterface_connect_widgetUnmanaged(QDesignerFormWindowInterface* self, intptr_t slot) {
	QDesignerFormWindowInterface::connect(self, static_cast<void (QDesignerFormWindowInterface::*)(QWidget*)>(&QDesignerFormWindowInterface::widgetUnmanaged), self, [=](QWidget* widget) {
		QWidget* sigval1 = widget;
		miqt_exec_callback_QDesignerFormWindowInterface_widgetUnmanaged(slot, sigval1);
	});
}

void QDesignerFormWindowInterface_aboutToUnmanageWidget(QDesignerFormWindowInterface* self, QWidget* widget) {
	self->aboutToUnmanageWidget(widget);
}

void QDesignerFormWindowInterface_connect_aboutToUnmanageWidget(QDesignerFormWindowInterface* self, intptr_t slot) {
	QDesignerFormWindowInterface::connect(self, static_cast<void (QDesignerFormWindowInterface::*)(QWidget*)>(&QDesignerFormWindowInterface::aboutToUnmanageWidget), self, [=](QWidget* widget) {
		QWidget* sigval1 = widget;
		miqt_exec_callback_QDesignerFormWindowInterface_aboutToUnmanageWidget(slot, sigval1);
	});
}

void QDesignerFormWindowInterface_activated(QDesignerFormWindowInterface* self, QWidget* widget) {
	self->activated(widget);
}

void QDesignerFormWindowInterface_connect_activated(QDesignerFormWindowInterface* self, intptr_t slot) {
	QDesignerFormWindowInterface::connect(self, static_cast<void (QDesignerFormWindowInterface::*)(QWidget*)>(&QDesignerFormWindowInterface::activated), self, [=](QWidget* widget) {
		QWidget* sigval1 = widget;
		miqt_exec_callback_QDesignerFormWindowInterface_activated(slot, sigval1);
	});
}

void QDesignerFormWindowInterface_changed(QDesignerFormWindowInterface* self) {
	self->changed();
}

void QDesignerFormWindowInterface_connect_changed(QDesignerFormWindowInterface* self, intptr_t slot) {
	QDesignerFormWindowInterface::connect(self, static_cast<void (QDesignerFormWindowInterface::*)()>(&QDesignerFormWindowInterface::changed), self, [=]() {
		miqt_exec_callback_QDesignerFormWindowInterface_changed(slot);
	});
}

void QDesignerFormWindowInterface_widgetRemoved(QDesignerFormWindowInterface* self, QWidget* w) {
	self->widgetRemoved(w);
}

void QDesignerFormWindowInterface_connect_widgetRemoved(QDesignerFormWindowInterface* self, intptr_t slot) {
	QDesignerFormWindowInterface::connect(self, static_cast<void (QDesignerFormWindowInterface::*)(QWidget*)>(&QDesignerFormWindowInterface::widgetRemoved), self, [=](QWidget* w) {
		QWidget* sigval1 = w;
		miqt_exec_callback_QDesignerFormWindowInterface_widgetRemoved(slot, sigval1);
	});
}

void QDesignerFormWindowInterface_objectRemoved(QDesignerFormWindowInterface* self, QObject* o) {
	self->objectRemoved(o);
}

void QDesignerFormWindowInterface_connect_objectRemoved(QDesignerFormWindowInterface* self, intptr_t slot) {
	QDesignerFormWindowInterface::connect(self, static_cast<void (QDesignerFormWindowInterface::*)(QObject*)>(&QDesignerFormWindowInterface::objectRemoved), self, [=](QObject* o) {
		QObject* sigval1 = o;
		miqt_exec_callback_QDesignerFormWindowInterface_objectRemoved(slot, sigval1);
	});
}

struct miqt_string QDesignerFormWindowInterface_tr2(const char* s, const char* c) {
	QString _ret = QDesignerFormWindowInterface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerFormWindowInterface_tr3(const char* s, const char* c, int n) {
	QString _ret = QDesignerFormWindowInterface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerFormWindowInterface_activateResourceFilePaths2(QDesignerFormWindowInterface* self, struct miqt_array /* of struct miqt_string */  paths, int* errorCount) {
	QStringList paths_QList;
	paths_QList.reserve(paths.len);
	struct miqt_string* paths_arr = static_cast<struct miqt_string*>(paths.data);
	for(size_t i = 0; i < paths.len; ++i) {
		QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
		paths_QList.push_back(paths_arr_i_QString);
	}
	self->activateResourceFilePaths(paths_QList, static_cast<int*>(errorCount));
}

void QDesignerFormWindowInterface_delete(QDesignerFormWindowInterface* self) {
	delete self;
}

