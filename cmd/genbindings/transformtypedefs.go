package main

/*
func typedefUnderlyingOrInt(td CppTypedef) string {
	if strings.HasPrefix(td.UnderlyingType.ParameterType, "QFlag<") {
		return "int"
	}

	if strings.HasPrefix(td.UnderlyingType.ParameterType, "signed ") {
		return td.UnderlyingType.ParameterType[7:]
	}

	if strings.Contains(td.UnderlyingType.ParameterType, "(*)") {
		return "uintptr" // Function pointer, nonrepresentible
	}

	return td.UnderlyingType.ParameterType
}
*/

// astTransformTypedefs replaces the ParameterType with any known typedef value.
func astTransformTypedefs(parsed *CppParsedHeader) {

	for i, c := range parsed.Classes {

		for j, m := range c.Methods {

			for k, p := range m.Parameters {
				if td, ok := KnownTypedefs[p.ParameterType]; ok {
					p = td.UnderlyingType.CopyWithAlias(p)
				}
				m.Parameters[k] = p
			}

			if td, ok := KnownTypedefs[m.ReturnType.ParameterType]; ok {
				m.ReturnType = td.UnderlyingType.CopyWithAlias(m.ReturnType)
				//m.ReturnType.AssignAlias(typedefUnderlyingOrInt(td))
			}
			c.Methods[j] = m
		}

		for j, m := range c.Ctors {

			for k, p := range m.Parameters {
				if td, ok := KnownTypedefs[p.ParameterType]; ok {
					p = td.UnderlyingType.CopyWithAlias(p) // .AssignAlias(typedefUnderlyingOrInt(td))
				}
				m.Parameters[k] = p
			}

			c.Ctors[j] = m
		}
		parsed.Classes[i] = c
	}
}
