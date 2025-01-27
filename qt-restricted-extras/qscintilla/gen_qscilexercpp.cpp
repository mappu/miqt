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
#include <qscilexercpp.h>
#include "gen_qscilexercpp.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerCPP_SetFoldAtElse(QsciLexerCPP*, intptr_t, bool);
void miqt_exec_callback_QsciLexerCPP_SetFoldComments(QsciLexerCPP*, intptr_t, bool);
void miqt_exec_callback_QsciLexerCPP_SetFoldCompact(QsciLexerCPP*, intptr_t, bool);
void miqt_exec_callback_QsciLexerCPP_SetFoldPreprocessor(QsciLexerCPP*, intptr_t, bool);
void miqt_exec_callback_QsciLexerCPP_SetStylePreprocessor(QsciLexerCPP*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerCPP_Language(const QsciLexerCPP*, intptr_t);
const char* miqt_exec_callback_QsciLexerCPP_Lexer(const QsciLexerCPP*, intptr_t);
int miqt_exec_callback_QsciLexerCPP_LexerId(const QsciLexerCPP*, intptr_t);
const char* miqt_exec_callback_QsciLexerCPP_AutoCompletionFillups(const QsciLexerCPP*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerCPP_AutoCompletionWordSeparators(const QsciLexerCPP*, intptr_t);
const char* miqt_exec_callback_QsciLexerCPP_BlockEnd(const QsciLexerCPP*, intptr_t, int*);
int miqt_exec_callback_QsciLexerCPP_BlockLookback(const QsciLexerCPP*, intptr_t);
const char* miqt_exec_callback_QsciLexerCPP_BlockStart(const QsciLexerCPP*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerCPP_BlockStartKeyword(const QsciLexerCPP*, intptr_t, int*);
int miqt_exec_callback_QsciLexerCPP_BraceStyle(const QsciLexerCPP*, intptr_t);
bool miqt_exec_callback_QsciLexerCPP_CaseSensitive(const QsciLexerCPP*, intptr_t);
QColor* miqt_exec_callback_QsciLexerCPP_Color(const QsciLexerCPP*, intptr_t, int);
bool miqt_exec_callback_QsciLexerCPP_EolFill(const QsciLexerCPP*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerCPP_Font(const QsciLexerCPP*, intptr_t, int);
int miqt_exec_callback_QsciLexerCPP_IndentationGuideView(const QsciLexerCPP*, intptr_t);
const char* miqt_exec_callback_QsciLexerCPP_Keywords(const QsciLexerCPP*, intptr_t, int);
int miqt_exec_callback_QsciLexerCPP_DefaultStyle(const QsciLexerCPP*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerCPP_Description(const QsciLexerCPP*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerCPP_Paper(const QsciLexerCPP*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerCPP_DefaultColorWithStyle(const QsciLexerCPP*, intptr_t, int);
bool miqt_exec_callback_QsciLexerCPP_DefaultEolFill(const QsciLexerCPP*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerCPP_DefaultFontWithStyle(const QsciLexerCPP*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerCPP_DefaultPaperWithStyle(const QsciLexerCPP*, intptr_t, int);
void miqt_exec_callback_QsciLexerCPP_SetEditor(QsciLexerCPP*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerCPP_RefreshProperties(QsciLexerCPP*, intptr_t);
int miqt_exec_callback_QsciLexerCPP_StyleBitsNeeded(const QsciLexerCPP*, intptr_t);
const char* miqt_exec_callback_QsciLexerCPP_WordCharacters(const QsciLexerCPP*, intptr_t);
void miqt_exec_callback_QsciLexerCPP_SetAutoIndentStyle(QsciLexerCPP*, intptr_t, int);
void miqt_exec_callback_QsciLexerCPP_SetColor(QsciLexerCPP*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerCPP_SetEolFill(QsciLexerCPP*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerCPP_SetFont(QsciLexerCPP*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerCPP_SetPaper(QsciLexerCPP*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerCPP_ReadProperties(QsciLexerCPP*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerCPP_WriteProperties(const QsciLexerCPP*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerCPP_Event(QsciLexerCPP*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerCPP_EventFilter(QsciLexerCPP*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerCPP_TimerEvent(QsciLexerCPP*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerCPP_ChildEvent(QsciLexerCPP*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerCPP_CustomEvent(QsciLexerCPP*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerCPP_ConnectNotify(QsciLexerCPP*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerCPP_DisconnectNotify(QsciLexerCPP*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerCPP final : public QsciLexerCPP {
public:

	MiqtVirtualQsciLexerCPP(): QsciLexerCPP() {};
	MiqtVirtualQsciLexerCPP(QObject* parent): QsciLexerCPP(parent) {};
	MiqtVirtualQsciLexerCPP(QObject* parent, bool caseInsensitiveKeywords): QsciLexerCPP(parent, caseInsensitiveKeywords) {};

	virtual ~MiqtVirtualQsciLexerCPP() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldAtElse = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldAtElse(bool fold) override {
		if (handle__SetFoldAtElse == 0) {
			QsciLexerCPP::setFoldAtElse(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerCPP_SetFoldAtElse(this, handle__SetFoldAtElse, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldAtElse(bool fold) {

		QsciLexerCPP::setFoldAtElse(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldComments = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (handle__SetFoldComments == 0) {
			QsciLexerCPP::setFoldComments(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerCPP_SetFoldComments(this, handle__SetFoldComments, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldComments(bool fold) {

		QsciLexerCPP::setFoldComments(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__SetFoldCompact == 0) {
			QsciLexerCPP::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerCPP_SetFoldCompact(this, handle__SetFoldCompact, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldCompact(bool fold) {

		QsciLexerCPP::setFoldCompact(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldPreprocessor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldPreprocessor(bool fold) override {
		if (handle__SetFoldPreprocessor == 0) {
			QsciLexerCPP::setFoldPreprocessor(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerCPP_SetFoldPreprocessor(this, handle__SetFoldPreprocessor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldPreprocessor(bool fold) {

		QsciLexerCPP::setFoldPreprocessor(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetStylePreprocessor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setStylePreprocessor(bool style) override {
		if (handle__SetStylePreprocessor == 0) {
			QsciLexerCPP::setStylePreprocessor(style);
			return;
		}
		
		bool sigval1 = style;

		miqt_exec_callback_QsciLexerCPP_SetStylePreprocessor(this, handle__SetStylePreprocessor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetStylePreprocessor(bool style) {

		QsciLexerCPP::setStylePreprocessor(style);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__Language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_Language(this, handle__Language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__Lexer == 0) {
			return QsciLexerCPP::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_Lexer(this, handle__Lexer);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Lexer() const {

		return (const char*) QsciLexerCPP::lexer();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__LexerId == 0) {
			return QsciLexerCPP::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCPP_LexerId(this, handle__LexerId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_LexerId() const {

		return QsciLexerCPP::lexerId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__AutoCompletionFillups == 0) {
			return QsciLexerCPP::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_AutoCompletionFillups(this, handle__AutoCompletionFillups);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_AutoCompletionFillups() const {

		return (const char*) QsciLexerCPP::autoCompletionFillups();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__AutoCompletionWordSeparators == 0) {
			return QsciLexerCPP::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerCPP_AutoCompletionWordSeparators(this, handle__AutoCompletionWordSeparators);
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

		QStringList _ret = QsciLexerCPP::autoCompletionWordSeparators();
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
			return QsciLexerCPP::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_BlockEnd(this, handle__BlockEnd, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockEnd(int* style) const {

		return (const char*) QsciLexerCPP::blockEnd(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__BlockLookback == 0) {
			return QsciLexerCPP::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCPP_BlockLookback(this, handle__BlockLookback);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BlockLookback() const {

		return QsciLexerCPP::blockLookback();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__BlockStart == 0) {
			return QsciLexerCPP::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_BlockStart(this, handle__BlockStart, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStart(int* style) const {

		return (const char*) QsciLexerCPP::blockStart(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__BlockStartKeyword == 0) {
			return QsciLexerCPP::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_BlockStartKeyword(this, handle__BlockStartKeyword, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStartKeyword(int* style) const {

		return (const char*) QsciLexerCPP::blockStartKeyword(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BraceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__BraceStyle == 0) {
			return QsciLexerCPP::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCPP_BraceStyle(this, handle__BraceStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BraceStyle() const {

		return QsciLexerCPP::braceStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CaseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__CaseSensitive == 0) {
			return QsciLexerCPP::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_CaseSensitive(this, handle__CaseSensitive);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CaseSensitive() const {

		return QsciLexerCPP::caseSensitive();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__Color == 0) {
			return QsciLexerCPP::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerCPP_Color(this, handle__Color, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Color(int style) const {

		return new QColor(QsciLexerCPP::color(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__EolFill == 0) {
			return QsciLexerCPP::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_EolFill(this, handle__EolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EolFill(int style) const {

		return QsciLexerCPP::eolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__Font == 0) {
			return QsciLexerCPP::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerCPP_Font(this, handle__Font, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_Font(int style) const {

		return new QFont(QsciLexerCPP::font(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__IndentationGuideView == 0) {
			return QsciLexerCPP::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCPP_IndentationGuideView(this, handle__IndentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndentationGuideView() const {

		return QsciLexerCPP::indentationGuideView();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__Keywords == 0) {
			return QsciLexerCPP::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_Keywords(this, handle__Keywords, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Keywords(int set) const {

		return (const char*) QsciLexerCPP::keywords(static_cast<int>(set));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__DefaultStyle == 0) {
			return QsciLexerCPP::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCPP_DefaultStyle(this, handle__DefaultStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DefaultStyle() const {

		return QsciLexerCPP::defaultStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__Description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerCPP_Description(this, handle__Description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__Paper == 0) {
			return QsciLexerCPP::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerCPP_Paper(this, handle__Paper, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Paper(int style) const {

		return new QColor(QsciLexerCPP::paper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__DefaultColorWithStyle == 0) {
			return QsciLexerCPP::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerCPP_DefaultColorWithStyle(this, handle__DefaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultColorWithStyle(int style) const {

		return new QColor(QsciLexerCPP::defaultColor(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__DefaultEolFill == 0) {
			return QsciLexerCPP::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_DefaultEolFill(this, handle__DefaultEolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DefaultEolFill(int style) const {

		return QsciLexerCPP::defaultEolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__DefaultFontWithStyle == 0) {
			return QsciLexerCPP::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerCPP_DefaultFontWithStyle(this, handle__DefaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_DefaultFontWithStyle(int style) const {

		return new QFont(QsciLexerCPP::defaultFont(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__DefaultPaperWithStyle == 0) {
			return QsciLexerCPP::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerCPP_DefaultPaperWithStyle(this, handle__DefaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultPaperWithStyle(int style) const {

		return new QColor(QsciLexerCPP::defaultPaper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__SetEditor == 0) {
			QsciLexerCPP::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerCPP_SetEditor(this, handle__SetEditor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEditor(QsciScintilla* editor) {

		QsciLexerCPP::setEditor(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RefreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__RefreshProperties == 0) {
			QsciLexerCPP::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerCPP_RefreshProperties(this, handle__RefreshProperties);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RefreshProperties() {

		QsciLexerCPP::refreshProperties();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StyleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__StyleBitsNeeded == 0) {
			return QsciLexerCPP::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCPP_StyleBitsNeeded(this, handle__StyleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StyleBitsNeeded() const {

		return QsciLexerCPP::styleBitsNeeded();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__WordCharacters == 0) {
			return QsciLexerCPP::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_WordCharacters(this, handle__WordCharacters);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_WordCharacters() const {

		return (const char*) QsciLexerCPP::wordCharacters();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__SetAutoIndentStyle == 0) {
			QsciLexerCPP::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerCPP_SetAutoIndentStyle(this, handle__SetAutoIndentStyle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoIndentStyle(int autoindentstyle) {

		QsciLexerCPP::setAutoIndentStyle(static_cast<int>(autoindentstyle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__SetColor == 0) {
			QsciLexerCPP::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerCPP_SetColor(this, handle__SetColor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetColor(QColor* c, int style) {

		QsciLexerCPP::setColor(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__SetEolFill == 0) {
			QsciLexerCPP::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerCPP_SetEolFill(this, handle__SetEolFill, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEolFill(bool eoffill, int style) {

		QsciLexerCPP::setEolFill(eoffill, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__SetFont == 0) {
			QsciLexerCPP::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerCPP_SetFont(this, handle__SetFont, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFont(QFont* f, int style) {

		QsciLexerCPP::setFont(*f, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__SetPaper == 0) {
			QsciLexerCPP::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerCPP_SetPaper(this, handle__SetPaper, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPaper(QColor* c, int style) {

		QsciLexerCPP::setPaper(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__ReadProperties == 0) {
			return QsciLexerCPP::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_ReadProperties(this, handle__ReadProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ReadProperties(QSettings* qs, struct miqt_string prefix) {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerCPP::readProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__WriteProperties == 0) {
			return QsciLexerCPP::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_WriteProperties(this, handle__WriteProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WriteProperties(QSettings* qs, struct miqt_string prefix) const {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerCPP::writeProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QsciLexerCPP::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QsciLexerCPP::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QsciLexerCPP::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QsciLexerCPP::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QsciLexerCPP::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerCPP_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QsciLexerCPP::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QsciLexerCPP::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerCPP_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QsciLexerCPP::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QsciLexerCPP::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerCPP_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QsciLexerCPP::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QsciLexerCPP::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerCPP_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QsciLexerCPP::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QsciLexerCPP::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerCPP_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QsciLexerCPP::disconnectNotify(*signal);

	}

};

QsciLexerCPP* QsciLexerCPP_new() {
	return new MiqtVirtualQsciLexerCPP();
}

QsciLexerCPP* QsciLexerCPP_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerCPP(parent);
}

QsciLexerCPP* QsciLexerCPP_new3(QObject* parent, bool caseInsensitiveKeywords) {
	return new MiqtVirtualQsciLexerCPP(parent, caseInsensitiveKeywords);
}

void QsciLexerCPP_virtbase(QsciLexerCPP* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerCPP_MetaObject(const QsciLexerCPP* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerCPP_Metacast(QsciLexerCPP* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerCPP_Tr(const char* s) {
	QString _ret = QsciLexerCPP::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCPP_TrUtf8(const char* s) {
	QString _ret = QsciLexerCPP::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerCPP_Language(const QsciLexerCPP* self) {
	return (const char*) self->language();
}

const char* QsciLexerCPP_Lexer(const QsciLexerCPP* self) {
	return (const char*) self->lexer();
}

struct miqt_array /* of struct miqt_string */  QsciLexerCPP_AutoCompletionWordSeparators(const QsciLexerCPP* self) {
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

const char* QsciLexerCPP_BlockEnd(const QsciLexerCPP* self) {
	return (const char*) self->blockEnd();
}

const char* QsciLexerCPP_BlockStart(const QsciLexerCPP* self) {
	return (const char*) self->blockStart();
}

const char* QsciLexerCPP_BlockStartKeyword(const QsciLexerCPP* self) {
	return (const char*) self->blockStartKeyword();
}

int QsciLexerCPP_BraceStyle(const QsciLexerCPP* self) {
	return self->braceStyle();
}

const char* QsciLexerCPP_WordCharacters(const QsciLexerCPP* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerCPP_DefaultColor(const QsciLexerCPP* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerCPP_DefaultEolFill(const QsciLexerCPP* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerCPP_DefaultFont(const QsciLexerCPP* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerCPP_DefaultPaper(const QsciLexerCPP* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerCPP_Keywords(const QsciLexerCPP* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerCPP_Description(const QsciLexerCPP* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerCPP_RefreshProperties(QsciLexerCPP* self) {
	self->refreshProperties();
}

bool QsciLexerCPP_FoldAtElse(const QsciLexerCPP* self) {
	return self->foldAtElse();
}

bool QsciLexerCPP_FoldComments(const QsciLexerCPP* self) {
	return self->foldComments();
}

bool QsciLexerCPP_FoldCompact(const QsciLexerCPP* self) {
	return self->foldCompact();
}

bool QsciLexerCPP_FoldPreprocessor(const QsciLexerCPP* self) {
	return self->foldPreprocessor();
}

bool QsciLexerCPP_StylePreprocessor(const QsciLexerCPP* self) {
	return self->stylePreprocessor();
}

void QsciLexerCPP_SetDollarsAllowed(QsciLexerCPP* self, bool allowed) {
	self->setDollarsAllowed(allowed);
}

bool QsciLexerCPP_DollarsAllowed(const QsciLexerCPP* self) {
	return self->dollarsAllowed();
}

void QsciLexerCPP_SetHighlightTripleQuotedStrings(QsciLexerCPP* self, bool enabled) {
	self->setHighlightTripleQuotedStrings(enabled);
}

bool QsciLexerCPP_HighlightTripleQuotedStrings(const QsciLexerCPP* self) {
	return self->highlightTripleQuotedStrings();
}

void QsciLexerCPP_SetHighlightHashQuotedStrings(QsciLexerCPP* self, bool enabled) {
	self->setHighlightHashQuotedStrings(enabled);
}

bool QsciLexerCPP_HighlightHashQuotedStrings(const QsciLexerCPP* self) {
	return self->highlightHashQuotedStrings();
}

void QsciLexerCPP_SetHighlightBackQuotedStrings(QsciLexerCPP* self, bool enabled) {
	self->setHighlightBackQuotedStrings(enabled);
}

bool QsciLexerCPP_HighlightBackQuotedStrings(const QsciLexerCPP* self) {
	return self->highlightBackQuotedStrings();
}

void QsciLexerCPP_SetHighlightEscapeSequences(QsciLexerCPP* self, bool enabled) {
	self->setHighlightEscapeSequences(enabled);
}

bool QsciLexerCPP_HighlightEscapeSequences(const QsciLexerCPP* self) {
	return self->highlightEscapeSequences();
}

void QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed(QsciLexerCPP* self, bool allowed) {
	self->setVerbatimStringEscapeSequencesAllowed(allowed);
}

bool QsciLexerCPP_VerbatimStringEscapeSequencesAllowed(const QsciLexerCPP* self) {
	return self->verbatimStringEscapeSequencesAllowed();
}

void QsciLexerCPP_SetFoldAtElse(QsciLexerCPP* self, bool fold) {
	self->setFoldAtElse(fold);
}

void QsciLexerCPP_SetFoldComments(QsciLexerCPP* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerCPP_SetFoldCompact(QsciLexerCPP* self, bool fold) {
	self->setFoldCompact(fold);
}

void QsciLexerCPP_SetFoldPreprocessor(QsciLexerCPP* self, bool fold) {
	self->setFoldPreprocessor(fold);
}

void QsciLexerCPP_SetStylePreprocessor(QsciLexerCPP* self, bool style) {
	self->setStylePreprocessor(style);
}

struct miqt_string QsciLexerCPP_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerCPP::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCPP_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerCPP::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCPP_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerCPP::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCPP_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerCPP::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerCPP_BlockEnd1(const QsciLexerCPP* self, int* style) {
	return (const char*) self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerCPP_BlockStart1(const QsciLexerCPP* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerCPP_BlockStartKeyword1(const QsciLexerCPP* self, int* style) {
	return (const char*) self->blockStartKeyword(static_cast<int*>(style));
}

bool QsciLexerCPP_override_virtual_SetFoldAtElse(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFoldAtElse = slot;
	return true;
}

void QsciLexerCPP_virtualbase_SetFoldAtElse(void* self, bool fold) {
	( (MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_SetFoldAtElse(fold);
}

bool QsciLexerCPP_override_virtual_SetFoldComments(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFoldComments = slot;
	return true;
}

void QsciLexerCPP_virtualbase_SetFoldComments(void* self, bool fold) {
	( (MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_SetFoldComments(fold);
}

bool QsciLexerCPP_override_virtual_SetFoldCompact(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFoldCompact = slot;
	return true;
}

void QsciLexerCPP_virtualbase_SetFoldCompact(void* self, bool fold) {
	( (MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_SetFoldCompact(fold);
}

bool QsciLexerCPP_override_virtual_SetFoldPreprocessor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFoldPreprocessor = slot;
	return true;
}

void QsciLexerCPP_virtualbase_SetFoldPreprocessor(void* self, bool fold) {
	( (MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_SetFoldPreprocessor(fold);
}

bool QsciLexerCPP_override_virtual_SetStylePreprocessor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetStylePreprocessor = slot;
	return true;
}

void QsciLexerCPP_virtualbase_SetStylePreprocessor(void* self, bool style) {
	( (MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_SetStylePreprocessor(style);
}

bool QsciLexerCPP_override_virtual_Language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Language = slot;
	return true;
}

bool QsciLexerCPP_override_virtual_Lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Lexer = slot;
	return true;
}

const char* QsciLexerCPP_virtualbase_Lexer(const void* self) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_Lexer();
}

bool QsciLexerCPP_override_virtual_LexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LexerId = slot;
	return true;
}

int QsciLexerCPP_virtualbase_LexerId(const void* self) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_LexerId();
}

bool QsciLexerCPP_override_virtual_AutoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompletionFillups = slot;
	return true;
}

const char* QsciLexerCPP_virtualbase_AutoCompletionFillups(const void* self) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_AutoCompletionFillups();
}

bool QsciLexerCPP_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerCPP_virtualbase_AutoCompletionWordSeparators(const void* self) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_AutoCompletionWordSeparators();
}

bool QsciLexerCPP_override_virtual_BlockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockEnd = slot;
	return true;
}

const char* QsciLexerCPP_virtualbase_BlockEnd(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_BlockEnd(style);
}

bool QsciLexerCPP_override_virtual_BlockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockLookback = slot;
	return true;
}

int QsciLexerCPP_virtualbase_BlockLookback(const void* self) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_BlockLookback();
}

bool QsciLexerCPP_override_virtual_BlockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockStart = slot;
	return true;
}

const char* QsciLexerCPP_virtualbase_BlockStart(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_BlockStart(style);
}

bool QsciLexerCPP_override_virtual_BlockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockStartKeyword = slot;
	return true;
}

const char* QsciLexerCPP_virtualbase_BlockStartKeyword(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_BlockStartKeyword(style);
}

bool QsciLexerCPP_override_virtual_BraceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BraceStyle = slot;
	return true;
}

int QsciLexerCPP_virtualbase_BraceStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_BraceStyle();
}

bool QsciLexerCPP_override_virtual_CaseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CaseSensitive = slot;
	return true;
}

bool QsciLexerCPP_virtualbase_CaseSensitive(const void* self) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_CaseSensitive();
}

bool QsciLexerCPP_override_virtual_Color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Color = slot;
	return true;
}

QColor* QsciLexerCPP_virtualbase_Color(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_Color(style);
}

bool QsciLexerCPP_override_virtual_EolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EolFill = slot;
	return true;
}

bool QsciLexerCPP_virtualbase_EolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_EolFill(style);
}

bool QsciLexerCPP_override_virtual_Font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Font = slot;
	return true;
}

QFont* QsciLexerCPP_virtualbase_Font(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_Font(style);
}

bool QsciLexerCPP_override_virtual_IndentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndentationGuideView = slot;
	return true;
}

int QsciLexerCPP_virtualbase_IndentationGuideView(const void* self) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_IndentationGuideView();
}

bool QsciLexerCPP_override_virtual_Keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Keywords = slot;
	return true;
}

const char* QsciLexerCPP_virtualbase_Keywords(const void* self, int set) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_Keywords(set);
}

bool QsciLexerCPP_override_virtual_DefaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultStyle = slot;
	return true;
}

int QsciLexerCPP_virtualbase_DefaultStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_DefaultStyle();
}

bool QsciLexerCPP_override_virtual_Description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Description = slot;
	return true;
}

bool QsciLexerCPP_override_virtual_Paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paper = slot;
	return true;
}

QColor* QsciLexerCPP_virtualbase_Paper(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_Paper(style);
}

bool QsciLexerCPP_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexerCPP_virtualbase_DefaultColorWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_DefaultColorWithStyle(style);
}

bool QsciLexerCPP_override_virtual_DefaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultEolFill = slot;
	return true;
}

bool QsciLexerCPP_virtualbase_DefaultEolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_DefaultEolFill(style);
}

bool QsciLexerCPP_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexerCPP_virtualbase_DefaultFontWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_DefaultFontWithStyle(style);
}

bool QsciLexerCPP_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexerCPP_virtualbase_DefaultPaperWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_DefaultPaperWithStyle(style);
}

bool QsciLexerCPP_override_virtual_SetEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEditor = slot;
	return true;
}

void QsciLexerCPP_virtualbase_SetEditor(void* self, QsciScintilla* editor) {
	( (MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_SetEditor(editor);
}

bool QsciLexerCPP_override_virtual_RefreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RefreshProperties = slot;
	return true;
}

void QsciLexerCPP_virtualbase_RefreshProperties(void* self) {
	( (MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_RefreshProperties();
}

bool QsciLexerCPP_override_virtual_StyleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StyleBitsNeeded = slot;
	return true;
}

int QsciLexerCPP_virtualbase_StyleBitsNeeded(const void* self) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_StyleBitsNeeded();
}

bool QsciLexerCPP_override_virtual_WordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WordCharacters = slot;
	return true;
}

const char* QsciLexerCPP_virtualbase_WordCharacters(const void* self) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_WordCharacters();
}

bool QsciLexerCPP_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAutoIndentStyle = slot;
	return true;
}

void QsciLexerCPP_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle) {
	( (MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_SetAutoIndentStyle(autoindentstyle);
}

bool QsciLexerCPP_override_virtual_SetColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetColor = slot;
	return true;
}

void QsciLexerCPP_virtualbase_SetColor(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_SetColor(c, style);
}

bool QsciLexerCPP_override_virtual_SetEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEolFill = slot;
	return true;
}

void QsciLexerCPP_virtualbase_SetEolFill(void* self, bool eoffill, int style) {
	( (MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_SetEolFill(eoffill, style);
}

bool QsciLexerCPP_override_virtual_SetFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFont = slot;
	return true;
}

void QsciLexerCPP_virtualbase_SetFont(void* self, QFont* f, int style) {
	( (MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_SetFont(f, style);
}

bool QsciLexerCPP_override_virtual_SetPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPaper = slot;
	return true;
}

void QsciLexerCPP_virtualbase_SetPaper(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_SetPaper(c, style);
}

bool QsciLexerCPP_override_virtual_ReadProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadProperties = slot;
	return true;
}

bool QsciLexerCPP_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_ReadProperties(qs, prefix);
}

bool QsciLexerCPP_override_virtual_WriteProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WriteProperties = slot;
	return true;
}

bool QsciLexerCPP_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_WriteProperties(qs, prefix);
}

bool QsciLexerCPP_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QsciLexerCPP_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_Event(event);
}

bool QsciLexerCPP_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QsciLexerCPP_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QsciLexerCPP_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QsciLexerCPP_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_TimerEvent(event);
}

bool QsciLexerCPP_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QsciLexerCPP_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_ChildEvent(event);
}

bool QsciLexerCPP_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QsciLexerCPP_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_CustomEvent(event);
}

bool QsciLexerCPP_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QsciLexerCPP_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QsciLexerCPP_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QsciLexerCPP_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexerCPP*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QsciLexerCPP_Delete(QsciLexerCPP* self) {
	delete self;
}

