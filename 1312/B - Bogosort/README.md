<h2><a href="https://codeforces.com/contest/1312/problem/B" target="_blank" rel="noopener noreferrer">1312B — Bogosort</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1312B](https://codeforces.com/contest/1312/problem/B) |

## Topics
`constructive algorithms` `sortings`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Bogosort</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given an array $$$a_1, a_2, \dots , a_n$$$. Array is good if for each pair of indexes $$$i  \lt  j$$$ the condition $$$j - a_j \ne i - a_i$$$ holds. Can you shuffle this array so that it becomes good? To shuffle an array means to reorder its elements arbitrarily (leaving the initial order is also an option).</p><p>For example, if $$$a = [1, 1, 3, 5]$$$, then shuffled arrays $$$[1, 3, 5, 1]$$$, $$$[3, 5, 1, 1]$$$ and $$$[5, 3, 1, 1]$$$ are good, but shuffled arrays $$$[3, 1, 5, 1]$$$, $$$[1, 1, 3, 5]$$$ and $$$[1, 1, 5, 3]$$$ aren't.</p><p>It's guaranteed that it's always possible to shuffle an array to meet this condition.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases.</p><p>The first line of each test case contains one integer $$$n$$$ ($$$1 \le n \le 100$$$) — the length of array $$$a$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots , a_n$$$ ($$$1 \le a_i \le 100$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case print the shuffled version of the array $$$a$$$ which is good.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0029397153556881483" id="id009103027515473113" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0029397153556881483">3
1
7
4
1 1 3 5
6
3 2 1 5 6 4
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id00633242330543998" id="id005142404982754278" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00633242330543998">7
1 5 1 3
2 4 6 1 3 5
</pre></div></div></div>