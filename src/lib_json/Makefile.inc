# Copyright (c) 2018, Gary Huang, deepkh@gmail.com, https://github.com/deepkh
#
# Permission to use, copy, modify, and distribute this software for any
# purpose with or without fee is hereby granted, provided that the above
# copyright notice and this permission notice appear in all copies.
#
# THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
# WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
# ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
# ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
# OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

SHELL=/bin/sh

LIBJSONCPP: ${LIBJSONCPP_DLL}
	@echo MAKE $@ 

LIBJSONCPP_CLEAN: ${LIBJSONCPP_DLL_CLEAN}
	@echo MAKE $@ 

# due to lib and src use same code directly, so need to clean lib before make src
${LIBJSONCPP_DLL}:
	$(CD) ${LIBJSONCPP} && $(MAKE) -f Makefile.${LIBJSONCPP_NAME} -j8 $@

LIBJSONCPP_DEV: 
	$(CD) ${LIBJSONCPP} && $(MAKE) -f Makefile.${LIBJSONCPP_NAME} ${LIBJSONCPP_DLL}
	@echo MAKE $@ 

${LIBJSONCPP_DLL_CLEAN}:
	$(CD) ${LIBJSONCPP} && $(MAKE) -f Makefile.${LIBJSONCPP_NAME} $@

