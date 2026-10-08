<h2><a href="https://codeforces.com/contest/2220/problem/A" target="_blank" rel="noopener noreferrer">2220A — Blocked</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2220A](https://codeforces.com/contest/2220/problem/A) |

## Topics
`greedy` `sortings`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Blocked</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Given an array $$$a$$$ of integers of size $$$n$$$, we say that a position $$$1 \le i \le n$$$ is <span class="tex-font-style-it">blocked</span> if $$$a_i$$$ can be expressed as the sum of a subset of $$$a_1, a_2, \ldots, a_{i-1}$$$ (i.e. there exist $$$1 \le j_1  \lt  j_2  \lt  \ldots  \lt  j_k \le i-1$$$ such that $$$a_{j_1} + a_{j_2} + \ldots + a_{j_k} = a_i$$$). Reorder $$$a$$$ so that no position is blocked or report that it is impossible.</p><p>For example, reordering the array [$$$3, 2, 5$$$] to [$$$2, 3, 5$$$] makes position $$$3$$$ blocked, since we can express $$$5 = 2 + 3$$$, but if we reorder it to [$$$3, 5, 2$$$], no position is blocked.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 400$$$). The description of the test cases follows. </p><p>The first line of each test case contains an integer $$$n$$$ ($$$1 \le n \le 200$$$).</p><p>The second line contains $$$n$$$ integers, denoting the array $$$a$$$ ($$$\textbf{1} \le a_i \le 100$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print any order of $$$a$$$ such that no position is blocked if it exists, otherwise print $$$-1$$$. </p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id007747718353573433" id="id0032972831099516153" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007747718353573433">4
3
1 5 9
4
1 3 3 2
3
1 2 3
1
1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007788967953292631" id="id009653614402151885" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007788967953292631">5 9 1
-1
3 1 2
1</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the third test case, the array [$$$3, 1, 2$$$] has no position blocked:</p><p>Position $$$1$$$ is not blocked since $$$3$$$ can't be expressed as the sum of a subset of [].</p><p>Position $$$2$$$ is not blocked since $$$1$$$ can't be expressed as the sum of a subset of [$$$3$$$].</p><p>Position $$$3$$$ is not blocked since $$$2$$$ can't be expressed as the sum of a subset of [$$$3, 1$$$].</p></div>