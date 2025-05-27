package main

import (
	"fmt"
	"go/format"
	"regexp"
	"strconv"
	"strings"
)

type generateState struct {
	UseQt6             bool
	RootWindowName     string
	DefaultGridMargin  int
	DefaultSpacing     int
	IconCounter        int
	trackWidgetClasses map[string]string
}

func NewGenerateState(useQt6 bool) *generateState {
	return &generateState{
		UseQt6:             useQt6,
		RootWindowName:     "",
		DefaultGridMargin:  11,
		DefaultSpacing:     6,
		IconCounter:        0,
		trackWidgetClasses: make(map[string]string),
	}
}

func (gs *generateState) collectClassNames_Layout(l *UiLayout) []string {
	var ret []string

	if l.Name != "" {
		ret = append(ret, l.Name+" *qt."+l.Class)
		gs.trackWidgetClasses[l.Name] = l.Class
	}

	for _, li := range l.Items {
		if li.Widget != nil {
			ret = append(ret, gs.collectClassNames_Widget(li.Widget)...)
		}
		if li.Spacer != nil {
			ret = append(ret, li.Spacer.Name+" *qt.QSpacerItem")
		}
		if li.Layout != nil {
			ret = append(ret, gs.collectClassNames_Layout(li.Layout)...)
		}
	}

	return ret
}

func (gs *generateState) collectClassNames_Widget(u *UiWidget) []string {
	var ret []string

	if u.Name != "" {
		ret = append(ret, u.Name+" *qt."+u.Class)
		gs.trackWidgetClasses[u.Name] = u.Class
	}

	for _, w := range u.Widgets {
		ret = append(ret, gs.collectClassNames_Widget(&w)...)
	}
	if u.Layout != nil {
		ret = append(ret, gs.collectClassNames_Layout(u.Layout)...)
	}
	for _, a := range u.Actions {
		ret = append(ret, a.Name+" *qt.QAction")
	}
	return ret
}

func (gs *generateState) generateString(s *UiString, parentClass string) string {
	if s.Notr || parentClass == "" {
		return strconv.Quote(s.Value)
	}
	return `qt.` + parentClass + `_Tr(` + strconv.Quote(s.Value) + `)`
}

// qwidgetName creates the T.QWidget name that MIQT needs to access the base class.
func qwidgetName(name string, class string) string {
	if name == "" {
		return "nil"
	}
	if class == "QWidget" {
		return name // It's already the right type
	}
	return name + ".QWidget"
}

func normalizeEnumName(s string) string {
	if strings.HasPrefix(s, `Qt::`) {
		s = s[4:]
	}

	return `qt.` + strings.Replace(s, `::`, `__`, -1)
}

func normalizeIconThemeName(themeName string) string {
	// Qt 6.8++ emits the theme in enum format: `QIcon::ThemeIcon::ApplicationExit`
	// Older Qt emits it as a string const: `application-exit`
	// For compatibility, detect and convert to old-style names
	// @ref https://github.com/mappu/miqt/issues/228

	const prefix = `QIcon::ThemeIcon::`

	if !strings.HasPrefix(themeName, prefix) {
		return themeName
	}

	ret := regexp.MustCompile(`[A-Z]`).ReplaceAllStringFunc(themeName[len(prefix):], func(s string) string {
		return `-` + strings.ToLower(s)
	})
	return strings.TrimPrefix(ret, `-`)
}

