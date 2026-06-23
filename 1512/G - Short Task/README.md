<h2><a href="https://codeforces.com/contest/1512/problem/G" target="_blank" rel="noopener noreferrer">1512G — Short Task</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1512G](https://codeforces.com/contest/1512/problem/G) |

## Topics
`brute force` `dp` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">G. Short Task</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let us denote by $$$d(n)$$$ the sum of all divisors of the number $$$n$$$, i.e. $$$d(n) = \sum\limits_{k | n} k$$$.</p><p>For example, $$$d(1) = 1$$$, $$$d(4) = 1+2+4=7$$$, $$$d(6) = 1+2+3+6=12$$$.</p><p>For a given number $$$c$$$, find the minimum $$$n$$$ such that $$$d(n) = c$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$). Then $$$t$$$ test cases follow.</p><p>Each test case is characterized by one integer $$$c$$$ ($$$1 \le c \le 10^7$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output: </p><ul> <li> "<span class="tex-font-style-tt">-1</span>" if there is no such $$$n$$$ that $$$d(n) = c$$$; </li><li> $$$n$$$, otherwise. </li></ul></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006622266467356657" id="id005933316734602609" class="input-output-copier">Copy</div></div><pre id="id006622266467356657">12
1
2
3
4
5
6
7
8
9
10
39
691
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009548773756508008" id="id009776330714964007" class="input-output-copier">Copy</div></div><pre id="id009548773756508008">1
-1
2
3
-1
5
4
7
-1
-1
18
-1
</pre></div></div></div>