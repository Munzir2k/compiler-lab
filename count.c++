#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string.h>

using namespace std;
int main()
{
    int c=0,w=0,l=0;
    FILE *f;
    char fname[20],ch;

    cout<<"Enter file name: ";
    gets(fname);
    f = fopen(fname, "r");
    if(f == NULL)
    {
        cout<<"Invalid file name!";
        exit(0);
    }
    ch = fgetc(f);
    while(ch != EOF)
    {
        if(ch!=' ' && ch!= '\n')
            c++;
        if(ch==' ')
            w++;
        if(ch =='\n')
        {
            l++;
            w++;
        }
        ch = fgetc(f);
    }
    fclose(f);
    cout<<"--------------------------------------------------------";
    cout<<"\nNumber of charecters: "<<c;
    cout<<"\nNumber of words: "<<w;
    cout<<"\nNumber of lines: "<<l;
}