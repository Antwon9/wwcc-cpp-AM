#include <iostream>
#include <cstdlib>  // For rand() function
#include <ctime>    // For time() function
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    int flips;
    int heads = 0;
    int tails = 0;

    cout << "Coin Flip Simulator" << endl;
    cout << "How many flips would you like to simulate? ";
    cin >> flips;

    /    cout << "\nSimulating " << flips << " coin flips...\n" << endl;

    for (int i = 0; i < flips; i++) {
        int result = rand() % 2; // 0 for heads, 1 for tails
        if (result == 0)
            heads++;
        else
            tails++;
    }

    double percentHeads = (static_cast<double>(heads) / flips) * 100;
    double percentTails = (static_cast<double>(tails) / flips) * 100;

    cout << "Results:" << endl;
    cout << "Heads: " << heads << " (" << fixed << setprecision(2) << percentHeads << "%)" << endl;
    cout << "Tails: " << tails << " (" << fixed << setprecision(2) << percentTails << "%)" << endl;
    return 0;
}