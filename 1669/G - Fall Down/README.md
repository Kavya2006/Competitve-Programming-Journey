<h2><a href="https://codeforces.com/contest/1669/problem/G" target="_blank" rel="noopener noreferrer">1669G — Fall Down</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1669G](https://codeforces.com/contest/1669/problem/G) |

## Topics
`dfs and similar` `implementation`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">G. Fall Down</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>There is a grid with $$$n$$$ rows and $$$m$$$ columns, and three types of cells: </p><ul> <li> An empty cell, denoted with '<span class="tex-font-style-tt">.</span>'. </li><li> A stone, denoted with '<span class="tex-font-style-tt">*</span>'. </li><li> An obstacle, denoted with the lowercase Latin letter '<span class="tex-font-style-tt">o</span>'. </li></ul><p>All stones fall down until they meet the floor (the bottom row), an obstacle, or other stone which is already immovable. (In other words, all the stones just fall down as long as they can fall.)</p><p>Simulate the process. What does the resulting grid look like?</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The input consists of multiple test cases. The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 100$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$m$$$ ($$$1 \leq n, m \leq 50$$$) — the number of rows and the number of columns in the grid, respectively.</p><p>Then $$$n$$$ lines follow, each containing $$$m$$$ characters. Each of these characters is either '<span class="tex-font-style-tt">.</span>', '<span class="tex-font-style-tt">*</span>', or '<span class="tex-font-style-tt">o</span>' — an empty cell, a stone, or an obstacle, respectively.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output a grid with $$$n$$$ rows and $$$m$$$ columns, showing the result of the process.</p><p><span class="tex-font-style-bf">You don't need to output a new line after each test, it is in the samples just for clarity.</span></p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0012390373746216554" id="id004641383732378547" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0012390373746216554">3
6 10
.*.*....*.
.*.......*
...o....o.
.*.*....*.
..........
.o......o*
2 9
...***ooo
.*o.*o.*o
5 5
*****
*....
*****
....*
*****
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id004735396063442744" id="id0014441082132436467" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004735396063442744">..........
...*....*.
.*.o....o.
.*........
.*......**
.o.*....o*

....**ooo
.*o**o.*o

.....
*...*
*****
*****
*****
</pre></div></div></div>