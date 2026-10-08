<h2><a href="https://codeforces.com/contest/1092/problem/E" target="_blank" rel="noopener noreferrer">1092E — Minimal Diameter Forest</a></h2>

| | |
|---|---|
| **Difficulty** | 2000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1092E](https://codeforces.com/contest/1092/problem/E) |

## Topics
`constructive algorithms` `dfs and similar` `greedy` `trees`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">E. Minimal Diameter Forest</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given a forest — an undirected graph with $$$n$$$ vertices such that each its connected component is a tree.</p><p>The diameter (aka "longest shortest path") of a connected undirected graph is the maximum number of edges in the <span class="tex-font-style-bf">shortest</span> path between any pair of its vertices.</p><p>You task is to add some edges (possibly zero) to the graph so that it becomes a tree and the diameter of the tree is minimal possible.</p><p>If there are multiple correct answers, print any of them.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n \le 1000$$$, $$$0 \le m \le n - 1$$$) — the number of vertices of the graph and the number of edges, respectively.</p><p>Each of the next $$$m$$$ lines contains two integers $$$v$$$ and $$$u$$$ ($$$1 \le v, u \le n$$$, $$$v \ne u$$$) — the descriptions of the edges.</p><p>It is guaranteed that the given graph is a forest.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>In the first line print the diameter of the resulting tree.</p><p>Each of the next $$$(n - 1) - m$$$ lines should contain two integers $$$v$$$ and $$$u$$$ ($$$1 \le v, u \le n$$$, $$$v \ne u$$$) — the descriptions of the <span class="tex-font-style-bf">added edges</span>.</p><p>The resulting graph should be a tree and its diameter should be minimal possible.</p><p>For $$$m = n - 1$$$ no edges are added, thus the output consists of a single integer — diameter of the given tree.</p><p>If there are multiple correct answers, print any of them.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id006636959246702709" id="id009033626230944093" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006636959246702709">4 2
1 2
2 3
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0017509649337282562" id="id001953365861382017" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0017509649337282562">2
4 2
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id005501543192595079" id="id004203534363557463" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005501543192595079">2 0
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id008175060118645983" id="id005728652952837885" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id008175060118645983">1
1 2
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0029004204561069447" id="id0024990724562949695" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0029004204561069447">3 2
1 3
2 3
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009332116063393346" id="id008885120483059175" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009332116063393346">2
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first example adding edges (1, 4) or (3, 4) will lead to a total diameter of 3. Adding edge (2, 4), however, will make it 2.</p><p>Edge (1, 2) is the only option you have for the second example. The diameter is 1.</p><p>You can't add any edges in the third example. The diameter is already 2.</p></div>