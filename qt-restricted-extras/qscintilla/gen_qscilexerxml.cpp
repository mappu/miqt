#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qscilexerxml.h>
#include "gen_qscilexerxml.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerXML_setFoldCompact(QsciLexerXML*, intptr_t, bool);
void miqt_exec_callback_QsciLexerXML_setFoldPreprocessor(QsciLexerXML*, intptr_t, bool);
void miqt_exec_callback_QsciLexerXML_setCaseSensitiveTags(QsciLexerXML*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerXML_language(const QsciLexerXML*, intptr_t);
const char* miqt_exec_callback_QsciLexerXML_lexer(const QsciLexerXML*, intptr_t);
int miqt_exec_callback_QsciLexerXML_lexerId(const QsciLexerXML*, intptr_t);
const char* miqt_exec_callback_QsciLexerXML_autoCompletionFillups(const QsciLexerXML*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerXML_autoCompletionWordSeparators(const QsciLexerXML*, intptr_t);
const char* miqt_exec_callback_QsciLexerXML_blockEnd(const QsciLexerXML*, intptr_t, int*);
int miqt_exec_callback_QsciLexerXML_blockLookback(const QsciLexerXML*, intptr_t);
const char* miqt_exec_callback_QsciLexerXML_blockStart(const QsciLexerXML*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerXML_blockStartKeyword(const QsciLexerXML*, intptr_t, int*);
int miqt_exec_callback_QsciLexerXML_braceStyle(const QsciLexerXML*, intptr_t);
bool miqt_exec_callback_QsciLexerXML_caseSensitive(const QsciLexerXML*, intptr_t);
QColor* miqt_exec_callback_QsciLexerXML_color(const QsciLexerXML*, intptr_t, int);
bool miqt_exec_callback_QsciLexerXML_eolFill(const QsciLexerXML*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerXML_font(const QsciLexerXML*, intptr_t, int);
int miqt_exec_callback_QsciLexerXML_indentationGuideView(const QsciLexerXML*, intptr_t);
const char* miqt_exec_callback_QsciLexerXML_keywords(const QsciLexerXML*, intptr_t, int);
int miqt_exec_callback_QsciLexerXML_defaultStyle(const QsciLexerXML*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerXML_description(const QsciLexerXML*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerXML_paper(const QsciLexerXML*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerXML_defaultColorWithStyle(const QsciLexerXML*, intptr_t, int);
bool miqt_exec_callback_QsciLexerXML_defaultEolFill(const QsciLexerXML*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerXML_defaultFontWithStyle(const QsciLexerXML*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerXML_defaultPaperWithStyle(const QsciLexerXML*, intptr_t, int);
void miqt_exec_callback_QsciLexerXML_setEditor(QsciLexerXML*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerXML_refreshProperties(QsciLexerXML*, intptr_t);
int miqt_exec_callback_QsciLexerXML_styleBitsNeeded(const QsciLexerXML*, intptr_t);
const char* miqt_exec_callback_QsciLexerXML_wordCharacters(const QsciLexerXML*, intptr_t);
void miqt_exec_callback_QsciLexerXML_setAutoIndentStyle(QsciLexerXML*, intptr_t, int);
void miqt_exec_callback_QsciLexerXML_setColor(QsciLexerXML*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerXML_setEolFill(QsciLexerXML*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerXML_setFont(QsciLexerXML*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerXML_setPaper(QsciLexerXML*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerXML_readProperties(QsciLexerXML*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerXML_writeProperties(const QsciLexerXML*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerXML_event(QsciLexerXML*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerXML_eventFilter(QsciLexerXML*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerXML_timerEvent(QsciLexerXML*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerXML_childEvent(QsciLexerXML*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerXML_customEvent(QsciLexerXML*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerXML_connectNotify(QsciLexerXML*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerXML_disconnectNotify(QsciLexerXML*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerXML final : public QsciLexerXML {
public:

	MiqtVirtualQsciLexerXML(): QsciLexerXML() {}
	MiqtVirtualQsciLexerXML(QObject* parent): QsciLexerXML(parent) {}

	virtual ~MiqtVirtualQsciLexerXML() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__setFoldCompact == 0) {
			QsciLexerXML::setFoldCompact(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerXML_setFoldCompact(this, handle__setFoldCompact, sigval1);

	}

	friend void QsciLexerXML_virtualbase_setFoldCompact(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFoldPreprocessor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldPreprocessor(bool fold) override {
		if (handle__setFoldPreprocessor == 0) {
			QsciLexerXML::setFoldPreprocessor(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerXML_setFoldPreprocessor(this, handle__setFoldPreprocessor, sigval1);

	}

	friend void QsciLexerXML_virtualbase_setFoldPreprocessor(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setCaseSensitiveTags = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCaseSensitiveTags(bool sens) override {
		if (handle__setCaseSensitiveTags == 0) {
			QsciLexerXML::setCaseSensitiveTags(sens);
			return;
		}

		bool sigval1 = sens;
		miqt_exec_callback_QsciLexerXML_setCaseSensitiveTags(this, handle__setCaseSensitiveTags, sigval1);

	}

	friend void QsciLexerXML_virtualbase_setCaseSensitiveTags(void* self, bool sens);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_language(this, handle__language);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__lexer == 0) {
			return QsciLexerXML::lexer();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_lexer(this, handle__lexer);
		return callback_return_value;
	}

	friend const char* QsciLexerXML_virtualbase_lexer(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__lexerId == 0) {
			return QsciLexerXML::lexerId();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerXML_lexerId(this, handle__lexerId);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerXML_virtualbase_lexerId(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__autoCompletionFillups == 0) {
			return QsciLexerXML::autoCompletionFillups();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_autoCompletionFillups(this, handle__autoCompletionFillups);
		return callback_return_value;
	}

	friend const char* QsciLexerXML_virtualbase_autoCompletionFillups(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__autoCompletionWordSeparators == 0) {
			return QsciLexerXML::autoCompletionWordSeparators();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerXML_autoCompletionWordSeparators(this, handle__autoCompletionWordSeparators);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QsciLexerXML_virtualbase_autoCompletionWordSeparators(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (handle__blockEnd == 0) {
			return QsciLexerXML::blockEnd(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_blockEnd(this, handle__blockEnd, sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerXML_virtualbase_blockEnd(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__blockLookback == 0) {
			return QsciLexerXML::blockLookback();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerXML_blockLookback(this, handle__blockLookback);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerXML_virtualbase_blockLookback(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__blockStart == 0) {
			return QsciLexerXML::blockStart(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_blockStart(this, handle__blockStart, sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerXML_virtualbase_blockStart(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__blockStartKeyword == 0) {
			return QsciLexerXML::blockStartKeyword(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_blockStartKeyword(this, handle__blockStartKeyword, sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerXML_virtualbase_blockStartKeyword(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__braceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__braceStyle == 0) {
			return QsciLexerXML::braceStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerXML_braceStyle(this, handle__braceStyle);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerXML_virtualbase_braceStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__caseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__caseSensitive == 0) {
			return QsciLexerXML::caseSensitive();
		}

		bool callback_return_value = miqt_exec_callback_QsciLexerXML_caseSensitive(this, handle__caseSensitive);
		return callback_return_value;
	}

	friend bool QsciLexerXML_virtualbase_caseSensitive(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__color == 0) {
			return QsciLexerXML::color(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerXML_color(this, handle__color, sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerXML_virtualbase_color(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__eolFill == 0) {
			return QsciLexerXML::eolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerXML_eolFill(this, handle__eolFill, sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerXML_virtualbase_eolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__font == 0) {
			return QsciLexerXML::font(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerXML_font(this, handle__font, sigval1);
		return *callback_return_value;
	}

	friend QFont* QsciLexerXML_virtualbase_font(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__indentationGuideView == 0) {
			return QsciLexerXML::indentationGuideView();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerXML_indentationGuideView(this, handle__indentationGuideView);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerXML_virtualbase_indentationGuideView(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__keywords == 0) {
			return QsciLexerXML::keywords(set);
		}

		int sigval1 = set;
		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_keywords(this, handle__keywords, sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerXML_virtualbase_keywords(const void* self, int set);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__defaultStyle == 0) {
			return QsciLexerXML::defaultStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerXML_defaultStyle(this, handle__defaultStyle);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerXML_virtualbase_defaultStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}

		int sigval1 = style;
		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerXML_description(this, handle__description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__paper == 0) {
			return QsciLexerXML::paper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerXML_paper(this, handle__paper, sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerXML_virtualbase_paper(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__defaultColorWithStyle == 0) {
			return QsciLexerXML::defaultColor(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerXML_defaultColorWithStyle(this, handle__defaultColorWithStyle, sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerXML_virtualbase_defaultColorWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__defaultEolFill == 0) {
			return QsciLexerXML::defaultEolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerXML_defaultEolFill(this, handle__defaultEolFill, sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerXML_virtualbase_defaultEolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__defaultFontWithStyle == 0) {
			return QsciLexerXML::defaultFont(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerXML_defaultFontWithStyle(this, handle__defaultFontWithStyle, sigval1);
		return *callback_return_value;
	}

	friend QFont* QsciLexerXML_virtualbase_defaultFontWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__defaultPaperWithStyle == 0) {
			return QsciLexerXML::defaultPaper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerXML_defaultPaperWithStyle(this, handle__defaultPaperWithStyle, sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerXML_virtualbase_defaultPaperWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__setEditor == 0) {
			QsciLexerXML::setEditor(editor);
			return;
		}

		QsciScintilla* sigval1 = editor;
		miqt_exec_callback_QsciLexerXML_setEditor(this, handle__setEditor, sigval1);

	}

	friend void QsciLexerXML_virtualbase_setEditor(void* self, QsciScintilla* editor);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__refreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__refreshProperties == 0) {
			QsciLexerXML::refreshProperties();
			return;
		}

		miqt_exec_callback_QsciLexerXML_refreshProperties(this, handle__refreshProperties);

	}

	friend void QsciLexerXML_virtualbase_refreshProperties(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__styleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__styleBitsNeeded == 0) {
			return QsciLexerXML::styleBitsNeeded();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerXML_styleBitsNeeded(this, handle__styleBitsNeeded);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerXML_virtualbase_styleBitsNeeded(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__wordCharacters == 0) {
			return QsciLexerXML::wordCharacters();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_wordCharacters(this, handle__wordCharacters);
		return callback_return_value;
	}

	friend const char* QsciLexerXML_virtualbase_wordCharacters(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__setAutoIndentStyle == 0) {
			QsciLexerXML::setAutoIndentStyle(autoindentstyle);
			return;
		}

		int sigval1 = autoindentstyle;
		miqt_exec_callback_QsciLexerXML_setAutoIndentStyle(this, handle__setAutoIndentStyle, sigval1);

	}

	friend void QsciLexerXML_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__setColor == 0) {
			QsciLexerXML::setColor(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerXML_setColor(this, handle__setColor, sigval1, sigval2);

	}

	friend void QsciLexerXML_virtualbase_setColor(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__setEolFill == 0) {
			QsciLexerXML::setEolFill(eoffill, style);
			return;
		}

		bool sigval1 = eoffill;
		int sigval2 = style;
		miqt_exec_callback_QsciLexerXML_setEolFill(this, handle__setEolFill, sigval1, sigval2);

	}

	friend void QsciLexerXML_virtualbase_setEolFill(void* self, bool eoffill, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__setFont == 0) {
			QsciLexerXML::setFont(f, style);
			return;
		}

		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerXML_setFont(this, handle__setFont, sigval1, sigval2);

	}

	friend void QsciLexerXML_virtualbase_setFont(void* self, QFont* f, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__setPaper == 0) {
			QsciLexerXML::setPaper(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerXML_setPaper(this, handle__setPaper, sigval1, sigval2);

	}

	friend void QsciLexerXML_virtualbase_setPaper(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__readProperties == 0) {
			return QsciLexerXML::readProperties(qs, prefix);
		}

		QSettings& qs_ret = qs;
		// Cast returned reference into pointer
		QSettings* sigval1 = &qs_ret;
		const QString prefix_ret = prefix;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray prefix_b = prefix_ret.toUtf8();
		struct miqt_string prefix_ms;
		prefix_ms.len = prefix_b.length();
		prefix_ms.data = static_cast<char*>(malloc(prefix_ms.len));
		memcpy(prefix_ms.data, prefix_b.data(), prefix_ms.len);
		struct miqt_string sigval2 = prefix_ms;
		bool callback_return_value = miqt_exec_callback_QsciLexerXML_readProperties(this, handle__readProperties, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerXML_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__writeProperties == 0) {
			return QsciLexerXML::writeProperties(qs, prefix);
		}

		QSettings& qs_ret = qs;
		// Cast returned reference into pointer
		QSettings* sigval1 = &qs_ret;
		const QString prefix_ret = prefix;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray prefix_b = prefix_ret.toUtf8();
		struct miqt_string prefix_ms;
		prefix_ms.len = prefix_b.length();
		prefix_ms.data = static_cast<char*>(malloc(prefix_ms.len));
		memcpy(prefix_ms.data, prefix_b.data(), prefix_ms.len);
		struct miqt_string sigval2 = prefix_ms;
		bool callback_return_value = miqt_exec_callback_QsciLexerXML_writeProperties(this, handle__writeProperties, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerXML_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QsciLexerXML::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerXML_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerXML_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QsciLexerXML::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerXML_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerXML_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QsciLexerXML::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerXML_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QsciLexerXML_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QsciLexerXML::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerXML_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QsciLexerXML_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QsciLexerXML::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerXML_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QsciLexerXML_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QsciLexerXML::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerXML_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QsciLexerXML_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QsciLexerXML::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerXML_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QsciLexerXML_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend bool QsciLexerXML_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
	friend bool QsciLexerXML_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
	friend QObject* QsciLexerXML_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerXML_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerXML_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciLexerXML_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciLexerXML* QsciLexerXML_new() {
	return new (std::nothrow) MiqtVirtualQsciLexerXML();
}

QsciLexerXML* QsciLexerXML_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQsciLexerXML(parent);
}

void QsciLexerXML_virtbase(QsciLexerXML* src, QsciLexerHTML** outptr_QsciLexerHTML) {
	*outptr_QsciLexerHTML = static_cast<QsciLexerHTML*>(src);
}

QMetaObject* QsciLexerXML_metaObject(const QsciLexerXML* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerXML_metacast(QsciLexerXML* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerXML_tr(const char* s) {
	QString _ret = QsciLexerXML::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerXML_trUtf8(const char* s) {
	QString _ret = QsciLexerXML::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerXML_language(const QsciLexerXML* self) {
	return (const char*) self->language();
}

const char* QsciLexerXML_lexer(const QsciLexerXML* self) {
	return (const char*) self->lexer();
}

QColor* QsciLexerXML_defaultColor(const QsciLexerXML* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerXML_defaultEolFill(const QsciLexerXML* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerXML_defaultFont(const QsciLexerXML* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerXML_defaultPaper(const QsciLexerXML* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerXML_keywords(const QsciLexerXML* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

void QsciLexerXML_refreshProperties(QsciLexerXML* self) {
	self->refreshProperties();
}

void QsciLexerXML_setScriptsStyled(QsciLexerXML* self, bool styled) {
	self->setScriptsStyled(styled);
}

bool QsciLexerXML_scriptsStyled(const QsciLexerXML* self) {
	return self->scriptsStyled();
}

struct miqt_string QsciLexerXML_tr2(const char* s, const char* c) {
	QString _ret = QsciLexerXML::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerXML_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerXML::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerXML_trUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerXML::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerXML_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerXML::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexerXML_override_virtual_setFoldCompact(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldCompact = slot;
	return true;
}

void QsciLexerXML_virtualbase_setFoldCompact(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::setFoldCompact(fold);
}

bool QsciLexerXML_override_virtual_setFoldPreprocessor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldPreprocessor = slot;
	return true;
}

void QsciLexerXML_virtualbase_setFoldPreprocessor(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::setFoldPreprocessor(fold);
}

bool QsciLexerXML_override_virtual_setCaseSensitiveTags(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setCaseSensitiveTags = slot;
	return true;
}

void QsciLexerXML_virtualbase_setCaseSensitiveTags(void* self, bool sens) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::setCaseSensitiveTags(sens);
}

bool QsciLexerXML_override_virtual_language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__language = slot;
	return true;
}

bool QsciLexerXML_override_virtual_lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexer = slot;
	return true;
}

const char* QsciLexerXML_virtualbase_lexer(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::lexer();
}

bool QsciLexerXML_override_virtual_lexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexerId = slot;
	return true;
}

int QsciLexerXML_virtualbase_lexerId(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::lexerId();
}

bool QsciLexerXML_override_virtual_autoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionFillups = slot;
	return true;
}

const char* QsciLexerXML_virtualbase_autoCompletionFillups(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::autoCompletionFillups();
}

bool QsciLexerXML_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerXML_virtualbase_autoCompletionWordSeparators(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::autoCompletionWordSeparators();
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

bool QsciLexerXML_override_virtual_blockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockEnd = slot;
	return true;
}

const char* QsciLexerXML_virtualbase_blockEnd(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::blockEnd(static_cast<int*>(style));
}

bool QsciLexerXML_override_virtual_blockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockLookback = slot;
	return true;
}

int QsciLexerXML_virtualbase_blockLookback(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::blockLookback();
}

bool QsciLexerXML_override_virtual_blockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStart = slot;
	return true;
}

const char* QsciLexerXML_virtualbase_blockStart(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::blockStart(static_cast<int*>(style));
}

bool QsciLexerXML_override_virtual_blockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStartKeyword = slot;
	return true;
}

const char* QsciLexerXML_virtualbase_blockStartKeyword(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::blockStartKeyword(static_cast<int*>(style));
}

bool QsciLexerXML_override_virtual_braceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__braceStyle = slot;
	return true;
}

int QsciLexerXML_virtualbase_braceStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::braceStyle();
}

bool QsciLexerXML_override_virtual_caseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__caseSensitive = slot;
	return true;
}

bool QsciLexerXML_virtualbase_caseSensitive(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::caseSensitive();
}

bool QsciLexerXML_override_virtual_color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__color = slot;
	return true;
}

QColor* QsciLexerXML_virtualbase_color(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::color(static_cast<int>(style)));
}

bool QsciLexerXML_override_virtual_eolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eolFill = slot;
	return true;
}

bool QsciLexerXML_virtualbase_eolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::eolFill(static_cast<int>(style));
}

bool QsciLexerXML_override_virtual_font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__font = slot;
	return true;
}

QFont* QsciLexerXML_virtualbase_font(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::font(static_cast<int>(style)));
}

bool QsciLexerXML_override_virtual_indentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indentationGuideView = slot;
	return true;
}

int QsciLexerXML_virtualbase_indentationGuideView(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::indentationGuideView();
}

bool QsciLexerXML_override_virtual_keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keywords = slot;
	return true;
}

const char* QsciLexerXML_virtualbase_keywords(const void* self, int set) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::keywords(static_cast<int>(set));
}

bool QsciLexerXML_override_virtual_defaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultStyle = slot;
	return true;
}

int QsciLexerXML_virtualbase_defaultStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::defaultStyle();
}

bool QsciLexerXML_override_virtual_description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__description = slot;
	return true;
}

bool QsciLexerXML_override_virtual_paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paper = slot;
	return true;
}

QColor* QsciLexerXML_virtualbase_paper(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::paper(static_cast<int>(style)));
}

bool QsciLexerXML_override_virtual_defaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexerXML_virtualbase_defaultColorWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::defaultColor(static_cast<int>(style)));
}

bool QsciLexerXML_override_virtual_defaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultEolFill = slot;
	return true;
}

bool QsciLexerXML_virtualbase_defaultEolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::defaultEolFill(static_cast<int>(style));
}

bool QsciLexerXML_override_virtual_defaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexerXML_virtualbase_defaultFontWithStyle(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::defaultFont(static_cast<int>(style)));
}

bool QsciLexerXML_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexerXML_virtualbase_defaultPaperWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::defaultPaper(static_cast<int>(style)));
}

bool QsciLexerXML_override_virtual_setEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEditor = slot;
	return true;
}

void QsciLexerXML_virtualbase_setEditor(void* self, QsciScintilla* editor) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::setEditor(editor);
}

bool QsciLexerXML_override_virtual_refreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__refreshProperties = slot;
	return true;
}

void QsciLexerXML_virtualbase_refreshProperties(void* self) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::refreshProperties();
}

bool QsciLexerXML_override_virtual_styleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__styleBitsNeeded = slot;
	return true;
}

int QsciLexerXML_virtualbase_styleBitsNeeded(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::styleBitsNeeded();
}

bool QsciLexerXML_override_virtual_wordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wordCharacters = slot;
	return true;
}

const char* QsciLexerXML_virtualbase_wordCharacters(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::wordCharacters();
}

bool QsciLexerXML_override_virtual_setAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAutoIndentStyle = slot;
	return true;
}

void QsciLexerXML_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

bool QsciLexerXML_override_virtual_setColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setColor = slot;
	return true;
}

void QsciLexerXML_virtualbase_setColor(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::setColor(*c, static_cast<int>(style));
}

bool QsciLexerXML_override_virtual_setEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEolFill = slot;
	return true;
}

void QsciLexerXML_virtualbase_setEolFill(void* self, bool eoffill, int style) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::setEolFill(eoffill, static_cast<int>(style));
}

bool QsciLexerXML_override_virtual_setFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFont = slot;
	return true;
}

void QsciLexerXML_virtualbase_setFont(void* self, QFont* f, int style) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::setFont(*f, static_cast<int>(style));
}

bool QsciLexerXML_override_virtual_setPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPaper = slot;
	return true;
}

void QsciLexerXML_virtualbase_setPaper(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::setPaper(*c, static_cast<int>(style));
}

bool QsciLexerXML_override_virtual_readProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readProperties = slot;
	return true;
}

bool QsciLexerXML_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::readProperties(*qs, prefix_QString);
}

bool QsciLexerXML_override_virtual_writeProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeProperties = slot;
	return true;
}

bool QsciLexerXML_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::writeProperties(*qs, prefix_QString);
}

bool QsciLexerXML_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QsciLexerXML_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::event(event);
}

bool QsciLexerXML_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QsciLexerXML_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::eventFilter(watched, event);
}

bool QsciLexerXML_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QsciLexerXML_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::timerEvent(event);
}

bool QsciLexerXML_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QsciLexerXML_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::childEvent(event);
}

bool QsciLexerXML_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QsciLexerXML_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::customEvent(event);
}

bool QsciLexerXML_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QsciLexerXML_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::connectNotify(*signal);
}

bool QsciLexerXML_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QsciLexerXML_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::disconnectNotify(*signal);
}

bool QsciLexerXML_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self_cast->readProperties(*qs, prefix_QString);
}

bool QsciLexerXML_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self_cast->writeProperties(*qs, prefix_QString);
}

QObject* QsciLexerXML_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QsciLexerXML_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QsciLexerXML_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QsciLexerXML_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QsciLexerXML_delete(QsciLexerXML* self) {
	delete self;
}

