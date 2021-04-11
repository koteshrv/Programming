/*
You are given an n x n 2D matrix representing an image.

Rotate the image by 90 degrees (clockwise).

You need to do this in place.

Note that if you end up using an additional array, you will only receive partial score.

Example:

If the array is

[
    [1, 2],
    [3, 4]
]
Then the rotated array becomes:

[
    [3, 1],
    [4, 2]
]

void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size();
    for(int i = 0; i < n / 2; i++) {
        for(int j = i; j < n - i - 1; j++) {
            int t = A[i][j];
            A[i][j] = A[n - 1 -j][i];
            A[n - 1 -j][i] = A[n - 1 -i][n - 1 -j];
            A[n - 1 -i][n - 1 -j] = A[j][n - 1 -i];
            A[j][n - 1 -i] = t;
        }
    }
}

void Solution::rotate(vector<vector<int> > &A) {
    int n = A.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            swap(A[i][j], A[j][i]);
        }
    }
    
    for(int i = 0; i < n; i++) {
        reverse(A[i].begin(), A[i].end());
    }
}

*/