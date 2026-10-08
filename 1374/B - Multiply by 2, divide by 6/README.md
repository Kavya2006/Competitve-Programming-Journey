<h2><a href="https://codeforces.com/contest/1374/problem/B" target="_blank" rel="noopener noreferrer">1374B — Multiply by 2, divide by 6</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1374B](https://codeforces.com/contest/1374/problem/B) |

## Topics
`math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Multiply by 2, divide by 6</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given an integer $$$n$$$. In one move, you can either multiply $$$n$$$ by two or divide $$$n$$$ by $$$6$$$ (if it is divisible by $$$6$$$ without the remainder).</p><p>Your task is to find the minimum number of moves needed to obtain $$$1$$$ from $$$n$$$ or determine if it's impossible to do that.</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 2 \cdot 10^4$$$) — the number of test cases. Then $$$t$$$ test cases follow. </p><p>The only line of the test case contains one integer $$$n$$$ ($$$1 \le n \le 10^9$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print the answer — the minimum number of moves needed to obtain $$$1$$$ from $$$n$$$ if it's possible to do that or <span class="tex-font-style-tt">-1</span> if it's impossible to obtain $$$1$$$ from $$$n$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id009795490592979433" id="id005396524138547162" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009795490592979433">7
1
2
3
12
12345
15116544
387420489
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id004067449900392093" id="id0043696100505218216" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004067449900392093">0
-1
2
-1
-1
12
36
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>Consider the sixth test case of the example. The answer can be obtained by the following sequence of moves from the given integer $$$15116544$$$:</p><ol> <li> Divide by $$$6$$$ and get $$$2519424$$$; </li><li> divide by $$$6$$$ and get $$$419904$$$; </li><li> divide by $$$6$$$ and get $$$69984$$$; </li><li> divide by $$$6$$$ and get $$$11664$$$; </li><li> multiply by $$$2$$$ and get $$$23328$$$; </li><li> divide by $$$6$$$ and get $$$3888$$$; </li><li> divide by $$$6$$$ and get $$$648$$$; </li><li> divide by $$$6$$$ and get $$$108$$$; </li><li> multiply by $$$2$$$ and get $$$216$$$; </li><li> divide by $$$6$$$ and get $$$36$$$; </li><li> divide by $$$6$$$ and get $$$6$$$; </li><li> divide by $$$6$$$ and get $$$1$$$. </li></ol></div>