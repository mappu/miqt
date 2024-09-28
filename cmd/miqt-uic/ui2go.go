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

func generateString(s *UiString, parentName string) string {
	if s.Notr || parentName == "" {
		return strconv.Quote(s.Value)
	}
	return parentName + `.Tr(` + strconv.Quote(s.Value) + `)`
}

func generateWidget(w UiWidget, parentName string) (string, error) {
	ret := strings.Builder{}

	ret.WriteString(`
	ui.` + w.Name + ` = qt.New` + w.Class + `(` + parentName + `)
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
			ret.WriteString(`ui.` + w.Name + setterFunc + `(` + generateString(prop.StringVal, parentName) + ")\n")

		} else if prop.EnumVal != nil {
			// "frameShape"
			ret.WriteString(`ui.` + w.Name + setterFunc + `(qt.` + strings.Replace(*prop.EnumVal, `::`, `__`, -1) + ")\n")

		} else {
			ret.WriteString("/* miqt-uic: no handler for property '" + prop.Name + "' */\n")
		}
	}

	// Layout
	if w.Layout != nil {
		ret.WriteString(`
		ui.` + w.Layout.Name + ` = qt.New` + w.Layout.Class + `(` + w.Name + `)
		ui.` + w.Layout.Name + `.SetObjectName(` + strconv.Quote(w.Layout.Name) + `)
		`)

		for _, child := range w.Layout.Items {

			// Layout items have the parent as the real QWidget parent and are
			// separately assigned to the layout afterwards

			nest, err := generateWidget(child.Widget, `ui.`+w.Name+`.QWidget`) // MIQT uses .QWidget to cast down
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
					colPos = `qt.QFormLayout__LabelRow`
				} else if *child.Column == 1 {
					colPos = `qt.QFormLayout__FieldRow`
				} else {
					ret.WriteString("/* miqt-uic: QFormLayout does not understand column index */\n")
					continue
				}

				// For QFormLayout it's SetWidget
				ret.WriteString(`
				ui.` + w.Layout.Name + `.SetWidget(` + rowPos + `, ` + colPos + `, ui.` + child.Widget.Name + `)
					`)

			case `QGridLayout`:
				// For QGridLayout it's AddWidget
				// FIXME in Miqt this function has optionals, needs to be called with the correct arity
				// TODO support rowSpan, columnSpan
				ret.WriteString(`
				ui.` + w.Layout.Name + `.AddWidget(ui.` + child.Widget.Name + `, ` + fmt.Sprintf("%d, %d", *child.Row, *child.Column) + `)
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
	}

	// AddActions
	// TODO
	// w.AddActions

	// Items

	for _, itm := range w.Items {
		// FIXME add details
		_ = itm
		ret.WriteString("ui." + w.Name + `.AddItem()` + "\n")
	}

	// Attributes
	// TODO
	// w.Attributes

	// Columns
	// TODO
	// w.Columns

	// Recurse children
	setCentralWidget := ""
	for _, child := range w.Widgets {
		nest, err := generateWidget(child, `ui.`+w.Name)
		if err != nil {
			return "", fmt.Errorf(w.Name+": %w", err)
		}

		ret.WriteString(nest)

		// QMainWindow CentralWidget handling
		// The first listed class can be the central widget.
		// TODO should it be the first child with a layout? But need to handle windows with no layout
		if w.Class == `QMainWindow` && setCentralWidget == "" {
			ret.WriteString(`ui.` + w.Name + `.SetCentralWidget(ui.` + child.Name + ") // Set central widget \n")
			setCentralWidget = w.Name
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
	"github.com/mappu/miqt"
)

type ` + u.Class + `Ui struct {
	` + strings.Join(collectClassNames_Widget(u.Widget), "\n") + `
}

// New` + u.Class + `Ui creates all Qt widget classes for ` + u.Class + `.
func New` + u.Class + `Ui() *` + u.Class + `Ui {
	ui := &` + u.Class + `Ui{}
	`)

	nest, err := generateWidget(u.Widget, "")
	if err != nil {
		return nil, err
	}
	ret.WriteString(nest)

	ret.WriteString(`
	return ui
}

// RetranslateUi reapplies all text translations.
func (u *` + u.Class + `Ui) RetranslateUi() {
	`)

	// Trap and repeat all lines from `.nest` that include .Tr(.
	for _, line := range strings.Split(nest, "\n") {
		if strings.Contains(line, `.Tr(`) {
			ret.WriteString(line + "\n")
		}
	}

	ret.WriteString(`
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
