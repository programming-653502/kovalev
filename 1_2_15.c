#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    long int k1= 1, k2 = 1, k3;
    int FibNumber = 3;
    _Bool t = true;
    while(t){
        k3 = k1 + k2;
        if(k3 <=  2147483647){
            k1 = k2; k2=k3;
            FibNumber++;
        }else{
            printf("Число %ld является %d-ым числом последовательности Фибоначчи и последним которое входит в диапозон int.\n", k2, FibNumber);
            t = false;
        }
        }
    t = true;
    long int sum = 2;
    FibNumber = 3;
    k1 = 1; k2 = 1; k3 = 0;
    while(t){
        k3 = k1 + k2;
        if(sum <=  2147483647){
            sum += k3;
            k1 = k2; k2=k3;
            FibNumber++;
        }else{
            printf("Число %ld является суммой %d-и чисел Фибоначчи и последним которое входит в диапозон int.\n", k2, FibNumber);
            t = false;
        }
    }
    return 0;
}
