#ifndef ARRAY_H
#define ARRAY_H


void add_array(void ***array, void *value);


/**
 * Callbacks
 */
void **map_array(
	void **array,
	void *(*callback)(void *current_value, int index, void **array, ...),
	...
);

void **filter(
	void **array,
	bool (*callback)(void *current_value, int index, void **array, ...)bool,
	...
);

void for_each(
	void **array,
	void (*callback)(void *current_value, int index, void **array, ...),
	...
);

bool every(
	void **array,
	bool *(callback)(void *current_value, int index, void **array, ...)bool,
	...
);

#endif /* ARRAY_H */
