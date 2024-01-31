#include<stdio.h>
FILE *fp=NULL;
char str[100];
char strr[] = "I am het";

int main()
{
        fp = fopen("/home/hetpatel/c_codes/myfile.txt","w+");
        fwrite(strr,sizeof(strr)-1,1,fp);
        fclose(fp);
#include<stdio.h>
FILE *fp=NULL;
char str[100];
char strr[] = "I am het";

int main()
{
        fp = fopen("/home/hetpatel/c_codes/myfile.txt","r");
        fwrite(str,5,1,fp);
        fclose(fp);
        fread(str,101,1,fp);
        fclose(fp);
        printf("\n%s\n",str);
        return 0;
}
        fread(str,101,1,fp);
        fclose(fp);
        printf("\n%s\n",str);
        return 0;
}
