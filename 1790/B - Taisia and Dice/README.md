<h2><a href="https://codeforces.com/contest/1790/problem/B" target="_blank" rel="noopener noreferrer">1790B — Taisia and Dice</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1790B](https://codeforces.com/contest/1790/problem/B) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Taisia and Dice</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Taisia has $$$n$$$ six-sided dice. Each face of the die is marked with a number from $$$1$$$ to $$$6$$$, each number from $$$1$$$ to $$$6$$$ is used once.</p><p>Taisia rolls all $$$n$$$ dice at the same time and gets a sequence of values $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 6$$$), where $$$a_i$$$ is the value on the upper face of the $$$i$$$-th dice. The sum of this sequence is equal to $$$s$$$.</p><p>Suddenly, Taisia's pet cat steals exactly <span class="tex-font-style-bf">one</span> dice with <span class="tex-font-style-bf">maximum</span> value $$$a_i$$$ and calculates the sum of the values on the remaining $$$n-1$$$ dice, which is equal to $$$r$$$.</p><p>You only know the number of dice $$$n$$$ and the values of $$$s$$$, $$$r$$$. Restore a possible sequence $$$a$$$ that fulfills the constraints.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains the integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of testcases.</p><p>Each testcase is given on a separate line and contains three integers $$$n$$$, $$$s$$$, $$$r$$$ ($$$2 \le n \le 50$$$, $$$1 \le r  \lt  s \le 300$$$).</p><p>It is guaranteed that a solution exists.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each testcase, print: $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ in any order. It is guaranteed that such sequence exists.</p><p>If there are multiple solutions, print any.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0068427308577559" id="id009797742334787093" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0068427308577559"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">7</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">2 2 1</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">2 4 2</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">4 9 5</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">5 17 11</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">3 15 10</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">4 4 3</div><div class="test-example-line test-example-line-odd test-example-line-7" bis_skin_checked="1">5 20 15</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id006445038977574358" id="id006369062882723656" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006445038977574358">1 1
2 2 
1 2 2 4
6 4 2 3 2
5 5 5
1 1 1 1
1 4 5 5 5
</pre></div></div></div>