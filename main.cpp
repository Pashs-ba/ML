#include <vector>
#include "Neuron.h"
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    vector<vector<double>> inp = {{1, 0},
                                  {0, 1},
                                  {1, 1},
                                  {0, 0}
    };

    vector<int> ans = {1, 1, 1, 0};
    Neuron neuron({.5, .5}, .5);

    // Learning
    for (int i = 0; i<10000; i++){
        for (int j = 0; j<ans.size(); j++){
            neuron.learning(inp[j], ans[j]);
        }
        cout << i << ' ' << neuron.Weights[0] << ' ' << neuron.Weights[1] << endl;
    }
    cout << round(neuron.output({1, 1}));
}