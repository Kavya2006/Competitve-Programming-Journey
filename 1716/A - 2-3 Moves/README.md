<h2><a href="https://codeforces.com/contest/1716/problem/A" target="_blank" rel="noopener noreferrer">1716A — 2-3 Moves</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1716A](https://codeforces.com/contest/1716/problem/A) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. 2-3 Moves</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are standing at the point $$$0$$$ on a coordinate line. Your goal is to reach the point $$$n$$$. In one minute, you can move by $$$2$$$ or by $$$3$$$ to the left or to the right (i. e., if your current coordinate is $$$x$$$, it can become $$$x-3$$$, $$$x-2$$$, $$$x+2$$$ or $$$x+3$$$). Note that the new coordinate can become negative.</p><p>Your task is to find the <span class="tex-font-style-bf">minimum</span> number of minutes required to get from the point $$$0$$$ to the point $$$n$$$.</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. Then $$$t$$$ lines describing the test cases follow.</p><p>The $$$i$$$-th of these lines contains one integer $$$n$$$ ($$$1 \le n \le 10^9$$$) — the goal of the $$$i$$$-th test case.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print one integer — the <span class="tex-font-style-bf">minimum</span> number of minutes required to get from the point $$$0$$$ to the point $$$n$$$ for the corresponding test case.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id009463314415314302" id="id008542130014554258" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009463314415314302"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">4</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">3</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">4</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">12</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0040923698482547666" id="id006015183288897332" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0040923698482547666">2
1
2
4
</pre></div></div></div>