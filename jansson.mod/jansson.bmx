' Copyright (c) 2014-2020 Bruce A Henderson
' 
' Permission is hereby granted, free of charge, to any person obtaining a copy
' of this software and associated documentation files (the "Software"), to deal
' in the Software without restriction, including without limitation the rights
' to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
' copies of the Software, and to permit persons to whom the Software is
' furnished to do so, subject to the following conditions:
' 
' The above copyright notice and this permission notice shall be included in
' all copies or substantial portions of the Software.
' 
' THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
' IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
' FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
' AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
' LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
' OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
' THE SOFTWARE.
' 
SuperStrict

Module Text.Jansson

ModuleInfo "Version: 1.06"
ModuleInfo "Author: Bruce A Henderson"
ModuleInfo "License: MIT"
ModuleInfo "Copyright: 2014-2020 Bruce A Henderson"

ModuleInfo "History: 1.06"
ModuleInfo "History: Updated to Jansson 2.13.1."
ModuleInfo "History: 1.05"
ModuleInfo "History: Updated to Jansson with fractional precision support."
ModuleInfo "History: 1.04"
ModuleInfo "History: Fix for NX"
ModuleInfo "History: 1.03"
ModuleInfo "History: Updated to Jansson 2.12"
ModuleInfo "History: 1.02"
ModuleInfo "History: Updated to Jansson 2.10.009ffa3"
ModuleInfo "History: Added errorCode field to TJSONError."
ModuleInfo "History: 1.01"
ModuleInfo "History: Updated to Jansson 2.10"
ModuleInfo "History: 1.00"
ModuleInfo "History: Initial Release"

ModuleInfo "CC_OPTS: -DHAVE_CONFIG_H"

?linux
Import "include/linux/*.h"
?macos
Import "include/macos/*.h"
?win32
Import "include/win32/*.h"
?nx
Import "include/nx/*.h"
?

?android
Import "config/android/*.h"
?Not android
Import "config/all/*.h"
?

Import "jansson/src/*.h"

Import "jansson/src/dump.c"
Import "jansson/src/error.c"
Import "jansson/src/hashtable.c"
Import "jansson/src/hashtable_seed.c"
Import "jansson/src/load.c"
Import "jansson/src/memory.c"
Import "jansson/src/pack_unpack.c"
Import "jansson/src/strbuffer.c"
Import "jansson/src/strconv.c"
Import "jansson/src/utf.c"
Import "jansson/src/value.c"
Import "jansson/src/version.c"
