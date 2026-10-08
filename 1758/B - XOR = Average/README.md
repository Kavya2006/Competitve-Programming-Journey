<h2><a href="https://codeforces.com/contest/1758/problem/B" target="_blank" rel="noopener noreferrer">1758B — XOR = Average</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1758B](https://codeforces.com/contest/1758/problem/B) |

## Topics
`constructive algorithms`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. XOR = Average</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given an integer $$$n$$$. Find a sequence of $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ such that $$$1 \leq a_i \leq 10^9$$$ for all $$$i$$$ and $$$$$$a_1 \oplus a_2 \oplus \dots \oplus a_n = \frac{a_1 + a_2 + \dots + a_n}{n},$$$$$$ where $$$\oplus$$$ represents the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR</a>.</p><p>It can be proven that there exists a sequence of integers that satisfies all the conditions above.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of input contains $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases.</p><p>The first and only line of each test case contains one integer $$$n$$$ ($$$1 \leq n \leq 10^5$$$) — the length of the sequence you have to find.</p><p>The sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output $$$n$$$ space-separated integers $$$a_1, a_2, \dots, a_n$$$ satisfying the conditions in the statement. </p><p>If there are several possible answers, you can output any of them.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0024424186153823313" id="id008051604255109741" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0024424186153823313"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">3</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">4</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">3</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id008253307751902358" id="id0020477679694842188" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id008253307751902358">69
13 2 8 1
7 7 7
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, $$$69 = \frac{69}{1} = 69$$$.</p><p>In the second test case, $$$13 \oplus 2 \oplus 8 \oplus 1 = \frac{13 + 2 + 8 + 1}{4} = 6$$$.</p></div>