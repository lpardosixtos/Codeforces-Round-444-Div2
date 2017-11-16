#include <bits/stdc++.h>

using namespace std;

int main(void){

    string s;
    cin >> s;
    int cont1=0, cont2=0;
    int k=0;
    while(k<s.size()){
        if(s[k]=='1') break;
        else k++;
    }
    s=s.substr(k, s.size()-k);

    if(s.length()<=6) cout << "no\n";
    else{
        for(int i=s.length()-1; i>=s.length()-6; i--){
            if(s[i]=='0') cont1++;
        }
        if(cont1==6){
            cout << "yes\n";
            return 0;
        }
        int j=s.length()-7;
        while(j>=0){
            if(s[j]=='0'){
                cont2++;
                if(cont2==6-cont1){
                    cout << "yes\n";
                    return 0;
                }
            }
            j--;
        }
        cout << "no\n";
    }


    return 0;
}
