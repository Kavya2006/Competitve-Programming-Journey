<h2><a href="https://codeforces.com/contest/1438/problem/B" target="_blank" rel="noopener noreferrer">1438B — Valerii Against Everyone</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1438B](https://codeforces.com/contest/1438/problem/B) |

## Topics
`constructive algorithms` `data structures` `greedy` `sortings`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Valerii Against Everyone</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You're given an array $$$b$$$ of length $$$n$$$. Let's define another array $$$a$$$, also of length $$$n$$$, for which $$$a_i = 2^{b_i}$$$ ($$$1 \leq i \leq n$$$). </p><p>Valerii says that every two non-intersecting subarrays of $$$a$$$ have different sums of elements. You want to determine if he is wrong. More formally, you need to determine if there exist four integers $$$l_1,r_1,l_2,r_2$$$ that satisfy the following conditions: </p><ul><span> <li> $$$1 \leq l_1 \leq r_1 \lt l_2 \leq r_2 \leq n$$$; </li><li> $$$a_{l_1}+a_{l_1+1}+\ldots+a_{r_1-1}+a_{r_1} = a_{l_2}+a_{l_2+1}+\ldots+a_{r_2-1}+a_{r_2}$$$. </li></span></ul><p>If such four integers exist, you will prove Valerii wrong. Do they exist?</p><p>An array $$$c$$$ is a subarray of an array $$$d$$$ if $$$c$$$ can be obtained from $$$d$$$ by deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 100$$$). Description of the test cases follows.</p><p>The first line of every test case contains a single integer $$$n$$$ ($$$2 \le n \le 1000$$$).</p><p>The second line of every test case contains $$$n$$$ integers $$$b_1,b_2,\ldots,b_n$$$ ($$$0 \le b_i \le 10^9$$$). </p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For every test case, if there exist two non-intersecting subarrays in $$$a$$$ that have the same sum, output <span class="tex-font-style-tt">YES</span> on a separate line. Otherwise, output <span class="tex-font-style-tt">NO</span> on a separate line. </p><p>Also, note that each letter can be in any case. </p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0075954038617133" id="id000394804197847487" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0075954038617133">2
6
4 3 0 1 2 0
2
2 5
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id005940518784137847" id="id004760729371897633" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005940518784137847">YES
NO
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first case, $$$a = [16,8,1,2,4,1]$$$. Choosing $$$l_1 = 1$$$, $$$r_1 = 1$$$, $$$l_2 = 2$$$ and $$$r_2 = 6$$$ works because $$$16 = (8+1+2+4+1)$$$.</p><p>In the second case, you can verify that there is no way to select to such subarrays.</p></div>