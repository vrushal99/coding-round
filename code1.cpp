#include <bits/stdc++.h>
using namespace std;
 
int countDistinct(string s)
{
    unordered_map<char, int> m;
 
    for (int i = 0; i < s.length(); i++) {
       
        m[s[i]]++;
    }
 
    return m.size();
}
 
bool compare(string& s1, string& s2)
{
    if (countDistinct(s1) == countDistinct(s2)) {
       
     if (s1.size() == s2.size()) {
            return false;
        }
    return s1.size() > s2.size();
    }
    return countDistinct(s1) < countDistinct(s2);
}
 

void printArraystring(string str[], int n)
{
    for (int i = 0; i < n; i++)
        cout << str[i] << " ";
}
 

int main()
{
    string arr[] = { "I","like", "to","dance" };
   
    int n = sizeof(arr)
            / sizeof(arr[0]);
    sort(arr, arr + n, compare);
    printArraystring(arr, n);
 
    return 0;
}