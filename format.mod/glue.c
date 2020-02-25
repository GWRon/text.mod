/*
  Copyright (c) 2007-2018 Bruce A Henderson
 
  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:
  
  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.
  
  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/ 

#include <brl.mod/blitz.mod/blitz.h>

BBString * bmx_sprintf_string(const char * format, BBString * value) {
	char buffer[2048];
	char *p = bbStringToUTF8String( value );
	snprintf(buffer, sizeof(buffer), format, p);
	bbMemFree( p );
	return bbStringFromUTF8String(buffer);
}

BBString * bmx_sprintf_float(const char * format, float value) {
	char buffer[2048];
	snprintf(buffer, sizeof(buffer), format, value);
	return bbStringFromCString(buffer);
}

BBString * bmx_sprintf_int(const char * format, int value) {
	char buffer[2048];
	snprintf(buffer, sizeof(buffer), format, value);
	return bbStringFromCString(buffer);
}

BBString * bmx_sprintf_uint(const char * format, unsigned int value) {
	char buffer[2048];
	snprintf(buffer, sizeof(buffer), format, value);
	return bbStringFromCString(buffer);
}

BBString * bmx_sprintf_double(const char * format, double value) {
	char buffer[2048];
	snprintf(buffer, sizeof(buffer), format, value);
	return bbStringFromCString(buffer);
}

BBString * bmx_sprintf_long(const char * format, BBInt64 value) {
	char buffer[2048];
	snprintf(buffer, sizeof(buffer), format, value);
	return bbStringFromCString(buffer);
}

BBString * bmx_sprintf_ulong(const char * format, BBUInt64 value) {
	char buffer[2048];
	snprintf(buffer, sizeof(buffer), format, value);
	return bbStringFromCString(buffer);
}

BBString * bmx_sprintf_sizet(const char * format, BBSIZET value) {
	char buffer[2048];
	snprintf(buffer, sizeof(buffer), format, value);
	return bbStringFromCString(buffer);
}

BBString * bmx_sprintf_ptr(const char * format, void * value) {
	char buffer[2048];
	snprintf(buffer, sizeof(buffer), format, value);
	return bbStringFromCString(buffer);
}
