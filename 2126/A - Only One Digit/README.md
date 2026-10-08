<h2><a href="https://codeforces.com/contest/2126/problem/A" target="_blank" rel="noopener noreferrer">2126A — Only One Digit</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2126A](https://codeforces.com/contest/2126/problem/A) |

## Topics
`brute force` `implementation` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Only One Digit</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given an integer $$$x$$$. You need to find the smallest non-negative integer $$$y$$$ such that the numbers $$$x$$$ and $$$y$$$ share at least one common digit. In other words, there must exist a decimal digit $$$d$$$ that appears in both the representation of the number $$$x$$$ and the number $$$y$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases.</p><p>The first line of each test case contains one integer $$$x$$$ ($$$1 \le x \le 1000$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output one integer $$$y$$$ — the minimum non-negative number that satisfies the condition.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0015424025011312725" id="id00001647603077864157" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0015424025011312725"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">6</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">96</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">78</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">122</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">696</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id008512610476646433" id="id0001827254344579332" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id008512610476646433">6
6
7
1
6
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, the numbers $$$6$$$ and $$$6$$$ share the common digit '<span class="tex-font-style-tt">6</span>'. Moreover, there is no natural number smaller than this that shares a common digit.</p><p>In the second test case, the numbers $$$6$$$ and $$$96$$$ share the common digit '<span class="tex-font-style-tt">6</span>'.</p></div>