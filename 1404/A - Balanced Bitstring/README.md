<h2><a href="https://codeforces.com/contest/1404/problem/A" target="_blank" rel="noopener noreferrer">1404A — Balanced Bitstring</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1404A](https://codeforces.com/contest/1404/problem/A) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Balanced Bitstring</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>A bitstring is a string consisting only of the characters <span class="tex-font-style-tt">0</span> and <span class="tex-font-style-tt">1</span>. A bitstring is called $$$k$$$-<span class="tex-font-style-bf">balanced</span> if every substring of size $$$k$$$ of this bitstring has an equal amount of <span class="tex-font-style-tt">0</span> and <span class="tex-font-style-tt">1</span> characters ($$$\frac{k}{2}$$$ of each).</p><p>You are given an integer $$$k$$$ and a string $$$s$$$ which is composed only of characters <span class="tex-font-style-tt">0</span>, <span class="tex-font-style-tt">1</span>, and <span class="tex-font-style-tt">?</span>. You need to determine whether you can make a $$$k$$$-balanced bitstring by replacing every <span class="tex-font-style-tt">?</span> characters in $$$s$$$ with either <span class="tex-font-style-tt">0</span> or <span class="tex-font-style-tt">1</span>.</p><p>A string $$$a$$$ is a substring of a string $$$b$$$ if $$$a$$$ can be obtained from $$$b$$$ by deletion of several (possibly, zero or all) characters from the beginning and several (possibly, zero or all) characters from the end.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). Description of the test cases follows.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$2 \le k \le n \le 3 \cdot 10^5$$$, $$$k$$$ is even)  — the length of the string and the parameter for a balanced bitstring.</p><p>The next line contains the string $$$s$$$ ($$$|s| = n$$$). It is given that $$$s$$$ consists of only <span class="tex-font-style-tt">0</span>, <span class="tex-font-style-tt">1</span>, and <span class="tex-font-style-tt">?</span>.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$3 \cdot 10^5$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print <span class="tex-font-style-tt">YES</span> if we can replace every <span class="tex-font-style-tt">?</span> in $$$s$$$ with <span class="tex-font-style-tt">0</span> or <span class="tex-font-style-tt">1</span> such that the resulting bitstring is $$$k$$$-balanced, or <span class="tex-font-style-tt">NO</span> if it is not possible.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0028932397242465346" id="id003494280937420685" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0028932397242465346">9
6 4
100110
3 2
1?1
3 2
1?0
4 4
????
7 4
1?0??1?
10 10
11??11??11
4 2
1??1
4 4
?0?0
6 2
????00
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0022901421726047233" id="id002022104867446567" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0022901421726047233">YES
YES
NO
YES
YES
NO
NO
YES
NO
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>For the first test case, the string is already a $$$4$$$-balanced bitstring.</p><p>For the second test case, the string can be transformed into <span class="tex-font-style-tt">101</span>.</p><p>For the fourth test case, the string can be transformed into <span class="tex-font-style-tt">0110</span>.</p><p>For the fifth test case, the string can be transformed into <span class="tex-font-style-tt">1100110</span>.</p></div>