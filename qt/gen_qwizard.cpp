#include <QAbstractButton>
#include <QList>
#include <QMetaObject>
#include <QPixmap>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWidget>
#include <QWizard>
#include <QWizardPage>
#include "qwizard.h"

#include "gen_qwizard.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QWizard* QWizard_new() {
	return new QWizard();
}

QWizard* QWizard_new2(QWidget* parent) {
	return new QWizard(parent);
}

QWizard* QWizard_new3(QWidget* parent, int flags) {
	return new QWizard(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QWizard_MetaObject(QWizard* self) {
	return (QMetaObject*) const_cast<const QWizard*>(self)->metaObject();
}

void QWizard_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QWizard::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizard_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
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
	return const_cast<const QWizard*>(self)->page(static_cast<int>(id));
}

bool QWizard_HasVisitedPage(QWizard* self, int id) {
	return const_cast<const QWizard*>(self)->hasVisitedPage(static_cast<int>(id));
}

void QWizard_VisitedPages(QWizard* self, int** _out, size_t* _out_len) {
	QList<int> ret = const_cast<const QWizard*>(self)->visitedPages();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* __out = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QWizard_VisitedIds(QWizard* self, int** _out, size_t* _out_len) {
	QList<int> ret = const_cast<const QWizard*>(self)->visitedIds();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* __out = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QWizard_PageIds(QWizard* self, int** _out, size_t* _out_len) {
	QList<int> ret = const_cast<const QWizard*>(self)->pageIds();
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
	return const_cast<const QWizard*>(self)->startId();
}

QWizardPage* QWizard_CurrentPage(QWizard* self) {
	return const_cast<const QWizard*>(self)->currentPage();
}

int QWizard_CurrentId(QWizard* self) {
	return const_cast<const QWizard*>(self)->currentId();
}

bool QWizard_ValidateCurrentPage(QWizard* self) {
	return self->validateCurrentPage();
}

int QWizard_NextId(QWizard* self) {
	return const_cast<const QWizard*>(self)->nextId();
}

void QWizard_SetField(QWizard* self, const char* name, size_t name_Strlen, QVariant* value) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	self->setField(name_QString, *value);
}

QVariant* QWizard_Field(QWizard* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QVariant ret = const_cast<const QWizard*>(self)->field(name_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QWizard_SetWizardStyle(QWizard* self, uintptr_t style) {
	self->setWizardStyle(static_cast<QWizard::WizardStyle>(style));
}

uintptr_t QWizard_WizardStyle(QWizard* self) {
	QWizard::WizardStyle ret = const_cast<const QWizard*>(self)->wizardStyle();
	return static_cast<uintptr_t>(ret);
}

void QWizard_SetOption(QWizard* self, uintptr_t option) {
	self->setOption(static_cast<QWizard::WizardOption>(option));
}

bool QWizard_TestOption(QWizard* self, uintptr_t option) {
	return const_cast<const QWizard*>(self)->testOption(static_cast<QWizard::WizardOption>(option));
}

void QWizard_SetOptions(QWizard* self, int options) {
	self->setOptions(static_cast<QWizard::WizardOptions>(options));
}

int QWizard_Options(QWizard* self) {
	QWizard::WizardOptions ret = const_cast<const QWizard*>(self)->options();
	return static_cast<int>(ret);
}

void QWizard_SetButtonText(QWizard* self, int which, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setButtonText(static_cast<QWizard::WizardButton>(which), text_QString);
}

void QWizard_ButtonText(QWizard* self, int which, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QWizard*>(self)->buttonText(static_cast<QWizard::WizardButton>(which));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizard_SetButtonLayout(QWizard* self, int* layout, size_t layout_len) {
	QList<QWizard::WizardButton> layout_QList;
	layout_QList.reserve(layout_len);
	for(size_t i = 0; i < layout_len; ++i) {
		layout_QList.push_back(static_cast<QWizard::WizardButton>(layout[i]));
	}
	self->setButtonLayout(layout_QList);
}

void QWizard_SetButton(QWizard* self, int which, QAbstractButton* button) {
	self->setButton(static_cast<QWizard::WizardButton>(which), button);
}

QAbstractButton* QWizard_Button(QWizard* self, int which) {
	return const_cast<const QWizard*>(self)->button(static_cast<QWizard::WizardButton>(which));
}

void QWizard_SetTitleFormat(QWizard* self, uintptr_t format) {
	self->setTitleFormat(static_cast<Qt::TextFormat>(format));
}

uintptr_t QWizard_TitleFormat(QWizard* self) {
	Qt::TextFormat ret = const_cast<const QWizard*>(self)->titleFormat();
	return static_cast<uintptr_t>(ret);
}

void QWizard_SetSubTitleFormat(QWizard* self, uintptr_t format) {
	self->setSubTitleFormat(static_cast<Qt::TextFormat>(format));
}

uintptr_t QWizard_SubTitleFormat(QWizard* self) {
	Qt::TextFormat ret = const_cast<const QWizard*>(self)->subTitleFormat();
	return static_cast<uintptr_t>(ret);
}

void QWizard_SetPixmap(QWizard* self, uintptr_t which, QPixmap* pixmap) {
	self->setPixmap(static_cast<QWizard::WizardPixmap>(which), *pixmap);
}

QPixmap* QWizard_Pixmap(QWizard* self, uintptr_t which) {
	QPixmap ret = const_cast<const QWizard*>(self)->pixmap(static_cast<QWizard::WizardPixmap>(which));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

void QWizard_SetSideWidget(QWizard* self, QWidget* widget) {
	self->setSideWidget(widget);
}

QWidget* QWizard_SideWidget(QWizard* self) {
	return const_cast<const QWizard*>(self)->sideWidget();
}

void QWizard_SetDefaultProperty(QWizard* self, const char* className, const char* property, const char* changedSignal) {
	self->setDefaultProperty(className, property, changedSignal);
}

void QWizard_SetVisible(QWizard* self, bool visible) {
	self->setVisible(visible);
}

QSize* QWizard_SizeHint(QWizard* self) {
	QSize ret = const_cast<const QWizard*>(self)->sizeHint();
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

void QWizard_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QWizard::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizard_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QWizard::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizard_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QWizard::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizard_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QWizard::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizard_SetOption2(QWizard* self, uintptr_t option, bool on) {
	self->setOption(static_cast<QWizard::WizardOption>(option), on);
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
	return (QMetaObject*) const_cast<const QWizardPage*>(self)->metaObject();
}

void QWizardPage_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QWizardPage::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizardPage_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
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
	QString ret = const_cast<const QWizardPage*>(self)->title();
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
	QString ret = const_cast<const QWizardPage*>(self)->subTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizardPage_SetPixmap(QWizardPage* self, uintptr_t which, QPixmap* pixmap) {
	self->setPixmap(static_cast<QWizard::WizardPixmap>(which), *pixmap);
}

QPixmap* QWizardPage_Pixmap(QWizardPage* self, uintptr_t which) {
	QPixmap ret = const_cast<const QWizardPage*>(self)->pixmap(static_cast<QWizard::WizardPixmap>(which));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

void QWizardPage_SetFinalPage(QWizardPage* self, bool finalPage) {
	self->setFinalPage(finalPage);
}

bool QWizardPage_IsFinalPage(QWizardPage* self) {
	return const_cast<const QWizardPage*>(self)->isFinalPage();
}

void QWizardPage_SetCommitPage(QWizardPage* self, bool commitPage) {
	self->setCommitPage(commitPage);
}

bool QWizardPage_IsCommitPage(QWizardPage* self) {
	return const_cast<const QWizardPage*>(self)->isCommitPage();
}

void QWizardPage_SetButtonText(QWizardPage* self, int which, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setButtonText(static_cast<QWizard::WizardButton>(which), text_QString);
}

void QWizardPage_ButtonText(QWizardPage* self, int which, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QWizardPage*>(self)->buttonText(static_cast<QWizard::WizardButton>(which));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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
	return const_cast<const QWizardPage*>(self)->isComplete();
}

int QWizardPage_NextId(QWizardPage* self) {
	return const_cast<const QWizardPage*>(self)->nextId();
}

void QWizardPage_CompleteChanged(QWizardPage* self) {
	self->completeChanged();
}

void QWizardPage_connect_CompleteChanged(QWizardPage* self, void* slot) {
	QWizardPage::connect(self, static_cast<void (QWizardPage::*)()>(&QWizardPage::completeChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWizardPage_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QWizardPage::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizardPage_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QWizardPage::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizardPage_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QWizardPage::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWizardPage_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
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

