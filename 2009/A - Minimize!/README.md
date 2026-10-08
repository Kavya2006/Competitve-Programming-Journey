<h2><a href="https://codeforces.com/contest/2009/problem/A" target="_blank" rel="noopener noreferrer">2009A — Minimize!</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2009A](https://codeforces.com/contest/2009/problem/A) |

## Topics
`brute force` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Minimize!</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given two integers $$$a$$$ and $$$b$$$ ($$$a \leq b$$$). Over all possible integer values of $$$c$$$ ($$$a \leq c \leq b$$$), find the minimum value of $$$(c - a) + (b - c)$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains $$$t$$$ ($$$1 \leq t \leq 55$$$) — the number of test cases. </p><p>Each test case contains two integers $$$a$$$ and $$$b$$$ ($$$1 \leq a \leq b \leq 10$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output the minimum possible value of $$$(c - a) + (b - c)$$$ on a new line.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0015032145795791418" id="id009340734491845503" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0015032145795791418"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">3</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1 2</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">3 10</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">5 5</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id006151862984228537" id="id006924589667610708" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006151862984228537">1
7
0
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, you can choose $$$c = 1$$$ and obtain an answer of $$$(1 - 1) + (2 - 1) = 1$$$. It can be shown this is the minimum value possible.</p><p>In the second test case, you can choose $$$c = 6$$$ and obtain an answer of $$$(6 - 3) + (10 - 6) = 7$$$. It can be shown this is the minimum value possible.</p></div>