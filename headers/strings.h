#ifndef STRINGS_H
#define STRINGS_H

/*
* Length
*/

/* Return the length of specified string. */
int length_string(char *string);

/* Return the length of specified string. */
int length_string_until(char *string, char charcter);

/*
* Index
*/

/* Return the position of specified substring in the string. [, from_index]*/
int index_of_string(
	char *string,
	const char *substring,
	const bool variadic, ...);

/*
* Validators
*/

/* The characters to be searched for at the start of this string.[, position]*/
/* position: The position in this string at which to begin searching for */
/*   searchString. Defaults to 0 */
bool starts_with(
	char *string,
	char *search_string,
	const bool variadic, ...);


/* The characters to be searched for at the start of this string.[, position]*/
/* position: The position in this string at which to begin searching for */
/*   searchString. Defaults to 0 */
bool ends_with(
	char *string,
	char *search_string,
	const bool variadic, ...);

/* The characters to be searched for at the start of this string.[, position]*/
/* position: The position in this string at which to begin searching for */
/*   searchString. Defaults to 0 */
bool inclides_string(
	char *string,
	char *search_string,
	const bool variadic, ...);

/* The characters to be searched for at the start of this string.[, position]*/
/* position: The position in this string at which to begin searching for */
/*   searchString. Defaults to 0 */
bool equal_strings(
	char *string,
	char *search_string,
	const bool variadic, ...);

/*
* Pointers
*/

/* Return the pointer of specified substring in the string. [, fromIndex]*/
char *pointer_of_string(
	char *string,
	char *substring,
	const bool variadic, ...);

/*
*
* New String
*/

/* concatenates the string arguments to the calling string */
/*  and returns a new string. */
char *concat_string(
	char *string_one,
	char *string_two,
	const bool variadic, ...);

/* divides a String into an ordered list of substrings, */
/*   puts these substrings into an array */
/* limit: limit on the number of substrings to be included in the array */
char *split_string(
	char *string_one,
	char *separator,
	const bool variadic, ...);

/* extracts a section of a string and returns it as a new string, */
/* without modifying the original string. */
char *slice_string(
	char *begin_index,
	char *end_index,
	const bool variadic, ...);


char *copy_string(char *string);


char *remove_characters(char *string, char *characteres_to_search);

#endif /* STRINGS_H */

