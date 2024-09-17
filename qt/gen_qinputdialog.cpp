#include <QInputDialog>
#include <QList>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qinputdialog.h"
#include "gen_qinputdialog.h"
#include "_cgo_export.h"

QInputDialog* QInputDialog_new() {
	return new QInputDialog();
}

QInputDialog* QInputDialog_new2(QWidget* parent) {
	return new QInputDialog(parent);
}

QInputDialog* QInputDialog_new3(QWidget* parent, int flags) {
	return new QInputDialog(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QInputDialog_MetaObject(const QInputDialog* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QInputDialog_Tr(const char* s) {
	QString _ret = QInputDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputDialog_TrUtf8(const char* s) {
	QString _ret = QInputDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QInputDialog_SetInputMode(QInputDialog* self, uintptr_t mode) {
	self->setInputMode(static_cast<QInputDialog::InputMode>(mode));
}

uintptr_t QInputDialog_InputMode(const QInputDialog* self) {
	QInputDialog::InputMode _ret = self->inputMode();
	return static_cast<uintptr_t>(_ret);
}

void QInputDialog_SetLabelText(QInputDialog* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->setLabelText(text_QString);
}

struct miqt_string* QInputDialog_LabelText(const QInputDialog* self) {
	QString _ret = self->labelText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QInputDialog_SetOption(QInputDialog* self, uintptr_t option) {
	self->setOption(static_cast<QInputDialog::InputDialogOption>(option));
}

bool QInputDialog_TestOption(const QInputDialog* self, uintptr_t option) {
	return self->testOption(static_cast<QInputDialog::InputDialogOption>(option));
}

void QInputDialog_SetOptions(QInputDialog* self, int options) {
	self->setOptions(static_cast<QInputDialog::InputDialogOptions>(options));
}

int QInputDialog_Options(const QInputDialog* self) {
	QInputDialog::InputDialogOptions _ret = self->options();
	return static_cast<int>(_ret);
}

void QInputDialog_SetTextValue(QInputDialog* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->setTextValue(text_QString);
}

struct miqt_string* QInputDialog_TextValue(const QInputDialog* self) {
	QString _ret = self->textValue();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QInputDialog_SetTextEchoMode(QInputDialog* self, uintptr_t mode) {
	self->setTextEchoMode(static_cast<QLineEdit::EchoMode>(mode));
}

uintptr_t QInputDialog_TextEchoMode(const QInputDialog* self) {
	QLineEdit::EchoMode _ret = self->textEchoMode();
	return static_cast<uintptr_t>(_ret);
}

void QInputDialog_SetComboBoxEditable(QInputDialog* self, bool editable) {
	self->setComboBoxEditable(editable);
}

bool QInputDialog_IsComboBoxEditable(const QInputDialog* self) {
	return self->isComboBoxEditable();
}

void QInputDialog_SetComboBoxItems(QInputDialog* self, struct miqt_array* /* of struct miqt_string* */ items) {
	QList<QString> items_QList;
	items_QList.reserve(items->len);
	struct miqt_string** items_arr = static_cast<struct miqt_string**>(items->data);
	for(size_t i = 0; i < items->len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(&items_arr[i]->data, items_arr[i]->len);
		items_QList.push_back(items_arr_i_QString);
	}
	self->setComboBoxItems(items_QList);
}

struct miqt_array* QInputDialog_ComboBoxItems(const QInputDialog* self) {
	QStringList _ret = self->comboBoxItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QInputDialog_SetIntValue(QInputDialog* self, int value) {
	self->setIntValue(static_cast<int>(value));
}

int QInputDialog_IntValue(const QInputDialog* self) {
	return self->intValue();
}

void QInputDialog_SetIntMinimum(QInputDialog* self, int min) {
	self->setIntMinimum(static_cast<int>(min));
}

int QInputDialog_IntMinimum(const QInputDialog* self) {
	return self->intMinimum();
}

void QInputDialog_SetIntMaximum(QInputDialog* self, int max) {
	self->setIntMaximum(static_cast<int>(max));
}

int QInputDialog_IntMaximum(const QInputDialog* self) {
	return self->intMaximum();
}

void QInputDialog_SetIntRange(QInputDialog* self, int min, int max) {
	self->setIntRange(static_cast<int>(min), static_cast<int>(max));
}

void QInputDialog_SetIntStep(QInputDialog* self, int step) {
	self->setIntStep(static_cast<int>(step));
}

int QInputDialog_IntStep(const QInputDialog* self) {
	return self->intStep();
}

void QInputDialog_SetDoubleValue(QInputDialog* self, double value) {
	self->setDoubleValue(static_cast<double>(value));
}

double QInputDialog_DoubleValue(const QInputDialog* self) {
	return self->doubleValue();
}

void QInputDialog_SetDoubleMinimum(QInputDialog* self, double min) {
	self->setDoubleMinimum(static_cast<double>(min));
}

double QInputDialog_DoubleMinimum(const QInputDialog* self) {
	return self->doubleMinimum();
}

void QInputDialog_SetDoubleMaximum(QInputDialog* self, double max) {
	self->setDoubleMaximum(static_cast<double>(max));
}

double QInputDialog_DoubleMaximum(const QInputDialog* self) {
	return self->doubleMaximum();
}

void QInputDialog_SetDoubleRange(QInputDialog* self, double min, double max) {
	self->setDoubleRange(static_cast<double>(min), static_cast<double>(max));
}

void QInputDialog_SetDoubleDecimals(QInputDialog* self, int decimals) {
	self->setDoubleDecimals(static_cast<int>(decimals));
}

int QInputDialog_DoubleDecimals(const QInputDialog* self) {
	return self->doubleDecimals();
}

void QInputDialog_SetOkButtonText(QInputDialog* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->setOkButtonText(text_QString);
}

struct miqt_string* QInputDialog_OkButtonText(const QInputDialog* self) {
	QString _ret = self->okButtonText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QInputDialog_SetCancelButtonText(QInputDialog* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->setCancelButtonText(text_QString);
}

struct miqt_string* QInputDialog_CancelButtonText(const QInputDialog* self) {
	QString _ret = self->cancelButtonText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QSize* QInputDialog_MinimumSizeHint(const QInputDialog* self) {
	return new QSize(self->minimumSizeHint());
}

QSize* QInputDialog_SizeHint(const QInputDialog* self) {
	return new QSize(self->sizeHint());
}

void QInputDialog_SetVisible(QInputDialog* self, bool visible) {
	self->setVisible(visible);
}

struct miqt_string* QInputDialog_GetText(QWidget* parent, struct miqt_string* title, struct miqt_string* label) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	QString _ret = QInputDialog::getText(parent, title_QString, label_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputDialog_GetMultiLineText(QWidget* parent, struct miqt_string* title, struct miqt_string* label) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	QString _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputDialog_GetItem(QWidget* parent, struct miqt_string* title, struct miqt_string* label, struct miqt_array* /* of struct miqt_string* */ items) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	QList<QString> items_QList;
	items_QList.reserve(items->len);
	struct miqt_string** items_arr = static_cast<struct miqt_string**>(items->data);
	for(size_t i = 0; i < items->len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(&items_arr[i]->data, items_arr[i]->len);
		items_QList.push_back(items_arr_i_QString);
	}
	QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QInputDialog_GetInt(QWidget* parent, struct miqt_string* title, struct miqt_string* label) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	return QInputDialog::getInt(parent, title_QString, label_QString);
}

double QInputDialog_GetDouble(QWidget* parent, struct miqt_string* title, struct miqt_string* label) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	return QInputDialog::getDouble(parent, title_QString, label_QString);
}

double QInputDialog_GetDouble2(QWidget* parent, struct miqt_string* title, struct miqt_string* label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags, double step) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<int>(decimals), ok, static_cast<Qt::WindowFlags>(flags), static_cast<double>(step));
}

void QInputDialog_SetDoubleStep(QInputDialog* self, double step) {
	self->setDoubleStep(static_cast<double>(step));
}

double QInputDialog_DoubleStep(const QInputDialog* self) {
	return self->doubleStep();
}

void QInputDialog_TextValueChanged(QInputDialog* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->textValueChanged(text_QString);
}

void QInputDialog_connect_TextValueChanged(QInputDialog* self, void* slot) {
	QInputDialog::connect(self, static_cast<void (QInputDialog::*)(const QString&)>(&QInputDialog::textValueChanged), self, [=](const QString& text) {
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string* sigval1 = miqt_strdup(text_b.data(), text_b.length());
		miqt_exec_callback_QInputDialog_TextValueChanged(slot, sigval1);
	});
}

void QInputDialog_TextValueSelected(QInputDialog* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->textValueSelected(text_QString);
}

void QInputDialog_connect_TextValueSelected(QInputDialog* self, void* slot) {
	QInputDialog::connect(self, static_cast<void (QInputDialog::*)(const QString&)>(&QInputDialog::textValueSelected), self, [=](const QString& text) {
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string* sigval1 = miqt_strdup(text_b.data(), text_b.length());
		miqt_exec_callback_QInputDialog_TextValueSelected(slot, sigval1);
	});
}

void QInputDialog_IntValueChanged(QInputDialog* self, int value) {
	self->intValueChanged(static_cast<int>(value));
}

void QInputDialog_connect_IntValueChanged(QInputDialog* self, void* slot) {
	QInputDialog::connect(self, static_cast<void (QInputDialog::*)(int)>(&QInputDialog::intValueChanged), self, [=](int value) {
		int sigval1 = value;
		miqt_exec_callback_QInputDialog_IntValueChanged(slot, sigval1);
	});
}

void QInputDialog_IntValueSelected(QInputDialog* self, int value) {
	self->intValueSelected(static_cast<int>(value));
}

void QInputDialog_connect_IntValueSelected(QInputDialog* self, void* slot) {
	QInputDialog::connect(self, static_cast<void (QInputDialog::*)(int)>(&QInputDialog::intValueSelected), self, [=](int value) {
		int sigval1 = value;
		miqt_exec_callback_QInputDialog_IntValueSelected(slot, sigval1);
	});
}

void QInputDialog_DoubleValueChanged(QInputDialog* self, double value) {
	self->doubleValueChanged(static_cast<double>(value));
}

void QInputDialog_connect_DoubleValueChanged(QInputDialog* self, void* slot) {
	QInputDialog::connect(self, static_cast<void (QInputDialog::*)(double)>(&QInputDialog::doubleValueChanged), self, [=](double value) {
		double sigval1 = value;
		miqt_exec_callback_QInputDialog_DoubleValueChanged(slot, sigval1);
	});
}

void QInputDialog_DoubleValueSelected(QInputDialog* self, double value) {
	self->doubleValueSelected(static_cast<double>(value));
}

void QInputDialog_connect_DoubleValueSelected(QInputDialog* self, void* slot) {
	QInputDialog::connect(self, static_cast<void (QInputDialog::*)(double)>(&QInputDialog::doubleValueSelected), self, [=](double value) {
		double sigval1 = value;
		miqt_exec_callback_QInputDialog_DoubleValueSelected(slot, sigval1);
	});
}

void QInputDialog_Done(QInputDialog* self, int result) {
	self->done(static_cast<int>(result));
}

struct miqt_string* QInputDialog_Tr2(const char* s, const char* c) {
	QString _ret = QInputDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QInputDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputDialog_TrUtf82(const char* s, const char* c) {
	QString _ret = QInputDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputDialog_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QInputDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QInputDialog_SetOption2(QInputDialog* self, uintptr_t option, bool on) {
	self->setOption(static_cast<QInputDialog::InputDialogOption>(option), on);
}

struct miqt_string* QInputDialog_GetText4(QWidget* parent, struct miqt_string* title, struct miqt_string* label, uintptr_t echo) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	QString _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputDialog_GetText5(QWidget* parent, struct miqt_string* title, struct miqt_string* label, uintptr_t echo, struct miqt_string* text) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QString _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputDialog_GetText6(QWidget* parent, struct miqt_string* title, struct miqt_string* label, uintptr_t echo, struct miqt_string* text, bool* ok) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QString _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString, ok);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputDialog_GetText7(QWidget* parent, struct miqt_string* title, struct miqt_string* label, uintptr_t echo, struct miqt_string* text, bool* ok, int flags) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QString _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString, ok, static_cast<Qt::WindowFlags>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputDialog_GetText8(QWidget* parent, struct miqt_string* title, struct miqt_string* label, uintptr_t echo, struct miqt_string* text, bool* ok, int flags, int inputMethodHints) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QString _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString, ok, static_cast<Qt::WindowFlags>(flags), static_cast<Qt::InputMethodHints>(inputMethodHints));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputDialog_GetMultiLineText4(QWidget* parent, struct miqt_string* title, struct miqt_string* label, struct miqt_string* text) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QString _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputDialog_GetMultiLineText5(QWidget* parent, struct miqt_string* title, struct miqt_string* label, struct miqt_string* text, bool* ok) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QString _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString, ok);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputDialog_GetMultiLineText6(QWidget* parent, struct miqt_string* title, struct miqt_string* label, struct miqt_string* text, bool* ok, int flags) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QString _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString, ok, static_cast<Qt::WindowFlags>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputDialog_GetMultiLineText7(QWidget* parent, struct miqt_string* title, struct miqt_string* label, struct miqt_string* text, bool* ok, int flags, int inputMethodHints) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QString _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString, ok, static_cast<Qt::WindowFlags>(flags), static_cast<Qt::InputMethodHints>(inputMethodHints));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputDialog_GetItem5(QWidget* parent, struct miqt_string* title, struct miqt_string* label, struct miqt_array* /* of struct miqt_string* */ items, int current) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	QList<QString> items_QList;
	items_QList.reserve(items->len);
	struct miqt_string** items_arr = static_cast<struct miqt_string**>(items->data);
	for(size_t i = 0; i < items->len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(&items_arr[i]->data, items_arr[i]->len);
		items_QList.push_back(items_arr_i_QString);
	}
	QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputDialog_GetItem6(QWidget* parent, struct miqt_string* title, struct miqt_string* label, struct miqt_array* /* of struct miqt_string* */ items, int current, bool editable) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	QList<QString> items_QList;
	items_QList.reserve(items->len);
	struct miqt_string** items_arr = static_cast<struct miqt_string**>(items->data);
	for(size_t i = 0; i < items->len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(&items_arr[i]->data, items_arr[i]->len);
		items_QList.push_back(items_arr_i_QString);
	}
	QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputDialog_GetItem7(QWidget* parent, struct miqt_string* title, struct miqt_string* label, struct miqt_array* /* of struct miqt_string* */ items, int current, bool editable, bool* ok) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	QList<QString> items_QList;
	items_QList.reserve(items->len);
	struct miqt_string** items_arr = static_cast<struct miqt_string**>(items->data);
	for(size_t i = 0; i < items->len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(&items_arr[i]->data, items_arr[i]->len);
		items_QList.push_back(items_arr_i_QString);
	}
	QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable, ok);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputDialog_GetItem8(QWidget* parent, struct miqt_string* title, struct miqt_string* label, struct miqt_array* /* of struct miqt_string* */ items, int current, bool editable, bool* ok, int flags) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	QList<QString> items_QList;
	items_QList.reserve(items->len);
	struct miqt_string** items_arr = static_cast<struct miqt_string**>(items->data);
	for(size_t i = 0; i < items->len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(&items_arr[i]->data, items_arr[i]->len);
		items_QList.push_back(items_arr_i_QString);
	}
	QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable, ok, static_cast<Qt::WindowFlags>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputDialog_GetItem9(QWidget* parent, struct miqt_string* title, struct miqt_string* label, struct miqt_array* /* of struct miqt_string* */ items, int current, bool editable, bool* ok, int flags, int inputMethodHints) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	QList<QString> items_QList;
	items_QList.reserve(items->len);
	struct miqt_string** items_arr = static_cast<struct miqt_string**>(items->data);
	for(size_t i = 0; i < items->len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(&items_arr[i]->data, items_arr[i]->len);
		items_QList.push_back(items_arr_i_QString);
	}
	QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable, ok, static_cast<Qt::WindowFlags>(flags), static_cast<Qt::InputMethodHints>(inputMethodHints));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QInputDialog_GetInt4(QWidget* parent, struct miqt_string* title, struct miqt_string* label, int value) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value));
}

