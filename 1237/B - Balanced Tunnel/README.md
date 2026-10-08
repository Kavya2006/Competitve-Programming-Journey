<h2><a href="https://codeforces.com/contest/1237/problem/B" target="_blank" rel="noopener noreferrer">1237B — Balanced Tunnel</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1237B](https://codeforces.com/contest/1237/problem/B) |

## Topics
`data structures` `sortings` `two pointers`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Balanced Tunnel</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>512 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Consider a tunnel on a one-way road. During a particular day, $$$n$$$ cars numbered from $$$1$$$ to $$$n$$$ entered and exited the tunnel exactly once. All the cars passed through the tunnel at constant speeds.</p><p>A traffic enforcement camera is mounted at the tunnel entrance. Another traffic enforcement camera is mounted at the tunnel exit. <span class="tex-font-style-it">Perfectly balanced</span>.</p><p>Thanks to the cameras, the order in which the cars entered and exited the tunnel is known. No two cars entered or exited at the same time.</p><p>Traffic regulations prohibit overtaking inside the tunnel. If car $$$i$$$ overtakes any other car $$$j$$$ inside the tunnel, car $$$i$$$ must be fined. However, each car can be fined at most once.</p><p>Formally, let's say that car $$$i$$$ <span class="tex-font-style-it">definitely overtook</span> car $$$j$$$ if car $$$i$$$ entered the tunnel later than car $$$j$$$ and exited the tunnel earlier than car $$$j$$$. Then, car $$$i$$$ must be fined if and only if it definitely overtook at least one other car.</p><p>Find the number of cars that must be fined. </p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$n$$$ ($$$2 \le n \le 10^5$$$), denoting the number of cars.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le n$$$), denoting the ids of cars in order of entering the tunnel. All $$$a_i$$$ are pairwise distinct.</p><p>The third line contains $$$n$$$ integers $$$b_1, b_2, \ldots, b_n$$$ ($$$1 \le b_i \le n$$$), denoting the ids of cars in order of exiting the tunnel. All $$$b_i$$$ are pairwise distinct.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Output the number of cars to be fined.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id002707934408544108" id="id009087336913860893" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id002707934408544108">5
3 5 2 1 4
4 3 2 5 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id00428112015254557" id="id00716118640604934" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00428112015254557">2
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0041407199361862823" id="id002654282128614083" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0041407199361862823">7
5 2 3 6 7 1 4
2 3 6 7 1 4 5
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id006197255010013503" id="id005802876513287214" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006197255010013503">6
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0014498144254130707" id="id009607046074280379" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0014498144254130707">2
1 2
1 2
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0031134514475815556" id="id008714664465680941" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0031134514475815556">0
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>The first example is depicted below:</p><p><img class="tex-graphics" src="https://espresso.codeforces.com/b8f505b38707f87ac16773bccb0b71793cba0965.png" style="max-width: 100.0%;max-height: 100.0%;"></p><p>Car $$$2$$$ definitely overtook car $$$5$$$, while car $$$4$$$ definitely overtook cars $$$1$$$, $$$2$$$, $$$3$$$ and $$$5$$$. Cars $$$2$$$ and $$$4$$$ must be fined.</p><p>In the second example car $$$5$$$ was definitely overtaken by all other cars.</p><p>In the third example no car must be fined.</p></div>