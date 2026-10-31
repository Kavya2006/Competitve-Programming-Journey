<h2><a href="https://codeforces.com/contest/1996/problem/C" target="_blank" rel="noopener noreferrer">1996C — Sort</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1996C](https://codeforces.com/contest/1996/problem/C) |

## Topics
`dp` `greedy` `sortings` `strings`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C. Sort</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>5 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given two strings $$$a$$$ and $$$b$$$ of length $$$n$$$. Then, you are (forced against your will) to answer $$$q$$$ queries.</p><p>For each query, you are given a range bounded by $$$l$$$ and $$$r$$$. In one operation, you can choose an integer $$$i$$$ ($$$l \leq i \leq r$$$) and set $$$a_i = x$$$ where $$$x$$$ is any character you desire. Output the minimum number of operations you must perform such that $$$\texttt{sorted(a[l..r])} = \texttt{sorted(b[l..r])}$$$. <span class="tex-font-style-bf">The operations you perform on one query does not affect other queries.</span></p><p>For an arbitrary string $$$c$$$, $$$\texttt{sorted(c[l..r])}$$$ denotes the substring consisting of characters $$$c_l, c_{l+1}, ... , c_r$$$ sorted in lexicographical order.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains $$$t$$$ ($$$1 \leq t \leq 1000$$$) – the number of test cases.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$q$$$ ($$$1 \leq n, q \leq 2 \cdot 10^5$$$) – the length of both strings and the number of queries.</p><p>The following line contains $$$a$$$ of length $$$n$$$. It is guaranteed $$$a$$$ only contains lowercase latin letters.</p><p>The following line contains $$$b$$$ of length $$$n$$$. It is guaranteed $$$b$$$ only contains lowercase latin letters.</p><p>The following $$$q$$$ lines contain two integers $$$l$$$ and $$$r$$$ ($$$1 \leq l \leq r \leq n$$$) – the range of the query.</p><p>It is guaranteed the sum of $$$n$$$ and $$$q$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each query, output an integer, the minimum number of operations you need to perform in a new line.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id008418038669089278" id="id0036640980852074023" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre data-content="3
5 3
abcde
edcba
1 5
1 4
3 3
4 2
zzde
azbe
1 3
1 4
6 3
uwuwuw
wuwuwu
2 4
1 3
1 6
" id="id008418038669089278"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">3</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">5 3</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">abcde</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">edcba</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1 5</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1 4</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">3 3</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">4 2</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">zzde</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">azbe</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">1 3</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">1 4</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">6 3</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">uwuwuw</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">wuwuwu</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">2 4</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">1 3</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">1 6</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id006222856159755048" id="id005067885267926546" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006222856159755048">0
1
0
2
2
1
1
0
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>For the first query, $$$\texttt{sorted(a[1..5])} =$$$ <span class="tex-font-style-tt">abcde</span> and $$$\texttt{sorted(b[1..5])} =$$$ <span class="tex-font-style-tt">abcde</span>, so no operations are necessary.</p><p>For the second query, you need to set $$$a_1 = $$$ <span class="tex-font-style-tt">e</span>. Then, $$$\texttt{sorted(a[1..4])} = \texttt{sorted(b[1..4])} = $$$ <span class="tex-font-style-tt">bcde</span>.</p></div>