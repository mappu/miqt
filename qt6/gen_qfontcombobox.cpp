#include <QAbstractItemModel>
#include <QComboBox>
#include <QContextMenuEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFontComboBox>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaObject>
#include <QMouseEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionComboBox>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qfontcombobox.h>
#include "gen_qfontcombobox.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QFontComboBox_CurrentFontChanged(intptr_t, QFont*);
QSize* miqt_exec_callback_QFontComboBox_SizeHint(void*, intptr_t);
bool miqt_exec_callback_QFontComboBox_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QFontComboBox_SetModel(void*, intptr_t, QAbstractItemModel*);
QSize* miqt_exec_callback_QFontComboBox_MinimumSizeHint(void*, intptr_t);
void miqt_exec_callback_QFontComboBox_ShowPopup(void*, intptr_t);
void miqt_exec_callback_QFontComboBox_HidePopup(void*, intptr_t);
QVariant* miqt_exec_callback_QFontComboBox_InputMethodQuery(void*, intptr_t, int);
void miqt_exec_callback_QFontComboBox_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFontComboBox_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFontComboBox_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QFontComboBox_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QFontComboBox_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QFontComboBox_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QFontComboBox_HideEvent(void*, intptr_t, QHideEvent*);
void miqt_exec_callback_QFontComboBox_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFontComboBox_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFontComboBox_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFontComboBox_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFontComboBox_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QFontComboBox_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QFontComboBox_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QFontComboBox_InitStyleOption(void*, intptr_t, QStyleOptionComboBox*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFontComboBox : public virtual QFontComboBox {
public:

	MiqtVirtualQFontComboBox(QWidget* parent): QFontComboBox(parent) {};
	MiqtVirtualQFontComboBox(): QFontComboBox() {};

	virtual ~MiqtVirtualQFontComboBox() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QFontComboBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFontComboBox_SizeHint(const_cast<MiqtVirtualQFontComboBox*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QFontComboBox::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QFontComboBox::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QFontComboBox_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QFontComboBox::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (handle__SetModel == 0) {
			QFontComboBox::setModel(model);
			return;
		}
		
		QAbstractItemModel* sigval1 = model;

		miqt_exec_callback_QFontComboBox_SetModel(this, handle__SetModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetModel(QAbstractItemModel* model) {

		QFontComboBox::setModel(model);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QFontComboBox::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFontComboBox_MinimumSizeHint(const_cast<MiqtVirtualQFontComboBox*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QFontComboBox::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowPopup = 0;

	// Subclass to allow providing a Go implementation
	virtual void showPopup() override {
		if (handle__ShowPopup == 0) {
			QFontComboBox::showPopup();
			return;
		}
		

		miqt_exec_callback_QFontComboBox_ShowPopup(this, handle__ShowPopup);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowPopup() {

		QFontComboBox::showPopup();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HidePopup = 0;

	// Subclass to allow providing a Go implementation
	virtual void hidePopup() override {
		if (handle__HidePopup == 0) {
			QFontComboBox::hidePopup();
			return;
		}
		

		miqt_exec_callback_QFontComboBox_HidePopup(this, handle__HidePopup);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HidePopup() {

		QFontComboBox::hidePopup();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QFontComboBox::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QFontComboBox_InputMethodQuery(const_cast<MiqtVirtualQFontComboBox*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QFontComboBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__FocusInEvent == 0) {
			QFontComboBox::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* e) {

		QFontComboBox::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__FocusOutEvent == 0) {
			QFontComboBox::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* e) {

		QFontComboBox::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QFontComboBox::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QFontComboBox::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__ResizeEvent == 0) {
			QFontComboBox::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* e) {

		QFontComboBox::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__PaintEvent == 0) {
			QFontComboBox::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* e) {

		QFontComboBox::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* e) override {
		if (handle__ShowEvent == 0) {
			QFontComboBox::showEvent(e);
			return;
		}
		
		QShowEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* e) {

		QFontComboBox::showEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* e) override {
		if (handle__HideEvent == 0) {
			QFontComboBox::hideEvent(e);
			return;
		}
		
		QHideEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* e) {

		QFontComboBox::hideEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__MousePressEvent == 0) {
			QFontComboBox::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* e) {

		QFontComboBox::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__MouseReleaseEvent == 0) {
			QFontComboBox::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* e) {

		QFontComboBox::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__KeyPressEvent == 0) {
			QFontComboBox::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* e) {

		QFontComboBox::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__KeyReleaseEvent == 0) {
			QFontComboBox::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* e) {

		QFontComboBox::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__WheelEvent == 0) {
			QFontComboBox::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* e) {

		QFontComboBox::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* e) override {
		if (handle__ContextMenuEvent == 0) {
			QFontComboBox::contextMenuEvent(e);
			return;
		}
		
		QContextMenuEvent* sigval1 = e;

		miqt_exec_callback_QFontComboBox_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* e) {

		QFontComboBox::contextMenuEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QFontComboBox::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QFontComboBox_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QFontComboBox::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionComboBox* option) const override {
		if (handle__InitStyleOption == 0) {
			QFontComboBox::initStyleOption(option);
			return;
		}
		
		QStyleOptionComboBox* sigval1 = option;

		miqt_exec_callback_QFontComboBox_InitStyleOption(const_cast<MiqtVirtualQFontComboBox*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionComboBox* option) const {

		QFontComboBox::initStyleOption(option);

	}

};

QFontComboBox* QFontComboBox_new(QWidget* parent) {
	return new MiqtVirtualQFontComboBox(parent);
}

QFontComboBox* QFontComboBox_new2() {
	return new MiqtVirtualQFontComboBox();
}

void QFontComboBox_virtbase(QFontComboBox* src, QComboBox** outptr_QComboBox) {
	*outptr_QComboBox = static_cast<QComboBox*>(src);
}

QMetaObject* QFontComboBox_MetaObject(const QFontComboBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFontComboBox_Metacast(QFontComboBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFontComboBox_Tr(const char* s) {
	QString _ret = QFontComboBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontComboBox_SetWritingSystem(QFontComboBox* self, int writingSystem) {
	self->setWritingSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem));
}

int QFontComboBox_WritingSystem(const QFontComboBox* self) {
	QFontDatabase::WritingSystem _ret = self->writingSystem();
	return static_cast<int>(_ret);
}

void QFontComboBox_SetFontFilters(QFontComboBox* self, int filters) {
	self->setFontFilters(static_cast<QFontComboBox::FontFilters>(filters));
}

int QFontComboBox_FontFilters(const QFontComboBox* self) {
	QFontComboBox::FontFilters _ret = self->fontFilters();
	return static_cast<int>(_ret);
}

QFont* QFontComboBox_CurrentFont(const QFontComboBox* self) {
	return new QFont(self->currentFont());
}

QSize* QFontComboBox_SizeHint(const QFontComboBox* self) {
	return new QSize(self->sizeHint());
}

void QFontComboBox_SetSampleTextForSystem(QFontComboBox* self, int writingSystem, struct miqt_string sampleText) {
	QString sampleText_QString = QString::fromUtf8(sampleText.data, sampleText.len);
	self->setSampleTextForSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem), sampleText_QString);
}

struct miqt_string QFontComboBox_SampleTextForSystem(const QFontComboBox* self, int writingSystem) {
	QString _ret = self->sampleTextForSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontComboBox_SetSampleTextForFont(QFontComboBox* self, struct miqt_string fontFamily, struct miqt_string sampleText) {
	QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
	QString sampleText_QString = QString::fromUtf8(sampleText.data, sampleText.len);
	self->setSampleTextForFont(fontFamily_QString, sampleText_QString);
}

struct miqt_string QFontComboBox_SampleTextForFont(const QFontComboBox* self, struct miqt_string fontFamily) {
	QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
	QString _ret = self->sampleTextForFont(fontFamily_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontComboBox_SetDisplayFont(QFontComboBox* self, struct miqt_string fontFamily, QFont* font) {
	QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
	self->setDisplayFont(fontFamily_QString, *font);
}

void QFontComboBox_SetCurrentFont(QFontComboBox* self, QFont* f) {
	self->setCurrentFont(*f);
}

void QFontComboBox_CurrentFontChanged(QFontComboBox* self, QFont* f) {
	self->currentFontChanged(*f);
}

void QFontComboBox_connect_CurrentFontChanged(QFontComboBox* self, intptr_t slot) {
	MiqtVirtualQFontComboBox::connect(self, static_cast<void (QFontComboBox::*)(const QFont&)>(&QFontComboBox::currentFontChanged), self, [=](const QFont& f) {
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		miqt_exec_callback_QFontComboBox_CurrentFontChanged(slot, sigval1);
	});
}

struct miqt_string QFontComboBox_Tr2(const char* s, const char* c) {
	QString _ret = QFontComboBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFontComboBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFontComboBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontComboBox_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__SizeHint = slot;
}

QSize* QFontComboBox_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_SizeHint();
}

void QFontComboBox_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__Event = slot;
}

bool QFontComboBox_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_Event(e);
}

void QFontComboBox_override_virtual_SetModel(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__SetModel = slot;
}

void QFontComboBox_virtualbase_SetModel(void* self, QAbstractItemModel* model) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_SetModel(model);
}

void QFontComboBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QFontComboBox_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_MinimumSizeHint();
}

void QFontComboBox_override_virtual_ShowPopup(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__ShowPopup = slot;
}

void QFontComboBox_virtualbase_ShowPopup(void* self) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_ShowPopup();
}

void QFontComboBox_override_virtual_HidePopup(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__HidePopup = slot;
}

void QFontComboBox_virtualbase_HidePopup(void* self) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_HidePopup();
}

void QFontComboBox_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QFontComboBox_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_InputMethodQuery(param1);
}

void QFontComboBox_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__FocusInEvent = slot;
}

void QFontComboBox_virtualbase_FocusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_FocusInEvent(e);
}

void QFontComboBox_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__FocusOutEvent = slot;
}

void QFontComboBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_FocusOutEvent(e);
}

