<h2><a href="https://codeforces.com/contest/1081/problem/A" target="_blank" rel="noopener noreferrer">1081A — Definite Game</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1081A](https://codeforces.com/contest/1081/problem/A) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Definite Game</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Chouti was doing a competitive programming competition. However, after having all the problems accepted, he got bored and decided to invent some small games.</p><p>He came up with the following game. The player has a positive integer $$$n$$$. Initially the value of $$$n$$$ equals to $$$v$$$ and the player is able to do the following operation as many times as the player want (possibly zero): choose a positive integer $$$x$$$ that $$$x \lt n$$$ and $$$x$$$ is not a divisor of $$$n$$$, then subtract $$$x$$$ from $$$n$$$. The goal of the player is to minimize the value of $$$n$$$ in the end.</p><p>Soon, Chouti found the game trivial. Can you also beat the game?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input contains only one integer in the first line: $$$v$$$ ($$$1 \le v \le 10^9$$$), the initial value of $$$n$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output a single integer, the minimum value of $$$n$$$ the player can get.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0044981284302721347" id="id008211423179113652" class="input-output-copier">Copy</div></div><pre id="id0044981284302721347">8
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007718986747678968" id="id007980402101756516" class="input-output-copier">Copy</div></div><pre id="id007718986747678968">1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007953662511788808" id="id006224307268692268" class="input-output-copier">Copy</div></div><pre id="id007953662511788808">1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0013559945626960446" id="id009076611795456506" class="input-output-copier">Copy</div></div><pre id="id0013559945626960446">1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the player can choose $$$x=3$$$ in the first turn, then $$$n$$$ becomes $$$5$$$. He can then choose $$$x=4$$$ in the second turn to get $$$n=1$$$ as the result. There are other ways to get this minimum. However, for example, he cannot choose $$$x=2$$$ in the first turn because $$$2$$$ is a divisor of $$$8$$$.</p><p>In the second example, since $$$n=1$$$ initially, the player can do nothing.</p></div>