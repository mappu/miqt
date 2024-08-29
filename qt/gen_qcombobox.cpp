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

QMetaObject* QComboBox_MetaObject(QComboBox* self) {
	return (QMetaObject*) const_cast<const QComboBox*>(self)->metaObject();
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

int QComboBox_MaxVisibleItems(QComboBox* self) {
	return const_cast<const QComboBox*>(self)->maxVisibleItems();
}

void QComboBox_SetMaxVisibleItems(QComboBox* self, int maxItems) {
	self->setMaxVisibleItems(static_cast<int>(maxItems));
}

int QComboBox_Count(QComboBox* self) {
	return const_cast<const QComboBox*>(self)->count();
}

void QComboBox_SetMaxCount(QComboBox* self, int max) {
	self->setMaxCount(static_cast<int>(max));
}

int QComboBox_MaxCount(QComboBox* self) {
	return const_cast<const QComboBox*>(self)->maxCount();
}

bool QComboBox_AutoCompletion(QComboBox* self) {
	return const_cast<const QComboBox*>(self)->autoCompletion();
}

void QComboBox_SetAutoCompletion(QComboBox* self, bool enable) {
	self->setAutoCompletion(enable);
}

uintptr_t QComboBox_AutoCompletionCaseSensitivity(QComboBox* self) {
	Qt::CaseSensitivity ret = const_cast<const QComboBox*>(self)->autoCompletionCaseSensitivity();
	return static_cast<uintptr_t>(ret);
}

void QComboBox_SetAutoCompletionCaseSensitivity(QComboBox* self, uintptr_t sensitivity) {
	self->setAutoCompletionCaseSensitivity(static_cast<Qt::CaseSensitivity>(sensitivity));
}

bool QComboBox_DuplicatesEnabled(QComboBox* self) {
	return const_cast<const QComboBox*>(self)->duplicatesEnabled();
}

void QComboBox_SetDuplicatesEnabled(QComboBox* self, bool enable) {
	self->setDuplicatesEnabled(enable);
}

void QComboBox_SetFrame(QComboBox* self, bool frame) {
	self->setFrame(frame);
}

bool QComboBox_HasFrame(QComboBox* self) {
	return const_cast<const QComboBox*>(self)->hasFrame();
}

int QComboBox_FindText(QComboBox* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return const_cast<const QComboBox*>(self)->findText(text_QString);
}

int QComboBox_FindData(QComboBox* self, QVariant* data) {
	return const_cast<const QComboBox*>(self)->findData(*data);
}

uintptr_t QComboBox_InsertPolicy(QComboBox* self) {
	QComboBox::InsertPolicy ret = const_cast<const QComboBox*>(self)->insertPolicy();
	return static_cast<uintptr_t>(ret);
}

void QComboBox_SetInsertPolicy(QComboBox* self, uintptr_t policy) {
	self->setInsertPolicy(static_cast<QComboBox::InsertPolicy>(policy));
}

uintptr_t QComboBox_SizeAdjustPolicy(QComboBox* self) {
	QComboBox::SizeAdjustPolicy ret = const_cast<const QComboBox*>(self)->sizeAdjustPolicy();
	return static_cast<uintptr_t>(ret);
}

void QComboBox_SetSizeAdjustPolicy(QComboBox* self, uintptr_t policy) {
	self->setSizeAdjustPolicy(static_cast<QComboBox::SizeAdjustPolicy>(policy));
}

int QComboBox_MinimumContentsLength(QComboBox* self) {
	return const_cast<const QComboBox*>(self)->minimumContentsLength();
}

void QComboBox_SetMinimumContentsLength(QComboBox* self, int characters) {
	self->setMinimumContentsLength(static_cast<int>(characters));
}

QSize* QComboBox_IconSize(QComboBox* self) {
	QSize ret = const_cast<const QComboBox*>(self)->iconSize();
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

void QComboBox_PlaceholderText(QComboBox* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QComboBox*>(self)->placeholderText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QComboBox_IsEditable(QComboBox* self) {
	return const_cast<const QComboBox*>(self)->isEditable();
}

void QComboBox_SetEditable(QComboBox* self, bool editable) {
	self->setEditable(editable);
}

void QComboBox_SetLineEdit(QComboBox* self, QLineEdit* edit) {
	self->setLineEdit(edit);
}

QLineEdit* QComboBox_LineEdit(QComboBox* self) {
	return const_cast<const QComboBox*>(self)->lineEdit();
}

void QComboBox_SetValidator(QComboBox* self, QValidator* v) {
	self->setValidator(v);
}

QValidator* QComboBox_Validator(QComboBox* self) {
	return (QValidator*) const_cast<const QComboBox*>(self)->validator();
}

void QComboBox_SetCompleter(QComboBox* self, QCompleter* c) {
	self->setCompleter(c);
}

QCompleter* QComboBox_Completer(QComboBox* self) {
	return const_cast<const QComboBox*>(self)->completer();
}

QAbstractItemDelegate* QComboBox_ItemDelegate(QComboBox* self) {
	return const_cast<const QComboBox*>(self)->itemDelegate();
}

void QComboBox_SetItemDelegate(QComboBox* self, QAbstractItemDelegate* delegate) {
	self->setItemDelegate(delegate);
}

QAbstractItemModel* QComboBox_Model(QComboBox* self) {
	return const_cast<const QComboBox*>(self)->model();
}

void QComboBox_SetModel(QComboBox* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QModelIndex* QComboBox_RootModelIndex(QComboBox* self) {
	QModelIndex ret = const_cast<const QComboBox*>(self)->rootModelIndex();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

void QComboBox_SetRootModelIndex(QComboBox* self, QModelIndex* index) {
	self->setRootModelIndex(*index);
}

int QComboBox_ModelColumn(QComboBox* self) {
	return const_cast<const QComboBox*>(self)->modelColumn();
}

void QComboBox_SetModelColumn(QComboBox* self, int visibleColumn) {
	self->setModelColumn(static_cast<int>(visibleColumn));
}

int QComboBox_CurrentIndex(QComboBox* self) {
	return const_cast<const QComboBox*>(self)->currentIndex();
}

void QComboBox_CurrentText(QComboBox* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QComboBox*>(self)->currentText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QVariant* QComboBox_CurrentData(QComboBox* self) {
	QVariant ret = const_cast<const QComboBox*>(self)->currentData();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QComboBox_ItemText(QComboBox* self, int index, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QComboBox*>(self)->itemText(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QIcon* QComboBox_ItemIcon(QComboBox* self, int index) {
	QIcon ret = const_cast<const QComboBox*>(self)->itemIcon(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

QVariant* QComboBox_ItemData(QComboBox* self, int index) {
	QVariant ret = const_cast<const QComboBox*>(self)->itemData(static_cast<int>(index));
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

QAbstractItemView* QComboBox_View(QComboBox* self) {
	return const_cast<const QComboBox*>(self)->view();
}

void QComboBox_SetView(QComboBox* self, QAbstractItemView* itemView) {
	self->setView(itemView);
}

QSize* QComboBox_SizeHint(QComboBox* self) {
	QSize ret = const_cast<const QComboBox*>(self)->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QComboBox_MinimumSizeHint(QComboBox* self) {
	QSize ret = const_cast<const QComboBox*>(self)->minimumSizeHint();
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

QVariant* QComboBox_InputMethodQuery(QComboBox* self, uintptr_t param1) {
	QVariant ret = const_cast<const QComboBox*>(self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QVariant* QComboBox_InputMethodQuery2(QComboBox* self, uintptr_t query, QVariant* argument) {
	QVariant ret = const_cast<const QComboBox*>(self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument);
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

int QComboBox_FindText2(QComboBox* self, const char* text, size_t text_Strlen, int flags) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->findText(text_QString, static_cast<Qt::MatchFlags>(flags));
}

int QComboBox_FindData2(QComboBox* self, QVariant* data, int role) {
	return self->findData(*data, static_cast<int>(role));
}

int QComboBox_FindData3(QComboBox* self, QVariant* data, int role, int flags) {
	return self->findData(*data, static_cast<int>(role), static_cast<Qt::MatchFlags>(flags));
}

QVariant* QComboBox_CurrentData1(QComboBox* self, int role) {
	QVariant ret = self->currentData(static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QVariant* QComboBox_ItemData2(QComboBox* self, int index, int role) {
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

