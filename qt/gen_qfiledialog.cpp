#include "gen_qfiledialog.h"
#include "qfiledialog.h"

#include <QAbstractItemDelegate>
#include <QAbstractProxyModel>
#include <QByteArray>
#include <QDir>
#include <QFileDialog>
#include <QFileIconProvider>
#include <QList>
#include <QMetaObject>
#include <QString>
#include <QUrl>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QFileDialog* QFileDialog_new() {
	return new QFileDialog();
}

QFileDialog* QFileDialog_new2(QWidget* parent) {
	return new QFileDialog(parent);
}

QFileDialog* QFileDialog_new3(QWidget* parent, const char* caption, size_t caption_Strlen) {
	QString caption_QString = QString::fromUtf8(caption, caption_Strlen);
	return new QFileDialog(parent, caption_QString);
}

QFileDialog* QFileDialog_new4(QWidget* parent, const char* caption, size_t caption_Strlen, const char* directory, size_t directory_Strlen) {
	QString caption_QString = QString::fromUtf8(caption, caption_Strlen);
	QString directory_QString = QString::fromUtf8(directory, directory_Strlen);
	return new QFileDialog(parent, caption_QString, directory_QString);
}

QFileDialog* QFileDialog_new5(QWidget* parent, const char* caption, size_t caption_Strlen, const char* directory, size_t directory_Strlen, const char* filter, size_t filter_Strlen) {
	QString caption_QString = QString::fromUtf8(caption, caption_Strlen);
	QString directory_QString = QString::fromUtf8(directory, directory_Strlen);
	QString filter_QString = QString::fromUtf8(filter, filter_Strlen);
	return new QFileDialog(parent, caption_QString, directory_QString, filter_QString);
}

