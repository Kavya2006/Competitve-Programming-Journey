<h2><a href="https://codeforces.com/contest/1809/problem/C" target="_blank" rel="noopener noreferrer">1809C — Sum on Subarrays</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1809C](https://codeforces.com/contest/1809/problem/C) |

## Topics
`constructive algorithms` `greedy` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C. Sum on Subarrays</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>512 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>For an array $$$a = [a_1, a_2, \dots, a_n]$$$, let's denote its <span class="tex-font-style-it">subarray</span> $$$a[l, r]$$$ as the array $$$[a_l, a_{l+1}, \dots, a_r]$$$.</p><p>For example, the array $$$a = [1, -3, 1]$$$ has $$$6$$$ non-empty subarrays:</p><ul> <li> $$$a[1,1] = [1]$$$; </li><li> $$$a[1,2] = [1,-3]$$$; </li><li> $$$a[1,3] = [1,-3,1]$$$; </li><li> $$$a[2,2] = [-3]$$$; </li><li> $$$a[2,3] = [-3,1]$$$; </li><li> $$$a[3,3] = [1]$$$. </li></ul><p>You are given two integers $$$n$$$ and $$$k$$$. Construct an array $$$a$$$ consisting of $$$n$$$ integers such that:</p><ul> <li> all elements of $$$a$$$ are from $$$-1000$$$ to $$$1000$$$; </li><li> $$$a$$$ has exactly $$$k$$$ subarrays with positive sums; </li><li> the rest $$$\dfrac{(n+1) \cdot n}{2}-k$$$ subarrays of $$$a$$$ have negative sums. </li></ul></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 5000$$$) — the number of test cases.</p><p>Each test case consists of one line containing two integers $$$n$$$ and $$$k$$$ ($$$2 \le n \le 30$$$; $$$0 \le k \le \dfrac{(n+1) \cdot n}{2}$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print $$$n$$$ integers — the elements of the array meeting the constraints. It can be shown that the answer always exists. If there are multiple answers, print any of them.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id003855747421752327" id="id009329126903994694" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id003855747421752327"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">4</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">3 2</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">2 0</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">2 2</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">4 6</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009146672859056166" id="id008395879359522842" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009146672859056166">1 -3 1
-13 -42
-13 42
-3 -4 10 -2
</pre></div></div></div>