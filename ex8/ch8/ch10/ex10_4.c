
#include <stdio.h>
#include <stdlib.h>
void ex10_4()
{
	struct node {
		char name[20];
		int  score;
		struct node *next;
	};
	struct node *ptr1, *ptr2, *ptr3, *current;
	ptr1 = (struct node *) malloc (sizeof(struct node));
	printf("�п�J ptr1 �`�I���m�W : ");
	scanf("%s", &ptr1->name);;
	printf("�п�J ptr1 �`�I������ : ");
	scanf("%d", &ptr1->score);
	ptr2 = (struct node *) malloc (sizeof(struct node));
	printf("\n�п�J ptr2 �`�I���m�W : ");
	scanf("%s", &ptr2->name);
	printf("�п�J ptr2 �`�I������ : ");
	scanf("%d", &ptr2->score);
	ptr1->next = ptr2;
	ptr3 = (struct node *) malloc (sizeof(struct node));
	printf("\n�п�Jptr3�`�I���m�W: ");
	scanf("%s", &ptr3->name);
	printf("�п�Jptr3�`�I������: ");
	scanf("%d", &ptr3->score);
	ptr3->next = NULL;
	ptr2->next = ptr3;
	current = ptr1;
	printf("\n\n�൲��C����Ʀp�U:\n");
	while (current != NULL) {
		printf("%10s ", current->name);
		printf("%5d\n", current->score);
		current = current->next;
	}
}
