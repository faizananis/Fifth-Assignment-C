int main()
{
    int n=0;
    int i=0;
    printf("Please Enter that which number of table you want to print on the Screen: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}
