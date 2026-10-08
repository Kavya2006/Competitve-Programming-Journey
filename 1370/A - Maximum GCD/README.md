<h2><a href="https://codeforces.com/contest/1370/problem/A" target="_blank" rel="noopener noreferrer">1370A — Maximum GCD</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1370A](https://codeforces.com/contest/1370/problem/A) |

## Topics
`greedy` `implementation` `math` `number theory`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Maximum GCD</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Let's consider all integers in the range from $$$1$$$ to $$$n$$$ (inclusive).</p><p>Among all pairs of <span class="tex-font-style-bf">distinct</span> integers in this range, find the maximum possible greatest common divisor of integers in pair. Formally, find the maximum value of $$$\mathrm{gcd}(a, b)$$$, where $$$1 \leq a  \lt  b \leq n$$$.</p><p>The greatest common divisor, $$$\mathrm{gcd}(a, b)$$$, of two positive integers $$$a$$$ and $$$b$$$ is the biggest integer that is a divisor of both $$$a$$$ and $$$b$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 100$$$)  — the number of test cases. The description of the test cases follows.</p><p>The only line of each test case contains a single integer $$$n$$$ ($$$2 \leq n \leq 10^6$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output the maximum value of $$$\mathrm{gcd}(a, b)$$$ among all $$$1 \leq a  \lt  b \leq n$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id009236852417199616" id="id003954782485226338" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009236852417199616">2
3
5
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007510480342417162" id="id0035885969091497616" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007510480342417162">1
2
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, $$$\mathrm{gcd}(1, 2) = \mathrm{gcd}(2, 3) = \mathrm{gcd}(1, 3) = 1$$$.</p><p>In the second test case, $$$2$$$ is the maximum possible value, corresponding to $$$\mathrm{gcd}(2, 4)$$$.</p></div>