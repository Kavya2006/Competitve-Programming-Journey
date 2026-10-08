<h2><a href="https://codeforces.com/contest/1806/problem/A" target="_blank" rel="noopener noreferrer">1806A — Walking Master</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1806A](https://codeforces.com/contest/1806/problem/A) |

## Topics
`geometry` `greedy` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Walking Master</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>1024 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>YunQian is standing on an infinite plane with the Cartesian coordinate system on it. In one move, she can move to the diagonally adjacent point on the top right or the adjacent point on the left.</p><p>That is, if she is standing on point $$$(x,y)$$$, she can either move to point $$$(x+1,y+1)$$$ or point $$$(x-1,y)$$$.</p><p>YunQian initially stands at point $$$(a,b)$$$ and wants to move to point $$$(c,d)$$$. Find the minimum number of moves she needs to make or declare that it is impossible.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1\le t\le 10^4$$$) — the number of test cases. The description of test cases follows.</p><p>The first line and only line of each test case contain four integers $$$a$$$, $$$b$$$, $$$c$$$, $$$d$$$ ($$$-10^8\le a,b,c,d\le 10^8$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, if it is possible to move from point $$$(a,b)$$$ to point $$$(c,d)$$$, output the minimum number of moves. Otherwise, output $$$-1$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0017963627467500043" id="id004920690087035787" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0017963627467500043"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">6</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">-1 0 -1 2</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">0 0 4 5</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">-2 -1 1 1</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">-3 2 -3 2</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">2 -1 -1 -1</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">1 1 0 2</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id00006470737101447077" id="id005412470685709305" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00006470737101447077">4
6
-1
0
3
3
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, one possible way using $$$4$$$ moves is $$$(-1,0)\to (0,1)\to (-1,1)\to (0,2)\to (-1,2)$$$. It can be proven that it is impossible to move from point $$$(-1,0)$$$ to point $$$(-1,2)$$$ in less than $$$4$$$ moves.</p></div>