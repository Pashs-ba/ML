#include <vector>
#ifndef ML_NEURON_H
#define ML_NEURON_H
class Neuron{
private:
    double limit;
    double d_activation(double sum);
    double sum_num(std::vector<double> nums);
    double activation(double sum);

public:
    std::vector<double> Weights;
    double output(std::vector<double> inp);
    void learning(std::vector<double> inp, double ans);
    Neuron(std::vector<double> input_Weights, double input_Limit);


};
#endif //ML_NEURON_H