void QFontComboBox_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__ChangeEvent = slot;
}

void QFontComboBox_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_ChangeEvent(e);
}

void QFontComboBox_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__ResizeEvent = slot;
}

void QFontComboBox_virtualbase_ResizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_ResizeEvent(e);
}

void QFontComboBox_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__PaintEvent = slot;
}

void QFontComboBox_virtualbase_PaintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_PaintEvent(e);
}

void QFontComboBox_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__ShowEvent = slot;
}

void QFontComboBox_virtualbase_ShowEvent(void* self, QShowEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_ShowEvent(e);
}

void QFontComboBox_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__HideEvent = slot;
}

void QFontComboBox_virtualbase_HideEvent(void* self, QHideEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_HideEvent(e);
}

void QFontComboBox_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__MousePressEvent = slot;
}

void QFontComboBox_virtualbase_MousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_MousePressEvent(e);
}

void QFontComboBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__MouseReleaseEvent = slot;
}

void QFontComboBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_MouseReleaseEvent(e);
}

void QFontComboBox_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__KeyPressEvent = slot;
}

void QFontComboBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_KeyPressEvent(e);
}

void QFontComboBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__KeyReleaseEvent = slot;
}

void QFontComboBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_KeyReleaseEvent(e);
}

void QFontComboBox_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__WheelEvent = slot;
}

void QFontComboBox_virtualbase_WheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_WheelEvent(e);
}

void QFontComboBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__ContextMenuEvent = slot;
}

void QFontComboBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* e) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_ContextMenuEvent(e);
}

void QFontComboBox_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__InputMethodEvent = slot;
}

void QFontComboBox_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQFontComboBox*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QFontComboBox_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFontComboBox*>( (QFontComboBox*)(self) )->handle__InitStyleOption = slot;
}

void QFontComboBox_virtualbase_InitStyleOption(const void* self, QStyleOptionComboBox* option) {
	( (const MiqtVirtualQFontComboBox*)(self) )->virtualbase_InitStyleOption(option);
}

void QFontComboBox_Delete(QFontComboBox* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQFontComboBox*>( self );
	} else {
		delete self;
	}
}

