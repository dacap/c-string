// C string
// Copyright (c) 2010 David Capello
//
// This file is released under the terms of the MIT license.
// Read LICENSE.txt for more information.

#ifndef C_STRING_H
#define C_STRING_H

typedef struct String
{
  char* text;
  int length;
  int size;
} String;

String* string_create  (const char* text);
void    string_destroy (String* s);

void    string_reserve (String* s, int text_length);
void    string_append  (String* s, const char* text);
void    string_prepend (String* s, const char* text);

#endif
