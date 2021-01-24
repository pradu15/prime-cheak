#include<stdio.h>
int primeno(int,int);
int main()
{
    int no,result;
    printf("enter number\n");
    scanf("%d",&no);
    if(no==1){
        printf("\n%d is not prime neither composite",no);
    }
    
    result=primeno(no,no/2);
    if(result==1){
        printf("\n %d is  a prime no",no);
    }
    else{
        printf("\n %d is not a prime no",no);
    }
    return 0;

}
int primeno(int number,int i)
{
    if(i==1)
    {
        return 1;
    }
    else 
    {
        if(number%i==0)
        {
            return 0;
        }
        else
        {
        
        return primeno(number,i-1);
        }
        
    }
}