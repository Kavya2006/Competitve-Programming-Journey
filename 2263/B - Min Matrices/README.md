<h2><a href="https://codeforces.com/contest/2263/problem/B" target="_blank" rel="noopener noreferrer">2263B — Min Matrices</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2263B](https://codeforces.com/contest/2263/problem/B) |

## Topics
`constructive algorithms`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Min Matrices</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1.5 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p> </p><p>Farmer John heard from Elsie that Bessie's favorite number is $$$k$$$, so he wants to surprise her with a handcrafted present.</p><p>For a 2D matrix $$$B$$$, let $$$f(B)$$$ denote the set of the minimum element of each row and each column of $$$B$$$.</p><p>Farmer John wants you to show him an $$$n \times n$$$ matrix $$$A$$$ consisting of each number from $$$1$$$ to $$$n^2$$$ exactly once such that $$$|f(A)| = k$$$, or state that it is impossible.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 1000$$$). The description of the test cases follows.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le n \le 1000, 0 \le k \le 2n$$$) — the size of the matrix and the goal value of $$$|f(A)|$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$1000$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>If there is no such matrix, print $$$-1$$$. Otherwise, print $$$n$$$ lines with $$$n$$$ integers each — an $$$n \times n$$$ matrix that satisfies the conditions of the problem.</p><p>If there are multiple solutions, you may output any of them.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id006648132576955232" id="id00455419787679445" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006648132576955232"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">3 0</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">3 5</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">5 5</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">4 3</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">1 1</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id006026229845545873" id="id003386767627991206" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006026229845545873">-1
8 5 9
6 3 7
2 1 4
16 14 17 15 3
25 22 5 23 24
8 1 9 6 7
4 18 21 19 20
12 10 13 2 11
-1
1 </pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, we can see that it is impossible to construct such a $$$3 \times 3$$$ matrix where $$$f(A)$$$ is empty.</p><p>In the second test case, we can see the minimums of the rows are $$$[5, 3, 1]$$$ respectively, and the minimums of the columns are $$$[2, 1, 4]$$$ respectively. Therefore, $$$f(A) = \{1, 2, 3, 4, 5\}$$$, so $$$|f(A)| = 5$$$ as desired.</p></div>