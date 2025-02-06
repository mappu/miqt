#include <QApplication>
#include <QChildEvent>
#include <QEvent>
#include <QFontMetrics>
#include <QIcon>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleHintReturn>
#include <QStyleOption>
#include <QStyleOptionComplex>
#include <QTimerEvent>
#include <QWidget>
#include <qstyle.h>
#include "gen_qstyle.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QStyle_polish(QStyle*, intptr_t, QWidget*);
void miqt_exec_callback_QStyle_unpolish(QStyle*, intptr_t, QWidget*);
void miqt_exec_callback_QStyle_polishWithApplication(QStyle*, intptr_t, QApplication*);
void miqt_exec_callback_QStyle_unpolishWithApplication(QStyle*, intptr_t, QApplication*);
void miqt_exec_callback_QStyle_polishWithPalette(QStyle*, intptr_t, QPalette*);
QRect* miqt_exec_callback_QStyle_itemTextRect(const QStyle*, intptr_t, QFontMetrics*, QRect*, int, bool, struct miqt_string);
QRect* miqt_exec_callback_QStyle_itemPixmapRect(const QStyle*, intptr_t, QRect*, int, QPixmap*);
void miqt_exec_callback_QStyle_drawItemText(const QStyle*, intptr_t, QPainter*, QRect*, int, QPalette*, bool, struct miqt_string, int);
void miqt_exec_callback_QStyle_drawItemPixmap(const QStyle*, intptr_t, QPainter*, QRect*, int, QPixmap*);
QPalette* miqt_exec_callback_QStyle_standardPalette(const QStyle*, intptr_t);
void miqt_exec_callback_QStyle_drawPrimitive(const QStyle*, intptr_t, int, QStyleOption*, QPainter*, QWidget*);
void miqt_exec_callback_QStyle_drawControl(const QStyle*, intptr_t, int, QStyleOption*, QPainter*, QWidget*);
QRect* miqt_exec_callback_QStyle_subElementRect(const QStyle*, intptr_t, int, QStyleOption*, QWidget*);
void miqt_exec_callback_QStyle_drawComplexControl(const QStyle*, intptr_t, int, QStyleOptionComplex*, QPainter*, QWidget*);
int miqt_exec_callback_QStyle_hitTestComplexControl(const QStyle*, intptr_t, int, QStyleOptionComplex*, QPoint*, QWidget*);
QRect* miqt_exec_callback_QStyle_subControlRect(const QStyle*, intptr_t, int, QStyleOptionComplex*, int, QWidget*);
int miqt_exec_callback_QStyle_pixelMetric(const QStyle*, intptr_t, int, QStyleOption*, QWidget*);
QSize* miqt_exec_callback_QStyle_sizeFromContents(const QStyle*, intptr_t, int, QStyleOption*, QSize*, QWidget*);
int miqt_exec_callback_QStyle_styleHint(const QStyle*, intptr_t, int, QStyleOption*, QWidget*, QStyleHintReturn*);
QPixmap* miqt_exec_callback_QStyle_standardPixmap(const QStyle*, intptr_t, int, QStyleOption*, QWidget*);
QIcon* miqt_exec_callback_QStyle_standardIcon(const QStyle*, intptr_t, int, QStyleOption*, QWidget*);
QPixmap* miqt_exec_callback_QStyle_generatedIconPixmap(const QStyle*, intptr_t, int, QPixmap*, QStyleOption*);
int miqt_exec_callback_QStyle_layoutSpacing(const QStyle*, intptr_t, int, int, int, QStyleOption*, QWidget*);
bool miqt_exec_callback_QStyle_event(QStyle*, intptr_t, QEvent*);
bool miqt_exec_callback_QStyle_eventFilter(QStyle*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QStyle_timerEvent(QStyle*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QStyle_childEvent(QStyle*, intptr_t, QChildEvent*);
void miqt_exec_callback_QStyle_customEvent(QStyle*, intptr_t, QEvent*);
void miqt_exec_callback_QStyle_connectNotify(QStyle*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QStyle_disconnectNotify(QStyle*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQStyle final : public QStyle {
public:

	MiqtVirtualQStyle(): QStyle() {};

	virtual ~MiqtVirtualQStyle() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__polish = 0;

	// Subclass to allow providing a Go implementation
	virtual void polish(QWidget* widget) override {
		if (handle__polish == 0) {
			QStyle::polish(widget);
			return;
		}
		
		QWidget* sigval1 = widget;

		miqt_exec_callback_QStyle_polish(this, handle__polish, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_polish(QWidget* widget) {

		QStyle::polish(widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__unpolish = 0;

	// Subclass to allow providing a Go implementation
	virtual void unpolish(QWidget* widget) override {
		if (handle__unpolish == 0) {
			QStyle::unpolish(widget);
			return;
		}
		
		QWidget* sigval1 = widget;

		miqt_exec_callback_QStyle_unpolish(this, handle__unpolish, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_unpolish(QWidget* widget) {

		QStyle::unpolish(widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__polishWithApplication = 0;

	// Subclass to allow providing a Go implementation
	virtual void polish(QApplication* application) override {
		if (handle__polishWithApplication == 0) {
			QStyle::polish(application);
			return;
		}
		
		QApplication* sigval1 = application;

		miqt_exec_callback_QStyle_polishWithApplication(this, handle__polishWithApplication, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_polishWithApplication(QApplication* application) {

		QStyle::polish(application);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__unpolishWithApplication = 0;

	// Subclass to allow providing a Go implementation
	virtual void unpolish(QApplication* application) override {
		if (handle__unpolishWithApplication == 0) {
			QStyle::unpolish(application);
			return;
		}
		
		QApplication* sigval1 = application;

		miqt_exec_callback_QStyle_unpolishWithApplication(this, handle__unpolishWithApplication, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_unpolishWithApplication(QApplication* application) {

		QStyle::unpolish(application);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__polishWithPalette = 0;

	// Subclass to allow providing a Go implementation
	virtual void polish(QPalette& palette) override {
		if (handle__polishWithPalette == 0) {
			QStyle::polish(palette);
			return;
		}
		
		QPalette& palette_ret = palette;
		// Cast returned reference into pointer
		QPalette* sigval1 = &palette_ret;

		miqt_exec_callback_QStyle_polishWithPalette(this, handle__polishWithPalette, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_polishWithPalette(QPalette* palette) {

		QStyle::polish(*palette);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemTextRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect itemTextRect(const QFontMetrics& fm, const QRect& r, int flags, bool enabled, const QString& text) const override {
		if (handle__itemTextRect == 0) {
			return QStyle::itemTextRect(fm, r, flags, enabled, text);
		}
		
		const QFontMetrics& fm_ret = fm;
		// Cast returned reference into pointer
		QFontMetrics* sigval1 = const_cast<QFontMetrics*>(&fm_ret);
		const QRect& r_ret = r;
		// Cast returned reference into pointer
		QRect* sigval2 = const_cast<QRect*>(&r_ret);
		int sigval3 = flags;
		bool sigval4 = enabled;
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval5 = text_ms;

		QRect* callback_return_value = miqt_exec_callback_QStyle_itemTextRect(this, handle__itemTextRect, sigval1, sigval2, sigval3, sigval4, sigval5);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_itemTextRect(QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text) const {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		return new QRect(QStyle::itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemPixmapRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect itemPixmapRect(const QRect& r, int flags, const QPixmap& pixmap) const override {
		if (handle__itemPixmapRect == 0) {
			return QStyle::itemPixmapRect(r, flags, pixmap);
		}
		
		const QRect& r_ret = r;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&r_ret);
		int sigval2 = flags;
		const QPixmap& pixmap_ret = pixmap;
		// Cast returned reference into pointer
		QPixmap* sigval3 = const_cast<QPixmap*>(&pixmap_ret);

		QRect* callback_return_value = miqt_exec_callback_QStyle_itemPixmapRect(this, handle__itemPixmapRect, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_itemPixmapRect(QRect* r, int flags, QPixmap* pixmap) const {

		return new QRect(QStyle::itemPixmapRect(*r, static_cast<int>(flags), *pixmap));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawItemText = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawItemText(QPainter* painter, const QRect& rect, int flags, const QPalette& pal, bool enabled, const QString& text, QPalette::ColorRole textRole) const override {
		if (handle__drawItemText == 0) {
			QStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval2 = const_cast<QRect*>(&rect_ret);
		int sigval3 = flags;
		const QPalette& pal_ret = pal;
		// Cast returned reference into pointer
		QPalette* sigval4 = const_cast<QPalette*>(&pal_ret);
		bool sigval5 = enabled;
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval6 = text_ms;
		QPalette::ColorRole textRole_ret = textRole;
		int sigval7 = static_cast<int>(textRole_ret);

		miqt_exec_callback_QStyle_drawItemText(this, handle__drawItemText, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6, sigval7);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawItemText(QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole) const {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		QStyle::drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawItemPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawItemPixmap(QPainter* painter, const QRect& rect, int alignment, const QPixmap& pixmap) const override {
		if (handle__drawItemPixmap == 0) {
			QStyle::drawItemPixmap(painter, rect, alignment, pixmap);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval2 = const_cast<QRect*>(&rect_ret);
		int sigval3 = alignment;
		const QPixmap& pixmap_ret = pixmap;
		// Cast returned reference into pointer
		QPixmap* sigval4 = const_cast<QPixmap*>(&pixmap_ret);

		miqt_exec_callback_QStyle_drawItemPixmap(this, handle__drawItemPixmap, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawItemPixmap(QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) const {

		QStyle::drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__standardPalette = 0;

	// Subclass to allow providing a Go implementation
	virtual QPalette standardPalette() const override {
		if (handle__standardPalette == 0) {
			return QStyle::standardPalette();
		}
		

		QPalette* callback_return_value = miqt_exec_callback_QStyle_standardPalette(this, handle__standardPalette);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPalette* virtualbase_standardPalette() const {

		return new QPalette(QStyle::standardPalette());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawPrimitive = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption* opt, QPainter* p, const QWidget* w) const override {
		if (handle__drawPrimitive == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QStyle::PrimitiveElement pe_ret = pe;
		int sigval1 = static_cast<int>(pe_ret);
		QStyleOption* sigval2 = (QStyleOption*) opt;
		QPainter* sigval3 = p;
		QWidget* sigval4 = (QWidget*) w;

		miqt_exec_callback_QStyle_drawPrimitive(this, handle__drawPrimitive, sigval1, sigval2, sigval3, sigval4);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawControl = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawControl(QStyle::ControlElement element, const QStyleOption* opt, QPainter* p, const QWidget* w) const override {
		if (handle__drawControl == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QStyle::ControlElement element_ret = element;
		int sigval1 = static_cast<int>(element_ret);
		QStyleOption* sigval2 = (QStyleOption*) opt;
		QPainter* sigval3 = p;
		QWidget* sigval4 = (QWidget*) w;

		miqt_exec_callback_QStyle_drawControl(this, handle__drawControl, sigval1, sigval2, sigval3, sigval4);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__subElementRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect subElementRect(QStyle::SubElement subElement, const QStyleOption* option, const QWidget* widget) const override {
		if (handle__subElementRect == 0) {
			return QRect(); // Pure virtual, there is no base we can call
		}
		
		QStyle::SubElement subElement_ret = subElement;
		int sigval1 = static_cast<int>(subElement_ret);
		QStyleOption* sigval2 = (QStyleOption*) option;
		QWidget* sigval3 = (QWidget*) widget;

		QRect* callback_return_value = miqt_exec_callback_QStyle_subElementRect(this, handle__subElementRect, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawComplexControl = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* widget) const override {
		if (handle__drawComplexControl == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QStyle::ComplexControl cc_ret = cc;
		int sigval1 = static_cast<int>(cc_ret);
		QStyleOptionComplex* sigval2 = (QStyleOptionComplex*) opt;
		QPainter* sigval3 = p;
		QWidget* sigval4 = (QWidget*) widget;

		miqt_exec_callback_QStyle_drawComplexControl(this, handle__drawComplexControl, sigval1, sigval2, sigval3, sigval4);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hitTestComplexControl = 0;

	// Subclass to allow providing a Go implementation
	virtual QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, const QPoint& pt, const QWidget* widget) const override {
		if (handle__hitTestComplexControl == 0) {
			return (QStyle::SubControl)(0); // Pure virtual, there is no base we can call
		}
		
		QStyle::ComplexControl cc_ret = cc;
		int sigval1 = static_cast<int>(cc_ret);
		QStyleOptionComplex* sigval2 = (QStyleOptionComplex*) opt;
		const QPoint& pt_ret = pt;
		// Cast returned reference into pointer
		QPoint* sigval3 = const_cast<QPoint*>(&pt_ret);
		QWidget* sigval4 = (QWidget*) widget;

		int callback_return_value = miqt_exec_callback_QStyle_hitTestComplexControl(this, handle__hitTestComplexControl, sigval1, sigval2, sigval3, sigval4);

		return static_cast<QStyle::SubControl>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__subControlRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, QStyle::SubControl sc, const QWidget* widget) const override {
		if (handle__subControlRect == 0) {
			return QRect(); // Pure virtual, there is no base we can call
		}
		
		QStyle::ComplexControl cc_ret = cc;
		int sigval1 = static_cast<int>(cc_ret);
		QStyleOptionComplex* sigval2 = (QStyleOptionComplex*) opt;
		QStyle::SubControl sc_ret = sc;
		int sigval3 = static_cast<int>(sc_ret);
		QWidget* sigval4 = (QWidget*) widget;

		QRect* callback_return_value = miqt_exec_callback_QStyle_subControlRect(this, handle__subControlRect, sigval1, sigval2, sigval3, sigval4);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__pixelMetric = 0;

	// Subclass to allow providing a Go implementation
	virtual int pixelMetric(QStyle::PixelMetric metric, const QStyleOption* option, const QWidget* widget) const override {
		if (handle__pixelMetric == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		QStyle::PixelMetric metric_ret = metric;
		int sigval1 = static_cast<int>(metric_ret);
		QStyleOption* sigval2 = (QStyleOption*) option;
		QWidget* sigval3 = (QWidget*) widget;

		int callback_return_value = miqt_exec_callback_QStyle_pixelMetric(this, handle__pixelMetric, sigval1, sigval2, sigval3);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeFromContents = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeFromContents(QStyle::ContentsType ct, const QStyleOption* opt, const QSize& contentsSize, const QWidget* w) const override {
		if (handle__sizeFromContents == 0) {
			return QSize(); // Pure virtual, there is no base we can call
		}
		
		QStyle::ContentsType ct_ret = ct;
		int sigval1 = static_cast<int>(ct_ret);
		QStyleOption* sigval2 = (QStyleOption*) opt;
		const QSize& contentsSize_ret = contentsSize;
		// Cast returned reference into pointer
		QSize* sigval3 = const_cast<QSize*>(&contentsSize_ret);
		QWidget* sigval4 = (QWidget*) w;

		QSize* callback_return_value = miqt_exec_callback_QStyle_sizeFromContents(this, handle__sizeFromContents, sigval1, sigval2, sigval3, sigval4);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__styleHint = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleHint(QStyle::StyleHint stylehint, const QStyleOption* opt, const QWidget* widget, QStyleHintReturn* returnData) const override {
		if (handle__styleHint == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		QStyle::StyleHint stylehint_ret = stylehint;
		int sigval1 = static_cast<int>(stylehint_ret);
		QStyleOption* sigval2 = (QStyleOption*) opt;
		QWidget* sigval3 = (QWidget*) widget;
		QStyleHintReturn* sigval4 = returnData;

		int callback_return_value = miqt_exec_callback_QStyle_styleHint(this, handle__styleHint, sigval1, sigval2, sigval3, sigval4);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__standardPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual QPixmap standardPixmap(QStyle::StandardPixmap standardPixmap, const QStyleOption* opt, const QWidget* widget) const override {
		if (handle__standardPixmap == 0) {
			return QPixmap(); // Pure virtual, there is no base we can call
		}
		
		QStyle::StandardPixmap standardPixmap_ret = standardPixmap;
		int sigval1 = static_cast<int>(standardPixmap_ret);
		QStyleOption* sigval2 = (QStyleOption*) opt;
		QWidget* sigval3 = (QWidget*) widget;

		QPixmap* callback_return_value = miqt_exec_callback_QStyle_standardPixmap(this, handle__standardPixmap, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__standardIcon = 0;

	// Subclass to allow providing a Go implementation
	virtual QIcon standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption* option, const QWidget* widget) const override {
		if (handle__standardIcon == 0) {
			return QIcon(); // Pure virtual, there is no base we can call
		}
		
		QStyle::StandardPixmap standardIcon_ret = standardIcon;
		int sigval1 = static_cast<int>(standardIcon_ret);
		QStyleOption* sigval2 = (QStyleOption*) option;
		QWidget* sigval3 = (QWidget*) widget;

		QIcon* callback_return_value = miqt_exec_callback_QStyle_standardIcon(this, handle__standardIcon, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__generatedIconPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap& pixmap, const QStyleOption* opt) const override {
		if (handle__generatedIconPixmap == 0) {
			return QPixmap(); // Pure virtual, there is no base we can call
		}
		
		QIcon::Mode iconMode_ret = iconMode;
		int sigval1 = static_cast<int>(iconMode_ret);
		const QPixmap& pixmap_ret = pixmap;
		// Cast returned reference into pointer
		QPixmap* sigval2 = const_cast<QPixmap*>(&pixmap_ret);
		QStyleOption* sigval3 = (QStyleOption*) opt;

		QPixmap* callback_return_value = miqt_exec_callback_QStyle_generatedIconPixmap(this, handle__generatedIconPixmap, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__layoutSpacing = 0;

	// Subclass to allow providing a Go implementation
	virtual int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption* option, const QWidget* widget) const override {
		if (handle__layoutSpacing == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		QSizePolicy::ControlType control1_ret = control1;
		int sigval1 = static_cast<int>(control1_ret);
		QSizePolicy::ControlType control2_ret = control2;
		int sigval2 = static_cast<int>(control2_ret);
		Qt::Orientation orientation_ret = orientation;
		int sigval3 = static_cast<int>(orientation_ret);
		QStyleOption* sigval4 = (QStyleOption*) option;
		QWidget* sigval5 = (QWidget*) widget;

		int callback_return_value = miqt_exec_callback_QStyle_layoutSpacing(this, handle__layoutSpacing, sigval1, sigval2, sigval3, sigval4, sigval5);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QStyle::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QStyle_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QStyle::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QStyle::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QStyle_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QStyle::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QStyle::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QStyle_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QStyle::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QStyle::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QStyle_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QStyle::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QStyle::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStyle_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QStyle::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QStyle::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStyle_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QStyle::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QStyle::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStyle_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QStyle::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QStyle_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QStyle_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QStyle_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QStyle_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QStyle* QStyle_new() {
	return new MiqtVirtualQStyle();
}

void QStyle_virtbase(QStyle* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QStyle_metaObject(const QStyle* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStyle_metacast(QStyle* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStyle_tr(const char* s) {
	QString _ret = QStyle::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyle_trUtf8(const char* s) {
	QString _ret = QStyle::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStyle_polish(QStyle* self, QWidget* widget) {
	self->polish(widget);
}

void QStyle_unpolish(QStyle* self, QWidget* widget) {
	self->unpolish(widget);
}

void QStyle_polishWithApplication(QStyle* self, QApplication* application) {
	self->polish(application);
}

void QStyle_unpolishWithApplication(QStyle* self, QApplication* application) {
	self->unpolish(application);
}

void QStyle_polishWithPalette(QStyle* self, QPalette* palette) {
	self->polish(*palette);
}

QRect* QStyle_itemTextRect(const QStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
}

QRect* QStyle_itemPixmapRect(const QStyle* self, QRect* r, int flags, QPixmap* pixmap) {
	return new QRect(self->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
}

void QStyle_drawItemText(const QStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
}

void QStyle_drawItemPixmap(const QStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) {
	self->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
}

QPalette* QStyle_standardPalette(const QStyle* self) {
	return new QPalette(self->standardPalette());
}

void QStyle_drawPrimitive(const QStyle* self, int pe, QStyleOption* opt, QPainter* p, QWidget* w) {
	self->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
}

void QStyle_drawControl(const QStyle* self, int element, QStyleOption* opt, QPainter* p, QWidget* w) {
	self->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
}

QRect* QStyle_subElementRect(const QStyle* self, int subElement, QStyleOption* option, QWidget* widget) {
	return new QRect(self->subElementRect(static_cast<QStyle::SubElement>(subElement), option, widget));
}

void QStyle_drawComplexControl(const QStyle* self, int cc, QStyleOptionComplex* opt, QPainter* p, QWidget* widget) {
	self->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, widget);
}

int QStyle_hitTestComplexControl(const QStyle* self, int cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* widget) {
	QStyle::SubControl _ret = self->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, widget);
	return static_cast<int>(_ret);
}

QRect* QStyle_subControlRect(const QStyle* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* widget) {
	return new QRect(self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget));
}

int QStyle_pixelMetric(const QStyle* self, int metric, QStyleOption* option, QWidget* widget) {
	return self->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
}

QSize* QStyle_sizeFromContents(const QStyle* self, int ct, QStyleOption* opt, QSize* contentsSize, QWidget* w) {
	return new QSize(self->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, w));
}

int QStyle_styleHint(const QStyle* self, int stylehint, QStyleOption* opt, QWidget* widget, QStyleHintReturn* returnData) {
	return self->styleHint(static_cast<QStyle::StyleHint>(stylehint), opt, widget, returnData);
}

QPixmap* QStyle_standardPixmap(const QStyle* self, int standardPixmap, QStyleOption* opt, QWidget* widget) {
	return new QPixmap(self->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget));
}

QIcon* QStyle_standardIcon(const QStyle* self, int standardIcon, QStyleOption* option, QWidget* widget) {
	return new QIcon(self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget));
}

QPixmap* QStyle_generatedIconPixmap(const QStyle* self, int iconMode, QPixmap* pixmap, QStyleOption* opt) {
	return new QPixmap(self->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
}

QRect* QStyle_visualRect(int direction, QRect* boundingRect, QRect* logicalRect) {
	return new QRect(QStyle::visualRect(static_cast<Qt::LayoutDirection>(direction), *boundingRect, *logicalRect));
}

QPoint* QStyle_visualPos(int direction, QRect* boundingRect, QPoint* logicalPos) {
	return new QPoint(QStyle::visualPos(static_cast<Qt::LayoutDirection>(direction), *boundingRect, *logicalPos));
}

int QStyle_sliderPositionFromValue(int min, int max, int val, int space) {
	return QStyle::sliderPositionFromValue(static_cast<int>(min), static_cast<int>(max), static_cast<int>(val), static_cast<int>(space));
}

int QStyle_sliderValueFromPosition(int min, int max, int pos, int space) {
	return QStyle::sliderValueFromPosition(static_cast<int>(min), static_cast<int>(max), static_cast<int>(pos), static_cast<int>(space));
}

int QStyle_visualAlignment(int direction, int alignment) {
	Qt::Alignment _ret = QStyle::visualAlignment(static_cast<Qt::LayoutDirection>(direction), static_cast<Qt::Alignment>(alignment));
	return static_cast<int>(_ret);
}

QRect* QStyle_alignedRect(int direction, int alignment, QSize* size, QRect* rectangle) {
	return new QRect(QStyle::alignedRect(static_cast<Qt::LayoutDirection>(direction), static_cast<Qt::Alignment>(alignment), *size, *rectangle));
}

int QStyle_layoutSpacing(const QStyle* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
}

int QStyle_combinedLayoutSpacing(const QStyle* self, int controls1, int controls2, int orientation) {
	return self->combinedLayoutSpacing(static_cast<QSizePolicy::ControlTypes>(controls1), static_cast<QSizePolicy::ControlTypes>(controls2), static_cast<Qt::Orientation>(orientation));
}

QStyle* QStyle_proxy(const QStyle* self) {
	return (QStyle*) self->proxy();
}

struct miqt_string QStyle_tr2(const char* s, const char* c) {
	QString _ret = QStyle::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyle_tr3(const char* s, const char* c, int n) {
	QString _ret = QStyle::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyle_trUtf82(const char* s, const char* c) {
	QString _ret = QStyle::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyle_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QStyle::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QStyle_sliderPositionFromValue5(int min, int max, int val, int space, bool upsideDown) {
	return QStyle::sliderPositionFromValue(static_cast<int>(min), static_cast<int>(max), static_cast<int>(val), static_cast<int>(space), upsideDown);
}

int QStyle_sliderValueFromPosition5(int min, int max, int pos, int space, bool upsideDown) {
	return QStyle::sliderValueFromPosition(static_cast<int>(min), static_cast<int>(max), static_cast<int>(pos), static_cast<int>(space), upsideDown);
}

int QStyle_combinedLayoutSpacing4(const QStyle* self, int controls1, int controls2, int orientation, QStyleOption* option) {
	return self->combinedLayoutSpacing(static_cast<QSizePolicy::ControlTypes>(controls1), static_cast<QSizePolicy::ControlTypes>(controls2), static_cast<Qt::Orientation>(orientation), option);
}

int QStyle_combinedLayoutSpacing5(const QStyle* self, int controls1, int controls2, int orientation, QStyleOption* option, QWidget* widget) {
	return self->combinedLayoutSpacing(static_cast<QSizePolicy::ControlTypes>(controls1), static_cast<QSizePolicy::ControlTypes>(controls2), static_cast<Qt::Orientation>(orientation), option, widget);
}

bool QStyle_override_virtual_polish(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__polish = slot;
	return true;
}

void QStyle_virtualbase_polish(void* self, QWidget* widget) {
	( (MiqtVirtualQStyle*)(self) )->virtualbase_polish(widget);
}

bool QStyle_override_virtual_unpolish(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__unpolish = slot;
	return true;
}

void QStyle_virtualbase_unpolish(void* self, QWidget* widget) {
	( (MiqtVirtualQStyle*)(self) )->virtualbase_unpolish(widget);
}

bool QStyle_override_virtual_polishWithApplication(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__polishWithApplication = slot;
	return true;
}

void QStyle_virtualbase_polishWithApplication(void* self, QApplication* application) {
	( (MiqtVirtualQStyle*)(self) )->virtualbase_polishWithApplication(application);
}

bool QStyle_override_virtual_unpolishWithApplication(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__unpolishWithApplication = slot;
	return true;
}

void QStyle_virtualbase_unpolishWithApplication(void* self, QApplication* application) {
	( (MiqtVirtualQStyle*)(self) )->virtualbase_unpolishWithApplication(application);
}

bool QStyle_override_virtual_polishWithPalette(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__polishWithPalette = slot;
	return true;
}

void QStyle_virtualbase_polishWithPalette(void* self, QPalette* palette) {
	( (MiqtVirtualQStyle*)(self) )->virtualbase_polishWithPalette(palette);
}

bool QStyle_override_virtual_itemTextRect(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemTextRect = slot;
	return true;
}

QRect* QStyle_virtualbase_itemTextRect(const void* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text) {
	return ( (const MiqtVirtualQStyle*)(self) )->virtualbase_itemTextRect(fm, r, flags, enabled, text);
}

bool QStyle_override_virtual_itemPixmapRect(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemPixmapRect = slot;
	return true;
}

QRect* QStyle_virtualbase_itemPixmapRect(const void* self, QRect* r, int flags, QPixmap* pixmap) {
	return ( (const MiqtVirtualQStyle*)(self) )->virtualbase_itemPixmapRect(r, flags, pixmap);
}

bool QStyle_override_virtual_drawItemText(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawItemText = slot;
	return true;
}

void QStyle_virtualbase_drawItemText(const void* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole) {
	( (const MiqtVirtualQStyle*)(self) )->virtualbase_drawItemText(painter, rect, flags, pal, enabled, text, textRole);
}

bool QStyle_override_virtual_drawItemPixmap(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawItemPixmap = slot;
	return true;
}

void QStyle_virtualbase_drawItemPixmap(const void* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) {
	( (const MiqtVirtualQStyle*)(self) )->virtualbase_drawItemPixmap(painter, rect, alignment, pixmap);
}

bool QStyle_override_virtual_standardPalette(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__standardPalette = slot;
	return true;
}

QPalette* QStyle_virtualbase_standardPalette(const void* self) {
	return ( (const MiqtVirtualQStyle*)(self) )->virtualbase_standardPalette();
}

bool QStyle_override_virtual_drawPrimitive(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawPrimitive = slot;
	return true;
}

bool QStyle_override_virtual_drawControl(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawControl = slot;
	return true;
}

bool QStyle_override_virtual_subElementRect(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__subElementRect = slot;
	return true;
}

bool QStyle_override_virtual_drawComplexControl(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawComplexControl = slot;
	return true;
}

bool QStyle_override_virtual_hitTestComplexControl(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hitTestComplexControl = slot;
	return true;
}

bool QStyle_override_virtual_subControlRect(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__subControlRect = slot;
	return true;
}

bool QStyle_override_virtual_pixelMetric(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__pixelMetric = slot;
	return true;
}

bool QStyle_override_virtual_sizeFromContents(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeFromContents = slot;
	return true;
}

bool QStyle_override_virtual_styleHint(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__styleHint = slot;
	return true;
}

bool QStyle_override_virtual_standardPixmap(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__standardPixmap = slot;
	return true;
}

bool QStyle_override_virtual_standardIcon(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__standardIcon = slot;
	return true;
}

bool QStyle_override_virtual_generatedIconPixmap(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__generatedIconPixmap = slot;
	return true;
}

bool QStyle_override_virtual_layoutSpacing(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__layoutSpacing = slot;
	return true;
}

bool QStyle_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QStyle_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQStyle*)(self) )->virtualbase_event(event);
}

bool QStyle_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QStyle_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQStyle*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QStyle_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QStyle_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQStyle*)(self) )->virtualbase_timerEvent(event);
}

bool QStyle_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QStyle_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQStyle*)(self) )->virtualbase_childEvent(event);
}

bool QStyle_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QStyle_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQStyle*)(self) )->virtualbase_customEvent(event);
}

bool QStyle_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QStyle_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStyle*)(self) )->virtualbase_connectNotify(signal);
}

bool QStyle_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QStyle_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStyle*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QStyle_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QStyle_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QStyle_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QStyle_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQStyle* self_cast = dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QStyle_delete(QStyle* self) {
	delete self;
}

