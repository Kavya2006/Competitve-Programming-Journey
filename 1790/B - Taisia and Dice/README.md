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

<div class="header"><div class="title">B. Taisia and Dice</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Taisia has $$$n$$$ six-sided dice. Each face of the die is marked with a number from $$$1$$$ to $$$6$$$, each number from $$$1$$$ to $$$6$$$ is used once.</p><p>Taisia rolls all $$$n$$$ dice at the same time and gets a sequence of values $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 6$$$), where $$$a_i$$$ is the value on the upper face of the $$$i$$$-th dice. The sum of this sequence is equal to $$$s$$$.</p><p>Suddenly, Taisia's pet cat steals exactly <span class="tex-font-style-bf">one</span> dice with <span class="tex-font-style-bf">maximum</span> value $$$a_i$$$ and calculates the sum of the values on the remaining $$$n-1$$$ dice, which is equal to $$$r$$$.</p><p>You only know the number of dice $$$n$$$ and the values of $$$s$$$, $$$r$$$. Restore a possible sequence $$$a$$$ that fulfills the constraints.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains the integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of testcases.</p><p>Each testcase is given on a separate line and contains three integers $$$n$$$, $$$s$$$, $$$r$$$ ($$$2 \le n \le 50$$$, $$$1 \le r  \lt  s \le 300$$$).</p><p>It is guaranteed that a solution exists.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase, print: $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ in any order. It is guaranteed that such sequence exists.</p><p>If there are multiple solutions, print any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009074299921975846" id="id00003556316176319907" class="input-output-copier">Copy</div></div><pre id="id009074299921975846"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">2 2 1</div><div class="test-example-line test-example-line-even test-example-line-2">2 4 2</div><div class="test-example-line test-example-line-odd test-example-line-3">4 9 5</div><div class="test-example-line test-example-line-even test-example-line-4">5 17 11</div><div class="test-example-line test-example-line-odd test-example-line-5">3 15 10</div><div class="test-example-line test-example-line-even test-example-line-6">4 4 3</div><div class="test-example-line test-example-line-odd test-example-line-7">5 20 15</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005726371435394427" id="id0005564957685359784" class="input-output-copier">Copy</div></div><pre id="id005726371435394427">1 1
2 2 
1 2 2 4
6 4 2 3 2
5 5 5
1 1 1 1
1 4 5 5 5
</pre></div></div></div>