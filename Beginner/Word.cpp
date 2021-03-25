#include <bits/stdc++.h>
using namespace std;

int main()
{

    char ch[100];
    gets(ch);

    int upper = 0, lower = 0;

    for (int i = 0; ch[i] != 0; i++)
    {
        /* code */
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            upper++;
        }
        else if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            lower++;
        }
    }

    if(upper > lower) {
        for (int x=0; x<strlen(ch); x++)
        putchar(toupper(ch[x]));
        
    }else{
        for (int x=0; x<strlen(ch); x++)
        putchar(tolower(ch[x]));
    }



    
}