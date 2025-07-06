package main

import "strings"

func applyTypedefs(p CppParameter, className string) CppParameter {

	namespace := "Qt"
	if qtVersion != "qt5" {
		if strings.Contains(className, "::") {
			namespace = strings.Split(className, "::")[0]
		}

		if strings.HasPrefix(p.ParameterType, "QtAudio::") {
			p.ParameterType = strings.Replace(p.ParameterType, "QtAudio::", "QAudio::", 1)
		}

		if etd, ok := KnownEnums[className+"::"+p.ParameterType]; ok && qtVersion != "qt5" {
			p.ParameterType = resolveEnumType(etd.Enum.EnumName, className, namespace)
		}

		if !strings.Contains(p.ParameterType, "iterator") {
			if ctd, ok := KnownClassnames[p.ParameterType]; ok {
				p.ParameterType = resolveStructType(ctd.Class.ClassName, className, namespace)
			}
		} else if _, ok := KnownClassnames[p.ParameterType]; ok {
			p.ParameterType = resolveStructType(p.ParameterType, className, namespace)
		}

		if ft, ok := KnownEnums[p.ParameterType+"Flag"]; ok && !strings.Contains(p.ParameterType, "::") && qtVersion != "qt5" {
			p.ParameterType = strings.TrimSuffix(ft.Enum.EnumName, "Flag")
		}
	}

	for {
		if qtVersion != "qt5" {
			if tdd, ok := KnownTypedefs[className+"::"+p.ParameterType]; ok {
				if strings.Contains(p.ParameterType, "value_type") || tdd.Typedef.Alias != "" {
					p.ApplyTypedef(tdd.Typedef.UnderlyingType)
					p.ParameterType = tdd.Typedef.Alias
				} else {
					p.ApplyTypedef(tdd.Typedef.UnderlyingType)
				}
			}
		}

		td, ok := KnownTypedefs[p.ParameterType]
		if !ok {
			break
		}
		p.ApplyTypedef(td.Typedef.UnderlyingType)

		if qtVersion != "qt5" {
			if p.QtCppOriginalType != nil && strings.Contains(p.QtCppOriginalType.ParameterType, "const_pointer") {
				p.QtCppOriginalType.ParameterType = className + "::" + "const_pointer"
				p.PointerCount = 1
			}
		}
	}

	if fd, ok := KnownTypedefs[className+"::"+p.ParameterType]; ok && qtVersion != "qt5" {
		p.ParameterType = fd.Typedef.Alias
	}

	if t, containerType, ok := p.QListOf(); ok {
		t2 := applyTypedefs(t, className) // recursive

		// Wipe out so that RenderTypeQtCpp() does not see it
		t2.QtCppOriginalType = nil

		if qtVersion != "qt5" {
			tType := resolveStructType(t2.RenderTypeQtCpp(), className, "")
			p.ParameterType = containerType + `<` + tType + `>`
		}

		if p.QtCppOriginalType == nil {
			tmp := p // copy
			p.QtCppOriginalType = &tmp
			if qtVersion != "qt5" {
				p.QtCppOriginalType.ParameterType = p.ParameterType
			}
		} else {
			if _, ok := KnownTypedefs[p.QtCppOriginalType.ParameterType]; ok && qtVersion != "qt5" {
				p.QtCppOriginalType.ParameterType = p.ParameterType
			}
		}

		if qtVersion == "qt5" {
			p.ParameterType = containerType + `<` + t2.RenderTypeQtCpp() + `>`
		}

	} else if kType, vType, containerType, ok := p.QMapOf(); ok {
		kType2 := applyTypedefs(kType, className)
		kType2.QtCppOriginalType = nil

		vType2 := applyTypedefs(vType, className)
		vType2.QtCppOriginalType = nil

		var k2, v2 string
		if qtVersion != "qt5" {
			k2 = resolveStructType(kType2.RenderTypeQtCpp(), className, namespace)
			v2 = resolveStructType(vType2.RenderTypeQtCpp(), className, namespace)

			p.ParameterType = containerType + `<` + k2 + `, ` + v2 + `>`

		} else {
			k2 = kType2.RenderTypeQtCpp()
			v2 = vType2.RenderTypeQtCpp()
		}

		if p.QtCppOriginalType == nil {
			tmp := p // copy
			p.QtCppOriginalType = &tmp
			if qtVersion != "qt5" {
				p.QtCppOriginalType.ParameterType = p.ParameterType
			}
		} else {
			if _, ok := KnownTypedefs[p.QtCppOriginalType.ParameterType]; ok && qtVersion != "qt5" {
				p.QtCppOriginalType.ParameterType = p.ParameterType
			}
		}

		if qtVersion == "qt5" {
			p.ParameterType = containerType + `<` + k2 + `, ` + v2 + `>`
		}

	} else if kType, vType, ok := p.QPairOf(); ok {
		kType2 := applyTypedefs(kType, className)
		kType2.QtCppOriginalType = nil

		vType2 := applyTypedefs(vType, className)
		vType2.QtCppOriginalType = nil

		var k2, v2 string
		if qtVersion != "qt5" {
			k2 = resolveStructType(kType2.RenderTypeQtCpp(), className, namespace)
			v2 = resolveStructType(vType2.RenderTypeQtCpp(), className, namespace)

			p.ParameterType = `QPair<` + k2 + `, ` + v2 + `>`

		} else {
			k2 = kType2.RenderTypeQtCpp()
			v2 = vType2.RenderTypeQtCpp()
		}

		if p.QtCppOriginalType == nil {
			tmp := p // copy
			p.QtCppOriginalType = &tmp
			if qtVersion != "qt5" {
				p.QtCppOriginalType.ParameterType = p.ParameterType
			}
		} else {
			if _, ok := KnownTypedefs[p.QtCppOriginalType.ParameterType]; ok && qtVersion != "qt5" {
				p.QtCppOriginalType.ParameterType = p.ParameterType
			}
		}

		if qtVersion == "qt5" {
			p.ParameterType = `QPair<` + k2 + `, ` + v2 + `>`
		}
	}

	return p
}

func applyTypedefs_Method(m *CppMethod, className string) {

	for k, p := range m.Parameters {
		transformed := applyTypedefs(p, className)
		m.Parameters[k] = transformed
	}

	m.ReturnType = applyTypedefs(m.ReturnType, className)
}

// astTransformTypedefs replaces the ParameterType with any known typedef value.
func astTransformTypedefs(parsed *CppParsedHeader) {

	for i, c := range parsed.Classes {

		for j, m := range c.Methods {

			applyTypedefs_Method(&m, c.ClassName)
			c.Methods[j] = m
		}

		for j, m := range c.Ctors {

			applyTypedefs_Method(&m, c.ClassName)
			c.Ctors[j] = m
		}
		parsed.Classes[i] = c
	}

	// Enum underlying types
	for i, e := range parsed.Enums {
		e.UnderlyingType = applyTypedefs(e.UnderlyingType, "")
		parsed.Enums[i] = e
	}
}