func (gs *generateState) renderIcon(iconVal *UiIcon, ret *strings.Builder) string {

	iconName := fmt.Sprintf("icon%d", gs.IconCounter)
	gs.IconCounter++

	if iconVal.Theme != "" {
		ret.WriteString(iconName + ` := qt.QIcon_FromTheme(` + strconv.Quote(normalizeIconThemeName(iconVal.Theme)) + ")\n")
	} else {
		ret.WriteString(iconName + " := qt.NewQIcon()\n")
	}

	// A base entry is a synonym for NormalOff. Don't need them both
	if iconVal.NormalOff != nil && *iconVal.NormalOff != "." {
		ret.WriteString(iconName + ".AddFile4(" + strconv.Quote(*iconVal.NormalOff) + ", qt.NewQSize(), qt.QIcon__Normal, qt.QIcon__Off)\n")
	} else {
		base := strings.TrimSpace(iconVal.Base)
		if base == "" || base == "." {
			// skip
		} else {
			ret.WriteString(iconName + ".AddFile(" + strconv.Quote(strings.TrimSpace(iconVal.Base)) + ")\n")
		}
	}

	if iconVal.NormalOn != nil {
		ret.WriteString(iconName + ".AddFile4(" + strconv.Quote(*iconVal.NormalOn) + ", qt.NewQSize(), qt.QIcon__Normal, qt.QIcon__On)\n")
	}
	if iconVal.ActiveOff != nil {
		ret.WriteString(iconName + ".AddFile4(" + strconv.Quote(*iconVal.NormalOn) + ", qt.NewQSize(), qt.QIcon__Active, qt.QIcon__Off)\n")
	}
	if iconVal.ActiveOn != nil {
		ret.WriteString(iconName + ".AddFile4(" + strconv.Quote(*iconVal.NormalOn) + ", qt.NewQSize(), qt.QIcon__Active, qt.QIcon__On)\n")
	}
	if iconVal.DisabledOff != nil {
		ret.WriteString(iconName + ".AddFile4(" + strconv.Quote(*iconVal.NormalOn) + ", qt.NewQSize(), qt.QIcon__Disabled, qt.QIcon__Off)\n")
	}
	if iconVal.DisabledOn != nil {
		ret.WriteString(iconName + ".AddFile4(" + strconv.Quote(*iconVal.NormalOn) + ", qt.NewQSize(), qt.QIcon__Disabled, qt.QIcon__On)\n")
	}
	if iconVal.SelectedOff != nil {
		ret.WriteString(iconName + ".AddFile4(" + strconv.Quote(*iconVal.NormalOn) + ", qt.NewQSize(), qt.QIcon__Selected, qt.QIcon__Off)\n")
	}
	if iconVal.SelectedOn != nil {
		ret.WriteString(iconName + ".AddFile4(" + strconv.Quote(*iconVal.NormalOn) + ", qt.NewQSize(), qt.QIcon__Selected, qt.QIcon__On)\n")
	}

	return iconName
}

