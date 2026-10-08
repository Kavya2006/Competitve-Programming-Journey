<h2><a href="https://codeforces.com/contest/1926/problem/C" target="_blank" rel="noopener noreferrer">1926C — Vlad and a Sum of Sum of Digits</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1926C](https://codeforces.com/contest/1926/problem/C) |

## Topics
`dp` `implementation`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C. Vlad and a Sum of Sum of Digits</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>0.5 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p><span class="tex-font-style-it"><span class="tex-font-style-bf">Please note that the time limit for this problem is only 0.5 seconds per test.</span></span></p><p>Vladislav wrote the integers from $$$1$$$ to $$$n$$$, inclusive, on the board. Then he replaced each integer with the sum of its digits.</p><p>What is the sum of the numbers on the board now?</p><p>For example, if $$$n=12$$$ then initially the numbers on the board are: $$$$$$1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12.$$$$$$ Then after the replacement, the numbers become: $$$$$$1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3.$$$$$$ The sum of these numbers is $$$1+2+3+4+5+6+7+8+9+1+2+3=51$$$. Thus, for $$$n=12$$$ the answer is $$$51$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases.</p><p>The only line of each test case contains a single integer $$$n$$$ ($$$1 \leq n \leq 2 \cdot 10^5$$$) — the largest number Vladislav writes.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output a single integer — the sum of the numbers at the end of the process.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id007540708127140404" id="id0034743651673673637" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007540708127140404"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">7</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">12</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">1</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">2</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">3</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">1434</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">2024</div><div class="test-example-line test-example-line-odd test-example-line-7" bis_skin_checked="1">200000</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id00018232456191694113" id="id009228864046555909" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00018232456191694113">51
1
3
6
18465
28170
4600002
</pre></div></div></div>