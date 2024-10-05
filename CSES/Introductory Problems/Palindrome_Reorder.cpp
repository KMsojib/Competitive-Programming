#include <bits/stdc++.h>
using namespace std;
 
string getPalindrome(string str)
{
 
	// Store counts of characters
	unordered_map<char, int> hmap;
	for (int i = 0; i < str.length(); i++)
		hmap[str[i]]++;
 
	/* find the number of odd elements.
	Takes O(n) */
	int oddCount = 0;
	char oddChar;
	for (auto x : hmap) {
		if (x.second % 2 != 0) {
			oddCount++;
			oddChar = x.first;
		}
	}
 
	/* odd_cnt = 1 only if the length of
	str is odd */
	if (oddCount > 1|| oddCount == 1 && str.length() % 2 == 0)
		return "NO SOLUTION";
 
	/* Generate first half of palindrome */
	string firstHalf = "", secondHalf = "";
	for (auto x : hmap) {
 
		// Build a string of floor(count/2)
		// occurrences of current character
		string s(x.second / 2, x.first);
 
		// Attach the built string to end of
		// and begin of second half
		firstHalf = firstHalf + s;
		secondHalf = s + secondHalf;
	}
 
	// Insert odd character if there
	// is any
	return (oddCount == 1)
			? (firstHalf + oddChar + secondHalf)
			: (firstHalf + secondHalf);
}
 
int main()
{
	string s;   cin>>s;
	cout << getPalindrome(s);
	return 0;
}