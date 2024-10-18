#include <stdio.h>

int main(){
	int var, *ptr;
	var = 2024;
	ptr = &var;
	

	printf("%d %d %p %p \n",var, *ptr, &var, ptr);
	var -= 2;
 	*ptr += 3;
	printf("%d %d %d %p\n",var,*ptr,*&var,&*ptr);
	//taisir
	printf("%d", var);
	
	return 0;
}
