#include <QColor>
#include <QFont>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerbash.h>
#include "gen_qscilexerbash.h"
#include "_cgo_export.h"

class MiqtVirtualQsciLexerBash : public virtual QsciLexerBash {
public:

	MiqtVirtualQsciLexerBash(): QsciLexerBash() {};
	MiqtVirtualQsciLexerBash(QObject* parent): QsciLexerBash(parent) {};

	virtual ~MiqtVirtualQsciLexerBash() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldComments = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (handle__SetFoldComments == 0) {
			QsciLexerBash::setFoldComments(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerBash_SetFoldComments(this, handle__SetFoldComments, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldComments(bool fold) {

		QsciLexerBash::setFoldComments(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__SetFoldCompact == 0) {
			QsciLexerBash::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerBash_SetFoldCompact(this, handle__SetFoldCompact, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldCompact(bool fold) {

		QsciLexerBash::setFoldCompact(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__Language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerBash_Language(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__Language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__Lexer == 0) {
			return QsciLexerBash::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerBash_Lexer(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__Lexer);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Lexer() const {

		return (const char*) QsciLexerBash::lexer();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__LexerId == 0) {
			return QsciLexerBash::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerBash_LexerId(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__LexerId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_LexerId() const {

		return QsciLexerBash::lexerId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__AutoCompletionFillups == 0) {
			return QsciLexerBash::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerBash_AutoCompletionFillups(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__AutoCompletionFillups);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_AutoCompletionFillups() const {

		return (const char*) QsciLexerBash::autoCompletionFillups();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__AutoCompletionWordSeparators == 0) {
			return QsciLexerBash::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerBash_AutoCompletionWordSeparators(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__AutoCompletionWordSeparators);
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

		QStringList _ret = QsciLexerBash::autoCompletionWordSeparators();
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
			return QsciLexerBash::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerBash_BlockEnd(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__BlockEnd, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockEnd(int* style) const {

		return (const char*) QsciLexerBash::blockEnd(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__BlockLookback == 0) {
			return QsciLexerBash::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerBash_BlockLookback(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__BlockLookback);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BlockLookback() const {

		return QsciLexerBash::blockLookback();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__BlockStart == 0) {
			return QsciLexerBash::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerBash_BlockStart(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__BlockStart, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStart(int* style) const {

		return (const char*) QsciLexerBash::blockStart(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__BlockStartKeyword == 0) {
			return QsciLexerBash::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerBash_BlockStartKeyword(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__BlockStartKeyword, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStartKeyword(int* style) const {

		return (const char*) QsciLexerBash::blockStartKeyword(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BraceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__BraceStyle == 0) {
			return QsciLexerBash::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerBash_BraceStyle(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__BraceStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BraceStyle() const {

		return QsciLexerBash::braceStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CaseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__CaseSensitive == 0) {
			return QsciLexerBash::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerBash_CaseSensitive(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__CaseSensitive);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CaseSensitive() const {

		return QsciLexerBash::caseSensitive();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__Color == 0) {
			return QsciLexerBash::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerBash_Color(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__Color, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Color(int style) const {

		return new QColor(QsciLexerBash::color(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__EolFill == 0) {
			return QsciLexerBash::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerBash_EolFill(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__EolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EolFill(int style) const {

		return QsciLexerBash::eolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__Font == 0) {
			return QsciLexerBash::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerBash_Font(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__Font, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_Font(int style) const {

		return new QFont(QsciLexerBash::font(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__IndentationGuideView == 0) {
			return QsciLexerBash::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerBash_IndentationGuideView(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__IndentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndentationGuideView() const {

		return QsciLexerBash::indentationGuideView();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__Keywords == 0) {
			return QsciLexerBash::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerBash_Keywords(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__Keywords, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Keywords(int set) const {

		return (const char*) QsciLexerBash::keywords(static_cast<int>(set));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__DefaultStyle == 0) {
			return QsciLexerBash::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerBash_DefaultStyle(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__DefaultStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DefaultStyle() const {

		return QsciLexerBash::defaultStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__Description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerBash_Description(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__Description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__Paper == 0) {
			return QsciLexerBash::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerBash_Paper(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__Paper, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Paper(int style) const {

		return new QColor(QsciLexerBash::paper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__DefaultColorWithStyle == 0) {
			return QsciLexerBash::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerBash_DefaultColorWithStyle(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__DefaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultColorWithStyle(int style) const {

		return new QColor(QsciLexerBash::defaultColor(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__DefaultEolFill == 0) {
			return QsciLexerBash::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerBash_DefaultEolFill(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__DefaultEolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DefaultEolFill(int style) const {

		return QsciLexerBash::defaultEolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__DefaultFontWithStyle == 0) {
			return QsciLexerBash::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerBash_DefaultFontWithStyle(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__DefaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_DefaultFontWithStyle(int style) const {

		return new QFont(QsciLexerBash::defaultFont(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__DefaultPaperWithStyle == 0) {
			return QsciLexerBash::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerBash_DefaultPaperWithStyle(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__DefaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultPaperWithStyle(int style) const {

		return new QColor(QsciLexerBash::defaultPaper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__SetEditor == 0) {
			QsciLexerBash::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerBash_SetEditor(this, handle__SetEditor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEditor(QsciScintilla* editor) {

		QsciLexerBash::setEditor(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RefreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__RefreshProperties == 0) {
			QsciLexerBash::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerBash_RefreshProperties(this, handle__RefreshProperties);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RefreshProperties() {

		QsciLexerBash::refreshProperties();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StyleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__StyleBitsNeeded == 0) {
			return QsciLexerBash::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerBash_StyleBitsNeeded(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__StyleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StyleBitsNeeded() const {

		return QsciLexerBash::styleBitsNeeded();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__WordCharacters == 0) {
			return QsciLexerBash::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerBash_WordCharacters(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__WordCharacters);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_WordCharacters() const {

		return (const char*) QsciLexerBash::wordCharacters();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__SetAutoIndentStyle == 0) {
			QsciLexerBash::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerBash_SetAutoIndentStyle(this, handle__SetAutoIndentStyle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoIndentStyle(int autoindentstyle) {

		QsciLexerBash::setAutoIndentStyle(static_cast<int>(autoindentstyle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__SetColor == 0) {
			QsciLexerBash::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerBash_SetColor(this, handle__SetColor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetColor(QColor* c, int style) {

		QsciLexerBash::setColor(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__SetEolFill == 0) {
			QsciLexerBash::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerBash_SetEolFill(this, handle__SetEolFill, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEolFill(bool eoffill, int style) {

		QsciLexerBash::setEolFill(eoffill, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__SetFont == 0) {
			QsciLexerBash::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerBash_SetFont(this, handle__SetFont, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFont(QFont* f, int style) {

		QsciLexerBash::setFont(*f, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__SetPaper == 0) {
			QsciLexerBash::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerBash_SetPaper(this, handle__SetPaper, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPaper(QColor* c, int style) {

		QsciLexerBash::setPaper(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__ReadProperties == 0) {
			return QsciLexerBash::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerBash_ReadProperties(this, handle__ReadProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ReadProperties(QSettings* qs, struct miqt_string prefix) {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerBash::readProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__WriteProperties == 0) {
			return QsciLexerBash::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerBash_WriteProperties(const_cast<MiqtVirtualQsciLexerBash*>(this), handle__WriteProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WriteProperties(QSettings* qs, struct miqt_string prefix) const {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerBash::writeProperties(*qs, prefix_QString);

	}

};

QsciLexerBash* QsciLexerBash_new() {
	return new MiqtVirtualQsciLexerBash();
}

QsciLexerBash* QsciLexerBash_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerBash(parent);
}

void QsciLexerBash_virtbase(QsciLexerBash* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerBash_MetaObject(const QsciLexerBash* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerBash_Metacast(QsciLexerBash* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerBash_Tr(const char* s) {
	QString _ret = QsciLexerBash::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerBash_TrUtf8(const char* s) {
	QString _ret = QsciLexerBash::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerBash_Language(const QsciLexerBash* self) {
	return (const char*) self->language();
}

const char* QsciLexerBash_Lexer(const QsciLexerBash* self) {
	return (const char*) self->lexer();
}

int QsciLexerBash_BraceStyle(const QsciLexerBash* self) {
	return self->braceStyle();
}

const char* QsciLexerBash_WordCharacters(const QsciLexerBash* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerBash_DefaultColor(const QsciLexerBash* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerBash_DefaultEolFill(const QsciLexerBash* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerBash_DefaultFont(const QsciLexerBash* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerBash_DefaultPaper(const QsciLexerBash* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerBash_Keywords(const QsciLexerBash* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerBash_Description(const QsciLexerBash* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerBash_RefreshProperties(QsciLexerBash* self) {
	self->refreshProperties();
}

bool QsciLexerBash_FoldComments(const QsciLexerBash* self) {
	return self->foldComments();
}

bool QsciLexerBash_FoldCompact(const QsciLexerBash* self) {
	return self->foldCompact();
}

void QsciLexerBash_SetFoldComments(QsciLexerBash* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerBash_SetFoldCompact(QsciLexerBash* self, bool fold) {
	self->setFoldCompact(fold);
}

struct miqt_string QsciLexerBash_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerBash::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerBash_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerBash::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerBash_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerBash::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerBash_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerBash::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerBash_override_virtual_SetFoldComments(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__SetFoldComments = slot;
}

void QsciLexerBash_virtualbase_SetFoldComments(void* self, bool fold) {
	( (MiqtVirtualQsciLexerBash*)(self) )->virtualbase_SetFoldComments(fold);
}

void QsciLexerBash_override_virtual_SetFoldCompact(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__SetFoldCompact = slot;
}

void QsciLexerBash_virtualbase_SetFoldCompact(void* self, bool fold) {
	( (MiqtVirtualQsciLexerBash*)(self) )->virtualbase_SetFoldCompact(fold);
}

void QsciLexerBash_override_virtual_Language(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__Language = slot;
}

void QsciLexerBash_override_virtual_Lexer(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__Lexer = slot;
}

const char* QsciLexerBash_virtualbase_Lexer(const void* self) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_Lexer();
}

void QsciLexerBash_override_virtual_LexerId(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__LexerId = slot;
}

int QsciLexerBash_virtualbase_LexerId(const void* self) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_LexerId();
}

void QsciLexerBash_override_virtual_AutoCompletionFillups(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__AutoCompletionFillups = slot;
}

const char* QsciLexerBash_virtualbase_AutoCompletionFillups(const void* self) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_AutoCompletionFillups();
}

void QsciLexerBash_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__AutoCompletionWordSeparators = slot;
}

struct miqt_array /* of struct miqt_string */  QsciLexerBash_virtualbase_AutoCompletionWordSeparators(const void* self) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_AutoCompletionWordSeparators();
}

void QsciLexerBash_override_virtual_BlockEnd(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__BlockEnd = slot;
}

const char* QsciLexerBash_virtualbase_BlockEnd(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_BlockEnd(style);
}

void QsciLexerBash_override_virtual_BlockLookback(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__BlockLookback = slot;
}

int QsciLexerBash_virtualbase_BlockLookback(const void* self) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_BlockLookback();
}

void QsciLexerBash_override_virtual_BlockStart(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__BlockStart = slot;
}

const char* QsciLexerBash_virtualbase_BlockStart(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_BlockStart(style);
}

void QsciLexerBash_override_virtual_BlockStartKeyword(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__BlockStartKeyword = slot;
}

const char* QsciLexerBash_virtualbase_BlockStartKeyword(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_BlockStartKeyword(style);
}

void QsciLexerBash_override_virtual_BraceStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__BraceStyle = slot;
}

int QsciLexerBash_virtualbase_BraceStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_BraceStyle();
}

void QsciLexerBash_override_virtual_CaseSensitive(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__CaseSensitive = slot;
}

bool QsciLexerBash_virtualbase_CaseSensitive(const void* self) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_CaseSensitive();
}

void QsciLexerBash_override_virtual_Color(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__Color = slot;
}

QColor* QsciLexerBash_virtualbase_Color(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_Color(style);
}

void QsciLexerBash_override_virtual_EolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__EolFill = slot;
}

bool QsciLexerBash_virtualbase_EolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_EolFill(style);
}

void QsciLexerBash_override_virtual_Font(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__Font = slot;
}

QFont* QsciLexerBash_virtualbase_Font(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_Font(style);
}

void QsciLexerBash_override_virtual_IndentationGuideView(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__IndentationGuideView = slot;
}

int QsciLexerBash_virtualbase_IndentationGuideView(const void* self) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_IndentationGuideView();
}

void QsciLexerBash_override_virtual_Keywords(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__Keywords = slot;
}

const char* QsciLexerBash_virtualbase_Keywords(const void* self, int set) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_Keywords(set);
}

void QsciLexerBash_override_virtual_DefaultStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__DefaultStyle = slot;
}

int QsciLexerBash_virtualbase_DefaultStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_DefaultStyle();
}

void QsciLexerBash_override_virtual_Description(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__Description = slot;
}

void QsciLexerBash_override_virtual_Paper(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__Paper = slot;
}

QColor* QsciLexerBash_virtualbase_Paper(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_Paper(style);
}

void QsciLexerBash_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__DefaultColorWithStyle = slot;
}

QColor* QsciLexerBash_virtualbase_DefaultColorWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_DefaultColorWithStyle(style);
}

void QsciLexerBash_override_virtual_DefaultEolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__DefaultEolFill = slot;
}

bool QsciLexerBash_virtualbase_DefaultEolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_DefaultEolFill(style);
}

void QsciLexerBash_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__DefaultFontWithStyle = slot;
}

QFont* QsciLexerBash_virtualbase_DefaultFontWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_DefaultFontWithStyle(style);
}

void QsciLexerBash_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__DefaultPaperWithStyle = slot;
}

QColor* QsciLexerBash_virtualbase_DefaultPaperWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_DefaultPaperWithStyle(style);
}

void QsciLexerBash_override_virtual_SetEditor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__SetEditor = slot;
}

void QsciLexerBash_virtualbase_SetEditor(void* self, QsciScintilla* editor) {
	( (MiqtVirtualQsciLexerBash*)(self) )->virtualbase_SetEditor(editor);
}

void QsciLexerBash_override_virtual_RefreshProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__RefreshProperties = slot;
}

void QsciLexerBash_virtualbase_RefreshProperties(void* self) {
	( (MiqtVirtualQsciLexerBash*)(self) )->virtualbase_RefreshProperties();
}

void QsciLexerBash_override_virtual_StyleBitsNeeded(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__StyleBitsNeeded = slot;
}

int QsciLexerBash_virtualbase_StyleBitsNeeded(const void* self) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_StyleBitsNeeded();
}

void QsciLexerBash_override_virtual_WordCharacters(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__WordCharacters = slot;
}

const char* QsciLexerBash_virtualbase_WordCharacters(const void* self) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_WordCharacters();
}

void QsciLexerBash_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__SetAutoIndentStyle = slot;
}

void QsciLexerBash_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle) {
	( (MiqtVirtualQsciLexerBash*)(self) )->virtualbase_SetAutoIndentStyle(autoindentstyle);
}

void QsciLexerBash_override_virtual_SetColor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__SetColor = slot;
}

void QsciLexerBash_virtualbase_SetColor(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerBash*)(self) )->virtualbase_SetColor(c, style);
}

void QsciLexerBash_override_virtual_SetEolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__SetEolFill = slot;
}

void QsciLexerBash_virtualbase_SetEolFill(void* self, bool eoffill, int style) {
	( (MiqtVirtualQsciLexerBash*)(self) )->virtualbase_SetEolFill(eoffill, style);
}

void QsciLexerBash_override_virtual_SetFont(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__SetFont = slot;
}

void QsciLexerBash_virtualbase_SetFont(void* self, QFont* f, int style) {
	( (MiqtVirtualQsciLexerBash*)(self) )->virtualbase_SetFont(f, style);
}

void QsciLexerBash_override_virtual_SetPaper(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__SetPaper = slot;
}

void QsciLexerBash_virtualbase_SetPaper(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerBash*)(self) )->virtualbase_SetPaper(c, style);
}

void QsciLexerBash_override_virtual_ReadProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__ReadProperties = slot;
}

bool QsciLexerBash_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (MiqtVirtualQsciLexerBash*)(self) )->virtualbase_ReadProperties(qs, prefix);
}

void QsciLexerBash_override_virtual_WriteProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerBash*>( (QsciLexerBash*)(self) )->handle__WriteProperties = slot;
}

bool QsciLexerBash_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (const MiqtVirtualQsciLexerBash*)(self) )->virtualbase_WriteProperties(qs, prefix);
}

void QsciLexerBash_Delete(QsciLexerBash* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQsciLexerBash*>( self );
	} else {
		delete self;
	}
}

