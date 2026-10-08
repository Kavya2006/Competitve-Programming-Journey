<h2><a href="https://codeforces.com/contest/1372/problem/B" target="_blank" rel="noopener noreferrer">1372B — Omkar and Last Class of Math</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1372B](https://codeforces.com/contest/1372/problem/B) |

## Topics
`greedy` `math` `number theory`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Omkar and Last Class of Math</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>In Omkar's last class of math, he learned about the least common multiple, or $$$LCM$$$. $$$LCM(a, b)$$$ is the smallest positive integer $$$x$$$ which is divisible by both $$$a$$$ and $$$b$$$.</p><p>Omkar, having a laudably curious mind, immediately thought of a problem involving the $$$LCM$$$ operation: given an integer $$$n$$$, find positive integers $$$a$$$ and $$$b$$$ such that $$$a + b = n$$$ and $$$LCM(a, b)$$$ is the minimum value possible.</p><p>Can you help Omkar solve his ludicrously challenging math problem?</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \leq t \leq 10$$$). Description of the test cases follows.</p><p>Each test case consists of a single integer $$$n$$$ ($$$2 \leq n \leq 10^{9}$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output two positive integers $$$a$$$ and $$$b$$$, such that $$$a + b = n$$$ and $$$LCM(a, b)$$$ is the minimum possible.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id003693172723786128" id="id0011149133035634606" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id003693172723786128">3
4
6
9
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id004430007136662375" id="id003751186854795411" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004430007136662375">2 2
3 3
3 6
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>For the first test case, the numbers we can choose are $$$1, 3$$$ or $$$2, 2$$$. $$$LCM(1, 3) = 3$$$ and $$$LCM(2, 2) = 2$$$, so we output $$$2 \ 2$$$.</p><p>For the second test case, the numbers we can choose are $$$1, 5$$$, $$$2, 4$$$, or $$$3, 3$$$. $$$LCM(1, 5) = 5$$$, $$$LCM(2, 4) = 4$$$, and $$$LCM(3, 3) = 3$$$, so we output $$$3 \ 3$$$.</p><p>For the third test case, $$$LCM(3, 6) = 6$$$. It can be shown that there are no other pairs of numbers which sum to $$$9$$$ that have a lower $$$LCM$$$.</p></div>