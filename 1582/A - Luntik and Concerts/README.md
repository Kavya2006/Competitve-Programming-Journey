<h2><a href="https://codeforces.com/contest/1582/problem/A" target="_blank" rel="noopener noreferrer">1582A — Luntik and Concerts</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1582A](https://codeforces.com/contest/1582/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Luntik and Concerts</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Luntik has decided to try singing. He has $$$a$$$ one-minute songs, $$$b$$$ two-minute songs and $$$c$$$ three-minute songs. He wants to distribute all songs into two concerts such that every song should be included to exactly one concert.</p><p>He wants to make the absolute difference of durations of the concerts as small as possible. The duration of the concert is the sum of durations of all songs in that concert.</p><p>Please help Luntik and find the minimal possible difference in minutes between the concerts durations.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases.</p><p>Each test case consists of one line containing three integers $$$a, b, c$$$ $$$(1 \le a, b, c \le 10^9)$$$ — the number of one-minute, two-minute and three-minute songs.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case print the minimal possible difference in minutes between the concerts durations.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id009438710051416122" id="id007332954172603983" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009438710051416122">4
1 1 1
2 1 3
5 5 5
1 1 2
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id004186284203461357" id="id00008452924617637914" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004186284203461357">0
1
0
1
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, Luntik can include a one-minute song and a two-minute song into the first concert, and a three-minute song into the second concert. Then the difference will be equal to $$$0$$$.</p><p>In the second test case, Luntik can include two one-minute songs and a two-minute song and a three-minute song into the first concert, and two three-minute songs into the second concert. The duration of the first concert will be $$$1 + 1 + 2 + 3 = 7$$$, the duration of the second concert will be $$$6$$$. The difference of them is $$$|7-6| = 1$$$.</p></div>