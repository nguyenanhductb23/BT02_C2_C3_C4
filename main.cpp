#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    //Bai 2
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) cout << ' ';
        for (int j = 0; j < N-i; j++) cout << '*';
        cout << endl;
    }
    cout << endl << endl;
    //Bai 3
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N-1-i; j++) cout << ' ';
        for (int j = 0; j < 2*i+1; j++) cout << '*';
        cout << endl;
    }
    cout << endl << endl;
    //Bai 4
    for (int i = N-1; i >= 0; i--) {
        for (int j = 0; j < N-1-i; j++) cout << ' ';
        for (int j = 0; j < 2*i+1; j++) cout << '*';
        cout << endl;
    }
    return 0;
}
