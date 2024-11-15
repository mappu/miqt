package main

import (
	"strings"
)

func applyTypedefs(p CppParameter) CppParameter {

	for {
		td, ok := KnownTypedefs[p.ParameterType]
		if !ok {
			break
		}
		p.ApplyTypedef(td.Typedef.UnderlyingType)
	}

	if t, ok := p.QListOf(); ok {
		t2 := applyTypedefs(t) // recursive

		// Wipe out so that RenderTypeQtCpp() does not see it
		t2.QtCppOriginalType = nil

		// QListOf returns for either QList< or QVector<
		// Patch it up to the first < position and last character
		bpos := strings.Index(p.ParameterType, `<`)

		if p.QtCppOriginalType == nil {
			tmp := p // copy
			p.QtCppOriginalType = &tmp
		}
		p.ParameterType = p.ParameterType[0:bpos] + `<` + t2.RenderTypeQtCpp() + `>`

	} else if kType, vType, ok := p.QMapOf(); ok {
		kType2 := applyTypedefs(kType)
		kType2.QtCppOriginalType = nil

		vType2 := applyTypedefs(vType)
		vType2.QtCppOriginalType = nil

		bpos := strings.Index(p.ParameterType, `<`)

		if p.QtCppOriginalType == nil {
			tmp := p // copy
			p.QtCppOriginalType = &tmp
		}
		p.ParameterType = p.ParameterType[0:bpos] + `<` + kType2.RenderTypeQtCpp() + `, ` + vType2.RenderTypeQtCpp() + `>`

	} else if kType, vType, ok := p.QPairOf(); ok {
		kType2 := applyTypedefs(kType)
		kType2.QtCppOriginalType = nil

		vType2 := applyTypedefs(vType)
		vType2.QtCppOriginalType = nil

		if p.QtCppOriginalType == nil {
			tmp := p // copy
			p.QtCppOriginalType = &tmp
		}
		p.ParameterType = `QPair<` + kType2.RenderTypeQtCpp() + `, ` + vType2.RenderTypeQtCpp() + `>`

	}

	return p
}

func applyTypedefs_Method(m *CppMethod) {

	for k, p := range m.Parameters {
		transformed := applyTypedefs(p)
		m.Parameters[k] = transformed

		if LinuxWindowsCompatCheck(transformed) {
			m.LinuxOnly = true
		}
	}

	m.ReturnType = applyTypedefs(m.ReturnType)

	// Also apply OS compatibility rules
	if LinuxWindowsCompatCheck(m.ReturnType) {
		m.LinuxOnly = true
	}
}

// astTransformTypedefs replaces the ParameterType with any known typedef value.
func astTransformTypedefs(parsed *CppParsedHeader) {

	for i, c := range parsed.Classes {

		for j, m := range c.Methods {

			applyTypedefs_Method(&m)
			c.Methods[j] = m
		}

		for j, m := range c.Ctors {

			applyTypedefs_Method(&m)
			c.Ctors[j] = m
		}
		parsed.Classes[i] = c
	}

	// Enum underlying types
	for i, e := range parsed.Enums {
		e.UnderlyingType = applyTypedefs(e.UnderlyingType)
		parsed.Enums[i] = e
	}
}
