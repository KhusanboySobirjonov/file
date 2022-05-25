#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int N;
    char a;
    ofstream write("file.txt");
    cout << "Satrlar sonini kiriting : ";
    cin >> N;
    write << N << endl;
    if (0 < N && N < 27) {
        for (int i = 1; i <= N; i++) {
            a = 97;
            for (int j = 1; j <= i; j++) {
                cout << a << endl;
                write << a << endl;
                a++;
            }
        }
    }
    else {
        cout << "Siz N sonini 0 < N < 27 oraliqda kiritmagansiz";
        write << "Siz N sonini 0 < N < 27 oraliqda kiritmagansiz";
    }
    return 0;
}
