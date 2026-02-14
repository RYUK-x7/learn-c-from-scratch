int main(void)
{
    char str[80];
    rcopy(str, "this is a test");
    printf("%s", str);
    return 0;
}

void rcopy(char *s1, char *s2)
{
    if (*s2) { 
        *s1 = *s2; 
        rcopy(s1 + 1, s2 + 1); 
    } else {
        *s1 = '\0'; 
    }
}