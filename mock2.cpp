#include<iostream>
 
using namespace std;
 
int main()
{
    int i, key;
    cin >> key;

    char message[100], ch;
	gets(message, 100);
	
	for(i = 0; message[i] != '\0'; i++){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			message[i] = ch;
		}
		
	}
	
	cout << message << endl;

	return 0;
}