<h2><a href="https://codeforces.com/contest/1225/problem/D" target="_blank" rel="noopener noreferrer">1225D — Power Products</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1225D](https://codeforces.com/contest/1225/problem/D) |

## Topics
`hashing` `math` `number theory`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">D. Power Products</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>512 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given $$$n$$$ positive integers $$$a_1, \ldots, a_n$$$, and an integer $$$k \geq 2$$$. Count the number of pairs $$$i, j$$$ such that $$$1 \leq i  \lt  j \leq n$$$, and there exists an integer $$$x$$$ such that $$$a_i \cdot a_j = x^k$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains two integers $$$n$$$ and $$$k$$$ ($$$2 \leq n \leq 10^5$$$, $$$2 \leq k \leq 100$$$).</p><p>The second line contains $$$n$$$ integers $$$a_1, \ldots, a_n$$$ ($$$1 \leq a_i \leq 10^5$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Print a single integer — the number of suitable pairs.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id003429453930299705" id="id009134765696800698" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id003429453930299705">6 3
1 3 9 8 24 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id002420514728501203" id="id000012667270574677758" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id002420514728501203">5
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the sample case, the suitable pairs are:</p><ul><li> $$$a_1 \cdot a_4 = 8 = 2^3$$$;</li><li> $$$a_1 \cdot a_6 = 1 = 1^3$$$;</li><li> $$$a_2 \cdot a_3 = 27 = 3^3$$$;</li><li> $$$a_3 \cdot a_5 = 216 = 6^3$$$;</li><li> $$$a_4 \cdot a_6 = 8 = 2^3$$$.</li></ul></div>