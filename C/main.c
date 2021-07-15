#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
int marks=0;
printf("Enter the marks:" , marks);
scanf("%d", &marks);

if (marks>100 || marks<0) {
	printf("Invalid marks");
}

else if (marks >=75)
{
	printf("Graade A");
}

else if(marks >= 65){
	printf("Grade B");
}

else if (marks >= 55){
	printf("Grade C");	
}

else if (marks >= 45){
	printf("Grade S");
}

else{
	printf("Grade W");
}
	return 0;
}
