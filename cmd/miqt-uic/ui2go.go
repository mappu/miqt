package main

import (
	"fmt"
	"go/format"
	"strconv"
	"strings"
)

func collectClassNames_Widget(u UiWidget) []string {
	var ret []string
	if u.Name != "" {
		ret = append(ret, u.Name+" *qt."+u.Class)
	}
	for _, w := range u.Widgets {
		ret = append(ret, collectClassNames_Widget(w)...)
	}
	if u.Layout != nil {
		ret = append(ret, u.Layout.Name+" *qt."+u.Layout.Class)
		for _, li := range u.Layout.Items {
			ret = append(ret, collectClassNames_Widget(li.Widget)...)
		}
	}
	for _, a := range u.Actions {
		ret = append(ret, a.Name+" *qt.QAction")
	}
	return ret
}

func generateString(s *UiString, parentClass string) string {
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

func generateWidget(w UiWidget, parentName string, parentClass string) (string, error) {
	ret := strings.Builder{}

	ctor, ok := constructorFunctionFor(w.Class)
	if !ok {
		return "", fmt.Errorf("No known widget constructor function for %q class %q", w.Name, w.Class)
	}

	ret.WriteString(`
	ui.` + w.Name + ` = qt.` + ctor + `(` + qwidgetName(parentName, parentClass) + `)
	ui.` + w.Name + `.SetObjectName(` + strconv.Quote(w.Name) + `)
	`)

	// Properties
	for _, prop := range w.Properties {
		setterFunc := `.Set` + strings.ToUpper(string(prop.Name[0])) + prop.Name[1:]

		if prop.Name == "geometry" {
			if !(prop.RectVal.X == 0 && prop.RectVal.Y == 0) {
				// Set all 4x properties
				ret.WriteString(`ui.` + w.Name + `.SetGeometry(qt.NewQRect(` + fmt.Sprintf("%d, %d, %d, %d", prop.RectVal.X, prop.RectVal.Y, prop.RectVal.Width, prop.RectVal.Height) + "))\n")

			} else if !(prop.RectVal.Width == 0 && prop.RectVal.Height == 0) {
				// Only width/height were supplied
				ret.WriteString(`ui.` + w.Name + `.Resize(` + fmt.Sprintf("%d, %d", prop.RectVal.Width, prop.RectVal.Height) + ")\n")

			}

		} else if prop.StringVal != nil {
			//  "windowTitle", "title", "text"
			ret.WriteString(`ui.` + w.Name + setterFunc + `(` + generateString(prop.StringVal, parentClass) + ")\n")

		} else if prop.EnumVal != nil {
			// "frameShape"
			ret.WriteString(`ui.` + w.Name + setterFunc + `(qt.` + strings.Replace(*prop.EnumVal, `::`, `__`, -1) + ")\n")

		} else {
			ret.WriteString("/* miqt-uic: no handler for " + w.Name + " property '" + prop.Name + "' */\n")
		}
	}

	// Attributes

	for _, attr := range w.Attributes {
		if parentClass == "QTabWidget" && attr.Name == "title" {
			ret.WriteString(parentName + `.SetTabText(` + parentName + ".IndexOf(ui." + w.Name + "), " + generateString(attr.StringVal, parentClass) + ")\n")

		} else if w.Class == "QDockWidget" && parentClass == "QMainWindow" && attr.Name == "dockWidgetArea" {
			ret.WriteString(parentName + `.AddDockWidget(qt.DockWidgetArea(` + *attr.NumberVal + `), ui.` + w.Name + `)` + "\n")

		} else {
			ret.WriteString("/* miqt-uic: no handler for " + w.Name + " attribute '" + attr.Name + "' */\n")

		}
	}
	// TODO
	// w.Attributes

	// Layout
	if w.Layout != nil {
		ctor, ok := constructorFunctionFor(w.Layout.Class)
		if !ok {
			return "", fmt.Errorf("No known layout constructor function for %q class %q", w.Layout.Name, w.Layout.Class)
		}

		ret.WriteString(`
		ui.` + w.Layout.Name + ` = qt.` + ctor + `(` + qwidgetName("ui."+w.Name, w.Class) + `)
		ui.` + w.Layout.Name + `.SetObjectName(` + strconv.Quote(w.Layout.Name) + `)
		`)

		for _, child := range w.Layout.Items {

			// Layout items have the parent as the real QWidget parent and are
			// separately assigned to the layout afterwards

			nest, err := generateWidget(child.Widget, `ui.`+w.Name, w.Class)
			if err != nil {
				return "", fmt.Errorf(w.Name+": %w", err)
			}

			ret.WriteString(nest)

			// Assign to layout

			switch w.Layout.Class {
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
					continue
				}

				// For QFormLayout it's SetWidget
				ret.WriteString(`
				ui.` + w.Layout.Name + `.SetWidget(` + rowPos + `, ` + colPos + `, ` + qwidgetName(`ui.`+child.Widget.Name, child.Widget.Class) + `)
					`)

			case `QGridLayout`:
				// For QGridLayout it's AddWidget2
				// FIXME in Miqt this function has optionals, needs to be called with the correct arity
				// TODO support rowSpan, columnSpan
				ret.WriteString(`
				ui.` + w.Layout.Name + `.AddWidget2(` + qwidgetName(`ui.`+child.Widget.Name, child.Widget.Class) + `, ` + fmt.Sprintf("%d, %d", *child.Row, *child.Column) + `)
					`)

			case "QVBoxLayout", "QHBoxLayout":
				// For box layout it's AddWidget
				ret.WriteString(`
				ui.` + w.Layout.Name + `.AddWidget(` + qwidgetName(`ui.`+child.Widget.Name, child.Widget.Class) + `)
					`)

			default:
				ret.WriteString("/* miqt-uic: no handler for layout '" + w.Layout.Class + "' */\n")

			}
		}
	}

	// Actions

	for _, a := range w.Actions {
		ret.WriteString(`
		ui.` + a.Name + ` = qt.NewQAction(` + parentName + `)
		ui.` + a.Name + `.SetObjectName(` + strconv.Quote(a.Name) + `)
		`)

		// QActions are translated in the parent window's context
		if prop, ok := propertyByName(a.Properties, "text"); ok {
			ret.WriteString("ui." + a.Name + `.SetText(` + generateString(prop.StringVal, w.Class) + `)` + "\n")
		}

		if prop, ok := propertyByName(a.Properties, "shortcut"); ok {
			ret.WriteString("ui." + a.Name + `.SetShortcut(qt.NewQKeySequence2(` + generateString(prop.StringVal, w.Class) + `))` + "\n")
		}
	}

	// Items

	for itemNo, itm := range w.Items {
		ret.WriteString("ui." + w.Name + `.AddItem("")` + "\n")

		// Check for a "text" property and update the item's text
		// Do this as a 2nd step so that the SetItemText can be trapped for retranslateUi()
		// TODO Abstract for all SetItem{Foo} properties
		if prop, ok := propertyByName(itm.Properties, "text"); ok {
			ret.WriteString("ui." + w.Name + `.SetItemText(` + fmt.Sprintf("%d", itemNo) + `, ` + generateString(prop.StringVal, w.Class) + `)` + "\n")
		}
	}

	// Columns
	// TODO
	// w.Columns

	// Recurse children
	var (
		setCentralWidget = false
		setMenuBar       = false
		setStatusBar     = false
	)

	for i, child := range w.Widgets {
		nest, err := generateWidget(child, `ui.`+w.Name, w.Class)
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
			ret.WriteString(`ui.` + w.Name + `.AddTab(` + qwidgetName(`ui.`+child.Name, child.Class) + `, "")` + "\n")
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
			} else if w.Class == "QMenu" {
				// QMenu has its own .AddAction() implementation that takes plain string
				// That's convenient, but it shadows the AddAction version that takes a QAction*
				// We need to use the underlying QWidget.AddAction explicitly
				ret.WriteString("ui." + w.Name + ".QWidget.AddAction(ui." + a.Name + ")\n")
			} else {
				ret.WriteString("ui." + w.Name + ".AddAction(ui." + a.Name + ")\n")
			}
		}
	}

	return ret.String(), nil
}

func generate(packageName string, goGenerateArgs string, u UiFile) ([]byte, error) {
	ret := strings.Builder{}
	ret.WriteString(`// Generated by miqt-uic. To update this file, edit the .ui file in
// Qt Designer, and then run 'go generate'.
//
//go:` + `generate miqt-uic ` + goGenerateArgs + `

package ` + packageName + `
	
import (
	"github.com/mappu/miqt/qt"
)

type ` + u.Class + `Ui struct {
	` + strings.Join(collectClassNames_Widget(u.Widget), "\n") + `
}

// New` + u.Class + `Ui creates all Qt widget classes for ` + u.Class + `.
func New` + u.Class + `Ui() *` + u.Class + `Ui {
	ui := &` + u.Class + `Ui{}
	`)

	nest, err := generateWidget(u.Widget, "", "")
	if err != nil {
		return nil, err
	}

	// Don't emit any of the lines that included .Tr(), move them into the
	// retranslateUi() function
	var translateFunc []string
	for _, line := range strings.Split(nest, "\n") {
		if strings.Contains(line, `_Tr(`) {
			translateFunc = append(translateFunc, line)
		} else {
			ret.WriteString(line + "\n")
		}
	}

	ret.WriteString(`
	ui.Retranslate()
	
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
