<h2>Set Kth Bit</h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr>
<p>
  You are working on a computer program that deals with binary representations of numbers. Your task is to create a Python function set_kth_bit(N, K) that takes an integer N and a non-negative integer K as input. The function should set the Kth bit (counting from the right, starting with 0 as the least significant bit) in the binary representation of N to 1 if it's not already set, and return the modified integer.

Here are the function parameters:

N (integer): The input number whose binary representation needs modification.

K (non-negative integer): The position of the bit to set (0-indexed).

Your function should return the modified integer N with the Kth bit set.
</p>
<strong>Problem Statement:</strong>
<p></p>
<strong>Input format:</strong>
<p>A single line contains two numbers N and K.</p>
<strong>Output format:</strong>
<p>A single line contains two numbers N and K.</p>
<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
16 2
<strong>Output:</strong>

20
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1<= N n<= 10<sup>6</sup></code></li>
	<li><code>1<= k n<= 32</code></li>
</ul>

<p>&nbsp;</p>
