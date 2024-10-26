#include <QFont>
#include <QFontComboBox>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qfontcombobox.h>
#include "gen_qfontcombobox.h"
#include "_cgo_export.h"

QFontComboBox* QFontComboBox_new(QWidget* parent) {
	return new QFontComboBox(parent);
}

QFontComboBox* QFontComboBox_new2() {
	return new QFontComboBox();
}

QMetaObject* QFontComboBox_MetaObject(const QFontComboBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFontComboBox_Metacast(QFontComboBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFontComboBox_Tr(const char* s) {
	QString _ret = QFontComboBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFontComboBox_TrUtf8(const char* s) {
	QString _ret = QFontComboBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontComboBox_SetWritingSystem(QFontComboBox* self, int writingSystem) {
	self->setWritingSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem));
}

int QFontComboBox_WritingSystem(const QFontComboBox* self) {
	QFontDatabase::WritingSystem _ret = self->writingSystem();
	return static_cast<int>(_ret);
}

void QFontComboBox_SetFontFilters(QFontComboBox* self, int filters) {
	self->setFontFilters(static_cast<QFontComboBox::FontFilters>(filters));
}

int QFontComboBox_FontFilters(const QFontComboBox* self) {
	QFontComboBox::FontFilters _ret = self->fontFilters();
	return static_cast<int>(_ret);
}

QFont* QFontComboBox_CurrentFont(const QFontComboBox* self) {
	return new QFont(self->currentFont());
}

QSize* QFontComboBox_SizeHint(const QFontComboBox* self) {
	return new QSize(self->sizeHint());
}

void QFontComboBox_SetCurrentFont(QFontComboBox* self, QFont* f) {
	self->setCurrentFont(*f);
}

void QFontComboBox_CurrentFontChanged(QFontComboBox* self, QFont* f) {
	self->currentFontChanged(*f);
}

void QFontComboBox_connect_CurrentFontChanged(QFontComboBox* self, intptr_t slot) {
	QFontComboBox::connect(self, static_cast<void (QFontComboBox::*)(const QFont&)>(&QFontComboBox::currentFontChanged), self, [=](const QFont& f) {
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		miqt_exec_callback_QFontComboBox_CurrentFontChanged(slot, sigval1);
	});
}

struct miqt_string QFontComboBox_Tr2(const char* s, const char* c) {
	QString _ret = QFontComboBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFontComboBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFontComboBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFontComboBox_TrUtf82(const char* s, const char* c) {
	QString _ret = QFontComboBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFontComboBox_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QFontComboBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontComboBox_Delete(QFontComboBox* self) {
	delete self;
}

