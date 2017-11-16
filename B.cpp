#include <bits/stdc++.h>

using namespace std;

int A[10][3];

bool canBuild(int n){
    int ent, ent1, ent2, ent3;
    if(n>=100){
        ent=n/100;
        if(A[ent][0]==1){
            ent3=n-(100*ent);
            ent1=ent3/10;
            if(A[ent1][1]==1){
                ent2=ent3-(10*ent1);
                if(A[ent2][2]==1){
                    return true;
                }
            }
            if(A[ent1][2]==1){
                ent2=ent3-(10*ent1);
                if(A[ent2][1]==1){
                return true;
                }
            }
        }
        if(A[ent][1]==1){
            ent3=n-(100*ent);
            ent1=ent3/10;
            if(A[ent1][0]==1){
                ent2=ent3-(10*ent1);
                if(A[ent2][2]==1){
                    return true;
                }
            }
            if(A[ent1][2]==1){
                ent2=ent3-(10*ent1);
                if(A[ent2][0]==1){
                return true;
                }
            }
        }
        if(A[ent][2]==1){
            ent3=n-(100*ent);
            ent1=ent3/10;
            if(A[ent1][0]==1){
                ent2=ent3-(10*ent1);
                if(A[ent2][1]==1){
                    return true;
                }
            }
            if(A[ent1][1]==1){
                ent2=ent3-(10*ent1);
                if(A[ent2][0]==1){
                return true;
                }
            }
        }
    }
    if(n>=10){
        ent1=n/10;
        if(A[ent1][1]==1){
            ent2=n-(ent1*10);
            if(A[ent2][2]==1){
                return true;
            }
        }
        if(A[ent1][1]==1){
            ent2=n-(ent1*10);
            if(A[ent2][0]==1){
                return true;
            }
        }
        if(A[ent1][0]==1){
            ent2=n-(ent1*10);
            if(A[ent2][1]==1){
                return true;
            }
        }
        if(A[ent1][0]==1){
            ent2=n-(ent1*10);
            if(A[ent2][2]==1){
                return true;
            }
        }
        if(A[ent1][2]==1){
            ent2=n-(ent1*10);
            if(A[ent2][0]==1){
                return true;
            }
        }
        if(A[ent1][2]==1){
            ent2=n-(ent1*10);
            if(A[ent2][1]==1){
                return true;
            }
        }
    }
    if(A[n][0]==1) return true;
    if(A[n][1]==1) return true;
    if(A[n][2]==1) return true;

    return false;

}


int main(void){
    int aux, n;
    cin >> n;
    memset(A, 0, sizeof A);
    for(int i=0; i<n; i++){
        for(int j=0; j<6; j++){
            cin >> aux;
            A[aux][i]=1;
        }
    }

    int i=1;
    while(canBuild(i)) i++;
    i--;
    cout << i << "\n";

    return 0;
}
