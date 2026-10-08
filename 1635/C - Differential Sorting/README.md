<h2><a href="https://codeforces.com/contest/1635/problem/C" target="_blank" rel="noopener noreferrer">1635C — Differential Sorting</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1635C](https://codeforces.com/contest/1635/problem/C) |

## Topics
`constructive algorithms` `greedy`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C. Differential Sorting</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given an array $$$a$$$ of $$$n$$$ elements. </p><p>Your can perform the following operation no more than $$$n$$$ times: Select three indices $$$x,y,z$$$ $$$(1 \leq x  \lt  y  \lt  z \leq n)$$$ and replace $$$a_x$$$ with $$$a_y - a_z$$$. After the operation, $$$|a_x|$$$ need to be less than $$$10^{18}$$$.</p><p>Your goal is to make the resulting array <span class="tex-font-style-bf">non-decreasing</span>. If there are multiple solutions, you can output any. If it is impossible to achieve, you should report it as well.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>Each test contains multiple test cases. The first line will contain a single integer $$$t$$$ $$$(1 \leq t \leq 10000)$$$ — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The first line of each test case contains a single integer $$$n$$$ $$$(3 \leq n \leq 2 \cdot 10^5)$$$ — the size of the array $$$a$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots ,a_n$$$ $$$(-10^9 \leq a_i \leq 10^9)$$$, the elements of $$$a$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print $$$-1$$$ in a single line if there is no solution. Otherwise in the first line you should print a single integer $$$m$$$ $$$(0 \leq m \leq n)$$$ — number of operations you performed.</p><p>Then the $$$i$$$-th of the following $$$m$$$ lines should contain three integers $$$x,y,z$$$ $$$(1 \leq x  \lt  y  \lt  z \leq n)$$$— description of the $$$i$$$-th operation.</p><p>If there are multiple solutions, you can output any. Note that you don't have to minimize the number of operations in this task.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0039088317618992474" id="id0015373354074028556" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0039088317618992474">3
5
5 -4 2 -1 2
3
4 3 2
3
-3 -2 -1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id005008207009803602" id="id009365011336141297" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005008207009803602">2
1 2 3
3 4 5
-1
0
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first example, the array becomes </p><p>$$$[-6,-4,2,-1,2]$$$ after the first operation,</p><p>$$$[-6,-4,-3,-1,2]$$$ after the second operation.</p><p>In the second example, it is impossible to make the array sorted after any sequence of operations.</p><p>In the third example, the array is already sorted, so we don't need to perform any operations.</p></div>