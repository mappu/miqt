package main

import (
	"encoding/xml"
)

type UiLayoutItem struct {
	Row    *int `xml:"row,attr"`
	Column *int `xml:"column,attr"`

	// A layout item either has a widget, or a spacer
	Widget *UiWidget `xml:"widget"`
	Spacer *UiSpacer `xml:"spacer"`
}

type UiLayout struct {
	Class      string         `xml:"class,attr"`
	Name       string         `xml:"name,attr"`
	Properties []UiProperty   `xml:"property"`
	Items      []UiLayoutItem `xml:"item"`
}

type UiPropertyContainer struct {
	Properties []UiProperty `xml:"property"`
}

type UiSpacer struct {
	Name       string       `xml:"name,attr"`
	Properties []UiProperty `xml:"property"`
}

type UiWidget struct {
	Class      string       `xml:"class,attr"`
	Name       string       `xml:"name,attr"`
	Properties []UiProperty `xml:"property"`
	Attributes []UiProperty `xml:"attribute"`

	Layout  *UiLayout  `xml:"layout,omitempty"`
	Widgets []UiWidget `xml:"widget"` // If no layout

	Columns []UiPropertyContainer `xml:"column"` // e.g. for QTreeWidget
	Items   []UiPropertyContainer `xml:"item"`   // e.g. for QComboBox

	AddActions []UiActionReference `xml:"addaction"`
	Actions    []UiAction          `xml:"action"`
}

type UiRect struct {
	X      int `xml:"x"`
	Y      int `xml:"y"`
	Width  int `xml:"width"`
	Height int `xml:"height"`
}

type UiString struct {
	Value string `xml:",chardata"`
	Notr  bool   `xml:"notr,attr,omitempty"`
}

type UiIcon struct {
	ResourceFile string `xml:"resource,attr"`

	NormalOff   *string `xml:"normaloff,omitempty"`
	NormalOn    *string `xml:"normalon,omitempty"`
	ActiveOff   *string `xml:"activeoff,omitempty"`
	ActiveOn    *string `xml:"activeon,omitempty"`
	DisabledOff *string `xml:"disabledoff,omitempty"`
	DisabledOn  *string `xml:"disabledon,omitempty"`
	SelectedOff *string `xml:"selectedoff,omitempty"`
	SelectedOn  *string `xml:"selectedon,omitempty"`

	Base string `xml:",chardata"`
}

type UiProperty struct {
	Name      string    `xml:"name,attr"`
	StringVal *UiString `xml:"string,omitempty"`
	NumberVal *string   `xml:"number,omitempty"` // Preserve as string literal
	BoolVal   *bool     `xml:"bool,omitempty"`   // "true" or "false"
	EnumVal   *string   `xml:"enum,omitempty"`
	RectVal   *UiRect   `xml:"rect,omitempty"`
	IconVal   *UiIcon   `xml:"iconset,omitempty"`
	SetVal    *string   `xml:"set,omitempty"`
}

type UiActionReference struct {
	Name string `xml:"name,attr"`
}

type UiAction struct {
	Name       string       `xml:"name,attr"`
	Properties []UiProperty `xml:"property"`
}

type UiResources struct {
}

type UiConnections struct {
}

type UiLayoutDefault struct {
	Spacing *int `xml:"spacing,attr,omitempty"`
	Margin  *int `xml:"margin,attr,omitempty"`
}

type UiFile struct {
	XMLName xml.Name // should always be xml.Name{Local: "ui"}

	Class         string           `xml:"class"`
	Version       string           `xml:"version,attr"` // e.g. 4.0
	Widget        UiWidget         `xml:"widget"`       // There's only one root widget
	Resources     UiResources      `xml:"resources"`
	Connections   UiConnections    `xml:"connections"`
	LayoutDefault *UiLayoutDefault `xml:"layoutdefault,omitempty"`
}
