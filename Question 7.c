int main()
{
    int i=0;
    int n=0;
    printf("Please Enter that how many Even Natural Numbers in Reverse Order you want to print: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("%d\n",i*2);
    }
    return 0;
}
