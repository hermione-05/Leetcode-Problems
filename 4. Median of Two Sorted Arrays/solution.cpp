#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<double> res;
    int n1 = nums1.size();
    int n2 = nums2.size();
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (nums1[i] < nums2[j])
        {
            res.push_back(nums1[i]);
            i++;
        }
        else
        {
            res.push_back(nums2[j]);
            j++;
        }
    }
    while (i < n1)
        res.push_back(nums1[i++]);
    while (j < n2)
        res.push_back(nums2[j++]);
    if (res.size() % 2)
    {
        return res[(n1 + n2) / 2];
    }
    else
    {
        return (res[(n1 + n2) / 2] + res[(n1 + n2) / 2 - 1]) / 2;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a1(n);
    for (int i = 0; i < n; i++)
        cin >> a1[i];
    int m;
    cin >> m;
    vector<int> a2(m);
    for (int i = 0; i < m; i++)
        cin >> a2[i];
    cout << findMedianSortedArrays(a1, a2);
    return 0;
}