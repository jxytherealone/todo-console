#include<stdio.h>
#include<process.h>
#include<string.h>

char x[100];

void newTodo() {
	printf("Enter the list: ");
	scanf("%s", &x);
	printf("added new todo = %s", x);
}

void deleteTodo() {
	//later tbh
}

void todoDisplay() {
	printf("\nAll Todo Lists:\n");
    for (int i = 0; i < 100; i++) {
        if (x[i] == '\0') { 
            break;
        } else {
        	printf("%s \n",&x[i]);
        }

    }
}

int main(void) {

	char ch;
	while(1) {
		printf("\n\nTODO LIST IN A CONSOLE CAUSE WHY NOT");
		printf("\n1.New\n2.Display\n3.exit\nEnter your choice: ");
		scanf("%s", &ch);
		switch(ch) {
		case '1':
			newTodo();
			break;
		case '2':
			todoDisplay();
			break;
		case '3':
			exit(0);
		default:
			printf("Wrong choice!");
		}
	}
	return 0;
}