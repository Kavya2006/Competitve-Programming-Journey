<h2><a href="https://codeforces.com/contest/1708/problem/B" target="_blank" rel="noopener noreferrer">1708B — Difference of GCDs</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1708B](https://codeforces.com/contest/1708/problem/B) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Difference of GCDs</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given three integers $$$n$$$, $$$l$$$, and $$$r$$$. You need to construct an array $$$a_1,a_2,\dots,a_n$$$ ($$$l\le a_i\le r$$$) such that $$$\gcd(i,a_i)$$$ are all distinct or report there's no solution.</p><p>Here $$$\gcd(x, y)$$$ denotes the <a href="https://en.wikipedia.org/wiki/Greatest_common_divisor">greatest common divisor (GCD)</a> of integers $$$x$$$ and $$$y$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The input consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1\le t\le 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line contains three integers $$$n$$$, $$$l$$$, $$$r$$$ ($$$1 \le n \le 10^5$$$, $$$1\le l\le r\le 10^9$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, if there is no solution, print "<span class="tex-font-style-tt">NO</span>" (without quotes). You can print letters in any case (upper or lower).</p><p>Otherwise, print "<span class="tex-font-style-tt">YES</span>" (without quotes). In the next line, print $$$n$$$ integers $$$a_1,a_2,\ldots,a_n$$$ — the array you construct.</p><p>If there are multiple solutions, you may output any.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0029733921102617744" id="id005464637829934893" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0029733921102617744">4
5 1 5
9 1000 2000
10 30 35
1 1000000000 1000000000
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id002885481671855932" id="id0020210206243595386" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id002885481671855932">YES
1 2 3 4 5
YES
1145 1926 1440 1220 1230 1350 1001 1000 1233
NO
YES
1000000000
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, $$$\gcd(1,a_1),\gcd(2,a_2),\ldots,\gcd(5,a_5)$$$ are equal to $$$1$$$, $$$2$$$, $$$3$$$, $$$4$$$, $$$5$$$, respectively.</p></div>