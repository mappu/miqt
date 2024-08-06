#!/bin/bash
# Makes a very large amount of data

set -eu

QT_DIR=/usr/include/x86_64-linux-gnu/qt5/

main() {
	if [[ -d jsonfiles ]] ; then
		rm -fr ./jsonfiles
	fi
	mkdir ./jsonfiles
	
	for package in QtWidgets QtCore QtGui ; do
		
		mkdir ./jsonfiles/${package}
		
		for f in ${QT_DIR}/${package}/*.h ; do
			echo "Processing file '$f'..."
			clang -x c++ $(pkg-config --cflags Qt5Widgets) -Xclang -ast-dump=json -fsyntax-only "$f" \
				| gzip --best \
				> jsonfiles/${package}/$(basename "$f").json.gz
		done
		
	done
}

main "$@"
