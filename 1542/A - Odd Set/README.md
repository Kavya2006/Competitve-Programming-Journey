<h2><a href="https://codeforces.com/contest/1542/problem/A" target="_blank" rel="noopener noreferrer">1542A — Odd Set</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1542A](https://codeforces.com/contest/1542/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Odd Set</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given a multiset (i. e. a set that can contain multiple equal integers) containing $$$2n$$$ integers. Determine if you can split it into exactly $$$n$$$ pairs (i. e. each element should be in exactly one pair) so that the sum of the two elements in each pair is <span class="tex-font-style-bf">odd</span> (i. e. when divided by $$$2$$$, the remainder is $$$1$$$).</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The input consists of multiple test cases. The first line contains an integer $$$t$$$ ($$$1\leq t\leq 100$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$1\leq n\leq 100$$$).</p><p>The second line of each test case contains $$$2n$$$ integers $$$a_1,a_2,\dots, a_{2n}$$$ ($$$0\leq a_i\leq 100$$$) — the numbers in the set.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print "<span class="tex-font-style-tt">Yes</span>" if it can be split into exactly $$$n$$$ pairs so that the sum of the two elements in each pair is <span class="tex-font-style-bf">odd</span>, and "<span class="tex-font-style-tt">No</span>" otherwise. You can print each letter in any case.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0049919776799011484" id="id005750653307139239" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0049919776799011484">5
2
2 3 4 5
3
2 3 4 5 5 5
1
2 4
1
2 3
4
1 5 3 2 6 7 3 4
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id004669879790179493" id="id0025782152718825313" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004669879790179493">Yes
No
No
Yes
No
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, a possible way of splitting the set is $$$(2,3)$$$, $$$(4,5)$$$.</p><p>In the second, third and fifth test case, we can prove that there isn't any possible way.</p><p>In the fourth test case, a possible way of splitting the set is $$$(2,3)$$$.</p></div>