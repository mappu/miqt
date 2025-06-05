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
#include <qscilexeredifact.h>
#include "gen_qscilexeredifact.h"

#ifdef __cplusplus
extern "C" {
#endif

const char* miqt_exec_callback_QsciLexerEDIFACT_language(const QsciLexerEDIFACT*, intptr_t);
const char* miqt_exec_callback_QsciLexerEDIFACT_lexer(const QsciLexerEDIFACT*, intptr_t);
int miqt_exec_callback_QsciLexerEDIFACT_lexerId(const QsciLexerEDIFACT*, intptr_t);
const char* miqt_exec_callback_QsciLexerEDIFACT_autoCompletionFillups(const QsciLexerEDIFACT*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerEDIFACT_autoCompletionWordSeparators(const QsciLexerEDIFACT*, intptr_t);
const char* miqt_exec_callback_QsciLexerEDIFACT_blockEnd(const QsciLexerEDIFACT*, intptr_t, int*);
int miqt_exec_callback_QsciLexerEDIFACT_blockLookback(const QsciLexerEDIFACT*, intptr_t);
const char* miqt_exec_callback_QsciLexerEDIFACT_blockStart(const QsciLexerEDIFACT*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerEDIFACT_blockStartKeyword(const QsciLexerEDIFACT*, intptr_t, int*);
int miqt_exec_callback_QsciLexerEDIFACT_braceStyle(const QsciLexerEDIFACT*, intptr_t);
bool miqt_exec_callback_QsciLexerEDIFACT_caseSensitive(const QsciLexerEDIFACT*, intptr_t);
QColor* miqt_exec_callback_QsciLexerEDIFACT_color(const QsciLexerEDIFACT*, intptr_t, int);
bool miqt_exec_callback_QsciLexerEDIFACT_eolFill(const QsciLexerEDIFACT*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerEDIFACT_font(const QsciLexerEDIFACT*, intptr_t, int);
int miqt_exec_callback_QsciLexerEDIFACT_indentationGuideView(const QsciLexerEDIFACT*, intptr_t);
const char* miqt_exec_callback_QsciLexerEDIFACT_keywords(const QsciLexerEDIFACT*, intptr_t, int);
int miqt_exec_callback_QsciLexerEDIFACT_defaultStyle(const QsciLexerEDIFACT*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerEDIFACT_description(const QsciLexerEDIFACT*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerEDIFACT_paper(const QsciLexerEDIFACT*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerEDIFACT_defaultColorWithStyle(const QsciLexerEDIFACT*, intptr_t, int);
bool miqt_exec_callback_QsciLexerEDIFACT_defaultEolFill(const QsciLexerEDIFACT*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerEDIFACT_defaultFontWithStyle(const QsciLexerEDIFACT*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerEDIFACT_defaultPaperWithStyle(const QsciLexerEDIFACT*, intptr_t, int);
void miqt_exec_callback_QsciLexerEDIFACT_setEditor(QsciLexerEDIFACT*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerEDIFACT_refreshProperties(QsciLexerEDIFACT*, intptr_t);
int miqt_exec_callback_QsciLexerEDIFACT_styleBitsNeeded(const QsciLexerEDIFACT*, intptr_t);
const char* miqt_exec_callback_QsciLexerEDIFACT_wordCharacters(const QsciLexerEDIFACT*, intptr_t);
void miqt_exec_callback_QsciLexerEDIFACT_setAutoIndentStyle(QsciLexerEDIFACT*, intptr_t, int);
void miqt_exec_callback_QsciLexerEDIFACT_setColor(QsciLexerEDIFACT*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerEDIFACT_setEolFill(QsciLexerEDIFACT*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerEDIFACT_setFont(QsciLexerEDIFACT*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerEDIFACT_setPaper(QsciLexerEDIFACT*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerEDIFACT_readProperties(QsciLexerEDIFACT*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerEDIFACT_writeProperties(const QsciLexerEDIFACT*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerEDIFACT_event(QsciLexerEDIFACT*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerEDIFACT_eventFilter(QsciLexerEDIFACT*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerEDIFACT_timerEvent(QsciLexerEDIFACT*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerEDIFACT_childEvent(QsciLexerEDIFACT*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerEDIFACT_customEvent(QsciLexerEDIFACT*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerEDIFACT_connectNotify(QsciLexerEDIFACT*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerEDIFACT_disconnectNotify(QsciLexerEDIFACT*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerEDIFACT final : public QsciLexerEDIFACT {
public:

	MiqtVirtualQsciLexerEDIFACT(): QsciLexerEDIFACT() {}
	MiqtVirtualQsciLexerEDIFACT(QObject* parent): QsciLexerEDIFACT(parent) {}

	virtual ~MiqtVirtualQsciLexerEDIFACT() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_language(this, handle__language);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__lexer == 0) {
			return QsciLexerEDIFACT::lexer();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_lexer(this, handle__lexer);
		return callback_return_value;
	}

	friend const char* QsciLexerEDIFACT_virtualbase_lexer(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__lexerId == 0) {
			return QsciLexerEDIFACT::lexerId();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_lexerId(this, handle__lexerId);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerEDIFACT_virtualbase_lexerId(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__autoCompletionFillups == 0) {
			return QsciLexerEDIFACT::autoCompletionFillups();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_autoCompletionFillups(this, handle__autoCompletionFillups);
		return callback_return_value;
	}

	friend const char* QsciLexerEDIFACT_virtualbase_autoCompletionFillups(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__autoCompletionWordSeparators == 0) {
			return QsciLexerEDIFACT::autoCompletionWordSeparators();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_autoCompletionWordSeparators(this, handle__autoCompletionWordSeparators);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QsciLexerEDIFACT_virtualbase_autoCompletionWordSeparators(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (handle__blockEnd == 0) {
			return QsciLexerEDIFACT::blockEnd(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_blockEnd(this, handle__blockEnd, sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerEDIFACT_virtualbase_blockEnd(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__blockLookback == 0) {
			return QsciLexerEDIFACT::blockLookback();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_blockLookback(this, handle__blockLookback);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerEDIFACT_virtualbase_blockLookback(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__blockStart == 0) {
			return QsciLexerEDIFACT::blockStart(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_blockStart(this, handle__blockStart, sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerEDIFACT_virtualbase_blockStart(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__blockStartKeyword == 0) {
			return QsciLexerEDIFACT::blockStartKeyword(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_blockStartKeyword(this, handle__blockStartKeyword, sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerEDIFACT_virtualbase_blockStartKeyword(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__braceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__braceStyle == 0) {
			return QsciLexerEDIFACT::braceStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_braceStyle(this, handle__braceStyle);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerEDIFACT_virtualbase_braceStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__caseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__caseSensitive == 0) {
			return QsciLexerEDIFACT::caseSensitive();
		}

		bool callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_caseSensitive(this, handle__caseSensitive);
		return callback_return_value;
	}

	friend bool QsciLexerEDIFACT_virtualbase_caseSensitive(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__color == 0) {
			return QsciLexerEDIFACT::color(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_color(this, handle__color, sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerEDIFACT_virtualbase_color(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__eolFill == 0) {
			return QsciLexerEDIFACT::eolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_eolFill(this, handle__eolFill, sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerEDIFACT_virtualbase_eolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__font == 0) {
			return QsciLexerEDIFACT::font(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_font(this, handle__font, sigval1);
		return *callback_return_value;
	}

	friend QFont* QsciLexerEDIFACT_virtualbase_font(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__indentationGuideView == 0) {
			return QsciLexerEDIFACT::indentationGuideView();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_indentationGuideView(this, handle__indentationGuideView);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerEDIFACT_virtualbase_indentationGuideView(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__keywords == 0) {
			return QsciLexerEDIFACT::keywords(set);
		}

		int sigval1 = set;
		const char* callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_keywords(this, handle__keywords, sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerEDIFACT_virtualbase_keywords(const void* self, int set);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__defaultStyle == 0) {
			return QsciLexerEDIFACT::defaultStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_defaultStyle(this, handle__defaultStyle);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerEDIFACT_virtualbase_defaultStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}

		int sigval1 = style;
		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_description(this, handle__description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__paper == 0) {
			return QsciLexerEDIFACT::paper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_paper(this, handle__paper, sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerEDIFACT_virtualbase_paper(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__defaultColorWithStyle == 0) {
			return QsciLexerEDIFACT::defaultColor(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_defaultColorWithStyle(this, handle__defaultColorWithStyle, sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerEDIFACT_virtualbase_defaultColorWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__defaultEolFill == 0) {
			return QsciLexerEDIFACT::defaultEolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_defaultEolFill(this, handle__defaultEolFill, sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerEDIFACT_virtualbase_defaultEolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__defaultFontWithStyle == 0) {
			return QsciLexerEDIFACT::defaultFont(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_defaultFontWithStyle(this, handle__defaultFontWithStyle, sigval1);
		return *callback_return_value;
	}

	friend QFont* QsciLexerEDIFACT_virtualbase_defaultFontWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__defaultPaperWithStyle == 0) {
			return QsciLexerEDIFACT::defaultPaper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_defaultPaperWithStyle(this, handle__defaultPaperWithStyle, sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerEDIFACT_virtualbase_defaultPaperWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__setEditor == 0) {
			QsciLexerEDIFACT::setEditor(editor);
			return;
		}

		QsciScintilla* sigval1 = editor;
		miqt_exec_callback_QsciLexerEDIFACT_setEditor(this, handle__setEditor, sigval1);

	}

	friend void QsciLexerEDIFACT_virtualbase_setEditor(void* self, QsciScintilla* editor);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__refreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__refreshProperties == 0) {
			QsciLexerEDIFACT::refreshProperties();
			return;
		}

		miqt_exec_callback_QsciLexerEDIFACT_refreshProperties(this, handle__refreshProperties);

	}

	friend void QsciLexerEDIFACT_virtualbase_refreshProperties(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__styleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__styleBitsNeeded == 0) {
			return QsciLexerEDIFACT::styleBitsNeeded();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_styleBitsNeeded(this, handle__styleBitsNeeded);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerEDIFACT_virtualbase_styleBitsNeeded(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__wordCharacters == 0) {
			return QsciLexerEDIFACT::wordCharacters();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_wordCharacters(this, handle__wordCharacters);
		return callback_return_value;
	}

	friend const char* QsciLexerEDIFACT_virtualbase_wordCharacters(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__setAutoIndentStyle == 0) {
			QsciLexerEDIFACT::setAutoIndentStyle(autoindentstyle);
			return;
		}

		int sigval1 = autoindentstyle;
		miqt_exec_callback_QsciLexerEDIFACT_setAutoIndentStyle(this, handle__setAutoIndentStyle, sigval1);

	}

	friend void QsciLexerEDIFACT_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__setColor == 0) {
			QsciLexerEDIFACT::setColor(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerEDIFACT_setColor(this, handle__setColor, sigval1, sigval2);

	}

	friend void QsciLexerEDIFACT_virtualbase_setColor(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__setEolFill == 0) {
			QsciLexerEDIFACT::setEolFill(eoffill, style);
			return;
		}

		bool sigval1 = eoffill;
		int sigval2 = style;
		miqt_exec_callback_QsciLexerEDIFACT_setEolFill(this, handle__setEolFill, sigval1, sigval2);

	}

	friend void QsciLexerEDIFACT_virtualbase_setEolFill(void* self, bool eoffill, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__setFont == 0) {
			QsciLexerEDIFACT::setFont(f, style);
			return;
		}

		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerEDIFACT_setFont(this, handle__setFont, sigval1, sigval2);

	}

	friend void QsciLexerEDIFACT_virtualbase_setFont(void* self, QFont* f, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__setPaper == 0) {
			QsciLexerEDIFACT::setPaper(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerEDIFACT_setPaper(this, handle__setPaper, sigval1, sigval2);

	}

	friend void QsciLexerEDIFACT_virtualbase_setPaper(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__readProperties == 0) {
			return QsciLexerEDIFACT::readProperties(qs, prefix);
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
		bool callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_readProperties(this, handle__readProperties, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerEDIFACT_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__writeProperties == 0) {
			return QsciLexerEDIFACT::writeProperties(qs, prefix);
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
		bool callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_writeProperties(this, handle__writeProperties, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerEDIFACT_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QsciLexerEDIFACT::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerEDIFACT_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QsciLexerEDIFACT::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerEDIFACT_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerEDIFACT_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QsciLexerEDIFACT::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerEDIFACT_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QsciLexerEDIFACT_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QsciLexerEDIFACT::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerEDIFACT_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QsciLexerEDIFACT_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QsciLexerEDIFACT::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerEDIFACT_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QsciLexerEDIFACT_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QsciLexerEDIFACT::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerEDIFACT_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QsciLexerEDIFACT_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QsciLexerEDIFACT::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerEDIFACT_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QsciLexerEDIFACT_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QsciLexerEDIFACT_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerEDIFACT_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerEDIFACT_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciLexerEDIFACT_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciLexerEDIFACT* QsciLexerEDIFACT_new() {
	return new (std::nothrow) MiqtVirtualQsciLexerEDIFACT();
}

QsciLexerEDIFACT* QsciLexerEDIFACT_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQsciLexerEDIFACT(parent);
}

void QsciLexerEDIFACT_virtbase(QsciLexerEDIFACT* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerEDIFACT_metaObject(const QsciLexerEDIFACT* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerEDIFACT_metacast(QsciLexerEDIFACT* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerEDIFACT_tr(const char* s) {
	QString _ret = QsciLexerEDIFACT::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerEDIFACT_language(const QsciLexerEDIFACT* self) {
	return (const char*) self->language();
}

const char* QsciLexerEDIFACT_lexer(const QsciLexerEDIFACT* self) {
	return (const char*) self->lexer();
}

QColor* QsciLexerEDIFACT_defaultColor(const QsciLexerEDIFACT* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

struct miqt_string QsciLexerEDIFACT_description(const QsciLexerEDIFACT* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerEDIFACT_tr2(const char* s, const char* c) {
	QString _ret = QsciLexerEDIFACT::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerEDIFACT_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerEDIFACT::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexerEDIFACT_override_virtual_language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__language = slot;
	return true;
}

bool QsciLexerEDIFACT_override_virtual_lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexer = slot;
	return true;
}

const char* QsciLexerEDIFACT_virtualbase_lexer(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::lexer();
}

bool QsciLexerEDIFACT_override_virtual_lexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexerId = slot;
	return true;
}

int QsciLexerEDIFACT_virtualbase_lexerId(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::lexerId();
}

bool QsciLexerEDIFACT_override_virtual_autoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionFillups = slot;
	return true;
}

const char* QsciLexerEDIFACT_virtualbase_autoCompletionFillups(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::autoCompletionFillups();
}

bool QsciLexerEDIFACT_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerEDIFACT_virtualbase_autoCompletionWordSeparators(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::autoCompletionWordSeparators();
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

bool QsciLexerEDIFACT_override_virtual_blockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockEnd = slot;
	return true;
}

const char* QsciLexerEDIFACT_virtualbase_blockEnd(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::blockEnd(static_cast<int*>(style));
}

bool QsciLexerEDIFACT_override_virtual_blockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockLookback = slot;
	return true;
}

int QsciLexerEDIFACT_virtualbase_blockLookback(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::blockLookback();
}

bool QsciLexerEDIFACT_override_virtual_blockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStart = slot;
	return true;
}

const char* QsciLexerEDIFACT_virtualbase_blockStart(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::blockStart(static_cast<int*>(style));
}

bool QsciLexerEDIFACT_override_virtual_blockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStartKeyword = slot;
	return true;
}

const char* QsciLexerEDIFACT_virtualbase_blockStartKeyword(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::blockStartKeyword(static_cast<int*>(style));
}

bool QsciLexerEDIFACT_override_virtual_braceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__braceStyle = slot;
	return true;
}

int QsciLexerEDIFACT_virtualbase_braceStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::braceStyle();
}

bool QsciLexerEDIFACT_override_virtual_caseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__caseSensitive = slot;
	return true;
}

bool QsciLexerEDIFACT_virtualbase_caseSensitive(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::caseSensitive();
}

bool QsciLexerEDIFACT_override_virtual_color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__color = slot;
	return true;
}

QColor* QsciLexerEDIFACT_virtualbase_color(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::color(static_cast<int>(style)));
}

bool QsciLexerEDIFACT_override_virtual_eolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eolFill = slot;
	return true;
}

bool QsciLexerEDIFACT_virtualbase_eolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::eolFill(static_cast<int>(style));
}

bool QsciLexerEDIFACT_override_virtual_font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__font = slot;
	return true;
}

QFont* QsciLexerEDIFACT_virtualbase_font(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::font(static_cast<int>(style)));
}

bool QsciLexerEDIFACT_override_virtual_indentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indentationGuideView = slot;
	return true;
}

int QsciLexerEDIFACT_virtualbase_indentationGuideView(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::indentationGuideView();
}

bool QsciLexerEDIFACT_override_virtual_keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keywords = slot;
	return true;
}

const char* QsciLexerEDIFACT_virtualbase_keywords(const void* self, int set) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::keywords(static_cast<int>(set));
}

bool QsciLexerEDIFACT_override_virtual_defaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultStyle = slot;
	return true;
}

int QsciLexerEDIFACT_virtualbase_defaultStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::defaultStyle();
}

bool QsciLexerEDIFACT_override_virtual_description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__description = slot;
	return true;
}

bool QsciLexerEDIFACT_override_virtual_paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paper = slot;
	return true;
}

QColor* QsciLexerEDIFACT_virtualbase_paper(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::paper(static_cast<int>(style)));
}

bool QsciLexerEDIFACT_override_virtual_defaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexerEDIFACT_virtualbase_defaultColorWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::defaultColor(static_cast<int>(style)));
}

bool QsciLexerEDIFACT_override_virtual_defaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultEolFill = slot;
	return true;
}

bool QsciLexerEDIFACT_virtualbase_defaultEolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::defaultEolFill(static_cast<int>(style));
}

bool QsciLexerEDIFACT_override_virtual_defaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexerEDIFACT_virtualbase_defaultFontWithStyle(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::defaultFont(static_cast<int>(style)));
}

bool QsciLexerEDIFACT_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexerEDIFACT_virtualbase_defaultPaperWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::defaultPaper(static_cast<int>(style)));
}

bool QsciLexerEDIFACT_override_virtual_setEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEditor = slot;
	return true;
}

void QsciLexerEDIFACT_virtualbase_setEditor(void* self, QsciScintilla* editor) {
	static_cast<MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::setEditor(editor);
}

bool QsciLexerEDIFACT_override_virtual_refreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__refreshProperties = slot;
	return true;
}

void QsciLexerEDIFACT_virtualbase_refreshProperties(void* self) {
	static_cast<MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::refreshProperties();
}

bool QsciLexerEDIFACT_override_virtual_styleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__styleBitsNeeded = slot;
	return true;
}

int QsciLexerEDIFACT_virtualbase_styleBitsNeeded(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::styleBitsNeeded();
}

bool QsciLexerEDIFACT_override_virtual_wordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wordCharacters = slot;
	return true;
}

const char* QsciLexerEDIFACT_virtualbase_wordCharacters(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::wordCharacters();
}

bool QsciLexerEDIFACT_override_virtual_setAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAutoIndentStyle = slot;
	return true;
}

void QsciLexerEDIFACT_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle) {
	static_cast<MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

bool QsciLexerEDIFACT_override_virtual_setColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setColor = slot;
	return true;
}

void QsciLexerEDIFACT_virtualbase_setColor(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::setColor(*c, static_cast<int>(style));
}

bool QsciLexerEDIFACT_override_virtual_setEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEolFill = slot;
	return true;
}

void QsciLexerEDIFACT_virtualbase_setEolFill(void* self, bool eoffill, int style) {
	static_cast<MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::setEolFill(eoffill, static_cast<int>(style));
}

bool QsciLexerEDIFACT_override_virtual_setFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFont = slot;
	return true;
}

void QsciLexerEDIFACT_virtualbase_setFont(void* self, QFont* f, int style) {
	static_cast<MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::setFont(*f, static_cast<int>(style));
}

bool QsciLexerEDIFACT_override_virtual_setPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPaper = slot;
	return true;
}

void QsciLexerEDIFACT_virtualbase_setPaper(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::setPaper(*c, static_cast<int>(style));
}

bool QsciLexerEDIFACT_override_virtual_readProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readProperties = slot;
	return true;
}

bool QsciLexerEDIFACT_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::readProperties(*qs, prefix_QString);
}

bool QsciLexerEDIFACT_override_virtual_writeProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeProperties = slot;
	return true;
}

bool QsciLexerEDIFACT_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<const MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::writeProperties(*qs, prefix_QString);
}

bool QsciLexerEDIFACT_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QsciLexerEDIFACT_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::event(event);
}

bool QsciLexerEDIFACT_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QsciLexerEDIFACT_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::eventFilter(watched, event);
}

bool QsciLexerEDIFACT_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QsciLexerEDIFACT_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::timerEvent(event);
}

bool QsciLexerEDIFACT_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QsciLexerEDIFACT_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::childEvent(event);
}

bool QsciLexerEDIFACT_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QsciLexerEDIFACT_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::customEvent(event);
}

bool QsciLexerEDIFACT_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QsciLexerEDIFACT_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::connectNotify(*signal);
}

bool QsciLexerEDIFACT_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QsciLexerEDIFACT_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerEDIFACT*>(self)->QsciLexerEDIFACT::disconnectNotify(*signal);
}

QObject* QsciLexerEDIFACT_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QsciLexerEDIFACT_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QsciLexerEDIFACT_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QsciLexerEDIFACT_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciLexerEDIFACT* self_cast = dynamic_cast<MiqtVirtualQsciLexerEDIFACT*>( (QsciLexerEDIFACT*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QsciLexerEDIFACT_delete(QsciLexerEDIFACT* self) {
	delete self;
}

