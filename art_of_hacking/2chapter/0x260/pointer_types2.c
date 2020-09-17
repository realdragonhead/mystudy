#include <stdio.h>

int main() {
	int i;
	
	char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
	int int_array[5] = {1, 2, 3, 4, 5};

	char * char_pointer;
	int * int_pointer;
	
	char_pointer = int_array;
	int_pointer = char_array;

	for(i=0; i < 5; i++) {
		printf("[정수 포인터] %p를 가리킨다. 가리키는 문자 값은 '%c'\n", int_pointer, *int_pointer);
		int_pointer = int_pointer + 1;
	}

	for(i=0; i < 5; i++) {
		printf("[문자포인터] %p를 가리킨다. 가리키는 정수 값은 %d\n", char_pointer, *char_pointer);
		char_pointer = char_pointer + 1;
	}
}
