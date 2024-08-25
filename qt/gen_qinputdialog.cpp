#include "gen_qinputdialog.h"
#include "qinputdialog.h"

#include <QInputDialog>
#include <QList>
#include <QMetaObject>
#include <QSize>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QInputDialog_MetaObject(QInputDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void QInputDialog_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QInputDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QInputDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_SetLabelText(QInputDialog* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setLabelText(text_QString);
}

void QInputDialog_LabelText(QInputDialog* self, char** _out, int* _out_Strlen) {
	QString ret = self->labelText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_SetTextValue(QInputDialog* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setTextValue(text_QString);
}

void QInputDialog_TextValue(QInputDialog* self, char** _out, int* _out_Strlen) {
	QString ret = self->textValue();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_SetComboBoxEditable(QInputDialog* self, bool editable) {
	self->setComboBoxEditable(editable);
}

bool QInputDialog_IsComboBoxEditable(QInputDialog* self) {
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

void QInputDialog_ComboBoxItems(QInputDialog* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->comboBoxItems();
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

int QInputDialog_IntValue(QInputDialog* self) {
	return self->intValue();
}

void QInputDialog_SetIntMinimum(QInputDialog* self, int min) {
	self->setIntMinimum(static_cast<int>(min));
}

int QInputDialog_IntMinimum(QInputDialog* self) {
	return self->intMinimum();
}

void QInputDialog_SetIntMaximum(QInputDialog* self, int max) {
	self->setIntMaximum(static_cast<int>(max));
}

int QInputDialog_IntMaximum(QInputDialog* self) {
	return self->intMaximum();
}

void QInputDialog_SetIntRange(QInputDialog* self, int min, int max) {
	self->setIntRange(static_cast<int>(min), static_cast<int>(max));
}

void QInputDialog_SetIntStep(QInputDialog* self, int step) {
	self->setIntStep(static_cast<int>(step));
}

int QInputDialog_IntStep(QInputDialog* self) {
	return self->intStep();
}

void QInputDialog_SetDoubleValue(QInputDialog* self, double value) {
	self->setDoubleValue(static_cast<double>(value));
}

double QInputDialog_DoubleValue(QInputDialog* self) {
	return self->doubleValue();
}

void QInputDialog_SetDoubleMinimum(QInputDialog* self, double min) {
	self->setDoubleMinimum(static_cast<double>(min));
}

double QInputDialog_DoubleMinimum(QInputDialog* self) {
	return self->doubleMinimum();
}

void QInputDialog_SetDoubleMaximum(QInputDialog* self, double max) {
	self->setDoubleMaximum(static_cast<double>(max));
}

double QInputDialog_DoubleMaximum(QInputDialog* self) {
	return self->doubleMaximum();
}

void QInputDialog_SetDoubleRange(QInputDialog* self, double min, double max) {
	self->setDoubleRange(static_cast<double>(min), static_cast<double>(max));
}

void QInputDialog_SetDoubleDecimals(QInputDialog* self, int decimals) {
	self->setDoubleDecimals(static_cast<int>(decimals));
}

int QInputDialog_DoubleDecimals(QInputDialog* self) {
	return self->doubleDecimals();
}

void QInputDialog_SetOkButtonText(QInputDialog* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setOkButtonText(text_QString);
}

void QInputDialog_OkButtonText(QInputDialog* self, char** _out, int* _out_Strlen) {
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

void QInputDialog_CancelButtonText(QInputDialog* self, char** _out, int* _out_Strlen) {
	QString ret = self->cancelButtonText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QInputDialog_MinimumSizeHint(QInputDialog* self) {
	QSize ret = self->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QInputDialog_SizeHint(QInputDialog* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QInputDialog_SetVisible(QInputDialog* self, bool visible) {
	self->setVisible(visible);
}

void QInputDialog_SetDoubleStep(QInputDialog* self, double step) {
	self->setDoubleStep(static_cast<double>(step));
}

double QInputDialog_DoubleStep(QInputDialog* self) {
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

void QInputDialog_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QInputDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QInputDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QInputDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QInputDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputDialog_Delete(QInputDialog* self) {
	delete self;
}