QMetaObject* QFileDialog_MetaObject(QFileDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void QFileDialog_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QFileDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileDialog_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QFileDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileDialog_SetDirectory(QFileDialog* self, const char* directory, size_t directory_Strlen) {
	QString directory_QString = QString::fromUtf8(directory, directory_Strlen);
	self->setDirectory(directory_QString);
}

void QFileDialog_SetDirectoryWithDirectory(QFileDialog* self, QDir* directory) {
	self->setDirectory(*directory);
}

QDir* QFileDialog_Directory(QFileDialog* self) {
	QDir ret = self->directory();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDir*>(new QDir(ret));
}

void QFileDialog_SetDirectoryUrl(QFileDialog* self, QUrl* directory) {
	self->setDirectoryUrl(*directory);
}

QUrl* QFileDialog_DirectoryUrl(QFileDialog* self) {
	QUrl ret = self->directoryUrl();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

void QFileDialog_SelectFile(QFileDialog* self, const char* filename, size_t filename_Strlen) {
	QString filename_QString = QString::fromUtf8(filename, filename_Strlen);
	self->selectFile(filename_QString);
}

void QFileDialog_SelectedFiles(QFileDialog* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->selectedFiles();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QFileDialog_SelectUrl(QFileDialog* self, QUrl* url) {
	self->selectUrl(*url);
}

void QFileDialog_SelectedUrls(QFileDialog* self, QUrl*** _out, size_t* _out_len) {
	QList<QUrl> ret = self->selectedUrls();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QUrl** __out = static_cast<QUrl**>(malloc(sizeof(QUrl**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QUrl(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QFileDialog_SetNameFilterDetailsVisible(QFileDialog* self, bool enabled) {
	self->setNameFilterDetailsVisible(enabled);
}

bool QFileDialog_IsNameFilterDetailsVisible(QFileDialog* self) {
	return self->isNameFilterDetailsVisible();
}

void QFileDialog_SetNameFilter(QFileDialog* self, const char* filter, size_t filter_Strlen) {
	QString filter_QString = QString::fromUtf8(filter, filter_Strlen);
	self->setNameFilter(filter_QString);
}

void QFileDialog_SetNameFilters(QFileDialog* self, char** filters, uint64_t* filters_Lengths, size_t filters_len) {
	QList<QString> filters_QList;
	filters_QList.reserve(filters_len);
	for(size_t i = 0; i < filters_len; ++i) {
		filters_QList.push_back(QString::fromUtf8(filters[i], filters_Lengths[i]));
	}
	self->setNameFilters(filters_QList);
}

void QFileDialog_NameFilters(QFileDialog* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->nameFilters();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QFileDialog_SelectNameFilter(QFileDialog* self, const char* filter, size_t filter_Strlen) {
	QString filter_QString = QString::fromUtf8(filter, filter_Strlen);
	self->selectNameFilter(filter_QString);
}

void QFileDialog_SelectedMimeTypeFilter(QFileDialog* self, char** _out, int* _out_Strlen) {
	QString ret = self->selectedMimeTypeFilter();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileDialog_SelectedNameFilter(QFileDialog* self, char** _out, int* _out_Strlen) {
	QString ret = self->selectedNameFilter();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileDialog_SetMimeTypeFilters(QFileDialog* self, char** filters, uint64_t* filters_Lengths, size_t filters_len) {
	QList<QString> filters_QList;
	filters_QList.reserve(filters_len);
	for(size_t i = 0; i < filters_len; ++i) {
		filters_QList.push_back(QString::fromUtf8(filters[i], filters_Lengths[i]));
	}
	self->setMimeTypeFilters(filters_QList);
}

void QFileDialog_MimeTypeFilters(QFileDialog* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->mimeTypeFilters();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QFileDialog_SelectMimeTypeFilter(QFileDialog* self, const char* filter, size_t filter_Strlen) {
	QString filter_QString = QString::fromUtf8(filter, filter_Strlen);
	self->selectMimeTypeFilter(filter_QString);
}

void QFileDialog_SetReadOnly(QFileDialog* self, bool enabled) {
	self->setReadOnly(enabled);
}

bool QFileDialog_IsReadOnly(QFileDialog* self) {
	return self->isReadOnly();
}

void QFileDialog_SetResolveSymlinks(QFileDialog* self, bool enabled) {
	self->setResolveSymlinks(enabled);
}

bool QFileDialog_ResolveSymlinks(QFileDialog* self) {
	return self->resolveSymlinks();
}

void QFileDialog_SetSidebarUrls(QFileDialog* self, QUrl** urls, size_t urls_len) {
	QList<QUrl> urls_QList;
	urls_QList.reserve(urls_len);
	for(size_t i = 0; i < urls_len; ++i) {
		urls_QList.push_back(*(urls[i]));
	}
	self->setSidebarUrls(urls_QList);
}

void QFileDialog_SidebarUrls(QFileDialog* self, QUrl*** _out, size_t* _out_len) {
	QList<QUrl> ret = self->sidebarUrls();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QUrl** __out = static_cast<QUrl**>(malloc(sizeof(QUrl**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QUrl(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

QByteArray* QFileDialog_SaveState(QFileDialog* self) {
	QByteArray ret = self->saveState();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

bool QFileDialog_RestoreState(QFileDialog* self, QByteArray* state) {
	return self->restoreState(*state);
}

void QFileDialog_SetConfirmOverwrite(QFileDialog* self, bool enabled) {
	self->setConfirmOverwrite(enabled);
}

bool QFileDialog_ConfirmOverwrite(QFileDialog* self) {
	return self->confirmOverwrite();
}

void QFileDialog_SetDefaultSuffix(QFileDialog* self, const char* suffix, size_t suffix_Strlen) {
	QString suffix_QString = QString::fromUtf8(suffix, suffix_Strlen);
	self->setDefaultSuffix(suffix_QString);
}

void QFileDialog_DefaultSuffix(QFileDialog* self, char** _out, int* _out_Strlen) {
	QString ret = self->defaultSuffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileDialog_SetHistory(QFileDialog* self, char** paths, uint64_t* paths_Lengths, size_t paths_len) {
	QList<QString> paths_QList;
	paths_QList.reserve(paths_len);
	for(size_t i = 0; i < paths_len; ++i) {
		paths_QList.push_back(QString::fromUtf8(paths[i], paths_Lengths[i]));
	}
	self->setHistory(paths_QList);
}

void QFileDialog_History(QFileDialog* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->history();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QFileDialog_SetItemDelegate(QFileDialog* self, QAbstractItemDelegate* delegate) {
	self->setItemDelegate(delegate);
}

QAbstractItemDelegate* QFileDialog_ItemDelegate(QFileDialog* self) {
	return self->itemDelegate();
}

void QFileDialog_SetIconProvider(QFileDialog* self, QFileIconProvider* provider) {
	self->setIconProvider(provider);
}

QFileIconProvider* QFileDialog_IconProvider(QFileDialog* self) {
	return self->iconProvider();
}

void QFileDialog_SetSupportedSchemes(QFileDialog* self, char** schemes, uint64_t* schemes_Lengths, size_t schemes_len) {
	QList<QString> schemes_QList;
	schemes_QList.reserve(schemes_len);
	for(size_t i = 0; i < schemes_len; ++i) {
		schemes_QList.push_back(QString::fromUtf8(schemes[i], schemes_Lengths[i]));
	}
	self->setSupportedSchemes(schemes_QList);
}

void QFileDialog_SupportedSchemes(QFileDialog* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->supportedSchemes();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QFileDialog_SetProxyModel(QFileDialog* self, QAbstractProxyModel* model) {
	self->setProxyModel(model);
}

QAbstractProxyModel* QFileDialog_ProxyModel(QFileDialog* self) {
	return self->proxyModel();
}

void QFileDialog_SetVisible(QFileDialog* self, bool visible) {
	self->setVisible(visible);
}

void QFileDialog_FileSelected(QFileDialog* self, const char* file, size_t file_Strlen) {
	QString file_QString = QString::fromUtf8(file, file_Strlen);
	self->fileSelected(file_QString);
}

void QFileDialog_connect_FileSelected(QFileDialog* self, void* slot) {
	QFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QString&)>(&QFileDialog::fileSelected), self, [=](const QString& file) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFileDialog_FilesSelected(QFileDialog* self, char** files, uint64_t* files_Lengths, size_t files_len) {
	QList<QString> files_QList;
	files_QList.reserve(files_len);
	for(size_t i = 0; i < files_len; ++i) {
		files_QList.push_back(QString::fromUtf8(files[i], files_Lengths[i]));
	}
	self->filesSelected(files_QList);
}

void QFileDialog_connect_FilesSelected(QFileDialog* self, void* slot) {
	QFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QStringList&)>(&QFileDialog::filesSelected), self, [=](const QStringList& files) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFileDialog_CurrentChanged(QFileDialog* self, const char* path, size_t path_Strlen) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	self->currentChanged(path_QString);
}

void QFileDialog_connect_CurrentChanged(QFileDialog* self, void* slot) {
	QFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QString&)>(&QFileDialog::currentChanged), self, [=](const QString& path) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFileDialog_DirectoryEntered(QFileDialog* self, const char* directory, size_t directory_Strlen) {
	QString directory_QString = QString::fromUtf8(directory, directory_Strlen);
	self->directoryEntered(directory_QString);
}

void QFileDialog_connect_DirectoryEntered(QFileDialog* self, void* slot) {
	QFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QString&)>(&QFileDialog::directoryEntered), self, [=](const QString& directory) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFileDialog_UrlSelected(QFileDialog* self, QUrl* url) {
	self->urlSelected(*url);
}

void QFileDialog_connect_UrlSelected(QFileDialog* self, void* slot) {
	QFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QUrl&)>(&QFileDialog::urlSelected), self, [=](const QUrl& url) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFileDialog_UrlsSelected(QFileDialog* self, QUrl** urls, size_t urls_len) {
	QList<QUrl> urls_QList;
	urls_QList.reserve(urls_len);
	for(size_t i = 0; i < urls_len; ++i) {
		urls_QList.push_back(*(urls[i]));
	}
	self->urlsSelected(urls_QList);
}

void QFileDialog_connect_UrlsSelected(QFileDialog* self, void* slot) {
	QFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QList<QUrl>&)>(&QFileDialog::urlsSelected), self, [=](const QList<QUrl>& urls) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFileDialog_CurrentUrlChanged(QFileDialog* self, QUrl* url) {
	self->currentUrlChanged(*url);
}

void QFileDialog_connect_CurrentUrlChanged(QFileDialog* self, void* slot) {
	QFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QUrl&)>(&QFileDialog::currentUrlChanged), self, [=](const QUrl& url) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFileDialog_DirectoryUrlEntered(QFileDialog* self, QUrl* directory) {
	self->directoryUrlEntered(*directory);
}

void QFileDialog_connect_DirectoryUrlEntered(QFileDialog* self, void* slot) {
	QFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QUrl&)>(&QFileDialog::directoryUrlEntered), self, [=](const QUrl& directory) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFileDialog_FilterSelected(QFileDialog* self, const char* filter, size_t filter_Strlen) {
	QString filter_QString = QString::fromUtf8(filter, filter_Strlen);
	self->filterSelected(filter_QString);
}

void QFileDialog_connect_FilterSelected(QFileDialog* self, void* slot) {
	QFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QString&)>(&QFileDialog::filterSelected), self, [=](const QString& filter) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFileDialog_SaveFileContent(QByteArray* fileContent) {
	QFileDialog::saveFileContent(*fileContent);
}

void QFileDialog_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QFileDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileDialog_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFileDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileDialog_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QFileDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileDialog_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFileDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileDialog_SaveFileContent2(QByteArray* fileContent, const char* fileNameHint, size_t fileNameHint_Strlen) {
	QString fileNameHint_QString = QString::fromUtf8(fileNameHint, fileNameHint_Strlen);
	QFileDialog::saveFileContent(*fileContent, fileNameHint_QString);
}

void QFileDialog_Delete(QFileDialog* self) {
	delete self;
}

