#include <stdio.h>  
#include <string.h>  
  
void reverse(char *s)  
{  
    int l; 	//length of string 
    char temp, *start, *end;  	//temporary variale used for swapping the characters from begin and end position of string 
      
    l = strlen(s);  
    start = s;  
    end = s; 
     
    //length-1 times end pointer jumps to reach at end because initially it was at 1st position, not at 0
    for (int i = 1; i < l; i++)  
        end++;  
     
    //loop runs by half of string length 
    for (int i = 0; i < l/2; i++)  
    {  
        temp = *end;  	//temp variable stores end character
        *end = *start;  //end character takes value of first character
        *start = temp;  //first character takes value of temp variable
          
        start++;  
        end--;  
    }  
}  

int main()  
{  
    char str[50]; 	//character array to store input string 
    printf ("Enter a character string: ");  
    scanf("%s", str);  
      
    reverse(str);	//function to reverse input string
    printf ("Reversed string: %s\n", str);  
    return 0;  
}  