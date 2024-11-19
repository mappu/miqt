#include <QColor>
#include <QFont>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerpostscript.h>
#include "gen_qscilexerpostscript.h"
#include "_cgo_export.h"

class MiqtVirtualQsciLexerPostScript : public virtual QsciLexerPostScript {
public:

	MiqtVirtualQsciLexerPostScript(): QsciLexerPostScript() {};
	MiqtVirtualQsciLexerPostScript(QObject* parent): QsciLexerPostScript(parent) {};

	virtual ~MiqtVirtualQsciLexerPostScript() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetTokenize = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTokenize(bool tokenize) override {
		if (handle__SetTokenize == 0) {
			QsciLexerPostScript::setTokenize(tokenize);
			return;
		}
		
		bool sigval1 = tokenize;

		miqt_exec_callback_QsciLexerPostScript_SetTokenize(this, handle__SetTokenize, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetTokenize(bool tokenize) {

		QsciLexerPostScript::setTokenize(tokenize);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetLevel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setLevel(int level) override {
		if (handle__SetLevel == 0) {
			QsciLexerPostScript::setLevel(level);
			return;
		}
		
		int sigval1 = level;

		miqt_exec_callback_QsciLexerPostScript_SetLevel(this, handle__SetLevel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetLevel(int level) {

		QsciLexerPostScript::setLevel(static_cast<int>(level));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__SetFoldCompact == 0) {
			QsciLexerPostScript::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerPostScript_SetFoldCompact(this, handle__SetFoldCompact, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldCompact(bool fold) {

		QsciLexerPostScript::setFoldCompact(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldAtElse = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldAtElse(bool fold) override {
		if (handle__SetFoldAtElse == 0) {
			QsciLexerPostScript::setFoldAtElse(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerPostScript_SetFoldAtElse(this, handle__SetFoldAtElse, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldAtElse(bool fold) {

		QsciLexerPostScript::setFoldAtElse(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__Language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerPostScript_Language(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__Language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__Lexer == 0) {
			return QsciLexerPostScript::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerPostScript_Lexer(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__Lexer);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Lexer() const {

		return (const char*) QsciLexerPostScript::lexer();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__LexerId == 0) {
			return QsciLexerPostScript::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPostScript_LexerId(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__LexerId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_LexerId() const {

		return QsciLexerPostScript::lexerId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__AutoCompletionFillups == 0) {
			return QsciLexerPostScript::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerPostScript_AutoCompletionFillups(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__AutoCompletionFillups);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_AutoCompletionFillups() const {

		return (const char*) QsciLexerPostScript::autoCompletionFillups();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__AutoCompletionWordSeparators == 0) {
			return QsciLexerPostScript::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerPostScript_AutoCompletionWordSeparators(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__AutoCompletionWordSeparators);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of struct miqt_string */  virtualbase_AutoCompletionWordSeparators() const {

		QStringList _ret = QsciLexerPostScript::autoCompletionWordSeparators();
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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (handle__BlockEnd == 0) {
			return QsciLexerPostScript::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerPostScript_BlockEnd(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__BlockEnd, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockEnd(int* style) const {

		return (const char*) QsciLexerPostScript::blockEnd(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__BlockLookback == 0) {
			return QsciLexerPostScript::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPostScript_BlockLookback(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__BlockLookback);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BlockLookback() const {

		return QsciLexerPostScript::blockLookback();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__BlockStart == 0) {
			return QsciLexerPostScript::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerPostScript_BlockStart(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__BlockStart, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStart(int* style) const {

		return (const char*) QsciLexerPostScript::blockStart(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__BlockStartKeyword == 0) {
			return QsciLexerPostScript::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerPostScript_BlockStartKeyword(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__BlockStartKeyword, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStartKeyword(int* style) const {

		return (const char*) QsciLexerPostScript::blockStartKeyword(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BraceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__BraceStyle == 0) {
			return QsciLexerPostScript::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPostScript_BraceStyle(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__BraceStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BraceStyle() const {

		return QsciLexerPostScript::braceStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CaseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__CaseSensitive == 0) {
			return QsciLexerPostScript::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerPostScript_CaseSensitive(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__CaseSensitive);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CaseSensitive() const {

		return QsciLexerPostScript::caseSensitive();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__Color == 0) {
			return QsciLexerPostScript::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerPostScript_Color(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__Color, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Color(int style) const {

		return new QColor(QsciLexerPostScript::color(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__EolFill == 0) {
			return QsciLexerPostScript::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerPostScript_EolFill(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__EolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EolFill(int style) const {

		return QsciLexerPostScript::eolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__Font == 0) {
			return QsciLexerPostScript::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerPostScript_Font(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__Font, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_Font(int style) const {

		return new QFont(QsciLexerPostScript::font(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__IndentationGuideView == 0) {
			return QsciLexerPostScript::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPostScript_IndentationGuideView(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__IndentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndentationGuideView() const {

		return QsciLexerPostScript::indentationGuideView();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__Keywords == 0) {
			return QsciLexerPostScript::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerPostScript_Keywords(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__Keywords, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Keywords(int set) const {

		return (const char*) QsciLexerPostScript::keywords(static_cast<int>(set));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__DefaultStyle == 0) {
			return QsciLexerPostScript::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPostScript_DefaultStyle(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__DefaultStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DefaultStyle() const {

		return QsciLexerPostScript::defaultStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__Description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerPostScript_Description(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__Description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__Paper == 0) {
			return QsciLexerPostScript::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerPostScript_Paper(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__Paper, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Paper(int style) const {

		return new QColor(QsciLexerPostScript::paper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__DefaultColorWithStyle == 0) {
			return QsciLexerPostScript::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerPostScript_DefaultColorWithStyle(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__DefaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultColorWithStyle(int style) const {

		return new QColor(QsciLexerPostScript::defaultColor(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__DefaultEolFill == 0) {
			return QsciLexerPostScript::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerPostScript_DefaultEolFill(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__DefaultEolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DefaultEolFill(int style) const {

		return QsciLexerPostScript::defaultEolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__DefaultFontWithStyle == 0) {
			return QsciLexerPostScript::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerPostScript_DefaultFontWithStyle(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__DefaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_DefaultFontWithStyle(int style) const {

		return new QFont(QsciLexerPostScript::defaultFont(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__DefaultPaperWithStyle == 0) {
			return QsciLexerPostScript::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerPostScript_DefaultPaperWithStyle(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__DefaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultPaperWithStyle(int style) const {

		return new QColor(QsciLexerPostScript::defaultPaper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__SetEditor == 0) {
			QsciLexerPostScript::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerPostScript_SetEditor(this, handle__SetEditor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEditor(QsciScintilla* editor) {

		QsciLexerPostScript::setEditor(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RefreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__RefreshProperties == 0) {
			QsciLexerPostScript::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerPostScript_RefreshProperties(this, handle__RefreshProperties);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RefreshProperties() {

		QsciLexerPostScript::refreshProperties();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StyleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__StyleBitsNeeded == 0) {
			return QsciLexerPostScript::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPostScript_StyleBitsNeeded(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__StyleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StyleBitsNeeded() const {

		return QsciLexerPostScript::styleBitsNeeded();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__WordCharacters == 0) {
			return QsciLexerPostScript::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerPostScript_WordCharacters(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__WordCharacters);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_WordCharacters() const {

		return (const char*) QsciLexerPostScript::wordCharacters();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__SetAutoIndentStyle == 0) {
			QsciLexerPostScript::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerPostScript_SetAutoIndentStyle(this, handle__SetAutoIndentStyle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoIndentStyle(int autoindentstyle) {

		QsciLexerPostScript::setAutoIndentStyle(static_cast<int>(autoindentstyle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__SetColor == 0) {
			QsciLexerPostScript::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerPostScript_SetColor(this, handle__SetColor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetColor(QColor* c, int style) {

		QsciLexerPostScript::setColor(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__SetEolFill == 0) {
			QsciLexerPostScript::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerPostScript_SetEolFill(this, handle__SetEolFill, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEolFill(bool eoffill, int style) {

		QsciLexerPostScript::setEolFill(eoffill, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__SetFont == 0) {
			QsciLexerPostScript::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerPostScript_SetFont(this, handle__SetFont, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFont(QFont* f, int style) {

		QsciLexerPostScript::setFont(*f, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__SetPaper == 0) {
			QsciLexerPostScript::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerPostScript_SetPaper(this, handle__SetPaper, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPaper(QColor* c, int style) {

		QsciLexerPostScript::setPaper(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__ReadProperties == 0) {
			return QsciLexerPostScript::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerPostScript_ReadProperties(this, handle__ReadProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ReadProperties(QSettings* qs, struct miqt_string prefix) {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerPostScript::readProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__WriteProperties == 0) {
			return QsciLexerPostScript::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerPostScript_WriteProperties(const_cast<MiqtVirtualQsciLexerPostScript*>(this), handle__WriteProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WriteProperties(QSettings* qs, struct miqt_string prefix) const {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerPostScript::writeProperties(*qs, prefix_QString);

	}

};

void QsciLexerPostScript_new(QsciLexerPostScript** outptr_QsciLexerPostScript, QsciLexer** outptr_QsciLexer, QObject** outptr_QObject) {
	MiqtVirtualQsciLexerPostScript* ret = new MiqtVirtualQsciLexerPostScript();
	*outptr_QsciLexerPostScript = ret;
	*outptr_QsciLexer = static_cast<QsciLexer*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QsciLexerPostScript_new2(QObject* parent, QsciLexerPostScript** outptr_QsciLexerPostScript, QsciLexer** outptr_QsciLexer, QObject** outptr_QObject) {
	MiqtVirtualQsciLexerPostScript* ret = new MiqtVirtualQsciLexerPostScript(parent);
	*outptr_QsciLexerPostScript = ret;
	*outptr_QsciLexer = static_cast<QsciLexer*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

QMetaObject* QsciLexerPostScript_MetaObject(const QsciLexerPostScript* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerPostScript_Metacast(QsciLexerPostScript* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerPostScript_Tr(const char* s) {
	QString _ret = QsciLexerPostScript::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerPostScript_Language(const QsciLexerPostScript* self) {
	return (const char*) self->language();
}

const char* QsciLexerPostScript_Lexer(const QsciLexerPostScript* self) {
	return (const char*) self->lexer();
}

int QsciLexerPostScript_BraceStyle(const QsciLexerPostScript* self) {
	return self->braceStyle();
}

QColor* QsciLexerPostScript_DefaultColor(const QsciLexerPostScript* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerPostScript_DefaultFont(const QsciLexerPostScript* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPostScript_DefaultPaper(const QsciLexerPostScript* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerPostScript_Keywords(const QsciLexerPostScript* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerPostScript_Description(const QsciLexerPostScript* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerPostScript_RefreshProperties(QsciLexerPostScript* self) {
	self->refreshProperties();
}

bool QsciLexerPostScript_Tokenize(const QsciLexerPostScript* self) {
	return self->tokenize();
}

int QsciLexerPostScript_Level(const QsciLexerPostScript* self) {
	return self->level();
}

bool QsciLexerPostScript_FoldCompact(const QsciLexerPostScript* self) {
	return self->foldCompact();
}

bool QsciLexerPostScript_FoldAtElse(const QsciLexerPostScript* self) {
	return self->foldAtElse();
}

void QsciLexerPostScript_SetTokenize(QsciLexerPostScript* self, bool tokenize) {
	self->setTokenize(tokenize);
}

void QsciLexerPostScript_SetLevel(QsciLexerPostScript* self, int level) {
	self->setLevel(static_cast<int>(level));
}

void QsciLexerPostScript_SetFoldCompact(QsciLexerPostScript* self, bool fold) {
	self->setFoldCompact(fold);
}

void QsciLexerPostScript_SetFoldAtElse(QsciLexerPostScript* self, bool fold) {
	self->setFoldAtElse(fold);
}

struct miqt_string QsciLexerPostScript_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerPostScript::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPostScript_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerPostScript::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerPostScript_override_virtual_SetTokenize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__SetTokenize = slot;
}

void QsciLexerPostScript_virtualbase_SetTokenize(void* self, bool tokenize) {
	( (MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_SetTokenize(tokenize);
}

void QsciLexerPostScript_override_virtual_SetLevel(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__SetLevel = slot;
}

void QsciLexerPostScript_virtualbase_SetLevel(void* self, int level) {
	( (MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_SetLevel(level);
}

void QsciLexerPostScript_override_virtual_SetFoldCompact(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__SetFoldCompact = slot;
}

void QsciLexerPostScript_virtualbase_SetFoldCompact(void* self, bool fold) {
	( (MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_SetFoldCompact(fold);
}

void QsciLexerPostScript_override_virtual_SetFoldAtElse(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__SetFoldAtElse = slot;
}

void QsciLexerPostScript_virtualbase_SetFoldAtElse(void* self, bool fold) {
	( (MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_SetFoldAtElse(fold);
}

void QsciLexerPostScript_override_virtual_Language(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__Language = slot;
}

void QsciLexerPostScript_override_virtual_Lexer(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__Lexer = slot;
}

const char* QsciLexerPostScript_virtualbase_Lexer(const void* self) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_Lexer();
}

void QsciLexerPostScript_override_virtual_LexerId(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__LexerId = slot;
}

int QsciLexerPostScript_virtualbase_LexerId(const void* self) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_LexerId();
}

void QsciLexerPostScript_override_virtual_AutoCompletionFillups(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__AutoCompletionFillups = slot;
}

const char* QsciLexerPostScript_virtualbase_AutoCompletionFillups(const void* self) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_AutoCompletionFillups();
}

void QsciLexerPostScript_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__AutoCompletionWordSeparators = slot;
}

struct miqt_array /* of struct miqt_string */  QsciLexerPostScript_virtualbase_AutoCompletionWordSeparators(const void* self) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_AutoCompletionWordSeparators();
}

void QsciLexerPostScript_override_virtual_BlockEnd(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__BlockEnd = slot;
}

const char* QsciLexerPostScript_virtualbase_BlockEnd(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_BlockEnd(style);
}

void QsciLexerPostScript_override_virtual_BlockLookback(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__BlockLookback = slot;
}

int QsciLexerPostScript_virtualbase_BlockLookback(const void* self) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_BlockLookback();
}

void QsciLexerPostScript_override_virtual_BlockStart(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__BlockStart = slot;
}

const char* QsciLexerPostScript_virtualbase_BlockStart(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_BlockStart(style);
}

void QsciLexerPostScript_override_virtual_BlockStartKeyword(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__BlockStartKeyword = slot;
}

const char* QsciLexerPostScript_virtualbase_BlockStartKeyword(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_BlockStartKeyword(style);
}

void QsciLexerPostScript_override_virtual_BraceStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__BraceStyle = slot;
}

int QsciLexerPostScript_virtualbase_BraceStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_BraceStyle();
}

void QsciLexerPostScript_override_virtual_CaseSensitive(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__CaseSensitive = slot;
}

bool QsciLexerPostScript_virtualbase_CaseSensitive(const void* self) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_CaseSensitive();
}

void QsciLexerPostScript_override_virtual_Color(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__Color = slot;
}

QColor* QsciLexerPostScript_virtualbase_Color(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_Color(style);
}

void QsciLexerPostScript_override_virtual_EolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__EolFill = slot;
}

bool QsciLexerPostScript_virtualbase_EolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_EolFill(style);
}

void QsciLexerPostScript_override_virtual_Font(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__Font = slot;
}

QFont* QsciLexerPostScript_virtualbase_Font(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_Font(style);
}

void QsciLexerPostScript_override_virtual_IndentationGuideView(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__IndentationGuideView = slot;
}

int QsciLexerPostScript_virtualbase_IndentationGuideView(const void* self) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_IndentationGuideView();
}

void QsciLexerPostScript_override_virtual_Keywords(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__Keywords = slot;
}

const char* QsciLexerPostScript_virtualbase_Keywords(const void* self, int set) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_Keywords(set);
}

void QsciLexerPostScript_override_virtual_DefaultStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__DefaultStyle = slot;
}

int QsciLexerPostScript_virtualbase_DefaultStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_DefaultStyle();
}

void QsciLexerPostScript_override_virtual_Description(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__Description = slot;
}

void QsciLexerPostScript_override_virtual_Paper(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__Paper = slot;
}

QColor* QsciLexerPostScript_virtualbase_Paper(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_Paper(style);
}

void QsciLexerPostScript_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__DefaultColorWithStyle = slot;
}

QColor* QsciLexerPostScript_virtualbase_DefaultColorWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_DefaultColorWithStyle(style);
}

void QsciLexerPostScript_override_virtual_DefaultEolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__DefaultEolFill = slot;
}

bool QsciLexerPostScript_virtualbase_DefaultEolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_DefaultEolFill(style);
}

void QsciLexerPostScript_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__DefaultFontWithStyle = slot;
}

QFont* QsciLexerPostScript_virtualbase_DefaultFontWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_DefaultFontWithStyle(style);
}

void QsciLexerPostScript_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__DefaultPaperWithStyle = slot;
}

QColor* QsciLexerPostScript_virtualbase_DefaultPaperWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_DefaultPaperWithStyle(style);
}

void QsciLexerPostScript_override_virtual_SetEditor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__SetEditor = slot;
}

void QsciLexerPostScript_virtualbase_SetEditor(void* self, QsciScintilla* editor) {
	( (MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_SetEditor(editor);
}

void QsciLexerPostScript_override_virtual_RefreshProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__RefreshProperties = slot;
}

void QsciLexerPostScript_virtualbase_RefreshProperties(void* self) {
	( (MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_RefreshProperties();
}

void QsciLexerPostScript_override_virtual_StyleBitsNeeded(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__StyleBitsNeeded = slot;
}

int QsciLexerPostScript_virtualbase_StyleBitsNeeded(const void* self) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_StyleBitsNeeded();
}

void QsciLexerPostScript_override_virtual_WordCharacters(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__WordCharacters = slot;
}

const char* QsciLexerPostScript_virtualbase_WordCharacters(const void* self) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_WordCharacters();
}

void QsciLexerPostScript_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__SetAutoIndentStyle = slot;
}

void QsciLexerPostScript_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle) {
	( (MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_SetAutoIndentStyle(autoindentstyle);
}

void QsciLexerPostScript_override_virtual_SetColor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__SetColor = slot;
}

void QsciLexerPostScript_virtualbase_SetColor(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_SetColor(c, style);
}

void QsciLexerPostScript_override_virtual_SetEolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__SetEolFill = slot;
}

void QsciLexerPostScript_virtualbase_SetEolFill(void* self, bool eoffill, int style) {
	( (MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_SetEolFill(eoffill, style);
}

void QsciLexerPostScript_override_virtual_SetFont(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__SetFont = slot;
}

void QsciLexerPostScript_virtualbase_SetFont(void* self, QFont* f, int style) {
	( (MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_SetFont(f, style);
}

void QsciLexerPostScript_override_virtual_SetPaper(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__SetPaper = slot;
}

void QsciLexerPostScript_virtualbase_SetPaper(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_SetPaper(c, style);
}

void QsciLexerPostScript_override_virtual_ReadProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__ReadProperties = slot;
}

bool QsciLexerPostScript_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_ReadProperties(qs, prefix);
}

void QsciLexerPostScript_override_virtual_WriteProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPostScript*>( (QsciLexerPostScript*)(self) )->handle__WriteProperties = slot;
}

bool QsciLexerPostScript_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (const MiqtVirtualQsciLexerPostScript*)(self) )->virtualbase_WriteProperties(qs, prefix);
}

void QsciLexerPostScript_Delete(QsciLexerPostScript* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQsciLexerPostScript*>( self );
	} else {
		delete self;
	}
}

