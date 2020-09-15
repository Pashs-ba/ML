#include <vector>
#include "Neuron.h"
#include "sum_nums_data.h"
#include <iostream>
#include <cmath>

using namespace std;

int main(){

    Neuron and_perceptron({7.39695, 7.39674}, .5);

//     Learning
//    for (int i = 0; i<10000; i++){
//        for (int j = 0; j<ans.size(); j++){
//            and_perceptron.learning(inp[j], ans[j]);
//        }
//        cout << i << ' ' << and_perceptron.Weights[0] << ' ' << and_perceptron.Weights[1] << endl;
//    }
    vector<Neuron> layer;
    for (int i = 0; i<10; i++){
        Neuron tmp({.5, .5}, .5);
        layer.emplace_back(tmp);
    }
//    Learning
    for (int i = 0; i<1000000; i++) {
        for (int j = 0; j<ans.size(); j++) {
            vector<int> ans_for_layer;
            ans_for_layer.resize(10);
            ans_for_layer[ans[j]] = 1;
            for (int k = 0; k<layer.size(); k++){
                layer[k].learning(inp[j], ans_for_layer[k]);
//                cout<<layer[k].Weights[0]<<' '<<layer[k].Weights[1]<<' '<<ans_for_layer[k]<<endl;
            }
//            cout<<endl<<endl;
        }

    }

    for (int j = 0; j<inp.size(); j++){
        double max_ans = 0;
        int max_val = 0;
        for (int i = 0; i<layer.size(); i++ ){
//        cout<<layer[i].output({1, 2})<<endl;
            if (layer[i].output(inp[j]) > max_ans){
                max_ans = layer[i].output(inp[j]);
                max_val = i;
            }
        }
        cout<<max_val<<' '<<ans[j]<<endl;
    }

//    cout << round(and_perceptron.output({1, 1}));

}