/*
Problem Description

Given a numeric string A representing a large number you need to find the next smallest palindrome greater than this number.



Problem Constraints
1 <= |A| <= 100

A doesn't start with zeroes and always contain digits from 0-9.



Input Format
First and only argument is an string A.



Output Format
Return a numeric string denoting the next smallest palindrome greater than A.



Example Input
Input 1:

 A = "23545"
Input 2:

 A = "999"


Example Output
Output 1:

 "23632"
Output 2:

 "1001"

 string Solution::solve(string A) {
    string str1 = A;
    int l = A.size();
    string str2(l, '9');
    if(A == str2) {
        string str3(l - 1, '0');
        string str2 = "1" + str3 + "1";
        return str2;
    }
    for(int i = l - 1; i >= (l - 1) / 2; i--) str1[i] = str1[l - 1 - i];
    int mid = (l - 1) / 2;
    while(str1 < A) {
        if(str1[mid] != '9') {
            str1[mid]++;
            str1[l - 1 - mid] = str1[mid];
        }
        else {
            str1[mid] = '0';
            str1[l - 1 - mid] = str1[mid];
            mid--;
        }
    }
    return str1;
}


*/