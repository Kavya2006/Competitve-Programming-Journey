<h2><a href="https://codeforces.com/contest/1855/problem/B" target="_blank" rel="noopener noreferrer">1855B — Longest Divisors Interval</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1855B](https://codeforces.com/contest/1855/problem/B) |

## Topics
`brute force` `combinatorics` `greedy` `math` `number theory`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Longest Divisors Interval</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Given a positive integer $$$n$$$, find the maximum size of an interval $$$[l, r]$$$ of positive integers such that, for every $$$i$$$ in the interval (i.e., $$$l \leq i \leq r$$$), $$$n$$$ is a multiple of $$$i$$$.</p><p>Given two integers $$$l\le r$$$, the size of the interval $$$[l, r]$$$ is $$$r-l+1$$$ (i.e., it coincides with the number of integers belonging to the interval).</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>The only line of the description of each test case contains one integer $$$n$$$ ($$$1 \leq n \leq 10^{18}$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print a single integer: the maximum size of a valid interval.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id004914570692054897" id="id0015424153523669504" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004914570692054897"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">10</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">40</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">990990</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">4204474560</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">169958913706572972</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">365988220345828080</div><div class="test-example-line test-example-line-odd test-example-line-7" bis_skin_checked="1">387701719537826430</div><div class="test-example-line test-example-line-even test-example-line-8" bis_skin_checked="1">620196883578129853</div><div class="test-example-line test-example-line-odd test-example-line-9" bis_skin_checked="1">864802341280805662</div><div class="test-example-line test-example-line-even test-example-line-10" bis_skin_checked="1">1000000000000000000</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id004603894977791513" id="id005767197582689935" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004603894977791513">1
2
3
6
4
22
3
1
2
2
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, a valid interval with maximum size is $$$[1, 1]$$$ (it's valid because $$$n = 1$$$ is a multiple of $$$1$$$) and its size is $$$1$$$.</p><p>In the second test case, a valid interval with maximum size is $$$[4, 5]$$$ (it's valid because $$$n = 40$$$ is a multiple of $$$4$$$ and $$$5$$$) and its size is $$$2$$$.</p><p>In the third test case, a valid interval with maximum size is $$$[9, 11]$$$.</p><p>In the fourth test case, a valid interval with maximum size is $$$[8, 13]$$$.</p><p>In the seventh test case, a valid interval with maximum size is $$$[327869, 327871]$$$.</p></div>