func (gs *generateState) renderProperties(properties []UiProperty, ret *strings.Builder, targetName, parentClass string, isLayout bool) error {

	contentsMargins := [4]int{gs.DefaultGridMargin, gs.DefaultGridMargin, gs.DefaultGridMargin, gs.DefaultGridMargin} // left, top, right, bottom
	customContentsMargins := false
	customSpacing := false

	for _, prop := range properties {
		setterFunc := `.Set` + strings.ToUpper(string(prop.Name[0])) + prop.Name[1:]

		if prop.Name == "geometry" {
			if !(prop.RectVal.X == 0 && prop.RectVal.Y == 0) {
				// Set all 4x properties
				ret.WriteString(`ui.` + targetName + `.SetGeometry(qt.NewQRect(` + fmt.Sprintf("%d, %d, %d, %d", prop.RectVal.X, prop.RectVal.Y, prop.RectVal.Width, prop.RectVal.Height) + "))\n")

			} else if !(prop.RectVal.Width == 0 && prop.RectVal.Height == 0) {
				// Only width/height were supplied
				ret.WriteString(`ui.` + targetName + `.Resize(` + fmt.Sprintf("%d, %d", prop.RectVal.Width, prop.RectVal.Height) + ")\n")

			}

		} else if prop.Name == "leftMargin" {
			contentsMargins[0] = mustParseInt(*prop.NumberVal)
			customContentsMargins = true

		} else if prop.Name == "topMargin" {
			contentsMargins[1] = mustParseInt(*prop.NumberVal)
			customContentsMargins = true

		} else if prop.Name == "rightMargin" {
			contentsMargins[2] = mustParseInt(*prop.NumberVal)
			customContentsMargins = true

		} else if prop.Name == "bottomMargin" {
			contentsMargins[3] = mustParseInt(*prop.NumberVal)
			customContentsMargins = true

		} else if prop.StringVal != nil {
			//  "windowTitle", "title", "text"
			ret.WriteString(`ui.` + targetName + setterFunc + `(` + gs.generateString(prop.StringVal, parentClass) + ")\n")

		} else if prop.NumberVal != nil {
			// "currentIndex"
			if prop.Name == "spacing" {
				customSpacing = true
			}
			ret.WriteString(`ui.` + targetName + setterFunc + `(` + *prop.NumberVal + ")\n")

		} else if prop.BoolVal != nil {
			// "childrenCollapsible"
			ret.WriteString(`ui.` + targetName + setterFunc + `(` + formatBool(*prop.BoolVal) + ")\n")

		} else if prop.EnumVal != nil {
			// "frameShape"

			// Newer versions of Qt Designer produce the fully qualified enum
			// names (A::B::C) but miqt changed to use the short names. Need to
			// detect the case and convert it to match
			ret.WriteString(`ui.` + targetName + setterFunc + `(` + normalizeEnumName(*prop.EnumVal) + ")\n")

		} else if prop.SetVal != nil {
			// QDialogButtonBox::"standardButtons"
			// <set>QDialogButtonBox::Cancel|QDialogButtonBox::Save</set>

			parts := strings.Split(*prop.SetVal, `|`)
			for i, p := range parts {
				parts[i] = normalizeEnumName(p)
			}

			emit := "0"
			if len(parts) > 0 {
				emit = strings.Join(parts, `|`)
			}
			ret.WriteString(`ui.` + targetName + setterFunc + `(` + emit + ")\n")

		} else if prop.IconVal != nil {
			iconName := gs.renderIcon(prop.IconVal, ret)
			ret.WriteString(`ui.` + targetName + setterFunc + `(` + iconName + ")\n")

		} else if prop.Name == "sizePolicy" {
			spn := targetName + "__sizePolicy"
			ret.WriteString(spn + " := qt.NewQSizePolicy()\n")
			ret.WriteString(spn + ".SetHorizontalPolicy(" + normalizeEnumName("QSizePolicy::"+prop.SizePolicyVal.HSizeType) + ")\n")
			ret.WriteString(spn + ".SetVerticalPolicy(" + normalizeEnumName("QSizePolicy::"+prop.SizePolicyVal.VSizeType) + ")\n")
			ret.WriteString(spn + ".SetHorizontalStretch(" + strconv.Itoa(prop.SizePolicyVal.HStretch) + ")\n")
			ret.WriteString(spn + ".SetVerticalStretch(" + strconv.Itoa(prop.SizePolicyVal.VStretch) + ")\n")
			ret.WriteString(spn + ".SetHeightForWidth(ui." + targetName + ".SizePolicy().HasHeightForWidth())\n")
			ret.WriteString("ui." + targetName + ".SetSizePolicy(*" + spn + ")\n")
			ret.WriteString(spn + ".Delete() // setter copies values\n")

		} else {
			ret.WriteString("/* miqt-uic: no handler for " + targetName + " property '" + prop.Name + "' */\n")
		}
	}

	if customContentsMargins || isLayout {
		ret.WriteString(`ui.` + targetName + `.SetContentsMargins(` + fmt.Sprintf("%d, %d, %d, %d", contentsMargins[0], contentsMargins[1], contentsMargins[2], contentsMargins[3]) + ")\n")
	}

	if !customSpacing && isLayout {
		// Layouts must specify spacing, unless, we specified it already
		ret.WriteString(`ui.` + targetName + `.SetSpacing(` + fmt.Sprintf("%d", gs.DefaultSpacing) + ")\n")

	}

	return nil
}

