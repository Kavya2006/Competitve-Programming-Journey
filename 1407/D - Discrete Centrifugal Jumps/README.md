<h2><a href="https://codeforces.com/contest/1407/problem/D" target="_blank" rel="noopener noreferrer">1407D — Discrete Centrifugal Jumps</a></h2>

| | |
|---|---|
| **Difficulty** | 2200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1407D](https://codeforces.com/contest/1407/problem/D) |

## Topics
`data structures` `dp` `graphs`

---

## Problem Statement

<div class="header"><div class="title">D. Discrete Centrifugal Jumps</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There are $$$n$$$ beautiful skyscrapers in New York, the height of the $$$i$$$-th one is $$$h_i$$$. Today some villains have set on fire first $$$n - 1$$$ of them, and now the only safety building is $$$n$$$-th skyscraper.</p><p>Let's call a jump from $$$i$$$-th skyscraper to $$$j$$$-th ($$$i  \lt  j$$$) <span class="tex-font-style-bf">discrete</span>, if all skyscrapers between are strictly lower or higher than both of them. Formally, jump is discrete, if $$$i  \lt  j$$$ and one of the following conditions satisfied: </p><ul> <li> $$$i + 1 = j$$$ </li><li> $$$\max(h_{i + 1}, \ldots, h_{j - 1})  \lt  \min(h_i, h_j)$$$ </li><li> $$$\max(h_i, h_j)  \lt  \min(h_{i + 1}, \ldots, h_{j - 1})$$$. </li></ul><p>At the moment, Vasya is staying on the first skyscraper and wants to live a little longer, so his goal is to reach $$$n$$$-th skyscraper with minimal count of discrete jumps. Help him with calcualting this number.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$2 \le n \le 3 \cdot 10^5$$$) — total amount of skyscrapers.</p><p>The second line contains $$$n$$$ integers $$$h_1, h_2, \ldots, h_n$$$ ($$$1 \le h_i \le 10^9$$$) — heights of skyscrapers.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print single number $$$k$$$ — minimal amount of discrete jumps. We can show that an answer always exists.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002327728065260516" id="id0006757924649373226" class="input-output-copier">Copy</div></div><pre id="id002327728065260516">5
1 3 1 4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008608460388012231" id="id005832062728103924" class="input-output-copier">Copy</div></div><pre id="id008608460388012231">3</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008021867333120551" id="id00868109206803774" class="input-output-copier">Copy</div></div><pre id="id008021867333120551">4
4 2 2 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004220728749832321" id="id007924847319054711" class="input-output-copier">Copy</div></div><pre id="id004220728749832321">1</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006354842427601665" id="id006461632748318478" class="input-output-copier">Copy</div></div><pre id="id006354842427601665">2
1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00706233778063236" id="id006061064656117042" class="input-output-copier">Copy</div></div><pre id="id00706233778063236">1</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0031881730013999077" id="id008808940904814766" class="input-output-copier">Copy</div></div><pre id="id0031881730013999077">5
100 1 100 1 100
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009411100864835636" id="id0017938621895881957" class="input-output-copier">Copy</div></div><pre id="id009411100864835636">2</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first testcase, Vasya can jump in the following way: $$$1 \rightarrow 2 \rightarrow 4 \rightarrow 5$$$.</p><p>In the second and third testcases, we can reach last skyscraper in one jump.</p><p>Sequence of jumps in the fourth testcase: $$$1 \rightarrow 3 \rightarrow 5$$$.</p></div>