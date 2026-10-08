<h2><a href="https://codeforces.com/contest/1474/problem/B" target="_blank" rel="noopener noreferrer">1474B — Different Divisors</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1474B](https://codeforces.com/contest/1474/problem/B) |

## Topics
`binary search` `constructive algorithms` `greedy` `math` `number theory`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Different Divisors</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Positive integer $$$x$$$ is called <span class="tex-font-style-it">divisor</span> of positive integer $$$y$$$, if $$$y$$$ is divisible by $$$x$$$ without remainder. For example, $$$1$$$ is a divisor of $$$7$$$ and $$$3$$$ is not divisor of $$$8$$$.</p><p>We gave you an integer $$$d$$$ and asked you to find <span class="tex-font-style-bf">the smallest</span> positive integer $$$a$$$, such that </p><ul><li> $$$a$$$ has at least $$$4$$$ divisors; </li><li> difference between any two divisors of $$$a$$$ is at least $$$d$$$.</li></ul></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 3000$$$) — the number of test cases.</p><p>The first line of each test case contains a single integer $$$d$$$ ($$$1 \leq d \leq 10000$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case print one integer $$$a$$$ — the answer for this test case.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id009822280914819813" id="id005522670520516431" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009822280914819813">2
1
2
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0099850560965153" id="id006323345263104866" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0099850560965153">6
15
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, integer $$$6$$$ have following divisors: $$$[1, 2, 3, 6]$$$. There are $$$4$$$ of them and the difference between any two of them is at least $$$1$$$. There is no smaller integer with at least $$$4$$$ divisors.</p><p>In the second test case, integer $$$15$$$ have following divisors: $$$[1, 3, 5, 15]$$$. There are $$$4$$$ of them and the difference between any two of them is at least $$$2$$$.</p><p>The answer $$$12$$$ is INVALID because divisors are $$$[1, 2, 3, 4, 6, 12]$$$. And the difference between, for example, divisors $$$2$$$ and $$$3$$$ is less than $$$d=2$$$.</p></div>