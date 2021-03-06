/* Generated by re2c 0.16 on Mon May 16 20:01:32 2016 */
#line 1 "Lexer.l"
//--------------------------------------------------------- ./scanner.l

#include <php.h>
#include "Lexer.h"
#include "ext/pcre/php_pcre.h"
#include "aop.h"

int scan(scanner_state *s, scanner_token *t) {

	// char *cursor = s->start;
	int r=SCANNER_RETCODE_IMPOSSIBLE;
	char *q=s->start;//keep initial start

#define YYCTYPE char
#define YYCURSOR (s->start)
#define YYLIMIT (s->end)
#define YYMARKER (s->marker)

	while(SCANNER_RETCODE_IMPOSSIBLE == r) {
	
		
#line 25 "<stdout>"
		{
			YYCTYPE yych;
			yych = *YYCURSOR;
			switch (yych) {
			case 0x00:	goto yy3;
			case 0x01:
			case 0x02:
			case 0x03:
			case 0x04:
			case 0x05:
			case 0x06:
			case 0x07:
			case 0x08:
			case '\n':
			case '\v':
			case '\f':
			case '\r':
			case 0x0E:
			case 0x0F:
			case 0x10:
			case 0x11:
			case 0x12:
			case 0x13:
			case 0x14:
			case 0x15:
			case 0x16:
			case 0x17:
			case 0x18:
			case 0x19:
			case 0x1A:
			case 0x1B:
			case 0x1C:
			case 0x1D:
			case 0x1E:
			case 0x1F:
			case '"':
			case '#':
			case '%':
			case '&':
			case '\'':
			case ')':
			case '+':
			case ',':
			case '.':
			case '/':
			case ';':
			case '<':
			case '=':
			case '>':
			case '?':
			case '@':
			case '[':
			case ']':
			case '^':
			case '`':
			case '{':
			case '}':
			case '~':	goto yy5;
			case '\t':
			case ' ':
			case '$':	goto yy7;
			case '!':	goto yy10;
			case '(':	goto yy11;
			case '-':	goto yy14;
			case ':':	goto yy15;
			case 'P':
			case 'p':	goto yy16;
			case 'S':
			case 's':	goto yy17;
			case '|':	goto yy18;
			default:	goto yy12;
			}
yy2:
#line 82 "Lexer.l"
			{
                        t->str_val = estrndup(q,YYCURSOR - q);
                        t->TOKEN = TOKEN_TEXT;
                        return 0;
                }
#line 105 "<stdout>"
yy3:
			++YYCURSOR;
#line 91 "Lexer.l"
			{ r = SCANNER_RETCODE_EOF; break; }
#line 110 "<stdout>"
yy5:
			++YYCURSOR;
yy6:
#line 93 "Lexer.l"
			{ r = SCANNER_RETCODE_ERR; break; }
#line 116 "<stdout>"
yy7:
			++YYCURSOR;
			yych = *YYCURSOR;
			switch (yych) {
			case '\t':
			case ' ':
			case '$':	goto yy7;
			default:	goto yy9;
			}
yy9:
#line 87 "Lexer.l"
			{ 
                        t->TOKEN = TOKEN_SPACE;
                        return 0; 
                }
#line 132 "<stdout>"
yy10:
			yych = *(YYMARKER = ++YYCURSOR);
			switch (yych) {
			case 'P':
			case 'p':	goto yy20;
			case 'S':
			case 's':	goto yy22;
			default:	goto yy6;
			}
yy11:
			yych = *++YYCURSOR;
			switch (yych) {
			case ')':	goto yy23;
			default:	goto yy6;
			}
yy12:
			++YYCURSOR;
			yych = *YYCURSOR;
yy13:
			switch (yych) {
			case 0x00:
			case 0x01:
			case 0x02:
			case 0x03:
			case 0x04:
			case 0x05:
			case 0x06:
			case 0x07:
			case 0x08:
			case '\t':
			case '\n':
			case '\v':
			case '\f':
			case '\r':
			case 0x0E:
			case 0x0F:
			case 0x10:
			case 0x11:
			case 0x12:
			case 0x13:
			case 0x14:
			case 0x15:
			case 0x16:
			case 0x17:
			case 0x18:
			case 0x19:
			case 0x1A:
			case 0x1B:
			case 0x1C:
			case 0x1D:
			case 0x1E:
			case 0x1F:
			case ' ':
			case '!':
			case '"':
			case '#':
			case '$':
			case '%':
			case '&':
			case '\'':
			case '(':
			case ')':
			case '+':
			case ',':
			case '-':
			case '.':
			case '/':
			case ':':
			case ';':
			case '<':
			case '=':
			case '>':
			case '?':
			case '@':
			case '[':
			case ']':
			case '^':
			case '`':
			case '{':
			case '|':
			case '}':
			case '~':	goto yy2;
			default:	goto yy12;
			}
yy14:
			yych = *++YYCURSOR;
			switch (yych) {
			case '>':	goto yy25;
			default:	goto yy6;
			}
yy15:
			yych = *++YYCURSOR;
			switch (yych) {
			case ':':	goto yy27;
			default:	goto yy6;
			}
yy16:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'R':
			case 'r':	goto yy29;
			case 'U':
			case 'u':	goto yy30;
			default:	goto yy13;
			}
yy17:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy31;
			default:	goto yy13;
			}
yy18:
			++YYCURSOR;
#line 58 "Lexer.l"
			{
                        t->TOKEN = TOKEN_OR;
                        return 0;
                }
#line 252 "<stdout>"
yy20:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'R':
			case 'r':	goto yy32;
			case 'U':
			case 'u':	goto yy33;
			default:	goto yy21;
			}
