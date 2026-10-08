<h2><a href="https://codeforces.com/contest/1679/problem/B" target="_blank" rel="noopener noreferrer">1679B — Stone Age Problem</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1679B](https://codeforces.com/contest/1679/problem/B) |

## Topics
`data structures` `implementation`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Stone Age Problem</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Once upon a time Mike and Mike decided to come up with an outstanding problem for some stage of ROI (rare olympiad in informatics). One of them came up with a problem prototype but another stole the idea and proposed that problem for another stage of the same olympiad. Since then the first Mike has been waiting for an opportunity to propose the original idea for some other contest... Mike waited until this moment!</p><p>You are given an array $$$a$$$ of $$$n$$$ integers. You are also given $$$q$$$ queries of two types:</p><ul> <li> Replace $$$i$$$-th element in the array with integer $$$x$$$. </li><li> Replace each element in the array with integer $$$x$$$. </li></ul><p>After performing each query you have to calculate the sum of all elements in the array.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains two integers $$$n$$$ and $$$q$$$ ($$$1 \le n, q \le 2 \cdot 10^5$$$) — the number of elements in the array and the number of queries, respectively.</p><p>The second line contains $$$n$$$ integers $$$a_1, \ldots, a_n$$$ ($$$1 \le a_i \le 10^9$$$) — elements of the array $$$a$$$.</p><p>Each of the following $$$q$$$ lines contains a description of the corresponding query. Description begins with integer $$$t$$$ ($$$t \in \{1, 2\}$$$) which denotes a type of the query:</p><ul> <li> If $$$t = 1$$$, then two integers $$$i$$$ and $$$x$$$ are following ($$$1 \le i \le n$$$, $$$1 \le x \le 10^9$$$) — position of replaced element and it's new value. </li><li> If $$$t = 2$$$, then integer $$$x$$$ is following ($$$1 \le x \le 10^9$$$) — new value of each element in the array. </li></ul></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Print $$$q$$$ integers, each on a separate line. In the $$$i$$$-th line print the sum of all elements in the array after performing the first $$$i$$$ queries.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id009056481605437436" id="id007278199502340366" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009056481605437436">5 5
1 2 3 4 5
1 1 5
2 10
1 5 11
1 4 1
2 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009817753712536106" id="id0001491327678613974" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009817753712536106">19
50
51
42
5
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>Consider array from the example and the result of performing each query:</p><ol> <li> Initial array is $$$[1, 2, 3, 4, 5]$$$. </li><li> After performing the first query, array equals to $$$[5, 2, 3, 4, 5]$$$. The sum of all elements is $$$19$$$. </li><li> After performing the second query, array equals to $$$[10, 10, 10, 10, 10]$$$. The sum of all elements is $$$50$$$. </li><li> After performing the third query, array equals to $$$[10, 10, 10, 10, 11$$$]. The sum of all elements is $$$51$$$. </li><li> After performing the fourth query, array equals to $$$[10, 10, 10, 1, 11]$$$. The sum of all elements is $$$42$$$. </li><li> After performing the fifth query, array equals to $$$[1, 1, 1, 1, 1]$$$. The sum of all elements is $$$5$$$. </li></ol></div>