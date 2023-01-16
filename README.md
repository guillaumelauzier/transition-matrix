# transition-matrix

The transition matrix of a Markov chain is a square matrix that describes the probability of transitioning from one state to another. The elements of the matrix are given by the formula:

P[i, j] = P(X(t+1) = j | X(t) = i)

Where P is the transition matrix, i and j are the current and next states, respectively, and X(t) is the state of the Markov chain at time t.

In C++, the transition matrix can be represented as a 2-dimensional array. Here's an example of how to initialize and use a transition matrix in C++:

```
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
```

This code defines a transition matrix with 3 states and initializes it with some example probabilities. The main function then finds the probability of transitioning from state 0 to state 1 by accessing the corresponding element of the matrix (transitionMatrix[0][1]).

It's important to note that the sum of the elements of each row must be equal to 1, to ensure the matrix represents a probability distribution.
