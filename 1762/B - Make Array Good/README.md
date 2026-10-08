<h2><a href="https://codeforces.com/contest/1762/problem/B" target="_blank" rel="noopener noreferrer">1762B — Make Array Good</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1762B](https://codeforces.com/contest/1762/problem/B) |

## Topics
`constructive algorithms` `implementation` `number theory` `sortings`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Make Array Good</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>An array $$$b$$$ of $$$m$$$ positive integers is <span class="tex-font-style-it">good</span> if for all pairs $$$i$$$ and $$$j$$$ ($$$1 \leq i,j \leq m$$$), $$$\max(b_i,b_j)$$$ is divisible by $$$\min(b_i,b_j)$$$.</p><p>You are given an array $$$a$$$ of $$$n$$$ positive integers. You can perform the following operation:</p><ul> <li> Select an index $$$i$$$ ($$$1 \leq i \leq n$$$) and an integer $$$x$$$ ($$$0 \leq x \leq a_i$$$) and add $$$x$$$ to $$$a_i$$$, in other words, $$$a_i := a_i+x$$$. </li><li> After this operation, $$$a_i \leq 10^{18}$$$ should be satisfied. </li></ul><p>You have to construct a sequence of <span class="tex-font-style-bf">at most</span> $$$n$$$ operations that will make $$$a$$$ good. It can be proven that under the constraints of the problem, such a sequence of operations <span class="tex-font-style-bf">always</span> exists.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>Each test contains multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \leq n \leq 10^5$$$) — the length of the array $$$a$$$.</p><p>The second line of each test case contains $$$n$$$ space-separated integers $$$a_1,a_2,\ldots,a_n$$$ ($$$1 \leq a_i \leq 10^9$$$) — representing the array $$$a$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test, output a single integer $$$p$$$ ($$$0 \leq p \leq n$$$) — denoting the number of operations in your solution. </p><p>In each of the following $$$p$$$ lines, output two space-separated integers — $$$i$$$ and $$$x$$$.</p><p>You do not need to minimize the number of operations. It can be proven that a solution always exists.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id00748458968688579" id="id0040376032870405487" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00748458968688579"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">4</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">4</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">2 3 5 5</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">2</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">4 8</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">3 4 343 5 6</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">3</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">31 5 17</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009541726049350243" id="id0042672273691754437" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009541726049350243">4
1 2
1 1
2 2
3 0
0
5
1 3
1 4
2 1
5 4
3 7
3
1 29
2 5
3 3
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, array $$$a$$$ becomes $$$[5,5,5,5]$$$ after the operations. It is easy to see that $$$[5,5,5,5]$$$ is <span class="tex-font-style-it">good</span>.</p><p>In the second test case, array $$$a$$$ is already <span class="tex-font-style-it">good</span>.</p><p>In the third test case, after performing the operations, array $$$a$$$ becomes $$$[10,5,350,5,10]$$$, which is <span class="tex-font-style-it">good</span>.</p><p>In the fourth test case, after performing the operations, array $$$a$$$ becomes $$$[60,10,20]$$$, which is <span class="tex-font-style-it">good</span>.</p></div>