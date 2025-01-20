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
#include <qscilexerxml.h>
#include "gen_qscilexerxml.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerXML_SetFoldCompact(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerXML_SetFoldPreprocessor(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerXML_SetCaseSensitiveTags(void*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerXML_Language(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerXML_Lexer(void*, intptr_t);
int miqt_exec_callback_QsciLexerXML_LexerId(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerXML_AutoCompletionFillups(void*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerXML_AutoCompletionWordSeparators(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerXML_BlockEnd(void*, intptr_t, int*);
int miqt_exec_callback_QsciLexerXML_BlockLookback(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerXML_BlockStart(void*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerXML_BlockStartKeyword(void*, intptr_t, int*);
int miqt_exec_callback_QsciLexerXML_BraceStyle(void*, intptr_t);
bool miqt_exec_callback_QsciLexerXML_CaseSensitive(void*, intptr_t);
QColor* miqt_exec_callback_QsciLexerXML_Color(void*, intptr_t, int);
bool miqt_exec_callback_QsciLexerXML_EolFill(void*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerXML_Font(void*, intptr_t, int);
int miqt_exec_callback_QsciLexerXML_IndentationGuideView(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerXML_Keywords(void*, intptr_t, int);
int miqt_exec_callback_QsciLexerXML_DefaultStyle(void*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerXML_Description(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerXML_Paper(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerXML_DefaultColorWithStyle(void*, intptr_t, int);
bool miqt_exec_callback_QsciLexerXML_DefaultEolFill(void*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerXML_DefaultFontWithStyle(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerXML_DefaultPaperWithStyle(void*, intptr_t, int);
void miqt_exec_callback_QsciLexerXML_SetEditor(void*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerXML_RefreshProperties(void*, intptr_t);
int miqt_exec_callback_QsciLexerXML_StyleBitsNeeded(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerXML_WordCharacters(void*, intptr_t);
void miqt_exec_callback_QsciLexerXML_SetAutoIndentStyle(void*, intptr_t, int);
void miqt_exec_callback_QsciLexerXML_SetColor(void*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerXML_SetEolFill(void*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerXML_SetFont(void*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerXML_SetPaper(void*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerXML_ReadProperties(void*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerXML_WriteProperties(void*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerXML_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerXML_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerXML_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerXML_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerXML_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerXML_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerXML_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerXML final : public QsciLexerXML {
public:

	MiqtVirtualQsciLexerXML(): QsciLexerXML() {};
	MiqtVirtualQsciLexerXML(QObject* parent): QsciLexerXML(parent) {};

	virtual ~MiqtVirtualQsciLexerXML() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__SetFoldCompact == 0) {
			QsciLexerXML::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerXML_SetFoldCompact(this, handle__SetFoldCompact, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldCompact(bool fold) {

		QsciLexerXML::setFoldCompact(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldPreprocessor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldPreprocessor(bool fold) override {
		if (handle__SetFoldPreprocessor == 0) {
			QsciLexerXML::setFoldPreprocessor(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerXML_SetFoldPreprocessor(this, handle__SetFoldPreprocessor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldPreprocessor(bool fold) {

		QsciLexerXML::setFoldPreprocessor(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetCaseSensitiveTags = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCaseSensitiveTags(bool sens) override {
		if (handle__SetCaseSensitiveTags == 0) {
			QsciLexerXML::setCaseSensitiveTags(sens);
			return;
		}
		
		bool sigval1 = sens;

		miqt_exec_callback_QsciLexerXML_SetCaseSensitiveTags(this, handle__SetCaseSensitiveTags, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetCaseSensitiveTags(bool sens) {

		QsciLexerXML::setCaseSensitiveTags(sens);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__Language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_Language(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__Language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__Lexer == 0) {
			return QsciLexerXML::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_Lexer(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__Lexer);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Lexer() const {

		return (const char*) QsciLexerXML::lexer();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__LexerId == 0) {
			return QsciLexerXML::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerXML_LexerId(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__LexerId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_LexerId() const {

		return QsciLexerXML::lexerId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__AutoCompletionFillups == 0) {
			return QsciLexerXML::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_AutoCompletionFillups(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__AutoCompletionFillups);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_AutoCompletionFillups() const {

		return (const char*) QsciLexerXML::autoCompletionFillups();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__AutoCompletionWordSeparators == 0) {
			return QsciLexerXML::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerXML_AutoCompletionWordSeparators(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__AutoCompletionWordSeparators);
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

		QStringList _ret = QsciLexerXML::autoCompletionWordSeparators();
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
			return QsciLexerXML::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_BlockEnd(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__BlockEnd, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockEnd(int* style) const {

		return (const char*) QsciLexerXML::blockEnd(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__BlockLookback == 0) {
			return QsciLexerXML::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerXML_BlockLookback(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__BlockLookback);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BlockLookback() const {

		return QsciLexerXML::blockLookback();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__BlockStart == 0) {
			return QsciLexerXML::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_BlockStart(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__BlockStart, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStart(int* style) const {

		return (const char*) QsciLexerXML::blockStart(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__BlockStartKeyword == 0) {
			return QsciLexerXML::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_BlockStartKeyword(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__BlockStartKeyword, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStartKeyword(int* style) const {

		return (const char*) QsciLexerXML::blockStartKeyword(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BraceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__BraceStyle == 0) {
			return QsciLexerXML::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerXML_BraceStyle(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__BraceStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BraceStyle() const {

		return QsciLexerXML::braceStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CaseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__CaseSensitive == 0) {
			return QsciLexerXML::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerXML_CaseSensitive(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__CaseSensitive);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CaseSensitive() const {

		return QsciLexerXML::caseSensitive();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__Color == 0) {
			return QsciLexerXML::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerXML_Color(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__Color, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Color(int style) const {

		return new QColor(QsciLexerXML::color(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__EolFill == 0) {
			return QsciLexerXML::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerXML_EolFill(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__EolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EolFill(int style) const {

		return QsciLexerXML::eolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__Font == 0) {
			return QsciLexerXML::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerXML_Font(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__Font, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_Font(int style) const {

		return new QFont(QsciLexerXML::font(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__IndentationGuideView == 0) {
			return QsciLexerXML::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerXML_IndentationGuideView(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__IndentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndentationGuideView() const {

		return QsciLexerXML::indentationGuideView();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__Keywords == 0) {
			return QsciLexerXML::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_Keywords(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__Keywords, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Keywords(int set) const {

		return (const char*) QsciLexerXML::keywords(static_cast<int>(set));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__DefaultStyle == 0) {
			return QsciLexerXML::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerXML_DefaultStyle(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__DefaultStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DefaultStyle() const {

		return QsciLexerXML::defaultStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__Description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerXML_Description(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__Description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__Paper == 0) {
			return QsciLexerXML::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerXML_Paper(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__Paper, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Paper(int style) const {

		return new QColor(QsciLexerXML::paper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__DefaultColorWithStyle == 0) {
			return QsciLexerXML::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerXML_DefaultColorWithStyle(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__DefaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultColorWithStyle(int style) const {

		return new QColor(QsciLexerXML::defaultColor(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__DefaultEolFill == 0) {
			return QsciLexerXML::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerXML_DefaultEolFill(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__DefaultEolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DefaultEolFill(int style) const {

		return QsciLexerXML::defaultEolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__DefaultFontWithStyle == 0) {
			return QsciLexerXML::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerXML_DefaultFontWithStyle(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__DefaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_DefaultFontWithStyle(int style) const {

		return new QFont(QsciLexerXML::defaultFont(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__DefaultPaperWithStyle == 0) {
			return QsciLexerXML::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerXML_DefaultPaperWithStyle(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__DefaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultPaperWithStyle(int style) const {

		return new QColor(QsciLexerXML::defaultPaper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__SetEditor == 0) {
			QsciLexerXML::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerXML_SetEditor(this, handle__SetEditor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEditor(QsciScintilla* editor) {

		QsciLexerXML::setEditor(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RefreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__RefreshProperties == 0) {
			QsciLexerXML::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerXML_RefreshProperties(this, handle__RefreshProperties);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RefreshProperties() {

		QsciLexerXML::refreshProperties();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StyleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__StyleBitsNeeded == 0) {
			return QsciLexerXML::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerXML_StyleBitsNeeded(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__StyleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StyleBitsNeeded() const {

		return QsciLexerXML::styleBitsNeeded();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__WordCharacters == 0) {
			return QsciLexerXML::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_WordCharacters(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__WordCharacters);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_WordCharacters() const {

		return (const char*) QsciLexerXML::wordCharacters();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__SetAutoIndentStyle == 0) {
			QsciLexerXML::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerXML_SetAutoIndentStyle(this, handle__SetAutoIndentStyle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoIndentStyle(int autoindentstyle) {

		QsciLexerXML::setAutoIndentStyle(static_cast<int>(autoindentstyle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__SetColor == 0) {
			QsciLexerXML::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerXML_SetColor(this, handle__SetColor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetColor(QColor* c, int style) {

		QsciLexerXML::setColor(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__SetEolFill == 0) {
			QsciLexerXML::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerXML_SetEolFill(this, handle__SetEolFill, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEolFill(bool eoffill, int style) {

		QsciLexerXML::setEolFill(eoffill, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__SetFont == 0) {
			QsciLexerXML::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerXML_SetFont(this, handle__SetFont, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFont(QFont* f, int style) {

		QsciLexerXML::setFont(*f, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__SetPaper == 0) {
			QsciLexerXML::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerXML_SetPaper(this, handle__SetPaper, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPaper(QColor* c, int style) {

		QsciLexerXML::setPaper(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__ReadProperties == 0) {
			return QsciLexerXML::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerXML_ReadProperties(this, handle__ReadProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ReadProperties(QSettings* qs, struct miqt_string prefix) {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerXML::readProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__WriteProperties == 0) {
			return QsciLexerXML::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerXML_WriteProperties(const_cast<MiqtVirtualQsciLexerXML*>(this), handle__WriteProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WriteProperties(QSettings* qs, struct miqt_string prefix) const {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerXML::writeProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QsciLexerXML::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerXML_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QsciLexerXML::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QsciLexerXML::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerXML_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QsciLexerXML::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QsciLexerXML::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerXML_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QsciLexerXML::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QsciLexerXML::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerXML_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QsciLexerXML::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QsciLexerXML::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerXML_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QsciLexerXML::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QsciLexerXML::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerXML_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QsciLexerXML::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QsciLexerXML::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerXML_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QsciLexerXML::disconnectNotify(*signal);

	}

};

QsciLexerXML* QsciLexerXML_new() {
	return new MiqtVirtualQsciLexerXML();
}

QsciLexerXML* QsciLexerXML_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerXML(parent);
}

void QsciLexerXML_virtbase(QsciLexerXML* src, QsciLexerHTML** outptr_QsciLexerHTML) {
	*outptr_QsciLexerHTML = static_cast<QsciLexerHTML*>(src);
}

QMetaObject* QsciLexerXML_MetaObject(const QsciLexerXML* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerXML_Metacast(QsciLexerXML* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerXML_Tr(const char* s) {
	QString _ret = QsciLexerXML::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerXML_Language(const QsciLexerXML* self) {
	return (const char*) self->language();
}

const char* QsciLexerXML_Lexer(const QsciLexerXML* self) {
	return (const char*) self->lexer();
}

QColor* QsciLexerXML_DefaultColor(const QsciLexerXML* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerXML_DefaultEolFill(const QsciLexerXML* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerXML_DefaultFont(const QsciLexerXML* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerXML_DefaultPaper(const QsciLexerXML* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerXML_Keywords(const QsciLexerXML* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

void QsciLexerXML_RefreshProperties(QsciLexerXML* self) {
	self->refreshProperties();
}

void QsciLexerXML_SetScriptsStyled(QsciLexerXML* self, bool styled) {
	self->setScriptsStyled(styled);
}

bool QsciLexerXML_ScriptsStyled(const QsciLexerXML* self) {
	return self->scriptsStyled();
}

struct miqt_string QsciLexerXML_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerXML::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerXML_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerXML::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexerXML_override_virtual_SetFoldCompact(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFoldCompact = slot;
	return true;
}

void QsciLexerXML_virtualbase_SetFoldCompact(void* self, bool fold) {
	( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_SetFoldCompact(fold);
}

bool QsciLexerXML_override_virtual_SetFoldPreprocessor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFoldPreprocessor = slot;
	return true;
}

void QsciLexerXML_virtualbase_SetFoldPreprocessor(void* self, bool fold) {
	( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_SetFoldPreprocessor(fold);
}

bool QsciLexerXML_override_virtual_SetCaseSensitiveTags(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetCaseSensitiveTags = slot;
	return true;
}

void QsciLexerXML_virtualbase_SetCaseSensitiveTags(void* self, bool sens) {
	( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_SetCaseSensitiveTags(sens);
}

bool QsciLexerXML_override_virtual_Language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Language = slot;
	return true;
}

bool QsciLexerXML_override_virtual_Lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Lexer = slot;
	return true;
}

const char* QsciLexerXML_virtualbase_Lexer(const void* self) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_Lexer();
}

bool QsciLexerXML_override_virtual_LexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LexerId = slot;
	return true;
}

int QsciLexerXML_virtualbase_LexerId(const void* self) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_LexerId();
}

bool QsciLexerXML_override_virtual_AutoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompletionFillups = slot;
	return true;
}

const char* QsciLexerXML_virtualbase_AutoCompletionFillups(const void* self) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_AutoCompletionFillups();
}

bool QsciLexerXML_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerXML_virtualbase_AutoCompletionWordSeparators(const void* self) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_AutoCompletionWordSeparators();
}

bool QsciLexerXML_override_virtual_BlockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockEnd = slot;
	return true;
}

const char* QsciLexerXML_virtualbase_BlockEnd(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_BlockEnd(style);
}

bool QsciLexerXML_override_virtual_BlockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockLookback = slot;
	return true;
}

int QsciLexerXML_virtualbase_BlockLookback(const void* self) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_BlockLookback();
}

bool QsciLexerXML_override_virtual_BlockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockStart = slot;
	return true;
}

const char* QsciLexerXML_virtualbase_BlockStart(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_BlockStart(style);
}

bool QsciLexerXML_override_virtual_BlockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockStartKeyword = slot;
	return true;
}

const char* QsciLexerXML_virtualbase_BlockStartKeyword(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_BlockStartKeyword(style);
}

bool QsciLexerXML_override_virtual_BraceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BraceStyle = slot;
	return true;
}

int QsciLexerXML_virtualbase_BraceStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_BraceStyle();
}

bool QsciLexerXML_override_virtual_CaseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CaseSensitive = slot;
	return true;
}

bool QsciLexerXML_virtualbase_CaseSensitive(const void* self) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_CaseSensitive();
}

bool QsciLexerXML_override_virtual_Color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Color = slot;
	return true;
}

QColor* QsciLexerXML_virtualbase_Color(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_Color(style);
}

bool QsciLexerXML_override_virtual_EolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EolFill = slot;
	return true;
}

bool QsciLexerXML_virtualbase_EolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_EolFill(style);
}

bool QsciLexerXML_override_virtual_Font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Font = slot;
	return true;
}

QFont* QsciLexerXML_virtualbase_Font(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_Font(style);
}

bool QsciLexerXML_override_virtual_IndentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndentationGuideView = slot;
	return true;
}

int QsciLexerXML_virtualbase_IndentationGuideView(const void* self) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_IndentationGuideView();
}

bool QsciLexerXML_override_virtual_Keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Keywords = slot;
	return true;
}

const char* QsciLexerXML_virtualbase_Keywords(const void* self, int set) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_Keywords(set);
}

bool QsciLexerXML_override_virtual_DefaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultStyle = slot;
	return true;
}

int QsciLexerXML_virtualbase_DefaultStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_DefaultStyle();
}

bool QsciLexerXML_override_virtual_Description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Description = slot;
	return true;
}

bool QsciLexerXML_override_virtual_Paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paper = slot;
	return true;
}

QColor* QsciLexerXML_virtualbase_Paper(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_Paper(style);
}

bool QsciLexerXML_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexerXML_virtualbase_DefaultColorWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_DefaultColorWithStyle(style);
}

bool QsciLexerXML_override_virtual_DefaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultEolFill = slot;
	return true;
}

bool QsciLexerXML_virtualbase_DefaultEolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_DefaultEolFill(style);
}

bool QsciLexerXML_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexerXML_virtualbase_DefaultFontWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_DefaultFontWithStyle(style);
}

bool QsciLexerXML_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexerXML_virtualbase_DefaultPaperWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_DefaultPaperWithStyle(style);
}

bool QsciLexerXML_override_virtual_SetEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEditor = slot;
	return true;
}

void QsciLexerXML_virtualbase_SetEditor(void* self, QsciScintilla* editor) {
	( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_SetEditor(editor);
}

bool QsciLexerXML_override_virtual_RefreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RefreshProperties = slot;
	return true;
}

void QsciLexerXML_virtualbase_RefreshProperties(void* self) {
	( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_RefreshProperties();
}

bool QsciLexerXML_override_virtual_StyleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StyleBitsNeeded = slot;
	return true;
}

int QsciLexerXML_virtualbase_StyleBitsNeeded(const void* self) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_StyleBitsNeeded();
}

bool QsciLexerXML_override_virtual_WordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WordCharacters = slot;
	return true;
}

const char* QsciLexerXML_virtualbase_WordCharacters(const void* self) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_WordCharacters();
}

bool QsciLexerXML_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAutoIndentStyle = slot;
	return true;
}

void QsciLexerXML_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle) {
	( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_SetAutoIndentStyle(autoindentstyle);
}

bool QsciLexerXML_override_virtual_SetColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetColor = slot;
	return true;
}

void QsciLexerXML_virtualbase_SetColor(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_SetColor(c, style);
}

bool QsciLexerXML_override_virtual_SetEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEolFill = slot;
	return true;
}

void QsciLexerXML_virtualbase_SetEolFill(void* self, bool eoffill, int style) {
	( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_SetEolFill(eoffill, style);
}

bool QsciLexerXML_override_virtual_SetFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFont = slot;
	return true;
}

void QsciLexerXML_virtualbase_SetFont(void* self, QFont* f, int style) {
	( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_SetFont(f, style);
}

bool QsciLexerXML_override_virtual_SetPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPaper = slot;
	return true;
}

void QsciLexerXML_virtualbase_SetPaper(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_SetPaper(c, style);
}

bool QsciLexerXML_override_virtual_ReadProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadProperties = slot;
	return true;
}

bool QsciLexerXML_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_ReadProperties(qs, prefix);
}

bool QsciLexerXML_override_virtual_WriteProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WriteProperties = slot;
	return true;
}

bool QsciLexerXML_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (const MiqtVirtualQsciLexerXML*)(self) )->virtualbase_WriteProperties(qs, prefix);
}

bool QsciLexerXML_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QsciLexerXML_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_Event(event);
}

bool QsciLexerXML_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QsciLexerXML_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QsciLexerXML_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QsciLexerXML_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_TimerEvent(event);
}

bool QsciLexerXML_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QsciLexerXML_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_ChildEvent(event);
}

bool QsciLexerXML_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QsciLexerXML_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_CustomEvent(event);
}

bool QsciLexerXML_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QsciLexerXML_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QsciLexerXML_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QsciLexerXML_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QsciLexerXML_Delete(QsciLexerXML* self) {
	delete self;
}

