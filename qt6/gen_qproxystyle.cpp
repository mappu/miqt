#include <QApplication>
#include <QCommonStyle>
#include <QEvent>
#include <QFontMetrics>
#include <QIcon>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QProxyStyle>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleHintReturn>
#include <QStyleOption>
#include <QStyleOptionComplex>
#include <QWidget>
#include <qproxystyle.h>
#include "gen_qproxystyle.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QProxyStyle_DrawPrimitive(void*, intptr_t, int, QStyleOption*, QPainter*, QWidget*);
void miqt_exec_callback_QProxyStyle_DrawControl(void*, intptr_t, int, QStyleOption*, QPainter*, QWidget*);
void miqt_exec_callback_QProxyStyle_DrawComplexControl(void*, intptr_t, int, QStyleOptionComplex*, QPainter*, QWidget*);
void miqt_exec_callback_QProxyStyle_DrawItemText(void*, intptr_t, QPainter*, QRect*, int, QPalette*, bool, struct miqt_string, int);
void miqt_exec_callback_QProxyStyle_DrawItemPixmap(void*, intptr_t, QPainter*, QRect*, int, QPixmap*);
QSize* miqt_exec_callback_QProxyStyle_SizeFromContents(void*, intptr_t, int, QStyleOption*, QSize*, QWidget*);
QRect* miqt_exec_callback_QProxyStyle_SubElementRect(void*, intptr_t, int, QStyleOption*, QWidget*);
QRect* miqt_exec_callback_QProxyStyle_SubControlRect(void*, intptr_t, int, QStyleOptionComplex*, int, QWidget*);
QRect* miqt_exec_callback_QProxyStyle_ItemTextRect(void*, intptr_t, QFontMetrics*, QRect*, int, bool, struct miqt_string);
QRect* miqt_exec_callback_QProxyStyle_ItemPixmapRect(void*, intptr_t, QRect*, int, QPixmap*);
int miqt_exec_callback_QProxyStyle_HitTestComplexControl(void*, intptr_t, int, QStyleOptionComplex*, QPoint*, QWidget*);
int miqt_exec_callback_QProxyStyle_StyleHint(void*, intptr_t, int, QStyleOption*, QWidget*, QStyleHintReturn*);
int miqt_exec_callback_QProxyStyle_PixelMetric(void*, intptr_t, int, QStyleOption*, QWidget*);
int miqt_exec_callback_QProxyStyle_LayoutSpacing(void*, intptr_t, int, int, int, QStyleOption*, QWidget*);
QIcon* miqt_exec_callback_QProxyStyle_StandardIcon(void*, intptr_t, int, QStyleOption*, QWidget*);
QPixmap* miqt_exec_callback_QProxyStyle_StandardPixmap(void*, intptr_t, int, QStyleOption*, QWidget*);
QPixmap* miqt_exec_callback_QProxyStyle_GeneratedIconPixmap(void*, intptr_t, int, QPixmap*, QStyleOption*);
QPalette* miqt_exec_callback_QProxyStyle_StandardPalette(void*, intptr_t);
void miqt_exec_callback_QProxyStyle_Polish(void*, intptr_t, QWidget*);
void miqt_exec_callback_QProxyStyle_PolishWithPal(void*, intptr_t, QPalette*);
void miqt_exec_callback_QProxyStyle_PolishWithApp(void*, intptr_t, QApplication*);
void miqt_exec_callback_QProxyStyle_Unpolish(void*, intptr_t, QWidget*);
void miqt_exec_callback_QProxyStyle_UnpolishWithApp(void*, intptr_t, QApplication*);
bool miqt_exec_callback_QProxyStyle_Event(void*, intptr_t, QEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQProxyStyle : public virtual QProxyStyle {
public:

	MiqtVirtualQProxyStyle(): QProxyStyle() {};
	MiqtVirtualQProxyStyle(const QString& key): QProxyStyle(key) {};
	MiqtVirtualQProxyStyle(QStyle* style): QProxyStyle(style) {};

	virtual ~MiqtVirtualQProxyStyle() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawPrimitive = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPrimitive(QStyle::PrimitiveElement element, const QStyleOption* option, QPainter* painter, const QWidget* widget) const override {
		if (handle__DrawPrimitive == 0) {
			QProxyStyle::drawPrimitive(element, option, painter, widget);
			return;
		}
		
		QStyle::PrimitiveElement element_ret = element;
		int sigval1 = static_cast<int>(element_ret);
		QStyleOption* sigval2 = (QStyleOption*) option;
		QPainter* sigval3 = painter;
		QWidget* sigval4 = (QWidget*) widget;

		miqt_exec_callback_QProxyStyle_DrawPrimitive(const_cast<MiqtVirtualQProxyStyle*>(this), handle__DrawPrimitive, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawPrimitive(int element, QStyleOption* option, QPainter* painter, QWidget* widget) const {

		QProxyStyle::drawPrimitive(static_cast<QStyle::PrimitiveElement>(element), option, painter, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawControl = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawControl(QStyle::ControlElement element, const QStyleOption* option, QPainter* painter, const QWidget* widget) const override {
		if (handle__DrawControl == 0) {
			QProxyStyle::drawControl(element, option, painter, widget);
			return;
		}
		
		QStyle::ControlElement element_ret = element;
		int sigval1 = static_cast<int>(element_ret);
		QStyleOption* sigval2 = (QStyleOption*) option;
		QPainter* sigval3 = painter;
		QWidget* sigval4 = (QWidget*) widget;

		miqt_exec_callback_QProxyStyle_DrawControl(const_cast<MiqtVirtualQProxyStyle*>(this), handle__DrawControl, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawControl(int element, QStyleOption* option, QPainter* painter, QWidget* widget) const {

		QProxyStyle::drawControl(static_cast<QStyle::ControlElement>(element), option, painter, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawComplexControl = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawComplexControl(QStyle::ComplexControl control, const QStyleOptionComplex* option, QPainter* painter, const QWidget* widget) const override {
		if (handle__DrawComplexControl == 0) {
			QProxyStyle::drawComplexControl(control, option, painter, widget);
			return;
		}
		
		QStyle::ComplexControl control_ret = control;
		int sigval1 = static_cast<int>(control_ret);
		QStyleOptionComplex* sigval2 = (QStyleOptionComplex*) option;
		QPainter* sigval3 = painter;
		QWidget* sigval4 = (QWidget*) widget;

		miqt_exec_callback_QProxyStyle_DrawComplexControl(const_cast<MiqtVirtualQProxyStyle*>(this), handle__DrawComplexControl, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawComplexControl(int control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget) const {

		QProxyStyle::drawComplexControl(static_cast<QStyle::ComplexControl>(control), option, painter, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawItemText = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawItemText(QPainter* painter, const QRect& rect, int flags, const QPalette& pal, bool enabled, const QString& text, QPalette::ColorRole textRole) const override {
		if (handle__DrawItemText == 0) {
			QProxyStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
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

		miqt_exec_callback_QProxyStyle_DrawItemText(const_cast<MiqtVirtualQProxyStyle*>(this), handle__DrawItemText, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6, sigval7);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawItemText(QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole) const {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		QProxyStyle::drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawItemPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawItemPixmap(QPainter* painter, const QRect& rect, int alignment, const QPixmap& pixmap) const override {
		if (handle__DrawItemPixmap == 0) {
			QProxyStyle::drawItemPixmap(painter, rect, alignment, pixmap);
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

		miqt_exec_callback_QProxyStyle_DrawItemPixmap(const_cast<MiqtVirtualQProxyStyle*>(this), handle__DrawItemPixmap, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawItemPixmap(QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) const {

		QProxyStyle::drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeFromContents = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeFromContents(QStyle::ContentsType typeVal, const QStyleOption* option, const QSize& size, const QWidget* widget) const override {
		if (handle__SizeFromContents == 0) {
			return QProxyStyle::sizeFromContents(typeVal, option, size, widget);
		}
		
		QStyle::ContentsType typeVal_ret = typeVal;
		int sigval1 = static_cast<int>(typeVal_ret);
		QStyleOption* sigval2 = (QStyleOption*) option;
		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval3 = const_cast<QSize*>(&size_ret);
		QWidget* sigval4 = (QWidget*) widget;

		QSize* callback_return_value = miqt_exec_callback_QProxyStyle_SizeFromContents(const_cast<MiqtVirtualQProxyStyle*>(this), handle__SizeFromContents, sigval1, sigval2, sigval3, sigval4);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeFromContents(int typeVal, QStyleOption* option, QSize* size, QWidget* widget) const {

		return new QSize(QProxyStyle::sizeFromContents(static_cast<QStyle::ContentsType>(typeVal), option, *size, widget));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SubElementRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect subElementRect(QStyle::SubElement element, const QStyleOption* option, const QWidget* widget) const override {
		if (handle__SubElementRect == 0) {
			return QProxyStyle::subElementRect(element, option, widget);
		}
		
		QStyle::SubElement element_ret = element;
		int sigval1 = static_cast<int>(element_ret);
		QStyleOption* sigval2 = (QStyleOption*) option;
		QWidget* sigval3 = (QWidget*) widget;

		QRect* callback_return_value = miqt_exec_callback_QProxyStyle_SubElementRect(const_cast<MiqtVirtualQProxyStyle*>(this), handle__SubElementRect, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_SubElementRect(int element, QStyleOption* option, QWidget* widget) const {

		return new QRect(QProxyStyle::subElementRect(static_cast<QStyle::SubElement>(element), option, widget));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SubControlRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, QStyle::SubControl sc, const QWidget* widget) const override {
		if (handle__SubControlRect == 0) {
			return QProxyStyle::subControlRect(cc, opt, sc, widget);
		}
		
		QStyle::ComplexControl cc_ret = cc;
		int sigval1 = static_cast<int>(cc_ret);
		QStyleOptionComplex* sigval2 = (QStyleOptionComplex*) opt;
		QStyle::SubControl sc_ret = sc;
		int sigval3 = static_cast<int>(sc_ret);
		QWidget* sigval4 = (QWidget*) widget;

		QRect* callback_return_value = miqt_exec_callback_QProxyStyle_SubControlRect(const_cast<MiqtVirtualQProxyStyle*>(this), handle__SubControlRect, sigval1, sigval2, sigval3, sigval4);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_SubControlRect(int cc, QStyleOptionComplex* opt, int sc, QWidget* widget) const {

		return new QRect(QProxyStyle::subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemTextRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect itemTextRect(const QFontMetrics& fm, const QRect& r, int flags, bool enabled, const QString& text) const override {
		if (handle__ItemTextRect == 0) {
			return QProxyStyle::itemTextRect(fm, r, flags, enabled, text);
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

		QRect* callback_return_value = miqt_exec_callback_QProxyStyle_ItemTextRect(const_cast<MiqtVirtualQProxyStyle*>(this), handle__ItemTextRect, sigval1, sigval2, sigval3, sigval4, sigval5);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_ItemTextRect(QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text) const {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		return new QRect(QProxyStyle::itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemPixmapRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect itemPixmapRect(const QRect& r, int flags, const QPixmap& pixmap) const override {
		if (handle__ItemPixmapRect == 0) {
			return QProxyStyle::itemPixmapRect(r, flags, pixmap);
		}
		
		const QRect& r_ret = r;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&r_ret);
		int sigval2 = flags;
		const QPixmap& pixmap_ret = pixmap;
		// Cast returned reference into pointer
		QPixmap* sigval3 = const_cast<QPixmap*>(&pixmap_ret);

		QRect* callback_return_value = miqt_exec_callback_QProxyStyle_ItemPixmapRect(const_cast<MiqtVirtualQProxyStyle*>(this), handle__ItemPixmapRect, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_ItemPixmapRect(QRect* r, int flags, QPixmap* pixmap) const {

		return new QRect(QProxyStyle::itemPixmapRect(*r, static_cast<int>(flags), *pixmap));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HitTestComplexControl = 0;

	// Subclass to allow providing a Go implementation
	virtual QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl control, const QStyleOptionComplex* option, const QPoint& pos, const QWidget* widget) const override {
		if (handle__HitTestComplexControl == 0) {
			return QProxyStyle::hitTestComplexControl(control, option, pos, widget);
		}
		
		QStyle::ComplexControl control_ret = control;
		int sigval1 = static_cast<int>(control_ret);
		QStyleOptionComplex* sigval2 = (QStyleOptionComplex*) option;
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval3 = const_cast<QPoint*>(&pos_ret);
		QWidget* sigval4 = (QWidget*) widget;

		int callback_return_value = miqt_exec_callback_QProxyStyle_HitTestComplexControl(const_cast<MiqtVirtualQProxyStyle*>(this), handle__HitTestComplexControl, sigval1, sigval2, sigval3, sigval4);

		return static_cast<QStyle::SubControl>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HitTestComplexControl(int control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget) const {

		QStyle::SubControl _ret = QProxyStyle::hitTestComplexControl(static_cast<QStyle::ComplexControl>(control), option, *pos, widget);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StyleHint = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleHint(QStyle::StyleHint hint, const QStyleOption* option, const QWidget* widget, QStyleHintReturn* returnData) const override {
		if (handle__StyleHint == 0) {
			return QProxyStyle::styleHint(hint, option, widget, returnData);
		}
		
		QStyle::StyleHint hint_ret = hint;
		int sigval1 = static_cast<int>(hint_ret);
		QStyleOption* sigval2 = (QStyleOption*) option;
		QWidget* sigval3 = (QWidget*) widget;
		QStyleHintReturn* sigval4 = returnData;

		int callback_return_value = miqt_exec_callback_QProxyStyle_StyleHint(const_cast<MiqtVirtualQProxyStyle*>(this), handle__StyleHint, sigval1, sigval2, sigval3, sigval4);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StyleHint(int hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData) const {

		return QProxyStyle::styleHint(static_cast<QStyle::StyleHint>(hint), option, widget, returnData);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PixelMetric = 0;

	// Subclass to allow providing a Go implementation
	virtual int pixelMetric(QStyle::PixelMetric metric, const QStyleOption* option, const QWidget* widget) const override {
		if (handle__PixelMetric == 0) {
			return QProxyStyle::pixelMetric(metric, option, widget);
		}
		
		QStyle::PixelMetric metric_ret = metric;
		int sigval1 = static_cast<int>(metric_ret);
		QStyleOption* sigval2 = (QStyleOption*) option;
		QWidget* sigval3 = (QWidget*) widget;

		int callback_return_value = miqt_exec_callback_QProxyStyle_PixelMetric(const_cast<MiqtVirtualQProxyStyle*>(this), handle__PixelMetric, sigval1, sigval2, sigval3);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_PixelMetric(int metric, QStyleOption* option, QWidget* widget) const {

		return QProxyStyle::pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LayoutSpacing = 0;

	// Subclass to allow providing a Go implementation
	virtual int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption* option, const QWidget* widget) const override {
		if (handle__LayoutSpacing == 0) {
			return QProxyStyle::layoutSpacing(control1, control2, orientation, option, widget);
		}
		
		QSizePolicy::ControlType control1_ret = control1;
		int sigval1 = static_cast<int>(control1_ret);
		QSizePolicy::ControlType control2_ret = control2;
		int sigval2 = static_cast<int>(control2_ret);
		Qt::Orientation orientation_ret = orientation;
		int sigval3 = static_cast<int>(orientation_ret);
		QStyleOption* sigval4 = (QStyleOption*) option;
		QWidget* sigval5 = (QWidget*) widget;

		int callback_return_value = miqt_exec_callback_QProxyStyle_LayoutSpacing(const_cast<MiqtVirtualQProxyStyle*>(this), handle__LayoutSpacing, sigval1, sigval2, sigval3, sigval4, sigval5);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_LayoutSpacing(int control1, int control2, int orientation, QStyleOption* option, QWidget* widget) const {

		return QProxyStyle::layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StandardIcon = 0;

	// Subclass to allow providing a Go implementation
	virtual QIcon standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption* option, const QWidget* widget) const override {
		if (handle__StandardIcon == 0) {
			return QProxyStyle::standardIcon(standardIcon, option, widget);
		}
		
		QStyle::StandardPixmap standardIcon_ret = standardIcon;
		int sigval1 = static_cast<int>(standardIcon_ret);
		QStyleOption* sigval2 = (QStyleOption*) option;
		QWidget* sigval3 = (QWidget*) widget;

		QIcon* callback_return_value = miqt_exec_callback_QProxyStyle_StandardIcon(const_cast<MiqtVirtualQProxyStyle*>(this), handle__StandardIcon, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QIcon* virtualbase_StandardIcon(int standardIcon, QStyleOption* option, QWidget* widget) const {

		return new QIcon(QProxyStyle::standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StandardPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual QPixmap standardPixmap(QStyle::StandardPixmap standardPixmap, const QStyleOption* opt, const QWidget* widget) const override {
		if (handle__StandardPixmap == 0) {
			return QProxyStyle::standardPixmap(standardPixmap, opt, widget);
		}
		
		QStyle::StandardPixmap standardPixmap_ret = standardPixmap;
		int sigval1 = static_cast<int>(standardPixmap_ret);
		QStyleOption* sigval2 = (QStyleOption*) opt;
		QWidget* sigval3 = (QWidget*) widget;

		QPixmap* callback_return_value = miqt_exec_callback_QProxyStyle_StandardPixmap(const_cast<MiqtVirtualQProxyStyle*>(this), handle__StandardPixmap, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPixmap* virtualbase_StandardPixmap(int standardPixmap, QStyleOption* opt, QWidget* widget) const {

		return new QPixmap(QProxyStyle::standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__GeneratedIconPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap& pixmap, const QStyleOption* opt) const override {
		if (handle__GeneratedIconPixmap == 0) {
			return QProxyStyle::generatedIconPixmap(iconMode, pixmap, opt);
		}
		
		QIcon::Mode iconMode_ret = iconMode;
		int sigval1 = static_cast<int>(iconMode_ret);
		const QPixmap& pixmap_ret = pixmap;
		// Cast returned reference into pointer
		QPixmap* sigval2 = const_cast<QPixmap*>(&pixmap_ret);
		QStyleOption* sigval3 = (QStyleOption*) opt;

		QPixmap* callback_return_value = miqt_exec_callback_QProxyStyle_GeneratedIconPixmap(const_cast<MiqtVirtualQProxyStyle*>(this), handle__GeneratedIconPixmap, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPixmap* virtualbase_GeneratedIconPixmap(int iconMode, QPixmap* pixmap, QStyleOption* opt) const {

		return new QPixmap(QProxyStyle::generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StandardPalette = 0;

	// Subclass to allow providing a Go implementation
	virtual QPalette standardPalette() const override {
		if (handle__StandardPalette == 0) {
			return QProxyStyle::standardPalette();
		}
		

		QPalette* callback_return_value = miqt_exec_callback_QProxyStyle_StandardPalette(const_cast<MiqtVirtualQProxyStyle*>(this), handle__StandardPalette);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPalette* virtualbase_StandardPalette() const {

		return new QPalette(QProxyStyle::standardPalette());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Polish = 0;

	// Subclass to allow providing a Go implementation
	virtual void polish(QWidget* widget) override {
		if (handle__Polish == 0) {
			QProxyStyle::polish(widget);
			return;
		}
		
		QWidget* sigval1 = widget;

		miqt_exec_callback_QProxyStyle_Polish(this, handle__Polish, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Polish(QWidget* widget) {

		QProxyStyle::polish(widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PolishWithPal = 0;

	// Subclass to allow providing a Go implementation
	virtual void polish(QPalette& pal) override {
		if (handle__PolishWithPal == 0) {
			QProxyStyle::polish(pal);
			return;
		}
		
		QPalette& pal_ret = pal;
		// Cast returned reference into pointer
		QPalette* sigval1 = &pal_ret;

		miqt_exec_callback_QProxyStyle_PolishWithPal(this, handle__PolishWithPal, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PolishWithPal(QPalette* pal) {

		QProxyStyle::polish(*pal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PolishWithApp = 0;

	// Subclass to allow providing a Go implementation
	virtual void polish(QApplication* app) override {
		if (handle__PolishWithApp == 0) {
			QProxyStyle::polish(app);
			return;
		}
		
		QApplication* sigval1 = app;

		miqt_exec_callback_QProxyStyle_PolishWithApp(this, handle__PolishWithApp, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PolishWithApp(QApplication* app) {

		QProxyStyle::polish(app);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Unpolish = 0;

	// Subclass to allow providing a Go implementation
	virtual void unpolish(QWidget* widget) override {
		if (handle__Unpolish == 0) {
			QProxyStyle::unpolish(widget);
			return;
		}
		
		QWidget* sigval1 = widget;

		miqt_exec_callback_QProxyStyle_Unpolish(this, handle__Unpolish, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Unpolish(QWidget* widget) {

		QProxyStyle::unpolish(widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UnpolishWithApp = 0;

	// Subclass to allow providing a Go implementation
	virtual void unpolish(QApplication* app) override {
		if (handle__UnpolishWithApp == 0) {
			QProxyStyle::unpolish(app);
			return;
		}
		
		QApplication* sigval1 = app;

		miqt_exec_callback_QProxyStyle_UnpolishWithApp(this, handle__UnpolishWithApp, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UnpolishWithApp(QApplication* app) {

		QProxyStyle::unpolish(app);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QProxyStyle::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QProxyStyle_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QProxyStyle::event(e);

	}

};

QProxyStyle* QProxyStyle_new() {
	return new MiqtVirtualQProxyStyle();
}

QProxyStyle* QProxyStyle_new2(struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new MiqtVirtualQProxyStyle(key_QString);
}

QProxyStyle* QProxyStyle_new3(QStyle* style) {
	return new MiqtVirtualQProxyStyle(style);
}

void QProxyStyle_virtbase(QProxyStyle* src, QCommonStyle** outptr_QCommonStyle) {
	*outptr_QCommonStyle = static_cast<QCommonStyle*>(src);
}

QMetaObject* QProxyStyle_MetaObject(const QProxyStyle* self) {
	return (QMetaObject*) self->metaObject();
}

void* QProxyStyle_Metacast(QProxyStyle* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QProxyStyle_Tr(const char* s) {
	QString _ret = QProxyStyle::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QStyle* QProxyStyle_BaseStyle(const QProxyStyle* self) {
	return self->baseStyle();
}

void QProxyStyle_SetBaseStyle(QProxyStyle* self, QStyle* style) {
	self->setBaseStyle(style);
}

void QProxyStyle_DrawPrimitive(const QProxyStyle* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget) {
	self->drawPrimitive(static_cast<QStyle::PrimitiveElement>(element), option, painter, widget);
}

void QProxyStyle_DrawControl(const QProxyStyle* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget) {
	self->drawControl(static_cast<QStyle::ControlElement>(element), option, painter, widget);
}

void QProxyStyle_DrawComplexControl(const QProxyStyle* self, int control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget) {
	self->drawComplexControl(static_cast<QStyle::ComplexControl>(control), option, painter, widget);
}

void QProxyStyle_DrawItemText(const QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
}

void QProxyStyle_DrawItemPixmap(const QProxyStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) {
	self->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
}

QSize* QProxyStyle_SizeFromContents(const QProxyStyle* self, int typeVal, QStyleOption* option, QSize* size, QWidget* widget) {
	return new QSize(self->sizeFromContents(static_cast<QStyle::ContentsType>(typeVal), option, *size, widget));
}

QRect* QProxyStyle_SubElementRect(const QProxyStyle* self, int element, QStyleOption* option, QWidget* widget) {
	return new QRect(self->subElementRect(static_cast<QStyle::SubElement>(element), option, widget));
}

QRect* QProxyStyle_SubControlRect(const QProxyStyle* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* widget) {
	return new QRect(self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget));
}

QRect* QProxyStyle_ItemTextRect(const QProxyStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
}

QRect* QProxyStyle_ItemPixmapRect(const QProxyStyle* self, QRect* r, int flags, QPixmap* pixmap) {
	return new QRect(self->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
}

int QProxyStyle_HitTestComplexControl(const QProxyStyle* self, int control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget) {
	QStyle::SubControl _ret = self->hitTestComplexControl(static_cast<QStyle::ComplexControl>(control), option, *pos, widget);
	return static_cast<int>(_ret);
}

int QProxyStyle_StyleHint(const QProxyStyle* self, int hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData) {
	return self->styleHint(static_cast<QStyle::StyleHint>(hint), option, widget, returnData);
}

int QProxyStyle_PixelMetric(const QProxyStyle* self, int metric, QStyleOption* option, QWidget* widget) {
	return self->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
}

int QProxyStyle_LayoutSpacing(const QProxyStyle* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
}

QIcon* QProxyStyle_StandardIcon(const QProxyStyle* self, int standardIcon, QStyleOption* option, QWidget* widget) {
	return new QIcon(self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget));
}

QPixmap* QProxyStyle_StandardPixmap(const QProxyStyle* self, int standardPixmap, QStyleOption* opt, QWidget* widget) {
	return new QPixmap(self->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget));
}

QPixmap* QProxyStyle_GeneratedIconPixmap(const QProxyStyle* self, int iconMode, QPixmap* pixmap, QStyleOption* opt) {
	return new QPixmap(self->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
}

QPalette* QProxyStyle_StandardPalette(const QProxyStyle* self) {
	return new QPalette(self->standardPalette());
}

void QProxyStyle_Polish(QProxyStyle* self, QWidget* widget) {
	self->polish(widget);
}

void QProxyStyle_PolishWithPal(QProxyStyle* self, QPalette* pal) {
	self->polish(*pal);
}

void QProxyStyle_PolishWithApp(QProxyStyle* self, QApplication* app) {
	self->polish(app);
}

void QProxyStyle_Unpolish(QProxyStyle* self, QWidget* widget) {
	self->unpolish(widget);
}

void QProxyStyle_UnpolishWithApp(QProxyStyle* self, QApplication* app) {
	self->unpolish(app);
}

struct miqt_string QProxyStyle_Tr2(const char* s, const char* c) {
	QString _ret = QProxyStyle::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProxyStyle_Tr3(const char* s, const char* c, int n) {
	QString _ret = QProxyStyle::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProxyStyle_override_virtual_DrawPrimitive(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__DrawPrimitive = slot;
}

void QProxyStyle_virtualbase_DrawPrimitive(const void* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget) {
	( (const MiqtVirtualQProxyStyle*)(self) )->virtualbase_DrawPrimitive(element, option, painter, widget);
}

void QProxyStyle_override_virtual_DrawControl(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__DrawControl = slot;
}

void QProxyStyle_virtualbase_DrawControl(const void* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget) {
	( (const MiqtVirtualQProxyStyle*)(self) )->virtualbase_DrawControl(element, option, painter, widget);
}

void QProxyStyle_override_virtual_DrawComplexControl(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__DrawComplexControl = slot;
}

void QProxyStyle_virtualbase_DrawComplexControl(const void* self, int control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget) {
	( (const MiqtVirtualQProxyStyle*)(self) )->virtualbase_DrawComplexControl(control, option, painter, widget);
}

void QProxyStyle_override_virtual_DrawItemText(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__DrawItemText = slot;
}

void QProxyStyle_virtualbase_DrawItemText(const void* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole) {
	( (const MiqtVirtualQProxyStyle*)(self) )->virtualbase_DrawItemText(painter, rect, flags, pal, enabled, text, textRole);
}

void QProxyStyle_override_virtual_DrawItemPixmap(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__DrawItemPixmap = slot;
}

void QProxyStyle_virtualbase_DrawItemPixmap(const void* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) {
	( (const MiqtVirtualQProxyStyle*)(self) )->virtualbase_DrawItemPixmap(painter, rect, alignment, pixmap);
}

void QProxyStyle_override_virtual_SizeFromContents(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__SizeFromContents = slot;
}

QSize* QProxyStyle_virtualbase_SizeFromContents(const void* self, int typeVal, QStyleOption* option, QSize* size, QWidget* widget) {
	return ( (const MiqtVirtualQProxyStyle*)(self) )->virtualbase_SizeFromContents(typeVal, option, size, widget);
}

void QProxyStyle_override_virtual_SubElementRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__SubElementRect = slot;
}

QRect* QProxyStyle_virtualbase_SubElementRect(const void* self, int element, QStyleOption* option, QWidget* widget) {
	return ( (const MiqtVirtualQProxyStyle*)(self) )->virtualbase_SubElementRect(element, option, widget);
}

void QProxyStyle_override_virtual_SubControlRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__SubControlRect = slot;
}

QRect* QProxyStyle_virtualbase_SubControlRect(const void* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* widget) {
	return ( (const MiqtVirtualQProxyStyle*)(self) )->virtualbase_SubControlRect(cc, opt, sc, widget);
}

void QProxyStyle_override_virtual_ItemTextRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__ItemTextRect = slot;
}

QRect* QProxyStyle_virtualbase_ItemTextRect(const void* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text) {
	return ( (const MiqtVirtualQProxyStyle*)(self) )->virtualbase_ItemTextRect(fm, r, flags, enabled, text);
}

void QProxyStyle_override_virtual_ItemPixmapRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__ItemPixmapRect = slot;
}

QRect* QProxyStyle_virtualbase_ItemPixmapRect(const void* self, QRect* r, int flags, QPixmap* pixmap) {
	return ( (const MiqtVirtualQProxyStyle*)(self) )->virtualbase_ItemPixmapRect(r, flags, pixmap);
}

void QProxyStyle_override_virtual_HitTestComplexControl(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__HitTestComplexControl = slot;
}

int QProxyStyle_virtualbase_HitTestComplexControl(const void* self, int control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget) {
	return ( (const MiqtVirtualQProxyStyle*)(self) )->virtualbase_HitTestComplexControl(control, option, pos, widget);
}

void QProxyStyle_override_virtual_StyleHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__StyleHint = slot;
}

int QProxyStyle_virtualbase_StyleHint(const void* self, int hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData) {
	return ( (const MiqtVirtualQProxyStyle*)(self) )->virtualbase_StyleHint(hint, option, widget, returnData);
}

void QProxyStyle_override_virtual_PixelMetric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__PixelMetric = slot;
}

int QProxyStyle_virtualbase_PixelMetric(const void* self, int metric, QStyleOption* option, QWidget* widget) {
	return ( (const MiqtVirtualQProxyStyle*)(self) )->virtualbase_PixelMetric(metric, option, widget);
}

void QProxyStyle_override_virtual_LayoutSpacing(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__LayoutSpacing = slot;
}

int QProxyStyle_virtualbase_LayoutSpacing(const void* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget) {
	return ( (const MiqtVirtualQProxyStyle*)(self) )->virtualbase_LayoutSpacing(control1, control2, orientation, option, widget);
}

void QProxyStyle_override_virtual_StandardIcon(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__StandardIcon = slot;
}

QIcon* QProxyStyle_virtualbase_StandardIcon(const void* self, int standardIcon, QStyleOption* option, QWidget* widget) {
	return ( (const MiqtVirtualQProxyStyle*)(self) )->virtualbase_StandardIcon(standardIcon, option, widget);
}

void QProxyStyle_override_virtual_StandardPixmap(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__StandardPixmap = slot;
}

QPixmap* QProxyStyle_virtualbase_StandardPixmap(const void* self, int standardPixmap, QStyleOption* opt, QWidget* widget) {
	return ( (const MiqtVirtualQProxyStyle*)(self) )->virtualbase_StandardPixmap(standardPixmap, opt, widget);
}

void QProxyStyle_override_virtual_GeneratedIconPixmap(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__GeneratedIconPixmap = slot;
}

QPixmap* QProxyStyle_virtualbase_GeneratedIconPixmap(const void* self, int iconMode, QPixmap* pixmap, QStyleOption* opt) {
	return ( (const MiqtVirtualQProxyStyle*)(self) )->virtualbase_GeneratedIconPixmap(iconMode, pixmap, opt);
}

void QProxyStyle_override_virtual_StandardPalette(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__StandardPalette = slot;
}

QPalette* QProxyStyle_virtualbase_StandardPalette(const void* self) {
	return ( (const MiqtVirtualQProxyStyle*)(self) )->virtualbase_StandardPalette();
}

void QProxyStyle_override_virtual_Polish(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__Polish = slot;
}

void QProxyStyle_virtualbase_Polish(void* self, QWidget* widget) {
	( (MiqtVirtualQProxyStyle*)(self) )->virtualbase_Polish(widget);
}

void QProxyStyle_override_virtual_PolishWithPal(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__PolishWithPal = slot;
}

void QProxyStyle_virtualbase_PolishWithPal(void* self, QPalette* pal) {
	( (MiqtVirtualQProxyStyle*)(self) )->virtualbase_PolishWithPal(pal);
}

void QProxyStyle_override_virtual_PolishWithApp(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__PolishWithApp = slot;
}

void QProxyStyle_virtualbase_PolishWithApp(void* self, QApplication* app) {
	( (MiqtVirtualQProxyStyle*)(self) )->virtualbase_PolishWithApp(app);
}

void QProxyStyle_override_virtual_Unpolish(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__Unpolish = slot;
}

void QProxyStyle_virtualbase_Unpolish(void* self, QWidget* widget) {
	( (MiqtVirtualQProxyStyle*)(self) )->virtualbase_Unpolish(widget);
}

void QProxyStyle_override_virtual_UnpolishWithApp(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__UnpolishWithApp = slot;
}

void QProxyStyle_virtualbase_UnpolishWithApp(void* self, QApplication* app) {
	( (MiqtVirtualQProxyStyle*)(self) )->virtualbase_UnpolishWithApp(app);
}

void QProxyStyle_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) )->handle__Event = slot;
}

bool QProxyStyle_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQProxyStyle*)(self) )->virtualbase_Event(e);
}

void QProxyStyle_Delete(QProxyStyle* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQProxyStyle*>( self );
	} else {
		delete self;
	}
}

