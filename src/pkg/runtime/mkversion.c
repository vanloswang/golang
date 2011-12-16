// Copyright 2009 The Go Authors.  All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

// +build ignore

#include <u.h>
#include <libc.h>

char *template =
	"// AUTO-GENERATED; run make -f Makefile.auto\n\n"
	"package runtime\n"
	"const defaultGoroot = `%s`\n"
	"const theVersion = \"%s\"\n";

void
main(void)
{
	print(template, getgoroot(), getgoversion());
	exits(0);
}