yy21:
			YYCURSOR = YYMARKER;
			goto yy6;
yy22:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy34;
			default:	goto yy21;
			}
yy23:
			++YYCURSOR;
#line 26 "Lexer.l"
			{
                        t->TOKEN = TOKEN_FUNCTION;
			return 0;
		}
#line 279 "<stdout>"
yy25:
			++YYCURSOR;
#line 30 "Lexer.l"
			{
                        t->TOKEN = TOKEN_CLASS;
			return 0;
		}
#line 287 "<stdout>"
yy27:
			++YYCURSOR;
#line 34 "Lexer.l"
			{
                        t->TOKEN = TOKEN_CLASS;
			return 0;
		}
#line 295 "<stdout>"
yy29:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'I':
			case 'i':	goto yy35;
			case 'O':
			case 'o':	goto yy36;
			default:	goto yy13;
			}
yy30:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'B':
			case 'b':	goto yy37;
			default:	goto yy13;
			}
yy31:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'A':
			case 'a':	goto yy38;
			default:	goto yy13;
			}
yy32:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'I':
			case 'i':	goto yy39;
			case 'O':
			case 'o':	goto yy40;
			default:	goto yy21;
			}
yy33:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'B':
			case 'b':	goto yy41;
			default:	goto yy21;
			}
yy34:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'A':
			case 'a':	goto yy42;
			default:	goto yy21;
			}
yy35:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'V':
			case 'v':	goto yy43;
			default:	goto yy13;
			}
yy36:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy44;
			default:	goto yy13;
			}
yy37:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'L':
			case 'l':	goto yy45;
			default:	goto yy13;
			}
yy38:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy46;
			default:	goto yy13;
			}
yy39:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'V':
			case 'v':	goto yy47;
			default:	goto yy21;
			}
yy40:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy48;
			default:	goto yy21;
			}
yy41:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'L':
			case 'l':	goto yy49;
			default:	goto yy21;
			}
yy42:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy50;
			default:	goto yy21;
			}
yy43:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'A':
			case 'a':	goto yy51;
			default:	goto yy13;
			}
yy44:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy52;
			default:	goto yy13;
			}
yy45:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'I':
			case 'i':	goto yy53;
			default:	goto yy13;
			}
yy46:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'I':
			case 'i':	goto yy54;
			default:	goto yy13;
			}
yy47:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'A':
			case 'a':	goto yy55;
			default:	goto yy21;
			}
yy48:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy56;
			default:	goto yy21;
			}
