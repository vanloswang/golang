// $G $D/$F.go && $L -X main.tbd hello $F.$A && ./$A.out

// Copyright 2012 The Go Authors.  All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

// Test the -X facility of the gc linker (6l etc.).

package main

var tbd string

func main() {
	if tbd != "hello" {
		println("BUG: test/linkx", len(tbd), tbd)
	}
}
