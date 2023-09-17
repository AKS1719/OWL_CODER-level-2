<h2>Can be Empty</h2> <img src='https://img.shields.io/badge/Difficulty-Medium-brightgreen' alt='Difficulty: Medium' /><hr>
<p>
  Casimir has a string s which consists of capital Latin letters 'A', 'B', and 'C' only. Each turn he can choose to do one of the two following actions:

he can either erase exactly one letter 'A' and exactly one letter 'B' from arbitrary places of the string (these letters don't have to be adjacent);

or he can erase exactly one letter 'B' and exactly one letter 'C' from arbitrary places in the string (these letters don't have to be adjacent).

Therefore, each turn the length of the string is decreased exactly by 2. All turns are independent so for each turn, Casimir can choose any of two possible actions.

For example, with s = "ABCABC" he can obtain a string s = "ACBC" in one turn (by erasing the first occurrence of 'B' and the second occurrence of 'A'). There are also many other options for a turn aside from this particular example.

For a given string s determine whether there is a sequence of actions leading to an empty string. In other words, Casimir's goal is to erase all letters from the string. Is there a way to do this? 
</p>
<strong>Problem Statement:</strong>
<p></p>
<strong>Input format:</strong>
<p>The first line contains an integer t (1≤t≤1000) — the number of test cases.

Each test case is described by one string s, for which you need to determine if it can be fully erased by some sequence of turns. The string s consists of capital letters 'A', 'B', 'C' and has a length from 1 to 50 letters, inclusive. </p>
<strong>Output format:</strong>
<p>Print t lines, each line containing the answer to the corresponding test case. The answer to a test case should be YES if there is a way to fully erase the corresponding string and NO otherwise.</p>
<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> 6

ABACAB

ABBA

AC

ABC

CABCBB

BCBCBCBCBCBCBCBC
<strong>Output:</strong>
NO

YES

NO

NO

YES

YES
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1<= T <=1000</code></li>
	<li><code>1<= |S| <=1000</code></li>
	
</ul>

<p>&nbsp;</p>
