<h2><a href="https://codeforces.com/contest/1720/problem/B" target="_blank" rel="noopener noreferrer">1720B — Interesting Sum</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1720B](https://codeforces.com/contest/1720/problem/B) |

## Topics
`brute force` `data structures` `greedy` `math` `sortings`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Interesting Sum</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given an array $$$a$$$ that contains $$$n$$$ integers. You can choose any proper subsegment $$$a_l, a_{l + 1}, \ldots, a_r$$$ of this array, meaning you can choose any two integers $$$1 \le l \le r \le n$$$, where $$$r - l + 1  \lt  n$$$. We define the <span class="tex-font-style-it">beauty</span> of a given subsegment as the value of the following expression:</p><p>$$$$$$\max(a_{1}, a_{2}, \ldots, a_{l-1}, a_{r+1}, a_{r+2}, \ldots, a_{n}) - \min(a_{1}, a_{2}, \ldots, a_{l-1}, a_{r+1}, a_{r+2}, \ldots, a_{n}) + \max(a_{l}, \ldots, a_{r}) - \min(a_{l}, \ldots, a_{r}).$$$$$$</p><p>Please find the maximum beauty among all proper subsegments.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \leq t \leq 1000$$$) — the number of test cases. Then follow the descriptions of each test case.</p><p>The first line of each test case contains a single integer $$$n$$$ $$$(4 \leq n \leq 10^5)$$$ — the length of the array.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \leq a_{i} \leq 10^9$$$) — the elements of the given array.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each testcase print a single integer — the maximum beauty of a proper subsegment.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id003763946575416153" id="id009915725748866566" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id003763946575416153">4
8
1 2 2 3 1 5 6 1
5
1 2 3 100 200
4
3 3 3 3
6
7 8 3 1 1 8
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id003465574635202717" id="id009863327751107324" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id003465574635202717">9
297
0
14
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, the optimal segment is $$$l = 7$$$, $$$r = 8$$$. The beauty of this segment equals to $$$(6 - 1) + (5 - 1) = 9$$$.</p><p>In the second test case, the optimal segment is $$$l = 2$$$, $$$r = 4$$$. The beauty of this segment equals $$$(100 - 2) + (200 - 1) = 297$$$.</p></div>