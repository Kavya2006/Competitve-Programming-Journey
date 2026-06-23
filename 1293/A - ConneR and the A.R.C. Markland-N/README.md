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

<div class="header"><div class="title">A. ConneR and the A.R.C. Markland-N</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><div class="epigraph"><div class="epigraph-text"><a href="https://www.youtube.com/watch?v=55Ca6av1kAY"><span class="tex-font-style-it">Sakuzyo - Imprinting</span></a></div></div><p>A.R.C. Markland-N is a tall building with $$$n$$$ floors numbered from $$$1$$$ to $$$n$$$. Between each two adjacent floors in the building, there is a staircase connecting them.</p><p>It's lunchtime for our sensei Colin "ConneR" Neumann Jr, and he's planning for a location to enjoy his meal.</p><p>ConneR's office is at floor $$$s$$$ of the building. On each floor (including floor $$$s$$$, of course), there is a restaurant offering meals. However, due to renovations being in progress, $$$k$$$ of the restaurants are currently closed, and as a result, ConneR can't enjoy his lunch there.</p><p>CooneR wants to reach a restaurant as quickly as possible to save time. What is the minimum number of staircases he needs to walk to reach a closest currently open restaurant.</p><p>Please answer him quickly, and you might earn his praise and even enjoy the lunch with him in the elegant Neumanns' way!</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases in the test. Then the descriptions of $$$t$$$ test cases follow.</p><p>The first line of a test case contains three integers $$$n$$$, $$$s$$$ and $$$k$$$ ($$$2 \le n \le 10^9$$$, $$$1 \le s \le n$$$, $$$1 \le k \le \min(n-1, 1000)$$$) — respectively the number of floors of A.R.C. Markland-N, the floor where ConneR is in, and the number of closed restaurants.</p><p>The second line of a test case contains $$$k$$$ distinct integers $$$a_1, a_2, \ldots, a_k$$$ ($$$1 \le a_i \le n$$$) — the floor numbers of the currently closed restaurants.</p><p>It is guaranteed that the sum of $$$k$$$ over all test cases does not exceed $$$1000$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print a single integer — the minimum number of staircases required for ConneR to walk from the floor $$$s$$$ to a floor with an open restaurant.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0018694387376828292" id="id004381539616664242" class="input-output-copier">Copy</div></div><pre id="id0018694387376828292">5
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
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007856298036928334" id="id008626315499975372" class="input-output-copier">Copy</div></div><pre id="id007856298036928334">2
0
4
0
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example test case, the nearest floor with an open restaurant would be the floor $$$4$$$.</p><p>In the second example test case, the floor with ConneR's office still has an open restaurant, so Sensei won't have to go anywhere.</p><p>In the third example test case, the closest open restaurant is on the $$$6$$$-th floor.</p></div>