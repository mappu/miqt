#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QComboBox>
#include <QCompleter>
#include <QEvent>
#include <QIcon>
#include <QLineEdit>
#include <QList>
#include <QMetaObject>
#include <QModelIndex>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QValidator>
#include <QVariant>
#include <QWidget>
#include <qcombobox.h>
#include "gen_qcombobox.h"
#include "_cgo_export.h"

QComboBox* QComboBox_new(QWidget* parent) {
	return new QComboBox(parent);
}

QComboBox* QComboBox_new2() {
	return new QComboBox();
}

QMetaObject* QComboBox_MetaObject(const QComboBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QComboBox_Metacast(QComboBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QComboBox_Tr(const char* s) {
	QString _ret = QComboBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QComboBox_TrUtf8(const char* s) {
	QString _ret = QComboBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QComboBox_MaxVisibleItems(const QComboBox* self) {
	return self->maxVisibleItems();
}

void QComboBox_SetMaxVisibleItems(QComboBox* self, int maxItems) {
	self->setMaxVisibleItems(static_cast<int>(maxItems));
}

int QComboBox_Count(const QComboBox* self) {
	return self->count();
}

void QComboBox_SetMaxCount(QComboBox* self, int max) {
	self->setMaxCount(static_cast<int>(max));
}

int QComboBox_MaxCount(const QComboBox* self) {
	return self->maxCount();
}

bool QComboBox_AutoCompletion(const QComboBox* self) {
	return self->autoCompletion();
}

void QComboBox_SetAutoCompletion(QComboBox* self, bool enable) {
	self->setAutoCompletion(enable);
}

int QComboBox_AutoCompletionCaseSensitivity(const QComboBox* self) {
	Qt::CaseSensitivity _ret = self->autoCompletionCaseSensitivity();
	return static_cast<int>(_ret);
}

void QComboBox_SetAutoCompletionCaseSensitivity(QComboBox* self, int sensitivity) {
	self->setAutoCompletionCaseSensitivity(static_cast<Qt::CaseSensitivity>(sensitivity));
}

bool QComboBox_DuplicatesEnabled(const QComboBox* self) {
	return self->duplicatesEnabled();
}

void QComboBox_SetDuplicatesEnabled(QComboBox* self, bool enable) {
	self->setDuplicatesEnabled(enable);
}

void QComboBox_SetFrame(QComboBox* self, bool frame) {
	self->setFrame(frame);
}

bool QComboBox_HasFrame(const QComboBox* self) {
	return self->hasFrame();
}

int QComboBox_FindText(const QComboBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->findText(text_QString);
}

int QComboBox_FindData(const QComboBox* self, QVariant* data) {
	return self->findData(*data);
}

int QComboBox_InsertPolicy(const QComboBox* self) {
	QComboBox::InsertPolicy _ret = self->insertPolicy();
	return static_cast<int>(_ret);
}

void QComboBox_SetInsertPolicy(QComboBox* self, int policy) {
	self->setInsertPolicy(static_cast<QComboBox::InsertPolicy>(policy));
}

int QComboBox_SizeAdjustPolicy(const QComboBox* self) {
	QComboBox::SizeAdjustPolicy _ret = self->sizeAdjustPolicy();
	return static_cast<int>(_ret);
}

void QComboBox_SetSizeAdjustPolicy(QComboBox* self, int policy) {
	self->setSizeAdjustPolicy(static_cast<QComboBox::SizeAdjustPolicy>(policy));
}

int QComboBox_MinimumContentsLength(const QComboBox* self) {
	return self->minimumContentsLength();
}

void QComboBox_SetMinimumContentsLength(QComboBox* self, int characters) {
	self->setMinimumContentsLength(static_cast<int>(characters));
}

QSize* QComboBox_IconSize(const QComboBox* self) {
	return new QSize(self->iconSize());
}

void QComboBox_SetIconSize(QComboBox* self, QSize* size) {
	self->setIconSize(*size);
}

void QComboBox_SetPlaceholderText(QComboBox* self, struct miqt_string placeholderText) {
	QString placeholderText_QString = QString::fromUtf8(placeholderText.data, placeholderText.len);
	self->setPlaceholderText(placeholderText_QString);
}

struct miqt_string QComboBox_PlaceholderText(const QComboBox* self) {
	QString _ret = self->placeholderText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QComboBox_IsEditable(const QComboBox* self) {
	return self->isEditable();
}

void QComboBox_SetEditable(QComboBox* self, bool editable) {
	self->setEditable(editable);
}

void QComboBox_SetLineEdit(QComboBox* self, QLineEdit* edit) {
	self->setLineEdit(edit);
}

QLineEdit* QComboBox_LineEdit(const QComboBox* self) {
	return self->lineEdit();
}

void QComboBox_SetValidator(QComboBox* self, QValidator* v) {
	self->setValidator(v);
}

QValidator* QComboBox_Validator(const QComboBox* self) {
	return (QValidator*) self->validator();
}

void QComboBox_SetCompleter(QComboBox* self, QCompleter* c) {
	self->setCompleter(c);
}

QCompleter* QComboBox_Completer(const QComboBox* self) {
	return self->completer();
}

QAbstractItemDelegate* QComboBox_ItemDelegate(const QComboBox* self) {
	return self->itemDelegate();
}

void QComboBox_SetItemDelegate(QComboBox* self, QAbstractItemDelegate* delegate) {
	self->setItemDelegate(delegate);
}

QAbstractItemModel* QComboBox_Model(const QComboBox* self) {
	return self->model();
}

void QComboBox_SetModel(QComboBox* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QModelIndex* QComboBox_RootModelIndex(const QComboBox* self) {
	return new QModelIndex(self->rootModelIndex());
}

void QComboBox_SetRootModelIndex(QComboBox* self, QModelIndex* index) {
	self->setRootModelIndex(*index);
}

int QComboBox_ModelColumn(const QComboBox* self) {
	return self->modelColumn();
}

void QComboBox_SetModelColumn(QComboBox* self, int visibleColumn) {
	self->setModelColumn(static_cast<int>(visibleColumn));
}

int QComboBox_CurrentIndex(const QComboBox* self) {
	return self->currentIndex();
}

struct miqt_string QComboBox_CurrentText(const QComboBox* self) {
	QString _ret = self->currentText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVariant* QComboBox_CurrentData(const QComboBox* self) {
	return new QVariant(self->currentData());
}

struct miqt_string QComboBox_ItemText(const QComboBox* self, int index) {
	QString _ret = self->itemText(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QIcon* QComboBox_ItemIcon(const QComboBox* self, int index) {
	return new QIcon(self->itemIcon(static_cast<int>(index)));
}

QVariant* QComboBox_ItemData(const QComboBox* self, int index) {
	return new QVariant(self->itemData(static_cast<int>(index)));
}

void QComboBox_AddItem(QComboBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->addItem(text_QString);
}

void QComboBox_AddItem2(QComboBox* self, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->addItem(*icon, text_QString);
}

void QComboBox_AddItems(QComboBox* self, struct miqt_array /* of struct miqt_string */ texts) {
	QStringList texts_QList;
	texts_QList.reserve(texts.len);
	struct miqt_string* texts_arr = static_cast<struct miqt_string*>(texts.data);
	for(size_t i = 0; i < texts.len; ++i) {
		QString texts_arr_i_QString = QString::fromUtf8(texts_arr[i].data, texts_arr[i].len);
		texts_QList.push_back(texts_arr_i_QString);
	}
	self->addItems(texts_QList);
}

void QComboBox_InsertItem(QComboBox* self, int index, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertItem(static_cast<int>(index), text_QString);
}

void QComboBox_InsertItem2(QComboBox* self, int index, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertItem(static_cast<int>(index), *icon, text_QString);
}

void QComboBox_InsertItems(QComboBox* self, int index, struct miqt_array /* of struct miqt_string */ texts) {
	QStringList texts_QList;
	texts_QList.reserve(texts.len);
	struct miqt_string* texts_arr = static_cast<struct miqt_string*>(texts.data);
	for(size_t i = 0; i < texts.len; ++i) {
		QString texts_arr_i_QString = QString::fromUtf8(texts_arr[i].data, texts_arr[i].len);
		texts_QList.push_back(texts_arr_i_QString);
	}
	self->insertItems(static_cast<int>(index), texts_QList);
}

void QComboBox_InsertSeparator(QComboBox* self, int index) {
	self->insertSeparator(static_cast<int>(index));
}

void QComboBox_RemoveItem(QComboBox* self, int index) {
	self->removeItem(static_cast<int>(index));
}

void QComboBox_SetItemText(QComboBox* self, int index, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setItemText(static_cast<int>(index), text_QString);
}

void QComboBox_SetItemIcon(QComboBox* self, int index, QIcon* icon) {
	self->setItemIcon(static_cast<int>(index), *icon);
}

void QComboBox_SetItemData(QComboBox* self, int index, QVariant* value) {
	self->setItemData(static_cast<int>(index), *value);
}

QAbstractItemView* QComboBox_View(const QComboBox* self) {
	return self->view();
}

void QComboBox_SetView(QComboBox* self, QAbstractItemView* itemView) {
	self->setView(itemView);
}

QSize* QComboBox_SizeHint(const QComboBox* self) {
	return new QSize(self->sizeHint());
}

QSize* QComboBox_MinimumSizeHint(const QComboBox* self) {
	return new QSize(self->minimumSizeHint());
}

void QComboBox_ShowPopup(QComboBox* self) {
	self->showPopup();
}

void QComboBox_HidePopup(QComboBox* self) {
	self->hidePopup();
}

bool QComboBox_Event(QComboBox* self, QEvent* event) {
	return self->event(event);
}

QVariant* QComboBox_InputMethodQuery(const QComboBox* self, int param1) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

QVariant* QComboBox_InputMethodQuery2(const QComboBox* self, int query, QVariant* argument) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QComboBox_Clear(QComboBox* self) {
	self->clear();
}

void QComboBox_ClearEditText(QComboBox* self) {
	self->clearEditText();
}

void QComboBox_SetEditText(QComboBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setEditText(text_QString);
}

void QComboBox_SetCurrentIndex(QComboBox* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QComboBox_SetCurrentText(QComboBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setCurrentText(text_QString);
}

void QComboBox_EditTextChanged(QComboBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->editTextChanged(param1_QString);
}

void QComboBox_connect_EditTextChanged(QComboBox* self, intptr_t slot) {
	QComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::editTextChanged), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QComboBox_EditTextChanged(slot, sigval1);
	});
}

void QComboBox_Activated(QComboBox* self, int index) {
	self->activated(static_cast<int>(index));
}

void QComboBox_connect_Activated(QComboBox* self, intptr_t slot) {
	QComboBox::connect(self, static_cast<void (QComboBox::*)(int)>(&QComboBox::activated), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QComboBox_Activated(slot, sigval1);
	});
}

void QComboBox_TextActivated(QComboBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->textActivated(param1_QString);
}

void QComboBox_connect_TextActivated(QComboBox* self, intptr_t slot) {
	QComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::textActivated), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QComboBox_TextActivated(slot, sigval1);
	});
}

void QComboBox_Highlighted(QComboBox* self, int index) {
	self->highlighted(static_cast<int>(index));
}

void QComboBox_connect_Highlighted(QComboBox* self, intptr_t slot) {
	QComboBox::connect(self, static_cast<void (QComboBox::*)(int)>(&QComboBox::highlighted), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QComboBox_Highlighted(slot, sigval1);
	});
}

void QComboBox_TextHighlighted(QComboBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->textHighlighted(param1_QString);
}

void QComboBox_connect_TextHighlighted(QComboBox* self, intptr_t slot) {
	QComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::textHighlighted), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QComboBox_TextHighlighted(slot, sigval1);
	});
}

