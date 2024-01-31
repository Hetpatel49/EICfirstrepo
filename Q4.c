#include <stdio.h>

// utility function
void reverse(char str[], int start, int end)
{
    while (start < end)
    {
        str[start] ^= str[end]; // first = first^last
        str[end] ^= str[start]; // last = last^(first^last) -> last = first^0 = first
        str[start] ^= str[end]; // first^last = first^last^first = last^0 = last

        ++start;
        --end;
    }
}

int main()
{
    char str[1001];
    printf("Enter a string: ");
    scanf("%[^\n]", str);             // read the string until press enter
    reverse(str, 0, strlen(str) - 1); // utility function with parameters of string, starting index and end index
    printf("Reversed string: %s\n", str);
    return 0;
}