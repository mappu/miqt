#include "gen_qwizard.h"
#include "qwizard.h"

#include <QList>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QVariant>
#include <QWidget>
#include <QWizard>
#include <QWizardPage>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QWizard_MetaObject(QWizard* self) {
	return (QMetaObject*) self->metaObject();
}

void QWizard_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QWizard::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizard_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QWizard::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QWizard_AddPage(QWizard* self, QWizardPage* page) {
	return self->addPage(page);
}

void QWizard_SetPage(QWizard* self, int id, QWizardPage* page) {
	self->setPage(static_cast<int>(id), page);
}

void QWizard_RemovePage(QWizard* self, int id) {
	self->removePage(static_cast<int>(id));
}

QWizardPage* QWizard_Page(QWizard* self, int id) {
	return self->page(static_cast<int>(id));
}

bool QWizard_HasVisitedPage(QWizard* self, int id) {
	return self->hasVisitedPage(static_cast<int>(id));
}

void QWizard_VisitedPages(QWizard* self, int** _out, size_t* _out_len) {
	QList<int> ret = self->visitedPages();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* __out = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QWizard_VisitedIds(QWizard* self, int** _out, size_t* _out_len) {
	QList<int> ret = self->visitedIds();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* __out = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QWizard_PageIds(QWizard* self, int** _out, size_t* _out_len) {
	QList<int> ret = self->pageIds();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* __out = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QWizard_SetStartId(QWizard* self, int id) {
	self->setStartId(static_cast<int>(id));
}

int QWizard_StartId(QWizard* self) {
	return self->startId();
}

QWizardPage* QWizard_CurrentPage(QWizard* self) {
	return self->currentPage();
}

int QWizard_CurrentId(QWizard* self) {
	return self->currentId();
}

bool QWizard_ValidateCurrentPage(QWizard* self) {
	return self->validateCurrentPage();
}

int QWizard_NextId(QWizard* self) {
	return self->nextId();
}

void QWizard_SetField(QWizard* self, const char* name, size_t name_Strlen, QVariant* value) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	self->setField(name_QString, *value);
}

QVariant* QWizard_Field(QWizard* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QVariant ret = self->field(name_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QWizard_SetSideWidget(QWizard* self, QWidget* widget) {
	self->setSideWidget(widget);
}

QWidget* QWizard_SideWidget(QWizard* self) {
	return self->sideWidget();
}

void QWizard_SetDefaultProperty(QWizard* self, char* className, char* property, char* changedSignal) {
	self->setDefaultProperty(className, property, changedSignal);
}

void QWizard_SetVisible(QWizard* self, bool visible) {
	self->setVisible(visible);
}

QSize* QWizard_SizeHint(QWizard* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QWizard_CurrentIdChanged(QWizard* self, int id) {
	self->currentIdChanged(static_cast<int>(id));
}

void QWizard_connect_CurrentIdChanged(QWizard* self, void* slot) {
	QWizard::connect(self, static_cast<void (QWizard::*)(int)>(&QWizard::currentIdChanged), self, [=](int id) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWizard_HelpRequested(QWizard* self) {
	self->helpRequested();
}

void QWizard_connect_HelpRequested(QWizard* self, void* slot) {
	QWizard::connect(self, static_cast<void (QWizard::*)()>(&QWizard::helpRequested), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWizard_CustomButtonClicked(QWizard* self, int which) {
	self->customButtonClicked(static_cast<int>(which));
}

void QWizard_connect_CustomButtonClicked(QWizard* self, void* slot) {
	QWizard::connect(self, static_cast<void (QWizard::*)(int)>(&QWizard::customButtonClicked), self, [=](int which) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWizard_PageAdded(QWizard* self, int id) {
	self->pageAdded(static_cast<int>(id));
}

void QWizard_connect_PageAdded(QWizard* self, void* slot) {
	QWizard::connect(self, static_cast<void (QWizard::*)(int)>(&QWizard::pageAdded), self, [=](int id) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWizard_PageRemoved(QWizard* self, int id) {
	self->pageRemoved(static_cast<int>(id));
}

void QWizard_connect_PageRemoved(QWizard* self, void* slot) {
	QWizard::connect(self, static_cast<void (QWizard::*)(int)>(&QWizard::pageRemoved), self, [=](int id) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWizard_Back(QWizard* self) {
	self->back();
}

void QWizard_Next(QWizard* self) {
	self->next();
}

void QWizard_Restart(QWizard* self) {
	self->restart();
}

void QWizard_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QWizard::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizard_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QWizard::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizard_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QWizard::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizard_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QWizard::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizard_Delete(QWizard* self) {
	delete self;
}

QWizardPage* QWizardPage_new() {
	return new QWizardPage();
}

QWizardPage* QWizardPage_new2(QWidget* parent) {
	return new QWizardPage(parent);
}

QMetaObject* QWizardPage_MetaObject(QWizardPage* self) {
	return (QMetaObject*) self->metaObject();
}

void QWizardPage_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QWizardPage::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizardPage_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QWizardPage::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizardPage_SetTitle(QWizardPage* self, const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	self->setTitle(title_QString);
}

void QWizardPage_Title(QWizardPage* self, char** _out, int* _out_Strlen) {
	QString ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizardPage_SetSubTitle(QWizardPage* self, const char* subTitle, size_t subTitle_Strlen) {
	QString subTitle_QString = QString::fromUtf8(subTitle, subTitle_Strlen);
	self->setSubTitle(subTitle_QString);
}

void QWizardPage_SubTitle(QWizardPage* self, char** _out, int* _out_Strlen) {
	QString ret = self->subTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizardPage_SetFinalPage(QWizardPage* self, bool finalPage) {
	self->setFinalPage(finalPage);
}

bool QWizardPage_IsFinalPage(QWizardPage* self) {
	return self->isFinalPage();
}

void QWizardPage_SetCommitPage(QWizardPage* self, bool commitPage) {
	self->setCommitPage(commitPage);
}

bool QWizardPage_IsCommitPage(QWizardPage* self) {
	return self->isCommitPage();
}

void QWizardPage_InitializePage(QWizardPage* self) {
	self->initializePage();
}

void QWizardPage_CleanupPage(QWizardPage* self) {
	self->cleanupPage();
}

bool QWizardPage_ValidatePage(QWizardPage* self) {
	return self->validatePage();
}

bool QWizardPage_IsComplete(QWizardPage* self) {
	return self->isComplete();
}

int QWizardPage_NextId(QWizardPage* self) {
	return self->nextId();
}

void QWizardPage_CompleteChanged(QWizardPage* self) {
	self->completeChanged();
}

void QWizardPage_connect_CompleteChanged(QWizardPage* self, void* slot) {
	QWizardPage::connect(self, static_cast<void (QWizardPage::*)()>(&QWizardPage::completeChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWizardPage_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QWizardPage::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizardPage_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QWizardPage::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizardPage_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QWizardPage::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizardPage_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QWizardPage::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizardPage_Delete(QWizardPage* self) {
	delete self;
}

