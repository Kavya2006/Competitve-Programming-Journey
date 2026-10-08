<h2><a href="https://codeforces.com/contest/1270/problem/C" target="_blank" rel="noopener noreferrer">1270C — Make Good</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1270C](https://codeforces.com/contest/1270/problem/C) |

## Topics
`bitmasks` `constructive algorithms` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C. Make Good</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Let's call an array $$$a_1, a_2, \dots, a_m$$$ of nonnegative integer numbers <span class="tex-font-style-bf">good</span> if $$$a_1 + a_2 + \dots + a_m = 2\cdot(a_1 \oplus a_2 \oplus \dots \oplus a_m)$$$, where $$$\oplus$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR operation</a>.</p><p>For example, array $$$[1, 2, 3, 6]$$$ is good, as $$$1 + 2 + 3 + 6 = 12 = 2\cdot 6 = 2\cdot (1\oplus 2 \oplus 3 \oplus 6)$$$. At the same time, array $$$[1, 2, 1, 3]$$$ isn't good, as $$$1 + 2 + 1 + 3 = 7 \neq 2\cdot 1 = 2\cdot(1\oplus 2 \oplus 1 \oplus 3)$$$.</p><p>You are given an array of length $$$n$$$: $$$a_1, a_2, \dots, a_n$$$. Append at most $$$3$$$ elements to it to make it good. Appended elements don't have to be different. It can be shown that the solution always exists under the given constraints. If there are different solutions, you are allowed to output any of them. Note that <span class="tex-font-style-bf">you don't have to minimize the number of added elements!</span>. So, if an array is good already you are allowed to not append elements.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10\,000$$$). The description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ $$$(1\le n \le 10^5)$$$ — the size of the array.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$0\le a_i \le 10^9$$$) — the elements of the array.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output two lines.</p><p>In the first line, output a single integer $$$s$$$ ($$$0\le s\le 3$$$) — the number of elements you want to append.</p><p>In the second line, output $$$s$$$ integers $$$b_1, \dots, b_s$$$ ($$$0\le b_i \le 10^{18}$$$) — the elements you want to append to the array.</p><p>If there are different solutions, you are allowed to output any of them.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id00143726334000297" id="id007381551119710252" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00143726334000297">3
4
1 2 3 6
1
8
2
1 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007187186243666416" id="id0010317211076650912" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007187186243666416">0

2
4 4
3
2 6 2
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case of the example, the sum of all numbers is $$$12$$$, and their $$$\oplus$$$ is $$$6$$$, so the condition is already satisfied.</p><p>In the second test case of the example, after adding $$$4, 4$$$, the array becomes $$$[8, 4, 4]$$$. The sum of numbers in it is $$$16$$$, $$$\oplus$$$ of numbers in it is $$$8$$$.</p></div>