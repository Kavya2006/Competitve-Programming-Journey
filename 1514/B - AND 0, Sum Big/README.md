<h2><a href="https://codeforces.com/contest/1514/problem/B" target="_blank" rel="noopener noreferrer">1514B — AND 0, Sum Big</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1514B](https://codeforces.com/contest/1514/problem/B) |

## Topics
`bitmasks` `combinatorics` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. AND 0, Sum Big</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Baby Badawy's first words were "AND 0 SUM BIG", so he decided to solve the following problem. Given two integers $$$n$$$ and $$$k$$$, count the number of arrays of length $$$n$$$ such that:</p><ul> <li> all its elements are integers between $$$0$$$ and $$$2^k-1$$$ (inclusive); </li><li> the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#AND">bitwise AND</a> of all its elements is $$$0$$$; </li><li> the sum of its elements is as large as possible. </li></ul><p>Since the answer can be very large, print its remainder when divided by $$$10^9+7$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 10$$$) — the number of test cases you need to solve.</p><p>Each test case consists of a line containing two integers $$$n$$$ and $$$k$$$ ($$$1 \le n \le 10^{5}$$$, $$$1 \le k \le 20$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print the number of arrays satisfying the conditions. Since the answer can be very large, print its remainder when divided by $$$10^9+7$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id007233595107451377" id="id007692785018807881" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007233595107451377">2
2 2
100000 20
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id00674518255125568" id="id006805719086242008" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00674518255125568">4
226732710
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first example, the $$$4$$$ arrays are:</p><ul> <li> $$$[3,0]$$$, </li><li> $$$[0,3]$$$, </li><li> $$$[1,2]$$$, </li><li> $$$[2,1]$$$. </li></ul></div>