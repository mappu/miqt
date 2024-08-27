package main

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
			}
			c.Methods[j] = m
		}

		for j, m := range c.Ctors {

			for k, p := range m.Parameters {
				if td, ok := KnownTypedefs[p.ParameterType]; ok {
					p = td.UnderlyingType.CopyWithAlias(p)
				}
				m.Parameters[k] = p
			}

			c.Ctors[j] = m
		}
		parsed.Classes[i] = c
	}
}