func (gs *generateState) generateSetObjectName(target string, objectName string) string {
	if gs.UseQt6 {
		// return `ui.` + target + `.SetObjectName(*qt.NewQAnyStringView3(` + strconv.Quote(objectName) + "))\n"
		spn := target + "__objectName"
		ret := spn + `:= qt.NewQAnyStringView3(` + strconv.Quote(objectName) + ")\n"
		ret += `ui.` + target + ".SetObjectName(*" + spn + ")\n"
		ret += spn + ".Delete() // setter copied value\n"
		return ret

	} else {
		return `ui.` + target + `.SetObjectName(` + strconv.Quote(objectName) + ")\n"
	}
}

func (gs *generateState) assignWidgetToLayout(ret *strings.Builder, l *UiLayout, child *UiLayoutItem, noun string, widgetName string) {

	switch l.Class {
	case `QFormLayout`:
		// Row and Column are always populated.
		rowPos := fmt.Sprintf("%d", *child.Row)
		var colPos string
		if *child.Column == 0 {
			colPos = `qt.QFormLayout__LabelRole`
		} else if *child.Column == 1 {
			colPos = `qt.QFormLayout__FieldRole`
		} else {
			ret.WriteString("/* miqt-uic: QFormLayout does not understand column index */\n")
			return
		}

		// For QFormLayout it's SetWidget
		ret.WriteString(`
				ui.` + l.Name + `.Set` + noun + `(` + rowPos + `, ` + colPos + `, ` + widgetName + `)
					`)

	case `QGridLayout`:
		if child.ColSpan != nil || child.RowSpan != nil {
			// If either are present, use full four-value AddWidget3
			rowSpan := 1
			if child.RowSpan != nil {
				rowSpan = *child.RowSpan
			}
			colSpan := 1
			if child.ColSpan != nil {
				colSpan = *child.ColSpan
			}

			if noun == "Widget" {
				noun += "3"
			} else if noun == "Layout" {
				noun += "2"
			}

			ret.WriteString(`
				ui.` + l.Name + `.Add` + noun + `(` + widgetName + `, ` + fmt.Sprintf("%d, %d, %d, %d", *child.Row, *child.Column, rowSpan, colSpan) + `)
					`)

		} else {
			// Row and Column are always present in the .ui file
			// For row/column it's AddWidget2

			if noun == "Widget" {
				noun += "2"
			} else if noun == "Layout" {
				// no suffix
			}

			ret.WriteString(`
				ui.` + l.Name + `.Add` + noun + `(` + widgetName + `, ` + fmt.Sprintf("%d, %d", *child.Row, *child.Column) + `)
					`)
		}

	case "QVBoxLayout", "QHBoxLayout":
		// For box layout it's AddWidget
		ret.WriteString(`
				ui.` + l.Name + `.Add` + noun + `(` + widgetName + `)
					`)

	default:
		ret.WriteString("/* miqt-uic: no handler for layout '" + l.Class + "' */\n")

	}
}

func (gs *generateState) generateLayout(l *UiLayout, parentName string, parentClass string, isNestedLayout bool) (string, error) {

	var ret strings.Builder

	if isNestedLayout {
		ctor := "New" + l.Class + "2"
		ret.WriteString(`ui.` + l.Name + ` = qt.` + ctor + "()\n")

	} else {
		ctor := "New" + l.Class
		ret.WriteString(`ui.` + l.Name + ` = qt.` + ctor + `(` + qwidgetName(parentName, parentClass) + ")\n")
	}

	ret.WriteString(gs.generateSetObjectName(l.Name, l.Name))

	// Layout->Properties

	err := gs.renderProperties(l.Properties, &ret, l.Name, parentClass, true) // Always emit spacing/padding calls
	if err != nil {
		return "", err
	}

	// Layout->Items

	for i, child := range l.Items {

		// A layout item is either a widget, or a spacer, or another layout

		if child.Spacer != nil {
			ret.WriteString("/* miqt-uic: no handler for spacer */\n")
		}

		//

		if child.Widget != nil {

			// Layout items have the parent as the real QWidget parent and are
			// separately assigned to the layout afterwards

			nest, err := gs.generateWidget(*child.Widget, parentName, parentClass)
			if err != nil {
				return "", fmt.Errorf(l.Name+"/Layout/Item[%d]: %w", i, err)
			}

			ret.WriteString(nest)

			// Assign to layout
			gs.assignWidgetToLayout(&ret, l, &child, "Widget", qwidgetName(`ui.`+child.Widget.Name, child.Widget.Class))
		}

		//

		if child.Layout != nil {

			nest, err := gs.generateLayout(child.Layout, parentName, parentClass, true) // nested
			if err != nil {
				return "", fmt.Errorf(l.Name+"/Layout/Item[%d]: %w", i, err)
			}

			ret.WriteString(nest)

			// Assign to layout
			gs.assignWidgetToLayout(&ret, l, &child, "Layout", `ui.`+child.Layout.Name+`.QLayout`)
		}

		//
	}

	return ret.String(), nil
}

