<h2><a href="https://codeforces.com/contest/1293/problem/A" target="_blank" rel="noopener noreferrer">1293A — ConneR and the A.R.C. Markland-N</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1293A](https://codeforces.com/contest/1293/problem/A) |

## Topics
`binary search` `brute force` `implementation`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. ConneR and the A.R.C. Markland-N</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><div class="epigraph" bis_skin_checked="1"><div class="epigraph-text" bis_skin_checked="1"><a href="https://www.youtube.com/watch?v=55Ca6av1kAY"><span class="tex-font-style-it">Sakuzyo - Imprinting</span></a></div></div><p>A.R.C. Markland-N is a tall building with $$$n$$$ floors numbered from $$$1$$$ to $$$n$$$. Between each two adjacent floors in the building, there is a staircase connecting them.</p><p>It's lunchtime for our sensei Colin "ConneR" Neumann Jr, and he's planning for a location to enjoy his meal.</p><p>ConneR's office is at floor $$$s$$$ of the building. On each floor (including floor $$$s$$$, of course), there is a restaurant offering meals. However, due to renovations being in progress, $$$k$$$ of the restaurants are currently closed, and as a result, ConneR can't enjoy his lunch there.</p><p>CooneR wants to reach a restaurant as quickly as possible to save time. What is the minimum number of staircases he needs to walk to reach a closest currently open restaurant.</p><p>Please answer him quickly, and you might earn his praise and even enjoy the lunch with him in the elegant Neumanns' way!</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases in the test. Then the descriptions of $$$t$$$ test cases follow.</p><p>The first line of a test case contains three integers $$$n$$$, $$$s$$$ and $$$k$$$ ($$$2 \le n \le 10^9$$$, $$$1 \le s \le n$$$, $$$1 \le k \le \min(n-1, 1000)$$$) — respectively the number of floors of A.R.C. Markland-N, the floor where ConneR is in, and the number of closed restaurants.</p><p>The second line of a test case contains $$$k$$$ distinct integers $$$a_1, a_2, \ldots, a_k$$$ ($$$1 \le a_i \le n$$$) — the floor numbers of the currently closed restaurants.</p><p>It is guaranteed that the sum of $$$k$$$ over all test cases does not exceed $$$1000$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case print a single integer — the minimum number of staircases required for ConneR to walk from the floor $$$s$$$ to a floor with an open restaurant.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id004346923449143498" id="id006120487716710371" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004346923449143498">5
5 2 3
1 2 3
4 3 3
4 1 2
10 2 6
1 2 3 4 5 7
2 1 1
2
100 76 8
76 75 36 67 41 74 10 77
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007433484755685181" id="id009244970045944437" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007433484755685181">2
0
4
0
2
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first example test case, the nearest floor with an open restaurant would be the floor $$$4$$$.</p><p>In the second example test case, the floor with ConneR's office still has an open restaurant, so Sensei won't have to go anywhere.</p><p>In the third example test case, the closest open restaurant is on the $$$6$$$-th floor.</p></div>