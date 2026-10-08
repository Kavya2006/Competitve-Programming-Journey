<h2><a href="https://codeforces.com/contest/1380/problem/A" target="_blank" rel="noopener noreferrer">1380A — Three Indices</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1380A](https://codeforces.com/contest/1380/problem/A) |

## Topics
`brute force` `data structures`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Three Indices</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given a permutation $$$p_1, p_2, \dots, p_n$$$. Recall that sequence of $$$n$$$ integers is called a <span class="tex-font-style-it">permutation</span> if it contains all integers from $$$1$$$ to $$$n$$$ exactly once.</p><p>Find three indices $$$i$$$, $$$j$$$ and $$$k$$$ such that: </p><ul> <li> $$$1 \le i  \lt  j  \lt  k \le n$$$; </li><li> $$$p_i  \lt  p_j$$$ and $$$p_j  \gt  p_k$$$. </li></ul> Or say that there are no such indices.</div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$T$$$ ($$$1 \le T \le 200$$$) — the number of test cases.</p><p>Next $$$2T$$$ lines contain test cases — two lines per test case. The first line of each test case contains the single integer $$$n$$$ ($$$3 \le n \le 1000$$$) — the length of the permutation $$$p$$$.</p><p>The second line contains $$$n$$$ integers $$$p_1, p_2, \dots, p_n$$$ ($$$1 \le p_i \le n$$$; $$$p_i \neq p_j$$$ if $$$i \neq j$$$) — the permutation $$$p$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case: </p><ul> <li> if there are such indices $$$i$$$, $$$j$$$ and $$$k$$$, print <span class="tex-font-style-tt">YES</span> (case insensitive) and the indices themselves; </li><li> if there are no such indices, print <span class="tex-font-style-tt">NO</span> (case insensitive). </li></ul><p>If there are multiple valid triples of indices, print any of them.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id005578478962170345" id="id008014116714273795" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005578478962170345">3
4
2 1 4 3
6
4 6 1 2 5 3
5
5 3 1 2 4
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0031855266845646557" id="id0041468722313411255" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0031855266845646557">YES
2 3 4
YES
3 5 6
NO
</pre></div></div></div>