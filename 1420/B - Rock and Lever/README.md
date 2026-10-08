<h2><a href="https://codeforces.com/contest/1420/problem/B" target="_blank" rel="noopener noreferrer">1420B — Rock and Lever</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1420B](https://codeforces.com/contest/1420/problem/B) |

## Topics
`bitmasks` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Rock and Lever</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><div class="epigraph" bis_skin_checked="1"><div class="epigraph-text" bis_skin_checked="1"> <span class="tex-font-size-small"> "You must lift the dam. With a lever. I will give it to you.<p>You must block the canal. With a rock. I will not give the rock to you." </p></span></div></div><p>Danik urgently needs rock and lever! Obviously, the easiest way to get these things is to ask Hermit Lizard for them.</p><p>Hermit Lizard agreed to give Danik the lever. But to get a stone, Danik needs to solve the following task.</p><p>You are given a positive integer $$$n$$$, and an array $$$a$$$ of positive integers. The task is to calculate the number of such pairs $$$(i,j)$$$ that $$$i \lt j$$$ and $$$a_i$$$ $$$\&$$$ $$$a_j \ge a_i \oplus a_j$$$, where $$$\&$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#AND">bitwise AND operation</a>, and $$$\oplus$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR operation</a>.</p><p>Danik has solved this task. But can you solve it?</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>Each test contains multiple test cases.</p><p>The first line contains one positive integer $$$t$$$ ($$$1 \le t \le 10$$$) denoting the number of test cases. Description of the test cases follows.</p><p>The first line of each test case contains one positive integer $$$n$$$ ($$$1 \le n \le 10^5$$$) — length of the array.</p><p>The second line contains $$$n$$$ positive integers $$$a_i$$$ ($$$1 \le a_i \le 10^9$$$) — elements of the array.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For every test case print one non-negative integer — the answer to the problem.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0020546669497499703" id="id006279203197145944" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0020546669497499703">5
5
1 4 3 7 10
3
1 1 1
4
6 2 5 3
2
2 4
1
1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0010931953554758911" id="id000954677815649998" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0010931953554758911">1
3
2
0
0
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case there is only one pair: $$$(4,7)$$$: for it $$$4$$$ $$$\&$$$ $$$7 = 4$$$, and $$$4 \oplus 7 = 3$$$.</p><p>In the second test case all pairs are good.</p><p>In the third test case there are two pairs: $$$(6,5)$$$ and $$$(2,3)$$$.</p><p>In the fourth test case there are no good pairs.</p></div>