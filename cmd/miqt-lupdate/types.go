package main

import "encoding/xml"

type TS struct {
	XMLName  xml.Name  `xml:"TS"`
	Version  string    `xml:"version,attr"`
	Language string    `xml:"language,attr,omitempty"`
	Contexts []Context `xml:"context"`

	Dependencies   Dependencies `xml:"dependencies"`
	SourceLanguage string       `xml:"sourcelanguage,attr,omitempty"`
}

type Context struct {
	XMLName  xml.Name  `xml:"context"`
	Name     string    `xml:"name"`
	Messages []Message `xml:"message"`

	Comment  string `xml:"comment,omitempty"`
	Encoding string `xml:"encoding,attr,omitempty"`
}

type Message struct {
	XMLName      xml.Name    `xml:"message"`
	ID           string      `xml:"id,attr,omitempty"`
	Numerus      string      `xml:"numerus,attr,omitempty"`
	Locations    []Location  `xml:"location"`
	Source       string      `xml:"source"`
	Comment      string      `xml:"comment,omitempty"`
	ExtraComment string      `xml:"extracomment,omitempty"`
	Translation  Translation `xml:"translation"`

	OldComment        string `xml:"oldcomment,omitempty"`
	OldSource         string `xml:"oldsource,omitempty"`
	TranslatorComment string `xml:"translatorcomment,omitempty"`
}

type Location struct {
	Filename string `xml:"filename,attr"`
	Line     int    `xml:"line,attr"`
}

type Translation struct {
	XMLName     xml.Name `xml:"translation"`
	Type        string   `xml:"type,attr,omitempty"`
	Text        string   `xml:",chardata"`
	NumerusForm []string `xml:"numerusform"`

	LengthVariant []string `xml:"lengthvariant"`
}

type Dependencies struct {
	Dependency []Dependency `xml:"dependency"`
}

type Dependency struct {
	Catalog string `xml:"catalog,attr"`
}
