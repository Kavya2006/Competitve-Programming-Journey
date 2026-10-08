<h2><a href="https://codeforces.com/contest/2148/problem/A" target="_blank" rel="noopener noreferrer">2148A — Sublime Sequence</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2148A](https://codeforces.com/contest/2148/problem/A) |

## Topics
`brute force` `hashing` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Sublime Sequence</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Farmer John has an integer $$$x$$$. He creates a sequence of length $$$n$$$ by alternating integers $$$x$$$ and $$$-x$$$, starting with $$$x$$$. </p><p>For example, if $$$n = 5$$$, the sequence looks like: $$$x, -x, x, -x, x$$$.</p><p>He asks you to find the sum of all integers in the sequence.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 100$$$)  — the number of test cases.</p><p>The only line of input for each test case is two integers $$$x$$$ and $$$n$$$ ($$$1 \leq x, n \leq 10$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output the sum of all integers in the sequence.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id004941687862699905" id="id0007628366641589446" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004941687862699905"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">4</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1 4</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">2 5</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">3 6</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">4 7</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0044493582646278407" id="id0007865652857779482" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0044493582646278407">0
2
0
4
</pre></div></div></div>