yy49:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'I':
			case 'i':	goto yy57;
			default:	goto yy21;
			}
yy50:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'I':
			case 'i':	goto yy58;
			default:	goto yy21;
			}
yy51:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy59;
			default:	goto yy13;
			}
yy52:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'C':
			case 'c':	goto yy60;
			default:	goto yy13;
			}
yy53:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'C':
			case 'c':	goto yy61;
			default:	goto yy13;
			}
yy54:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'C':
			case 'c':	goto yy63;
			default:	goto yy13;
			}
yy55:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy65;
			default:	goto yy21;
			}
yy56:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'C':
			case 'c':	goto yy66;
			default:	goto yy21;
			}
yy57:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'C':
			case 'c':	goto yy67;
			default:	goto yy21;
			}
yy58:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'C':
			case 'c':	goto yy69;
			default:	goto yy21;
			}
yy59:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy71;
			default:	goto yy13;
			}
yy60:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy73;
			default:	goto yy13;
			}
yy61:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case 0x00:
			case 0x01:
			case 0x02:
			case 0x03:
			case 0x04:
			case 0x05:
			case 0x06:
			case 0x07:
			case 0x08:
			case '\t':
			case '\n':
			case '\v':
			case '\f':
			case '\r':
			case 0x0E:
			case 0x0F:
			case 0x10:
			case 0x11:
			case 0x12:
			case 0x13:
			case 0x14:
			case 0x15:
			case 0x16:
			case 0x17:
			case 0x18:
			case 0x19:
			case 0x1A:
			case 0x1B:
			case 0x1C:
			case 0x1D:
			case 0x1E:
			case 0x1F:
			case ' ':
			case '!':
			case '"':
			case '#':
			case '$':
			case '%':
			case '&':
			case '\'':
			case '(':
			case ')':
			case '+':
			case ',':
			case '-':
			case '.':
			case '/':
			case ':':
			case ';':
			case '<':
			case '=':
			case '>':
			case '?':
			case '@':
			case '[':
			case ']':
			case '^':
			case '`':
			case '{':
			case '|':
			case '}':
			case '~':	goto yy62;
			default:	goto yy12;
			}
yy62:
#line 38 "Lexer.l"
			{
                        t->TOKEN = TOKEN_SCOPE;
                        t->int_val = ZEND_ACC_PUBLIC;
                        return 0;
                }
#line 598 "<stdout>"
yy63:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case 0x00:
			case 0x01:
			case 0x02:
			case 0x03:
			case 0x04:
			case 0x05:
			case 0x06:
			case 0x07:
			case 0x08:
			case '\t':
			case '\n':
			case '\v':
			case '\f':
			case '\r':
			case 0x0E:
			case 0x0F:
			case 0x10:
			case 0x11:
			case 0x12:
			case 0x13:
			case 0x14:
			case 0x15:
			case 0x16:
			case 0x17:
			case 0x18:
			case 0x19:
			case 0x1A:
			case 0x1B:
			case 0x1C:
			case 0x1D:
			case 0x1E:
			case 0x1F:
			case ' ':
			case '!':
			case '"':
			case '#':
			case '$':
			case '%':
			case '&':
			case '\'':
			case '(':
			case ')':
			case '+':
			case ',':
			case '-':
			case '.':
			case '/':
			case ':':
			case ';':
			case '<':
			case '=':
			case '>':
			case '?':
			case '@':
			case '[':
			case ']':
			case '^':
			case '`':
			case '{':
			case '|':
			case '}':
			case '~':	goto yy64;
			default:	goto yy12;
			}
yy64:
#line 53 "Lexer.l"
			{
                        t->TOKEN = TOKEN_STATIC;
                        t->int_val = 1;
                        return 0;
                }
#line 673 "<stdout>"
yy65:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy74;
			default:	goto yy21;
			}
yy66:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy76;
			default:	goto yy21;
			}
yy67:
			++YYCURSOR;
#line 62 "Lexer.l"
			{
                        t->TOKEN = TOKEN_SCOPE;
                        t->int_val  = ZEND_ACC_PROTECTED | ZEND_ACC_PRIVATE;
                        return 0;
                }
