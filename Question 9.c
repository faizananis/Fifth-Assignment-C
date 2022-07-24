int main()
{
    int i=0;
    int n=0;
    printf("Please Enter that how many Cubes of Natural Numebers you want to print: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i*i*i);
    }
    return 0;
}
