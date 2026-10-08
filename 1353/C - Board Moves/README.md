<h2><a href="https://codeforces.com/contest/1353/problem/C" target="_blank" rel="noopener noreferrer">1353C — Board Moves</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1353C](https://codeforces.com/contest/1353/problem/C) |

## Topics
`math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C. Board Moves</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given a board of size $$$n \times n$$$, where $$$n$$$ is <span class="tex-font-style-bf">odd</span> (not divisible by $$$2$$$). Initially, each cell of the board contains one figure.</p><p>In one move, you can select <span class="tex-font-style-bf">exactly one figure</span> presented in some cell and move it to one of the cells <span class="tex-font-style-bf">sharing a side or a corner with the current cell</span>, i.e. from the cell $$$(i, j)$$$ you can move the figure to cells: </p><ul> <li> $$$(i - 1, j - 1)$$$; </li><li> $$$(i - 1, j)$$$; </li><li> $$$(i - 1, j + 1)$$$; </li><li> $$$(i, j - 1)$$$; </li><li> $$$(i, j + 1)$$$; </li><li> $$$(i + 1, j - 1)$$$; </li><li> $$$(i + 1, j)$$$; </li><li> $$$(i + 1, j + 1)$$$; </li></ul><p>Of course, you <span class="tex-font-style-bf">can not</span> move figures to cells out of the board. It is allowed that after a move there will be several figures in one cell.</p><p>Your task is to find the minimum number of moves needed to get <span class="tex-font-style-bf">all the figures</span> into <span class="tex-font-style-bf">one</span> cell (i.e. $$$n^2-1$$$ cells should contain $$$0$$$ figures and one cell should contain $$$n^2$$$ figures).</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 200$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The only line of the test case contains one integer $$$n$$$ ($$$1 \le n  \lt  5 \cdot 10^5$$$) — the size of the board. It is guaranteed that $$$n$$$ is odd (not divisible by $$$2$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$5 \cdot 10^5$$$ ($$$\sum n \le 5 \cdot 10^5$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case print the answer — the minimum number of moves needed to get <span class="tex-font-style-bf">all the figures</span> into <span class="tex-font-style-bf">one</span> cell.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id005020870744432633" id="id009577598505403025" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005020870744432633">3
1
5
499993
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id00854684023393157" id="id009194003765168896" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00854684023393157">0
40
41664916690999888
</pre></div></div></div>