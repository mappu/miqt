#!/bin/bash
#
# miqt-rcc compiles a Qt resource XML file (*.qrc) to a binary resource file and
# creates a Go stub to load it.

set -eu

main() {

	if [[ $# -lt 1 ]] ; then
		echo "Usage: miqt-rcc.sh input.qrc [output.rcc] [output.go] [packageName] [variableName]" >&2
		exit 1
	fi
	local ARG_INPUT_QRC="$1"
	local ARG_DEST_RCC="${2:-$(basename -s .qrc "$ARG_INPUT_QRC").rcc}"
	local ARG_DEST_GO="${3:-$(basename -s .rcc "$ARG_DEST_RCC").go}"
	local ARG_PACKAGENAME="${4:-main}"
	local ARG_VARIABLENAME="${5:-_resourceRcc}"
	
	if [[ ! -f ${ARG_INPUT_QRC} ]] ; then
		echo "Input file ${ARG_INPUT_QRC} not found" >&2
		exit 1
	fi
	
	# Compile qrc to binary resource file
	rcc --binary -o "${ARG_DEST_RCC}" "$ARG_INPUT_QRC"
	
	# Create Go file that loads the resource
	cat > "${ARG_DEST_GO}" <<EOF
package ${ARG_PACKAGENAME}

//go:generate miqt-rcc.sh $@

import (
	"embed"
	
	"github.com/mappu/miqt/qt"
)

//go:embed ${ARG_DEST_RCC}
var ${ARG_VARIABLENAME} []byte

func init() {
	_ = embed.FS{}
	qt.QResource_RegisterResourceWithRccData(&${ARG_VARIABLENAME}[0])
}

EOF

	gofmt -s -w "${ARG_DEST_GO}"

	echo "RCC OK"
}

main "$@"
