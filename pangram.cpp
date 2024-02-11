#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, op, ab,bc,cd,de,ef,fg,gh,hi,ij,jk,kl,lm,mn,no,opp,pq,qr,rs,st,tu,uv,vw,wx,xy,yz,za=0;
    cin >> num;
    char str[num];
    cin >> str;
    for(op=0; op<num; op++){
        if(str[op] >= 65 && str[op] <= 92){
            str[op] += 32;
        }
    }
    for(op=0; op<num; op++){
        if(str[op] == 'a'){
            ab++;
        }
        else if(str[op] == 'b'){
            bc++;
        }
        else if(str[op] == 'c'){
            cd++;
        }
        else if(str[op] == 'd'){
            de++;
        }
        else if(str[op] == 'e'){
            ef++;
        }
        else if(str[op] == 'f'){
            fg++;
        }
        else if(str[op] == 'g'){
            gh++;
        }
        else if(str[op] == 'h'){
            hi++;
        }
        else if(str[op] == 'i'){
            ij++;
        }
        else if(str[op] == 'j'){
            jk++;
        }
        else if(str[op] == 'k'){
            kl++;
        }
        else if(str[op] == 'l'){
            lm++;
        }
        else if(str[op] == 'm'){
            mn++;
        }
        else if(str[op] == 'n'){
            no++;
        }
        else if(str[op] == 'o'){
            opp++;
        }
        else if(str[op] == 'p'){
            pq++;
        }
        else if(str[op] == 'q'){
            qr++;
        }
        else if(str[op] == 'r'){
            rs++;
        }
        else if(str[op] == 's'){
            st++;
        }
        else if(str[op] == 't'){
            tu++;
        }
        else if(str[op] == 'u'){
            uv++;
        }
        else if(str[op] == 'v'){
            vw++;
        }
        else if(str[op] == 'w'){
            wx++;
        }
        else if(str[op] == 'x'){
            xy++;
        }
        else if(str[op] == 'y'){
            yz++;
        }
        else if(str[op] == 'z'){
            za++;
        }
    }
    cout << ab <<" "<< bc <<" "<< cd<<" " << de<<" " << ef <<" " << endl;
    /*if(a>=1 && b>=1 && c>=1 && d>=1 && e>=1 && f>=1 && g>=1 && h>=1 && i>=1 && j>=1 && k>=1 && l>=1 && m>=1 && n>=1 && o>=1 && p>=1 && q>=1 && r>=1 && s>=1 && t>=1 && u>=1 && v>=1 && w>=1 && x>=1 && y>=1 && z>=1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }*/

}