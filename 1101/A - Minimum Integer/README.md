<h2><a href="https://codeforces.com/contest/1101/problem/A" target="_blank" rel="noopener noreferrer">1101A — Minimum Integer</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1101A](https://codeforces.com/contest/1101/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Minimum Integer</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given $$$q$$$ queries in the following form:</p><p><span class="tex-font-style-it">Given three integers $$$l_i$$$, $$$r_i$$$ and $$$d_i$$$, find minimum <span class="tex-font-style-bf">positive</span> integer $$$x_i$$$ such that it is divisible by $$$d_i$$$ and it does not belong to the segment $$$[l_i, r_i]$$$</span>.</p><p>Can you answer all the queries?</p><p><span class="tex-font-style-it">Recall that a number $$$x$$$ belongs to segment $$$[l, r]$$$ if $$$l \le x \le r$$$</span>.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$q$$$ ($$$1 \le q \le 500$$$) — the number of queries.</p><p>Then $$$q$$$ lines follow, each containing a query given in the format $$$l_i$$$ $$$r_i$$$ $$$d_i$$$ ($$$1 \le l_i \le r_i \le 10^9$$$, $$$1 \le d_i \le 10^9$$$). $$$l_i$$$, $$$r_i$$$ and $$$d_i$$$ are integers.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each query print one integer: the answer to this query.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id002900946498942635" id="id0018107857001335415" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id002900946498942635">5
2 4 2
5 10 4
3 10 1
1 2 3
4 6 5
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id004738852678491825" id="id009642406125603622" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004738852678491825">6
4
1
3
10
</pre></div></div></div>