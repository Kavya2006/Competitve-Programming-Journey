<h2><a href="https://codeforces.com/contest/2044/problem/A" target="_blank" rel="noopener noreferrer">2044A — Easy Problem</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2044A](https://codeforces.com/contest/2044/problem/A) |

## Topics
`brute force` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Easy Problem</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Cube is given an integer $$$n$$$. She wants to know how many ordered pairs of positive integers $$$(a,b)$$$ there are such that $$$a=n-b$$$. Since Cube is not very good at math, please help her!</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 99$$$) — the number of test cases.</p><p>The only line of each test case contains an integer $$$n$$$ ($$$2 \leq n \leq 100$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output the number of ordered pairs $$$(a, b)$$$ on a new line.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0018154738464631426" id="id0035185737376038595" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0018154738464631426"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">3</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">2</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">4</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">6</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0007615388750062746" id="id0030418771827908775" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0007615388750062746">1
3
5
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, the only ordered pair that works is $$$(a,b)=(1,1)$$$. </p><p>In the second test case, the three ordered pairs of $$$(a,b)$$$ that work are $$$(3,1), (2,2), (1,3)$$$.</p></div>