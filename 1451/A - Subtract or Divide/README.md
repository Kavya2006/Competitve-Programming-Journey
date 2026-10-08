<h2><a href="https://codeforces.com/contest/1451/problem/A" target="_blank" rel="noopener noreferrer">1451A — Subtract or Divide</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1451A](https://codeforces.com/contest/1451/problem/A) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Subtract or Divide</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Ridbit starts with an integer $$$n$$$.</p><p>In one move, he can perform one of the following operations: </p><ul> <li> divide $$$n$$$ by one of its <span class="tex-font-style-bf">proper</span> divisors, or </li><li> subtract $$$1$$$ from $$$n$$$ if $$$n$$$ is greater than $$$1$$$. </li></ul><p>A proper divisor is a divisor of a number, excluding itself. For example, $$$1$$$, $$$2$$$, $$$4$$$, $$$5$$$, and $$$10$$$ are proper divisors of $$$20$$$, but $$$20$$$ itself is not.</p><p>What is the minimum number of moves Ridbit is required to make to reduce $$$n$$$ to $$$1$$$?</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 1000$$$) — the number of test cases.</p><p>The only line of each test case contains a single integer $$$n$$$ ($$$1 \leq n \leq 10^9$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output the minimum number of moves required to reduce $$$n$$$ to $$$1$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id006889892030818846" id="id007699493371098569" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006889892030818846">6
1
2
3
4
6
9
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007324847662950722" id="id0039142236782308004" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007324847662950722">0
1
2
2
2
3
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>For the test cases in the example, $$$n$$$ may be reduced to $$$1$$$ using the following operations in sequence</p><p>$$$1$$$</p><p>$$$2 \xrightarrow{} 1$$$</p><p>$$$3 \xrightarrow{} 2 \xrightarrow{} 1$$$</p><p>$$$4 \xrightarrow{} 2 \xrightarrow{} 1$$$</p><p>$$$6 \xrightarrow{} 2 \xrightarrow{} 1$$$</p><p>$$$9 \xrightarrow{} 3 \xrightarrow{} 2\xrightarrow{} 1$$$</p></div>