//concatenating string s2 to string s1 ;use function to find length
//2105764
int length(char*s)
{
    int k=-1;
    while(s[++k]);
    return k;
}
int main()
{
    char s1[100],s2[100],ch;
    int i,j;
    printf("enter first string:");
    scanf("%s",s1);
    printf("\n enter second string:");
    scanf("%s",s2);
    i=0;
    j=length(s1);
    while(s1[j++]=s2[i++])
    printf("after concatenation:%s",s1);
    return 0;
}