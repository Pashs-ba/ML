#include "Neuron.h"
#include <vector>
#include <cmath>


Neuron::Neuron(std::vector<double> input_Weights, double input_Limit):
        Weights (input_Weights)
{
    limit = input_Limit;
}

double Neuron::sum_num(std::vector<double> nums) {
    double sum = 0;
    for (int i = 0; i<nums.size(); i++){
        sum += nums[i] * Weights[i];
    }
    sum += limit;
    return sum;
}

double Neuron::activation(double sum){
    return 1./(1.+exp(-sum));
}

double Neuron::d_activation(double sum){
    return activation(sum)*(1-activation(sum));
}

double Neuron::output(std::vector<double> inp){
    double sum = sum_num(inp);
    return activation(sum);
}

void Neuron::learning(std::vector<double> inp, double ans){
    double error, t, value;
    value = output(inp);
    error = ans - value;
    t = error*d_activation(sum_num(inp));
    for (int j = 0; j<Weights.size(); j++){
        Weights[j] += inp[j]*t*0.3;
    }
    limit += t*0.3;
}
