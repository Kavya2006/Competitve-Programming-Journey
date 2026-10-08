<h2><a href="https://codeforces.com/contest/1986/problem/A" target="_blank" rel="noopener noreferrer">1986A — X Axis</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1986A](https://codeforces.com/contest/1986/problem/A) |

## Topics
`brute force` `geometry` `math` `sortings`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. X Axis</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given three points with integer coordinates $$$x_1$$$, $$$x_2$$$, and $$$x_3$$$ on the $$$X$$$ axis ($$$1 \leq x_i \leq 10$$$). You can choose any point with an integer coordinate $$$a$$$ on the $$$X$$$ axis. Note that the point $$$a$$$ may coincide with $$$x_1$$$, $$$x_2$$$, or $$$x_3$$$. Let $$$f(a)$$$ be the total distance from the given points to the point $$$a$$$. Find the smallest value of $$$f(a)$$$.</p><p>The distance between points $$$a$$$ and $$$b$$$ is equal to $$$|a - b|$$$. For example, the distance between points $$$a = 5$$$ and $$$b = 2$$$ is $$$3$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>Each test consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^3$$$) — the number of test cases. Then follows their descriptions.</p><p>The single line of each test case contains three integers $$$x_1$$$, $$$x_2$$$, and $$$x_3$$$ ($$$1 \leq x_i \leq 10$$$) — the coordinates of the points.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output the smallest value of $$$f(a)$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id006330315181574644" id="id005558935137228486" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006330315181574644"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">8</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1 1 1</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">1 5 9</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">8 2 8</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">10 9 3</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">2 1 1</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">2 4 1</div><div class="test-example-line test-example-line-odd test-example-line-7" bis_skin_checked="1">7 3 5</div><div class="test-example-line test-example-line-even test-example-line-8" bis_skin_checked="1">1 9 4</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0067937141287149" id="id008314795380361669" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0067937141287149">0
8
6
7
1
3
4
8
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, the smallest value of $$$f(a)$$$ is achieved when $$$a = 1$$$: $$$f(1) = |1 - 1| + |1 - 1| + |1 - 1| = 0$$$.</p><p>In the second test case, the smallest value of $$$f(a)$$$ is achieved when $$$a = 5$$$: $$$f(5) = |1 - 5| + |5 - 5| + |9 - 5| = 8$$$.</p><p>In the third test case, the smallest value of $$$f(a)$$$ is achieved when $$$a = 8$$$: $$$f(8) = |8 - 8| + |2 - 8| + |8 - 8| = 6$$$.</p><p>In the fourth test case, the smallest value of $$$f(a)$$$ is achieved when $$$a = 9$$$: $$$f(10) = |10 - 9| + |9 - 9| + |3 - 9| = 7$$$.</p></div>