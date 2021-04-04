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

/* Return the position of specified substring in the string. [, fromIndex]*/
int index_of_string(char *string, char *substring, ...);

/*
* Validators
*/

/* The characters to be searched for at the start of this string.[, position]*/
/* position: The position in this string at which to begin searching for */
/*   searchString. Defaults to 0 */
int starts_with(char *string, char *search_string, ...);

/* The characters to be searched for at the start of this string.[, position]*/
/* position: The position in this string at which to begin searching for */
/*   searchString. Defaults to 0 */
int ends_with(char *string, char *search_string, ...);

/* The characters to be searched for at the start of this string.[, position]*/
/* position: The position in this string at which to begin searching for */
/*   searchString. Defaults to 0 */
int inclides_string(char *string, char *search_string, ...);

/* The characters to be searched for at the start of this string.[, position]*/
/* position: The position in this string at which to begin searching for */
/*   searchString. Defaults to 0 */
int equal_strings(char *string, char *search_string, ...)

/*
* Pointers
*/

/* Return the pointer of specified substring in the string. [, fromIndex]*/
char *pointer_of_string(char *string char *substring, ...);

/*
*
* New String
*/

/*  */
char *concat_string(char *string_one, char *string_two, ...);

/*  */
char *split_string(char *string_one, char *string_two, ...);


#endif /* STRINGS_H */

