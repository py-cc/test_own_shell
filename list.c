#include "shell.h"


/**
 * new_list - create linked list
 * @value: data to save
 * Return: new node
 */
list_t *new_list(void *value)
{
	list_t current_list;

	current_list = malloc(sizeof(list_t))
	if (!current_list)
		return (NULL);
	current_list->value = value;
	current_list->next = NULL;
	return (current_list);
}

/**
 * add_list - add new node
 * @head: linked list
 * @value: data to save
 * Return: new node
 */
list_t *add_list(list_t *head, void *value)
{
	if (!head)
		return (NULL);
	if (!head->next)
	{
		head->next = new_list(value);
		return (head->next);
	}
	return (add_list(head->next, value));

}

