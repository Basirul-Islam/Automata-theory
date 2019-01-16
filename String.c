#include<stdio.h>
void concatenation()
{
    char s1[100], s2[100],s3[100];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

   
    for(i = 0; s1[i] != '\0'; i++);
     for(j = 0; s2[j] != '\0'; j++);

   
    for(int k=0;k<i; k++) s3[k] = s1[k];
    for(int l=i,m=0; l<i+j; l++,m++) s3[l] = s2[m];
   
    
    printf("After concatenation: %s", s3);

   

}

void length()
{
    char s[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", s);

    for(i = 0; s[i] != '\0'; ++i);

    printf("Length of string: %d", i);
   


}

void compare()
{
    char s1[100], s2[100], i, j;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);
    
    for(i=0; s1[i]!='\0'&&s2[i]!='\0'; i++)
    {
   

     if(s1[i]<s2[i]){
                printf("less");
                return;
            }

    else if(s1[i]>s2[i]){
                printf("Greater");
                return;
            }
    }

    printf("Equal");
       

}
void reverse()
{
    char s[100];     
    printf("Enter a string: ");
    scanf("%s", s);   
    int i;
    for(i = 0; s[i] != '\0'; i++);
   
    for(int j=i-1; j>=0; j--) printf("%c",s[j]);

    printf("\n");
}


void menu()
{
	printf("options: \n 1.concatenation \n 2.length \n 3.reverse \n 4.compare \n ");
	int choice;
	scanf("%d", &choice);
	while(choice > 0 && choice < 5)
	{
		
		
		if(choice == 1)
		concatenation();
		else if(choice == 2)
		length();
		else if(choice == 3)
		reverse();
		else if(choice == 4)
		compare();
		else 
		return; 
		
		printf("\n options: \n 1.concatenation \n 2.length \n 3.reverse \n 4.compare \n "); 
		scanf("%d", &choice); 
	   
	}




}

int main(void){

    menu();
 
 return 0;
}


