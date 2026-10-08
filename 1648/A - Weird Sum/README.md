<h2><a href="https://codeforces.com/contest/1648/problem/A" target="_blank" rel="noopener noreferrer">1648A — Weird Sum</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1648A](https://codeforces.com/contest/1648/problem/A) |

## Topics
`combinatorics` `data structures` `geometry` `math` `matrices` `sortings`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Weird Sum</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Egor has a table of size $$$n \times m$$$, with lines numbered from $$$1$$$ to $$$n$$$ and columns numbered from $$$1$$$ to $$$m$$$. Each cell has a color that can be presented as an integer from $$$1$$$ to $$$10^5$$$.</p><p>Let us denote the cell that lies in the intersection of the $$$r$$$-th row and the $$$c$$$-th column as $$$(r, c)$$$. We define the <span class="tex-font-style-underline">manhattan distance</span> between two cells $$$(r_1, c_1)$$$ and $$$(r_2, c_2)$$$ as the length of a shortest path between them where each consecutive cells in the path must have a common side. The path can go through cells of any color. For example, in the table $$$3 \times 4$$$ the manhattan distance between $$$(1, 2)$$$ and $$$(3, 3)$$$ is $$$3$$$, one of the shortest paths is the following: $$$(1, 2) \to (2, 2) \to (2, 3) \to (3, 3)$$$. </p><p>Egor decided to calculate the sum of manhattan distances between each pair of cells of the same color. Help him to calculate this sum.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains two integers $$$n$$$ and $$$m$$$ ($$$1 \leq n \le m$$$, $$$n \cdot m \leq 100\,000$$$) — number of rows and columns in the table.</p><p>Each of next $$$n$$$ lines describes a row of the table. The $$$i$$$-th line contains $$$m$$$ integers $$$c_{i1}, c_{i2}, \ldots, c_{im}$$$ ($$$1 \le c_{ij} \le 100\,000$$$) — colors of cells in the $$$i$$$-th row.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Print one integer — the the sum of manhattan distances between each pair of cells of the same color.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id006458550915091287" id="id0011814107476940061" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006458550915091287">2 3
1 2 3
3 2 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007847559778718494" id="id008767451560842553" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007847559778718494">7
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0031852295086195803" id="id008706918367524733" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0031852295086195803">3 4
1 1 2 2
2 1 1 2
2 2 1 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id006283065156251608" id="id002649646595519216" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006283065156251608">76
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0007312412609091246" id="id009988564927223226" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0007312412609091246">4 4
1 1 2 3
2 1 1 2
3 1 2 1
1 1 2 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id002951472333896281" id="id0013689621530389906" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id002951472333896281">129
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first sample there are three pairs of cells of same color: in cells $$$(1, 1)$$$ and $$$(2, 3)$$$, in cells $$$(1, 2)$$$ and $$$(2, 2)$$$, in cells $$$(1, 3)$$$ and $$$(2, 1)$$$. The manhattan distances between them are $$$3$$$, $$$1$$$ and $$$3$$$, the sum is $$$7$$$.</p></div>