<h2><a href="https://codeforces.com/contest/1999/problem/E" target="_blank" rel="noopener noreferrer">1999E — Triple Operations</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1999E](https://codeforces.com/contest/1999/problem/E) |

## Topics
`dp` `implementation` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">E. Triple Operations</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>On the board Ivy wrote down all integers from $$$l$$$ to $$$r$$$, inclusive.</p><p>In an operation, she does the following: </p><ul> <li> pick two numbers $$$x$$$ and $$$y$$$ on the board, erase them, and in their place write the numbers $$$3x$$$ and $$$\lfloor \frac{y}{3} \rfloor$$$. (Here $$$\lfloor \bullet \rfloor$$$ denotes rounding down to the nearest integer).</li></ul> <p>What is the minimum number of operations Ivy needs to make all numbers on the board equal $$$0$$$? We have a proof that this is always possible.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases.</p><p>The only line of each test case contains two integers $$$l$$$ and $$$r$$$ ($$$1 \leq l  \lt  r \leq 2 \cdot 10^5$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output a single integer — the minimum number of operations needed to make all numbers on the board equal $$$0$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id003221700008877524" id="id0010472896834132339" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id003221700008877524"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">4</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1 3</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">2 4</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">199999 200000</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">19 84</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id005202401717067663" id="id0017717809556331054" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005202401717067663">5
6
36
263
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, we can perform $$$5$$$ operations as follows: $$$$$$ 1,2,3 \xrightarrow[x=1,\,y=2]{} 3,0,3 \xrightarrow[x=0,\,y=3]{} 1,0,3 \xrightarrow[x=0,\,y=3]{} 1,0,1 \xrightarrow[x=0,\,y=1]{} 0,0,1 \xrightarrow[x=0,\,y=1]{} 0,0,0 .$$$$$$</p></div>