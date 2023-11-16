#include "monty.h"
/**
 * f_sub - sustraction
 * @head: stack head.
 * @counter: line_number.
 * Return: nothing.
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sus,

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too shorrt\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);
}
