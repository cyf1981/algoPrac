// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    unsigned long long int sum = 0;
    unsigned long long int N = A.size();
    
    for (int i = 0; i < N; i++){
        sum = sum + A[i];
    }
    
    return (((N+1)*(N+2))/2) - sum;
}

/* XOR solution (probably much more optimal)
int solution(vector<int> &A) {
    int N = A.size();
    int xor_sum = 0;
    
    for (int i = 0; i < N; i++){
        xor_sum = xor_sum ^ A[i] ^ (i + 1);
    }
    
    return xor_sum^(N + 1);
}*/