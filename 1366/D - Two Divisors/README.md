<h2><a href="https://codeforces.com/contest/1366/problem/D" target="_blank" rel="noopener noreferrer">1366D — Two Divisors</a></h2>

| | |
|---|---|
| **Difficulty** | 2000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1366D](https://codeforces.com/contest/1366/problem/D) |

## Topics
`constructive algorithms` `math` `number theory`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">D. Two Divisors</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$.</p><p>For each $$$a_i$$$ find its <span class="tex-font-style-bf">two divisors</span> $$$d_1  \gt  1$$$ and $$$d_2  \gt  1$$$ such that $$$\gcd(d_1 + d_2, a_i) = 1$$$ (where $$$\gcd(a, b)$$$ is the greatest common divisor of $$$a$$$ and $$$b$$$) or say that there is no such pair.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains single integer $$$n$$$ ($$$1 \le n \le 5 \cdot 10^5$$$) — the size of the array $$$a$$$.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$2 \le a_i \le 10^7$$$) — the array $$$a$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>To speed up the output, print two lines with $$$n$$$ integers in each line.</p><p>The $$$i$$$-th integers in the first and second lines should be corresponding divisors $$$d_1  \gt  1$$$ and $$$d_2  \gt  1$$$ such that $$$\gcd(d_1 + d_2, a_i) = 1$$$ or $$$-1$$$ and $$$-1$$$ if there is no such pair. If there are multiple answers, print any of them.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id007636930759843314" id="id004890274878219507" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007636930759843314">10
2 3 4 5 6 7 8 9 10 24
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0007195043282982039" id="id007998883824255422" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0007195043282982039">-1 -1 -1 -1 3 -1 -1 -1 2 2 
-1 -1 -1 -1 2 -1 -1 -1 5 3 
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>Let's look at $$$a_7 = 8$$$. It has $$$3$$$ divisors greater than $$$1$$$: $$$2$$$, $$$4$$$, $$$8$$$. As you can see, the sum of any pair of divisors is divisible by $$$2$$$ as well as $$$a_7$$$.</p><p>There are other valid pairs of $$$d_1$$$ and $$$d_2$$$ for $$$a_{10}=24$$$, like $$$(3, 4)$$$ or $$$(8, 3)$$$. You can print any of them.</p></div>