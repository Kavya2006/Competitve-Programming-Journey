<h2><a href="https://codeforces.com/contest/1485/problem/A" target="_blank" rel="noopener noreferrer">1485A — Add and Divide</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1485A](https://codeforces.com/contest/1485/problem/A) |

## Topics
`brute force` `greedy` `math` `number theory`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Add and Divide</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You have two positive integers $$$a$$$ and $$$b$$$.</p><p>You can perform two kinds of operations:</p><ul> <li> $$$a = \lfloor \frac{a}{b} \rfloor$$$ (replace $$$a$$$ with the integer part of the division between $$$a$$$ and $$$b$$$) </li><li> $$$b=b+1$$$ (increase $$$b$$$ by $$$1$$$) </li></ul><p>Find the minimum number of operations required to make $$$a=0$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases.</p><p>The only line of the description of each test case contains two integers $$$a$$$, $$$b$$$ ($$$1 \le a,b \le 10^9$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print a single integer: the minimum number of operations required to make $$$a=0$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id009673500403797869" id="id0013172549755521368" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009673500403797869">6
9 2
1337 1
1 1
50000000 4
991026972 997
1234 5678
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0011120486735574542" id="id006671318145309986" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0011120486735574542">4
9
2
12
3
1
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, one of the optimal solutions is:</p><ol> <li> Divide $$$a$$$ by $$$b$$$. After this operation $$$a = 4$$$ and $$$b = 2$$$. </li><li> Divide $$$a$$$ by $$$b$$$. After this operation $$$a = 2$$$ and $$$b = 2$$$. </li><li> Increase $$$b$$$. After this operation $$$a = 2$$$ and $$$b = 3$$$. </li><li> Divide $$$a$$$ by $$$b$$$. After this operation $$$a = 0$$$ and $$$b = 3$$$. </li></ol></div>