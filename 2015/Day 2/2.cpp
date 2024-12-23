#include <bits/stdc++.h>
using namespace std;

void part2() {
    ifstream cin("input.txt");
    int t = 1000;
    unsigned long long int puppy = 0;
    while(t--){
        int A,B,C;
        char X,Y;
        cin>>A>>X>>B>>Y>>C;
        long long Z = max({A,B,C});
        long long N = (A + B + C - Z) * 2;
        unsigned long long int apapap = A * B * C + N;
        puppy += apapap;
    }
    cout<<puppy<<endl;
}

void part1() {
    ifstream cin("input.txt");
    int t = 1000;
    unsigned long long int puppy = 0;
    while(t--){
        int A,B,C;
        char X,Y;
        cin>>A>>X>>B>>Y>>C;
        long long L = 2 * A * B;
        long long P = 2 * A * C;
        long long M = 2 * B * C;
        long long T = A * B;
        long long S = A * C;
        long long K = C * B;
        long long Z = min({T,S,K});
        unsigned long long int apapap = L + P + M + Z;
        puppy += apapap;
    }
    cout<<puppy<<endl;
}

int main(){
    cout<<"part 1: ";
    part1();
    cout<<"part 2: ";
    part2();
}
