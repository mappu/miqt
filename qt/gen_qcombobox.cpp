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
#include "qcombobox.h"

#include "gen_qcombobox.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QComboBox* QComboBox_new() {
	return new QComboBox();
}

QComboBox* QComboBox_new2(QWidget* parent) {
	return new QComboBox(parent);
}

QMetaObject* QComboBox_MetaObject(const QComboBox* self) {
	return (QMetaObject*) self->metaObject();
}

void QComboBox_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QComboBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QComboBox_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QComboBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

uintptr_t QComboBox_AutoCompletionCaseSensitivity(const QComboBox* self) {
	Qt::CaseSensitivity ret = self->autoCompletionCaseSensitivity();
	return static_cast<uintptr_t>(ret);
}

void QComboBox_SetAutoCompletionCaseSensitivity(QComboBox* self, uintptr_t sensitivity) {
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

int QComboBox_FindText(const QComboBox* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->findText(text_QString);
}

int QComboBox_FindData(const QComboBox* self, QVariant* data) {
	return self->findData(*data);
}

uintptr_t QComboBox_InsertPolicy(const QComboBox* self) {
	QComboBox::InsertPolicy ret = self->insertPolicy();
	return static_cast<uintptr_t>(ret);
}

void QComboBox_SetInsertPolicy(QComboBox* self, uintptr_t policy) {
	self->setInsertPolicy(static_cast<QComboBox::InsertPolicy>(policy));
}

uintptr_t QComboBox_SizeAdjustPolicy(const QComboBox* self) {
	QComboBox::SizeAdjustPolicy ret = self->sizeAdjustPolicy();
	return static_cast<uintptr_t>(ret);
}

void QComboBox_SetSizeAdjustPolicy(QComboBox* self, uintptr_t policy) {
	self->setSizeAdjustPolicy(static_cast<QComboBox::SizeAdjustPolicy>(policy));
}

int QComboBox_MinimumContentsLength(const QComboBox* self) {
	return self->minimumContentsLength();
}

void QComboBox_SetMinimumContentsLength(QComboBox* self, int characters) {
	self->setMinimumContentsLength(static_cast<int>(characters));
}

QSize* QComboBox_IconSize(const QComboBox* self) {
	QSize ret = self->iconSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QComboBox_SetIconSize(QComboBox* self, QSize* size) {
	self->setIconSize(*size);
}

void QComboBox_SetPlaceholderText(QComboBox* self, const char* placeholderText, size_t placeholderText_Strlen) {
	QString placeholderText_QString = QString::fromUtf8(placeholderText, placeholderText_Strlen);
	self->setPlaceholderText(placeholderText_QString);
}

void QComboBox_PlaceholderText(const QComboBox* self, char** _out, int* _out_Strlen) {
	QString ret = self->placeholderText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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
	QModelIndex ret = self->rootModelIndex();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
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

void QComboBox_CurrentText(const QComboBox* self, char** _out, int* _out_Strlen) {
	QString ret = self->currentText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QVariant* QComboBox_CurrentData(const QComboBox* self) {
	QVariant ret = self->currentData();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QComboBox_ItemText(const QComboBox* self, int index, char** _out, int* _out_Strlen) {
	QString ret = self->itemText(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QIcon* QComboBox_ItemIcon(const QComboBox* self, int index) {
	QIcon ret = self->itemIcon(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

QVariant* QComboBox_ItemData(const QComboBox* self, int index) {
	QVariant ret = self->itemData(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QComboBox_AddItem(QComboBox* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->addItem(text_QString);
}

void QComboBox_AddItem2(QComboBox* self, QIcon* icon, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->addItem(*icon, text_QString);
}

void QComboBox_AddItems(QComboBox* self, char** texts, uint64_t* texts_Lengths, size_t texts_len) {
	QList<QString> texts_QList;
	texts_QList.reserve(texts_len);
	for(size_t i = 0; i < texts_len; ++i) {
		texts_QList.push_back(QString::fromUtf8(texts[i], texts_Lengths[i]));
	}
	self->addItems(texts_QList);
}

void QComboBox_InsertItem(QComboBox* self, int index, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->insertItem(static_cast<int>(index), text_QString);
}

void QComboBox_InsertItem2(QComboBox* self, int index, QIcon* icon, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->insertItem(static_cast<int>(index), *icon, text_QString);
}

void QComboBox_InsertItems(QComboBox* self, int index, char** texts, uint64_t* texts_Lengths, size_t texts_len) {
	QList<QString> texts_QList;
	texts_QList.reserve(texts_len);
	for(size_t i = 0; i < texts_len; ++i) {
		texts_QList.push_back(QString::fromUtf8(texts[i], texts_Lengths[i]));
	}
	self->insertItems(static_cast<int>(index), texts_QList);
}

void QComboBox_InsertSeparator(QComboBox* self, int index) {
	self->insertSeparator(static_cast<int>(index));
}

void QComboBox_RemoveItem(QComboBox* self, int index) {
	self->removeItem(static_cast<int>(index));
}

void QComboBox_SetItemText(QComboBox* self, int index, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
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
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QComboBox_MinimumSizeHint(const QComboBox* self) {
	QSize ret = self->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
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

QVariant* QComboBox_InputMethodQuery(const QComboBox* self, uintptr_t param1) {
	QVariant ret = self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QVariant* QComboBox_InputMethodQuery2(const QComboBox* self, uintptr_t query, QVariant* argument) {
	QVariant ret = self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QComboBox_Clear(QComboBox* self) {
	self->clear();
}

void QComboBox_ClearEditText(QComboBox* self) {
	self->clearEditText();
}

void QComboBox_SetEditText(QComboBox* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setEditText(text_QString);
}

void QComboBox_SetCurrentIndex(QComboBox* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QComboBox_SetCurrentText(QComboBox* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setCurrentText(text_QString);
}

void QComboBox_EditTextChanged(QComboBox* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->editTextChanged(param1_QString);
}

void QComboBox_connect_EditTextChanged(QComboBox* self, void* slot) {
	QComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::editTextChanged), self, [=](const QString& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QComboBox_Activated(QComboBox* self, int index) {
	self->activated(static_cast<int>(index));
}

void QComboBox_connect_Activated(QComboBox* self, void* slot) {
	QComboBox::connect(self, static_cast<void (QComboBox::*)(int)>(&QComboBox::activated), self, [=](int index) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QComboBox_TextActivated(QComboBox* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->textActivated(param1_QString);
}

void QComboBox_connect_TextActivated(QComboBox* self, void* slot) {
	QComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::textActivated), self, [=](const QString& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QComboBox_Highlighted(QComboBox* self, int index) {
	self->highlighted(static_cast<int>(index));
}

void QComboBox_connect_Highlighted(QComboBox* self, void* slot) {
	QComboBox::connect(self, static_cast<void (QComboBox::*)(int)>(&QComboBox::highlighted), self, [=](int index) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QComboBox_TextHighlighted(QComboBox* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->textHighlighted(param1_QString);
}

void QComboBox_connect_TextHighlighted(QComboBox* self, void* slot) {
	QComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::textHighlighted), self, [=](const QString& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QComboBox_CurrentIndexChanged(QComboBox* self, int index) {
	self->currentIndexChanged(static_cast<int>(index));
}

void QComboBox_connect_CurrentIndexChanged(QComboBox* self, void* slot) {
	QComboBox::connect(self, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), self, [=](int index) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QComboBox_CurrentIndexChangedWithQString(QComboBox* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->currentIndexChanged(param1_QString);
}

void QComboBox_connect_CurrentIndexChangedWithQString(QComboBox* self, void* slot) {
	QComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::currentIndexChanged), self, [=](const QString& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QComboBox_CurrentTextChanged(QComboBox* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->currentTextChanged(param1_QString);
}

void QComboBox_connect_CurrentTextChanged(QComboBox* self, void* slot) {
	QComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::currentTextChanged), self, [=](const QString& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QComboBox_ActivatedWithQString(QComboBox* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->activated(param1_QString);
}

void QComboBox_connect_ActivatedWithQString(QComboBox* self, void* slot) {
	QComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::activated), self, [=](const QString& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QComboBox_HighlightedWithQString(QComboBox* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->highlighted(param1_QString);
}

void QComboBox_connect_HighlightedWithQString(QComboBox* self, void* slot) {
	QComboBox::connect(self, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::highlighted), self, [=](const QString& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QComboBox_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QComboBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QComboBox_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QComboBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QComboBox_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QComboBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QComboBox_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QComboBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QComboBox_FindText2(const QComboBox* self, const char* text, size_t text_Strlen, int flags) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->findText(text_QString, static_cast<Qt::MatchFlags>(flags));
}

int QComboBox_FindData2(const QComboBox* self, QVariant* data, int role) {
	return self->findData(*data, static_cast<int>(role));
}

int QComboBox_FindData3(const QComboBox* self, QVariant* data, int role, int flags) {
	return self->findData(*data, static_cast<int>(role), static_cast<Qt::MatchFlags>(flags));
}

QVariant* QComboBox_CurrentData1(const QComboBox* self, int role) {
	QVariant ret = self->currentData(static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QVariant* QComboBox_ItemData2(const QComboBox* self, int index, int role) {
	QVariant ret = self->itemData(static_cast<int>(index), static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QComboBox_AddItem22(QComboBox* self, const char* text, size_t text_Strlen, QVariant* userData) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->addItem(text_QString, *userData);
}

void QComboBox_AddItem3(QComboBox* self, QIcon* icon, const char* text, size_t text_Strlen, QVariant* userData) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->addItem(*icon, text_QString, *userData);
}

void QComboBox_InsertItem3(QComboBox* self, int index, const char* text, size_t text_Strlen, QVariant* userData) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->insertItem(static_cast<int>(index), text_QString, *userData);
}

void QComboBox_InsertItem4(QComboBox* self, int index, QIcon* icon, const char* text, size_t text_Strlen, QVariant* userData) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->insertItem(static_cast<int>(index), *icon, text_QString, *userData);
}

void QComboBox_SetItemData3(QComboBox* self, int index, QVariant* value, int role) {
	self->setItemData(static_cast<int>(index), *value, static_cast<int>(role));
}

void QComboBox_Delete(QComboBox* self) {
	delete self;
}

