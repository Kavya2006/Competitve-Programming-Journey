<h2><a href="https://codeforces.com/contest/1780/problem/A" target="_blank" rel="noopener noreferrer">1780A — Hayato and School</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1780A](https://codeforces.com/contest/1780/problem/A) |

## Topics
`constructive algorithms` `greedy`

---

## Problem Statement

<div class="header"><div class="title">A. Hayato and School</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Today Hayato came home from school with homework.</p><p>In the assignment, Hayato was given an array $$$a$$$ of length $$$n$$$. The task was to find $$$3$$$ numbers in this array whose sum is <span class="tex-font-style-bf">odd</span>. At school, he claimed that there are such $$$3$$$ numbers, but Hayato was not sure, so he asked you for help.</p><p>Answer if there are such three numbers, and if so, output indices $$$i$$$, $$$j$$$, and $$$k$$$ such that $$$a_i + a_j + a_k$$$ is odd.</p><p>The odd numbers are integers that are not divisible by $$$2$$$: $$$1$$$, $$$3$$$, $$$5$$$, and so on.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>For each test case, the first line contains one integer $$$n$$$ ($$$3 \le n \le 300$$$) — the length of $$$a$$$.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 10^5$$$) — the array $$$a$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2\cdot10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, in the first line print one word "<span class="tex-font-style-tt">YES</span>" (without quotes) if there are $$$3$$$ numbers with an odd sum or "<span class="tex-font-style-tt">NO</span>" (without quotes) if there are no such $$$3$$$ numbers.</p><p>If the answer exists, then on the second line print $$$3$$$ distinct integers $$$i, j, k$$$ ($$$1 \le i, j, k \le n$$$) — the indices of the numbers. If there are several answers, output any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0044864769270037475" id="id0043537083198467263" class="input-output-copier">Copy</div></div><pre id="id0044864769270037475"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">3</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1 1</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-even test-example-line-2">1 1 2 2</div><div class="test-example-line test-example-line-odd test-example-line-3">3</div><div class="test-example-line test-example-line-odd test-example-line-3">1 2 3</div><div class="test-example-line test-example-line-even test-example-line-4">5</div><div class="test-example-line test-example-line-even test-example-line-4">1 4 5 1 2</div><div class="test-example-line test-example-line-odd test-example-line-5">4</div><div class="test-example-line test-example-line-odd test-example-line-5">2 6 2 4</div><div class="test-example-line test-example-line-even test-example-line-6">5</div><div class="test-example-line test-example-line-even test-example-line-6">5 6 3 2 1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005391720028951923" id="id002416798941049616" class="input-output-copier">Copy</div></div><pre id="id005391720028951923">YES
1 2 3
YES
3 4 1
NO
YES
1 3 4
NO
YES
1 3 5
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, there is one way to choose $$$3$$$ numbers, and since $$$1 + 1 + 1 = 3$$$, this triple is fine for us.</p><p>In the second test case, you need to choose the numbers $$$1, 2, 2$$$, since $$$1 + 2 + 2 = 5$$$.</p><p>In the third test case, there is one way to choose three numbers, but $$$1 + 2 + 3 = 6$$$ is an even number, so the required triple does not exist.</p><p>In the fifth test case, no matter what three numbers we choose, their sum is even.</p></div>