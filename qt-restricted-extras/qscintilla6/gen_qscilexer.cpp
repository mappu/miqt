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
#include <qscilexer.h>
#include "gen_qscilexer.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexer_colorChanged(intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexer_eolFillChanged(intptr_t, bool, int);
void miqt_exec_callback_QsciLexer_fontChanged(intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexer_paperChanged(intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexer_propertyChanged(intptr_t, const char*, const char*);
const char* miqt_exec_callback_QsciLexer_language(const QsciLexer*, intptr_t);
const char* miqt_exec_callback_QsciLexer_lexer(const QsciLexer*, intptr_t);
int miqt_exec_callback_QsciLexer_lexerId(const QsciLexer*, intptr_t);
const char* miqt_exec_callback_QsciLexer_autoCompletionFillups(const QsciLexer*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexer_autoCompletionWordSeparators(const QsciLexer*, intptr_t);
const char* miqt_exec_callback_QsciLexer_blockEnd(const QsciLexer*, intptr_t, int*);
int miqt_exec_callback_QsciLexer_blockLookback(const QsciLexer*, intptr_t);
const char* miqt_exec_callback_QsciLexer_blockStart(const QsciLexer*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexer_blockStartKeyword(const QsciLexer*, intptr_t, int*);
int miqt_exec_callback_QsciLexer_braceStyle(const QsciLexer*, intptr_t);
bool miqt_exec_callback_QsciLexer_caseSensitive(const QsciLexer*, intptr_t);
QColor* miqt_exec_callback_QsciLexer_color(const QsciLexer*, intptr_t, int);
bool miqt_exec_callback_QsciLexer_eolFill(const QsciLexer*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexer_font(const QsciLexer*, intptr_t, int);
int miqt_exec_callback_QsciLexer_indentationGuideView(const QsciLexer*, intptr_t);
const char* miqt_exec_callback_QsciLexer_keywords(const QsciLexer*, intptr_t, int);
int miqt_exec_callback_QsciLexer_defaultStyle(const QsciLexer*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexer_description(const QsciLexer*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexer_paper(const QsciLexer*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexer_defaultColorWithStyle(const QsciLexer*, intptr_t, int);
bool miqt_exec_callback_QsciLexer_defaultEolFill(const QsciLexer*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexer_defaultFontWithStyle(const QsciLexer*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexer_defaultPaperWithStyle(const QsciLexer*, intptr_t, int);
void miqt_exec_callback_QsciLexer_setEditor(QsciLexer*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexer_refreshProperties(QsciLexer*, intptr_t);
int miqt_exec_callback_QsciLexer_styleBitsNeeded(const QsciLexer*, intptr_t);
const char* miqt_exec_callback_QsciLexer_wordCharacters(const QsciLexer*, intptr_t);
void miqt_exec_callback_QsciLexer_setAutoIndentStyle(QsciLexer*, intptr_t, int);
void miqt_exec_callback_QsciLexer_setColor(QsciLexer*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexer_setEolFill(QsciLexer*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexer_setFont(QsciLexer*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexer_setPaper(QsciLexer*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexer_readProperties(QsciLexer*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexer_writeProperties(const QsciLexer*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexer_event(QsciLexer*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexer_eventFilter(QsciLexer*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexer_timerEvent(QsciLexer*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexer_childEvent(QsciLexer*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexer_customEvent(QsciLexer*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexer_connectNotify(QsciLexer*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexer_disconnectNotify(QsciLexer*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexer final : public QsciLexer {
public:

	MiqtVirtualQsciLexer(): QsciLexer() {};
	MiqtVirtualQsciLexer(QObject* parent): QsciLexer(parent) {};

	virtual ~MiqtVirtualQsciLexer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexer_language(this, handle__language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__lexer == 0) {
			return QsciLexer::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexer_lexer(this, handle__lexer);

		return callback_return_value;
	}

	friend const char* QsciLexer_virtualbase_lexer(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__lexerId == 0) {
			return QsciLexer::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexer_lexerId(this, handle__lexerId);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexer_virtualbase_lexerId(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__autoCompletionFillups == 0) {
			return QsciLexer::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexer_autoCompletionFillups(this, handle__autoCompletionFillups);

		return callback_return_value;
	}

	friend const char* QsciLexer_virtualbase_autoCompletionFillups(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__autoCompletionWordSeparators == 0) {
			return QsciLexer::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexer_autoCompletionWordSeparators(this, handle__autoCompletionWordSeparators);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}

		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QsciLexer_virtualbase_autoCompletionWordSeparators(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (handle__blockEnd == 0) {
			return QsciLexer::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexer_blockEnd(this, handle__blockEnd, sigval1);

		return callback_return_value;
	}

	friend const char* QsciLexer_virtualbase_blockEnd(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__blockLookback == 0) {
			return QsciLexer::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexer_blockLookback(this, handle__blockLookback);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexer_virtualbase_blockLookback(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__blockStart == 0) {
			return QsciLexer::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexer_blockStart(this, handle__blockStart, sigval1);

		return callback_return_value;
	}

	friend const char* QsciLexer_virtualbase_blockStart(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__blockStartKeyword == 0) {
			return QsciLexer::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexer_blockStartKeyword(this, handle__blockStartKeyword, sigval1);

		return callback_return_value;
	}

	friend const char* QsciLexer_virtualbase_blockStartKeyword(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__braceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__braceStyle == 0) {
			return QsciLexer::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexer_braceStyle(this, handle__braceStyle);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexer_virtualbase_braceStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__caseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__caseSensitive == 0) {
			return QsciLexer::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexer_caseSensitive(this, handle__caseSensitive);

		return callback_return_value;
	}

	friend bool QsciLexer_virtualbase_caseSensitive(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__color == 0) {
			return QsciLexer::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexer_color(this, handle__color, sigval1);

		return *callback_return_value;
	}

	friend QColor* QsciLexer_virtualbase_color(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__eolFill == 0) {
			return QsciLexer::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexer_eolFill(this, handle__eolFill, sigval1);

		return callback_return_value;
	}

	friend bool QsciLexer_virtualbase_eolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__font == 0) {
			return QsciLexer::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexer_font(this, handle__font, sigval1);

		return *callback_return_value;
	}

	friend QFont* QsciLexer_virtualbase_font(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__indentationGuideView == 0) {
			return QsciLexer::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexer_indentationGuideView(this, handle__indentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexer_virtualbase_indentationGuideView(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__keywords == 0) {
			return QsciLexer::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexer_keywords(this, handle__keywords, sigval1);

		return callback_return_value;
	}

	friend const char* QsciLexer_virtualbase_keywords(const void* self, int set);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__defaultStyle == 0) {
			return QsciLexer::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexer_defaultStyle(this, handle__defaultStyle);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexer_virtualbase_defaultStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexer_description(this, handle__description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__paper == 0) {
			return QsciLexer::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexer_paper(this, handle__paper, sigval1);

		return *callback_return_value;
	}

	friend QColor* QsciLexer_virtualbase_paper(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__defaultColorWithStyle == 0) {
			return QsciLexer::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexer_defaultColorWithStyle(this, handle__defaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	friend QColor* QsciLexer_virtualbase_defaultColorWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__defaultEolFill == 0) {
			return QsciLexer::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexer_defaultEolFill(this, handle__defaultEolFill, sigval1);

		return callback_return_value;
	}

	friend bool QsciLexer_virtualbase_defaultEolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__defaultFontWithStyle == 0) {
			return QsciLexer::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexer_defaultFontWithStyle(this, handle__defaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	friend QFont* QsciLexer_virtualbase_defaultFontWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__defaultPaperWithStyle == 0) {
			return QsciLexer::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexer_defaultPaperWithStyle(this, handle__defaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	friend QColor* QsciLexer_virtualbase_defaultPaperWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__setEditor == 0) {
			QsciLexer::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexer_setEditor(this, handle__setEditor, sigval1);

		
	}

	friend void QsciLexer_virtualbase_setEditor(void* self, QsciScintilla* editor);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__refreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__refreshProperties == 0) {
			QsciLexer::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexer_refreshProperties(this, handle__refreshProperties);

		
	}

	friend void QsciLexer_virtualbase_refreshProperties(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__styleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__styleBitsNeeded == 0) {
			return QsciLexer::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexer_styleBitsNeeded(this, handle__styleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexer_virtualbase_styleBitsNeeded(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__wordCharacters == 0) {
			return QsciLexer::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexer_wordCharacters(this, handle__wordCharacters);

		return callback_return_value;
	}

	friend const char* QsciLexer_virtualbase_wordCharacters(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__setAutoIndentStyle == 0) {
			QsciLexer::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexer_setAutoIndentStyle(this, handle__setAutoIndentStyle, sigval1);

		
	}

	friend void QsciLexer_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__setColor == 0) {
			QsciLexer::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexer_setColor(this, handle__setColor, sigval1, sigval2);

		
	}

	friend void QsciLexer_virtualbase_setColor(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__setEolFill == 0) {
			QsciLexer::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexer_setEolFill(this, handle__setEolFill, sigval1, sigval2);

		
	}

	friend void QsciLexer_virtualbase_setEolFill(void* self, bool eoffill, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__setFont == 0) {
			QsciLexer::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexer_setFont(this, handle__setFont, sigval1, sigval2);

		
	}

	friend void QsciLexer_virtualbase_setFont(void* self, QFont* f, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__setPaper == 0) {
			QsciLexer::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexer_setPaper(this, handle__setPaper, sigval1, sigval2);

		
	}

	friend void QsciLexer_virtualbase_setPaper(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__readProperties == 0) {
			return QsciLexer::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexer_readProperties(this, handle__readProperties, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QsciLexer_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__writeProperties == 0) {
			return QsciLexer::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexer_writeProperties(this, handle__writeProperties, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QsciLexer_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QsciLexer::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexer_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QsciLexer_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QsciLexer::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexer_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QsciLexer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QsciLexer::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciLexer_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QsciLexer_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QsciLexer::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciLexer_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QsciLexer_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QsciLexer::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciLexer_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QsciLexer_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QsciLexer::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexer_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QsciLexer_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QsciLexer::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexer_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QsciLexer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QsciLexer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciLexer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciLexer* QsciLexer_new() {
	return new MiqtVirtualQsciLexer();
}

QsciLexer* QsciLexer_new2(QObject* parent) {
	return new MiqtVirtualQsciLexer(parent);
}

void QsciLexer_virtbase(QsciLexer* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QsciLexer_metaObject(const QsciLexer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexer_metacast(QsciLexer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexer_tr(const char* s) {
	QString _ret = QsciLexer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexer_language(const QsciLexer* self) {
	return (const char*) self->language();
}

const char* QsciLexer_lexer(const QsciLexer* self) {
	return (const char*) self->lexer();
}

int QsciLexer_lexerId(const QsciLexer* self) {
	return self->lexerId();
}

QsciAbstractAPIs* QsciLexer_apis(const QsciLexer* self) {
	return self->apis();
}

const char* QsciLexer_autoCompletionFillups(const QsciLexer* self) {
	return (const char*) self->autoCompletionFillups();
}

struct miqt_array /* of struct miqt_string */  QsciLexer_autoCompletionWordSeparators(const QsciLexer* self) {
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

int QsciLexer_autoIndentStyle(QsciLexer* self) {
	return self->autoIndentStyle();
}

const char* QsciLexer_blockEnd(const QsciLexer* self, int* style) {
	return (const char*) self->blockEnd(static_cast<int*>(style));
}

int QsciLexer_blockLookback(const QsciLexer* self) {
	return self->blockLookback();
}

const char* QsciLexer_blockStart(const QsciLexer* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

const char* QsciLexer_blockStartKeyword(const QsciLexer* self, int* style) {
	return (const char*) self->blockStartKeyword(static_cast<int*>(style));
}

int QsciLexer_braceStyle(const QsciLexer* self) {
	return self->braceStyle();
}

bool QsciLexer_caseSensitive(const QsciLexer* self) {
	return self->caseSensitive();
}

QColor* QsciLexer_color(const QsciLexer* self, int style) {
	return new QColor(self->color(static_cast<int>(style)));
}

bool QsciLexer_eolFill(const QsciLexer* self, int style) {
	return self->eolFill(static_cast<int>(style));
}

QFont* QsciLexer_font(const QsciLexer* self, int style) {
	return new QFont(self->font(static_cast<int>(style)));
}

int QsciLexer_indentationGuideView(const QsciLexer* self) {
	return self->indentationGuideView();
}

const char* QsciLexer_keywords(const QsciLexer* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

int QsciLexer_defaultStyle(const QsciLexer* self) {
	return self->defaultStyle();
}

struct miqt_string QsciLexer_description(const QsciLexer* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QColor* QsciLexer_paper(const QsciLexer* self, int style) {
	return new QColor(self->paper(static_cast<int>(style)));
}

QColor* QsciLexer_defaultColor(const QsciLexer* self) {
	return new QColor(self->defaultColor());
}

QColor* QsciLexer_defaultColorWithStyle(const QsciLexer* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexer_defaultEolFill(const QsciLexer* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexer_defaultFont(const QsciLexer* self) {
	return new QFont(self->defaultFont());
}

QFont* QsciLexer_defaultFontWithStyle(const QsciLexer* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexer_defaultPaper(const QsciLexer* self) {
	return new QColor(self->defaultPaper());
}

QColor* QsciLexer_defaultPaperWithStyle(const QsciLexer* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

QsciScintilla* QsciLexer_editor(const QsciLexer* self) {
	return self->editor();
}

void QsciLexer_setAPIs(QsciLexer* self, QsciAbstractAPIs* apis) {
	self->setAPIs(apis);
}

void QsciLexer_setDefaultColor(QsciLexer* self, QColor* c) {
	self->setDefaultColor(*c);
}

void QsciLexer_setDefaultFont(QsciLexer* self, QFont* f) {
	self->setDefaultFont(*f);
}

void QsciLexer_setDefaultPaper(QsciLexer* self, QColor* c) {
	self->setDefaultPaper(*c);
}

void QsciLexer_setEditor(QsciLexer* self, QsciScintilla* editor) {
	self->setEditor(editor);
}

bool QsciLexer_readSettings(QsciLexer* self, QSettings* qs) {
	return self->readSettings(*qs);
}

void QsciLexer_refreshProperties(QsciLexer* self) {
	self->refreshProperties();
}

int QsciLexer_styleBitsNeeded(const QsciLexer* self) {
	return self->styleBitsNeeded();
}

const char* QsciLexer_wordCharacters(const QsciLexer* self) {
	return (const char*) self->wordCharacters();
}

bool QsciLexer_writeSettings(const QsciLexer* self, QSettings* qs) {
	return self->writeSettings(*qs);
}

void QsciLexer_setAutoIndentStyle(QsciLexer* self, int autoindentstyle) {
	self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

void QsciLexer_setColor(QsciLexer* self, QColor* c, int style) {
	self->setColor(*c, static_cast<int>(style));
}

void QsciLexer_setEolFill(QsciLexer* self, bool eoffill, int style) {
	self->setEolFill(eoffill, static_cast<int>(style));
}

void QsciLexer_setFont(QsciLexer* self, QFont* f, int style) {
	self->setFont(*f, static_cast<int>(style));
}

void QsciLexer_setPaper(QsciLexer* self, QColor* c, int style) {
	self->setPaper(*c, static_cast<int>(style));
}

void QsciLexer_colorChanged(QsciLexer* self, QColor* c, int style) {
	self->colorChanged(*c, static_cast<int>(style));
}

void QsciLexer_connect_colorChanged(QsciLexer* self, intptr_t slot) {
	MiqtVirtualQsciLexer::connect(self, static_cast<void (QsciLexer::*)(const QColor&, int)>(&QsciLexer::colorChanged), self, [=](const QColor& c, int style) {
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexer_colorChanged(slot, sigval1, sigval2);
	});
}

void QsciLexer_eolFillChanged(QsciLexer* self, bool eolfilled, int style) {
	self->eolFillChanged(eolfilled, static_cast<int>(style));
}

void QsciLexer_connect_eolFillChanged(QsciLexer* self, intptr_t slot) {
	MiqtVirtualQsciLexer::connect(self, static_cast<void (QsciLexer::*)(bool, int)>(&QsciLexer::eolFillChanged), self, [=](bool eolfilled, int style) {
		bool sigval1 = eolfilled;
		int sigval2 = style;
		miqt_exec_callback_QsciLexer_eolFillChanged(slot, sigval1, sigval2);
	});
}

void QsciLexer_fontChanged(QsciLexer* self, QFont* f, int style) {
	self->fontChanged(*f, static_cast<int>(style));
}

void QsciLexer_connect_fontChanged(QsciLexer* self, intptr_t slot) {
	MiqtVirtualQsciLexer::connect(self, static_cast<void (QsciLexer::*)(const QFont&, int)>(&QsciLexer::fontChanged), self, [=](const QFont& f, int style) {
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexer_fontChanged(slot, sigval1, sigval2);
	});
}

void QsciLexer_paperChanged(QsciLexer* self, QColor* c, int style) {
	self->paperChanged(*c, static_cast<int>(style));
}

void QsciLexer_connect_paperChanged(QsciLexer* self, intptr_t slot) {
	MiqtVirtualQsciLexer::connect(self, static_cast<void (QsciLexer::*)(const QColor&, int)>(&QsciLexer::paperChanged), self, [=](const QColor& c, int style) {
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexer_paperChanged(slot, sigval1, sigval2);
	});
}

void QsciLexer_propertyChanged(QsciLexer* self, const char* prop, const char* val) {
	self->propertyChanged(prop, val);
}

void QsciLexer_connect_propertyChanged(QsciLexer* self, intptr_t slot) {
	MiqtVirtualQsciLexer::connect(self, static_cast<void (QsciLexer::*)(const char*, const char*)>(&QsciLexer::propertyChanged), self, [=](const char* prop, const char* val) {
		const char* sigval1 = (const char*) prop;
		const char* sigval2 = (const char*) val;
		miqt_exec_callback_QsciLexer_propertyChanged(slot, sigval1, sigval2);
	});
}

struct miqt_string QsciLexer_tr2(const char* s, const char* c) {
	QString _ret = QsciLexer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexer_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexer_readSettings2(QsciLexer* self, QSettings* qs, const char* prefix) {
	return self->readSettings(*qs, prefix);
}

bool QsciLexer_writeSettings2(const QsciLexer* self, QSettings* qs, const char* prefix) {
	return self->writeSettings(*qs, prefix);
}

bool QsciLexer_override_virtual_language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__language = slot;
	return true;
}

bool QsciLexer_override_virtual_lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__lexer = slot;
	return true;
}

const char* QsciLexer_virtualbase_lexer(const void* self) {

	return (const char*) ( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::lexer();

}

bool QsciLexer_override_virtual_lexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__lexerId = slot;
	return true;
}

int QsciLexer_virtualbase_lexerId(const void* self) {

	return ( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::lexerId();

}

bool QsciLexer_override_virtual_autoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompletionFillups = slot;
	return true;
}

const char* QsciLexer_virtualbase_autoCompletionFillups(const void* self) {

	return (const char*) ( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::autoCompletionFillups();

}

bool QsciLexer_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexer_virtualbase_autoCompletionWordSeparators(const void* self) {

	QStringList _ret = ( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::autoCompletionWordSeparators();
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

bool QsciLexer_override_virtual_blockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockEnd = slot;
	return true;
}

const char* QsciLexer_virtualbase_blockEnd(const void* self, int* style) {

	return (const char*) ( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::blockEnd(static_cast<int*>(style));

}

bool QsciLexer_override_virtual_blockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockLookback = slot;
	return true;
}

int QsciLexer_virtualbase_blockLookback(const void* self) {

	return ( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::blockLookback();

}

bool QsciLexer_override_virtual_blockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockStart = slot;
	return true;
}

const char* QsciLexer_virtualbase_blockStart(const void* self, int* style) {

	return (const char*) ( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::blockStart(static_cast<int*>(style));

}

bool QsciLexer_override_virtual_blockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockStartKeyword = slot;
	return true;
}

const char* QsciLexer_virtualbase_blockStartKeyword(const void* self, int* style) {

	return (const char*) ( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::blockStartKeyword(static_cast<int*>(style));

}

bool QsciLexer_override_virtual_braceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__braceStyle = slot;
	return true;
}

int QsciLexer_virtualbase_braceStyle(const void* self) {

	return ( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::braceStyle();

}

bool QsciLexer_override_virtual_caseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__caseSensitive = slot;
	return true;
}

bool QsciLexer_virtualbase_caseSensitive(const void* self) {

	return ( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::caseSensitive();

}

bool QsciLexer_override_virtual_color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__color = slot;
	return true;
}

QColor* QsciLexer_virtualbase_color(const void* self, int style) {

	return new QColor(( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::color(static_cast<int>(style)));

}

bool QsciLexer_override_virtual_eolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eolFill = slot;
	return true;
}

bool QsciLexer_virtualbase_eolFill(const void* self, int style) {

	return ( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::eolFill(static_cast<int>(style));

}

bool QsciLexer_override_virtual_font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__font = slot;
	return true;
}

QFont* QsciLexer_virtualbase_font(const void* self, int style) {

	return new QFont(( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::font(static_cast<int>(style)));

}

bool QsciLexer_override_virtual_indentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indentationGuideView = slot;
	return true;
}

int QsciLexer_virtualbase_indentationGuideView(const void* self) {

	return ( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::indentationGuideView();

}

bool QsciLexer_override_virtual_keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keywords = slot;
	return true;
}

const char* QsciLexer_virtualbase_keywords(const void* self, int set) {

	return (const char*) ( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::keywords(static_cast<int>(set));

}

bool QsciLexer_override_virtual_defaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultStyle = slot;
	return true;
}

int QsciLexer_virtualbase_defaultStyle(const void* self) {

	return ( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::defaultStyle();

}

bool QsciLexer_override_virtual_description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__description = slot;
	return true;
}

bool QsciLexer_override_virtual_paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paper = slot;
	return true;
}

QColor* QsciLexer_virtualbase_paper(const void* self, int style) {

	return new QColor(( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::paper(static_cast<int>(style)));

}

bool QsciLexer_override_virtual_defaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexer_virtualbase_defaultColorWithStyle(const void* self, int style) {

	return new QColor(( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::defaultColor(static_cast<int>(style)));

}

bool QsciLexer_override_virtual_defaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultEolFill = slot;
	return true;
}

bool QsciLexer_virtualbase_defaultEolFill(const void* self, int style) {

	return ( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::defaultEolFill(static_cast<int>(style));

}

bool QsciLexer_override_virtual_defaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexer_virtualbase_defaultFontWithStyle(const void* self, int style) {

	return new QFont(( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::defaultFont(static_cast<int>(style)));

}

bool QsciLexer_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexer_virtualbase_defaultPaperWithStyle(const void* self, int style) {

	return new QColor(( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::defaultPaper(static_cast<int>(style)));

}

bool QsciLexer_override_virtual_setEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEditor = slot;
	return true;
}

void QsciLexer_virtualbase_setEditor(void* self, QsciScintilla* editor) {

	( (MiqtVirtualQsciLexer*)(self) )->QsciLexer::setEditor(editor);

}

bool QsciLexer_override_virtual_refreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__refreshProperties = slot;
	return true;
}

void QsciLexer_virtualbase_refreshProperties(void* self) {

	( (MiqtVirtualQsciLexer*)(self) )->QsciLexer::refreshProperties();

}

bool QsciLexer_override_virtual_styleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__styleBitsNeeded = slot;
	return true;
}

int QsciLexer_virtualbase_styleBitsNeeded(const void* self) {

	return ( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::styleBitsNeeded();

}

bool QsciLexer_override_virtual_wordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wordCharacters = slot;
	return true;
}

const char* QsciLexer_virtualbase_wordCharacters(const void* self) {

	return (const char*) ( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::wordCharacters();

}

bool QsciLexer_override_virtual_setAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAutoIndentStyle = slot;
	return true;
}

void QsciLexer_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle) {

	( (MiqtVirtualQsciLexer*)(self) )->QsciLexer::setAutoIndentStyle(static_cast<int>(autoindentstyle));

}

bool QsciLexer_override_virtual_setColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setColor = slot;
	return true;
}

void QsciLexer_virtualbase_setColor(void* self, QColor* c, int style) {

	( (MiqtVirtualQsciLexer*)(self) )->QsciLexer::setColor(*c, static_cast<int>(style));

}

bool QsciLexer_override_virtual_setEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEolFill = slot;
	return true;
}

void QsciLexer_virtualbase_setEolFill(void* self, bool eoffill, int style) {

	( (MiqtVirtualQsciLexer*)(self) )->QsciLexer::setEolFill(eoffill, static_cast<int>(style));

}

bool QsciLexer_override_virtual_setFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFont = slot;
	return true;
}

void QsciLexer_virtualbase_setFont(void* self, QFont* f, int style) {

	( (MiqtVirtualQsciLexer*)(self) )->QsciLexer::setFont(*f, static_cast<int>(style));

}

bool QsciLexer_override_virtual_setPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPaper = slot;
	return true;
}

void QsciLexer_virtualbase_setPaper(void* self, QColor* c, int style) {

	( (MiqtVirtualQsciLexer*)(self) )->QsciLexer::setPaper(*c, static_cast<int>(style));

}

bool QsciLexer_override_virtual_readProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readProperties = slot;
	return true;
}

bool QsciLexer_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

	return ( (MiqtVirtualQsciLexer*)(self) )->QsciLexer::readProperties(*qs, prefix_QString);

}

bool QsciLexer_override_virtual_writeProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__writeProperties = slot;
	return true;
}

bool QsciLexer_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

	return ( (const MiqtVirtualQsciLexer*)(self) )->QsciLexer::writeProperties(*qs, prefix_QString);

}

bool QsciLexer_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QsciLexer_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQsciLexer*)(self) )->QsciLexer::event(event);

}

bool QsciLexer_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QsciLexer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQsciLexer*)(self) )->QsciLexer::eventFilter(watched, event);

}

bool QsciLexer_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QsciLexer_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQsciLexer*)(self) )->QsciLexer::timerEvent(event);

}

bool QsciLexer_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QsciLexer_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQsciLexer*)(self) )->QsciLexer::childEvent(event);

}

bool QsciLexer_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QsciLexer_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQsciLexer*)(self) )->QsciLexer::customEvent(event);

}

bool QsciLexer_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QsciLexer_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQsciLexer*)(self) )->QsciLexer::connectNotify(*signal);

}

bool QsciLexer_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QsciLexer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQsciLexer*)(self) )->QsciLexer::disconnectNotify(*signal);

}

QObject* QsciLexer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QsciLexer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QsciLexer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QsciLexer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QsciLexer_delete(QsciLexer* self) {
	delete self;
}

