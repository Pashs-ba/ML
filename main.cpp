#include <vector>
#include "Neuron.h"
#include <string>
#include <iostream>
#include <cmath>
#include "read/mnist_reader.h"

using namespace std;

int main(){
    string file = __FILE__;
    file.resize(file.size()-8);
    cout<<file;
    string s = "lol.txt";
    file += "lol.txt";
    MNISTReader mnist(
                    //file+("train-labels.idx1-ubyte.gz"),
            file,
                    file+("train-images.idx3-ubyte.gz"));
    mnist.read();
    for(auto i: mnist.mLabelValues){
        cout<<i<<endl;
    }
    return 0;

}