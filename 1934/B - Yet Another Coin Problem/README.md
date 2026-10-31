<h2><a href="https://codeforces.com/contest/1934/problem/B" target="_blank" rel="noopener noreferrer">1934B — Yet Another Coin Problem</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1934B](https://codeforces.com/contest/1934/problem/B) |

## Topics
`brute force` `dp` `greedy` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Yet Another Coin Problem</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You have $$$5$$$ different types of coins, each with a value equal to one of the first $$$5$$$ triangular numbers: $$$1$$$, $$$3$$$, $$$6$$$, $$$10$$$, and $$$15$$$. These coin types are available in abundance. Your goal is to find the minimum number of these coins required such that their total value sums up to exactly $$$n$$$.</p><p>We can show that the answer always exists.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$1 \leq n \leq 10^9$$$) — the target value.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output a single number — the minimum number of coins required.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0038601329407311" id="id00773172377302067" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre data-content="14
1
2
3
5
7
11
12
14
16
17
18
20
98
402931328
" id="id0038601329407311"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">14</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">2</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">3</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">7</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">11</div><div class="test-example-line test-example-line-odd test-example-line-7" bis_skin_checked="1">12</div><div class="test-example-line test-example-line-even test-example-line-8" bis_skin_checked="1">14</div><div class="test-example-line test-example-line-odd test-example-line-9" bis_skin_checked="1">16</div><div class="test-example-line test-example-line-even test-example-line-10" bis_skin_checked="1">17</div><div class="test-example-line test-example-line-odd test-example-line-11" bis_skin_checked="1">18</div><div class="test-example-line test-example-line-even test-example-line-12" bis_skin_checked="1">20</div><div class="test-example-line test-example-line-odd test-example-line-13" bis_skin_checked="1">98</div><div class="test-example-line test-example-line-even test-example-line-14" bis_skin_checked="1">402931328</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id006637507674369011" id="id009168190228930682" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006637507674369011">1
2
1
3
2
2
2
3
2
3
2
2
8
26862090
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, for $$$n = 1$$$, the answer is $$$1$$$ since only one $$$1$$$ value coin is sufficient. $$$1 = 1 \cdot 1$$$.</p><p>In the fourth test case, for $$$n = 5$$$, the answer is $$$3$$$, which can be achieved using two $$$1$$$ value coins and one $$$3$$$ value coin. $$$5 = 2 \cdot 1 + 1 \cdot 3$$$.</p><p>In the seventh test case, for $$$n = 12$$$, the answer is $$$2$$$, which can be achieved using two $$$6$$$ value coins.</p><p>In the ninth test case, for $$$n = 16$$$, the answer is $$$2$$$, which can be achieved using one $$$1$$$ value coin and one $$$15$$$ value coin or using one $$$10$$$ value coin and one $$$6$$$ value coin. $$$16 = 1 \cdot 1 + 1 \cdot 15 = 1 \cdot 6 + 1 \cdot 10$$$.</p></div>