func (gs *generateState) generateWidget(w UiWidget, parentName string, parentClass string) (string, error) {
	ret := strings.Builder{}

	ctor := "New" + w.Class

	ret.WriteString(`ui.` + w.Name + ` = qt.` + ctor + `(` + qwidgetName(parentName, parentClass) + ")\n")

	ret.WriteString(gs.generateSetObjectName(w.Name, w.Name))

	if gs.RootWindowName == "" {
		gs.RootWindowName = `ui.` + w.Name
	}

	// Properties

	err := gs.renderProperties(w.Properties, &ret, w.Name, parentClass, false)
	if err != nil {
		return "", err
	}

	// Attributes

	for _, attr := range w.Attributes {
		if parentClass == "QTabWidget" && attr.Name == "title" {
			ret.WriteString(parentName + `.SetTabText(` + parentName + ".IndexOf(ui." + w.Name + "), " + gs.generateString(attr.StringVal, parentClass) + ")\n")

		} else if w.Class == "QDockWidget" && parentClass == "QMainWindow" && attr.Name == "dockWidgetArea" {
			ret.WriteString(parentName + `.AddDockWidget(qt.DockWidgetArea(` + *attr.NumberVal + `), ui.` + w.Name + `)` + "\n")

		} else if w.Class == "QToolBar" && parentClass == "QMainWindow" && attr.Name == "toolBarArea" {
			ret.WriteString(parentName + `.AddToolBar(` + normalizeEnumName(*attr.EnumVal) + `, ui.` + w.Name + `)` + "\n")

		} else if parentClass == "QTabWidget" && attr.Name == "icon" {
			// This will be handled when we call .AddTab() on the parent QTabWidget

		} else {
			ret.WriteString("/* miqt-uic: no handler for " + w.Name + " attribute '" + attr.Name + "' */\n")

		}
	}

	// Layout

	if w.Layout != nil {
		nest, err := gs.generateLayout(w.Layout, `ui.`+w.Name, w.Class, false)
		if err != nil {
			return "", err
		}

		ret.WriteString(nest)
	}

	// Actions

	for _, a := range w.Actions {
		ret.WriteString(`ui.` + a.Name + ` = qt.NewQAction(` + parentName + ")\n")
		ret.WriteString(gs.generateSetObjectName(a.Name, a.Name))

		// QActions are translated in the parent window's context
		if prop, ok := propertyByName(a.Properties, "text"); ok {
			ret.WriteString("ui." + a.Name + `.SetText(` + gs.generateString(prop.StringVal, w.Class) + `)` + "\n")
		}

		if prop, ok := propertyByName(a.Properties, "shortcut"); ok {
			ret.WriteString("ui." + a.Name + `.SetShortcut(qt.NewQKeySequence2(` + gs.generateString(prop.StringVal, w.Class) + `))` + "\n")
		}

		if prop, ok := propertyByName(a.Properties, "icon"); ok {
			iconName := gs.renderIcon(prop.IconVal, &ret)
			ret.WriteString(`ui.` + a.Name + `.SetIcon(` + iconName + ")\n")
		}
	}

	// Items

	for itemNo, itm := range w.Items {
		ret.WriteString("ui." + w.Name + `.AddItem("")` + "\n")

		// Check for a "text" property and update the item's text
		// Do this as a 2nd step so that the SetItemText can be trapped for retranslateUi()
		// TODO Abstract for all SetItem{Foo} properties
		for _, prop := range itm.Properties {
			if prop.Name == "text" {
				ret.WriteString("ui." + w.Name + `.SetItemText(` + fmt.Sprintf("%d", itemNo) + `, ` + gs.generateString(prop.StringVal, w.Class) + `)` + "\n")
			} else {
				ret.WriteString("/* miqt-uic: no handler for item property '" + prop.Name + "' */\n")

			}
		}
	}

	// Columns

	for colNo, col := range w.Columns {

		for _, prop := range col.Properties {
			if prop.Name == "text" {
				ret.WriteString("ui." + w.Name + ".HeaderItem().SetText(" + fmt.Sprintf("%d", colNo) + ", " + gs.generateString(prop.StringVal, w.Class) + ")\n")
			} else {
				ret.WriteString("/* miqt-uic: no handler for column property '" + prop.Name + "' */\n")
			}
		}

	}

	// Recurse children
	var (
		setCentralWidget = false
		setMenuBar       = false
		setStatusBar     = false
	)

	for i, child := range w.Widgets {
		nest, err := gs.generateWidget(child, `ui.`+w.Name, w.Class)
		if err != nil {
			return "", fmt.Errorf(w.Name+"/Widgets[%d]: %w", i, err)
		}

		ret.WriteString(nest)

		// QMainWindow CentralWidget handling
		// The first listed class can be the central widget.
		// TODO should it be the first child with a layout? But need to handle windows with no layout
		if w.Class == `QMainWindow` && !setCentralWidget {
			ret.WriteString(`ui.` + w.Name + `.SetCentralWidget(ui.` + child.Name + ") // Set central widget \n")
			setCentralWidget = true
		}

		// QDockWidget also has something like a central widget
		if w.Class == `QDockWidget` && !setCentralWidget {
			ret.WriteString(`ui.` + w.Name + `.SetWidget(ui.` + child.Name + ") // Set central widget \n")
			setCentralWidget = true
		}

		if w.Class == "QSplitter" || w.Class == "QStackedWidget" {
			// We need to manually AddWidget on every child of QSplitter
			if child.Class == "QWidget" {
				ret.WriteString(`ui.` + w.Name + `.AddWidget(ui.` + child.Name + `)` + "\n")
			} else {
				ret.WriteString(`ui.` + w.Name + `.AddWidget(ui.` + child.Name + `.QWidget)` + "\n")
			}
		}

		if w.Class == "QMainWindow" && child.Class == "QMenuBar" && !setMenuBar {
			ret.WriteString(`ui.` + w.Name + `.SetMenuBar(ui.` + child.Name + `)` + "\n")
			setMenuBar = true
		}
		if w.Class == "QMainWindow" && child.Class == "QStatusBar" && !setStatusBar {
			ret.WriteString(`ui.` + w.Name + `.SetStatusBar(ui.` + child.Name + `)` + "\n")
			setStatusBar = true
		}

		// QTabWidget->QTab handling
		if w.Class == `QTabWidget` {
			if icon, ok := propertyByName(child.Attributes, "icon"); ok {
				// AddTab() overload with icon
				iconName := gs.renderIcon(icon.IconVal, &ret)
				ret.WriteString(`ui.` + w.Name + `.AddTab2(` + qwidgetName(`ui.`+child.Name, child.Class) + `, ` + iconName + `, "")` + "\n")

			} else {
				// AddTab() overload without icon
				ret.WriteString(`ui.` + w.Name + `.AddTab(` + qwidgetName(`ui.`+child.Name, child.Class) + `, "")` + "\n")
			}
		}

	}

	// AddActions
	// n.b. This must be *after* all children have been constructed, in case we
	// are adding a direct child

	for _, a := range w.AddActions {
		if a.Name == "separator" {
			// TODO how does Qt Designer disambiguate a real QAction with name="separator" ?
			ret.WriteString("ui." + w.Name + ".AddSeparator()\n")

		} else {
			// If we are a menubar, then <addaction> refers to top-level QMenu instead of QAction
			if w.Class == "QMenuBar" {
				ret.WriteString("ui." + w.Name + ".AddMenu(ui." + a.Name + ")\n")
			} else if w.Class == "QMenu" || w.Class == "QToolBar" {

				// It's possible this is a nested menu, then we need to call AddMenu insted
				// Resolve the class type of a.Name
				if aClass, ok := gs.trackWidgetClasses[a.Name]; ok && aClass == "QMenu" {
					// Nested
					ret.WriteString("ui." + w.Name + ".AddMenu(ui." + a.Name + ")\n")

				} else {
					// QMenu has its own .AddAction() implementation that takes plain string
					// That's convenient, but it shadows the AddAction version that takes a QAction*
					// We need to use the underlying QWidget.AddAction explicitly
					ret.WriteString("ui." + w.Name + ".QWidget.AddAction(ui." + a.Name + ")\n")
				}
			} else {
				ret.WriteString("ui." + w.Name + ".AddAction(ui." + a.Name + ")\n")
			}
		}
	}

	if w.Class == "QDialogButtonBox" {
		// TODO make this using a native connection instead of a C++ -> Go -> C++ roundtrip
		ret.WriteString(`ui.` + w.Name + `.OnAccepted(` + gs.RootWindowName + ".Accept)\n")
		ret.WriteString(`ui.` + w.Name + `.OnRejected(` + gs.RootWindowName + ".Reject)\n")
	}

	return ret.String(), nil
}

