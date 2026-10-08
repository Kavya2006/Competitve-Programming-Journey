<h2><a href="https://codeforces.com/contest/1269/problem/A" target="_blank" rel="noopener noreferrer">1269A — Equation</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1269A](https://codeforces.com/contest/1269/problem/A) |

## Topics
`brute force` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Equation</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>3 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Let's call a positive integer <span class="tex-font-style-bf">composite</span> if it has at least one divisor other than $$$1$$$ and itself. For example:</p><ul> <li> the following numbers are composite: $$$1024$$$, $$$4$$$, $$$6$$$, $$$9$$$; </li><li> the following numbers are not composite: $$$13$$$, $$$1$$$, $$$2$$$, $$$3$$$, $$$37$$$. </li></ul><p>You are given a positive integer $$$n$$$. Find two composite integers $$$a,b$$$ such that $$$a-b=n$$$.</p><p>It can be proven that solution always exists.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The input contains one integer $$$n$$$ ($$$1 \leq n \leq 10^7$$$): the given integer.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Print two composite integers $$$a,b$$$ ($$$2 \leq a, b \leq 10^9, a-b=n$$$).</p><p>It can be proven, that solution always exists.</p><p>If there are several possible solutions, you can print any. </p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id00049463363004216165" id="id009028352823262189" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00049463363004216165">1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0014740391713789502" id="id004570603337860092" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0014740391713789502">9 8
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id005061223615399635" id="id0008393010373918097" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005061223615399635">512
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id00654909978572052" id="id0015433157930557695" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00654909978572052">4608 4096
</pre></div></div></div>