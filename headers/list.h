#ifndef LIST_H
#define LIST_H

/* node linked list */
/**
 * struct array_list - generict array
 * @value: value pointer
 * @next: next node
 */
typedef struct array_list
{
	void *value;
	struct array_list *next;
} list_t;

/* create head linked list */
list_t *new_list(void *value);

/* add tail in linked list */
list_t *add_list(list_t *head, void *value);

/* add head in linked list */
list_t *add_head_list(list_t *head, void *value);

/* create head linked list */
list_t *pop_list(list_t *head);

/* get value index */
list_t *get_list(list_t *head, size_t index);

/* remove value index */
list_t *remove_list(list_t *head, size_t index);

/* clear list */
list_t *clear_list(list_t *head);

/* get size */
list_t *size_list(list_t *head);

/* size */
list_t *iterator_list(list_t *head);

/* concat */
list_t *concat_list(list_t *head, list_t *head);

list *map_list(list_t *head, list *(*map)(*void value, size_t index))

/* get array to values */
void **values(list_t *head);

#endif /* LIST_H */
