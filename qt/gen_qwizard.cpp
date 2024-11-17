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
#include <qwizard.h>
#include "gen_qwizard.h"
#include "_cgo_export.h"

QWizard* QWizard_new(QWidget* parent) {
	return new QWizard(parent);
}

QWizard* QWizard_new2() {
	return new QWizard();
}

QWizard* QWizard_new3(QWidget* parent, int flags) {
	return new QWizard(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QWizard_MetaObject(const QWizard* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWizard_Metacast(QWizard* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWizard_Tr(const char* s) {
	QString _ret = QWizard::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWizard_TrUtf8(const char* s) {
	QString _ret = QWizard::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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

QWizardPage* QWizard_Page(const QWizard* self, int id) {
	return self->page(static_cast<int>(id));
}

bool QWizard_HasVisitedPage(const QWizard* self, int id) {
	return self->hasVisitedPage(static_cast<int>(id));
}

struct miqt_array /* of int */  QWizard_VisitedPages(const QWizard* self) {
	QList<int> _ret = self->visitedPages();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QWizard_VisitedIds(const QWizard* self) {
	QList<int> _ret = self->visitedIds();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QWizard_PageIds(const QWizard* self) {
	QList<int> _ret = self->pageIds();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QWizard_SetStartId(QWizard* self, int id) {
	self->setStartId(static_cast<int>(id));
}

int QWizard_StartId(const QWizard* self) {
	return self->startId();
}

QWizardPage* QWizard_CurrentPage(const QWizard* self) {
	return self->currentPage();
}

int QWizard_CurrentId(const QWizard* self) {
	return self->currentId();
}

bool QWizard_ValidateCurrentPage(QWizard* self) {
	return self->validateCurrentPage();
}

int QWizard_NextId(const QWizard* self) {
	return self->nextId();
}

void QWizard_SetField(QWizard* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setField(name_QString, *value);
}

QVariant* QWizard_Field(const QWizard* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(self->field(name_QString));
}

void QWizard_SetWizardStyle(QWizard* self, int style) {
	self->setWizardStyle(static_cast<QWizard::WizardStyle>(style));
}

int QWizard_WizardStyle(const QWizard* self) {
	QWizard::WizardStyle _ret = self->wizardStyle();
	return static_cast<int>(_ret);
}

void QWizard_SetOption(QWizard* self, int option) {
	self->setOption(static_cast<QWizard::WizardOption>(option));
}

bool QWizard_TestOption(const QWizard* self, int option) {
	return self->testOption(static_cast<QWizard::WizardOption>(option));
}

void QWizard_SetOptions(QWizard* self, int options) {
	self->setOptions(static_cast<QWizard::WizardOptions>(options));
}

int QWizard_Options(const QWizard* self) {
	QWizard::WizardOptions _ret = self->options();
	return static_cast<int>(_ret);
}

void QWizard_SetButtonText(QWizard* self, int which, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setButtonText(static_cast<QWizard::WizardButton>(which), text_QString);
}

struct miqt_string QWizard_ButtonText(const QWizard* self, int which) {
	QString _ret = self->buttonText(static_cast<QWizard::WizardButton>(which));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWizard_SetButtonLayout(QWizard* self, struct miqt_array /* of int */  layout) {
	QList<QWizard::WizardButton> layout_QList;
	layout_QList.reserve(layout.len);
	int* layout_arr = static_cast<int*>(layout.data);
	for(size_t i = 0; i < layout.len; ++i) {
		layout_QList.push_back(static_cast<QWizard::WizardButton>(layout_arr[i]));
	}
	self->setButtonLayout(layout_QList);
}

void QWizard_SetButton(QWizard* self, int which, QAbstractButton* button) {
	self->setButton(static_cast<QWizard::WizardButton>(which), button);
}

QAbstractButton* QWizard_Button(const QWizard* self, int which) {
	return self->button(static_cast<QWizard::WizardButton>(which));
}

void QWizard_SetTitleFormat(QWizard* self, int format) {
	self->setTitleFormat(static_cast<Qt::TextFormat>(format));
}

int QWizard_TitleFormat(const QWizard* self) {
	Qt::TextFormat _ret = self->titleFormat();
	return static_cast<int>(_ret);
}

void QWizard_SetSubTitleFormat(QWizard* self, int format) {
	self->setSubTitleFormat(static_cast<Qt::TextFormat>(format));
}

int QWizard_SubTitleFormat(const QWizard* self) {
	Qt::TextFormat _ret = self->subTitleFormat();
	return static_cast<int>(_ret);
}

void QWizard_SetPixmap(QWizard* self, int which, QPixmap* pixmap) {
	self->setPixmap(static_cast<QWizard::WizardPixmap>(which), *pixmap);
}

QPixmap* QWizard_Pixmap(const QWizard* self, int which) {
	return new QPixmap(self->pixmap(static_cast<QWizard::WizardPixmap>(which)));
}

void QWizard_SetSideWidget(QWizard* self, QWidget* widget) {
	self->setSideWidget(widget);
}

QWidget* QWizard_SideWidget(const QWizard* self) {
	return self->sideWidget();
}

void QWizard_SetDefaultProperty(QWizard* self, const char* className, const char* property, const char* changedSignal) {
	self->setDefaultProperty(className, property, changedSignal);
}

void QWizard_SetVisible(QWizard* self, bool visible) {
	self->setVisible(visible);
}

QSize* QWizard_SizeHint(const QWizard* self) {
	return new QSize(self->sizeHint());
}

void QWizard_CurrentIdChanged(QWizard* self, int id) {
	self->currentIdChanged(static_cast<int>(id));
}

void QWizard_connect_CurrentIdChanged(QWizard* self, intptr_t slot) {
	QWizard::connect(self, static_cast<void (QWizard::*)(int)>(&QWizard::currentIdChanged), self, [=](int id) {
		int sigval1 = id;
		miqt_exec_callback_QWizard_CurrentIdChanged(slot, sigval1);
	});
}

void QWizard_HelpRequested(QWizard* self) {
	self->helpRequested();
}

void QWizard_connect_HelpRequested(QWizard* self, intptr_t slot) {
	QWizard::connect(self, static_cast<void (QWizard::*)()>(&QWizard::helpRequested), self, [=]() {
		miqt_exec_callback_QWizard_HelpRequested(slot);
	});
}

void QWizard_CustomButtonClicked(QWizard* self, int which) {
	self->customButtonClicked(static_cast<int>(which));
}

void QWizard_connect_CustomButtonClicked(QWizard* self, intptr_t slot) {
	QWizard::connect(self, static_cast<void (QWizard::*)(int)>(&QWizard::customButtonClicked), self, [=](int which) {
		int sigval1 = which;
		miqt_exec_callback_QWizard_CustomButtonClicked(slot, sigval1);
	});
}

void QWizard_PageAdded(QWizard* self, int id) {
	self->pageAdded(static_cast<int>(id));
}

void QWizard_connect_PageAdded(QWizard* self, intptr_t slot) {
	QWizard::connect(self, static_cast<void (QWizard::*)(int)>(&QWizard::pageAdded), self, [=](int id) {
		int sigval1 = id;
		miqt_exec_callback_QWizard_PageAdded(slot, sigval1);
	});
}

void QWizard_PageRemoved(QWizard* self, int id) {
	self->pageRemoved(static_cast<int>(id));
}

void QWizard_connect_PageRemoved(QWizard* self, intptr_t slot) {
	QWizard::connect(self, static_cast<void (QWizard::*)(int)>(&QWizard::pageRemoved), self, [=](int id) {
		int sigval1 = id;
		miqt_exec_callback_QWizard_PageRemoved(slot, sigval1);
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

struct miqt_string QWizard_Tr2(const char* s, const char* c) {
	QString _ret = QWizard::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWizard_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWizard::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWizard_TrUtf82(const char* s, const char* c) {
	QString _ret = QWizard::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWizard_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QWizard::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWizard_SetOption2(QWizard* self, int option, bool on) {
	self->setOption(static_cast<QWizard::WizardOption>(option), on);
}

void QWizard_Delete(QWizard* self) {
	delete self;
}

QWizardPage* QWizardPage_new(QWidget* parent) {
	return new QWizardPage(parent);
}

QWizardPage* QWizardPage_new2() {
	return new QWizardPage();
}

QMetaObject* QWizardPage_MetaObject(const QWizardPage* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWizardPage_Metacast(QWizardPage* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWizardPage_Tr(const char* s) {
	QString _ret = QWizardPage::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWizardPage_TrUtf8(const char* s) {
	QString _ret = QWizardPage::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWizardPage_SetTitle(QWizardPage* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setTitle(title_QString);
}

struct miqt_string QWizardPage_Title(const QWizardPage* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWizardPage_SetSubTitle(QWizardPage* self, struct miqt_string subTitle) {
	QString subTitle_QString = QString::fromUtf8(subTitle.data, subTitle.len);
	self->setSubTitle(subTitle_QString);
}

struct miqt_string QWizardPage_SubTitle(const QWizardPage* self) {
	QString _ret = self->subTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWizardPage_SetPixmap(QWizardPage* self, int which, QPixmap* pixmap) {
	self->setPixmap(static_cast<QWizard::WizardPixmap>(which), *pixmap);
}

QPixmap* QWizardPage_Pixmap(const QWizardPage* self, int which) {
	return new QPixmap(self->pixmap(static_cast<QWizard::WizardPixmap>(which)));
}

void QWizardPage_SetFinalPage(QWizardPage* self, bool finalPage) {
	self->setFinalPage(finalPage);
}

bool QWizardPage_IsFinalPage(const QWizardPage* self) {
	return self->isFinalPage();
}

void QWizardPage_SetCommitPage(QWizardPage* self, bool commitPage) {
	self->setCommitPage(commitPage);
}

bool QWizardPage_IsCommitPage(const QWizardPage* self) {
	return self->isCommitPage();
}

void QWizardPage_SetButtonText(QWizardPage* self, int which, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setButtonText(static_cast<QWizard::WizardButton>(which), text_QString);
}

struct miqt_string QWizardPage_ButtonText(const QWizardPage* self, int which) {
	QString _ret = self->buttonText(static_cast<QWizard::WizardButton>(which));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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

bool QWizardPage_IsComplete(const QWizardPage* self) {
	return self->isComplete();
}

int QWizardPage_NextId(const QWizardPage* self) {
	return self->nextId();
}

void QWizardPage_CompleteChanged(QWizardPage* self) {
	self->completeChanged();
}

void QWizardPage_connect_CompleteChanged(QWizardPage* self, intptr_t slot) {
	QWizardPage::connect(self, static_cast<void (QWizardPage::*)()>(&QWizardPage::completeChanged), self, [=]() {
		miqt_exec_callback_QWizardPage_CompleteChanged(slot);
	});
}

struct miqt_string QWizardPage_Tr2(const char* s, const char* c) {
	QString _ret = QWizardPage::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWizardPage_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWizardPage::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWizardPage_TrUtf82(const char* s, const char* c) {
	QString _ret = QWizardPage::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWizardPage_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QWizardPage::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWizardPage_Delete(QWizardPage* self) {
	delete self;
}

