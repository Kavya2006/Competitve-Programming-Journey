<h2><a href="https://codeforces.com/contest/1180/problem/A" target="_blank" rel="noopener noreferrer">1180A — Alex and a Rhombus</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1180A](https://codeforces.com/contest/1180/problem/A) |

## Topics
`dp` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Alex and a Rhombus</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>While playing with geometric figures Alex has accidentally invented a concept of a <span class="tex-font-style-it">$$$n$$$-th order rhombus</span> in a cell grid.</p><p><span class="tex-font-style-it">A $$$1$$$-st order rhombus</span> is just a square $$$1 \times 1$$$ (i.e just a cell).</p><p><span class="tex-font-style-it">A $$$n$$$-th order rhombus</span> for all $$$n \geq 2$$$ one obtains from a <span class="tex-font-style-it">$$$n-1$$$-th order rhombus</span> adding all cells which have a common side with it to it (look at the picture to understand it better).</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/04838f89e3ba4417233b759ab6a63cc887d5a15e.png" style="max-width: 100.0%;max-height: 100.0%;">   </center><p>Alex asks you to compute the number of cells in a <span class="tex-font-style-it">$$$n$$$-th order rhombus</span>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first and only input line contains integer $$$n$$$ ($$$1 \leq n \leq 100$$$) — order of a rhombus whose numbers of cells should be computed.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print exactly one integer — the number of cells in a <span class="tex-font-style-it">$$$n$$$-th order rhombus</span>.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007114604195615885" id="id0037478803319190535" class="input-output-copier">Copy</div></div><pre id="id007114604195615885">1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0010138375317121306" id="id004990352717009594" class="input-output-copier">Copy</div></div><pre id="id0010138375317121306">1</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007040947312841369" id="id0026989341499428143" class="input-output-copier">Copy</div></div><pre id="id007040947312841369">2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00781982454689275" id="id008549015930568262" class="input-output-copier">Copy</div></div><pre id="id00781982454689275">5</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007175119691747908" id="id005790040761436226" class="input-output-copier">Copy</div></div><pre id="id007175119691747908">3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0036264771209299707" id="id0024772069950697584" class="input-output-copier">Copy</div></div><pre id="id0036264771209299707">13</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Images of rhombus corresponding to the examples are given in the statement.</p></div>