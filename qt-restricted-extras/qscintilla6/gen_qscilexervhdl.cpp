#include <QColor>
#include <QFont>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexervhdl.h>
#include "gen_qscilexervhdl.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerVHDL_SetFoldComments(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerVHDL_SetFoldCompact(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerVHDL_SetFoldAtElse(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerVHDL_SetFoldAtBegin(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerVHDL_SetFoldAtParenthesis(void*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerVHDL_Language(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerVHDL_Lexer(void*, intptr_t);
int miqt_exec_callback_QsciLexerVHDL_LexerId(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerVHDL_AutoCompletionFillups(void*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerVHDL_AutoCompletionWordSeparators(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerVHDL_BlockEnd(void*, intptr_t, int*);
int miqt_exec_callback_QsciLexerVHDL_BlockLookback(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerVHDL_BlockStart(void*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerVHDL_BlockStartKeyword(void*, intptr_t, int*);
int miqt_exec_callback_QsciLexerVHDL_BraceStyle(void*, intptr_t);
bool miqt_exec_callback_QsciLexerVHDL_CaseSensitive(void*, intptr_t);
QColor* miqt_exec_callback_QsciLexerVHDL_Color(void*, intptr_t, int);
bool miqt_exec_callback_QsciLexerVHDL_EolFill(void*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerVHDL_Font(void*, intptr_t, int);
int miqt_exec_callback_QsciLexerVHDL_IndentationGuideView(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerVHDL_Keywords(void*, intptr_t, int);
int miqt_exec_callback_QsciLexerVHDL_DefaultStyle(void*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerVHDL_Description(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerVHDL_Paper(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerVHDL_DefaultColorWithStyle(void*, intptr_t, int);
bool miqt_exec_callback_QsciLexerVHDL_DefaultEolFill(void*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerVHDL_DefaultFontWithStyle(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerVHDL_DefaultPaperWithStyle(void*, intptr_t, int);
void miqt_exec_callback_QsciLexerVHDL_SetEditor(void*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerVHDL_RefreshProperties(void*, intptr_t);
int miqt_exec_callback_QsciLexerVHDL_StyleBitsNeeded(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerVHDL_WordCharacters(void*, intptr_t);
void miqt_exec_callback_QsciLexerVHDL_SetAutoIndentStyle(void*, intptr_t, int);
void miqt_exec_callback_QsciLexerVHDL_SetColor(void*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerVHDL_SetEolFill(void*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerVHDL_SetFont(void*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerVHDL_SetPaper(void*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerVHDL_ReadProperties(void*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerVHDL_WriteProperties(void*, intptr_t, QSettings*, struct miqt_string);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerVHDL : public virtual QsciLexerVHDL {
public:

	MiqtVirtualQsciLexerVHDL(): QsciLexerVHDL() {};
	MiqtVirtualQsciLexerVHDL(QObject* parent): QsciLexerVHDL(parent) {};

	virtual ~MiqtVirtualQsciLexerVHDL() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldComments = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (handle__SetFoldComments == 0) {
			QsciLexerVHDL::setFoldComments(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerVHDL_SetFoldComments(this, handle__SetFoldComments, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldComments(bool fold) {

		QsciLexerVHDL::setFoldComments(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__SetFoldCompact == 0) {
			QsciLexerVHDL::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerVHDL_SetFoldCompact(this, handle__SetFoldCompact, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldCompact(bool fold) {

		QsciLexerVHDL::setFoldCompact(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldAtElse = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldAtElse(bool fold) override {
		if (handle__SetFoldAtElse == 0) {
			QsciLexerVHDL::setFoldAtElse(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerVHDL_SetFoldAtElse(this, handle__SetFoldAtElse, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldAtElse(bool fold) {

		QsciLexerVHDL::setFoldAtElse(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldAtBegin = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldAtBegin(bool fold) override {
		if (handle__SetFoldAtBegin == 0) {
			QsciLexerVHDL::setFoldAtBegin(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerVHDL_SetFoldAtBegin(this, handle__SetFoldAtBegin, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldAtBegin(bool fold) {

		QsciLexerVHDL::setFoldAtBegin(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldAtParenthesis = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldAtParenthesis(bool fold) override {
		if (handle__SetFoldAtParenthesis == 0) {
			QsciLexerVHDL::setFoldAtParenthesis(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerVHDL_SetFoldAtParenthesis(this, handle__SetFoldAtParenthesis, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldAtParenthesis(bool fold) {

		QsciLexerVHDL::setFoldAtParenthesis(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__Language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_Language(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__Language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__Lexer == 0) {
			return QsciLexerVHDL::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_Lexer(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__Lexer);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Lexer() const {

		return (const char*) QsciLexerVHDL::lexer();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__LexerId == 0) {
			return QsciLexerVHDL::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerVHDL_LexerId(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__LexerId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_LexerId() const {

		return QsciLexerVHDL::lexerId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__AutoCompletionFillups == 0) {
			return QsciLexerVHDL::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_AutoCompletionFillups(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__AutoCompletionFillups);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_AutoCompletionFillups() const {

		return (const char*) QsciLexerVHDL::autoCompletionFillups();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__AutoCompletionWordSeparators == 0) {
			return QsciLexerVHDL::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerVHDL_AutoCompletionWordSeparators(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__AutoCompletionWordSeparators);
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

		QStringList _ret = QsciLexerVHDL::autoCompletionWordSeparators();
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
			return QsciLexerVHDL::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_BlockEnd(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__BlockEnd, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockEnd(int* style) const {

		return (const char*) QsciLexerVHDL::blockEnd(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__BlockLookback == 0) {
			return QsciLexerVHDL::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerVHDL_BlockLookback(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__BlockLookback);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BlockLookback() const {

		return QsciLexerVHDL::blockLookback();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__BlockStart == 0) {
			return QsciLexerVHDL::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_BlockStart(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__BlockStart, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStart(int* style) const {

		return (const char*) QsciLexerVHDL::blockStart(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__BlockStartKeyword == 0) {
			return QsciLexerVHDL::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_BlockStartKeyword(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__BlockStartKeyword, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStartKeyword(int* style) const {

		return (const char*) QsciLexerVHDL::blockStartKeyword(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BraceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__BraceStyle == 0) {
			return QsciLexerVHDL::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerVHDL_BraceStyle(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__BraceStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BraceStyle() const {

		return QsciLexerVHDL::braceStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CaseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__CaseSensitive == 0) {
			return QsciLexerVHDL::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerVHDL_CaseSensitive(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__CaseSensitive);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CaseSensitive() const {

		return QsciLexerVHDL::caseSensitive();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__Color == 0) {
			return QsciLexerVHDL::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerVHDL_Color(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__Color, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Color(int style) const {

		return new QColor(QsciLexerVHDL::color(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__EolFill == 0) {
			return QsciLexerVHDL::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerVHDL_EolFill(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__EolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EolFill(int style) const {

		return QsciLexerVHDL::eolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__Font == 0) {
			return QsciLexerVHDL::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerVHDL_Font(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__Font, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_Font(int style) const {

		return new QFont(QsciLexerVHDL::font(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__IndentationGuideView == 0) {
			return QsciLexerVHDL::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerVHDL_IndentationGuideView(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__IndentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndentationGuideView() const {

		return QsciLexerVHDL::indentationGuideView();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__Keywords == 0) {
			return QsciLexerVHDL::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_Keywords(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__Keywords, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Keywords(int set) const {

		return (const char*) QsciLexerVHDL::keywords(static_cast<int>(set));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__DefaultStyle == 0) {
			return QsciLexerVHDL::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerVHDL_DefaultStyle(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__DefaultStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DefaultStyle() const {

		return QsciLexerVHDL::defaultStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__Description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerVHDL_Description(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__Description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__Paper == 0) {
			return QsciLexerVHDL::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerVHDL_Paper(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__Paper, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Paper(int style) const {

		return new QColor(QsciLexerVHDL::paper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__DefaultColorWithStyle == 0) {
			return QsciLexerVHDL::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerVHDL_DefaultColorWithStyle(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__DefaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultColorWithStyle(int style) const {

		return new QColor(QsciLexerVHDL::defaultColor(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__DefaultEolFill == 0) {
			return QsciLexerVHDL::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerVHDL_DefaultEolFill(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__DefaultEolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DefaultEolFill(int style) const {

		return QsciLexerVHDL::defaultEolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__DefaultFontWithStyle == 0) {
			return QsciLexerVHDL::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerVHDL_DefaultFontWithStyle(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__DefaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_DefaultFontWithStyle(int style) const {

		return new QFont(QsciLexerVHDL::defaultFont(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__DefaultPaperWithStyle == 0) {
			return QsciLexerVHDL::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerVHDL_DefaultPaperWithStyle(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__DefaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultPaperWithStyle(int style) const {

		return new QColor(QsciLexerVHDL::defaultPaper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__SetEditor == 0) {
			QsciLexerVHDL::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerVHDL_SetEditor(this, handle__SetEditor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEditor(QsciScintilla* editor) {

		QsciLexerVHDL::setEditor(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RefreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__RefreshProperties == 0) {
			QsciLexerVHDL::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerVHDL_RefreshProperties(this, handle__RefreshProperties);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RefreshProperties() {

		QsciLexerVHDL::refreshProperties();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StyleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__StyleBitsNeeded == 0) {
			return QsciLexerVHDL::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerVHDL_StyleBitsNeeded(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__StyleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StyleBitsNeeded() const {

		return QsciLexerVHDL::styleBitsNeeded();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__WordCharacters == 0) {
			return QsciLexerVHDL::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_WordCharacters(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__WordCharacters);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_WordCharacters() const {

		return (const char*) QsciLexerVHDL::wordCharacters();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__SetAutoIndentStyle == 0) {
			QsciLexerVHDL::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerVHDL_SetAutoIndentStyle(this, handle__SetAutoIndentStyle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoIndentStyle(int autoindentstyle) {

		QsciLexerVHDL::setAutoIndentStyle(static_cast<int>(autoindentstyle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__SetColor == 0) {
			QsciLexerVHDL::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerVHDL_SetColor(this, handle__SetColor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetColor(QColor* c, int style) {

		QsciLexerVHDL::setColor(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__SetEolFill == 0) {
			QsciLexerVHDL::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerVHDL_SetEolFill(this, handle__SetEolFill, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEolFill(bool eoffill, int style) {

		QsciLexerVHDL::setEolFill(eoffill, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__SetFont == 0) {
			QsciLexerVHDL::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerVHDL_SetFont(this, handle__SetFont, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFont(QFont* f, int style) {

		QsciLexerVHDL::setFont(*f, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__SetPaper == 0) {
			QsciLexerVHDL::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerVHDL_SetPaper(this, handle__SetPaper, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPaper(QColor* c, int style) {

		QsciLexerVHDL::setPaper(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__ReadProperties == 0) {
			return QsciLexerVHDL::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerVHDL_ReadProperties(this, handle__ReadProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ReadProperties(QSettings* qs, struct miqt_string prefix) {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerVHDL::readProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__WriteProperties == 0) {
			return QsciLexerVHDL::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerVHDL_WriteProperties(const_cast<MiqtVirtualQsciLexerVHDL*>(this), handle__WriteProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WriteProperties(QSettings* qs, struct miqt_string prefix) const {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerVHDL::writeProperties(*qs, prefix_QString);

	}

};

QsciLexerVHDL* QsciLexerVHDL_new() {
	return new MiqtVirtualQsciLexerVHDL();
}

QsciLexerVHDL* QsciLexerVHDL_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerVHDL(parent);
}

void QsciLexerVHDL_virtbase(QsciLexerVHDL* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerVHDL_MetaObject(const QsciLexerVHDL* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerVHDL_Metacast(QsciLexerVHDL* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerVHDL_Tr(const char* s) {
	QString _ret = QsciLexerVHDL::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerVHDL_Language(const QsciLexerVHDL* self) {
	return (const char*) self->language();
}

const char* QsciLexerVHDL_Lexer(const QsciLexerVHDL* self) {
	return (const char*) self->lexer();
}

int QsciLexerVHDL_BraceStyle(const QsciLexerVHDL* self) {
	return self->braceStyle();
}

QColor* QsciLexerVHDL_DefaultColor(const QsciLexerVHDL* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerVHDL_DefaultEolFill(const QsciLexerVHDL* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerVHDL_DefaultFont(const QsciLexerVHDL* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerVHDL_DefaultPaper(const QsciLexerVHDL* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerVHDL_Keywords(const QsciLexerVHDL* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerVHDL_Description(const QsciLexerVHDL* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerVHDL_RefreshProperties(QsciLexerVHDL* self) {
	self->refreshProperties();
}

bool QsciLexerVHDL_FoldComments(const QsciLexerVHDL* self) {
	return self->foldComments();
}

bool QsciLexerVHDL_FoldCompact(const QsciLexerVHDL* self) {
	return self->foldCompact();
}

bool QsciLexerVHDL_FoldAtElse(const QsciLexerVHDL* self) {
	return self->foldAtElse();
}

bool QsciLexerVHDL_FoldAtBegin(const QsciLexerVHDL* self) {
	return self->foldAtBegin();
}

bool QsciLexerVHDL_FoldAtParenthesis(const QsciLexerVHDL* self) {
	return self->foldAtParenthesis();
}

void QsciLexerVHDL_SetFoldComments(QsciLexerVHDL* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerVHDL_SetFoldCompact(QsciLexerVHDL* self, bool fold) {
	self->setFoldCompact(fold);
}

void QsciLexerVHDL_SetFoldAtElse(QsciLexerVHDL* self, bool fold) {
	self->setFoldAtElse(fold);
}

void QsciLexerVHDL_SetFoldAtBegin(QsciLexerVHDL* self, bool fold) {
	self->setFoldAtBegin(fold);
}

void QsciLexerVHDL_SetFoldAtParenthesis(QsciLexerVHDL* self, bool fold) {
	self->setFoldAtParenthesis(fold);
}

struct miqt_string QsciLexerVHDL_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerVHDL::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerVHDL_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerVHDL::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerVHDL_override_virtual_SetFoldComments(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__SetFoldComments = slot;
}

void QsciLexerVHDL_virtualbase_SetFoldComments(void* self, bool fold) {
	( (MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_SetFoldComments(fold);
}

void QsciLexerVHDL_override_virtual_SetFoldCompact(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__SetFoldCompact = slot;
}

void QsciLexerVHDL_virtualbase_SetFoldCompact(void* self, bool fold) {
	( (MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_SetFoldCompact(fold);
}

void QsciLexerVHDL_override_virtual_SetFoldAtElse(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__SetFoldAtElse = slot;
}

void QsciLexerVHDL_virtualbase_SetFoldAtElse(void* self, bool fold) {
	( (MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_SetFoldAtElse(fold);
}

void QsciLexerVHDL_override_virtual_SetFoldAtBegin(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__SetFoldAtBegin = slot;
}

void QsciLexerVHDL_virtualbase_SetFoldAtBegin(void* self, bool fold) {
	( (MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_SetFoldAtBegin(fold);
}

void QsciLexerVHDL_override_virtual_SetFoldAtParenthesis(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__SetFoldAtParenthesis = slot;
}

void QsciLexerVHDL_virtualbase_SetFoldAtParenthesis(void* self, bool fold) {
	( (MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_SetFoldAtParenthesis(fold);
}

void QsciLexerVHDL_override_virtual_Language(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__Language = slot;
}

void QsciLexerVHDL_override_virtual_Lexer(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__Lexer = slot;
}

const char* QsciLexerVHDL_virtualbase_Lexer(const void* self) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_Lexer();
}

void QsciLexerVHDL_override_virtual_LexerId(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__LexerId = slot;
}

int QsciLexerVHDL_virtualbase_LexerId(const void* self) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_LexerId();
}

void QsciLexerVHDL_override_virtual_AutoCompletionFillups(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__AutoCompletionFillups = slot;
}

const char* QsciLexerVHDL_virtualbase_AutoCompletionFillups(const void* self) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_AutoCompletionFillups();
}

void QsciLexerVHDL_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__AutoCompletionWordSeparators = slot;
}

struct miqt_array /* of struct miqt_string */  QsciLexerVHDL_virtualbase_AutoCompletionWordSeparators(const void* self) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_AutoCompletionWordSeparators();
}

void QsciLexerVHDL_override_virtual_BlockEnd(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__BlockEnd = slot;
}

const char* QsciLexerVHDL_virtualbase_BlockEnd(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_BlockEnd(style);
}

void QsciLexerVHDL_override_virtual_BlockLookback(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__BlockLookback = slot;
}

int QsciLexerVHDL_virtualbase_BlockLookback(const void* self) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_BlockLookback();
}

void QsciLexerVHDL_override_virtual_BlockStart(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__BlockStart = slot;
}

const char* QsciLexerVHDL_virtualbase_BlockStart(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_BlockStart(style);
}

void QsciLexerVHDL_override_virtual_BlockStartKeyword(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__BlockStartKeyword = slot;
}

const char* QsciLexerVHDL_virtualbase_BlockStartKeyword(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_BlockStartKeyword(style);
}

void QsciLexerVHDL_override_virtual_BraceStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__BraceStyle = slot;
}

int QsciLexerVHDL_virtualbase_BraceStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_BraceStyle();
}

void QsciLexerVHDL_override_virtual_CaseSensitive(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__CaseSensitive = slot;
}

bool QsciLexerVHDL_virtualbase_CaseSensitive(const void* self) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_CaseSensitive();
}

void QsciLexerVHDL_override_virtual_Color(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__Color = slot;
}

QColor* QsciLexerVHDL_virtualbase_Color(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_Color(style);
}

void QsciLexerVHDL_override_virtual_EolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__EolFill = slot;
}

bool QsciLexerVHDL_virtualbase_EolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_EolFill(style);
}

void QsciLexerVHDL_override_virtual_Font(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__Font = slot;
}

QFont* QsciLexerVHDL_virtualbase_Font(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_Font(style);
}

void QsciLexerVHDL_override_virtual_IndentationGuideView(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__IndentationGuideView = slot;
}

int QsciLexerVHDL_virtualbase_IndentationGuideView(const void* self) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_IndentationGuideView();
}

void QsciLexerVHDL_override_virtual_Keywords(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__Keywords = slot;
}

const char* QsciLexerVHDL_virtualbase_Keywords(const void* self, int set) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_Keywords(set);
}

void QsciLexerVHDL_override_virtual_DefaultStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__DefaultStyle = slot;
}

int QsciLexerVHDL_virtualbase_DefaultStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_DefaultStyle();
}

void QsciLexerVHDL_override_virtual_Description(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__Description = slot;
}

void QsciLexerVHDL_override_virtual_Paper(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__Paper = slot;
}

QColor* QsciLexerVHDL_virtualbase_Paper(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_Paper(style);
}

void QsciLexerVHDL_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__DefaultColorWithStyle = slot;
}

QColor* QsciLexerVHDL_virtualbase_DefaultColorWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_DefaultColorWithStyle(style);
}

void QsciLexerVHDL_override_virtual_DefaultEolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__DefaultEolFill = slot;
}

bool QsciLexerVHDL_virtualbase_DefaultEolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_DefaultEolFill(style);
}

void QsciLexerVHDL_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__DefaultFontWithStyle = slot;
}

QFont* QsciLexerVHDL_virtualbase_DefaultFontWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_DefaultFontWithStyle(style);
}

void QsciLexerVHDL_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__DefaultPaperWithStyle = slot;
}

QColor* QsciLexerVHDL_virtualbase_DefaultPaperWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_DefaultPaperWithStyle(style);
}

void QsciLexerVHDL_override_virtual_SetEditor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__SetEditor = slot;
}

void QsciLexerVHDL_virtualbase_SetEditor(void* self, QsciScintilla* editor) {
	( (MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_SetEditor(editor);
}

void QsciLexerVHDL_override_virtual_RefreshProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__RefreshProperties = slot;
}

void QsciLexerVHDL_virtualbase_RefreshProperties(void* self) {
	( (MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_RefreshProperties();
}

void QsciLexerVHDL_override_virtual_StyleBitsNeeded(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__StyleBitsNeeded = slot;
}

int QsciLexerVHDL_virtualbase_StyleBitsNeeded(const void* self) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_StyleBitsNeeded();
}

void QsciLexerVHDL_override_virtual_WordCharacters(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__WordCharacters = slot;
}

const char* QsciLexerVHDL_virtualbase_WordCharacters(const void* self) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_WordCharacters();
}

void QsciLexerVHDL_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__SetAutoIndentStyle = slot;
}

void QsciLexerVHDL_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle) {
	( (MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_SetAutoIndentStyle(autoindentstyle);
}

void QsciLexerVHDL_override_virtual_SetColor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__SetColor = slot;
}

void QsciLexerVHDL_virtualbase_SetColor(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_SetColor(c, style);
}

void QsciLexerVHDL_override_virtual_SetEolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__SetEolFill = slot;
}

void QsciLexerVHDL_virtualbase_SetEolFill(void* self, bool eoffill, int style) {
	( (MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_SetEolFill(eoffill, style);
}

void QsciLexerVHDL_override_virtual_SetFont(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__SetFont = slot;
}

void QsciLexerVHDL_virtualbase_SetFont(void* self, QFont* f, int style) {
	( (MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_SetFont(f, style);
}

void QsciLexerVHDL_override_virtual_SetPaper(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__SetPaper = slot;
}

void QsciLexerVHDL_virtualbase_SetPaper(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_SetPaper(c, style);
}

void QsciLexerVHDL_override_virtual_ReadProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__ReadProperties = slot;
}

bool QsciLexerVHDL_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_ReadProperties(qs, prefix);
}

void QsciLexerVHDL_override_virtual_WriteProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) )->handle__WriteProperties = slot;
}

bool QsciLexerVHDL_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (const MiqtVirtualQsciLexerVHDL*)(self) )->virtualbase_WriteProperties(qs, prefix);
}

void QsciLexerVHDL_Delete(QsciLexerVHDL* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQsciLexerVHDL*>( self );
	} else {
		delete self;
	}
}

