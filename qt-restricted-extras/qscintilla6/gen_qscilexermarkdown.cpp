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
#include <qscilexermarkdown.h>
#include "gen_qscilexermarkdown.h"

#ifdef __cplusplus
extern "C" {
#endif

const char* miqt_exec_callback_QsciLexerMarkdown_language(const QsciLexerMarkdown*, intptr_t);
const char* miqt_exec_callback_QsciLexerMarkdown_lexer(const QsciLexerMarkdown*, intptr_t);
int miqt_exec_callback_QsciLexerMarkdown_lexerId(const QsciLexerMarkdown*, intptr_t);
const char* miqt_exec_callback_QsciLexerMarkdown_autoCompletionFillups(const QsciLexerMarkdown*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerMarkdown_autoCompletionWordSeparators(const QsciLexerMarkdown*, intptr_t);
const char* miqt_exec_callback_QsciLexerMarkdown_blockEnd(const QsciLexerMarkdown*, intptr_t, int*);
int miqt_exec_callback_QsciLexerMarkdown_blockLookback(const QsciLexerMarkdown*, intptr_t);
const char* miqt_exec_callback_QsciLexerMarkdown_blockStart(const QsciLexerMarkdown*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerMarkdown_blockStartKeyword(const QsciLexerMarkdown*, intptr_t, int*);
int miqt_exec_callback_QsciLexerMarkdown_braceStyle(const QsciLexerMarkdown*, intptr_t);
bool miqt_exec_callback_QsciLexerMarkdown_caseSensitive(const QsciLexerMarkdown*, intptr_t);
QColor* miqt_exec_callback_QsciLexerMarkdown_color(const QsciLexerMarkdown*, intptr_t, int);
bool miqt_exec_callback_QsciLexerMarkdown_eolFill(const QsciLexerMarkdown*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerMarkdown_font(const QsciLexerMarkdown*, intptr_t, int);
int miqt_exec_callback_QsciLexerMarkdown_indentationGuideView(const QsciLexerMarkdown*, intptr_t);
const char* miqt_exec_callback_QsciLexerMarkdown_keywords(const QsciLexerMarkdown*, intptr_t, int);
int miqt_exec_callback_QsciLexerMarkdown_defaultStyle(const QsciLexerMarkdown*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerMarkdown_description(const QsciLexerMarkdown*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerMarkdown_paper(const QsciLexerMarkdown*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerMarkdown_defaultColorWithStyle(const QsciLexerMarkdown*, intptr_t, int);
bool miqt_exec_callback_QsciLexerMarkdown_defaultEolFill(const QsciLexerMarkdown*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerMarkdown_defaultFontWithStyle(const QsciLexerMarkdown*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerMarkdown_defaultPaperWithStyle(const QsciLexerMarkdown*, intptr_t, int);
void miqt_exec_callback_QsciLexerMarkdown_setEditor(QsciLexerMarkdown*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerMarkdown_refreshProperties(QsciLexerMarkdown*, intptr_t);
int miqt_exec_callback_QsciLexerMarkdown_styleBitsNeeded(const QsciLexerMarkdown*, intptr_t);
const char* miqt_exec_callback_QsciLexerMarkdown_wordCharacters(const QsciLexerMarkdown*, intptr_t);
void miqt_exec_callback_QsciLexerMarkdown_setAutoIndentStyle(QsciLexerMarkdown*, intptr_t, int);
void miqt_exec_callback_QsciLexerMarkdown_setColor(QsciLexerMarkdown*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerMarkdown_setEolFill(QsciLexerMarkdown*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerMarkdown_setFont(QsciLexerMarkdown*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerMarkdown_setPaper(QsciLexerMarkdown*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerMarkdown_readProperties(QsciLexerMarkdown*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerMarkdown_writeProperties(const QsciLexerMarkdown*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerMarkdown_event(QsciLexerMarkdown*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerMarkdown_eventFilter(QsciLexerMarkdown*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerMarkdown_timerEvent(QsciLexerMarkdown*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerMarkdown_childEvent(QsciLexerMarkdown*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerMarkdown_customEvent(QsciLexerMarkdown*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerMarkdown_connectNotify(QsciLexerMarkdown*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerMarkdown_disconnectNotify(QsciLexerMarkdown*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerMarkdown final : public QsciLexerMarkdown {
public:

	MiqtVirtualQsciLexerMarkdown(): QsciLexerMarkdown() {};
	MiqtVirtualQsciLexerMarkdown(QObject* parent): QsciLexerMarkdown(parent) {};

	virtual ~MiqtVirtualQsciLexerMarkdown() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerMarkdown_language(this, handle__language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__lexer == 0) {
			return QsciLexerMarkdown::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerMarkdown_lexer(this, handle__lexer);

		return callback_return_value;
	}

	friend const char* QsciLexerMarkdown_virtualbase_lexer(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__lexerId == 0) {
			return QsciLexerMarkdown::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerMarkdown_lexerId(this, handle__lexerId);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerMarkdown_virtualbase_lexerId(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__autoCompletionFillups == 0) {
			return QsciLexerMarkdown::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerMarkdown_autoCompletionFillups(this, handle__autoCompletionFillups);

		return callback_return_value;
	}

	friend const char* QsciLexerMarkdown_virtualbase_autoCompletionFillups(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__autoCompletionWordSeparators == 0) {
			return QsciLexerMarkdown::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerMarkdown_autoCompletionWordSeparators(this, handle__autoCompletionWordSeparators);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}

		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QsciLexerMarkdown_virtualbase_autoCompletionWordSeparators(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (handle__blockEnd == 0) {
			return QsciLexerMarkdown::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerMarkdown_blockEnd(this, handle__blockEnd, sigval1);

		return callback_return_value;
	}

	friend const char* QsciLexerMarkdown_virtualbase_blockEnd(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__blockLookback == 0) {
			return QsciLexerMarkdown::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerMarkdown_blockLookback(this, handle__blockLookback);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerMarkdown_virtualbase_blockLookback(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__blockStart == 0) {
			return QsciLexerMarkdown::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerMarkdown_blockStart(this, handle__blockStart, sigval1);

		return callback_return_value;
	}

	friend const char* QsciLexerMarkdown_virtualbase_blockStart(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__blockStartKeyword == 0) {
			return QsciLexerMarkdown::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerMarkdown_blockStartKeyword(this, handle__blockStartKeyword, sigval1);

		return callback_return_value;
	}

	friend const char* QsciLexerMarkdown_virtualbase_blockStartKeyword(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__braceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__braceStyle == 0) {
			return QsciLexerMarkdown::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerMarkdown_braceStyle(this, handle__braceStyle);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerMarkdown_virtualbase_braceStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__caseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__caseSensitive == 0) {
			return QsciLexerMarkdown::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerMarkdown_caseSensitive(this, handle__caseSensitive);

		return callback_return_value;
	}

	friend bool QsciLexerMarkdown_virtualbase_caseSensitive(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__color == 0) {
			return QsciLexerMarkdown::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerMarkdown_color(this, handle__color, sigval1);

		return *callback_return_value;
	}

	friend QColor* QsciLexerMarkdown_virtualbase_color(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__eolFill == 0) {
			return QsciLexerMarkdown::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerMarkdown_eolFill(this, handle__eolFill, sigval1);

		return callback_return_value;
	}

	friend bool QsciLexerMarkdown_virtualbase_eolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__font == 0) {
			return QsciLexerMarkdown::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerMarkdown_font(this, handle__font, sigval1);

		return *callback_return_value;
	}

	friend QFont* QsciLexerMarkdown_virtualbase_font(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__indentationGuideView == 0) {
			return QsciLexerMarkdown::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerMarkdown_indentationGuideView(this, handle__indentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerMarkdown_virtualbase_indentationGuideView(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__keywords == 0) {
			return QsciLexerMarkdown::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerMarkdown_keywords(this, handle__keywords, sigval1);

		return callback_return_value;
	}

	friend const char* QsciLexerMarkdown_virtualbase_keywords(const void* self, int set);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__defaultStyle == 0) {
			return QsciLexerMarkdown::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerMarkdown_defaultStyle(this, handle__defaultStyle);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerMarkdown_virtualbase_defaultStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerMarkdown_description(this, handle__description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__paper == 0) {
			return QsciLexerMarkdown::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerMarkdown_paper(this, handle__paper, sigval1);

		return *callback_return_value;
	}

	friend QColor* QsciLexerMarkdown_virtualbase_paper(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__defaultColorWithStyle == 0) {
			return QsciLexerMarkdown::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerMarkdown_defaultColorWithStyle(this, handle__defaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	friend QColor* QsciLexerMarkdown_virtualbase_defaultColorWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__defaultEolFill == 0) {
			return QsciLexerMarkdown::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerMarkdown_defaultEolFill(this, handle__defaultEolFill, sigval1);

		return callback_return_value;
	}

	friend bool QsciLexerMarkdown_virtualbase_defaultEolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__defaultFontWithStyle == 0) {
			return QsciLexerMarkdown::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerMarkdown_defaultFontWithStyle(this, handle__defaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	friend QFont* QsciLexerMarkdown_virtualbase_defaultFontWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__defaultPaperWithStyle == 0) {
			return QsciLexerMarkdown::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerMarkdown_defaultPaperWithStyle(this, handle__defaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	friend QColor* QsciLexerMarkdown_virtualbase_defaultPaperWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__setEditor == 0) {
			QsciLexerMarkdown::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerMarkdown_setEditor(this, handle__setEditor, sigval1);

		
	}

	friend void QsciLexerMarkdown_virtualbase_setEditor(void* self, QsciScintilla* editor);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__refreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__refreshProperties == 0) {
			QsciLexerMarkdown::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerMarkdown_refreshProperties(this, handle__refreshProperties);

		
	}

	friend void QsciLexerMarkdown_virtualbase_refreshProperties(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__styleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__styleBitsNeeded == 0) {
			return QsciLexerMarkdown::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerMarkdown_styleBitsNeeded(this, handle__styleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerMarkdown_virtualbase_styleBitsNeeded(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__wordCharacters == 0) {
			return QsciLexerMarkdown::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerMarkdown_wordCharacters(this, handle__wordCharacters);

		return callback_return_value;
	}

	friend const char* QsciLexerMarkdown_virtualbase_wordCharacters(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__setAutoIndentStyle == 0) {
			QsciLexerMarkdown::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerMarkdown_setAutoIndentStyle(this, handle__setAutoIndentStyle, sigval1);

		
	}

	friend void QsciLexerMarkdown_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__setColor == 0) {
			QsciLexerMarkdown::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerMarkdown_setColor(this, handle__setColor, sigval1, sigval2);

		
	}

	friend void QsciLexerMarkdown_virtualbase_setColor(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__setEolFill == 0) {
			QsciLexerMarkdown::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerMarkdown_setEolFill(this, handle__setEolFill, sigval1, sigval2);

		
	}

	friend void QsciLexerMarkdown_virtualbase_setEolFill(void* self, bool eoffill, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__setFont == 0) {
			QsciLexerMarkdown::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerMarkdown_setFont(this, handle__setFont, sigval1, sigval2);

		
	}

	friend void QsciLexerMarkdown_virtualbase_setFont(void* self, QFont* f, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__setPaper == 0) {
			QsciLexerMarkdown::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerMarkdown_setPaper(this, handle__setPaper, sigval1, sigval2);

		
	}

	friend void QsciLexerMarkdown_virtualbase_setPaper(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__readProperties == 0) {
			return QsciLexerMarkdown::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerMarkdown_readProperties(this, handle__readProperties, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QsciLexerMarkdown_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__writeProperties == 0) {
			return QsciLexerMarkdown::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerMarkdown_writeProperties(this, handle__writeProperties, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QsciLexerMarkdown_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QsciLexerMarkdown::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerMarkdown_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QsciLexerMarkdown_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QsciLexerMarkdown::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerMarkdown_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QsciLexerMarkdown_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QsciLexerMarkdown::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerMarkdown_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QsciLexerMarkdown_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QsciLexerMarkdown::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerMarkdown_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QsciLexerMarkdown_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QsciLexerMarkdown::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerMarkdown_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QsciLexerMarkdown_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QsciLexerMarkdown::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerMarkdown_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QsciLexerMarkdown_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QsciLexerMarkdown::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerMarkdown_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QsciLexerMarkdown_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QsciLexerMarkdown_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerMarkdown_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerMarkdown_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciLexerMarkdown_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciLexerMarkdown* QsciLexerMarkdown_new() {
	return new MiqtVirtualQsciLexerMarkdown();
}

QsciLexerMarkdown* QsciLexerMarkdown_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerMarkdown(parent);
}

void QsciLexerMarkdown_virtbase(QsciLexerMarkdown* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerMarkdown_metaObject(const QsciLexerMarkdown* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerMarkdown_metacast(QsciLexerMarkdown* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerMarkdown_tr(const char* s) {
	QString _ret = QsciLexerMarkdown::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerMarkdown_language(const QsciLexerMarkdown* self) {
	return (const char*) self->language();
}

const char* QsciLexerMarkdown_lexer(const QsciLexerMarkdown* self) {
	return (const char*) self->lexer();
}

QColor* QsciLexerMarkdown_defaultColor(const QsciLexerMarkdown* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerMarkdown_defaultFont(const QsciLexerMarkdown* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerMarkdown_defaultPaper(const QsciLexerMarkdown* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

struct miqt_string QsciLexerMarkdown_description(const QsciLexerMarkdown* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerMarkdown_tr2(const char* s, const char* c) {
	QString _ret = QsciLexerMarkdown::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerMarkdown_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerMarkdown::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexerMarkdown_override_virtual_language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__language = slot;
	return true;
}

bool QsciLexerMarkdown_override_virtual_lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__lexer = slot;
	return true;
}

const char* QsciLexerMarkdown_virtualbase_lexer(const void* self) {

	return (const char*) ( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::lexer();

}

bool QsciLexerMarkdown_override_virtual_lexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__lexerId = slot;
	return true;
}

int QsciLexerMarkdown_virtualbase_lexerId(const void* self) {

	return ( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::lexerId();

}

bool QsciLexerMarkdown_override_virtual_autoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompletionFillups = slot;
	return true;
}

const char* QsciLexerMarkdown_virtualbase_autoCompletionFillups(const void* self) {

	return (const char*) ( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::autoCompletionFillups();

}

bool QsciLexerMarkdown_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerMarkdown_virtualbase_autoCompletionWordSeparators(const void* self) {

	QStringList _ret = ( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::autoCompletionWordSeparators();
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

bool QsciLexerMarkdown_override_virtual_blockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockEnd = slot;
	return true;
}

const char* QsciLexerMarkdown_virtualbase_blockEnd(const void* self, int* style) {

	return (const char*) ( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::blockEnd(static_cast<int*>(style));

}

bool QsciLexerMarkdown_override_virtual_blockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockLookback = slot;
	return true;
}

int QsciLexerMarkdown_virtualbase_blockLookback(const void* self) {

	return ( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::blockLookback();

}

bool QsciLexerMarkdown_override_virtual_blockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockStart = slot;
	return true;
}

const char* QsciLexerMarkdown_virtualbase_blockStart(const void* self, int* style) {

	return (const char*) ( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::blockStart(static_cast<int*>(style));

}

bool QsciLexerMarkdown_override_virtual_blockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockStartKeyword = slot;
	return true;
}

const char* QsciLexerMarkdown_virtualbase_blockStartKeyword(const void* self, int* style) {

	return (const char*) ( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::blockStartKeyword(static_cast<int*>(style));

}

bool QsciLexerMarkdown_override_virtual_braceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__braceStyle = slot;
	return true;
}

int QsciLexerMarkdown_virtualbase_braceStyle(const void* self) {

	return ( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::braceStyle();

}

bool QsciLexerMarkdown_override_virtual_caseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__caseSensitive = slot;
	return true;
}

bool QsciLexerMarkdown_virtualbase_caseSensitive(const void* self) {

	return ( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::caseSensitive();

}

bool QsciLexerMarkdown_override_virtual_color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__color = slot;
	return true;
}

QColor* QsciLexerMarkdown_virtualbase_color(const void* self, int style) {

	return new QColor(( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::color(static_cast<int>(style)));

}

bool QsciLexerMarkdown_override_virtual_eolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eolFill = slot;
	return true;
}

bool QsciLexerMarkdown_virtualbase_eolFill(const void* self, int style) {

	return ( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::eolFill(static_cast<int>(style));

}

bool QsciLexerMarkdown_override_virtual_font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__font = slot;
	return true;
}

QFont* QsciLexerMarkdown_virtualbase_font(const void* self, int style) {

	return new QFont(( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::font(static_cast<int>(style)));

}

bool QsciLexerMarkdown_override_virtual_indentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indentationGuideView = slot;
	return true;
}

int QsciLexerMarkdown_virtualbase_indentationGuideView(const void* self) {

	return ( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::indentationGuideView();

}

bool QsciLexerMarkdown_override_virtual_keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keywords = slot;
	return true;
}

const char* QsciLexerMarkdown_virtualbase_keywords(const void* self, int set) {

	return (const char*) ( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::keywords(static_cast<int>(set));

}

bool QsciLexerMarkdown_override_virtual_defaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultStyle = slot;
	return true;
}

int QsciLexerMarkdown_virtualbase_defaultStyle(const void* self) {

	return ( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::defaultStyle();

}

bool QsciLexerMarkdown_override_virtual_description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__description = slot;
	return true;
}

bool QsciLexerMarkdown_override_virtual_paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paper = slot;
	return true;
}

QColor* QsciLexerMarkdown_virtualbase_paper(const void* self, int style) {

	return new QColor(( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::paper(static_cast<int>(style)));

}

bool QsciLexerMarkdown_override_virtual_defaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexerMarkdown_virtualbase_defaultColorWithStyle(const void* self, int style) {

	return new QColor(( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::defaultColor(static_cast<int>(style)));

}

bool QsciLexerMarkdown_override_virtual_defaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultEolFill = slot;
	return true;
}

bool QsciLexerMarkdown_virtualbase_defaultEolFill(const void* self, int style) {

	return ( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::defaultEolFill(static_cast<int>(style));

}

bool QsciLexerMarkdown_override_virtual_defaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexerMarkdown_virtualbase_defaultFontWithStyle(const void* self, int style) {

	return new QFont(( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::defaultFont(static_cast<int>(style)));

}

bool QsciLexerMarkdown_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexerMarkdown_virtualbase_defaultPaperWithStyle(const void* self, int style) {

	return new QColor(( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::defaultPaper(static_cast<int>(style)));

}

bool QsciLexerMarkdown_override_virtual_setEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEditor = slot;
	return true;
}

void QsciLexerMarkdown_virtualbase_setEditor(void* self, QsciScintilla* editor) {

	( (MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::setEditor(editor);

}

bool QsciLexerMarkdown_override_virtual_refreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__refreshProperties = slot;
	return true;
}

void QsciLexerMarkdown_virtualbase_refreshProperties(void* self) {

	( (MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::refreshProperties();

}

bool QsciLexerMarkdown_override_virtual_styleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__styleBitsNeeded = slot;
	return true;
}

int QsciLexerMarkdown_virtualbase_styleBitsNeeded(const void* self) {

	return ( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::styleBitsNeeded();

}

bool QsciLexerMarkdown_override_virtual_wordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wordCharacters = slot;
	return true;
}

const char* QsciLexerMarkdown_virtualbase_wordCharacters(const void* self) {

	return (const char*) ( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::wordCharacters();

}

bool QsciLexerMarkdown_override_virtual_setAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAutoIndentStyle = slot;
	return true;
}

void QsciLexerMarkdown_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle) {

	( (MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::setAutoIndentStyle(static_cast<int>(autoindentstyle));

}

bool QsciLexerMarkdown_override_virtual_setColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setColor = slot;
	return true;
}

void QsciLexerMarkdown_virtualbase_setColor(void* self, QColor* c, int style) {

	( (MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::setColor(*c, static_cast<int>(style));

}

bool QsciLexerMarkdown_override_virtual_setEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEolFill = slot;
	return true;
}

void QsciLexerMarkdown_virtualbase_setEolFill(void* self, bool eoffill, int style) {

	( (MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::setEolFill(eoffill, static_cast<int>(style));

}

bool QsciLexerMarkdown_override_virtual_setFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFont = slot;
	return true;
}

void QsciLexerMarkdown_virtualbase_setFont(void* self, QFont* f, int style) {

	( (MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::setFont(*f, static_cast<int>(style));

}

bool QsciLexerMarkdown_override_virtual_setPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPaper = slot;
	return true;
}

void QsciLexerMarkdown_virtualbase_setPaper(void* self, QColor* c, int style) {

	( (MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::setPaper(*c, static_cast<int>(style));

}

bool QsciLexerMarkdown_override_virtual_readProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readProperties = slot;
	return true;
}

bool QsciLexerMarkdown_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

	return ( (MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::readProperties(*qs, prefix_QString);

}

bool QsciLexerMarkdown_override_virtual_writeProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__writeProperties = slot;
	return true;
}

bool QsciLexerMarkdown_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

	return ( (const MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::writeProperties(*qs, prefix_QString);

}

bool QsciLexerMarkdown_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QsciLexerMarkdown_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::event(event);

}

bool QsciLexerMarkdown_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QsciLexerMarkdown_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::eventFilter(watched, event);

}

bool QsciLexerMarkdown_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QsciLexerMarkdown_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::timerEvent(event);

}

bool QsciLexerMarkdown_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QsciLexerMarkdown_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::childEvent(event);

}

bool QsciLexerMarkdown_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QsciLexerMarkdown_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::customEvent(event);

}

bool QsciLexerMarkdown_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QsciLexerMarkdown_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::connectNotify(*signal);

}

bool QsciLexerMarkdown_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QsciLexerMarkdown_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQsciLexerMarkdown*)(self) )->QsciLexerMarkdown::disconnectNotify(*signal);

}

QObject* QsciLexerMarkdown_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QsciLexerMarkdown_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QsciLexerMarkdown_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QsciLexerMarkdown_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciLexerMarkdown* self_cast = dynamic_cast<MiqtVirtualQsciLexerMarkdown*>( (QsciLexerMarkdown*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QsciLexerMarkdown_delete(QsciLexerMarkdown* self) {
	delete self;
}

