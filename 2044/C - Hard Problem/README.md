<h2><a href="https://codeforces.com/contest/2044/problem/C" target="_blank" rel="noopener noreferrer">2044C — Hard Problem</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2044C](https://codeforces.com/contest/2044/problem/C) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C. Hard Problem</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Ball is the teacher in Paperfold University. The seats of his classroom are arranged in $$$2$$$ rows with $$$m$$$ seats each.</p><p>Ball is teaching $$$a + b + c$$$ monkeys, and he wants to assign as many monkeys to a seat as possible. Ball knows that $$$a$$$ of them only want to sit in row $$$1$$$, $$$b$$$ of them only want to sit in row $$$2$$$, and $$$c$$$ of them have no preference. Only one monkey may sit in each seat, and each monkey's preference must be followed if it is seated.</p><p>What is the maximum number of monkeys that Ball can seat?</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases.</p><p>Each test case contains four integers $$$m$$$, $$$a$$$, $$$b$$$, and $$$c$$$ ($$$1 \leq m, a, b, c \leq 10^8$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output the maximum number of monkeys you can seat.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id007086338701292725" id="id009045573190339045" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007086338701292725"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">10 5 5 10</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">3 6 1 1</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">15 14 12 4</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">1 1 1 1</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">420 6 9 69</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id004478574435901561" id="id007671414988323569" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004478574435901561">20
5
30
2
84
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the second test case, $$$6$$$ monkeys want to sit in the front row, but only $$$3$$$ seats are available. The monkeys that have no preference and the monkeys who prefer sitting in the second row can sit in the second row together. Thus, the answer is $$$3+2=5$$$.</p></div>