void QComboBox_CurrentIndexChanged(QComboBox* self, int index) {
	self->currentIndexChanged(static_cast<int>(index));
}

void QComboBox_connect_CurrentIndexChanged(QComboBox* self, intptr_t slot) {
	QComboBox::connect(self, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QComboBox_CurrentIndexChanged(slot, sigval1);
	});
}

void QComboBox_CurrentIndexChangedWithQString(QComboBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->currentIndexChanged(param1_QString);
}

void QComboBox_connect_CurrentIndexChangedWithQString(QComboBox* self, intptr_t slot) {
	QComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::currentIndexChanged), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QComboBox_CurrentIndexChangedWithQString(slot, sigval1);
	});
}

void QComboBox_CurrentTextChanged(QComboBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->currentTextChanged(param1_QString);
}

void QComboBox_connect_CurrentTextChanged(QComboBox* self, intptr_t slot) {
	QComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::currentTextChanged), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QComboBox_CurrentTextChanged(slot, sigval1);
	});
}

void QComboBox_ActivatedWithQString(QComboBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->activated(param1_QString);
}

void QComboBox_connect_ActivatedWithQString(QComboBox* self, intptr_t slot) {
	QComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::activated), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QComboBox_ActivatedWithQString(slot, sigval1);
	});
}

