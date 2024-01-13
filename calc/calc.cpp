#include <iostream>
#include <string.h>
#include <array>

using namespace std;


template<class type> type getFactorial(int num){
    type factorial = 1;
    for(type i = 1; i <= num; ++i)
            factorial *= i;
    return factorial;
}

// unsigned long getFactoralLong(int num){
//     unsigned long factorial = 1;
//     for(unsigned long i = 1; i <= num; ++i)
//             factorial *= i;
//     return factorial;
// }
//
// double getFactoralDouble(int num){
//     double factorial = 1;
//     for(double i = 1; i <= num; ++i)
//             factorial *= i;
//     return factorial;
// }

int main(int argc, char** argv){
        int sum = 1;

        if(!strcmp(argv[2], "+") && argc == 4) {
            cout << atof(argv[1]) + atof(argv[3]) << endl;
        }

        else if(!strcmp(argv[2],"-") && argc == 4) {
            cout << atof(argv[1]) - atof(argv[3]) << endl;
        }

        else if(!strcmp(argv[2],"x") && argc == 4) {
            cout << atof(argv[1]) * atof(argv[3]) << endl;
        }

        else if(!strcmp(argv[2],"/") && argc == 4) {
            cout << atof(argv[1]) / atof(argv[3]) << endl;
        }

        else if(!strcmp(argv[2],"^") && argc == 4) {
            sum = atof(argv[1]);
            for(int i = 1; i < atoi(argv[3]); i++)
                sum *= atof(argv[1]);
            cout << sum << endl;
        }

        else if(!strcmp(argv[2],"!") && argc == 3) {
            if(atof(argv[1]) <= 20)
            cout << getFactorial<unsigned long>(atof(argv[1])) << endl;
            else if(atof(argv[1]) > 20)
            cout << getFactorial<double>(atof(argv[1])) << endl;

        }

        else {
            cout << "Please enter valid parameters like: num +,-,*,/,^ num, or num !" << endl;
        }

    return 0;
}
