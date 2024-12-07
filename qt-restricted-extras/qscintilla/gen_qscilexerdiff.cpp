#include <QColor>
#include <QFont>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerdiff.h>
#include "gen_qscilexerdiff.h"
#include "_cgo_export.h"

class MiqtVirtualQsciLexerDiff : public virtual QsciLexerDiff {
public:

	MiqtVirtualQsciLexerDiff(): QsciLexerDiff() {};
	MiqtVirtualQsciLexerDiff(QObject* parent): QsciLexerDiff(parent) {};

	virtual ~MiqtVirtualQsciLexerDiff() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__Language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerDiff_Language(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__Language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__Lexer == 0) {
			return QsciLexerDiff::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerDiff_Lexer(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__Lexer);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Lexer() const {

		return (const char*) QsciLexerDiff::lexer();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__LexerId == 0) {
			return QsciLexerDiff::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerDiff_LexerId(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__LexerId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_LexerId() const {

		return QsciLexerDiff::lexerId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__AutoCompletionFillups == 0) {
			return QsciLexerDiff::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerDiff_AutoCompletionFillups(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__AutoCompletionFillups);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_AutoCompletionFillups() const {

		return (const char*) QsciLexerDiff::autoCompletionFillups();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__AutoCompletionWordSeparators == 0) {
			return QsciLexerDiff::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerDiff_AutoCompletionWordSeparators(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__AutoCompletionWordSeparators);
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

		QStringList _ret = QsciLexerDiff::autoCompletionWordSeparators();
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
			return QsciLexerDiff::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerDiff_BlockEnd(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__BlockEnd, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockEnd(int* style) const {

		return (const char*) QsciLexerDiff::blockEnd(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__BlockLookback == 0) {
			return QsciLexerDiff::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerDiff_BlockLookback(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__BlockLookback);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BlockLookback() const {

		return QsciLexerDiff::blockLookback();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__BlockStart == 0) {
			return QsciLexerDiff::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerDiff_BlockStart(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__BlockStart, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStart(int* style) const {

		return (const char*) QsciLexerDiff::blockStart(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__BlockStartKeyword == 0) {
			return QsciLexerDiff::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerDiff_BlockStartKeyword(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__BlockStartKeyword, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStartKeyword(int* style) const {

		return (const char*) QsciLexerDiff::blockStartKeyword(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BraceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__BraceStyle == 0) {
			return QsciLexerDiff::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerDiff_BraceStyle(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__BraceStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BraceStyle() const {

		return QsciLexerDiff::braceStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CaseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__CaseSensitive == 0) {
			return QsciLexerDiff::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerDiff_CaseSensitive(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__CaseSensitive);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CaseSensitive() const {

		return QsciLexerDiff::caseSensitive();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__Color == 0) {
			return QsciLexerDiff::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerDiff_Color(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__Color, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Color(int style) const {

		return new QColor(QsciLexerDiff::color(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__EolFill == 0) {
			return QsciLexerDiff::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerDiff_EolFill(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__EolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EolFill(int style) const {

		return QsciLexerDiff::eolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__Font == 0) {
			return QsciLexerDiff::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerDiff_Font(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__Font, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_Font(int style) const {

		return new QFont(QsciLexerDiff::font(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__IndentationGuideView == 0) {
			return QsciLexerDiff::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerDiff_IndentationGuideView(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__IndentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndentationGuideView() const {

		return QsciLexerDiff::indentationGuideView();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__Keywords == 0) {
			return QsciLexerDiff::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerDiff_Keywords(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__Keywords, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Keywords(int set) const {

		return (const char*) QsciLexerDiff::keywords(static_cast<int>(set));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__DefaultStyle == 0) {
			return QsciLexerDiff::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerDiff_DefaultStyle(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__DefaultStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DefaultStyle() const {

		return QsciLexerDiff::defaultStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__Description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerDiff_Description(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__Description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__Paper == 0) {
			return QsciLexerDiff::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerDiff_Paper(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__Paper, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Paper(int style) const {

		return new QColor(QsciLexerDiff::paper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__DefaultColorWithStyle == 0) {
			return QsciLexerDiff::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerDiff_DefaultColorWithStyle(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__DefaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultColorWithStyle(int style) const {

		return new QColor(QsciLexerDiff::defaultColor(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__DefaultEolFill == 0) {
			return QsciLexerDiff::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerDiff_DefaultEolFill(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__DefaultEolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DefaultEolFill(int style) const {

		return QsciLexerDiff::defaultEolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__DefaultFontWithStyle == 0) {
			return QsciLexerDiff::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerDiff_DefaultFontWithStyle(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__DefaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_DefaultFontWithStyle(int style) const {

		return new QFont(QsciLexerDiff::defaultFont(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__DefaultPaperWithStyle == 0) {
			return QsciLexerDiff::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerDiff_DefaultPaperWithStyle(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__DefaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultPaperWithStyle(int style) const {

		return new QColor(QsciLexerDiff::defaultPaper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__SetEditor == 0) {
			QsciLexerDiff::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerDiff_SetEditor(this, handle__SetEditor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEditor(QsciScintilla* editor) {

		QsciLexerDiff::setEditor(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RefreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__RefreshProperties == 0) {
			QsciLexerDiff::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerDiff_RefreshProperties(this, handle__RefreshProperties);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RefreshProperties() {

		QsciLexerDiff::refreshProperties();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StyleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__StyleBitsNeeded == 0) {
			return QsciLexerDiff::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerDiff_StyleBitsNeeded(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__StyleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StyleBitsNeeded() const {

		return QsciLexerDiff::styleBitsNeeded();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__WordCharacters == 0) {
			return QsciLexerDiff::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerDiff_WordCharacters(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__WordCharacters);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_WordCharacters() const {

		return (const char*) QsciLexerDiff::wordCharacters();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__SetAutoIndentStyle == 0) {
			QsciLexerDiff::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerDiff_SetAutoIndentStyle(this, handle__SetAutoIndentStyle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoIndentStyle(int autoindentstyle) {

		QsciLexerDiff::setAutoIndentStyle(static_cast<int>(autoindentstyle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__SetColor == 0) {
			QsciLexerDiff::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerDiff_SetColor(this, handle__SetColor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetColor(QColor* c, int style) {

		QsciLexerDiff::setColor(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__SetEolFill == 0) {
			QsciLexerDiff::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerDiff_SetEolFill(this, handle__SetEolFill, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEolFill(bool eoffill, int style) {

		QsciLexerDiff::setEolFill(eoffill, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__SetFont == 0) {
			QsciLexerDiff::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerDiff_SetFont(this, handle__SetFont, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFont(QFont* f, int style) {

		QsciLexerDiff::setFont(*f, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__SetPaper == 0) {
			QsciLexerDiff::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerDiff_SetPaper(this, handle__SetPaper, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPaper(QColor* c, int style) {

		QsciLexerDiff::setPaper(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__ReadProperties == 0) {
			return QsciLexerDiff::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerDiff_ReadProperties(this, handle__ReadProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ReadProperties(QSettings* qs, struct miqt_string prefix) {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerDiff::readProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__WriteProperties == 0) {
			return QsciLexerDiff::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerDiff_WriteProperties(const_cast<MiqtVirtualQsciLexerDiff*>(this), handle__WriteProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WriteProperties(QSettings* qs, struct miqt_string prefix) const {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerDiff::writeProperties(*qs, prefix_QString);

	}

};

QsciLexerDiff* QsciLexerDiff_new() {
	return new MiqtVirtualQsciLexerDiff();
}

QsciLexerDiff* QsciLexerDiff_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerDiff(parent);
}

void QsciLexerDiff_virtbase(QsciLexerDiff* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerDiff_MetaObject(const QsciLexerDiff* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerDiff_Metacast(QsciLexerDiff* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerDiff_Tr(const char* s) {
	QString _ret = QsciLexerDiff::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerDiff_TrUtf8(const char* s) {
	QString _ret = QsciLexerDiff::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerDiff_Language(const QsciLexerDiff* self) {
	return (const char*) self->language();
}

const char* QsciLexerDiff_Lexer(const QsciLexerDiff* self) {
	return (const char*) self->lexer();
}

const char* QsciLexerDiff_WordCharacters(const QsciLexerDiff* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerDiff_DefaultColor(const QsciLexerDiff* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

struct miqt_string QsciLexerDiff_Description(const QsciLexerDiff* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerDiff_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerDiff::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerDiff_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerDiff::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerDiff_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerDiff::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerDiff_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerDiff::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerDiff_override_virtual_Language(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__Language = slot;
}

void QsciLexerDiff_override_virtual_Lexer(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__Lexer = slot;
}

const char* QsciLexerDiff_virtualbase_Lexer(const void* self) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_Lexer();
}

void QsciLexerDiff_override_virtual_LexerId(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__LexerId = slot;
}

int QsciLexerDiff_virtualbase_LexerId(const void* self) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_LexerId();
}

void QsciLexerDiff_override_virtual_AutoCompletionFillups(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__AutoCompletionFillups = slot;
}

const char* QsciLexerDiff_virtualbase_AutoCompletionFillups(const void* self) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_AutoCompletionFillups();
}

void QsciLexerDiff_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__AutoCompletionWordSeparators = slot;
}

struct miqt_array /* of struct miqt_string */  QsciLexerDiff_virtualbase_AutoCompletionWordSeparators(const void* self) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_AutoCompletionWordSeparators();
}

void QsciLexerDiff_override_virtual_BlockEnd(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__BlockEnd = slot;
}

const char* QsciLexerDiff_virtualbase_BlockEnd(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_BlockEnd(style);
}

void QsciLexerDiff_override_virtual_BlockLookback(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__BlockLookback = slot;
}

int QsciLexerDiff_virtualbase_BlockLookback(const void* self) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_BlockLookback();
}

void QsciLexerDiff_override_virtual_BlockStart(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__BlockStart = slot;
}

const char* QsciLexerDiff_virtualbase_BlockStart(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_BlockStart(style);
}

void QsciLexerDiff_override_virtual_BlockStartKeyword(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__BlockStartKeyword = slot;
}

const char* QsciLexerDiff_virtualbase_BlockStartKeyword(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_BlockStartKeyword(style);
}

void QsciLexerDiff_override_virtual_BraceStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__BraceStyle = slot;
}

int QsciLexerDiff_virtualbase_BraceStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_BraceStyle();
}

void QsciLexerDiff_override_virtual_CaseSensitive(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__CaseSensitive = slot;
}

bool QsciLexerDiff_virtualbase_CaseSensitive(const void* self) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_CaseSensitive();
}

void QsciLexerDiff_override_virtual_Color(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__Color = slot;
}

QColor* QsciLexerDiff_virtualbase_Color(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_Color(style);
}

void QsciLexerDiff_override_virtual_EolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__EolFill = slot;
}

bool QsciLexerDiff_virtualbase_EolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_EolFill(style);
}

void QsciLexerDiff_override_virtual_Font(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__Font = slot;
}

QFont* QsciLexerDiff_virtualbase_Font(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_Font(style);
}

void QsciLexerDiff_override_virtual_IndentationGuideView(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__IndentationGuideView = slot;
}

int QsciLexerDiff_virtualbase_IndentationGuideView(const void* self) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_IndentationGuideView();
}

void QsciLexerDiff_override_virtual_Keywords(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__Keywords = slot;
}

const char* QsciLexerDiff_virtualbase_Keywords(const void* self, int set) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_Keywords(set);
}

void QsciLexerDiff_override_virtual_DefaultStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__DefaultStyle = slot;
}

int QsciLexerDiff_virtualbase_DefaultStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_DefaultStyle();
}

void QsciLexerDiff_override_virtual_Description(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__Description = slot;
}

void QsciLexerDiff_override_virtual_Paper(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__Paper = slot;
}

QColor* QsciLexerDiff_virtualbase_Paper(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_Paper(style);
}

void QsciLexerDiff_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__DefaultColorWithStyle = slot;
}

QColor* QsciLexerDiff_virtualbase_DefaultColorWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_DefaultColorWithStyle(style);
}

void QsciLexerDiff_override_virtual_DefaultEolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__DefaultEolFill = slot;
}

bool QsciLexerDiff_virtualbase_DefaultEolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_DefaultEolFill(style);
}

void QsciLexerDiff_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__DefaultFontWithStyle = slot;
}

QFont* QsciLexerDiff_virtualbase_DefaultFontWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_DefaultFontWithStyle(style);
}

void QsciLexerDiff_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__DefaultPaperWithStyle = slot;
}

QColor* QsciLexerDiff_virtualbase_DefaultPaperWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_DefaultPaperWithStyle(style);
}

void QsciLexerDiff_override_virtual_SetEditor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__SetEditor = slot;
}

void QsciLexerDiff_virtualbase_SetEditor(void* self, QsciScintilla* editor) {
	( (MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_SetEditor(editor);
}

void QsciLexerDiff_override_virtual_RefreshProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__RefreshProperties = slot;
}

void QsciLexerDiff_virtualbase_RefreshProperties(void* self) {
	( (MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_RefreshProperties();
}

void QsciLexerDiff_override_virtual_StyleBitsNeeded(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__StyleBitsNeeded = slot;
}

int QsciLexerDiff_virtualbase_StyleBitsNeeded(const void* self) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_StyleBitsNeeded();
}

void QsciLexerDiff_override_virtual_WordCharacters(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__WordCharacters = slot;
}

const char* QsciLexerDiff_virtualbase_WordCharacters(const void* self) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_WordCharacters();
}

void QsciLexerDiff_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__SetAutoIndentStyle = slot;
}

void QsciLexerDiff_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle) {
	( (MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_SetAutoIndentStyle(autoindentstyle);
}

void QsciLexerDiff_override_virtual_SetColor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__SetColor = slot;
}

void QsciLexerDiff_virtualbase_SetColor(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_SetColor(c, style);
}

void QsciLexerDiff_override_virtual_SetEolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__SetEolFill = slot;
}

void QsciLexerDiff_virtualbase_SetEolFill(void* self, bool eoffill, int style) {
	( (MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_SetEolFill(eoffill, style);
}

void QsciLexerDiff_override_virtual_SetFont(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__SetFont = slot;
}

void QsciLexerDiff_virtualbase_SetFont(void* self, QFont* f, int style) {
	( (MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_SetFont(f, style);
}

void QsciLexerDiff_override_virtual_SetPaper(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__SetPaper = slot;
}

void QsciLexerDiff_virtualbase_SetPaper(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_SetPaper(c, style);
}

void QsciLexerDiff_override_virtual_ReadProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__ReadProperties = slot;
}

bool QsciLexerDiff_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_ReadProperties(qs, prefix);
}

void QsciLexerDiff_override_virtual_WriteProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerDiff*>( (QsciLexerDiff*)(self) )->handle__WriteProperties = slot;
}

bool QsciLexerDiff_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (const MiqtVirtualQsciLexerDiff*)(self) )->virtualbase_WriteProperties(qs, prefix);
}

void QsciLexerDiff_Delete(QsciLexerDiff* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQsciLexerDiff*>( self );
	} else {
		delete self;
	}
}

