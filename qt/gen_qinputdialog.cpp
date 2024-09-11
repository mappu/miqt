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

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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

void QInputDialog_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QInputDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QInputDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_SetInputMode(QInputDialog* self, uintptr_t mode) {
	self->setInputMode(static_cast<QInputDialog::InputMode>(mode));
}

uintptr_t QInputDialog_InputMode(const QInputDialog* self) {
	QInputDialog::InputMode ret = self->inputMode();
	return static_cast<uintptr_t>(ret);
}

void QInputDialog_SetLabelText(QInputDialog* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setLabelText(text_QString);
}

void QInputDialog_LabelText(const QInputDialog* self, char** _out, int* _out_Strlen) {
	QString ret = self->labelText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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
	QInputDialog::InputDialogOptions ret = self->options();
	return static_cast<int>(ret);
}

void QInputDialog_SetTextValue(QInputDialog* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setTextValue(text_QString);
}

void QInputDialog_TextValue(const QInputDialog* self, char** _out, int* _out_Strlen) {
	QString ret = self->textValue();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_SetTextEchoMode(QInputDialog* self, uintptr_t mode) {
	self->setTextEchoMode(static_cast<QLineEdit::EchoMode>(mode));
}

uintptr_t QInputDialog_TextEchoMode(const QInputDialog* self) {
	QLineEdit::EchoMode ret = self->textEchoMode();
	return static_cast<uintptr_t>(ret);
}

void QInputDialog_SetComboBoxEditable(QInputDialog* self, bool editable) {
	self->setComboBoxEditable(editable);
}

bool QInputDialog_IsComboBoxEditable(const QInputDialog* self) {
	return self->isComboBoxEditable();
}

void QInputDialog_SetComboBoxItems(QInputDialog* self, char** items, uint64_t* items_Lengths, size_t items_len) {
	QList<QString> items_QList;
	items_QList.reserve(items_len);
	for(size_t i = 0; i < items_len; ++i) {
		items_QList.push_back(QString::fromUtf8(items[i], items_Lengths[i]));
	}
	self->setComboBoxItems(items_QList);
}

void QInputDialog_ComboBoxItems(const QInputDialog* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = self->comboBoxItems();
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

void QInputDialog_SetOkButtonText(QInputDialog* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setOkButtonText(text_QString);
}

void QInputDialog_OkButtonText(const QInputDialog* self, char** _out, int* _out_Strlen) {
	QString ret = self->okButtonText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_SetCancelButtonText(QInputDialog* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setCancelButtonText(text_QString);
}

void QInputDialog_CancelButtonText(const QInputDialog* self, char** _out, int* _out_Strlen) {
	QString ret = self->cancelButtonText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QInputDialog_MinimumSizeHint(const QInputDialog* self) {
	QSize ret = self->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QInputDialog_SizeHint(const QInputDialog* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QInputDialog_SetVisible(QInputDialog* self, bool visible) {
	self->setVisible(visible);
}

void QInputDialog_GetText(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, char** _out, int* _out_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	QString ret = QInputDialog::getText(parent, title_QString, label_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_GetMultiLineText(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, char** _out, int* _out_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	QString ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_GetItem(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, char** items, uint64_t* items_Lengths, size_t items_len, char** _out, int* _out_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	QList<QString> items_QList;
	items_QList.reserve(items_len);
	for(size_t i = 0; i < items_len; ++i) {
		items_QList.push_back(QString::fromUtf8(items[i], items_Lengths[i]));
	}
	QString ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QInputDialog_GetInt(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	return QInputDialog::getInt(parent, title_QString, label_QString);
}

double QInputDialog_GetDouble(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	return QInputDialog::getDouble(parent, title_QString, label_QString);
}

double QInputDialog_GetDouble2(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, double value, double minValue, double maxValue, int decimals, bool* ok, int flags, double step) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<int>(decimals), ok, static_cast<Qt::WindowFlags>(flags), static_cast<double>(step));
}

void QInputDialog_SetDoubleStep(QInputDialog* self, double step) {
	self->setDoubleStep(static_cast<double>(step));
}

double QInputDialog_DoubleStep(const QInputDialog* self) {
	return self->doubleStep();
}

void QInputDialog_TextValueChanged(QInputDialog* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->textValueChanged(text_QString);
}

void QInputDialog_connect_TextValueChanged(QInputDialog* self, void* slot) {
	QInputDialog::connect(self, static_cast<void (QInputDialog::*)(const QString&)>(&QInputDialog::textValueChanged), self, [=](const QString& text) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QInputDialog_TextValueSelected(QInputDialog* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->textValueSelected(text_QString);
}

void QInputDialog_connect_TextValueSelected(QInputDialog* self, void* slot) {
	QInputDialog::connect(self, static_cast<void (QInputDialog::*)(const QString&)>(&QInputDialog::textValueSelected), self, [=](const QString& text) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QInputDialog_IntValueChanged(QInputDialog* self, int value) {
	self->intValueChanged(static_cast<int>(value));
}

void QInputDialog_connect_IntValueChanged(QInputDialog* self, void* slot) {
	QInputDialog::connect(self, static_cast<void (QInputDialog::*)(int)>(&QInputDialog::intValueChanged), self, [=](int value) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QInputDialog_IntValueSelected(QInputDialog* self, int value) {
	self->intValueSelected(static_cast<int>(value));
}

void QInputDialog_connect_IntValueSelected(QInputDialog* self, void* slot) {
	QInputDialog::connect(self, static_cast<void (QInputDialog::*)(int)>(&QInputDialog::intValueSelected), self, [=](int value) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QInputDialog_DoubleValueChanged(QInputDialog* self, double value) {
	self->doubleValueChanged(static_cast<double>(value));
}

void QInputDialog_connect_DoubleValueChanged(QInputDialog* self, void* slot) {
	QInputDialog::connect(self, static_cast<void (QInputDialog::*)(double)>(&QInputDialog::doubleValueChanged), self, [=](double value) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QInputDialog_DoubleValueSelected(QInputDialog* self, double value) {
	self->doubleValueSelected(static_cast<double>(value));
}

void QInputDialog_connect_DoubleValueSelected(QInputDialog* self, void* slot) {
	QInputDialog::connect(self, static_cast<void (QInputDialog::*)(double)>(&QInputDialog::doubleValueSelected), self, [=](double value) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QInputDialog_Done(QInputDialog* self, int result) {
	self->done(static_cast<int>(result));
}

void QInputDialog_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QInputDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QInputDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QInputDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QInputDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_SetOption2(QInputDialog* self, uintptr_t option, bool on) {
	self->setOption(static_cast<QInputDialog::InputDialogOption>(option), on);
}

void QInputDialog_GetText4(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, uintptr_t echo, char** _out, int* _out_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	QString ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_GetText5(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, uintptr_t echo, const char* text, size_t text_Strlen, char** _out, int* _out_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_GetText6(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, uintptr_t echo, const char* text, size_t text_Strlen, bool* ok, char** _out, int* _out_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString, ok);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_GetText7(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, uintptr_t echo, const char* text, size_t text_Strlen, bool* ok, int flags, char** _out, int* _out_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString, ok, static_cast<Qt::WindowFlags>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_GetText8(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, uintptr_t echo, const char* text, size_t text_Strlen, bool* ok, int flags, int inputMethodHints, char** _out, int* _out_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString, ok, static_cast<Qt::WindowFlags>(flags), static_cast<Qt::InputMethodHints>(inputMethodHints));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_GetMultiLineText4(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, const char* text, size_t text_Strlen, char** _out, int* _out_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_GetMultiLineText5(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, const char* text, size_t text_Strlen, bool* ok, char** _out, int* _out_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString, ok);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_GetMultiLineText6(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, const char* text, size_t text_Strlen, bool* ok, int flags, char** _out, int* _out_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString, ok, static_cast<Qt::WindowFlags>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_GetMultiLineText7(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, const char* text, size_t text_Strlen, bool* ok, int flags, int inputMethodHints, char** _out, int* _out_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString, ok, static_cast<Qt::WindowFlags>(flags), static_cast<Qt::InputMethodHints>(inputMethodHints));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_GetItem5(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, char** items, uint64_t* items_Lengths, size_t items_len, int current, char** _out, int* _out_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	QList<QString> items_QList;
	items_QList.reserve(items_len);
	for(size_t i = 0; i < items_len; ++i) {
		items_QList.push_back(QString::fromUtf8(items[i], items_Lengths[i]));
	}
	QString ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_GetItem6(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, char** items, uint64_t* items_Lengths, size_t items_len, int current, bool editable, char** _out, int* _out_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	QList<QString> items_QList;
	items_QList.reserve(items_len);
	for(size_t i = 0; i < items_len; ++i) {
		items_QList.push_back(QString::fromUtf8(items[i], items_Lengths[i]));
	}
	QString ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_GetItem7(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, char** items, uint64_t* items_Lengths, size_t items_len, int current, bool editable, bool* ok, char** _out, int* _out_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	QList<QString> items_QList;
	items_QList.reserve(items_len);
	for(size_t i = 0; i < items_len; ++i) {
		items_QList.push_back(QString::fromUtf8(items[i], items_Lengths[i]));
	}
	QString ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable, ok);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_GetItem8(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, char** items, uint64_t* items_Lengths, size_t items_len, int current, bool editable, bool* ok, int flags, char** _out, int* _out_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	QList<QString> items_QList;
	items_QList.reserve(items_len);
	for(size_t i = 0; i < items_len; ++i) {
		items_QList.push_back(QString::fromUtf8(items[i], items_Lengths[i]));
	}
	QString ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable, ok, static_cast<Qt::WindowFlags>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_GetItem9(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, char** items, uint64_t* items_Lengths, size_t items_len, int current, bool editable, bool* ok, int flags, int inputMethodHints, char** _out, int* _out_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	QList<QString> items_QList;
	items_QList.reserve(items_len);
	for(size_t i = 0; i < items_len; ++i) {
		items_QList.push_back(QString::fromUtf8(items[i], items_Lengths[i]));
	}
	QString ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable, ok, static_cast<Qt::WindowFlags>(flags), static_cast<Qt::InputMethodHints>(inputMethodHints));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QInputDialog_GetInt4(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, int value) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value));
}

int QInputDialog_GetInt5(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, int value, int minValue) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue));
}

int QInputDialog_GetInt6(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, int value, int minValue, int maxValue) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue), static_cast<int>(maxValue));
}

int QInputDialog_GetInt7(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, int value, int minValue, int maxValue, int step) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue), static_cast<int>(maxValue), static_cast<int>(step));
}

int QInputDialog_GetInt8(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, int value, int minValue, int maxValue, int step, bool* ok) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue), static_cast<int>(maxValue), static_cast<int>(step), ok);
}

int QInputDialog_GetInt9(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, int value, int minValue, int maxValue, int step, bool* ok, int flags) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue), static_cast<int>(maxValue), static_cast<int>(step), ok, static_cast<Qt::WindowFlags>(flags));
}

double QInputDialog_GetDouble4(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, double value) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value));
}

double QInputDialog_GetDouble5(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, double value, double minValue) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue));
}

double QInputDialog_GetDouble6(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, double value, double minValue, double maxValue) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue));
}

double QInputDialog_GetDouble7(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, double value, double minValue, double maxValue, int decimals) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<int>(decimals));
}

double QInputDialog_GetDouble8(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, double value, double minValue, double maxValue, int decimals, bool* ok) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<int>(decimals), ok);
}

double QInputDialog_GetDouble9(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, double value, double minValue, double maxValue, int decimals, bool* ok, int flags) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<int>(decimals), ok, static_cast<Qt::WindowFlags>(flags));
}

void QInputDialog_Delete(QInputDialog* self) {
	delete self;
}

