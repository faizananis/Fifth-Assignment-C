int main()
{
    int n=0;
    int i=0;
    printf("Please Enter that how many Odd Numbers in Reverse Order you want to print: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("%d\n",i*2-1);
    }
    return 0;
}
