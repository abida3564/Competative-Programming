#include<bits/stdc++.h>
using namespace std;

bool isKeyword(const string &str)
{
    vector<string> keywords = {"int","float","double","if","else","for","while","return","switch","case","break","continue","class","public","private","void","static","const","char","struct","do","while","auto","void","bool","sizeof"};

    for(const string &keyword : keywords)
    {
        if(str == keyword)
        {
            return true;
        }
    }
    return false;
}


bool isValidIdentifier(const string &str)
{
    if(str.empty())  return false;
    if(isKeyword(str)) return false;
    if(!(isalpha(str[0]) || str[0] == '_')) return false;

    for (size_t i=1; i<str.length(); i++)
    {
        if(!(isalnum(str[i]) || str[i] == '_')) return false;
    }
    return true;
}
int main()
{
    string identifier;
    cin>>identifier;

    if(isValidIdentifier(identifier))
    {
        cout<<identifier<<" is valid"<<endl;
    }
    else
    {
        cout<<identifier<<" is invalid"<<endl;
    }
    return 0;
}
