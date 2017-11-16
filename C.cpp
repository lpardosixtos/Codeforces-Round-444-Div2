#include <bits/stdc++.h>

using namespace std;

string cube;

string nospace(string s){
    string aux;
    for(int i=0; i<s.length(); i++){
        if(s[i]!=' ') aux.push_back(s[i]);
    }
    return aux;
}

string rename(string s, int n){
    string aux;
    if(n==4){
        aux=s.substr(n, 8);
        aux.append(s.substr(20, 4));
        aux.push_back(s[13]);
        aux.push_back(s[15]);
        aux.push_back(s[12]);
        aux.push_back(s[14]);
        aux.push_back(s[18]);
        aux.push_back(s[16]);
        aux.push_back(s[19]);
        aux.push_back(s[17]);
        aux.push_back(s[3]);
        aux.push_back(s[2]);
        aux.push_back(s[1]);
        aux.push_back(s[0]);
        return aux;
    }
    if(n==12){
        aux=s.substr(12, 4);
        aux.push_back(s[10]);
        aux.push_back(s[8]);
        aux.push_back(s[11]);
        aux.push_back(s[9]);
        aux.push_back(s[19]);
        aux.push_back(s[18]);
        aux.push_back(s[17]);
        aux.push_back(s[16]);
        aux.push_back(s[21]);
        aux.push_back(s[23]);
        aux.push_back(s[20]);
        aux.push_back(s[22]);
        aux.push_back(s[6]);
        aux.push_back(s[4]);
        aux.push_back(s[7]);
        aux.push_back(s[5]);
        aux.push_back(s[2]);
        aux.push_back(s[0]);
        aux.push_back(s[3]);
        aux.push_back(s[1]);
        return aux;
    }

}

string pairs(int n){
    string aux;
    aux.push_back(cube[n]);
    aux.push_back(cube[n+1]);
    return aux;
}





int main(void){

    getline(cin, cube);
    cube=nospace(cube);
    set<char> times;
    int A[6], cont=0;
    for(int i=0; i<6; i++){
        for(int j=0; j<4; j++){
            times.insert(cube[4*i+j]);
        }
        A[i]=times.size();
        if(A[i]>=3){
            cout << "NO\n";
            return 0;
        }
        if(A[i]==1) cont++;
        times.clear();
    }

    if(cont!=2){
        cout <<"NO\n";
        return 0;
    }
    string aux1, aux2, aux3;
    if(A[1]==1 && A[5]==1){
        cube=rename(cube, 4);

    }
    else{
        if(A[3]==1 && A[4]==1){
            cube=rename(cube, 12);
        }
        else{
            if(A[0]==1 && A[2]==1){}
            else{
                cout << "NO\n";
                return 0;
            }
        }
    }

        aux1.append(pairs(4));
        aux1.append(pairs(16));
        aux1.append(pairs(20));
        aux1.append(pairs(12));
        aux2.append(pairs(14));
        aux2.append(pairs(6));
        aux2.append(pairs(18));
        aux2.append(pairs(22));

        if(aux1==aux2){
            cout << "YES\n";
            return 0;
        }
        aux3.append(pairs(18));
        aux3.append(pairs(22));
        aux3.append(pairs(14));
        aux3.append(pairs(6));
        if(aux1==aux3){
            cout << "YES\n";
            return 0;
        }
        cout << "NO\n";


    return 0;
}
