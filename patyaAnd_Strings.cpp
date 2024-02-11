#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, a, b, p, q;
    cin >> s1 >> s2;

    int k,l;
    for(k=0; k<s1.length(); k++){
        if(s1[k] >= 65 && s1[k] < 97){
            s1[k] = s1[k] + 32;
        }
    }

    sort(s1.begin() , s1.end());

    for(l=0; l<s2.length(); l++){
        if(s2[l] >= 65 && s2[l] < 97){
            s2[l] = s2[l] + 32;
        }
    }

    sort(s2.begin() , s2.end());

    int i,j, cnt=0, ans=0, m, n;

    for(i=0; i<s1.length(); i++){       
        for(j=0; j<s2.length(); j++){
            if(s1[i] == s2[j]){
                if(s1[i+1] < s2[j+1]){
                    cout << "-1" << endl;
                    return 0;
                }
                else if(s1[i+1] > s2[j+1]){
                    cout << "1" << endl;
                    return 0;
                }
            }
        }
    }
}


/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, a, b, p, q;
    cin >> s1 >> s2;

    int k,l;
    for(k=0; k<s1.length(); k++){
        if(s1[k] >= 65 && s1[k] < 97){
            s1[k] = s1[k] + 32;
        }
    }

    sort(s1.begin() , s1.end());

    for(l=0; l<s2.length(); l++){
        if(s2[l] >= 65 && s2[l] < 97){
            s2[l] = s2[l] + 32;
        }
    }

    sort(s2.begin() , s2.end());

    cout << s1 << " " << s2 << endl;

    int i,j, cnt=0, ans=0, m, n;

    for(i=0; i<s1.length(); i++){
        m = (int)s1[i];
        cnt = cnt + m;
    }



    for(j=0; j<s2.length(); j++){
        n = (int)s2[j];
        ans = ans + n;
    }

    cout << cnt << " " << ans << endl;

    if(cnt > ans){
        cout << "1" << endl;
    }
    else if(cnt < ans){
        cout << "-1" << endl;
    }
    else{
        cout << "0" << endl;
    }
}


 */