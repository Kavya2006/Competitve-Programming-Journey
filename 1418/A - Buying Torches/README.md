<h2><a href="https://codeforces.com/contest/1418/problem/A" target="_blank" rel="noopener noreferrer">1418A — Buying Torches</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1418A](https://codeforces.com/contest/1418/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Buying Torches</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are playing a very popular game called Cubecraft. Initially, you have one stick and want to craft $$$k$$$ torches. One torch can be crafted using <span class="tex-font-style-bf">one stick and one coal</span>.</p><p>Hopefully, you've met a very handsome wandering trader who has two trade offers:</p><ul> <li> exchange $$$1$$$ stick for $$$x$$$ sticks (you lose $$$1$$$ stick and gain $$$x$$$ sticks). </li><li> exchange $$$y$$$ sticks for $$$1$$$ coal (you lose $$$y$$$ sticks and gain $$$1$$$ coal). </li></ul><p>During one trade, you can use <span class="tex-font-style-bf">only one</span> of these two trade offers. You can use each trade offer any number of times you want to, in any order.</p><p>Your task is to find the minimum number of trades you need to craft at least $$$k$$$ torches. The answer always exists under the given constraints.</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 2 \cdot 10^4$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The only line of the test case contains three integers $$$x$$$, $$$y$$$ and $$$k$$$ ($$$2 \le x \le 10^9$$$; $$$1 \le y, k \le 10^9$$$) — the number of sticks you can buy with one stick, the number of sticks required to buy one coal and the number of torches you need, respectively.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print the answer: the minimum number of trades you need to craft at least $$$k$$$ torches. The answer always exists under the given constraints.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0042029969415113955" id="id005777213041703273" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0042029969415113955">5
2 1 5
42 13 24
12 11 12
1000000000 1000000000 1000000000
2 1000000000 1000000000
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id005342665294069981" id="id004713891015427034" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005342665294069981">14
33
25
2000000003
1000000001999999999
</pre></div></div></div>