void QComboBox_HighlightedWithQString(QComboBox* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->highlighted(param1_QString);
}

void QComboBox_connect_HighlightedWithQString(QComboBox* self, intptr_t slot) {
	QComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::highlighted), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QComboBox_HighlightedWithQString(slot, sigval1);
	});
}

struct miqt_string QComboBox_Tr2(const char* s, const char* c) {
	QString _ret = QComboBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QComboBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QComboBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QComboBox_TrUtf82(const char* s, const char* c) {
	QString _ret = QComboBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QComboBox_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QComboBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QComboBox_FindText2(const QComboBox* self, struct miqt_string text, int flags) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->findText(text_QString, static_cast<Qt::MatchFlags>(flags));
}

int QComboBox_FindData2(const QComboBox* self, QVariant* data, int role) {
	return self->findData(*data, static_cast<int>(role));
}

int QComboBox_FindData3(const QComboBox* self, QVariant* data, int role, int flags) {
	return self->findData(*data, static_cast<int>(role), static_cast<Qt::MatchFlags>(flags));
}

QVariant* QComboBox_CurrentData1(const QComboBox* self, int role) {
	return new QVariant(self->currentData(static_cast<int>(role)));
}

QVariant* QComboBox_ItemData2(const QComboBox* self, int index, int role) {
	return new QVariant(self->itemData(static_cast<int>(index), static_cast<int>(role)));
}

void QComboBox_AddItem22(QComboBox* self, struct miqt_string text, QVariant* userData) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->addItem(text_QString, *userData);
}

void QComboBox_AddItem3(QComboBox* self, QIcon* icon, struct miqt_string text, QVariant* userData) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->addItem(*icon, text_QString, *userData);
}

void QComboBox_InsertItem3(QComboBox* self, int index, struct miqt_string text, QVariant* userData) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertItem(static_cast<int>(index), text_QString, *userData);
}

void QComboBox_InsertItem4(QComboBox* self, int index, QIcon* icon, struct miqt_string text, QVariant* userData) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertItem(static_cast<int>(index), *icon, text_QString, *userData);
}

void QComboBox_SetItemData3(QComboBox* self, int index, QVariant* value, int role) {
	self->setItemData(static_cast<int>(index), *value, static_cast<int>(role));
}

void QComboBox_Delete(QComboBox* self) {
	delete self;
}

