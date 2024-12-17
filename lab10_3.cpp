#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream> 

using namespace std;

int main() {
    int count = 0;  
    float sum = 0;  
    float sum_of_square = 0; 
    string textline;  
    ifstream source("score.txt");  

  
    if (!source) {
        cerr << "Error opening the file!" << endl;
        return 1;
    }

    while (getline(source, textline)) {
        float score = stof(textline);
        sum += score;  
        sum_of_square += score * score; 
        count++; 
    }

    
    float mean = sum / count;

    
    float variance = (sum_of_square / count) - (mean * mean);  
    float std_dev = sqrt(variance);  

    
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3) << defaultfloat; 
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << std_dev << "\n";

    source.close();  
    return 0;
}
