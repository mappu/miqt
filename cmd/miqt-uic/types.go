package main

import (
	"encoding/xml"
)

type UiLayoutItem struct {
	Row    *int     `xml:"row,attr"`
	Column *int     `xml:"column,attr"`
	Widget UiWidget `xml:"widget"`
}

type UiLayout struct {
	Class string         `xml:"class,attr"`
	Name  string         `xml:"name,attr"`
	Items []UiLayoutItem `xml:"item"`
}

type UiPropertyContainer struct {
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

type UiProperty struct {
	Name      string    `xml:"name,attr"`
	StringVal *UiString `xml:"string,omitempty"`
	NumberVal *string   `xml:"number,omitempty"` // Preserve as string literal
	EnumVal   *string   `xml:"enum,omitempty"`
	RectVal   *UiRect   `xml:"rect,omitempty"`
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

type UiFile struct {
	XMLName xml.Name // should always be xml.Name{Local: "ui"}

	Class       string        `xml:"class"`
	Version     string        `xml:"version,attr"` // e.g. 4.0
	Widget      []UiWidget    `xml:"widget"`
	Resources   UiResources   `xml:"resources"`
	Connections UiConnections `xml:"connections"`
}
