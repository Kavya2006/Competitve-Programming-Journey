<h2><a href="https://codeforces.com/contest/1206/problem/B" target="_blank" rel="noopener noreferrer">1206B — Make Product Equal One</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1206B](https://codeforces.com/contest/1206/problem/B) |

## Topics
`dp` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Make Product Equal One</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given $$$n$$$ numbers $$$a_1, a_2, \dots, a_n$$$. With a cost of one coin you can perform the following operation:</p><p>Choose one of these numbers and add or subtract $$$1$$$ from it.</p><p>In particular, we can apply this operation to the same number several times.</p><p>We want to make the product of all these numbers equal to $$$1$$$, in other words, we want $$$a_1 \cdot a_2$$$ $$$\dots$$$ $$$\cdot a_n = 1$$$. </p><p>For example, for $$$n = 3$$$ and numbers $$$[1, -3, 0]$$$ we can make product equal to $$$1$$$ in $$$3$$$ coins: add $$$1$$$ to second element, add $$$1$$$ to second element again, subtract $$$1$$$ from third element, so that array becomes $$$[1, -1, -1]$$$. And $$$1\cdot (-1) \cdot (-1) = 1$$$.</p><p>What is the minimum cost we will have to pay to do that?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$1 \le n \le 10^5$$$) — the number of numbers.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$-10^9 \le a_i \le 10^9$$$) — the numbers.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output a single number — the minimal number of coins you need to pay to make the product equal to $$$1$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004035371464505243" id="id009284174446301867" class="input-output-copier">Copy</div></div><pre id="id004035371464505243">2
-1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0018631701517012167" id="id008574706793326451" class="input-output-copier">Copy</div></div><pre id="id0018631701517012167">2</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00017800378965739716" id="id007984917621928646" class="input-output-copier">Copy</div></div><pre id="id00017800378965739716">4
0 0 0 0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009699966825818535" id="id0026919234870366393" class="input-output-copier">Copy</div></div><pre id="id009699966825818535">4</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0016994543322888456" id="id0041110044919675437" class="input-output-copier">Copy</div></div><pre id="id0016994543322888456">5
-5 -3 5 3 0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003585352739019132" id="id009829141117054063" class="input-output-copier">Copy</div></div><pre id="id003585352739019132">13</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, you can change $$$1$$$ to $$$-1$$$ or $$$-1$$$ to $$$1$$$ in $$$2$$$ coins.</p><p>In the second example, you have to apply at least $$$4$$$ operations for the product not to be $$$0$$$.</p><p>In the third example, you can change $$$-5$$$ to $$$-1$$$ in $$$4$$$ coins, $$$-3$$$ to $$$-1$$$ in $$$2$$$ coins, $$$5$$$ to $$$1$$$ in $$$4$$$ coins, $$$3$$$ to $$$1$$$ in $$$2$$$ coins, $$$0$$$ to $$$1$$$ in $$$1$$$ coin.</p></div>