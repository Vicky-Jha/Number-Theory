/* This program is to check if the given array is sorted or not, it further checks
if it is ascending or the decending order, in which it is sorted

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, s[1000], ascend = 1, decend = 1, i;
  //taking array size as input
  scanf("%d", &n);

  //taking input of  array elements
  for (i = 0; i < n; i++)
    scanf("%d", &s[i]);

  //initilizing array iterator
  i = 0;

  while ((ascend == 1 || decend == 1) && i < n - 1)
  {
    if (s[i] < s[i + 1])
      decend = 0;
    else if (s[i] > s[i + 1])
      ascend = 0;
    i++;
  }

  if (ascend == 1)
    printf("The array is sorted in ascending order.\n");
  else if (decend == 1)
    printf("The array is sorted in descending order.\n");
  else
    printf("The array is not sorted.\n");
  return 0;
}