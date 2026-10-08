<h2><a href="https://codeforces.com/contest/1582/problem/B" target="_blank" rel="noopener noreferrer">1582B — Luntik and Subsequences</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1582B](https://codeforces.com/contest/1582/problem/B) |

## Topics
`combinatorics` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Luntik and Subsequences</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Luntik came out for a morning stroll and found an array $$$a$$$ of length $$$n$$$. He calculated the sum $$$s$$$ of the elements of the array ($$$s= \sum_{i=1}^{n} a_i$$$). Luntik calls a subsequence of the array $$$a$$$ <span class="tex-font-style-it">nearly full</span> if the sum of the numbers in that subsequence is equal to $$$s-1$$$.</p><p>Luntik really wants to know the number of <span class="tex-font-style-it">nearly full</span> subsequences of the array $$$a$$$. But he needs to come home so he asks you to solve that problem!</p><p>A sequence $$$x$$$ is a subsequence of a sequence $$$y$$$ if $$$x$$$ can be obtained from $$$y$$$ by deletion of several (possibly, zero or all) elements.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases. The next $$$2 \cdot t$$$ lines contain descriptions of test cases. The description of each test case consists of two lines.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 60$$$) — the length of the array.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$0 \le a_i \le 10^9$$$) — the elements of the array $$$a$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case print the number of <span class="tex-font-style-it">nearly full</span> subsequences of the array.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id000031883892739276165" id="id006970376664634198" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id000031883892739276165">5
5
1 2 3 4 5
2
1000 1000
2
1 0
5
3 0 2 1 1
5
2 1 0 3 0
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009675923687026383" id="id005156845947125482" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009675923687026383">1
0
2
4
4
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, $$$s=1+2+3+4+5=15$$$, only $$$(2,3,4,5)$$$ is a nearly full subsequence among all subsequences, the sum in it is equal to $$$2+3+4+5=14=15-1$$$.</p><p>In the second test case, there are no nearly full subsequences.</p><p>In the third test case, $$$s=1+0=1$$$, the nearly full subsequences are $$$(0)$$$ and $$$()$$$ (the sum of an empty subsequence is $$$0$$$).</p></div>