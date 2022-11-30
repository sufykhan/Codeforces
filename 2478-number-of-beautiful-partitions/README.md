<h2><a href="https://leetcode.com/problems/number-of-beautiful-partitions/">2478. Number of Beautiful Partitions</a></h2><h3>Hard</h3><hr><div><p>You are given a string <code>s</code> that consists of the digits <code>'1'</code> to <code>'9'</code> and two integers <code>k</code> and <code>minLength</code>.</p>

<p>A partition of <code>s</code> is called <strong>beautiful</strong> if:</p>

<ul>
	<li><code>s</code> is partitioned into <code>k</code> non-intersecting substrings.</li>
	<li>Each substring has a length of <strong>at least</strong> <code>minLength</code>.</li>
	<li>Each substring starts with a <strong>prime</strong> digit and ends with a <strong>non-prime</strong> digit. Prime digits are <code>'2'</code>, <code>'3'</code>, <code>'5'</code>, and <code>'7'</code>, and the rest of the digits are non-prime.</li>
</ul>

<p>Return<em> the number of <strong>beautiful</strong> partitions of </em><code>s</code>. Since the answer may be very large, return it <strong>modulo</strong> <code>10<sup>9</sup> + 7</code>.</p>

<p>A <strong>substring</strong> is a contiguous sequence of characters within a string.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> s = "23542185131", k = 3, minLength = 2
<strong>Output:</strong> 3
<strong>Explanation:</strong> There exists three ways to create a beautiful partition:
"2354 | 218 | 5131"
"2354 | 21851 | 31"
"2354218 | 51 | 31"
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> s = "23542185131", k = 3, minLength = 3
<strong>Output:</strong> 1
<strong>Explanation:</strong> There exists one way to create a beautiful partition: "2354 | 218 | 5131".
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> s = "3312958", k = 3, minLength = 1
<strong>Output:</strong> 1
<strong>Explanation:</strong> There exists one way to create a beautiful partition: "331 | 29 | 58".
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= k, minLength &lt;= s.length &lt;= 1000</code></li>
	<li><code>s</code> consists of the digits <code>'1'</code> to <code>'9'</code>.</li>
</ul>
</div>