int QInputDialog_GetInt5(QWidget* parent, struct miqt_string* title, struct miqt_string* label, int value, int minValue) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue));
}

int QInputDialog_GetInt6(QWidget* parent, struct miqt_string* title, struct miqt_string* label, int value, int minValue, int maxValue) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue), static_cast<int>(maxValue));
}

int QInputDialog_GetInt7(QWidget* parent, struct miqt_string* title, struct miqt_string* label, int value, int minValue, int maxValue, int step) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue), static_cast<int>(maxValue), static_cast<int>(step));
}

int QInputDialog_GetInt8(QWidget* parent, struct miqt_string* title, struct miqt_string* label, int value, int minValue, int maxValue, int step, bool* ok) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue), static_cast<int>(maxValue), static_cast<int>(step), ok);
}

int QInputDialog_GetInt9(QWidget* parent, struct miqt_string* title, struct miqt_string* label, int value, int minValue, int maxValue, int step, bool* ok, int flags) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue), static_cast<int>(maxValue), static_cast<int>(step), ok, static_cast<Qt::WindowFlags>(flags));
}

double QInputDialog_GetDouble4(QWidget* parent, struct miqt_string* title, struct miqt_string* label, double value) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value));
}

double QInputDialog_GetDouble5(QWidget* parent, struct miqt_string* title, struct miqt_string* label, double value, double minValue) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue));
}

double QInputDialog_GetDouble6(QWidget* parent, struct miqt_string* title, struct miqt_string* label, double value, double minValue, double maxValue) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue));
}

double QInputDialog_GetDouble7(QWidget* parent, struct miqt_string* title, struct miqt_string* label, double value, double minValue, double maxValue, int decimals) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<int>(decimals));
}

double QInputDialog_GetDouble8(QWidget* parent, struct miqt_string* title, struct miqt_string* label, double value, double minValue, double maxValue, int decimals, bool* ok) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<int>(decimals), ok);
}

double QInputDialog_GetDouble9(QWidget* parent, struct miqt_string* title, struct miqt_string* label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<int>(decimals), ok, static_cast<Qt::WindowFlags>(flags));
}

void QInputDialog_Delete(QInputDialog* self) {
	delete self;
}

