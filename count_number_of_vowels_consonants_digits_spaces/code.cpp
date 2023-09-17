#include<bits/stdc++.h>

using namespace std;

bool vowel(char ch)
{
    if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u')return true;
    if(ch=='A' or ch=='E' or ch=='I' or ch=='O' or ch=='U')return true;
    return false;
}

bool digit(char ch)
{
    if(ch>='0' and ch<='9')return true;
    return false;
}

int main()
{
    string s;
    getline(cin,s);
    int v=0,d=0,w=0,c=0;
    for(char ch: s)
    {
        if(ch==' ')w++;
        else if(digit(ch))d++;
        else if(vowel(ch))v++;
        else c++;
    }
    cout<<"Vowels: "<<v<<endl;
    cout<<"Consonants: "<<c<<endl;
    cout<<"Digits: "<<d<<endl;
    cout<<"White spaces: "<<w<<endl;

}
