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
#include "_cgo_export.h"

class MiqtVirtualQStyle : public virtual QStyle {
public:

	MiqtVirtualQStyle(): QStyle() {};

	virtual ~MiqtVirtualQStyle() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Polish = 0;

	// Subclass to allow providing a Go implementation
	virtual void polish(QWidget* widget) override {
		if (handle__Polish == 0) {
			QStyle::polish(widget);
			return;
		}
		
		QWidget* sigval1 = widget;

		miqt_exec_callback_QStyle_Polish(this, handle__Polish, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Polish(QWidget* widget) {

		QStyle::polish(widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Unpolish = 0;

	// Subclass to allow providing a Go implementation
	virtual void unpolish(QWidget* widget) override {
		if (handle__Unpolish == 0) {
			QStyle::unpolish(widget);
			return;
		}
		
		QWidget* sigval1 = widget;

		miqt_exec_callback_QStyle_Unpolish(this, handle__Unpolish, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Unpolish(QWidget* widget) {

		QStyle::unpolish(widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PolishWithApplication = 0;

	// Subclass to allow providing a Go implementation
	virtual void polish(QApplication* application) override {
		if (handle__PolishWithApplication == 0) {
			QStyle::polish(application);
			return;
		}
		
		QApplication* sigval1 = application;

		miqt_exec_callback_QStyle_PolishWithApplication(this, handle__PolishWithApplication, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PolishWithApplication(QApplication* application) {

		QStyle::polish(application);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UnpolishWithApplication = 0;

	// Subclass to allow providing a Go implementation
	virtual void unpolish(QApplication* application) override {
		if (handle__UnpolishWithApplication == 0) {
			QStyle::unpolish(application);
			return;
		}
		
		QApplication* sigval1 = application;

		miqt_exec_callback_QStyle_UnpolishWithApplication(this, handle__UnpolishWithApplication, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UnpolishWithApplication(QApplication* application) {

		QStyle::unpolish(application);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PolishWithPalette = 0;

	// Subclass to allow providing a Go implementation
	virtual void polish(QPalette& palette) override {
		if (handle__PolishWithPalette == 0) {
			QStyle::polish(palette);
			return;
		}
		
		QPalette& palette_ret = palette;
		// Cast returned reference into pointer
		QPalette* sigval1 = &palette_ret;

		miqt_exec_callback_QStyle_PolishWithPalette(this, handle__PolishWithPalette, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PolishWithPalette(QPalette* palette) {

		QStyle::polish(*palette);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemTextRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect itemTextRect(const QFontMetrics& fm, const QRect& r, int flags, bool enabled, const QString& text) const override {
		if (handle__ItemTextRect == 0) {
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

		QRect* callback_return_value = miqt_exec_callback_QStyle_ItemTextRect(const_cast<MiqtVirtualQStyle*>(this), handle__ItemTextRect, sigval1, sigval2, sigval3, sigval4, sigval5);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_ItemTextRect(QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text) const {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		return new QRect(QStyle::itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemPixmapRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect itemPixmapRect(const QRect& r, int flags, const QPixmap& pixmap) const override {
		if (handle__ItemPixmapRect == 0) {
			return QStyle::itemPixmapRect(r, flags, pixmap);
		}
		
		const QRect& r_ret = r;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&r_ret);
		int sigval2 = flags;
		const QPixmap& pixmap_ret = pixmap;
		// Cast returned reference into pointer
		QPixmap* sigval3 = const_cast<QPixmap*>(&pixmap_ret);

		QRect* callback_return_value = miqt_exec_callback_QStyle_ItemPixmapRect(const_cast<MiqtVirtualQStyle*>(this), handle__ItemPixmapRect, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_ItemPixmapRect(QRect* r, int flags, QPixmap* pixmap) const {

		return new QRect(QStyle::itemPixmapRect(*r, static_cast<int>(flags), *pixmap));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawItemText = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawItemText(QPainter* painter, const QRect& rect, int flags, const QPalette& pal, bool enabled, const QString& text, QPalette::ColorRole textRole) const override {
		if (handle__DrawItemText == 0) {
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

		miqt_exec_callback_QStyle_DrawItemText(const_cast<MiqtVirtualQStyle*>(this), handle__DrawItemText, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6, sigval7);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawItemText(QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole) const {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		QStyle::drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawItemPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawItemPixmap(QPainter* painter, const QRect& rect, int alignment, const QPixmap& pixmap) const override {
		if (handle__DrawItemPixmap == 0) {
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

		miqt_exec_callback_QStyle_DrawItemPixmap(const_cast<MiqtVirtualQStyle*>(this), handle__DrawItemPixmap, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawItemPixmap(QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) const {

		QStyle::drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StandardPalette = 0;

	// Subclass to allow providing a Go implementation
	virtual QPalette standardPalette() const override {
		if (handle__StandardPalette == 0) {
			return QStyle::standardPalette();
		}
		

		QPalette* callback_return_value = miqt_exec_callback_QStyle_StandardPalette(const_cast<MiqtVirtualQStyle*>(this), handle__StandardPalette);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPalette* virtualbase_StandardPalette() const {

		return new QPalette(QStyle::standardPalette());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawPrimitive = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption* opt, QPainter* p, const QWidget* w) const override {
		if (handle__DrawPrimitive == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QStyle::PrimitiveElement pe_ret = pe;
		int sigval1 = static_cast<int>(pe_ret);
		QStyleOption* sigval2 = (QStyleOption*) opt;
		QPainter* sigval3 = p;
		QWidget* sigval4 = (QWidget*) w;

		miqt_exec_callback_QStyle_DrawPrimitive(const_cast<MiqtVirtualQStyle*>(this), handle__DrawPrimitive, sigval1, sigval2, sigval3, sigval4);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawControl = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawControl(QStyle::ControlElement element, const QStyleOption* opt, QPainter* p, const QWidget* w) const override {
		if (handle__DrawControl == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QStyle::ControlElement element_ret = element;
		int sigval1 = static_cast<int>(element_ret);
		QStyleOption* sigval2 = (QStyleOption*) opt;
		QPainter* sigval3 = p;
		QWidget* sigval4 = (QWidget*) w;

		miqt_exec_callback_QStyle_DrawControl(const_cast<MiqtVirtualQStyle*>(this), handle__DrawControl, sigval1, sigval2, sigval3, sigval4);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SubElementRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect subElementRect(QStyle::SubElement subElement, const QStyleOption* option, const QWidget* widget) const override {
		if (handle__SubElementRect == 0) {
			return QRect(); // Pure virtual, there is no base we can call
		}
		
		QStyle::SubElement subElement_ret = subElement;
		int sigval1 = static_cast<int>(subElement_ret);
		QStyleOption* sigval2 = (QStyleOption*) option;
		QWidget* sigval3 = (QWidget*) widget;

		QRect* callback_return_value = miqt_exec_callback_QStyle_SubElementRect(const_cast<MiqtVirtualQStyle*>(this), handle__SubElementRect, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawComplexControl = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* widget) const override {
		if (handle__DrawComplexControl == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QStyle::ComplexControl cc_ret = cc;
		int sigval1 = static_cast<int>(cc_ret);
		QStyleOptionComplex* sigval2 = (QStyleOptionComplex*) opt;
		QPainter* sigval3 = p;
		QWidget* sigval4 = (QWidget*) widget;

		miqt_exec_callback_QStyle_DrawComplexControl(const_cast<MiqtVirtualQStyle*>(this), handle__DrawComplexControl, sigval1, sigval2, sigval3, sigval4);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HitTestComplexControl = 0;

	// Subclass to allow providing a Go implementation
	virtual QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, const QPoint& pt, const QWidget* widget) const override {
		if (handle__HitTestComplexControl == 0) {
			return (QStyle::SubControl)(0); // Pure virtual, there is no base we can call
		}
		
		QStyle::ComplexControl cc_ret = cc;
		int sigval1 = static_cast<int>(cc_ret);
		QStyleOptionComplex* sigval2 = (QStyleOptionComplex*) opt;
		const QPoint& pt_ret = pt;
		// Cast returned reference into pointer
		QPoint* sigval3 = const_cast<QPoint*>(&pt_ret);
		QWidget* sigval4 = (QWidget*) widget;

		int callback_return_value = miqt_exec_callback_QStyle_HitTestComplexControl(const_cast<MiqtVirtualQStyle*>(this), handle__HitTestComplexControl, sigval1, sigval2, sigval3, sigval4);

		return static_cast<QStyle::SubControl>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SubControlRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, QStyle::SubControl sc, const QWidget* widget) const override {
		if (handle__SubControlRect == 0) {
			return QRect(); // Pure virtual, there is no base we can call
		}
		
		QStyle::ComplexControl cc_ret = cc;
		int sigval1 = static_cast<int>(cc_ret);
		QStyleOptionComplex* sigval2 = (QStyleOptionComplex*) opt;
		QStyle::SubControl sc_ret = sc;
		int sigval3 = static_cast<int>(sc_ret);
		QWidget* sigval4 = (QWidget*) widget;

		QRect* callback_return_value = miqt_exec_callback_QStyle_SubControlRect(const_cast<MiqtVirtualQStyle*>(this), handle__SubControlRect, sigval1, sigval2, sigval3, sigval4);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PixelMetric = 0;

	// Subclass to allow providing a Go implementation
	virtual int pixelMetric(QStyle::PixelMetric metric, const QStyleOption* option, const QWidget* widget) const override {
		if (handle__PixelMetric == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		QStyle::PixelMetric metric_ret = metric;
		int sigval1 = static_cast<int>(metric_ret);
		QStyleOption* sigval2 = (QStyleOption*) option;
		QWidget* sigval3 = (QWidget*) widget;

		int callback_return_value = miqt_exec_callback_QStyle_PixelMetric(const_cast<MiqtVirtualQStyle*>(this), handle__PixelMetric, sigval1, sigval2, sigval3);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeFromContents = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeFromContents(QStyle::ContentsType ct, const QStyleOption* opt, const QSize& contentsSize, const QWidget* w) const override {
		if (handle__SizeFromContents == 0) {
			return QSize(); // Pure virtual, there is no base we can call
		}
		
		QStyle::ContentsType ct_ret = ct;
		int sigval1 = static_cast<int>(ct_ret);
		QStyleOption* sigval2 = (QStyleOption*) opt;
		const QSize& contentsSize_ret = contentsSize;
		// Cast returned reference into pointer
		QSize* sigval3 = const_cast<QSize*>(&contentsSize_ret);
		QWidget* sigval4 = (QWidget*) w;

		QSize* callback_return_value = miqt_exec_callback_QStyle_SizeFromContents(const_cast<MiqtVirtualQStyle*>(this), handle__SizeFromContents, sigval1, sigval2, sigval3, sigval4);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StyleHint = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleHint(QStyle::StyleHint stylehint, const QStyleOption* opt, const QWidget* widget, QStyleHintReturn* returnData) const override {
		if (handle__StyleHint == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		QStyle::StyleHint stylehint_ret = stylehint;
		int sigval1 = static_cast<int>(stylehint_ret);
		QStyleOption* sigval2 = (QStyleOption*) opt;
		QWidget* sigval3 = (QWidget*) widget;
		QStyleHintReturn* sigval4 = returnData;

		int callback_return_value = miqt_exec_callback_QStyle_StyleHint(const_cast<MiqtVirtualQStyle*>(this), handle__StyleHint, sigval1, sigval2, sigval3, sigval4);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StandardPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual QPixmap standardPixmap(QStyle::StandardPixmap standardPixmap, const QStyleOption* opt, const QWidget* widget) const override {
		if (handle__StandardPixmap == 0) {
			return QPixmap(); // Pure virtual, there is no base we can call
		}
		
		QStyle::StandardPixmap standardPixmap_ret = standardPixmap;
		int sigval1 = static_cast<int>(standardPixmap_ret);
		QStyleOption* sigval2 = (QStyleOption*) opt;
		QWidget* sigval3 = (QWidget*) widget;

		QPixmap* callback_return_value = miqt_exec_callback_QStyle_StandardPixmap(const_cast<MiqtVirtualQStyle*>(this), handle__StandardPixmap, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StandardIcon = 0;

	// Subclass to allow providing a Go implementation
	virtual QIcon standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption* option, const QWidget* widget) const override {
		if (handle__StandardIcon == 0) {
			return QIcon(); // Pure virtual, there is no base we can call
		}
		
		QStyle::StandardPixmap standardIcon_ret = standardIcon;
		int sigval1 = static_cast<int>(standardIcon_ret);
		QStyleOption* sigval2 = (QStyleOption*) option;
		QWidget* sigval3 = (QWidget*) widget;

		QIcon* callback_return_value = miqt_exec_callback_QStyle_StandardIcon(const_cast<MiqtVirtualQStyle*>(this), handle__StandardIcon, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__GeneratedIconPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap& pixmap, const QStyleOption* opt) const override {
		if (handle__GeneratedIconPixmap == 0) {
			return QPixmap(); // Pure virtual, there is no base we can call
		}
		
		QIcon::Mode iconMode_ret = iconMode;
		int sigval1 = static_cast<int>(iconMode_ret);
		const QPixmap& pixmap_ret = pixmap;
		// Cast returned reference into pointer
		QPixmap* sigval2 = const_cast<QPixmap*>(&pixmap_ret);
		QStyleOption* sigval3 = (QStyleOption*) opt;

		QPixmap* callback_return_value = miqt_exec_callback_QStyle_GeneratedIconPixmap(const_cast<MiqtVirtualQStyle*>(this), handle__GeneratedIconPixmap, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LayoutSpacing = 0;

	// Subclass to allow providing a Go implementation
	virtual int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption* option, const QWidget* widget) const override {
		if (handle__LayoutSpacing == 0) {
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

		int callback_return_value = miqt_exec_callback_QStyle_LayoutSpacing(const_cast<MiqtVirtualQStyle*>(this), handle__LayoutSpacing, sigval1, sigval2, sigval3, sigval4, sigval5);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QStyle::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QStyle_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QStyle::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QStyle::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QStyle_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QStyle::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QStyle::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QStyle_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QStyle::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QStyle::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QStyle_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QStyle::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QStyle::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStyle_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QStyle::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QStyle::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStyle_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QStyle::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QStyle::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStyle_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QStyle::disconnectNotify(*signal);

	}

};

QStyle* QStyle_new() {
	return new MiqtVirtualQStyle();
}

void QStyle_virtbase(QStyle* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QStyle_MetaObject(const QStyle* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStyle_Metacast(QStyle* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStyle_Tr(const char* s) {
	QString _ret = QStyle::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyle_TrUtf8(const char* s) {
	QString _ret = QStyle::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStyle_Polish(QStyle* self, QWidget* widget) {
	self->polish(widget);
}

void QStyle_Unpolish(QStyle* self, QWidget* widget) {
	self->unpolish(widget);
}

void QStyle_PolishWithApplication(QStyle* self, QApplication* application) {
	self->polish(application);
}

void QStyle_UnpolishWithApplication(QStyle* self, QApplication* application) {
	self->unpolish(application);
}

void QStyle_PolishWithPalette(QStyle* self, QPalette* palette) {
	self->polish(*palette);
}

QRect* QStyle_ItemTextRect(const QStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
}

QRect* QStyle_ItemPixmapRect(const QStyle* self, QRect* r, int flags, QPixmap* pixmap) {
	return new QRect(self->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
}

void QStyle_DrawItemText(const QStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
}

void QStyle_DrawItemPixmap(const QStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) {
	self->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
}

QPalette* QStyle_StandardPalette(const QStyle* self) {
	return new QPalette(self->standardPalette());
}

void QStyle_DrawPrimitive(const QStyle* self, int pe, QStyleOption* opt, QPainter* p, QWidget* w) {
	self->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
}

void QStyle_DrawControl(const QStyle* self, int element, QStyleOption* opt, QPainter* p, QWidget* w) {
	self->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
}

QRect* QStyle_SubElementRect(const QStyle* self, int subElement, QStyleOption* option, QWidget* widget) {
	return new QRect(self->subElementRect(static_cast<QStyle::SubElement>(subElement), option, widget));
}

void QStyle_DrawComplexControl(const QStyle* self, int cc, QStyleOptionComplex* opt, QPainter* p, QWidget* widget) {
	self->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, widget);
}

int QStyle_HitTestComplexControl(const QStyle* self, int cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* widget) {
	QStyle::SubControl _ret = self->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, widget);
	return static_cast<int>(_ret);
}

QRect* QStyle_SubControlRect(const QStyle* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* widget) {
	return new QRect(self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget));
}

int QStyle_PixelMetric(const QStyle* self, int metric, QStyleOption* option, QWidget* widget) {
	return self->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
}

QSize* QStyle_SizeFromContents(const QStyle* self, int ct, QStyleOption* opt, QSize* contentsSize, QWidget* w) {
	return new QSize(self->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, w));
}

int QStyle_StyleHint(const QStyle* self, int stylehint, QStyleOption* opt, QWidget* widget, QStyleHintReturn* returnData) {
	return self->styleHint(static_cast<QStyle::StyleHint>(stylehint), opt, widget, returnData);
}

QPixmap* QStyle_StandardPixmap(const QStyle* self, int standardPixmap, QStyleOption* opt, QWidget* widget) {
	return new QPixmap(self->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget));
}

QIcon* QStyle_StandardIcon(const QStyle* self, int standardIcon, QStyleOption* option, QWidget* widget) {
	return new QIcon(self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget));
}

QPixmap* QStyle_GeneratedIconPixmap(const QStyle* self, int iconMode, QPixmap* pixmap, QStyleOption* opt) {
	return new QPixmap(self->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
}

QRect* QStyle_VisualRect(int direction, QRect* boundingRect, QRect* logicalRect) {
	return new QRect(QStyle::visualRect(static_cast<Qt::LayoutDirection>(direction), *boundingRect, *logicalRect));
}

QPoint* QStyle_VisualPos(int direction, QRect* boundingRect, QPoint* logicalPos) {
	return new QPoint(QStyle::visualPos(static_cast<Qt::LayoutDirection>(direction), *boundingRect, *logicalPos));
}

int QStyle_SliderPositionFromValue(int min, int max, int val, int space) {
	return QStyle::sliderPositionFromValue(static_cast<int>(min), static_cast<int>(max), static_cast<int>(val), static_cast<int>(space));
}

int QStyle_SliderValueFromPosition(int min, int max, int pos, int space) {
	return QStyle::sliderValueFromPosition(static_cast<int>(min), static_cast<int>(max), static_cast<int>(pos), static_cast<int>(space));
}

int QStyle_VisualAlignment(int direction, int alignment) {
	Qt::Alignment _ret = QStyle::visualAlignment(static_cast<Qt::LayoutDirection>(direction), static_cast<Qt::Alignment>(alignment));
	return static_cast<int>(_ret);
}

QRect* QStyle_AlignedRect(int direction, int alignment, QSize* size, QRect* rectangle) {
	return new QRect(QStyle::alignedRect(static_cast<Qt::LayoutDirection>(direction), static_cast<Qt::Alignment>(alignment), *size, *rectangle));
}

int QStyle_LayoutSpacing(const QStyle* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
}

int QStyle_CombinedLayoutSpacing(const QStyle* self, int controls1, int controls2, int orientation) {
	return self->combinedLayoutSpacing(static_cast<QSizePolicy::ControlTypes>(controls1), static_cast<QSizePolicy::ControlTypes>(controls2), static_cast<Qt::Orientation>(orientation));
}

QStyle* QStyle_Proxy(const QStyle* self) {
	return (QStyle*) self->proxy();
}

struct miqt_string QStyle_Tr2(const char* s, const char* c) {
	QString _ret = QStyle::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyle_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStyle::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyle_TrUtf82(const char* s, const char* c) {
	QString _ret = QStyle::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyle_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QStyle::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QStyle_SliderPositionFromValue5(int min, int max, int val, int space, bool upsideDown) {
	return QStyle::sliderPositionFromValue(static_cast<int>(min), static_cast<int>(max), static_cast<int>(val), static_cast<int>(space), upsideDown);
}

int QStyle_SliderValueFromPosition5(int min, int max, int pos, int space, bool upsideDown) {
	return QStyle::sliderValueFromPosition(static_cast<int>(min), static_cast<int>(max), static_cast<int>(pos), static_cast<int>(space), upsideDown);
}

int QStyle_CombinedLayoutSpacing4(const QStyle* self, int controls1, int controls2, int orientation, QStyleOption* option) {
	return self->combinedLayoutSpacing(static_cast<QSizePolicy::ControlTypes>(controls1), static_cast<QSizePolicy::ControlTypes>(controls2), static_cast<Qt::Orientation>(orientation), option);
}

int QStyle_CombinedLayoutSpacing5(const QStyle* self, int controls1, int controls2, int orientation, QStyleOption* option, QWidget* widget) {
	return self->combinedLayoutSpacing(static_cast<QSizePolicy::ControlTypes>(controls1), static_cast<QSizePolicy::ControlTypes>(controls2), static_cast<Qt::Orientation>(orientation), option, widget);
}

void QStyle_override_virtual_Polish(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__Polish = slot;
}

void QStyle_virtualbase_Polish(void* self, QWidget* widget) {
	( (MiqtVirtualQStyle*)(self) )->virtualbase_Polish(widget);
}

void QStyle_override_virtual_Unpolish(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__Unpolish = slot;
}

void QStyle_virtualbase_Unpolish(void* self, QWidget* widget) {
	( (MiqtVirtualQStyle*)(self) )->virtualbase_Unpolish(widget);
}

void QStyle_override_virtual_PolishWithApplication(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__PolishWithApplication = slot;
}

void QStyle_virtualbase_PolishWithApplication(void* self, QApplication* application) {
	( (MiqtVirtualQStyle*)(self) )->virtualbase_PolishWithApplication(application);
}

void QStyle_override_virtual_UnpolishWithApplication(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__UnpolishWithApplication = slot;
}

void QStyle_virtualbase_UnpolishWithApplication(void* self, QApplication* application) {
	( (MiqtVirtualQStyle*)(self) )->virtualbase_UnpolishWithApplication(application);
}

void QStyle_override_virtual_PolishWithPalette(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__PolishWithPalette = slot;
}

void QStyle_virtualbase_PolishWithPalette(void* self, QPalette* palette) {
	( (MiqtVirtualQStyle*)(self) )->virtualbase_PolishWithPalette(palette);
}

void QStyle_override_virtual_ItemTextRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__ItemTextRect = slot;
}

QRect* QStyle_virtualbase_ItemTextRect(const void* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text) {
	return ( (const MiqtVirtualQStyle*)(self) )->virtualbase_ItemTextRect(fm, r, flags, enabled, text);
}

void QStyle_override_virtual_ItemPixmapRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__ItemPixmapRect = slot;
}

QRect* QStyle_virtualbase_ItemPixmapRect(const void* self, QRect* r, int flags, QPixmap* pixmap) {
	return ( (const MiqtVirtualQStyle*)(self) )->virtualbase_ItemPixmapRect(r, flags, pixmap);
}

void QStyle_override_virtual_DrawItemText(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__DrawItemText = slot;
}

void QStyle_virtualbase_DrawItemText(const void* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole) {
	( (const MiqtVirtualQStyle*)(self) )->virtualbase_DrawItemText(painter, rect, flags, pal, enabled, text, textRole);
}

void QStyle_override_virtual_DrawItemPixmap(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__DrawItemPixmap = slot;
}

void QStyle_virtualbase_DrawItemPixmap(const void* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) {
	( (const MiqtVirtualQStyle*)(self) )->virtualbase_DrawItemPixmap(painter, rect, alignment, pixmap);
}

void QStyle_override_virtual_StandardPalette(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__StandardPalette = slot;
}

QPalette* QStyle_virtualbase_StandardPalette(const void* self) {
	return ( (const MiqtVirtualQStyle*)(self) )->virtualbase_StandardPalette();
}

void QStyle_override_virtual_DrawPrimitive(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__DrawPrimitive = slot;
}

void QStyle_override_virtual_DrawControl(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__DrawControl = slot;
}

void QStyle_override_virtual_SubElementRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__SubElementRect = slot;
}

void QStyle_override_virtual_DrawComplexControl(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__DrawComplexControl = slot;
}

void QStyle_override_virtual_HitTestComplexControl(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__HitTestComplexControl = slot;
}

void QStyle_override_virtual_SubControlRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__SubControlRect = slot;
}

void QStyle_override_virtual_PixelMetric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__PixelMetric = slot;
}

void QStyle_override_virtual_SizeFromContents(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__SizeFromContents = slot;
}

void QStyle_override_virtual_StyleHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__StyleHint = slot;
}

void QStyle_override_virtual_StandardPixmap(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__StandardPixmap = slot;
}

void QStyle_override_virtual_StandardIcon(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__StandardIcon = slot;
}

void QStyle_override_virtual_GeneratedIconPixmap(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__GeneratedIconPixmap = slot;
}

void QStyle_override_virtual_LayoutSpacing(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__LayoutSpacing = slot;
}

void QStyle_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__Event = slot;
}

bool QStyle_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQStyle*)(self) )->virtualbase_Event(event);
}

void QStyle_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__EventFilter = slot;
}

bool QStyle_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQStyle*)(self) )->virtualbase_EventFilter(watched, event);
}

void QStyle_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__TimerEvent = slot;
}

void QStyle_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQStyle*)(self) )->virtualbase_TimerEvent(event);
}

void QStyle_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__ChildEvent = slot;
}

void QStyle_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQStyle*)(self) )->virtualbase_ChildEvent(event);
}

void QStyle_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__CustomEvent = slot;
}

void QStyle_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQStyle*)(self) )->virtualbase_CustomEvent(event);
}

void QStyle_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__ConnectNotify = slot;
}

void QStyle_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStyle*)(self) )->virtualbase_ConnectNotify(signal);
}

void QStyle_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyle*>( (QStyle*)(self) )->handle__DisconnectNotify = slot;
}

void QStyle_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStyle*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QStyle_Delete(QStyle* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQStyle*>( self );
	} else {
		delete self;
	}
}

