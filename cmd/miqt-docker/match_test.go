package main

import (
	"testing"
)

func TestMatchAllParts(t *testing.T) {
	type testCase struct {
		needle   string
		haystack string
		expect   bool
	}

	cases := []testCase{

		// Exact match
		testCase{
			needle:   "win64-cross-go1.24-qt6.9-dynamic",
			haystack: "win64-cross-go1.24-qt6.9-dynamic",
			expect:   true,
		},

		// Partial match
		testCase{
			needle:   "win64-qt6-dynamic",
			haystack: "win64-cross-go1.24-qt6.9-dynamic",
			expect:   true,
		},

		// Partial mismatch
		testCase{
			needle:   "win64-qt6-static",
			haystack: "win64-cross-go1.24-qt6.9-dynamic",
			expect:   false,
		},

		// Changing the order should still match
		testCase{
			needle:   "win64-qt6.9-go1.24-cross-dynamic",
			haystack: "win64-cross-go1.24-qt6.9-dynamic",
			expect:   true,
		},
	}

	for _, tc := range cases {
		got := matchAllParts(tc.needle, tc.haystack)
		if got != tc.expect {
			t.Errorf("test needle=%q haystack=%q : got %v, but want %v", tc.needle, tc.haystack, got, tc.expect)
		}
	}
}
