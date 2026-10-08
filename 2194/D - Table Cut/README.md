<h2><a href="https://codeforces.com/contest/2194/problem/D" target="_blank" rel="noopener noreferrer">2194D — Table Cut</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2194D](https://codeforces.com/contest/2194/problem/D) |

## Topics
`constructive algorithms` `greedy` `implementation`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">D. Table Cut</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Given a table of size $$$n \times m$$$, where each cell contains either $$$0$$$ or $$$1$$$. The task is to divide it into two parts with a cut that goes from the top left corner to the bottom right corner. The cut lines can only go right or down.</p><p>Let $$$a$$$ be the number of ones in one part of the table after the cut, and $$$b$$$ be the number of ones in the other part of the table. The goal is to maximize the value of $$$a \cdot b$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows. </p><p>The first line of each test case contains two integers $$$n$$$ and $$$m$$$ ($$$1 \leq n, m \leq 3 \cdot 10^{5}$$$, $$$2 \leq n \cdot m \leq 3 \cdot 10^{5}$$$) — the number of rows and columns in the table, respectively.</p><p>Each of the following $$$n$$$ lines contains $$$m$$$ integers, where the $$$j$$$-th number in the $$$i$$$-th line corresponds to the value $$$a_{i, j}$$$ ($$$0 \leq a_{i, j} \leq 1$$$).</p><p>It is guaranteed that the sum of $$$n \cdot m$$$ across all test cases does not exceed $$$3 \cdot 10^{5}$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output a single number in the first line of the output data — the maximum value of the product.</p><p>In the second line, output a string consisting of $$$n$$$ characters  '<span class="tex-font-style-tt">D</span>' and $$$m$$$ characters  '<span class="tex-font-style-tt">R</span>', representing the direction of the next cut, where '<span class="tex-font-style-tt">D</span>' means a cut downwards, and '<span class="tex-font-style-tt">R</span>' — a cut to the right.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0011505940400883241" id="id006204768038708437" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0011505940400883241">3
5 5
1 0 1 1 0
0 1 0 1 1
1 0 1 0 0
0 1 0 1 0
0 0 0 0 1
5 4
0 0 1 0
0 1 1 1
1 0 0 1
0 1 0 1
0 0 1 0
3 2
1 0
0 1
1 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0023845576638147103" id="id004372313618696061" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0023845576638147103">30
RDRDRDRDDR
20
DRRDRDDDR
4
DRDRD</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>The images show the correct cuts for each of the first and second test cases, at which the maximum value of the product is achieved.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/bf5a95bd1bfc341b05232d999b0048817fc8b08f.png" style="zoom: 70.0%;max-width: 100.0%;max-height: 100.0%;"> <img class="tex-graphics" src="https://espresso.codeforces.com/9e50e43cf6573882647584be3bda8171ba34d3f0.png" style="zoom: 70.0%;max-width: 100.0%;max-height: 100.0%;"> </center></div>