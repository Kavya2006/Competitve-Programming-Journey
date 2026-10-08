<h2><a href="https://codeforces.com/contest/1915/problem/A" target="_blank" rel="noopener noreferrer">1915A — Odd One Out</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1915A](https://codeforces.com/contest/1915/problem/A) |

## Topics
`bitmasks` `implementation`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Odd One Out</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given three digits $$$a$$$, $$$b$$$, $$$c$$$. Two of them are equal, but the third one is different from the other two. </p><p>Find the value that occurs exactly once.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 270$$$) — the number of test cases.</p><p>The only line of each test case contains three digits $$$a$$$, $$$b$$$, $$$c$$$ ($$$0 \leq a$$$, $$$b$$$, $$$c \leq 9$$$). Two of the digits are equal, but the third one is different from the other two.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output the value that occurs exactly once.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id008402308480400212" id="id0007629104536193188" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id008402308480400212"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">10</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1 2 2</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">4 3 4</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">5 5 6</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">7 8 8</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">9 0 9</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">3 6 3</div><div class="test-example-line test-example-line-odd test-example-line-7" bis_skin_checked="1">2 8 2</div><div class="test-example-line test-example-line-even test-example-line-8" bis_skin_checked="1">5 7 7</div><div class="test-example-line test-example-line-odd test-example-line-9" bis_skin_checked="1">7 7 5</div><div class="test-example-line test-example-line-even test-example-line-10" bis_skin_checked="1">5 7 5</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0041834407736383006" id="id0036315883010343464" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0041834407736383006">1
3
6
7
0
6
8
5
5
7
</pre></div></div></div>