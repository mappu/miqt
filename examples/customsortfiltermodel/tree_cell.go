package main

import (
	"fmt"
	qt "github.com/mappu/miqt/qt6"
	"strconv"
)

type TreeCell struct {
	data map[qt.ItemDataRole]string
}

func NewTreeCell(role qt.ItemDataRole, value qt.QVariant) *TreeCell {
	data := make(map[qt.ItemDataRole]string)
	data[role] = value.ToString()
	return &TreeCell{data: data}
}

func (cell *TreeCell) SetData(data qt.QVariant, role qt.ItemDataRole) {
	cell.data[role] = data.ToString()
}

func (cell *TreeCell) Data(role qt.ItemDataRole) *qt.QVariant {
	if role == qt.UserRole {
		number, err := strconv.ParseInt(cell.data[role], 10, 64)
		if err != nil {
			fmt.Printf("Error converting %s to int: %v\n", number, err)
			return qt.NewQVariant11(cell.data[role])
		}
		return qt.NewQVariant6(number)
	}
	return qt.NewQVariant11(cell.data[role])
}
