<h2><a href="https://codeforces.com/contest/2008/problem/C" target="_blank" rel="noopener noreferrer">2008C — Longest Good Array</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2008C](https://codeforces.com/contest/2008/problem/C) |

## Topics
`binary search` `brute force` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C. Longest Good Array</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Today, Sakurako was studying arrays. An array $$$a$$$ of length $$$n$$$ is considered good if and only if:</p><ul> <li> the array $$$a$$$ is increasing, meaning $$$a_{i - 1}  \lt  a_i$$$ for all $$$2 \le i \le n$$$; </li><li> the differences between adjacent elements are increasing, meaning $$$a_i - a_{i-1}  \lt  a_{i+1} - a_i$$$ for all $$$2 \le i  \lt  n$$$. </li></ul><p>Sakurako has come up with boundaries $$$l$$$ and $$$r$$$ and wants to construct a good array of maximum length, where $$$l \le a_i \le r$$$ for all $$$a_i$$$.</p><p>Help Sakurako find the maximum length of a good array for the given $$$l$$$ and $$$r$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1\le t\le 10^4$$$)  — the number of test cases.</p><p>The only line of each test case contains two integers $$$l$$$ and $$$r$$$ ($$$1\le l\le r\le 10^9$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output a single integer  — the length of the longest good array Sakurako can form given $$$l$$$ and $$$r$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id007810633128400718" id="id0035866937427241774" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007810633128400718"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1 2</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">1 5</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">2 2</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">10 20</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">1 1000000000</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id00559580933770951" id="id004829877649746822" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00559580933770951">2
3
1
5
44721
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>For $$$l=1$$$ and $$$r=5$$$, one possible array could be $$$(1,2,5)$$$. It can be proven that an array of length $$$4$$$ does not exist for the given $$$l$$$ and $$$r$$$.</p><p>For $$$l=2$$$ and $$$r=2$$$, the only possible array is $$$(2)$$$.</p><p>For $$$l=10$$$ and $$$r=20$$$, the only possible array is $$$(10,11,13,16,20)$$$.</p></div>