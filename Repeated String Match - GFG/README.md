# Repeated String Match
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given two strings <strong>A</strong> and <strong>B</strong>, find the minimum number of times <strong>A</strong> has to be repeated such that <strong>B</strong> becomes a substring of the repeated <strong>A</strong>. If <strong>B</strong> cannot be a substring of <strong>A</strong> no matter how many times it is repeated, return -1.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>A = "abcd", B = "cdabcdab"</span>
<span style="font-size:18px"><strong>Output:</strong> 3</span>
<span style="font-size:18px"><strong>Explanation:</strong> After repeating A three times, 
we get "abcdabcdabcd".</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>A = "aa", B = "a"</span>
<span style="font-size:18px"><strong>Output:</strong> 1</span>
<span style="font-size:18px"><strong>Explanation:</strong> B is already a substring of A.</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task: </strong>&nbsp;<br>
You don't need to read input or print anything. Complete the function</span> <span style="font-size:18px"><strong>repeatedStringMatch()</strong> which takes strings <strong>A</strong> and <strong>B</strong> as input parameters and returns the minimum number of operations to complete the task. If it is not possible then return -1.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(|A| *&nbsp;|B|)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ |A|, |B| ≤ 4 * 10<sup>3</sup></span></p>
 <p></p>
            </div>