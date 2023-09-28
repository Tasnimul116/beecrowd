#include<bits/stdc++.h>
using namespace std;

int main() {
    float noteV;
    double notes[] = {100, 50, 20, 10, 5, 2};
    double coins[] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};

    cin >> noteV;
    cout << "NOTAS:" << endl;
 	int cents = static_cast<int>(amount * 100 + 0.5); // Round to the nearest cent

    cout << "NOTAS:" << endl;
    for (int note : notes) {
        int numNotes = cents / (note * 100);
        cout << numNotes << " nota(s) de R$ " << note << ".00" << endl;
        cents -= numNotes * (note * 100);
    }

    cout << "MOEDAS:" << endl;
    for (auto coin : coins) {
        int numCoins = cents / static_cast<int>(coin * 100 + 0.5); // Round to the nearest cent
        cout << numCoins << " moeda(s) de R$ " << fixed << setprecision(2) << coin << endl;
        cents -= numCoins * static_cast<int>(coin * 100 + 0.5);
    }
    return 0;
}
