<h2><a href="https://codeforces.com/contest/1787/problem/A" target="_blank" rel="noopener noreferrer">1787A — Exponential Equation</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1787A](https://codeforces.com/contest/1787/problem/A) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Exponential Equation</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given an integer $$$n$$$.</p><p>Find any pair of integers $$$(x,y)$$$ ($$$1\leq x,y\leq n$$$) such that $$$x^y\cdot y+y^x\cdot x = n$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1\leq t\leq 10^4$$$) — the number of test cases.</p><p>Each test case contains one line with a single integer $$$n$$$ ($$$1\leq n\leq 10^9$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, if possible, print two integers $$$x$$$ and $$$y$$$ ($$$1\leq x,y\leq n$$$). If there are multiple answers, print any.</p><p>Otherwise, print $$$-1$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0027077507054626837" id="id008472878307972792" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0027077507054626837"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">3</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">7</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">42</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">31250</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">20732790</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009669879635227681" id="id005774319171269353" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009669879635227681">-1
-1
2 3
5 5
3 13
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the third test case, $$$2^3 \cdot 3+3^2 \cdot 2 = 42$$$, so $$$(2,3),(3,2)$$$ will be considered as legal solutions.</p><p>In the fourth test case, $$$5^5 \cdot 5+5^5 \cdot 5 = 31250$$$, so $$$(5,5)$$$ is a legal solution.</p></div>