
bool isPalindrome(int x) {
    int ge;
    int i=0;
    int p[64];
    if(x<0)
    {
        return false;
    }
    else
    {do {
        ge = x % 10;
        p[i] = ge;
        i++;
        x = x / 10;
    }while(x!=0);
    i--;
    for(int n=0;n<i;n++,i--)
    {
        if (p[i]!=p[n])
        {
            return false;
        }
    }
    return true;}
}