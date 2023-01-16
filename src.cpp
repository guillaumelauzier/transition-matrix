#include <iostream>
using namespace std;

const int N = 3; // Number of states

double transitionMatrix[N][N] = {
    {0.7, 0.2, 0.1},
    {0.1, 0.6, 0.3},
    {0.2, 0.3, 0.5}
};

int main() {
    // Find the probability of transitioning from state 0 to state 1
    double probability = transitionMatrix[0][1];
    cout << "Probability of transitioning from state 0 to state 1: " << probability << endl;
    return 0;
}
