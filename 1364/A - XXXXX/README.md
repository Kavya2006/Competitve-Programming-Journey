<h2><a href="https://codeforces.com/contest/1364/problem/A" target="_blank" rel="noopener noreferrer">1364A — XXXXX</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1364A](https://codeforces.com/contest/1364/problem/A) |

## Topics
`brute force` `data structures` `number theory` `two pointers`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. XXXXX</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Ehab loves number theory, but for some reason he hates the number $$$x$$$. Given an array $$$a$$$, find the length of its longest subarray such that the sum of its elements <span class="tex-font-style-bf">isn't</span> divisible by $$$x$$$, or determine that such subarray doesn't exist.</p><p>An array $$$a$$$ is a subarray of an array $$$b$$$ if $$$a$$$ can be obtained from $$$b$$$ by deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains an integer $$$t$$$ $$$(1 \le t \le 5)$$$ — the number of test cases you need to solve. The description of the test cases follows.</p><p>The first line of each test case contains 2 integers $$$n$$$ and $$$x$$$ ($$$1 \le n \le 10^5$$$, $$$1 \le x \le 10^4$$$) — the number of elements in the array $$$a$$$ and the number that Ehab hates.</p><p>The second line contains $$$n$$$ space-separated integers $$$a_1$$$, $$$a_2$$$, $$$\ldots$$$, $$$a_{n}$$$ ($$$0 \le a_i \le 10^4$$$) — the elements of the array $$$a$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each testcase, print the length of the longest subarray whose sum isn't divisible by $$$x$$$. If there's no such subarray, print $$$-1$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id009395322750000702" id="id008606819189590561" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009395322750000702">3
3 3
1 2 3
3 4
1 2 3
2 2
0 6
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id008999565144941489" id="id0034067077239394916" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id008999565144941489">2
3
-1
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, the subarray $$$[2,3]$$$ has sum of elements $$$5$$$, which isn't divisible by $$$3$$$.</p><p>In the second test case, the sum of elements of the whole array is $$$6$$$, which isn't divisible by $$$4$$$.</p><p>In the third test case, all subarrays have an even sum, so the answer is $$$-1$$$.</p></div>