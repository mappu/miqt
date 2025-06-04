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
#include <qscilexerproperties.h>
#include "gen_qscilexerproperties.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerProperties_setFoldCompact(QsciLexerProperties*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerProperties_language(const QsciLexerProperties*, intptr_t);
const char* miqt_exec_callback_QsciLexerProperties_lexer(const QsciLexerProperties*, intptr_t);
int miqt_exec_callback_QsciLexerProperties_lexerId(const QsciLexerProperties*, intptr_t);
const char* miqt_exec_callback_QsciLexerProperties_autoCompletionFillups(const QsciLexerProperties*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerProperties_autoCompletionWordSeparators(const QsciLexerProperties*, intptr_t);
const char* miqt_exec_callback_QsciLexerProperties_blockEnd(const QsciLexerProperties*, intptr_t, int*);
int miqt_exec_callback_QsciLexerProperties_blockLookback(const QsciLexerProperties*, intptr_t);
const char* miqt_exec_callback_QsciLexerProperties_blockStart(const QsciLexerProperties*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerProperties_blockStartKeyword(const QsciLexerProperties*, intptr_t, int*);
int miqt_exec_callback_QsciLexerProperties_braceStyle(const QsciLexerProperties*, intptr_t);
bool miqt_exec_callback_QsciLexerProperties_caseSensitive(const QsciLexerProperties*, intptr_t);
QColor* miqt_exec_callback_QsciLexerProperties_color(const QsciLexerProperties*, intptr_t, int);
bool miqt_exec_callback_QsciLexerProperties_eolFill(const QsciLexerProperties*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerProperties_font(const QsciLexerProperties*, intptr_t, int);
int miqt_exec_callback_QsciLexerProperties_indentationGuideView(const QsciLexerProperties*, intptr_t);
const char* miqt_exec_callback_QsciLexerProperties_keywords(const QsciLexerProperties*, intptr_t, int);
int miqt_exec_callback_QsciLexerProperties_defaultStyle(const QsciLexerProperties*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerProperties_description(const QsciLexerProperties*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerProperties_paper(const QsciLexerProperties*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerProperties_defaultColorWithStyle(const QsciLexerProperties*, intptr_t, int);
bool miqt_exec_callback_QsciLexerProperties_defaultEolFill(const QsciLexerProperties*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerProperties_defaultFontWithStyle(const QsciLexerProperties*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerProperties_defaultPaperWithStyle(const QsciLexerProperties*, intptr_t, int);
void miqt_exec_callback_QsciLexerProperties_setEditor(QsciLexerProperties*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerProperties_refreshProperties(QsciLexerProperties*, intptr_t);
int miqt_exec_callback_QsciLexerProperties_styleBitsNeeded(const QsciLexerProperties*, intptr_t);
const char* miqt_exec_callback_QsciLexerProperties_wordCharacters(const QsciLexerProperties*, intptr_t);
void miqt_exec_callback_QsciLexerProperties_setAutoIndentStyle(QsciLexerProperties*, intptr_t, int);
void miqt_exec_callback_QsciLexerProperties_setColor(QsciLexerProperties*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerProperties_setEolFill(QsciLexerProperties*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerProperties_setFont(QsciLexerProperties*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerProperties_setPaper(QsciLexerProperties*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerProperties_readProperties(QsciLexerProperties*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerProperties_writeProperties(const QsciLexerProperties*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerProperties_event(QsciLexerProperties*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerProperties_eventFilter(QsciLexerProperties*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerProperties_timerEvent(QsciLexerProperties*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerProperties_childEvent(QsciLexerProperties*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerProperties_customEvent(QsciLexerProperties*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerProperties_connectNotify(QsciLexerProperties*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerProperties_disconnectNotify(QsciLexerProperties*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerProperties final : public QsciLexerProperties {
public:

	MiqtVirtualQsciLexerProperties(): QsciLexerProperties() {}
	MiqtVirtualQsciLexerProperties(QObject* parent): QsciLexerProperties(parent) {}

	virtual ~MiqtVirtualQsciLexerProperties() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__setFoldCompact == 0) {
			QsciLexerProperties::setFoldCompact(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerProperties_setFoldCompact(this, handle__setFoldCompact, sigval1);

	}

	friend void QsciLexerProperties_virtualbase_setFoldCompact(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerProperties_language(this, handle__language);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__lexer == 0) {
			return QsciLexerProperties::lexer();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerProperties_lexer(this, handle__lexer);
		return callback_return_value;
	}

	friend const char* QsciLexerProperties_virtualbase_lexer(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__lexerId == 0) {
			return QsciLexerProperties::lexerId();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerProperties_lexerId(this, handle__lexerId);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerProperties_virtualbase_lexerId(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__autoCompletionFillups == 0) {
			return QsciLexerProperties::autoCompletionFillups();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerProperties_autoCompletionFillups(this, handle__autoCompletionFillups);
		return callback_return_value;
	}

	friend const char* QsciLexerProperties_virtualbase_autoCompletionFillups(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__autoCompletionWordSeparators == 0) {
			return QsciLexerProperties::autoCompletionWordSeparators();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerProperties_autoCompletionWordSeparators(this, handle__autoCompletionWordSeparators);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QsciLexerProperties_virtualbase_autoCompletionWordSeparators(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (handle__blockEnd == 0) {
			return QsciLexerProperties::blockEnd(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerProperties_blockEnd(this, handle__blockEnd, sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerProperties_virtualbase_blockEnd(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__blockLookback == 0) {
			return QsciLexerProperties::blockLookback();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerProperties_blockLookback(this, handle__blockLookback);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerProperties_virtualbase_blockLookback(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__blockStart == 0) {
			return QsciLexerProperties::blockStart(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerProperties_blockStart(this, handle__blockStart, sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerProperties_virtualbase_blockStart(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__blockStartKeyword == 0) {
			return QsciLexerProperties::blockStartKeyword(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerProperties_blockStartKeyword(this, handle__blockStartKeyword, sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerProperties_virtualbase_blockStartKeyword(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__braceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__braceStyle == 0) {
			return QsciLexerProperties::braceStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerProperties_braceStyle(this, handle__braceStyle);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerProperties_virtualbase_braceStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__caseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__caseSensitive == 0) {
			return QsciLexerProperties::caseSensitive();
		}

		bool callback_return_value = miqt_exec_callback_QsciLexerProperties_caseSensitive(this, handle__caseSensitive);
		return callback_return_value;
	}

	friend bool QsciLexerProperties_virtualbase_caseSensitive(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__color == 0) {
			return QsciLexerProperties::color(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerProperties_color(this, handle__color, sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerProperties_virtualbase_color(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__eolFill == 0) {
			return QsciLexerProperties::eolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerProperties_eolFill(this, handle__eolFill, sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerProperties_virtualbase_eolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__font == 0) {
			return QsciLexerProperties::font(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerProperties_font(this, handle__font, sigval1);
		return *callback_return_value;
	}

	friend QFont* QsciLexerProperties_virtualbase_font(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__indentationGuideView == 0) {
			return QsciLexerProperties::indentationGuideView();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerProperties_indentationGuideView(this, handle__indentationGuideView);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerProperties_virtualbase_indentationGuideView(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__keywords == 0) {
			return QsciLexerProperties::keywords(set);
		}

		int sigval1 = set;
		const char* callback_return_value = miqt_exec_callback_QsciLexerProperties_keywords(this, handle__keywords, sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerProperties_virtualbase_keywords(const void* self, int set);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__defaultStyle == 0) {
			return QsciLexerProperties::defaultStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerProperties_defaultStyle(this, handle__defaultStyle);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerProperties_virtualbase_defaultStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}

		int sigval1 = style;
		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerProperties_description(this, handle__description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__paper == 0) {
			return QsciLexerProperties::paper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerProperties_paper(this, handle__paper, sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerProperties_virtualbase_paper(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__defaultColorWithStyle == 0) {
			return QsciLexerProperties::defaultColor(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerProperties_defaultColorWithStyle(this, handle__defaultColorWithStyle, sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerProperties_virtualbase_defaultColorWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__defaultEolFill == 0) {
			return QsciLexerProperties::defaultEolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerProperties_defaultEolFill(this, handle__defaultEolFill, sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerProperties_virtualbase_defaultEolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__defaultFontWithStyle == 0) {
			return QsciLexerProperties::defaultFont(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerProperties_defaultFontWithStyle(this, handle__defaultFontWithStyle, sigval1);
		return *callback_return_value;
	}

	friend QFont* QsciLexerProperties_virtualbase_defaultFontWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__defaultPaperWithStyle == 0) {
			return QsciLexerProperties::defaultPaper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerProperties_defaultPaperWithStyle(this, handle__defaultPaperWithStyle, sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerProperties_virtualbase_defaultPaperWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__setEditor == 0) {
			QsciLexerProperties::setEditor(editor);
			return;
		}

		QsciScintilla* sigval1 = editor;
		miqt_exec_callback_QsciLexerProperties_setEditor(this, handle__setEditor, sigval1);

	}

	friend void QsciLexerProperties_virtualbase_setEditor(void* self, QsciScintilla* editor);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__refreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__refreshProperties == 0) {
			QsciLexerProperties::refreshProperties();
			return;
		}

		miqt_exec_callback_QsciLexerProperties_refreshProperties(this, handle__refreshProperties);

	}

	friend void QsciLexerProperties_virtualbase_refreshProperties(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__styleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__styleBitsNeeded == 0) {
			return QsciLexerProperties::styleBitsNeeded();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerProperties_styleBitsNeeded(this, handle__styleBitsNeeded);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerProperties_virtualbase_styleBitsNeeded(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__wordCharacters == 0) {
			return QsciLexerProperties::wordCharacters();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerProperties_wordCharacters(this, handle__wordCharacters);
		return callback_return_value;
	}

	friend const char* QsciLexerProperties_virtualbase_wordCharacters(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__setAutoIndentStyle == 0) {
			QsciLexerProperties::setAutoIndentStyle(autoindentstyle);
			return;
		}

		int sigval1 = autoindentstyle;
		miqt_exec_callback_QsciLexerProperties_setAutoIndentStyle(this, handle__setAutoIndentStyle, sigval1);

	}

	friend void QsciLexerProperties_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__setColor == 0) {
			QsciLexerProperties::setColor(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerProperties_setColor(this, handle__setColor, sigval1, sigval2);

	}

	friend void QsciLexerProperties_virtualbase_setColor(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__setEolFill == 0) {
			QsciLexerProperties::setEolFill(eoffill, style);
			return;
		}

		bool sigval1 = eoffill;
		int sigval2 = style;
		miqt_exec_callback_QsciLexerProperties_setEolFill(this, handle__setEolFill, sigval1, sigval2);

	}

	friend void QsciLexerProperties_virtualbase_setEolFill(void* self, bool eoffill, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__setFont == 0) {
			QsciLexerProperties::setFont(f, style);
			return;
		}

		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerProperties_setFont(this, handle__setFont, sigval1, sigval2);

	}

	friend void QsciLexerProperties_virtualbase_setFont(void* self, QFont* f, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__setPaper == 0) {
			QsciLexerProperties::setPaper(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerProperties_setPaper(this, handle__setPaper, sigval1, sigval2);

	}

	friend void QsciLexerProperties_virtualbase_setPaper(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__readProperties == 0) {
			return QsciLexerProperties::readProperties(qs, prefix);
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
		bool callback_return_value = miqt_exec_callback_QsciLexerProperties_readProperties(this, handle__readProperties, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerProperties_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__writeProperties == 0) {
			return QsciLexerProperties::writeProperties(qs, prefix);
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
		bool callback_return_value = miqt_exec_callback_QsciLexerProperties_writeProperties(this, handle__writeProperties, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerProperties_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QsciLexerProperties::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerProperties_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerProperties_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QsciLexerProperties::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerProperties_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerProperties_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QsciLexerProperties::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerProperties_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QsciLexerProperties_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QsciLexerProperties::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerProperties_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QsciLexerProperties_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QsciLexerProperties::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerProperties_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QsciLexerProperties_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QsciLexerProperties::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerProperties_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QsciLexerProperties_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QsciLexerProperties::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerProperties_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QsciLexerProperties_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend bool QsciLexerProperties_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
	friend bool QsciLexerProperties_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
	friend QObject* QsciLexerProperties_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerProperties_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerProperties_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciLexerProperties_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciLexerProperties* QsciLexerProperties_new() {
	return new (std::nothrow) MiqtVirtualQsciLexerProperties();
}

QsciLexerProperties* QsciLexerProperties_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQsciLexerProperties(parent);
}

void QsciLexerProperties_virtbase(QsciLexerProperties* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerProperties_metaObject(const QsciLexerProperties* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerProperties_metacast(QsciLexerProperties* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerProperties_tr(const char* s) {
	QString _ret = QsciLexerProperties::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerProperties_trUtf8(const char* s) {
	QString _ret = QsciLexerProperties::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerProperties_language(const QsciLexerProperties* self) {
	return (const char*) self->language();
}

const char* QsciLexerProperties_lexer(const QsciLexerProperties* self) {
	return (const char*) self->lexer();
}

const char* QsciLexerProperties_wordCharacters(const QsciLexerProperties* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerProperties_defaultColor(const QsciLexerProperties* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerProperties_defaultEolFill(const QsciLexerProperties* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerProperties_defaultFont(const QsciLexerProperties* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerProperties_defaultPaper(const QsciLexerProperties* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

struct miqt_string QsciLexerProperties_description(const QsciLexerProperties* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerProperties_refreshProperties(QsciLexerProperties* self) {
	self->refreshProperties();
}

bool QsciLexerProperties_foldCompact(const QsciLexerProperties* self) {
	return self->foldCompact();
}

void QsciLexerProperties_setInitialSpaces(QsciLexerProperties* self, bool enable) {
	self->setInitialSpaces(enable);
}

bool QsciLexerProperties_initialSpaces(const QsciLexerProperties* self) {
	return self->initialSpaces();
}

void QsciLexerProperties_setFoldCompact(QsciLexerProperties* self, bool fold) {
	self->setFoldCompact(fold);
}

struct miqt_string QsciLexerProperties_tr2(const char* s, const char* c) {
	QString _ret = QsciLexerProperties::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerProperties_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerProperties::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerProperties_trUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerProperties::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerProperties_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerProperties::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexerProperties_override_virtual_setFoldCompact(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldCompact = slot;
	return true;
}

void QsciLexerProperties_virtualbase_setFoldCompact(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::setFoldCompact(fold);
}

bool QsciLexerProperties_override_virtual_language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__language = slot;
	return true;
}

bool QsciLexerProperties_override_virtual_lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexer = slot;
	return true;
}

const char* QsciLexerProperties_virtualbase_lexer(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::lexer();
}

bool QsciLexerProperties_override_virtual_lexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexerId = slot;
	return true;
}

int QsciLexerProperties_virtualbase_lexerId(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::lexerId();
}

bool QsciLexerProperties_override_virtual_autoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionFillups = slot;
	return true;
}

const char* QsciLexerProperties_virtualbase_autoCompletionFillups(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::autoCompletionFillups();
}

bool QsciLexerProperties_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerProperties_virtualbase_autoCompletionWordSeparators(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::autoCompletionWordSeparators();
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

bool QsciLexerProperties_override_virtual_blockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockEnd = slot;
	return true;
}

const char* QsciLexerProperties_virtualbase_blockEnd(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::blockEnd(static_cast<int*>(style));
}

bool QsciLexerProperties_override_virtual_blockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockLookback = slot;
	return true;
}

int QsciLexerProperties_virtualbase_blockLookback(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::blockLookback();
}

bool QsciLexerProperties_override_virtual_blockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStart = slot;
	return true;
}

const char* QsciLexerProperties_virtualbase_blockStart(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::blockStart(static_cast<int*>(style));
}

bool QsciLexerProperties_override_virtual_blockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStartKeyword = slot;
	return true;
}

const char* QsciLexerProperties_virtualbase_blockStartKeyword(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::blockStartKeyword(static_cast<int*>(style));
}

bool QsciLexerProperties_override_virtual_braceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__braceStyle = slot;
	return true;
}

int QsciLexerProperties_virtualbase_braceStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::braceStyle();
}

bool QsciLexerProperties_override_virtual_caseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__caseSensitive = slot;
	return true;
}

bool QsciLexerProperties_virtualbase_caseSensitive(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::caseSensitive();
}

bool QsciLexerProperties_override_virtual_color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__color = slot;
	return true;
}

QColor* QsciLexerProperties_virtualbase_color(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::color(static_cast<int>(style)));
}

bool QsciLexerProperties_override_virtual_eolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eolFill = slot;
	return true;
}

bool QsciLexerProperties_virtualbase_eolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::eolFill(static_cast<int>(style));
}

bool QsciLexerProperties_override_virtual_font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__font = slot;
	return true;
}

QFont* QsciLexerProperties_virtualbase_font(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::font(static_cast<int>(style)));
}

bool QsciLexerProperties_override_virtual_indentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indentationGuideView = slot;
	return true;
}

int QsciLexerProperties_virtualbase_indentationGuideView(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::indentationGuideView();
}

bool QsciLexerProperties_override_virtual_keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keywords = slot;
	return true;
}

const char* QsciLexerProperties_virtualbase_keywords(const void* self, int set) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::keywords(static_cast<int>(set));
}

bool QsciLexerProperties_override_virtual_defaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultStyle = slot;
	return true;
}

int QsciLexerProperties_virtualbase_defaultStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::defaultStyle();
}

bool QsciLexerProperties_override_virtual_description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__description = slot;
	return true;
}

bool QsciLexerProperties_override_virtual_paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paper = slot;
	return true;
}

QColor* QsciLexerProperties_virtualbase_paper(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::paper(static_cast<int>(style)));
}

bool QsciLexerProperties_override_virtual_defaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexerProperties_virtualbase_defaultColorWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::defaultColor(static_cast<int>(style)));
}

bool QsciLexerProperties_override_virtual_defaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultEolFill = slot;
	return true;
}

bool QsciLexerProperties_virtualbase_defaultEolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::defaultEolFill(static_cast<int>(style));
}

bool QsciLexerProperties_override_virtual_defaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexerProperties_virtualbase_defaultFontWithStyle(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::defaultFont(static_cast<int>(style)));
}

bool QsciLexerProperties_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexerProperties_virtualbase_defaultPaperWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::defaultPaper(static_cast<int>(style)));
}

bool QsciLexerProperties_override_virtual_setEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEditor = slot;
	return true;
}

void QsciLexerProperties_virtualbase_setEditor(void* self, QsciScintilla* editor) {
	static_cast<MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::setEditor(editor);
}

bool QsciLexerProperties_override_virtual_refreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__refreshProperties = slot;
	return true;
}

void QsciLexerProperties_virtualbase_refreshProperties(void* self) {
	static_cast<MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::refreshProperties();
}

bool QsciLexerProperties_override_virtual_styleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__styleBitsNeeded = slot;
	return true;
}

int QsciLexerProperties_virtualbase_styleBitsNeeded(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::styleBitsNeeded();
}

bool QsciLexerProperties_override_virtual_wordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wordCharacters = slot;
	return true;
}

const char* QsciLexerProperties_virtualbase_wordCharacters(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::wordCharacters();
}

bool QsciLexerProperties_override_virtual_setAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAutoIndentStyle = slot;
	return true;
}

void QsciLexerProperties_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle) {
	static_cast<MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

bool QsciLexerProperties_override_virtual_setColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setColor = slot;
	return true;
}

void QsciLexerProperties_virtualbase_setColor(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::setColor(*c, static_cast<int>(style));
}

bool QsciLexerProperties_override_virtual_setEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEolFill = slot;
	return true;
}

void QsciLexerProperties_virtualbase_setEolFill(void* self, bool eoffill, int style) {
	static_cast<MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::setEolFill(eoffill, static_cast<int>(style));
}

bool QsciLexerProperties_override_virtual_setFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFont = slot;
	return true;
}

void QsciLexerProperties_virtualbase_setFont(void* self, QFont* f, int style) {
	static_cast<MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::setFont(*f, static_cast<int>(style));
}

bool QsciLexerProperties_override_virtual_setPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPaper = slot;
	return true;
}

void QsciLexerProperties_virtualbase_setPaper(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::setPaper(*c, static_cast<int>(style));
}

bool QsciLexerProperties_override_virtual_readProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readProperties = slot;
	return true;
}

bool QsciLexerProperties_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::readProperties(*qs, prefix_QString);
}

bool QsciLexerProperties_override_virtual_writeProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeProperties = slot;
	return true;
}

bool QsciLexerProperties_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<const MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::writeProperties(*qs, prefix_QString);
}

bool QsciLexerProperties_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QsciLexerProperties_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::event(event);
}

bool QsciLexerProperties_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QsciLexerProperties_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::eventFilter(watched, event);
}

bool QsciLexerProperties_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QsciLexerProperties_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::timerEvent(event);
}

bool QsciLexerProperties_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QsciLexerProperties_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::childEvent(event);
}

bool QsciLexerProperties_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QsciLexerProperties_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::customEvent(event);
}

bool QsciLexerProperties_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QsciLexerProperties_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::connectNotify(*signal);
}

bool QsciLexerProperties_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QsciLexerProperties_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerProperties*>(self)->QsciLexerProperties::disconnectNotify(*signal);
}

bool QsciLexerProperties_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self_cast->readProperties(*qs, prefix_QString);
}

bool QsciLexerProperties_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self_cast->writeProperties(*qs, prefix_QString);
}

QObject* QsciLexerProperties_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QsciLexerProperties_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QsciLexerProperties_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QsciLexerProperties_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciLexerProperties* self_cast = dynamic_cast<MiqtVirtualQsciLexerProperties*>( (QsciLexerProperties*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QsciLexerProperties_delete(QsciLexerProperties* self) {
	delete self;
}

