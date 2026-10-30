<h2><a href="https://codeforces.com/contest/1610/problem/C" target="_blank" rel="noopener noreferrer">1610C — Keshi Is Throwing a Party</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1610C](https://codeforces.com/contest/1610/problem/C) |

## Topics
`binary search` `greedy`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C. Keshi Is Throwing a Party</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Keshi is throwing a party and he wants everybody in the party to be happy.</p><p>He has $$$n$$$ friends. His $$$i$$$-th friend has $$$i$$$ dollars. </p><p>If you invite the $$$i$$$-th friend to the party, he will be happy only if at most $$$a_i$$$ people in the party are strictly richer than him and at most $$$b_i$$$ people are strictly poorer than him.</p><p>Keshi wants to invite as many people as possible. Find the maximum number of people he can invite to the party so that every invited person would be happy.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ $$$(1\le t\le 10^4)$$$ — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ $$$(1\le n\le 2 \cdot 10^5)$$$ — the number of Keshi's friends.</p><p>The $$$i$$$-th of the following $$$n$$$ lines contains two integers $$$a_i$$$ and $$$b_i$$$ $$$(0 \le a_i, b_i  \lt  n)$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases doesn't exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case print the maximum number of people Keshi can invite.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id004786480277467099" id="id007680133032527925" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004786480277467099">3
3
1 2
2 1
1 1
2
0 0
0 1
2
1 0
0 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0014965542117084674" id="id008589513672381459" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0014965542117084674">2
1
2
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, he invites the first and the second person. If he invites all of them, the third person won't be happy because there will be more than $$$1$$$ person poorer than him.</p></div>