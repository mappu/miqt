#include <QColor>
#include <QFont>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerpython.h>
#include "gen_qscilexerpython.h"
#include "_cgo_export.h"

class MiqtVirtualQsciLexerPython : public virtual QsciLexerPython {
public:

	MiqtVirtualQsciLexerPython(): QsciLexerPython() {};
	MiqtVirtualQsciLexerPython(QObject* parent): QsciLexerPython(parent) {};

	virtual ~MiqtVirtualQsciLexerPython() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__IndentationGuideView == 0) {
			return QsciLexerPython::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPython_IndentationGuideView(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__IndentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndentationGuideView() const {

		return QsciLexerPython::indentationGuideView();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldComments = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (handle__SetFoldComments == 0) {
			QsciLexerPython::setFoldComments(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerPython_SetFoldComments(this, handle__SetFoldComments, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldComments(bool fold) {

		QsciLexerPython::setFoldComments(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldQuotes = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldQuotes(bool fold) override {
		if (handle__SetFoldQuotes == 0) {
			QsciLexerPython::setFoldQuotes(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerPython_SetFoldQuotes(this, handle__SetFoldQuotes, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldQuotes(bool fold) {

		QsciLexerPython::setFoldQuotes(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetIndentationWarning = 0;

	// Subclass to allow providing a Go implementation
	virtual void setIndentationWarning(QsciLexerPython::IndentationWarning warn) override {
		if (handle__SetIndentationWarning == 0) {
			QsciLexerPython::setIndentationWarning(warn);
			return;
		}
		
		QsciLexerPython::IndentationWarning warn_ret = warn;
		int sigval1 = static_cast<int>(warn_ret);

		miqt_exec_callback_QsciLexerPython_SetIndentationWarning(this, handle__SetIndentationWarning, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetIndentationWarning(int warn) {

		QsciLexerPython::setIndentationWarning(static_cast<QsciLexerPython::IndentationWarning>(warn));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__Language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerPython_Language(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__Language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__Lexer == 0) {
			return QsciLexerPython::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerPython_Lexer(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__Lexer);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Lexer() const {

		return (const char*) QsciLexerPython::lexer();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__LexerId == 0) {
			return QsciLexerPython::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPython_LexerId(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__LexerId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_LexerId() const {

		return QsciLexerPython::lexerId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__AutoCompletionFillups == 0) {
			return QsciLexerPython::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerPython_AutoCompletionFillups(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__AutoCompletionFillups);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_AutoCompletionFillups() const {

		return (const char*) QsciLexerPython::autoCompletionFillups();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__AutoCompletionWordSeparators == 0) {
			return QsciLexerPython::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerPython_AutoCompletionWordSeparators(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__AutoCompletionWordSeparators);
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

		QStringList _ret = QsciLexerPython::autoCompletionWordSeparators();
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
			return QsciLexerPython::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerPython_BlockEnd(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__BlockEnd, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockEnd(int* style) const {

		return (const char*) QsciLexerPython::blockEnd(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__BlockLookback == 0) {
			return QsciLexerPython::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPython_BlockLookback(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__BlockLookback);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BlockLookback() const {

		return QsciLexerPython::blockLookback();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__BlockStart == 0) {
			return QsciLexerPython::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerPython_BlockStart(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__BlockStart, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStart(int* style) const {

		return (const char*) QsciLexerPython::blockStart(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__BlockStartKeyword == 0) {
			return QsciLexerPython::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerPython_BlockStartKeyword(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__BlockStartKeyword, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStartKeyword(int* style) const {

		return (const char*) QsciLexerPython::blockStartKeyword(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BraceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__BraceStyle == 0) {
			return QsciLexerPython::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPython_BraceStyle(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__BraceStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BraceStyle() const {

		return QsciLexerPython::braceStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CaseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__CaseSensitive == 0) {
			return QsciLexerPython::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerPython_CaseSensitive(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__CaseSensitive);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CaseSensitive() const {

		return QsciLexerPython::caseSensitive();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__Color == 0) {
			return QsciLexerPython::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerPython_Color(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__Color, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Color(int style) const {

		return new QColor(QsciLexerPython::color(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__EolFill == 0) {
			return QsciLexerPython::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerPython_EolFill(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__EolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EolFill(int style) const {

		return QsciLexerPython::eolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__Font == 0) {
			return QsciLexerPython::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerPython_Font(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__Font, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_Font(int style) const {

		return new QFont(QsciLexerPython::font(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__Keywords == 0) {
			return QsciLexerPython::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerPython_Keywords(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__Keywords, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Keywords(int set) const {

		return (const char*) QsciLexerPython::keywords(static_cast<int>(set));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__DefaultStyle == 0) {
			return QsciLexerPython::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPython_DefaultStyle(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__DefaultStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DefaultStyle() const {

		return QsciLexerPython::defaultStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__Description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerPython_Description(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__Description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__Paper == 0) {
			return QsciLexerPython::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerPython_Paper(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__Paper, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Paper(int style) const {

		return new QColor(QsciLexerPython::paper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__DefaultColorWithStyle == 0) {
			return QsciLexerPython::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerPython_DefaultColorWithStyle(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__DefaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultColorWithStyle(int style) const {

		return new QColor(QsciLexerPython::defaultColor(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__DefaultEolFill == 0) {
			return QsciLexerPython::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerPython_DefaultEolFill(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__DefaultEolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DefaultEolFill(int style) const {

		return QsciLexerPython::defaultEolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__DefaultFontWithStyle == 0) {
			return QsciLexerPython::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerPython_DefaultFontWithStyle(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__DefaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_DefaultFontWithStyle(int style) const {

		return new QFont(QsciLexerPython::defaultFont(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__DefaultPaperWithStyle == 0) {
			return QsciLexerPython::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerPython_DefaultPaperWithStyle(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__DefaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultPaperWithStyle(int style) const {

		return new QColor(QsciLexerPython::defaultPaper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__SetEditor == 0) {
			QsciLexerPython::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerPython_SetEditor(this, handle__SetEditor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEditor(QsciScintilla* editor) {

		QsciLexerPython::setEditor(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RefreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__RefreshProperties == 0) {
			QsciLexerPython::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerPython_RefreshProperties(this, handle__RefreshProperties);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RefreshProperties() {

		QsciLexerPython::refreshProperties();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StyleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__StyleBitsNeeded == 0) {
			return QsciLexerPython::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPython_StyleBitsNeeded(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__StyleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StyleBitsNeeded() const {

		return QsciLexerPython::styleBitsNeeded();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__WordCharacters == 0) {
			return QsciLexerPython::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerPython_WordCharacters(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__WordCharacters);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_WordCharacters() const {

		return (const char*) QsciLexerPython::wordCharacters();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__SetAutoIndentStyle == 0) {
			QsciLexerPython::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerPython_SetAutoIndentStyle(this, handle__SetAutoIndentStyle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoIndentStyle(int autoindentstyle) {

		QsciLexerPython::setAutoIndentStyle(static_cast<int>(autoindentstyle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__SetColor == 0) {
			QsciLexerPython::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerPython_SetColor(this, handle__SetColor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetColor(QColor* c, int style) {

		QsciLexerPython::setColor(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__SetEolFill == 0) {
			QsciLexerPython::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerPython_SetEolFill(this, handle__SetEolFill, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEolFill(bool eoffill, int style) {

		QsciLexerPython::setEolFill(eoffill, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__SetFont == 0) {
			QsciLexerPython::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerPython_SetFont(this, handle__SetFont, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFont(QFont* f, int style) {

		QsciLexerPython::setFont(*f, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__SetPaper == 0) {
			QsciLexerPython::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerPython_SetPaper(this, handle__SetPaper, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPaper(QColor* c, int style) {

		QsciLexerPython::setPaper(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__ReadProperties == 0) {
			return QsciLexerPython::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerPython_ReadProperties(this, handle__ReadProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ReadProperties(QSettings* qs, struct miqt_string prefix) {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerPython::readProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__WriteProperties == 0) {
			return QsciLexerPython::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerPython_WriteProperties(const_cast<MiqtVirtualQsciLexerPython*>(this), handle__WriteProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WriteProperties(QSettings* qs, struct miqt_string prefix) const {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerPython::writeProperties(*qs, prefix_QString);

	}

};

void QsciLexerPython_new(QsciLexerPython** outptr_QsciLexerPython, QsciLexer** outptr_QsciLexer, QObject** outptr_QObject) {
	MiqtVirtualQsciLexerPython* ret = new MiqtVirtualQsciLexerPython();
	*outptr_QsciLexerPython = ret;
	*outptr_QsciLexer = static_cast<QsciLexer*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QsciLexerPython_new2(QObject* parent, QsciLexerPython** outptr_QsciLexerPython, QsciLexer** outptr_QsciLexer, QObject** outptr_QObject) {
	MiqtVirtualQsciLexerPython* ret = new MiqtVirtualQsciLexerPython(parent);
	*outptr_QsciLexerPython = ret;
	*outptr_QsciLexer = static_cast<QsciLexer*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

QMetaObject* QsciLexerPython_MetaObject(const QsciLexerPython* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerPython_Metacast(QsciLexerPython* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerPython_Tr(const char* s) {
	QString _ret = QsciLexerPython::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPython_TrUtf8(const char* s) {
	QString _ret = QsciLexerPython::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerPython_Language(const QsciLexerPython* self) {
	return (const char*) self->language();
}

const char* QsciLexerPython_Lexer(const QsciLexerPython* self) {
	return (const char*) self->lexer();
}

struct miqt_array /* of struct miqt_string */  QsciLexerPython_AutoCompletionWordSeparators(const QsciLexerPython* self) {
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

int QsciLexerPython_BlockLookback(const QsciLexerPython* self) {
	return self->blockLookback();
}

const char* QsciLexerPython_BlockStart(const QsciLexerPython* self) {
	return (const char*) self->blockStart();
}

int QsciLexerPython_BraceStyle(const QsciLexerPython* self) {
	return self->braceStyle();
}

QColor* QsciLexerPython_DefaultColor(const QsciLexerPython* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerPython_DefaultEolFill(const QsciLexerPython* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerPython_DefaultFont(const QsciLexerPython* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPython_DefaultPaper(const QsciLexerPython* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

int QsciLexerPython_IndentationGuideView(const QsciLexerPython* self) {
	return self->indentationGuideView();
}

const char* QsciLexerPython_Keywords(const QsciLexerPython* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerPython_Description(const QsciLexerPython* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerPython_RefreshProperties(QsciLexerPython* self) {
	self->refreshProperties();
}

bool QsciLexerPython_FoldComments(const QsciLexerPython* self) {
	return self->foldComments();
}

void QsciLexerPython_SetFoldCompact(QsciLexerPython* self, bool fold) {
	self->setFoldCompact(fold);
}

bool QsciLexerPython_FoldCompact(const QsciLexerPython* self) {
	return self->foldCompact();
}

bool QsciLexerPython_FoldQuotes(const QsciLexerPython* self) {
	return self->foldQuotes();
}

int QsciLexerPython_IndentationWarning(const QsciLexerPython* self) {
	QsciLexerPython::IndentationWarning _ret = self->indentationWarning();
	return static_cast<int>(_ret);
}

void QsciLexerPython_SetHighlightSubidentifiers(QsciLexerPython* self, bool enabled) {
	self->setHighlightSubidentifiers(enabled);
}

bool QsciLexerPython_HighlightSubidentifiers(const QsciLexerPython* self) {
	return self->highlightSubidentifiers();
}

void QsciLexerPython_SetStringsOverNewlineAllowed(QsciLexerPython* self, bool allowed) {
	self->setStringsOverNewlineAllowed(allowed);
}

bool QsciLexerPython_StringsOverNewlineAllowed(const QsciLexerPython* self) {
	return self->stringsOverNewlineAllowed();
}

void QsciLexerPython_SetV2UnicodeAllowed(QsciLexerPython* self, bool allowed) {
	self->setV2UnicodeAllowed(allowed);
}

bool QsciLexerPython_V2UnicodeAllowed(const QsciLexerPython* self) {
	return self->v2UnicodeAllowed();
}

void QsciLexerPython_SetV3BinaryOctalAllowed(QsciLexerPython* self, bool allowed) {
	self->setV3BinaryOctalAllowed(allowed);
}

bool QsciLexerPython_V3BinaryOctalAllowed(const QsciLexerPython* self) {
	return self->v3BinaryOctalAllowed();
}

void QsciLexerPython_SetV3BytesAllowed(QsciLexerPython* self, bool allowed) {
	self->setV3BytesAllowed(allowed);
}

bool QsciLexerPython_V3BytesAllowed(const QsciLexerPython* self) {
	return self->v3BytesAllowed();
}

void QsciLexerPython_SetFoldComments(QsciLexerPython* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerPython_SetFoldQuotes(QsciLexerPython* self, bool fold) {
	self->setFoldQuotes(fold);
}

void QsciLexerPython_SetIndentationWarning(QsciLexerPython* self, int warn) {
	self->setIndentationWarning(static_cast<QsciLexerPython::IndentationWarning>(warn));
}

struct miqt_string QsciLexerPython_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerPython::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPython_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerPython::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPython_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerPython::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPython_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerPython::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerPython_BlockStart1(const QsciLexerPython* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

void QsciLexerPython_override_virtual_IndentationGuideView(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__IndentationGuideView = slot;
}

int QsciLexerPython_virtualbase_IndentationGuideView(const void* self) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_IndentationGuideView();
}

void QsciLexerPython_override_virtual_SetFoldComments(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__SetFoldComments = slot;
}

void QsciLexerPython_virtualbase_SetFoldComments(void* self, bool fold) {
	( (MiqtVirtualQsciLexerPython*)(self) )->virtualbase_SetFoldComments(fold);
}

void QsciLexerPython_override_virtual_SetFoldQuotes(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__SetFoldQuotes = slot;
}

void QsciLexerPython_virtualbase_SetFoldQuotes(void* self, bool fold) {
	( (MiqtVirtualQsciLexerPython*)(self) )->virtualbase_SetFoldQuotes(fold);
}

void QsciLexerPython_override_virtual_SetIndentationWarning(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__SetIndentationWarning = slot;
}

void QsciLexerPython_virtualbase_SetIndentationWarning(void* self, int warn) {
	( (MiqtVirtualQsciLexerPython*)(self) )->virtualbase_SetIndentationWarning(warn);
}

void QsciLexerPython_override_virtual_Language(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__Language = slot;
}

void QsciLexerPython_override_virtual_Lexer(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__Lexer = slot;
}

const char* QsciLexerPython_virtualbase_Lexer(const void* self) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_Lexer();
}

void QsciLexerPython_override_virtual_LexerId(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__LexerId = slot;
}

int QsciLexerPython_virtualbase_LexerId(const void* self) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_LexerId();
}

void QsciLexerPython_override_virtual_AutoCompletionFillups(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__AutoCompletionFillups = slot;
}

const char* QsciLexerPython_virtualbase_AutoCompletionFillups(const void* self) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_AutoCompletionFillups();
}

void QsciLexerPython_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__AutoCompletionWordSeparators = slot;
}

struct miqt_array /* of struct miqt_string */  QsciLexerPython_virtualbase_AutoCompletionWordSeparators(const void* self) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_AutoCompletionWordSeparators();
}

void QsciLexerPython_override_virtual_BlockEnd(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__BlockEnd = slot;
}

const char* QsciLexerPython_virtualbase_BlockEnd(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_BlockEnd(style);
}

void QsciLexerPython_override_virtual_BlockLookback(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__BlockLookback = slot;
}

int QsciLexerPython_virtualbase_BlockLookback(const void* self) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_BlockLookback();
}

void QsciLexerPython_override_virtual_BlockStart(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__BlockStart = slot;
}

const char* QsciLexerPython_virtualbase_BlockStart(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_BlockStart(style);
}

void QsciLexerPython_override_virtual_BlockStartKeyword(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__BlockStartKeyword = slot;
}

const char* QsciLexerPython_virtualbase_BlockStartKeyword(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_BlockStartKeyword(style);
}

void QsciLexerPython_override_virtual_BraceStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__BraceStyle = slot;
}

int QsciLexerPython_virtualbase_BraceStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_BraceStyle();
}

void QsciLexerPython_override_virtual_CaseSensitive(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__CaseSensitive = slot;
}

bool QsciLexerPython_virtualbase_CaseSensitive(const void* self) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_CaseSensitive();
}

void QsciLexerPython_override_virtual_Color(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__Color = slot;
}

QColor* QsciLexerPython_virtualbase_Color(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_Color(style);
}

void QsciLexerPython_override_virtual_EolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__EolFill = slot;
}

bool QsciLexerPython_virtualbase_EolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_EolFill(style);
}

void QsciLexerPython_override_virtual_Font(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__Font = slot;
}

QFont* QsciLexerPython_virtualbase_Font(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_Font(style);
}

void QsciLexerPython_override_virtual_Keywords(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__Keywords = slot;
}

const char* QsciLexerPython_virtualbase_Keywords(const void* self, int set) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_Keywords(set);
}

void QsciLexerPython_override_virtual_DefaultStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__DefaultStyle = slot;
}

int QsciLexerPython_virtualbase_DefaultStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_DefaultStyle();
}

void QsciLexerPython_override_virtual_Description(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__Description = slot;
}

void QsciLexerPython_override_virtual_Paper(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__Paper = slot;
}

QColor* QsciLexerPython_virtualbase_Paper(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_Paper(style);
}

void QsciLexerPython_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__DefaultColorWithStyle = slot;
}

QColor* QsciLexerPython_virtualbase_DefaultColorWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_DefaultColorWithStyle(style);
}

void QsciLexerPython_override_virtual_DefaultEolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__DefaultEolFill = slot;
}

bool QsciLexerPython_virtualbase_DefaultEolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_DefaultEolFill(style);
}

void QsciLexerPython_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__DefaultFontWithStyle = slot;
}

QFont* QsciLexerPython_virtualbase_DefaultFontWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_DefaultFontWithStyle(style);
}

void QsciLexerPython_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__DefaultPaperWithStyle = slot;
}

QColor* QsciLexerPython_virtualbase_DefaultPaperWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_DefaultPaperWithStyle(style);
}

void QsciLexerPython_override_virtual_SetEditor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__SetEditor = slot;
}

void QsciLexerPython_virtualbase_SetEditor(void* self, QsciScintilla* editor) {
	( (MiqtVirtualQsciLexerPython*)(self) )->virtualbase_SetEditor(editor);
}

void QsciLexerPython_override_virtual_RefreshProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__RefreshProperties = slot;
}

void QsciLexerPython_virtualbase_RefreshProperties(void* self) {
	( (MiqtVirtualQsciLexerPython*)(self) )->virtualbase_RefreshProperties();
}

void QsciLexerPython_override_virtual_StyleBitsNeeded(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__StyleBitsNeeded = slot;
}

int QsciLexerPython_virtualbase_StyleBitsNeeded(const void* self) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_StyleBitsNeeded();
}

void QsciLexerPython_override_virtual_WordCharacters(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__WordCharacters = slot;
}

const char* QsciLexerPython_virtualbase_WordCharacters(const void* self) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_WordCharacters();
}

void QsciLexerPython_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__SetAutoIndentStyle = slot;
}

void QsciLexerPython_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle) {
	( (MiqtVirtualQsciLexerPython*)(self) )->virtualbase_SetAutoIndentStyle(autoindentstyle);
}

void QsciLexerPython_override_virtual_SetColor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__SetColor = slot;
}

void QsciLexerPython_virtualbase_SetColor(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerPython*)(self) )->virtualbase_SetColor(c, style);
}

void QsciLexerPython_override_virtual_SetEolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__SetEolFill = slot;
}

void QsciLexerPython_virtualbase_SetEolFill(void* self, bool eoffill, int style) {
	( (MiqtVirtualQsciLexerPython*)(self) )->virtualbase_SetEolFill(eoffill, style);
}

void QsciLexerPython_override_virtual_SetFont(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__SetFont = slot;
}

void QsciLexerPython_virtualbase_SetFont(void* self, QFont* f, int style) {
	( (MiqtVirtualQsciLexerPython*)(self) )->virtualbase_SetFont(f, style);
}

void QsciLexerPython_override_virtual_SetPaper(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__SetPaper = slot;
}

void QsciLexerPython_virtualbase_SetPaper(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerPython*)(self) )->virtualbase_SetPaper(c, style);
}

void QsciLexerPython_override_virtual_ReadProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__ReadProperties = slot;
}

bool QsciLexerPython_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (MiqtVirtualQsciLexerPython*)(self) )->virtualbase_ReadProperties(qs, prefix);
}

void QsciLexerPython_override_virtual_WriteProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) )->handle__WriteProperties = slot;
}

bool QsciLexerPython_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (const MiqtVirtualQsciLexerPython*)(self) )->virtualbase_WriteProperties(qs, prefix);
}

void QsciLexerPython_Delete(QsciLexerPython* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQsciLexerPython*>( self );
	} else {
		delete self;
	}
}

