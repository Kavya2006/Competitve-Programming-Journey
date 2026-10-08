<h2><a href="https://codeforces.com/contest/1845/problem/A" target="_blank" rel="noopener noreferrer">1845A — Forbidden Integer</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1845A](https://codeforces.com/contest/1845/problem/A) |

## Topics
`constructive algorithms` `implementation` `math` `number theory`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Forbidden Integer</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given an integer $$$n$$$, which you want to obtain. You have an unlimited supply of every integer from $$$1$$$ to $$$k$$$, except integer $$$x$$$ (there are no integer $$$x$$$ at all).</p><p>You are allowed to take an arbitrary amount of each of these integers (possibly, zero). Can you make the sum of taken integers equal to $$$n$$$?</p><p>If there are multiple answers, print any of them.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of testcases.</p><p>The only line of each testcase contains three integers $$$n, k$$$ and $$$x$$$ ($$$1 \le x \le k \le n \le 100$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, in the first line, print "<span class="tex-font-style-tt">YES</span>" or "<span class="tex-font-style-tt">NO</span>" — whether you can take an arbitrary amount of each integer from $$$1$$$ to $$$k$$$, except integer $$$x$$$, so that their sum is equal to $$$n$$$.</p><p>If you can, the second line should contain a single integer $$$m$$$ — the total amount of taken integers. The third line should contain $$$m$$$ integers — each of them from $$$1$$$ to $$$k$$$, not equal to $$$x$$$, and their sum is $$$n$$$.</p><p>If there are multiple answers, print any of them.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id005718005266677347" id="id0046626979779693367" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005718005266677347"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">10 3 2</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">5 2 1</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">4 2 1</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">7 7 3</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">6 1 1</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id004835793521878251" id="id004619624899859418" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004835793521878251">YES
6
3 1 1 1 1 3
NO
YES
2
2 2
YES
1
7
NO
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>Another possible answer for the first testcase is $$$[3, 3, 3, 1]$$$. Note that you don't have to minimize the amount of taken integers. There also exist other answers.</p><p>In the second testcase, you only have an unlimited supply of integer $$$2$$$. There is no way to get sum $$$5$$$ using only them.</p><p>In the fifth testcase, there are no integers available at all, so you can't get any positive sum.</p></div>