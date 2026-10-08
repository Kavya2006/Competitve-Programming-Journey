<h2><a href="https://codeforces.com/contest/1364/problem/B" target="_blank" rel="noopener noreferrer">1364B — Most socially-distanced subsequence</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1364B](https://codeforces.com/contest/1364/problem/B) |

## Topics
`greedy` `two pointers`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Most socially-distanced subsequence</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Given a permutation $$$p$$$ of length $$$n$$$, find its subsequence $$$s_1$$$, $$$s_2$$$, $$$\ldots$$$, $$$s_k$$$ of length at least $$$2$$$ such that:</p><ul> <li> $$$|s_1-s_2|+|s_2-s_3|+\ldots+|s_{k-1}-s_k|$$$ is as big as possible over all subsequences of $$$p$$$ with length at least $$$2$$$. </li><li> Among all such subsequences, choose the one whose length, $$$k$$$, is as small as possible. </li></ul><p>If multiple subsequences satisfy these conditions, you are allowed to find any of them.</p><p>A sequence $$$a$$$ is a subsequence of an array $$$b$$$ if $$$a$$$ can be obtained from $$$b$$$ by deleting some (possibly, zero or all) elements.</p><p>A permutation of length $$$n$$$ is an array of length $$$n$$$ in which every element from $$$1$$$ to $$$n$$$ occurs exactly once.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 2 \cdot 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$2 \le n \le 10^5$$$) — the length of the permutation $$$p$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$p_1$$$, $$$p_2$$$, $$$\ldots$$$, $$$p_{n}$$$ ($$$1 \le p_i \le n$$$, $$$p_i$$$ are distinct) — the elements of the permutation $$$p$$$.</p><p><span class="tex-font-style-bf">The sum of $$$n$$$ across the test cases doesn't exceed $$$10^5$$$.</span></p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, the first line should contain the length of the found subsequence, $$$k$$$. The second line should contain $$$s_1$$$, $$$s_2$$$, $$$\ldots$$$, $$$s_k$$$ — its elements.</p><p>If multiple subsequences satisfy these conditions, you are allowed to find any of them.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0042108634502249864" id="id003155221497392524" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0042108634502249864">2
3
3 2 1
4
1 3 4 2
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0011060887793267926" id="id003950816514541543" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0011060887793267926">2
3 1 
3
1 4 2 
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, there are $$$4$$$ subsequences of length at least $$$2$$$:</p><ul> <li> $$$[3,2]$$$ which gives us $$$|3-2|=1$$$. </li><li> $$$[3,1]$$$ which gives us $$$|3-1|=2$$$. </li><li> $$$[2,1]$$$ which gives us $$$|2-1|=1$$$. </li><li> $$$[3,2,1]$$$ which gives us $$$|3-2|+|2-1|=2$$$. </li></ul><p>So the answer is either $$$[3,1]$$$ or $$$[3,2,1]$$$. Since we want the subsequence to be as short as possible, the answer is $$$[3,1]$$$.</p></div>