#line 696 "<stdout>"
yy69:
			++YYCURSOR;
#line 77 "Lexer.l"
			{
                        t->TOKEN = TOKEN_STATIC;
                        t->int_val = 0;
                        return 0;
                }
#line 705 "<stdout>"
yy71:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case 0x00:
			case 0x01:
			case 0x02:
			case 0x03:
			case 0x04:
			case 0x05:
			case 0x06:
			case 0x07:
			case 0x08:
			case '\t':
			case '\n':
			case '\v':
			case '\f':
			case '\r':
			case 0x0E:
			case 0x0F:
			case 0x10:
			case 0x11:
			case 0x12:
			case 0x13:
			case 0x14:
			case 0x15:
			case 0x16:
			case 0x17:
			case 0x18:
			case 0x19:
			case 0x1A:
			case 0x1B:
			case 0x1C:
			case 0x1D:
			case 0x1E:
			case 0x1F:
			case ' ':
			case '!':
			case '"':
			case '#':
			case '$':
			case '%':
			case '&':
			case '\'':
			case '(':
			case ')':
			case '+':
			case ',':
			case '-':
			case '.':
			case '/':
			case ':':
			case ';':
			case '<':
			case '=':
			case '>':
			case '?':
			case '@':
			case '[':
			case ']':
			case '^':
			case '`':
			case '{':
			case '|':
			case '}':
			case '~':	goto yy72;
			default:	goto yy12;
			}
yy72:
#line 48 "Lexer.l"
			{
                        t->TOKEN = TOKEN_SCOPE;
                        t->int_val = ZEND_ACC_PRIVATE;
                        return 0;
                }
#line 780 "<stdout>"
yy73:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy77;
			default:	goto yy13;
			}
yy74:
			++YYCURSOR;
#line 72 "Lexer.l"
			{
                        t->TOKEN = TOKEN_SCOPE;
                        t->int_val  = ZEND_ACC_PUBLIC | ZEND_ACC_PROTECTED;
                        return 0;
                }
#line 796 "<stdout>"
yy76:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy78;
			default:	goto yy21;
			}
yy77:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'D':
			case 'd':	goto yy79;
			default:	goto yy13;
			}
yy78:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'D':
			case 'd':	goto yy81;
			default:	goto yy21;
			}
yy79:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case 0x00:
			case 0x01:
			case 0x02:
			case 0x03:
			case 0x04:
			case 0x05:
			case 0x06:
			case 0x07:
			case 0x08:
			case '\t':
			case '\n':
			case '\v':
			case '\f':
			case '\r':
			case 0x0E:
			case 0x0F:
			case 0x10:
			case 0x11:
			case 0x12:
			case 0x13:
			case 0x14:
			case 0x15:
			case 0x16:
			case 0x17:
			case 0x18:
			case 0x19:
			case 0x1A:
			case 0x1B:
			case 0x1C:
			case 0x1D:
			case 0x1E:
			case 0x1F:
			case ' ':
			case '!':
			case '"':
			case '#':
			case '$':
			case '%':
			case '&':
			case '\'':
			case '(':
			case ')':
			case '+':
			case ',':
			case '-':
			case '.':
			case '/':
			case ':':
			case ';':
			case '<':
			case '=':
			case '>':
			case '?':
			case '@':
			case '[':
			case ']':
			case '^':
			case '`':
			case '{':
			case '|':
			case '}':
			case '~':	goto yy80;
			default:	goto yy12;
			}
yy80:
#line 43 "Lexer.l"
			{
                        t->TOKEN = TOKEN_SCOPE;
                        t->int_val = ZEND_ACC_PROTECTED;
                        return 0;
                }
#line 892 "<stdout>"
yy81:
			++YYCURSOR;
#line 67 "Lexer.l"
			{
                        t->TOKEN = TOKEN_SCOPE;
                        t->int_val  = ZEND_ACC_PUBLIC | ZEND_ACC_PRIVATE;
                        return 0;
                }
#line 901 "<stdout>"
		}
#line 94 "Lexer.l"

	}
	return r;
}
