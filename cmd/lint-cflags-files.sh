#!/bin/bash
#
# Check that each Qt cgo package has the expected #cgo directives for that
# version of Qt

set -euo pipefail

require_cflags() {
	local dirname="$1"
	local check="$2"
	local status=0
	
	for d in $(find "${dirname}" -type d | sort); do
	
		# allowed exceptions:
		if [[ $d =~ mainthread ]] ; then
			continue
		fi
	
		if [[ ! -f $d/cflags.go ]] ; then
			echo "WARNING: Package $d missing cflags.go file" >&2
			status=1
		fi
		
		if ! grep -Fq "$check" "$d/cflags.go" ; then
			echo "WARNING: Package $d missing expected '$check'" >&2
			status=1
		fi
	done
	
	return $status
}

main() {
	require_cflags qt '#cgo CXXFLAGS: -std=c++11'
	require_cflags qt '#cgo CFLAGS: -std=gnu11'
	require_cflags qt '#cgo pkg-config:'
	
	require_cflags qt6 '#cgo CXXFLAGS: -std=c++17'
	require_cflags qt6 '#cgo pkg-config:'
}

main "$@"
