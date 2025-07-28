#include ".assignment/test.h"

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result &result)
{
    int arr[3] = {a, b, c};
    if(a>b){
        if(a>c) {
            arr[0] = a;
            if(b>c) {
                arr[1] = b;
                arr[2] = c;
            }
            else {
                arr[1] = c;
                arr[2] = b;
            }
        }
        else {
            arr[0] = c;
            arr[1] = a;
            arr[2] = b;
        }
    }
    else {
        if(b>c) {
            arr[0] = b;
            if(a>c) {
                arr[1] = a;
                arr[2] = c;
            }
            else {
                arr[1] = c;
                arr[2] = a;
            }
        }
        else {
            arr[0] = c;
            arr[1] = b;
            arr[2] = a;
        }
    }
    result.max = arr[0];
    result.mid = arr[1];
    result.min = arr[2];
    // 在这里完成你的代码
}
