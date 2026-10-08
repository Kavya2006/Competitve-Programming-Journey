<h2><a href="https://codeforces.com/contest/1409/problem/A" target="_blank" rel="noopener noreferrer">1409A — Yet Another Two Integers Problem</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1409A](https://codeforces.com/contest/1409/problem/A) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Yet Another Two Integers Problem</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given two integers $$$a$$$ and $$$b$$$.</p><p>In one move, you can choose some <span class="tex-font-style-bf">integer</span> $$$k$$$ from $$$1$$$ to $$$10$$$ and add it to $$$a$$$ or subtract it from $$$a$$$. In other words, you choose an integer $$$k \in [1; 10]$$$ and perform $$$a := a + k$$$ or $$$a := a - k$$$. You may use <span class="tex-font-style-bf">different</span> values of $$$k$$$ in different moves.</p><p>Your task is to find the <span class="tex-font-style-bf">minimum</span> number of moves required to obtain $$$b$$$ from $$$a$$$.</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 2 \cdot 10^4$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The only line of the test case contains two integers $$$a$$$ and $$$b$$$ ($$$1 \le a, b \le 10^9$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print the answer: the minimum number of moves required to obtain $$$b$$$ from $$$a$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id003455021820544628" id="id0018652134223222094" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id003455021820544628">6
5 5
13 42
18 4
1337 420
123456789 1000000000
100500 9000
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009745734077936183" id="id003371519086574567" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009745734077936183">0
3
2
92
87654322
9150
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case of the example, you don't need to do anything.</p><p>In the second test case of the example, the following sequence of moves can be applied: $$$13 \rightarrow 23 \rightarrow 32 \rightarrow 42$$$ (add $$$10$$$, add $$$9$$$, add $$$10$$$).</p><p>In the third test case of the example, the following sequence of moves can be applied: $$$18 \rightarrow 10 \rightarrow 4$$$ (subtract $$$8$$$, subtract $$$6$$$).</p></div>