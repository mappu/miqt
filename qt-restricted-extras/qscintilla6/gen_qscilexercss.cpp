#include <QColor>
#include <QFont>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexercss.h>
#include "gen_qscilexercss.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerCSS_SetFoldComments(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerCSS_SetFoldCompact(void*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerCSS_Language(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerCSS_Lexer(void*, intptr_t);
int miqt_exec_callback_QsciLexerCSS_LexerId(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerCSS_AutoCompletionFillups(void*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerCSS_AutoCompletionWordSeparators(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerCSS_BlockEnd(void*, intptr_t, int*);
int miqt_exec_callback_QsciLexerCSS_BlockLookback(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerCSS_BlockStart(void*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerCSS_BlockStartKeyword(void*, intptr_t, int*);
int miqt_exec_callback_QsciLexerCSS_BraceStyle(void*, intptr_t);
bool miqt_exec_callback_QsciLexerCSS_CaseSensitive(void*, intptr_t);
QColor* miqt_exec_callback_QsciLexerCSS_Color(void*, intptr_t, int);
bool miqt_exec_callback_QsciLexerCSS_EolFill(void*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerCSS_Font(void*, intptr_t, int);
int miqt_exec_callback_QsciLexerCSS_IndentationGuideView(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerCSS_Keywords(void*, intptr_t, int);
int miqt_exec_callback_QsciLexerCSS_DefaultStyle(void*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerCSS_Description(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerCSS_Paper(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerCSS_DefaultColorWithStyle(void*, intptr_t, int);
bool miqt_exec_callback_QsciLexerCSS_DefaultEolFill(void*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerCSS_DefaultFontWithStyle(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerCSS_DefaultPaperWithStyle(void*, intptr_t, int);
void miqt_exec_callback_QsciLexerCSS_SetEditor(void*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerCSS_RefreshProperties(void*, intptr_t);
int miqt_exec_callback_QsciLexerCSS_StyleBitsNeeded(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerCSS_WordCharacters(void*, intptr_t);
void miqt_exec_callback_QsciLexerCSS_SetAutoIndentStyle(void*, intptr_t, int);
void miqt_exec_callback_QsciLexerCSS_SetColor(void*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerCSS_SetEolFill(void*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerCSS_SetFont(void*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerCSS_SetPaper(void*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerCSS_ReadProperties(void*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerCSS_WriteProperties(void*, intptr_t, QSettings*, struct miqt_string);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerCSS : public virtual QsciLexerCSS {
public:

	MiqtVirtualQsciLexerCSS(): QsciLexerCSS() {};
	MiqtVirtualQsciLexerCSS(QObject* parent): QsciLexerCSS(parent) {};

	virtual ~MiqtVirtualQsciLexerCSS() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldComments = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (handle__SetFoldComments == 0) {
			QsciLexerCSS::setFoldComments(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerCSS_SetFoldComments(this, handle__SetFoldComments, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldComments(bool fold) {

		QsciLexerCSS::setFoldComments(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__SetFoldCompact == 0) {
			QsciLexerCSS::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerCSS_SetFoldCompact(this, handle__SetFoldCompact, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldCompact(bool fold) {

		QsciLexerCSS::setFoldCompact(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__Language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerCSS_Language(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__Language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__Lexer == 0) {
			return QsciLexerCSS::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerCSS_Lexer(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__Lexer);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Lexer() const {

		return (const char*) QsciLexerCSS::lexer();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__LexerId == 0) {
			return QsciLexerCSS::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCSS_LexerId(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__LexerId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_LexerId() const {

		return QsciLexerCSS::lexerId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__AutoCompletionFillups == 0) {
			return QsciLexerCSS::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerCSS_AutoCompletionFillups(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__AutoCompletionFillups);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_AutoCompletionFillups() const {

		return (const char*) QsciLexerCSS::autoCompletionFillups();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__AutoCompletionWordSeparators == 0) {
			return QsciLexerCSS::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerCSS_AutoCompletionWordSeparators(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__AutoCompletionWordSeparators);
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

		QStringList _ret = QsciLexerCSS::autoCompletionWordSeparators();
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
			return QsciLexerCSS::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerCSS_BlockEnd(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__BlockEnd, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockEnd(int* style) const {

		return (const char*) QsciLexerCSS::blockEnd(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__BlockLookback == 0) {
			return QsciLexerCSS::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCSS_BlockLookback(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__BlockLookback);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BlockLookback() const {

		return QsciLexerCSS::blockLookback();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__BlockStart == 0) {
			return QsciLexerCSS::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerCSS_BlockStart(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__BlockStart, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStart(int* style) const {

		return (const char*) QsciLexerCSS::blockStart(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__BlockStartKeyword == 0) {
			return QsciLexerCSS::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerCSS_BlockStartKeyword(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__BlockStartKeyword, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStartKeyword(int* style) const {

		return (const char*) QsciLexerCSS::blockStartKeyword(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BraceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__BraceStyle == 0) {
			return QsciLexerCSS::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCSS_BraceStyle(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__BraceStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BraceStyle() const {

		return QsciLexerCSS::braceStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CaseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__CaseSensitive == 0) {
			return QsciLexerCSS::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerCSS_CaseSensitive(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__CaseSensitive);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CaseSensitive() const {

		return QsciLexerCSS::caseSensitive();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__Color == 0) {
			return QsciLexerCSS::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerCSS_Color(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__Color, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Color(int style) const {

		return new QColor(QsciLexerCSS::color(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__EolFill == 0) {
			return QsciLexerCSS::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerCSS_EolFill(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__EolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EolFill(int style) const {

		return QsciLexerCSS::eolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__Font == 0) {
			return QsciLexerCSS::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerCSS_Font(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__Font, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_Font(int style) const {

		return new QFont(QsciLexerCSS::font(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__IndentationGuideView == 0) {
			return QsciLexerCSS::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCSS_IndentationGuideView(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__IndentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndentationGuideView() const {

		return QsciLexerCSS::indentationGuideView();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__Keywords == 0) {
			return QsciLexerCSS::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerCSS_Keywords(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__Keywords, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Keywords(int set) const {

		return (const char*) QsciLexerCSS::keywords(static_cast<int>(set));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__DefaultStyle == 0) {
			return QsciLexerCSS::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCSS_DefaultStyle(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__DefaultStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DefaultStyle() const {

		return QsciLexerCSS::defaultStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__Description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerCSS_Description(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__Description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__Paper == 0) {
			return QsciLexerCSS::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerCSS_Paper(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__Paper, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Paper(int style) const {

		return new QColor(QsciLexerCSS::paper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__DefaultColorWithStyle == 0) {
			return QsciLexerCSS::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerCSS_DefaultColorWithStyle(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__DefaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultColorWithStyle(int style) const {

		return new QColor(QsciLexerCSS::defaultColor(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__DefaultEolFill == 0) {
			return QsciLexerCSS::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerCSS_DefaultEolFill(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__DefaultEolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DefaultEolFill(int style) const {

		return QsciLexerCSS::defaultEolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__DefaultFontWithStyle == 0) {
			return QsciLexerCSS::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerCSS_DefaultFontWithStyle(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__DefaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_DefaultFontWithStyle(int style) const {

		return new QFont(QsciLexerCSS::defaultFont(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__DefaultPaperWithStyle == 0) {
			return QsciLexerCSS::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerCSS_DefaultPaperWithStyle(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__DefaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultPaperWithStyle(int style) const {

		return new QColor(QsciLexerCSS::defaultPaper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__SetEditor == 0) {
			QsciLexerCSS::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerCSS_SetEditor(this, handle__SetEditor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEditor(QsciScintilla* editor) {

		QsciLexerCSS::setEditor(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RefreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__RefreshProperties == 0) {
			QsciLexerCSS::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerCSS_RefreshProperties(this, handle__RefreshProperties);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RefreshProperties() {

		QsciLexerCSS::refreshProperties();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StyleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__StyleBitsNeeded == 0) {
			return QsciLexerCSS::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCSS_StyleBitsNeeded(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__StyleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StyleBitsNeeded() const {

		return QsciLexerCSS::styleBitsNeeded();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__WordCharacters == 0) {
			return QsciLexerCSS::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerCSS_WordCharacters(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__WordCharacters);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_WordCharacters() const {

		return (const char*) QsciLexerCSS::wordCharacters();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__SetAutoIndentStyle == 0) {
			QsciLexerCSS::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerCSS_SetAutoIndentStyle(this, handle__SetAutoIndentStyle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoIndentStyle(int autoindentstyle) {

		QsciLexerCSS::setAutoIndentStyle(static_cast<int>(autoindentstyle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__SetColor == 0) {
			QsciLexerCSS::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerCSS_SetColor(this, handle__SetColor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetColor(QColor* c, int style) {

		QsciLexerCSS::setColor(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__SetEolFill == 0) {
			QsciLexerCSS::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerCSS_SetEolFill(this, handle__SetEolFill, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEolFill(bool eoffill, int style) {

		QsciLexerCSS::setEolFill(eoffill, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__SetFont == 0) {
			QsciLexerCSS::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerCSS_SetFont(this, handle__SetFont, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFont(QFont* f, int style) {

		QsciLexerCSS::setFont(*f, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__SetPaper == 0) {
			QsciLexerCSS::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerCSS_SetPaper(this, handle__SetPaper, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPaper(QColor* c, int style) {

		QsciLexerCSS::setPaper(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__ReadProperties == 0) {
			return QsciLexerCSS::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerCSS_ReadProperties(this, handle__ReadProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ReadProperties(QSettings* qs, struct miqt_string prefix) {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerCSS::readProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__WriteProperties == 0) {
			return QsciLexerCSS::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerCSS_WriteProperties(const_cast<MiqtVirtualQsciLexerCSS*>(this), handle__WriteProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WriteProperties(QSettings* qs, struct miqt_string prefix) const {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerCSS::writeProperties(*qs, prefix_QString);

	}

};

QsciLexerCSS* QsciLexerCSS_new() {
	return new MiqtVirtualQsciLexerCSS();
}

QsciLexerCSS* QsciLexerCSS_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerCSS(parent);
}

void QsciLexerCSS_virtbase(QsciLexerCSS* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerCSS_MetaObject(const QsciLexerCSS* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerCSS_Metacast(QsciLexerCSS* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerCSS_Tr(const char* s) {
	QString _ret = QsciLexerCSS::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerCSS_Language(const QsciLexerCSS* self) {
	return (const char*) self->language();
}

const char* QsciLexerCSS_Lexer(const QsciLexerCSS* self) {
	return (const char*) self->lexer();
}

const char* QsciLexerCSS_BlockEnd(const QsciLexerCSS* self) {
	return (const char*) self->blockEnd();
}

const char* QsciLexerCSS_BlockStart(const QsciLexerCSS* self) {
	return (const char*) self->blockStart();
}

const char* QsciLexerCSS_WordCharacters(const QsciLexerCSS* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerCSS_DefaultColor(const QsciLexerCSS* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerCSS_DefaultFont(const QsciLexerCSS* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

const char* QsciLexerCSS_Keywords(const QsciLexerCSS* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerCSS_Description(const QsciLexerCSS* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerCSS_RefreshProperties(QsciLexerCSS* self) {
	self->refreshProperties();
}

bool QsciLexerCSS_FoldComments(const QsciLexerCSS* self) {
	return self->foldComments();
}

bool QsciLexerCSS_FoldCompact(const QsciLexerCSS* self) {
	return self->foldCompact();
}

void QsciLexerCSS_SetHSSLanguage(QsciLexerCSS* self, bool enabled) {
	self->setHSSLanguage(enabled);
}

bool QsciLexerCSS_HSSLanguage(const QsciLexerCSS* self) {
	return self->HSSLanguage();
}

void QsciLexerCSS_SetLessLanguage(QsciLexerCSS* self, bool enabled) {
	self->setLessLanguage(enabled);
}

bool QsciLexerCSS_LessLanguage(const QsciLexerCSS* self) {
	return self->LessLanguage();
}

void QsciLexerCSS_SetSCSSLanguage(QsciLexerCSS* self, bool enabled) {
	self->setSCSSLanguage(enabled);
}

bool QsciLexerCSS_SCSSLanguage(const QsciLexerCSS* self) {
	return self->SCSSLanguage();
}

void QsciLexerCSS_SetFoldComments(QsciLexerCSS* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerCSS_SetFoldCompact(QsciLexerCSS* self, bool fold) {
	self->setFoldCompact(fold);
}

struct miqt_string QsciLexerCSS_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerCSS::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCSS_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerCSS::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerCSS_BlockEnd1(const QsciLexerCSS* self, int* style) {
	return (const char*) self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerCSS_BlockStart1(const QsciLexerCSS* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

void QsciLexerCSS_override_virtual_SetFoldComments(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__SetFoldComments = slot;
}

void QsciLexerCSS_virtualbase_SetFoldComments(void* self, bool fold) {
	( (MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_SetFoldComments(fold);
}

void QsciLexerCSS_override_virtual_SetFoldCompact(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__SetFoldCompact = slot;
}

void QsciLexerCSS_virtualbase_SetFoldCompact(void* self, bool fold) {
	( (MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_SetFoldCompact(fold);
}

void QsciLexerCSS_override_virtual_Language(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__Language = slot;
}

void QsciLexerCSS_override_virtual_Lexer(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__Lexer = slot;
}

const char* QsciLexerCSS_virtualbase_Lexer(const void* self) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_Lexer();
}

void QsciLexerCSS_override_virtual_LexerId(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__LexerId = slot;
}

int QsciLexerCSS_virtualbase_LexerId(const void* self) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_LexerId();
}

void QsciLexerCSS_override_virtual_AutoCompletionFillups(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__AutoCompletionFillups = slot;
}

const char* QsciLexerCSS_virtualbase_AutoCompletionFillups(const void* self) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_AutoCompletionFillups();
}

void QsciLexerCSS_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__AutoCompletionWordSeparators = slot;
}

struct miqt_array /* of struct miqt_string */  QsciLexerCSS_virtualbase_AutoCompletionWordSeparators(const void* self) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_AutoCompletionWordSeparators();
}

void QsciLexerCSS_override_virtual_BlockEnd(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__BlockEnd = slot;
}

const char* QsciLexerCSS_virtualbase_BlockEnd(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_BlockEnd(style);
}

void QsciLexerCSS_override_virtual_BlockLookback(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__BlockLookback = slot;
}

int QsciLexerCSS_virtualbase_BlockLookback(const void* self) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_BlockLookback();
}

void QsciLexerCSS_override_virtual_BlockStart(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__BlockStart = slot;
}

const char* QsciLexerCSS_virtualbase_BlockStart(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_BlockStart(style);
}

void QsciLexerCSS_override_virtual_BlockStartKeyword(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__BlockStartKeyword = slot;
}

const char* QsciLexerCSS_virtualbase_BlockStartKeyword(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_BlockStartKeyword(style);
}

void QsciLexerCSS_override_virtual_BraceStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__BraceStyle = slot;
}

int QsciLexerCSS_virtualbase_BraceStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_BraceStyle();
}

void QsciLexerCSS_override_virtual_CaseSensitive(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__CaseSensitive = slot;
}

bool QsciLexerCSS_virtualbase_CaseSensitive(const void* self) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_CaseSensitive();
}

void QsciLexerCSS_override_virtual_Color(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__Color = slot;
}

QColor* QsciLexerCSS_virtualbase_Color(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_Color(style);
}

void QsciLexerCSS_override_virtual_EolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__EolFill = slot;
}

bool QsciLexerCSS_virtualbase_EolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_EolFill(style);
}

void QsciLexerCSS_override_virtual_Font(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__Font = slot;
}

QFont* QsciLexerCSS_virtualbase_Font(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_Font(style);
}

void QsciLexerCSS_override_virtual_IndentationGuideView(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__IndentationGuideView = slot;
}

int QsciLexerCSS_virtualbase_IndentationGuideView(const void* self) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_IndentationGuideView();
}

void QsciLexerCSS_override_virtual_Keywords(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__Keywords = slot;
}

const char* QsciLexerCSS_virtualbase_Keywords(const void* self, int set) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_Keywords(set);
}

void QsciLexerCSS_override_virtual_DefaultStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__DefaultStyle = slot;
}

int QsciLexerCSS_virtualbase_DefaultStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_DefaultStyle();
}

void QsciLexerCSS_override_virtual_Description(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__Description = slot;
}

void QsciLexerCSS_override_virtual_Paper(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__Paper = slot;
}

QColor* QsciLexerCSS_virtualbase_Paper(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_Paper(style);
}

void QsciLexerCSS_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__DefaultColorWithStyle = slot;
}

QColor* QsciLexerCSS_virtualbase_DefaultColorWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_DefaultColorWithStyle(style);
}

void QsciLexerCSS_override_virtual_DefaultEolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__DefaultEolFill = slot;
}

bool QsciLexerCSS_virtualbase_DefaultEolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_DefaultEolFill(style);
}

void QsciLexerCSS_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__DefaultFontWithStyle = slot;
}

QFont* QsciLexerCSS_virtualbase_DefaultFontWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_DefaultFontWithStyle(style);
}

void QsciLexerCSS_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__DefaultPaperWithStyle = slot;
}

QColor* QsciLexerCSS_virtualbase_DefaultPaperWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_DefaultPaperWithStyle(style);
}

void QsciLexerCSS_override_virtual_SetEditor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__SetEditor = slot;
}

void QsciLexerCSS_virtualbase_SetEditor(void* self, QsciScintilla* editor) {
	( (MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_SetEditor(editor);
}

void QsciLexerCSS_override_virtual_RefreshProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__RefreshProperties = slot;
}

void QsciLexerCSS_virtualbase_RefreshProperties(void* self) {
	( (MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_RefreshProperties();
}

void QsciLexerCSS_override_virtual_StyleBitsNeeded(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__StyleBitsNeeded = slot;
}

int QsciLexerCSS_virtualbase_StyleBitsNeeded(const void* self) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_StyleBitsNeeded();
}

void QsciLexerCSS_override_virtual_WordCharacters(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__WordCharacters = slot;
}

const char* QsciLexerCSS_virtualbase_WordCharacters(const void* self) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_WordCharacters();
}

void QsciLexerCSS_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__SetAutoIndentStyle = slot;
}

void QsciLexerCSS_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle) {
	( (MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_SetAutoIndentStyle(autoindentstyle);
}

void QsciLexerCSS_override_virtual_SetColor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__SetColor = slot;
}

void QsciLexerCSS_virtualbase_SetColor(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_SetColor(c, style);
}

void QsciLexerCSS_override_virtual_SetEolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__SetEolFill = slot;
}

void QsciLexerCSS_virtualbase_SetEolFill(void* self, bool eoffill, int style) {
	( (MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_SetEolFill(eoffill, style);
}

void QsciLexerCSS_override_virtual_SetFont(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__SetFont = slot;
}

void QsciLexerCSS_virtualbase_SetFont(void* self, QFont* f, int style) {
	( (MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_SetFont(f, style);
}

void QsciLexerCSS_override_virtual_SetPaper(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__SetPaper = slot;
}

void QsciLexerCSS_virtualbase_SetPaper(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_SetPaper(c, style);
}

void QsciLexerCSS_override_virtual_ReadProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__ReadProperties = slot;
}

bool QsciLexerCSS_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_ReadProperties(qs, prefix);
}

void QsciLexerCSS_override_virtual_WriteProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSS*>( (QsciLexerCSS*)(self) )->handle__WriteProperties = slot;
}

bool QsciLexerCSS_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (const MiqtVirtualQsciLexerCSS*)(self) )->virtualbase_WriteProperties(qs, prefix);
}

void QsciLexerCSS_Delete(QsciLexerCSS* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQsciLexerCSS*>( self );
	} else {
		delete self;
	}
}

