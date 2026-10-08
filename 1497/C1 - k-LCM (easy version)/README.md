<h2><a href="https://codeforces.com/contest/1497/problem/C1" target="_blank" rel="noopener noreferrer">1497C1 — k-LCM (easy version)</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1497C1](https://codeforces.com/contest/1497/problem/C1) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C1. k-LCM (easy version)</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p><span class="tex-font-style-bf">It is the easy version of the problem. The only difference is that in this version $$$k = 3$$$.</span></p><p>You are given a positive integer $$$n$$$. Find $$$k$$$ positive integers $$$a_1, a_2, \ldots, a_k$$$, such that:</p><ul> <li> $$$a_1 + a_2 + \ldots + a_k = n$$$ </li><li> $$$LCM(a_1, a_2, \ldots, a_k) \le \frac{n}{2}$$$ </li></ul><p>Here $$$LCM$$$ is the <a href="https://en.wikipedia.org/wiki/Least_common_multiple">least common multiple</a> of numbers $$$a_1, a_2, \ldots, a_k$$$.</p><p>We can show that for given constraints the answer always exists.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ $$$(1 \le t \le 10^4)$$$  — the number of test cases.</p><p>The only line of each test case contains two integers $$$n$$$, $$$k$$$ ($$$3 \le n \le 10^9$$$, $$$k = 3$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case print $$$k$$$ positive integers $$$a_1, a_2, \ldots, a_k$$$, for which all conditions are satisfied.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0021622113009951838" id="id008747291687992043" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0021622113009951838">3
3 3
8 3
14 3
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id008568018823209166" id="id009447917740340839" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id008568018823209166">1 1 1
4 2 2
2 6 6
</pre></div></div></div>