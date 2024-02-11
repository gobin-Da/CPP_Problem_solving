#include <iostream>
using namespace std;
int main (){
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        char ch = tolower(str[i]);
        if(ch =='a'|| ch=='e'||ch=='i'||ch=='o'|| ch=='u'||ch=='y'){

        }else{
            cout<<"."<<ch;
        }
    }
    return 0;
}
