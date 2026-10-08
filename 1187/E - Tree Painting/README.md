<h2><a href="https://codeforces.com/contest/1187/problem/E" target="_blank" rel="noopener noreferrer">1187E — Tree Painting</a></h2>

| | |
|---|---|
| **Difficulty** | 2100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1187E](https://codeforces.com/contest/1187/problem/E) |

## Topics
`dfs and similar` `dp` `trees`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">E. Tree Painting</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given a tree (an undirected connected acyclic graph) consisting of $$$n$$$ vertices. You are playing a game on this tree.</p><p>Initially all vertices are white. On the first turn of the game you choose one vertex and paint it black. Then on each turn you choose a white vertex adjacent (connected by an edge) to <span class="tex-font-style-bf">any</span> black vertex and paint it black.</p><p>Each time when you choose a vertex (even during the first turn), you gain the number of points equal to the size of the connected component consisting only of white vertices that contains the chosen vertex. The game ends when all vertices are painted black.</p><p>Let's see the following example:</p><p><img class="tex-graphics" src="https://espresso.codeforces.com/d598259e9569ae2a9d6e1dbf0852511e13d7f903.png" style="max-width: 100.0%;max-height: 100.0%;"></p><p>Vertices $$$1$$$ and $$$4$$$ are painted black already. If you choose the vertex $$$2$$$, you will gain $$$4$$$ points for the connected component consisting of vertices $$$2, 3, 5$$$ and $$$6$$$. If you choose the vertex $$$9$$$, you will gain $$$3$$$ points for the connected component consisting of vertices $$$7, 8$$$ and $$$9$$$.</p><p>Your task is to maximize the number of points you gain.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains an integer $$$n$$$ — the number of vertices in the tree ($$$2 \le n \le 2 \cdot 10^5$$$).</p><p>Each of the next $$$n - 1$$$ lines describes an edge of the tree. Edge $$$i$$$ is denoted by two integers $$$u_i$$$ and $$$v_i$$$, the indices of vertices it connects ($$$1 \le u_i, v_i \le n$$$, $$$u_i \ne v_i$$$).</p><p>It is guaranteed that the given edges form a tree.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Print one integer — the maximum number of points you gain if you will play optimally.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id009439391758765614" id="id009231935969418982" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009439391758765614">9
1 2
2 3
2 5
2 6
1 4
4 9
9 7
9 8
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0019417508361034996" id="id0046482086111011345" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0019417508361034996">36
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id006655023973556077" id="id00866759838372401" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006655023973556077">5
1 2
1 3
2 4
2 5
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007167878554602027" id="id003320526555593909" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007167878554602027">14
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>The first example tree is shown in the problem statement.</p></div>