<h2><a href="https://codeforces.com/contest/1430/problem/C" target="_blank" rel="noopener noreferrer">1430C — Numbers on Whiteboard</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1430C](https://codeforces.com/contest/1430/problem/C) |

## Topics
`constructive algorithms` `data structures` `greedy` `implementation` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C. Numbers on Whiteboard</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Numbers $$$1, 2, 3, \dots n$$$ (each integer from $$$1$$$ to $$$n$$$ once) are written on a board. In one operation you can erase any two numbers $$$a$$$ and $$$b$$$ from the board and write one integer $$$\frac{a + b}{2}$$$ <span class="tex-font-style-it">rounded up</span> instead.</p><p>You should perform the given operation $$$n - 1$$$ times and make the resulting number that will be left on the board as small as possible. </p><p>For example, if $$$n = 4$$$, the following course of action is optimal:</p><ol> <li> choose $$$a = 4$$$ and $$$b = 2$$$, so the new number is $$$3$$$, and the whiteboard contains $$$[1, 3, 3]$$$; </li><li> choose $$$a = 3$$$ and $$$b = 3$$$, so the new number is $$$3$$$, and the whiteboard contains $$$[1, 3]$$$; </li><li> choose $$$a = 1$$$ and $$$b = 3$$$, so the new number is $$$2$$$, and the whiteboard contains $$$[2]$$$. </li></ol><p>It's easy to see that after $$$n - 1$$$ operations, there will be left only one number. Your goal is to minimize it.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases.</p><p>The only line of each test case contains one integer $$$n$$$ ($$$2 \le n \le 2 \cdot 10^5$$$) — the number of integers written on the board initially.</p><p>It's guaranteed that the total sum of $$$n$$$ over test cases doesn't exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, in the first line, print the minimum possible number left on the board after $$$n - 1$$$ operations. Each of the next $$$n - 1$$$ lines should contain two integers — numbers $$$a$$$ and $$$b$$$ chosen and erased in each operation.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id005360180338463112" id="id007636018580583024" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005360180338463112">1
4
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id006193055237681767" id="id009464410747811172" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006193055237681767">2
2 4
3 3
3 1
</pre></div></div></div>