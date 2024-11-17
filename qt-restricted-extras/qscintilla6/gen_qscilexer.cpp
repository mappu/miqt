#include <QColor>
#include <QFont>
#include <QList>
#include <QMetaObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexer.h>
#include "gen_qscilexer.h"
#include "_cgo_export.h"

QMetaObject* QsciLexer_MetaObject(const QsciLexer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexer_Metacast(QsciLexer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexer_Tr(const char* s) {
	QString _ret = QsciLexer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexer_Language(const QsciLexer* self) {
	return (const char*) self->language();
}

const char* QsciLexer_Lexer(const QsciLexer* self) {
	return (const char*) self->lexer();
}

int QsciLexer_LexerId(const QsciLexer* self) {
	return self->lexerId();
}

QsciAbstractAPIs* QsciLexer_Apis(const QsciLexer* self) {
	return self->apis();
}

const char* QsciLexer_AutoCompletionFillups(const QsciLexer* self) {
	return (const char*) self->autoCompletionFillups();
}

struct miqt_array /* of struct miqt_string */  QsciLexer_AutoCompletionWordSeparators(const QsciLexer* self) {
	QStringList _ret = self->autoCompletionWordSeparators();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QsciLexer_AutoIndentStyle(QsciLexer* self) {
	return self->autoIndentStyle();
}

const char* QsciLexer_BlockEnd(const QsciLexer* self) {
	return (const char*) self->blockEnd();
}

int QsciLexer_BlockLookback(const QsciLexer* self) {
	return self->blockLookback();
}

const char* QsciLexer_BlockStart(const QsciLexer* self) {
	return (const char*) self->blockStart();
}

const char* QsciLexer_BlockStartKeyword(const QsciLexer* self) {
	return (const char*) self->blockStartKeyword();
}

int QsciLexer_BraceStyle(const QsciLexer* self) {
	return self->braceStyle();
}

bool QsciLexer_CaseSensitive(const QsciLexer* self) {
	return self->caseSensitive();
}

QColor* QsciLexer_Color(const QsciLexer* self, int style) {
	return new QColor(self->color(static_cast<int>(style)));
}

bool QsciLexer_EolFill(const QsciLexer* self, int style) {
	return self->eolFill(static_cast<int>(style));
}

QFont* QsciLexer_Font(const QsciLexer* self, int style) {
	return new QFont(self->font(static_cast<int>(style)));
}

int QsciLexer_IndentationGuideView(const QsciLexer* self) {
	return self->indentationGuideView();
}

const char* QsciLexer_Keywords(const QsciLexer* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

int QsciLexer_DefaultStyle(const QsciLexer* self) {
	return self->defaultStyle();
}

struct miqt_string QsciLexer_Description(const QsciLexer* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QColor* QsciLexer_Paper(const QsciLexer* self, int style) {
	return new QColor(self->paper(static_cast<int>(style)));
}

QColor* QsciLexer_DefaultColor(const QsciLexer* self) {
	return new QColor(self->defaultColor());
}

QColor* QsciLexer_DefaultColorWithStyle(const QsciLexer* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexer_DefaultEolFill(const QsciLexer* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexer_DefaultFont(const QsciLexer* self) {
	return new QFont(self->defaultFont());
}

QFont* QsciLexer_DefaultFontWithStyle(const QsciLexer* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexer_DefaultPaper(const QsciLexer* self) {
	return new QColor(self->defaultPaper());
}

QColor* QsciLexer_DefaultPaperWithStyle(const QsciLexer* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

QsciScintilla* QsciLexer_Editor(const QsciLexer* self) {
	return self->editor();
}

void QsciLexer_SetAPIs(QsciLexer* self, QsciAbstractAPIs* apis) {
	self->setAPIs(apis);
}

void QsciLexer_SetDefaultColor(QsciLexer* self, QColor* c) {
	self->setDefaultColor(*c);
}

void QsciLexer_SetDefaultFont(QsciLexer* self, QFont* f) {
	self->setDefaultFont(*f);
}

void QsciLexer_SetDefaultPaper(QsciLexer* self, QColor* c) {
	self->setDefaultPaper(*c);
}

void QsciLexer_SetEditor(QsciLexer* self, QsciScintilla* editor) {
	self->setEditor(editor);
}

bool QsciLexer_ReadSettings(QsciLexer* self, QSettings* qs) {
	return self->readSettings(*qs);
}

void QsciLexer_RefreshProperties(QsciLexer* self) {
	self->refreshProperties();
}

int QsciLexer_StyleBitsNeeded(const QsciLexer* self) {
	return self->styleBitsNeeded();
}

const char* QsciLexer_WordCharacters(const QsciLexer* self) {
	return (const char*) self->wordCharacters();
}

bool QsciLexer_WriteSettings(const QsciLexer* self, QSettings* qs) {
	return self->writeSettings(*qs);
}

void QsciLexer_SetAutoIndentStyle(QsciLexer* self, int autoindentstyle) {
	self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

void QsciLexer_SetColor(QsciLexer* self, QColor* c) {
	self->setColor(*c);
}

void QsciLexer_SetEolFill(QsciLexer* self, bool eoffill) {
	self->setEolFill(eoffill);
}

void QsciLexer_SetFont(QsciLexer* self, QFont* f) {
	self->setFont(*f);
}

void QsciLexer_SetPaper(QsciLexer* self, QColor* c) {
	self->setPaper(*c);
}

void QsciLexer_ColorChanged(QsciLexer* self, QColor* c, int style) {
	self->colorChanged(*c, static_cast<int>(style));
}

void QsciLexer_connect_ColorChanged(QsciLexer* self, intptr_t slot) {
	QsciLexer::connect(self, static_cast<void (QsciLexer::*)(const QColor&, int)>(&QsciLexer::colorChanged), self, [=](const QColor& c, int style) {
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexer_ColorChanged(slot, sigval1, sigval2);
	});
}

void QsciLexer_EolFillChanged(QsciLexer* self, bool eolfilled, int style) {
	self->eolFillChanged(eolfilled, static_cast<int>(style));
}

void QsciLexer_connect_EolFillChanged(QsciLexer* self, intptr_t slot) {
	QsciLexer::connect(self, static_cast<void (QsciLexer::*)(bool, int)>(&QsciLexer::eolFillChanged), self, [=](bool eolfilled, int style) {
		bool sigval1 = eolfilled;
		int sigval2 = style;
		miqt_exec_callback_QsciLexer_EolFillChanged(slot, sigval1, sigval2);
	});
}

void QsciLexer_FontChanged(QsciLexer* self, QFont* f, int style) {
	self->fontChanged(*f, static_cast<int>(style));
}

void QsciLexer_connect_FontChanged(QsciLexer* self, intptr_t slot) {
	QsciLexer::connect(self, static_cast<void (QsciLexer::*)(const QFont&, int)>(&QsciLexer::fontChanged), self, [=](const QFont& f, int style) {
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexer_FontChanged(slot, sigval1, sigval2);
	});
}

void QsciLexer_PaperChanged(QsciLexer* self, QColor* c, int style) {
	self->paperChanged(*c, static_cast<int>(style));
}

void QsciLexer_connect_PaperChanged(QsciLexer* self, intptr_t slot) {
	QsciLexer::connect(self, static_cast<void (QsciLexer::*)(const QColor&, int)>(&QsciLexer::paperChanged), self, [=](const QColor& c, int style) {
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexer_PaperChanged(slot, sigval1, sigval2);
	});
}

void QsciLexer_PropertyChanged(QsciLexer* self, const char* prop, const char* val) {
	self->propertyChanged(prop, val);
}

void QsciLexer_connect_PropertyChanged(QsciLexer* self, intptr_t slot) {
	QsciLexer::connect(self, static_cast<void (QsciLexer::*)(const char*, const char*)>(&QsciLexer::propertyChanged), self, [=](const char* prop, const char* val) {
		const char* sigval1 = (const char*) prop;
		const char* sigval2 = (const char*) val;
		miqt_exec_callback_QsciLexer_PropertyChanged(slot, sigval1, sigval2);
	});
}

struct miqt_string QsciLexer_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexer_BlockEnd1(const QsciLexer* self, int* style) {
	return (const char*) self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexer_BlockStart1(const QsciLexer* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

const char* QsciLexer_BlockStartKeyword1(const QsciLexer* self, int* style) {
	return (const char*) self->blockStartKeyword(static_cast<int*>(style));
}

bool QsciLexer_ReadSettings2(QsciLexer* self, QSettings* qs, const char* prefix) {
	return self->readSettings(*qs, prefix);
}

bool QsciLexer_WriteSettings2(const QsciLexer* self, QSettings* qs, const char* prefix) {
	return self->writeSettings(*qs, prefix);
}

void QsciLexer_SetColor2(QsciLexer* self, QColor* c, int style) {
	self->setColor(*c, static_cast<int>(style));
}

void QsciLexer_SetEolFill2(QsciLexer* self, bool eoffill, int style) {
	self->setEolFill(eoffill, static_cast<int>(style));
}

void QsciLexer_SetFont2(QsciLexer* self, QFont* f, int style) {
	self->setFont(*f, static_cast<int>(style));
}

void QsciLexer_SetPaper2(QsciLexer* self, QColor* c, int style) {
	self->setPaper(*c, static_cast<int>(style));
}

void QsciLexer_Delete(QsciLexer* self) {
	delete self;
}