func generate(packageName string, goGenerateArgs string, u UiFile, useQt6 bool) ([]byte, error) {

	gs := NewGenerateState(useQt6)

	ret := strings.Builder{}

	// Update globals for layoutdefault, if present

	if u.LayoutDefault != nil {
		if u.LayoutDefault.Spacing != nil {
			gs.DefaultSpacing = *u.LayoutDefault.Spacing
		}
		if u.LayoutDefault.Margin != nil {
			gs.DefaultGridMargin = *u.LayoutDefault.Margin
		}
	}

	// Header

	importPackage := `"github.com/mappu/miqt/qt"`
	if useQt6 {
		importPackage = `qt "github.com/mappu/miqt/qt6"`
	}

	ret.WriteString(`// Generated by miqt-uic. To update this file, edit the .ui file in
// Qt Designer, and then run 'go generate'.
//
//go:` + `generate miqt-uic ` + goGenerateArgs + `

package ` + packageName + `
	
import (
	` + importPackage + `
)

type ` + u.Class + `Ui struct {
	` + strings.Join(gs.collectClassNames_Widget(&u.Widget), "\n") + `
}

// New` + u.Class + `Ui creates all Qt widget classes for ` + u.Class + `.
func New` + u.Class + `Ui() *` + u.Class + `Ui {
	ui := &` + u.Class + `Ui{}
	`)

	nest, err := gs.generateWidget(u.Widget, "", "")
	if err != nil {
		return nil, err
	}

	// Don't emit any of the lines that included .Tr(), move them into the
	// retranslateUi() function
	var translateFunc []string
	var setCurrentIndex []string
	for _, line := range strings.Split(nest, "\n") {
		if strings.Contains(line, `_Tr(`) {
			translateFunc = append(translateFunc, line)
		} else if strings.Contains(line, `.SetCurrentIndex(`) {
			setCurrentIndex = append(setCurrentIndex, line)
		} else {
			ret.WriteString(line + "\n")
		}
	}

	ret.WriteString("\nui.Retranslate()\n\n")

	for _, sci := range setCurrentIndex {
		ret.WriteString(sci + "\n")
	}

	ret.WriteString(`
	return ui
}

// Retranslate reapplies all text translations.
func (ui *` + u.Class + `Ui) Retranslate() {
	` + strings.Join(translateFunc, "\n") + `
}

	`)

	output := ret.String()

	formatted, err := format.Source([]byte(output))
	if err != nil {
		// Return unformatted so it can be fixed
		return []byte(output), nil
	}

	return formatted, nil
}
